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

/* this is the head of the global list -- too lazy to do anything more */
static XPA xpahead=NULL;

/* globals for the xpa environment, controlled by environment variables */
static int stimeout=XPA_SHORT_TIMEOUT; 	/* select, gets timeout in secs */
static int ltimeout=XPA_LONG_TIMEOUT; 	/* fillbuf timeout in secs */
static int ctimeout=XPA_CONNECT_TIMEOUT;/* local xpans connect */
static int verbosity=XPA_VERBOSITY;	/* 0=quiet, 1=normal, 2=full */
static int guseacl=1;		/* 0=don't use acls, 1=enable acls */
static int etimestamp=0;	/* 0=don't timestamp errors, 1=do timestamp */
static int nsregister=1;	/* 0=don't register with xpans, 1=register */
static int sigusr1=1;		/* 0=don't use sigusr1, 1=enable sigusr1 */
static int vercheck=1;		/* 0=don't check version, 1=check version */
static char *tmpdir=NULL;  	/* temporary dir for logs. etc. */
#if HAVE_ATEXIT
static int atexitinit=0;	/* whether atexit has been registered */
#endif

/* variables used by all XPAs in this process */
static char activefds[FD_SETSIZE];
static char nsmethod[SZ_LINE];
static char nsusers[SZ_LINE];

/* global method type: unix or inet */
static int mtype=0;

/* width of select channel flag */
static int swidth=FD_SETSIZE;

/* defined in tcp.c */
extern int use_localhost;

/* erro code strings -- must match the error codes in xpap.h */
char *xpaMessbuf[] = {
  "oh, what a mess we've made!",
  "authentication failed",
  "xpa connection refused",
  "can't resolve host name for xpa",
  "can't read initialization info for xpa",
  "invalid xpa command in initialization string",
  "no receive function defined for this xpa",
  "no send function defined for this xpa",
  "no info function defined for this xpa",
  "undefined command for this xpa",
  "missing command for this xpa",
  "name does not match target template",
  "can't create data channel socket",
  "could not read data buf (possible timeout)",
  "illegal command or command switch"
};

/* temp static time buffer */
static char ctimebuf[SZ_LINE];

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAProxyConnect
 *
 * Purpose:	connect to a client (in proxy mode)
 *
 * Returns:	0 if successfull, otherwise -1
 *
 *----------------------------------------------------------------------------
 */

#ifdef ANSI_FUNC
static int 
XPAProxyConnect(XPA xpa, char *method, 
		unsigned int *rip, unsigned short *rport, char *rname)
#else
static int XPAProxyConnect(xpa, method, rip, rport, rname)
     XPA xpa;
     char *method;
     unsigned int *rip;
     unsigned short *rport; 
     char *rname;
#endif
{
  int ofd;
  int tries=0;
  int keep_alive=1;
  unsigned int ip;
  unsigned short port;
  struct sockaddr_in sock_in;
#if HAVE_SYS_UN_H
  struct sockaddr_un sock_un;
#endif

  FPRINTF((stderr, "%sXPAProxyConnect to %s\n", _sp, method));
  /* initialize results */
  if( rip )   *rip = 0;
  if( rport ) *rport = 0;
  if( rname ) *rname = '\0';

  switch(XPAMethod(method)){
  case XPA_INET:
again1:
    if( !XPAParseIpPort(method, &ip, &port) ){
      goto error;
    }
    /* use $localhost over $host (we don't trust host to be correct) */
    if( (ip == gethostip("$host")) && (tries == 0) ){
      ip = gethostip("$localhost");
    }
    /* connect to the server before we go further */
    if( (ofd = xsocket(AF_INET, SOCK_STREAM, 0)) < 0 ){
      PERROR(("XPAProxyConnect: socket()"));
      goto error;
    }
    setsockopt(ofd, SOL_SOCKET, SO_KEEPALIVE,
	       (char *)&keep_alive, sizeof(keep_alive));
    memset((char *)&sock_in, 0, sizeof(sock_in));
    sock_in.sin_family = AF_INET;
    sock_in.sin_addr.s_addr = htonl(ip);
    sock_in.sin_port = htons(port);
    /* make the connection with the server */
    if(connect(ofd, (struct sockaddr *)&sock_in, sizeof(sock_in))<0){
      xclose(ofd);
      /* if localhost doesn't work, make one try with the host ip */
      /* we also try again just in case there was an odd error such
	 as "permission denied", which we have seen once or twice */
      if( tries < 2 ){
	tries++;
	goto again1;
      }
      /* give up */
      else{
	PERROR(("XPAProxyConnect: connect()"));
	goto error;
      }
    }
    break;
#if HAVE_SYS_UN_H
  case XPA_UNIX:
again2:
    ip = 0;
    port = 0;
    /* open a socket and fill in socket information */
    if( (ofd = xsocket(AF_UNIX, SOCK_STREAM, 0)) < 0 ){
      goto error;
    }
    setsockopt(ofd, SOL_SOCKET, SO_KEEPALIVE,
	       (char *)&keep_alive, sizeof(keep_alive));
    memset((char *)&sock_un, 0, sizeof(sock_un));
    sock_un.sun_family = AF_UNIX;
    strcpy(sock_un.sun_path, method);
    /* make the connection with the server */
    if(connect(ofd, (struct sockaddr *)&sock_un, sizeof(sock_un))<0){
      xclose(ofd);
      /* Unix sockets get ECONNREFUSED when the listen queue is full,
	 so we try a few times to give the server a chance to recover */
      if( (xerrno == ECONNREFUSED) && (tries < XPA_RETRIES) ){
	tries++;
	XPASleep(10);
	goto again2;
      }
      /* give up */
      else{
	goto error;
      }
    }
    break;
#endif
  default:
    goto error;
  }

  /* fill in blansk */
  if( rip )   *rip   = ip;
  if( rport ) *rport = port;
  if( rname ){
    strncpy(rname, method, SZ_LINE-1);
    rname[SZ_LINE-1] = '\0';
  }
  return(ofd);

error:
  return -1;
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	CommNew
 *
 * Purpose:	allocate a new comm record and add to end of list
 *
 * Returns:	allocated comm record
 *
 *----------------------------------------------------------------------------
 */

#ifdef ANSI_FUNC
static XPAComm 
CommNew (XPA xpa, int fd, unsigned int ip, int port, char *name, NS ns)
#else
static XPAComm CommNew(xpa, fd, ip, port, name, ns)
     XPA xpa;
     int fd;
     unsigned int ip;
     int port;
     char *name;
     NS ns;
#endif
{
  XPAComm comm, cur;
  int i;
  socklen_t slen;
  struct sockaddr_in sock_in;
#if HAVE_SYS_UN_H
  struct sockaddr_un sock_un;
#endif

  /* create the comm struct */
  if( (comm = (XPAComm)xcalloc(1, sizeof(XPACommRec))) == NULL )
    return(NULL);
  
  /* if fd < 0, we accept a connection to get the fd */
  if( fd < 0 ){
    /* accept the connection */
    switch(mtype){
    case XPA_INET:
      while( 1 ){
	slen = sizeof(struct sockaddr_in);
        if((comm->cmdfd=xaccept(xpa->fd,(struct sockaddr *)&sock_in,&slen))>=0){
	  comm->cmdip = ntohl(sock_in.sin_addr.s_addr);
	  comm->cmdport = ntohs(sock_in.sin_port);
	  break;
	}
	else{
	  if( xerrno == EINTR )
	    continue;
	  else{
	    xfree(comm);
	    return(NULL);
	  }
	}
      }
      break;
#if HAVE_SYS_UN_H
    case XPA_UNIX:
      while( 1 ){
	slen = sizeof(struct sockaddr_un);
	if((comm->cmdfd=xaccept(xpa->fd,(struct sockaddr *)&sock_un,&slen))>=0){
	  comm->cmdname = xstrdup(sock_un.sun_path);
	  break;
	}
	else{
	  if( xerrno == EINTR )
	    continue;
	  else{
	    xfree(comm);
	    return(NULL);
	  }
	}
      }
      break;
#endif
    default:
      xfree(comm);
      return(NULL);
    }
  }
  /* all info is supplied */
  else{
    switch(mtype){
    case XPA_INET:
      comm->cmdip = ip;
      comm->cmdport = port;
      break;
    case XPA_UNIX:
      comm->cmdname = xstrdup(name);
      break;
    }
    comm->cmdfd = fd;
    /* store name server record */
    comm->ns = ns;
  }

  /* set back pointer */
  /* make sure we close on exec */
  xfcntl(comm->cmdfd, F_SETFD, FD_CLOEXEC);
  /* mark data socket with impossible value */
  comm->datafd = -1;
  /* default is to ack */
  comm->ack = 1;
  /* set default cendian flag */
  comm->cendian = "?";
  /* clear the acl flags */
  for(i=0; i<XPA_CMDS+1; i++){
    comm->acl[i] = -1;
  }

  /* add this comm to end of list of comms */
  if( xpa->commhead == NULL ){
    xpa->commhead = comm;
  }
  else{
    for(cur=xpa->commhead; cur->next!=NULL; cur=cur->next){
      ;
    }
    cur->next = comm;
  }

  /* we might have to add this fd specially to a non-select event loop */
  if( xpa->seladd )
    comm->selcptr = (xpa->seladd)(xpa, comm->cmdfd);

  /* make this fd active */
  XPAActive(xpa, comm, 1);

  FPRINTF((stderr, "%sCommNew: ip=%x port=%d fd=%d\n", _sp,
	   comm->cmdip, comm->cmdport, comm->cmdfd));

  /* return the good news */
  return(comm);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	CommFree
 *
 * Purpose:	free a comm record and remove from list
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void 
CommFree (XPA xpa, XPAComm comm, int flag)
#else
static void CommFree(xpa, comm, flag)
     XPA xpa;
     XPAComm comm;
     int flag;
#endif
{
  XPAComm cur;

  if( !comm )
    return;

  FPRINTF((stderr, "%sCommFree: ip=%x port=%d fd=%d dfd=%d\n", _sp,
	   comm->cmdip, comm->cmdport, comm->cmdfd, comm->datafd));
  /* remove from list of this xpa's comms */
  if( xpa ){
    if( xpa->commhead ){
      if( xpa->commhead == comm ){
	xpa->commhead = comm->next;
      }
      else{
	for(cur=xpa->commhead; cur!=NULL; cur=cur->next){
	  if( cur->next == comm ){
	    cur->next = comm->next;
	    break;
	  }
	}
      }
    }
  }
  /* must check all xpas */
  else{
    for(xpa=xpahead; xpa!=NULL; xpa=xpa->next){
      if( xpa->commhead ){
	if( xpa->commhead == comm ){
	  xpa->commhead = comm->next;
	}
	else{
	  for(cur=xpa->commhead; cur!=NULL; cur=cur->next){
	    if( cur->next == comm ){
	      cur->next = comm->next;
	      break;
	    }
	  }
	}
      }
    }
  }

  /* close socket connections */
  if( flag && (comm->cmdfd >= 0) ){
    FPRINTF((stderr, "%sCommFree closing cmd fd: %d\n", _sp, comm->cmdfd));
    /* remove from active */
    if( comm->cmdfd < FD_SETSIZE )
	activefds[comm->cmdfd] = 0;
    /* delete the comm cmd fd specially from a non-select event loop */
    if( xpa && xpa->seldel && comm->selcptr ){
      (xpa->seldel)(comm->selcptr);
      comm->selcptr = NULL;
    }
    /* close file */
    xclose(comm->cmdfd);
  }
  /* close data channel */
  XPACloseData(xpa, comm);
  /* if we have a file name (unix sockets), free it */
  if( comm->cmdname != NULL ){
    unlink(comm->cmdname);
    xfree(comm->cmdname);
  }
  if( comm->dataname != NULL ){
    unlink(comm->dataname);
    xfree(comm->dataname);
  }

  /* free up the space */
  if( comm->id != NULL )        xfree(comm->id);
  if( comm->info != NULL )      xfree(comm->info);
  if( comm->target != NULL )    xfree(comm->target);
  if( comm->paramlist != NULL ) xfree(comm->paramlist);

  /* this comm is no longer associated with an ns */
  if( comm->ns ){
    comm->ns->nproxy -= 1;
  }

  /* disassociate from parent xpa */
  if( xpa ){
    xpa->comm = NULL;
  }

  /* free up structure */
  xfree(comm);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPANSOpen
 *
 * Purpose:	open a connection to the name service
 *
 * Returns:	connection fd on success, -1 on failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static NS
XPANSOpen (XPA xpa, char *host, int force)
#else
static NS XPANSOpen(xpa, host, force)
     XPA xpa;
     char *host;
     int force;
#endif
{
  int i;
  int status;
  int xnsfd=0;
  int keep_alive=1;
  int tries=0;
  int ip=0;
  int dowarn=0;
  int contmode=XPA_CONNECT_TIMEOUT_MODE;
  unsigned short xnsport=0;
  unsigned int xnsip=0;
  static int errinit=0;
  char *s;
  char *path;
  char *method;
  char nscmd[SZ_LINE];
  char tbuf[SZ_LINE];
  char tbuf2[SZ_LINE];
  struct sockaddr_in sock_in;
  struct passwd *pw;
#if HAVE_SYS_UN_H
  struct sockaddr_un sock_un;
#endif
  char *findname=NULL;
  NS ns, cur;

  /* get name server method */
  method = XPANSMethod(host, 0);

  /* if the name service already is open, just return fd */
  if( xpa ){
    for(ns=xpa->nshead; ns!=NULL; ns=ns->next){
      if( !strcmp(ns->method, method) ){
	/* if forcing, see if the connection is valid */
	if( force >= 0 ){
	  if( (XPAPuts(xpa, ns->fd, "status\n", stimeout) >0)     &&
	      (XPAGets(xpa, ns->fd, tbuf, SZ_LINE, stimeout) >0)  && 
	      !strncmp(tbuf, "XPA$OK", 6)		     ){
	    FPRINTF((stderr, "%sXPANSOpen: found existing ns: %s\n",
		     _sp, ns->method));
	    return ns;
	  }
	  /* found the ns, but its not open */
	  else{
	    FPRINTF((stderr, "%sXPANSOpen: existing ns is dead: %s\n",
		     _sp, ns->method));
	    XPANSClose(xpa, ns);
	    break;
	  }
	}
	/* just return whatever we have if we are not forcing */
	else{
	  return ns;
	}
      }
    }
  }

  /* if no existing ns and flag is negative, we are done */
  if( force == -1 )
    return(NULL);

  /* we always make up the command afresh */
  *nscmd = '\0';

  /* get users for this user */
  if( (s=(char *)getenv("XPA_NSUSERS")) != NULL )
    strncpy(nsusers, s, SZ_LINE-1);
  /* default is just this use's userrname, from the environment */
  else if( (s=(char *)getenv("LOGNAME")) != NULL )
    strncpy(nsusers, s, SZ_LINE-1);
#if HAVE_MINGW32==0
  /* this is a last resort */
  else if( (pw=getpwuid(geteuid())) )
    strncpy(nsusers, pw->pw_name, SZ_LINE-1);
#endif
  /* if nothing good has happened, make it "all" */
  if( *nsusers == '\0' )
    strcpy(nsusers, "*");
  /* null-terminate string */
  nsusers[SZ_LINE-1] = '\0';

  /* set up communications socket for this method */
  switch(mtype){
  case XPA_INET:
again1:
    XPAParseIpPort(method, &xnsip, &xnsport);
    /* use $localhost over $host (we do not trust host to be correct) */
    if( (xnsip == gethostip("$host")) && (tries == 0) ){
      xnsip = gethostip("$localhost");
    }
    if( xnsip == 0 ){
      fprintf(stderr,
	      "XPA$ERROR: invalid host name specified: %s.\n", method);
      return(NULL);
    }
    if( (xnsfd = xsocket(AF_INET, SOCK_STREAM, 0)) < 0 )
      goto nons;
    memset((char *)&sock_in, 0, sizeof(sock_in));
    sock_in.sin_family = AF_INET;
    sock_in.sin_addr.s_addr = htonl(xnsip);
    sock_in.sin_port = htons(xnsport);
    /* try connecting to the name server */
    if( ctimeout <= 0 ) contmode = 0;
    switch(contmode){
    case 1:
#if HAVE_MINGW32==0
      status=alrmconnect(xnsfd, (void *)&sock_in, sizeof(sock_in), ctimeout);
#else
      status=noblkconnect(xnsfd, (void *)&sock_in, sizeof(sock_in), ctimeout);
#endif
      break;
    case 2:
      status=noblkconnect(xnsfd, (void *)&sock_in, sizeof(sock_in), ctimeout);
      break;
    default:
      status=connect(xnsfd, (struct sockaddr *)&sock_in, sizeof(sock_in));
      break;
    }
    if( status == 0 ){
      FPRINTF((stderr, "%sXPANSOpen: connect to xpans\n", _sp));
      goto okns;
    }
    else{
      xclose(xnsfd);
      /* if localhost doesn't work, make one try with the host ip */
      if( (xerrno == ECONNREFUSED) && (tries < 1) ){
	tries++;
	goto again1;
      }
    }
    break;
#if HAVE_SYS_UN_H
  case XPA_UNIX:
again2:
    /* open a socket and fill in socket information */
    if( (xnsfd = xsocket(AF_UNIX, SOCK_STREAM, 0)) < 0 )
      goto nons;
    memset((char *)&sock_un, 0, sizeof(sock_un));
    sock_un.sun_family = AF_UNIX;
    strcpy(sock_un.sun_path, method);
    xnsip = 0;
    /* try connecting to the name server */
    status=connect(xnsfd, (struct sockaddr *)&sock_un, sizeof(sock_un));
    if( status == 0 ){
      FPRINTF((stderr, "%sXPANSOpen: connect to xpans\n", _sp));
      goto okns;
    }
    else{
      xclose(xnsfd);
      /* Unix sockets get ECONNREFUSED when the listen queue is full,
	 so we try a few times to give the server a chance to recover */
      if( (xerrno == ECONNREFUSED) && (tries < XPA_RETRIES) ){
	tries++;
	XPASleep(10);
	goto again2;
      }
    }
    break;
#endif
  }

  /* if force is set, we try to start up the name server */
  if( force == 0 )
    goto noforce;

  /* make up the xpans command we will use */
  if( *nscmd == '\0' ){
    if(	(mtype == XPA_UNIX) || LOCALIP(xnsip) ){
      path = (char *)getenv("PATH");
      findname = (char *)Find(XPANSNAME, "x", NULL, path);
#if HAVE_CYGWIN
      /* this will help start up xpans under Windows */
      if( !findname ) findname = (char *)Find(XPANSNAME, "x", NULL, ".");
#endif
    }
    if( findname != NULL ){
      switch(mtype){
      case XPA_INET:
#if USE_LAUNCH
	/* change spaces to special launch space */
	for(i=0; i<strlen(findname); i++){
	  if( findname[i] == ' '){
	    findname[i] = LAUNCH_SPACE;
	  }
	}
	snprintf(nscmd, SZ_LINE, "%s -e -p %d -l %s/xpans_%d.log",
		 findname, xnsport, tmpdir, xnsport);
#else
	snprintf(nscmd, SZ_LINE, "\"%s\" -e -p %d -l %s/xpans_%d.log &\n",
		 findname, xnsport, tmpdir, xnsport);
#endif
	break;
#if HAVE_SYS_UN_H
      case XPA_UNIX:
#if USE_LAUNCH
	/* change spaces to special launch space */
	for(i=0; i<strlen(findname); i++){
	  if( findname[i] == ' '){
	    findname[i] = LAUNCH_SPACE;
	  }
	}
	snprintf(nscmd, SZ_LINE, "%s -e -f %s -l %s.log",
		 findname, method, method);
#else
	snprintf(nscmd, SZ_LINE, "\"%s\" -e -f %s -l %s.log &\n",
		 findname, method, method);
#endif
	break;
#endif
      }
    }
    else{
      *nscmd = '\0';
    }
  }

  /* did not find the name server -- start it up if we can, i.e.,
     if its on the same machine as we are on and we found it in the path */
  if((*nscmd != '\0') && ((mtype == XPA_UNIX) || LOCALIP(xnsip)) ){
    FPRINTF((stderr, "%sLaunching: %s\n", _sp, nscmd));
#if USE_LAUNCH
    if( Launch(nscmd, 0, NULL, NULL) != 0 )
      goto nons;
#else
    if( system(nscmd) != 0 )
      goto nons;
#endif
    /* enter loop looking to connect */
    for(tries=0; tries<XPA_RETRIES; tries++){
      switch(mtype){
      case XPA_INET:
	/* use $localhost alternately with $host */
	if( (xnsip == gethostip("$host")) && (tries % 2 == 0) ){
	  xnsip = gethostip("$localhost");
	}
	if( xnsip == 0 ){
	  fprintf(stderr,
		  "XPA$ERROR: invalid host name specified: %s.\n", method);
	  return(NULL);
	}
	if( (xnsfd = xsocket(AF_INET, SOCK_STREAM, 0)) < 0 )
	  goto nons;
	memset((char *)&sock_in, 0, sizeof(sock_in));
	sock_in.sin_family = AF_INET;
	sock_in.sin_addr.s_addr = htonl(xnsip);
	sock_in.sin_port = htons(xnsport);
	FPRINTF((stderr, "%sXPANSOPEN: attempting connect to %x\n",
		 _sp, xnsip));
	if(connect(xnsfd, (struct sockaddr *)&sock_in, sizeof(sock_in)) ==0)
	  goto okns;
	break;
#if HAVE_SYS_UN_H
      case XPA_UNIX:
	if( (xnsfd = xsocket(AF_UNIX, SOCK_STREAM, 0)) < 0 )
	  goto nons;
	if(connect(xnsfd, (struct sockaddr *)&sock_un, sizeof(sock_un)) ==0)
	  goto okns;
	break;
#endif
      }
      xclose(xnsfd);
      XPASleep(XPA_NSDELAY);
    }
    /* if we got here, we did not connect */
    goto nons;
  }
  /* name server is on a remote machine, so there is no hope */
  else{
    goto nons;
  }

okns:
  /* make sure we close on exec */
  xfcntl(xnsfd, F_SETFD, FD_CLOEXEC);
  setsockopt(xnsfd, SOL_SOCKET, SO_KEEPALIVE,
	     (char *)&keep_alive, sizeof(keep_alive));
  /* fill in new record */
  if( (ns = (NS)xcalloc(1, sizeof(NSRec))) == NULL ){
    xclose(xnsfd);
    return NULL;
  }
  ns->method = xstrdup(method);
  ns->host = xstrdup(host);
  ns->fd = xnsfd;
  FPRINTF((stderr, "%sXPANSOpen: host %s opened on fd %d\n", _sp, 
	   host?host:"<unknown>", xnsfd));
  switch(mtype){
  case XPA_INET:
    ns->ip = xnsip;
    ns->port = xnsport;
    break;
#if HAVE_SYS_UN_H
  case XPA_UNIX:
    ns->name = xstrdup(method);
    break;
#endif	
  }
  if( xpa ){
    /* add to list of name servers */
    if( xpa->nshead == NULL ){
      xpa->nshead = ns;
    }
    else{
      for(cur=xpa->nshead; cur->next!=NULL; cur=cur->next)
	;
      cur->next = ns;
    }
  }
  /* check version with xpans */
  snprintf(tbuf, SZ_LINE, "version %s\n", XPA_VERSION);
  if( (XPAPuts(xpa, ns->fd, tbuf, stimeout) >0)           &&
      (XPAGets(xpa, ns->fd, tbuf, SZ_LINE, stimeout) >0)  ){
    if( word(tbuf, tbuf2, &ip) ){
      if( !strcmp(tbuf2, "XPA$VERSION") ){
	if( word(tbuf, tbuf2, &ip) ){
	  /* version check: our server version should be <= xpans version */
	  dowarn = (XPAVersionCheck(XPA_VERSION, tbuf2)>0);
	}
	else{
	  strcpy(tbuf2, "unknown/pre-2.1 (noversion)");
	  dowarn = 1;
	}
      }
      else{
	strcpy(tbuf2, "unknown/pre-2.1 (badformat)");
	dowarn = 1;
      }
    }
    FPRINTF((stderr, "%sXPANSOpen: version info: %s\n", _sp, tbuf));
    if( dowarn ){
      XPAVersionWarn(XPA_VERSION, tbuf2);
    }
  }

  /* clean up */
  if( findname != NULL ) xfree(findname);
  return(ns);

nons:
  /* if we specified an explicit port, we don't need the name server,
     so don't bother with any warning or error messages */
  if( XPAPort(xpa) >0 )
    return NULL;
  switch(mtype){
  case XPA_INET:
    if( !errinit && verbosity ){
      if( LOCALIP(xnsip) ){
	fprintf(stderr,
		"XPA$WARNING: xpans needs to be running on this machine.\n");
      }
      else{
	fprintf(stderr,
		"XPA$WARNING: xpans needs to be running on machine: ");
	fprintf(stderr, "%s\n", getiphost(xnsip));
      }
    }
    break;
#if HAVE_SYS_UN_H
  case XPA_UNIX:
    if( !errinit && verbosity ){
      fprintf(stderr,
	      "XPA$WARNING: xpans needs to be running on this machine.\n");
    }
    break;
#endif
  default:
    break;
  }
  if( xpa && verbosity ){
    if( !errinit ){
      /* make up the command users will need to start xpans */
      if( *nscmd == '\0' ){
	switch(mtype){
	case XPA_INET:
	  snprintf(nscmd, SZ_LINE, "xpans -e -p %d -l %s/xpans_%d.log", 
		   xnsport, tmpdir, xnsport);
	  break;
#if HAVE_SYS_UN_H
	case XPA_UNIX:
	  snprintf(nscmd, SZ_LINE, "xpans -e -f %s -l %s.log", method, method);
	  break;
#endif
	}
      }
      fprintf(stderr, "Please start xpans using the command:\n\t%s\n", nscmd);
      fprintf(stderr, "Once xpans is running, register all xpas in this process using:\n");
      fprintf(stderr, "\txpaset -p %s -nsconnect\n", xpa->method);
    }
    fprintf(stderr, "For now, contact %s using:", xpa->name);
    fprintf(stderr, " xpaset %s .. or xpaget %s ..\n",
	    xpa->method, xpa->method);
  }
  errinit++;

noforce:
  if( findname != NULL ) xfree(findname);
  return(NULL);
}

/*
 *---------------------------------------------------------------------------
 *
 * Routine: 	_XPAFree
 *
 * Purpose: 	free up memory in the XPA record structure
 *		(internal version)
 *
 * Results:	0 on success, -1 for failure
 *
 *---------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
_XPAFree (XPA xpa)
#else
static int _XPAFree(xpa)
     XPA xpa;
#endif
{
  char tbuf[SZ_LINE];
  XPACmd cmd, tcmd;
  XPAComm comm, tcomm;
  XPAClip clip, tclip;
  NS ns, tns;

  /* make sure we have something to do */
  if( xpa == NULL )
    return(-1);

  FPRINTF((stderr, "%s_XPAFree: freeing xpa struct\n", _sp));
  /* remove this xpa from public availability */
  if( xpa->type != NULL )
    XPANSDel(xpa, NULL, NULL);

  /* free all sub-commands */
  for(cmd=xpa->commands; cmd!=NULL; ){
    tcmd = cmd->next;
    XPACmdDel(xpa, cmd);
    cmd = tcmd;
  }

  /* remove from list of xpas */
  XPAListDel(&xpahead, xpa);

  /* close down listening socket */
  if( xpa->fd >= 0 )
    xclose(xpa->fd);

  /* perform method-specific cleanup */
  switch(mtype){
#if HAVE_SYS_UN_H
  case XPA_UNIX:
    /* delete the unix socket files */
    unlink(xpa->method);
    snprintf(tbuf, SZ_LINE, "%s_data", xpa->method);
    unlink(tbuf);
    break;
#endif
  default:
    break;
  }

  /* free up space */
  if( xpa->version )	xfree(xpa->version);
  if( xpa->type )	xfree(xpa->type);
  if( xpa->method )	xfree(xpa->method);
  if( xpa->xclass ) 	xfree(xpa->xclass);
  if( xpa->name )	xfree(xpa->name);
  if( xpa->help )	xfree(xpa->help);
  if( xpa->sendian )	xfree(xpa->sendian);

  /* call the select free routine for the listening socket and loop type.
     we use an indirect routine to avoid having to link Xt, Tcl, etc. */
  if( xpa->seldel && xpa->selptr ){
    (xpa->seldel)(xpa->selptr);
    xpa->selptr = NULL;
  }

  /* close communication channels */
  for(comm=xpa->commhead; comm!=NULL; ){
    tcomm = comm->next;
    CommFree(xpa, comm, 1);
    comm = tcomm;
  }

  /* free up clipboards */
  for(clip=xpa->cliphead; clip!=NULL; ){
    tclip = clip->next;
    ClipBoardFree(xpa, clip);
    clip = tclip;
  }

  /* close down the name server and all of the remotes for this xpa */
  for(ns=xpa->nshead; ns!=NULL; ){
    tns = ns->next;
    XPANSClose(xpa, ns);
    ns = tns;
  }

  /* free up record struct */
  xfree((char *)xpa);

  return(0);
}

#if HAVE_ATEXIT
/*
 *---------------------------------------------------------------------------
 *
 * Routine: 	_XPAAtExit
 *
 * Purpose: 	XPA cleanup on exit
 *		The main purpose of this routine is to try to delete the
 *		unix socket files when an XPA server exits.
 *
 * Results:	none
 *
 *---------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void
_XPAAtExit (void)
#else
static void _XPAAtExit()
#endif
{
  XPA xpa, txpa;
  static int done=0;

  if( !done ){
    /* return if we were not initialized */
    if( !atexitinit ) return;
    /* return if I am not the process who initialized (I'm a child) */
    if( atexitinit != getpid() ) return;
    FPRINTF((stderr, "calling XPAAtExit\n"));
    for(xpa=xpahead; xpa!=NULL; ){
      /* use temp in case we destroy structure in the cleanup */
      txpa = xpa->next;
      _XPAFree(xpa);
      xpa = txpa;
    }
    /* platform-dependent cleanup */
    xsocketcleanup();
    /* done with cleanup */
    done++;
  }
}

/*
 *---------------------------------------------------------------------------
 *
 * Routine: 	XPAAtExit
 *
 * Purpose: 	set up XPA cleanup on exit
 *
 * Results:	none
 *
 *---------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
void
XPAAtExit (void)
#else
void XPAAtExit()
#endif
{
  if( !atexitinit ){
    atexit(_XPAAtExit);
    atexitinit = getpid();
  }
}

#endif

/*
 *----------------------------------------------------------------------------
 *
 *
 *			Semi-Public Routines
 *			(mainly used by xpaset and xpaget)
 *
 *
 *----------------------------------------------------------------------------
 */

/*
 *---------------------------------------------------------------------------
 *
 * Routine: 	_XPAValid
 *
 * Purpose: 	see if the xpa struct is valid
 *
 * Results:	1 on success, 0 for failure
 *
 *---------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
_XPAValid (XPA head, XPA xpa, char *type)
#else
int _XPAValid(head, xpa, type)
     XPA head;
     XPA xpa;
     char *type;
#endif
{
  XPA cur;

  if( xpa == NULL )
    return(0);
  for(cur=head; cur!=NULL; cur=cur->next){
    if( (cur == xpa) && !strcspn(cur->type, type) ){
      return(1);
    }
  }
  return(0);
}

/*
 *---------------------------------------------------------------------------
 *
 * Routine: 	XPAValid
 *
 * Purpose: 	see if the xpa struct is valid
 *
 * Results:	1 on success, 0 for failure
 *
 *---------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAValid (XPA xpa)
#else
int XPAValid(xpa)
     XPA xpa;
#endif
{
  if( _XPAValid(xpahead, xpa, XPA_ACLS) )
    return(1);
  else
    return(0);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAEndian
 *
 * Purpose:	semi-public routine to return the endian-ness of this
 *		machine
 *
 * Results:	0 if little endian, 1 if bigendian
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAEndian(void)
#else
int XPAEndian()
#endif
{
  union
  {
    long l;
    char c[sizeof (long)];
  } u;
  u.l = 1;
  return(u.c[sizeof (long) - 1] == 1);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAListHead
 *
 * Purpose:	semi-public routine to return the head of the xpa list
 *
 * Results:	XPA list pointer on success
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
XPA 
XPAListHead (void)
#else
XPA XPAListHead()
#endif
{
  return(xpahead);
}

/*
 *---------------------------------------------------------------------------
 *
 * Routine: 	XPAListAdd
 *
 * Purpose: 	add a member of an xpa list
 *
 * Results:	1 on success, 0 for failure
 *
 *---------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
void
XPAListAdd (XPA *head, XPA xpa)
#else
void XPAListAdd(head, xpa)
     XPA *head;
     XPA xpa;
#endif
{
  XPA cur;

  if( *head == NULL ){
    *head = xpa;
  }
  else{
    for(cur=*head; cur->next!=NULL; cur=cur->next)
      ;
    cur->next = xpa;
  }
}

/*
 *---------------------------------------------------------------------------
 *
 * Routine: 	XPAListDel
 *
 * Purpose: 	remove a member of an xpa list
 *
 * Results:	1 on success, 0 for failure
 *
 *---------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
void
XPAListDel (XPA *head, XPA xpa)
#else
void XPAListDel(head, xpa)
     XPA *head;
     XPA xpa;
#endif
{
  XPA cur;

  /* remove from list of xpas */
  if( *head ){
    if( *head == xpa ){
      *head = xpa->next;
    }
    else{
      for(cur=*head; cur!=NULL; cur=cur->next){
	if( cur->next == xpa ){
	  cur->next = xpa->next;
	  break;
	}
      }
    }
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAActive
 *
 * Purpose:	make the xpa, cmd and data fds active or inactive for select
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int
XPAActive (XPA xpa, XPAComm comm, int flag)
#else
int XPAActive(xpa, comm, flag)
     XPA xpa;
     XPAComm comm;
     int flag;
#endif
{
  int prev=0;

  /* sanity check */
  if( !xpa ) return(0);

  switch(flag){
  /* remove this xpa from the active list */
  case 0:
    if( (xpa->fd >= 0) && (xpa->fd < FD_SETSIZE) ){
      FPRINTF((stderr, "%sXPAActive: clearing fd %d\n", _sp, xpa->fd));
      prev = activefds[xpa->fd];
      activefds[xpa->fd] = 0;
      if( xpa->seloff && xpa->selptr )
	(xpa->seloff)(xpa->selptr);
    }
    if( comm ){
      if( (comm->cmdfd >= 0) && (comm->cmdfd < FD_SETSIZE) ){
	activefds[comm->cmdfd] = 0;
	if( xpa->seloff && comm->selcptr )
	  (xpa->seloff)(comm->selcptr);
      }
      if( (comm->datafd >= 0) && (comm->datafd < FD_SETSIZE) ){
	activefds[comm->datafd] = 0;
	if( xpa->seloff && comm->seldptr )
	  (xpa->seloff)(comm->seldptr);
      }
    }
    break;
  /* add this xpa/comm to the active list */
  case 1:
    if( (xpa->fd >= 0) && (xpa->fd < FD_SETSIZE) ){
      FPRINTF((stderr, "%sXPAActive: activating fd %d\n", _sp, xpa->fd));
      prev = activefds[xpa->fd];
      activefds[xpa->fd] = 1;
      if( xpa->selon && xpa->selptr )
	(xpa->selon)(xpa->selptr);
    }
    if( comm ){
      if( (comm->cmdfd >= 0) && (comm->cmdfd < FD_SETSIZE) ){
	activefds[comm->cmdfd] = 1;
	if( xpa->selon && comm->selcptr )
	  (xpa->selon)(comm->selcptr);
      }
      if( (comm->datafd >= 0) && (comm->datafd < FD_SETSIZE) ){
	activefds[comm->datafd] = 1;
	if( xpa->selon && comm->seldptr )
	  (xpa->selon)(comm->seldptr);
      }
    }
    break;
  default:
    break;
  }
  return(prev);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAActiveFd
 *
 * Purpose:	semi-public routine to return flag if fd is active
 *
 * Results:	1 is active, 0 is inactive
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int
XPAActiveFd (int fd)
#else
int XPAActiveFd(fd)
     int fd;
#endif
{
  if( (fd >= 0) && (fd < FD_SETSIZE) && (activefds[fd] > 0) )
    return(1);
  else
    return(0);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAAddSelect
 *
 * Purpose:	add one or more xpa sockets to the select flags
 *
 * Return:	number of xpas that were added to the select flags
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAAddSelect (XPA xpa, fd_set *readfdsptr)
#else
int XPAAddSelect(xpa, readfdsptr)
     XPA xpa;
     fd_set *readfdsptr;
#endif
{
  XPA cur;
  XPAComm comm;
  int got=0;

  /* better have some place to set the flags */
  if( readfdsptr == NULL )
    return(0);

  /* if a specific xpa was specified, just set its select flags */
  if( xpa != NULL ){
    if( XPAActiveFd(xpa->fd) ){
      FD_SET(xpa->fd, readfdsptr);
      got++;
      /* note that we only select on coms if the main fd is active */
      for(comm=xpa->commhead; comm!=NULL; comm=comm->next){
	if( XPAActiveFd(comm->cmdfd) ){
	  FD_SET(comm->cmdfd, readfdsptr);
	  got++;
	}
	if( XPAActiveFd(comm->datafd) && (comm->datafd != comm->cmdfd) ){
	  FD_SET(comm->datafd, readfdsptr);
	  got++;
	}
      }
    }
  }
  /* otherwise set select flags for all xpas */
  else{
    for(cur=xpahead; cur!=NULL; cur=cur->next){
      if( XPAActiveFd(cur->fd) ){
	FPRINTF((stderr, "%sXPAAddSelect: adding fd %d\n", _sp, cur->fd));
	FD_SET(cur->fd, readfdsptr);
	got++;
	/* note that we only select on coms if the main fd is active */
	for(comm=cur->commhead; comm!=NULL; comm=comm->next){
	  if( XPAActiveFd(comm->cmdfd) ){
	    FPRINTF((stderr, "%sXPAAddSelect: adding cmdfd %d\n",
		     _sp, comm->cmdfd));
	    FD_SET(comm->cmdfd, readfdsptr);
	    got++;
	  }
	  if( XPAActiveFd(comm->datafd) && (comm->datafd != comm->cmdfd) ){
	    FPRINTF((stderr, "%sXPAAddSelect: adding datafd %d\n",
		     _sp, comm->datafd));
	    FD_SET(comm->datafd, readfdsptr);
	    got++;
	  }
	}
      }
    }
  }
  return(got);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAProcessSelect
 *
 * Purpose:	process xpas that have pending reads or writes
 *
 * Return:	number of xpas processed
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAProcessSelect (fd_set *readfdsptr, int maxreq)
#else
int XPAProcessSelect(readfdsptr, maxreq)
     fd_set *readfdsptr;
     int maxreq;
#endif
{
  int got=0;
  XPA xpa;
  XPAComm comm;
#ifdef OLD
  XPA txpa;
  XPAComm tcomm;
#endif

  /* <= 0 means do all of them */
  if( maxreq < 0 ){
    maxreq = 0;
  }

again:
  for(xpa=xpahead; xpa!=NULL; xpa=xpa->next){
    /* handle command requests */
    for(comm=xpa->commhead; comm!=NULL; comm=comm->next){
      if( (comm->cmdfd >=0) && FD_ISSET(comm->cmdfd, readfdsptr) ){
	FD_CLR(comm->cmdfd, readfdsptr);
	XPAHandler(xpa, comm->cmdfd);
	got++;
	if( maxreq && (got >= maxreq) ) return(got);
	goto again;
      }
    }
    /* handle data requests */
    for(comm=xpa->commhead; comm!=NULL; comm=comm->next){
      if( (comm->datafd >=0) && FD_ISSET(comm->datafd, readfdsptr) ){
	FD_CLR(comm->datafd, readfdsptr);
	XPAHandler(xpa, comm->datafd);
	got++;
	if( maxreq && (got >= maxreq) ) return(got);
	goto again;
      }
    }
    /* handle new requests */
    if( (xpa->fd >= 0) && FD_ISSET(xpa->fd, readfdsptr) ){
      FD_CLR(xpa->fd, readfdsptr);
      XPAHandler(xpa, xpa->fd);
      got++;
      if( maxreq && (got >= maxreq) ) return(got);
      goto again;
    }
  }

#ifdef OLD
  for(xpa=xpahead; xpa!=NULL; ){
    txpa = xpa->next;
    /* handle command requests */
    for(comm=xpa->commhead; comm!=NULL; ){
      tcomm = comm->next;
      if( (comm->cmdfd >=0) && FD_ISSET(comm->cmdfd, readfdsptr) ){
	FD_CLR(comm->cmdfd, readfdsptr);
	FPRINTF((stderr, "%sXPAProcessSelect: cmd %d\n", _sp, comm->cmdfd));
	/* if we got an error on this xpa, skip processing rest of it */
	if( XPAHandler(xpa, comm->cmdfd) != XPA_RTN_OK ){
	  goto nextxpa;
	}
	got++;
	/* if we freed this xpa, skip processing rest of it */
	if( !_XPAValid(xpahead, xpa, XPA_ACLS) ){
	  goto nextxpa;
	}
	/* if we are have processed the max reqests, we are done */
	if( maxreq && (got >= maxreq) ){
	  return(got);
	}
      }
      comm = tcomm;
    }
    /* handle data requests */
    for(comm=xpa->commhead; comm!=NULL; ){
      tcomm = comm->next;
      if( (comm->datafd >=0) && FD_ISSET(comm->datafd, readfdsptr) ){
	FD_CLR(comm->datafd, readfdsptr);
	FPRINTF((stderr, "%sXPAProcessSelect: data %d\n", _sp, comm->datafd));
	/* if we got an error on this xpa, skip processing rest of it */
	if( XPAHandler(xpa, comm->datafd) != XPA_RTN_OK ){
	  goto nextxpa;
	}
	got++;
	/* if we freed this xpa, skip processing rest of it */
	if( !_XPAValid(xpahead, xpa, XPA_ACLS) ){
	  goto nextxpa;
	}
	/* if we are have processed the max reqests, we are done */
	if( maxreq && (got >= maxreq) ){
	  return(got);
	}
      }
      comm = tcomm;
    }
    /* handle new requests */
    if( (xpa->fd >= 0) && FD_ISSET(xpa->fd, readfdsptr) ){
      FD_CLR(xpa->fd, readfdsptr);
      FPRINTF((stderr, "%sXPAProcessSelect: xpa %d\n", _sp, xpa->fd));
      /* if we got an error on this xpa, skip processing rest of it */
      if( XPAHandler(xpa, xpa->fd) != XPA_RTN_OK ){
	goto nextxpa;
      }
      got++;
      /* if we freed this xpa, skip processing rest of it */
      if( !_XPAValid(xpahead, xpa, XPA_ACLS) ){
	goto nextxpa;
      }
      /* if we are have processed the max reqests, we are done */
      if( maxreq && (got >= maxreq) ){
	return(got);
      }
    }

nextxpa:
    /* must check to see if last xpa freed the next xpa */
    if( _XPAValid(xpahead, txpa, XPA_ACLS) )
      xpa = txpa;
    else
      break;
  }
#endif
  FPRINTF((stderr, "%sXPAProcessSelect: returns %d\n", _sp, got));
  return(got);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPACloseData
 *
 * Purpose:	close data fd if its not the cmd fd
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
void 
XPACloseData (XPA xpa, XPAComm comm)
#else
void XPACloseData(xpa, comm)
     XPA xpa;
     XPAComm comm;
#endif
{
  /* we close the data channel if its not the command channel */
  if( comm && (comm->datafd >=0)  ){
    if( comm->cmdfd != comm->datafd ){ 
      FPRINTF((stderr, "%sXPACloseData: close fd %d for cmd fd %d\n", _sp, 
	       comm->datafd, comm->cmdfd));
      /* remove from active */
      if( comm->datafd < FD_SETSIZE )
	activefds[comm->datafd] = 0;
      /* delete the comm data fd specially from a non-select event loop */
      if( xpa && xpa->seldel && comm->seldptr ){
	(xpa->seldel)(comm->seldptr);
	comm->seldptr = NULL;
      }
      /* close file */
      xclose(comm->datafd);
    }
    /* reset data channel to impossible value */
    comm->datafd = -1;
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAHandler
 *
 * Purpose:	handle one request for an xpaset or xpaget
 *
 * Return:	0 on success, xpa error code on failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAHandler (XPA xpa, int fd)
#else
int XPAHandler(xpa, fd)
     XPA xpa;
     int fd;
#endif
{
  char tbuf[SZ_LINE];
  char tbuf2[SZ_LINE];
  char lbuf[SZ_LINE];
  char cmd[SZ_LINE];
  char target[SZ_LINE];
  char method[SZ_LINE];
  char ctmpl[SZ_LINE];
  char ntmpl[SZ_LINE];
  char *paramlist=NULL;
  char *acl;
  int save_ack;
  int tcmd;
  int got=0;
  int lp=0;
  int cmdfd=-1;
  unsigned short port=0;
  unsigned int ip=0;
  struct timeval tv;
  XPAComm comm=NULL, tcomm=NULL, xcomm=NULL, ocomm=NULL;
  XPA txpa=NULL;
  NS ns=NULL;
  fd_set readfds;
  FPRINTF((stderr, "%sXPAHandler: entering with fd %d\n", _sp, fd));

  /*  this is a defensive measure: we have to guard against an external
      loop calling the XPA handler with a bogus XPA record. This has been
      seen with the Tcl event loop.
   */
  for(txpa=xpahead; txpa!=NULL; txpa=txpa->next){
    if( txpa == xpa ) break;
  }
  if( txpa == NULL ){
    FPRINTF((stderr, "%sXPAHandler: xpa record %p is not in list\n",
	     _sp, xpa));
    return(XPA_RTN_NOCMD);
  }

  /*  this is a defensive measure: we have to ensure that there really
   *  is a request read.  It is possible that a user-defined select loop
   *  might call us to handle a request that we had already handled
   *  (i.e. we handle a request but can't reset someone else's select flags)
   */
  FD_ZERO(&readfds);
  FD_SET(fd, &readfds);
  tv.tv_sec = 0;
  tv.tv_usec = 0;
  while( xselect(fd+1, &readfds, NULL, NULL, &tv) <=0 ){
    if( xerrno == EINTR )
      continue;
    FPRINTF((stderr, "%sXPAHandler: xpa fd %d is not ready\n", _sp, fd));
    return(XPA_RTN_NOCMD);
  }

  /* if this is a first connection, we create a new comm channel and exit */
  if( fd == xpa->fd ){
    if( (comm = CommNew(xpa, -1, 0, 0, NULL, NULL)) == NULL )
      return(XPA_RTN_NOCONN);
    /* Return to prevent xpa from finishing before other xpa's are started.
       Otherwise, each xpa's associated with a target template will be
       processed serially, which will defeat all the hard work done on
       the client side to send data to servers when they ask for it.
    */
    else{
      FPRINTF((stderr, "%sXPAHandler: returning after CommNew on fd %d\n",
	      _sp, fd));
      got = XPA_RTN_OK;
      goto end;
    }
  }

  /* look for a currently active comm channel: cmd or data */
  for(comm=xpa->commhead; comm!= NULL; comm=comm->next){
    if( (fd == comm->cmdfd) || (fd == comm->datafd) ){
      break;
    }
  }
  /* make sure we have something */
  if( comm == NULL ){
    /* read extraenous message */
    if( XPAGets(xpa, fd, tbuf, SZ_LINE, 1) >0 ){
      got = XPA_RTN_UNCMD;
      FPRINTF((stderr, "%sXPAHandler: fd %d received extra message:\n%s\n",
	      _sp,  fd, tbuf));
    }
    else{
      FPRINTF((stderr, "%sXPAHandler: no active comm record for fd %d\n",
	    _sp, fd));
      got = XPA_RTN_NOCMD2;
    }
    goto error;
  }
  /* but don't recurse */
  if( comm->status & XPA_STATUS_ACTIVE ){
    FPRINTF((stderr, "%sXPAHandler: fd %d returning to avoid recursion\n", 
	    _sp, fd));
    got = 0;
    goto end;
  }
  /* set current comm for this xpa */
  ocomm = xpa->comm;
  xpa->comm = comm;
  /* no message sent yet */
  comm->message = 0;

  /* data ready on data channel: go right to data handling section */
  if( fd == comm->datafd ){
    FPRINTF((stderr, "%sXPAHandler: jumping to cb for %d\n", _sp, fd));
    goto cb;
  }

  /* cmd channel: we are processing a new command */
retry:
  /* reset line buffer pointer for parsing */
  lp = 0;
  /* read next command */
  if( XPAGets(xpa, comm->cmdfd, lbuf, SZ_LINE, stimeout) <=0 ){
    FPRINTF((stderr, "%sXPAHandler: fd %d read EOF\n", _sp, comm->cmdfd));
    got = XPA_RTN_OK;
    goto eof;
  }
  /* new-lines imply we entered telnet mode on local host */
  else if( (*lbuf == '\n') || (*lbuf == '\r') || !strcmp(lbuf, "telnet") ){
    if( (mtype == XPA_UNIX) || LOCALIP(comm->cmdip) ){
      if( comm->telnet == 0 )
	XPAPuts(xpa, comm->cmdfd, "Entering telnet mode ...\n", stimeout);
      comm->telnet = 1;
      comm->ack = 0;
      comm->datafd = comm->cmdfd;
      stimeout = -1;
      goto retry;
    }
    else{
      XPAError(xpa, xpaMessbuf[XPA_RTN_NOCMD]);
      got = XPA_RTN_NOCMD;
      goto error;
    }
  }

  FPRINTF((stderr, "%sXPAHandler: fd %d read command: %s",
	  _sp, comm->cmdfd, lbuf));

  /* validate the command */
  if( !word(lbuf, cmd, &lp) ){
    FPRINTF((stderr, "%sXPAHandler: missing target for fd %d\n",
	     _sp, comm->cmd));
    XPAError(xpa, xpaMessbuf[XPA_RTN_NOCMD]);
    got = XPA_RTN_NOCMD;
    goto error;
  }

  /* send help message (local support only) */
  if( !strcmp(cmd, "help") ){
    if( (mtype == XPA_UNIX) || LOCALIP(comm->cmdip) ){
      XPAPuts(xpa, comm->cmdfd,
	   "xpaset|xpaget|xpainfo|xpaaccess [switches] class:name [params]\n",
	    stimeout);
      XPAPuts(xpa, comm->cmdfd,
	      "switches:\n",
	      stimeout);
      XPAPuts(xpa, comm->cmdfd,
	      "\t-a\t\tclient wants to accept() data connection\n",
	      stimeout);
      XPAPuts(xpa, comm->cmdfd,
	      "\t-e <b|l>\tclient endian-ness: big(b) or little(l)\n",
	      stimeout);
      XPAPuts(xpa, comm->cmdfd,
	      "\t-i id\t\tclient id string\n",
	      stimeout);
      XPAPuts(xpa, comm->cmdfd,
	      "\t-p <proxyinfo>\t\tfrom xpans (e.g., for proxy processing)\n",
	      stimeout);
      XPAPuts(xpa, comm->cmdfd,
	      "\t-n\t\tdon't ack back to client\n",
	      stimeout);
      XPAPuts(xpa, comm->cmdfd,
	      "\t-t\t\tenter telnet mode (local only)\n",
	      stimeout);
      /* we must be in telnet mode */
      comm->telnet = 1;
      comm->ack = 0;
      goto retry;
    }
    else{
      XPAError(xpa, xpaMessbuf[XPA_RTN_NOCMD]);
      got = XPA_RTN_NOCMD;
      goto error;
    }
  }

  /* determine which command was specified */
  if( !strcmp(cmd, "xpaset") )
    tcmd = XPA_SET;
  else if( !strcmp(cmd, "xpaget") )
    tcmd = XPA_GET;
  else if( !strcmp(cmd, "xpainfo") )
    tcmd = XPA_INFO;
  else if( !strcmp(cmd, "xpaaccess") )
    tcmd = XPA_ACCESS;
  else if( !strcmp(cmd, "xpadata") )
    tcmd = XPA_DATA;
  else if( !strcmp(cmd, "xpaaccept") )
    tcmd = XPA_ACCEPT;
  else if( !strcmp(cmd, "xpanagle") || !strcmp(cmd, "XPA$OK") )
    tcmd = XPA_NAGLE;
  else{
    FPRINTF((stderr, "%sXPAHandler: unknown command '%s' for fd %d\n",
	     _sp, cmd, comm->cmdfd));
    XPAError(xpa, xpaMessbuf[XPA_RTN_NOCMD]);
    got = XPA_RTN_NOCMD;
    goto error;
  }

  /* process switches */
  while( word(lbuf, tbuf, &lp) ){
    if( *tbuf != '-' )
      break;
    if( !strcmp(tbuf, "-a") ){
      comm->mode |= COMM_CONNECT;
    }
    else if( !strcmp(tbuf, "-e") ){
      if( word(lbuf, tbuf, &lp) ){
	if( *tbuf == 'b' )
	  comm->cendian = "big";
	else if( *tbuf == 'l' )
	  comm->cendian = "little";
      }
      else{
	got = XPA_RTN_ILLCMD;
	goto error;
      }
    }
    else if( !strcmp(tbuf, "-f") ){
      /* B.Schoenhammer@bit-field.de 2009-09-21 */
#if HAVE_MINGW32==0
      if( !word(lbuf, tbuf, &lp) || (sscanf(tbuf, "%p", &xcomm) != 1) ){
#else
      if( !word(lbuf, tbuf, &lp) || (sscanf(tbuf, "%x", &xcomm) != 1) ){
#endif
	got = XPA_RTN_ILLCMD;
	goto done;
      }
      if( !word(lbuf, tbuf, &lp) || ((cmdfd = atoi(tbuf)) < 0) ){
	got = XPA_RTN_ILLCMD;
	goto done;
      }
    }
    else if( !strcmp(tbuf, "-i") ){
      if( word(lbuf, tbuf, &lp) ){
	if( comm->id != NULL ) xfree(comm->id);
	comm->id = xstrdup(tbuf);
      }
      else{
	XPAError(xpa, xpaMessbuf[XPA_RTN_ILLCMD]);
	got = XPA_RTN_ILLCMD;
	goto error;
      }
    }
    else if( !strcmp(tbuf, "-n") ){
      comm->ack = 0;
    }
    else if( !strcmp(tbuf, "-p") ){
      if( word(lbuf, tbuf, &lp) ){
	if( comm->info != NULL ) xfree(comm->info);
	comm->info = xstrdup(tbuf);
      }
      else{
	XPAError(xpa, xpaMessbuf[XPA_RTN_ILLCMD]);
	got = XPA_RTN_ILLCMD;
	goto error;
      }
    }
    else if( !strcmp(tbuf, "-t") ){
      comm->telnet = 1;
    }
    else{
      break;
    }
  }

  /* make sure we have some sort of id */
  if( comm->id == NULL ){
    comm->id = xstrdup("?");
  }

  /* process nagle ack */
  if( tcmd == XPA_NAGLE ){
    /* if data is forthcoming, exit and wait for data */
    if( comm->usebuf ){
      got = XPA_RTN_OK;
      goto end;
    }
    /* go process callback */
    else{
      goto cb;
    }
  }

  /* connect (proxy) request: connect back to client */
  if( tcmd == XPA_ACCEPT ){
    FPRINTF((stderr, "%scmd is xpaaccept from client %d: %s", _sp, fd, lbuf));
    /* syntax: xpaaccept <method> ... */
    lp = 0;
    if( !word(lbuf, tbuf, &lp)      ||
	strcmp(tbuf, "xpaaccept")   ||
	!word(lbuf, method, &lp)    ){
      got = -1;
      goto error;
    }
    if( (cmdfd=XPAProxyConnect(xpa, method, &ip, &port, tbuf)) <0 ){
      FPRINTF((stderr, "%sXPAProxyConnect failed for: %d\n", _sp, fd));
      got = -1;
      goto error;
    }
    if( (tcomm = CommNew(xpa, cmdfd, ip, port, method, NULL)) == NULL ){
      got = XPA_RTN_NOCONN;
      goto error;
    } 
    else{
      /* now exit and wait for client to send command */
      FPRINTF((stderr,
	       "%sXPAHandler: fd %d exiting after proxy connect\n", _sp,
	       tcomm->cmdfd));
      got = XPA_RTN_OK;
      goto end;
    }
  }

  /* data request: find associated command request, and process the command */
  if( tcmd == XPA_DATA ){
    FPRINTF((stderr, "%sXPAHandler: processing data fd %d\n",
	     _sp, comm->cmdfd));
    /* find the cmd record with which this data is associated */
    for(tcomm=xpa->commhead; tcomm!= NULL; tcomm=tcomm->next){
      if( (tcomm == xcomm) && (tcomm->cmdfd == cmdfd) ){
	break;
      }
    }
    /* if we found an associated command, copy in data info and process */
    if( tcomm ){
      /* fill in command comm */
      tcomm->datafd = comm->cmdfd;
      tcomm->seldptr = comm->selcptr;
      if( tcomm->dataname ) xfree(tcomm->dataname);
      tcomm->dataname = xstrdup(comm->cmdname);
      /* done with data comm */
      CommFree(xpa, comm, 0);
      /* reset comm pointers */
      comm = tcomm;
      xpa->comm = comm;
      FPRINTF((stderr, "%sXPAHandler: found cmd fd %d for this data fd %d\n",
	       _sp, comm->cmdfd, comm->datafd));
      if( comm->cmd == XPA_SET ){
	FPRINTF((stderr, "%sXPAHandler: data %d returning await xpaset\n",
		 _sp, comm->datafd));
	got = XPA_RTN_OK;
	goto end;
      }
      else{
	FPRINTF((stderr, "%sXPAHandler: data %d going on to process data\n",
		 _sp, comm->datafd));
	goto cb;
      }
    }
    else{
      FPRINTF((stderr, "%sXPAHandler: data fd has no corresponding cmd %d\n",
	       _sp, comm->cmdfd));
      XPAError(xpa, xpaMessbuf[XPA_RTN_ILLCMD]);
      got = XPA_RTN_ILLCMD;
      goto error;
    }
  }

  /* for a command, the first non-switch word we found was the target */
  if( *tbuf == '\0' ){
    FPRINTF((stderr, "%sXPAHandler: missing target for fd %d\n",
	     _sp, comm->cmdfd));
    XPAError(xpa, xpaMessbuf[XPA_RTN_NOCMD]);
    got = XPA_RTN_NOCMD;
    goto error;
  }
  else{
    strcpy(target, tbuf);
  }

  /* validate the target (except for xpans for use as proxy) */
  if( strcmp(xpa->xclass, XPANS_CLASS) || strcmp(xpa->name, XPANS_NAME) ){
    XPAParseName(target, ctmpl, ntmpl, SZ_LINE);
    if( (strcmp(ctmpl,"?") && !tmatch(xpa->xclass, ctmpl)) || 
	(strcmp(ntmpl,"?") && !tmatch(xpa->name, ntmpl))   ){
      got = XPA_RTN_NOTARG;
      goto error;
    }
  }
  if( comm->target != NULL ) xfree(comm->target);
  comm->target = xstrdup(target);

  /* the rest of the input string is paramlist */
  paramlist = &(lbuf[lp]);
  nowhite(paramlist, paramlist);
  if( comm->paramlist != NULL ) xfree(comm->paramlist);
  comm->paramlist = xstrdup(paramlist);
  /* save command */
  comm->cmd = tcmd;

  FPRINTF((stderr,
	   "%sXPAHandler: processing command fd %d for target %s (%d)\n",
	   _sp, comm->cmdfd, target, comm->cmd));

  /* a reserved command can only be called from the same host as the server,
     or from local (unix) sockets */
  lp = 0;
  if( XPACmdLookupReserved(xpa, comm->paramlist, &lp) ){
    comm->mode |= COMM_RESERVED;
  }

  /* set up command-specific info */
  switch(comm->cmd){
  case XPA_SET:
    if( comm->mode & COMM_RESERVED ){
      comm->usebuf = 1;
      comm->useacl = guseacl && (mtype != XPA_UNIX);
      acl = "s";
    }
    else if( xpa->receive_callback ){
      comm->usebuf = (xpa->receive_mode & XPA_MODE_BUF);
      comm->useacl = guseacl && 
	(xpa->receive_mode & XPA_MODE_ACL) && (mtype != XPA_UNIX);
      acl = "s";
    }
    else{
      XPAError(xpa, xpaMessbuf[XPA_RTN_NOREC]);
      got = XPA_RTN_NOREC;
      goto error;
    }
    break;
  case XPA_GET:
    if( comm->mode & COMM_RESERVED ){
      comm->usebuf = 1;
      comm->useacl = guseacl && (mtype != XPA_UNIX);
      acl = "g";
    }
    else if( xpa->send_callback ){
      comm->usebuf = (xpa->send_mode & XPA_MODE_BUF);
      comm->useacl = guseacl &&
	(xpa->send_mode & XPA_MODE_ACL) && (mtype != XPA_UNIX);
      acl = "g";
    }
    else{
      XPAError(xpa, xpaMessbuf[XPA_RTN_NOSEND]);
      got = XPA_RTN_NOSEND;
      goto error;
    }
    break;
  case XPA_INFO:
    if( xpa->info_callback ){
      comm->usebuf = 0;
      comm->useacl = guseacl &&
	(xpa->info_mode & XPA_MODE_ACL) && (mtype != XPA_UNIX);
      acl = "i";
    }
    else{
      XPAError(xpa, xpaMessbuf[XPA_RTN_NOINFO]);
      got = XPA_RTN_NOINFO;
      goto error;
    }
    break;
  case XPA_ACCESS:
    comm->usebuf = 0;
    comm->useacl = guseacl && (mtype != XPA_UNIX);
    /* may as well check access mode as well */
    snprintf(tbuf2, SZ_LINE, "%sa%s", _sp, comm->paramlist?comm->paramlist:"");
    acl = tbuf2;
    break;
  default:
    FPRINTF((stderr, "%sXPAHandler: invalid access control check for fd %d\n",
	     _sp, comm->cmdfd));
    XPAError(xpa, xpaMessbuf[XPA_RTN_NOCMD]);
    got = XPA_RTN_NOCMD;
    goto error;
  }

  /* perform access authentication */
  if( comm->useacl ){
    /* determine acl for this ip, if necessary */
    if( comm->acl[comm->cmd] < 0 ){
      comm->acl[comm->cmd] = XPAAclCheck(xpa, comm->cmdip, acl);
    }
    /* check acl */
    if( comm->acl[comm->cmd] <= 0 ){
      FPRINTF((stderr, "%sXPAHandler: fd %d FAILED acl check\n",
	       _sp, comm->cmdfd));
      XPAError(xpa, xpaMessbuf[XPA_RTN_NOAUTH]);
      got = XPA_RTN_NOAUTH;
      goto error;
    }
    FPRINTF((stderr, "%sXPAHandler: fd %d passed acl check\n",
	     _sp, comm->cmdfd));
  }

  /* for telnet mode, just use cmdfd for data */
  if( comm->telnet ){
    comm->datafd = comm->cmdfd;
  }
  /* for xpainfo and no ack, just go to the vallback */
  else if( (comm->cmd == XPA_INFO) && !comm->ack ){
    goto cb;
  }
  /* in general, we must tell the client how we will handle data */
  else{
    if( comm->usebuf ){
      if( comm->mode & COMM_CONNECT ){
	snprintf(lbuf, SZ_LINE, "%s XPA$DATA accept %p %d (%s:%s %s)\n",
		 comm->id, comm,  comm->cmdfd,
		 xpa->xclass, xpa->name, xpa->method);
      }
      else{
	snprintf(lbuf, SZ_LINE, "%s XPA$DATA connect %p %d (%s:%s %s)\n",
		 comm->id, comm, comm->cmdfd,
		 xpa->xclass, xpa->name, xpa->method);
      }
    }
    /* no data channel being set up */
    else{
      snprintf(lbuf, SZ_LINE, "%s XPA$NODATA (%s:%s %s)\n",
	       comm->id, xpa->xclass, xpa->name, xpa->method);
    }
    FPRINTF((stderr, "%sXPAHandler: fd %d sends string: %s",
	     _sp, comm->cmdfd, lbuf));
    if( XPAPuts(xpa, comm->cmdfd, lbuf, stimeout) <= 0 ){
      FPRINTF((stderr, "%sXPAHandler: fd %d couldn't send string: %s",
	       _sp, comm->cmdfd, lbuf));
      got = -1;
      goto error;
    }
    /* now exit and wait for nagle ack and for client to send data */
    FPRINTF((stderr,
	     "%sXPAHandler: fd %d exiting to wait for nagle or connect req\n",
	     _sp, comm->cmdfd));
    got = XPA_RTN_OK;
    goto end;
  }

  /* data channel complete (or no data): ready to execute the user callback */
cb:  
  /* we are now active */
  comm->status |= XPA_STATUS_ACTIVE;

  /* remove the current comm from the list of active fds,
     in case the server callback re-enters the event loop */
  XPAActive(xpa, comm, 0);

  /* zero out buf and len, just to make sure (don't free buf, in case
     application is using previous) */
  comm->buf = NULL;
  comm->len = 0;

  /* if we are not ack'ing after callback, do it now so client can exit */
  /* but don't do this for xpainfo/noack */
  if( !comm->ack && (comm->cmd != XPA_INFO) ){
    FPRINTF((stderr, "%sXPAHandler: sending OK to non-acking client %d %d\n",
	     _sp,  comm->cmdfd, comm->datafd));
    comm->ack = 1;
    XPAOK(xpa);
    comm->ack = 0;
  }

  /* process command */
  switch(comm->cmd){
  case XPA_GET:
    FPRINTF((stderr,
	     "%sXPAHandler: processing xpaget for %d %d\n", _sp,
	     comm->cmdfd, comm->datafd));
    /* check for a reserved command */
    if( comm->mode & COMM_RESERVED ){
      got = XPASendCommands(xpa->send_data, xpa, comm->paramlist,
			    &(comm->buf), &(comm->len));
    }
    else{
      got = (xpa->send_callback)(xpa->send_data, xpa, comm->paramlist,
				  &(comm->buf), &(comm->len));
    }
    if( (got == 0) && (comm->buf != NULL) && (comm->len > 0) ){
      if( XPAPutBuf(xpa, comm->datafd, comm->buf, comm->len, ltimeout) < 0 ){
	PERROR(("XPAHandler write buf"));
	XPAError(xpa, "XPA could not write data to client");
	goto done;
      }
    }
    if( (xpa->send_mode & XPA_MODE_FREEBUF) && (comm->buf != NULL) ){
      if( xpa->comm->myfree != NULL ){
	if( xpa->comm->myfree_ptr != NULL ){
	  xpa->comm->myfree(xpa->comm->myfree_ptr);
	}
	else{
	  xpa->comm->myfree(comm->buf);
	}
      }
      else{
	xfree(comm->buf);
      }
    }
    /* send client a message, unless its already been done */
    if( !comm->message ){
      if( got )
	XPAError(xpa, "error detected in send callback routine");
      else
	XPAOK(xpa);
    }
    FPRINTF((stderr,
	     "%sXPAHandler: finished xpaget for %d %d\n", _sp,
	     comm->cmdfd, comm->datafd));
    break;
  case XPA_SET:
    FPRINTF((stderr,
	     "%sXPAHandler: processing xpaset for %d %d\n", _sp,
	     comm->cmdfd, comm->datafd));
    /* check for a reserved command */
    if( comm->mode & COMM_RESERVED ){
      got=XPAReceiveCommands(xpa->receive_data, xpa,
			     comm->paramlist, NULL, 0);
    }
    else{
      /* fill buf if necessary */
      if( (comm->datafd >= 0) &&
	  comm->usebuf && (xpa->receive_mode & XPA_MODE_FILLBUF) ){
	if(XPAGetBuf(xpa, comm->datafd, &(comm->buf), &(comm->len), -1) <0){
	  XPAError(xpa, xpaMessbuf[XPA_RTN_NODATA]);
	  FPRINTF((stderr, "%sXPAHandler: no data for XPAGetBuf on %d\n", _sp,
		   comm->datafd));
	  got = -1;
	  goto done;
	}
	else{
	  /* close the data fd now that we are done with it */
	  XPACloseData(xpa, comm);
	}
      }
      /* execute the receive callback */
      got = (xpa->receive_callback)(xpa->receive_data, xpa,
				     comm->paramlist, comm->buf, comm->len);
    }
    if( (xpa->receive_mode & XPA_MODE_FREEBUF) && (comm->buf != NULL) ){
      if( xpa->comm->myfree != NULL ){
	if( xpa->comm->myfree_ptr != NULL ){
	  xpa->comm->myfree(xpa->comm->myfree_ptr);
	}
	else{
	  xpa->comm->myfree(comm->buf);
	}
      }
      else{
	xfree(comm->buf);
      }
    }
    /* send client an error message, unless its already been done */
    if( !comm->message ){
      if( got ){
	XPAError(xpa, "error detected in receive callback routine");
      }
      else{
	XPAOK(xpa);
      }
    }
    FPRINTF((stderr,
	     "%sXPAHandler: finished xpaset for %d %d\n", _sp,
	     comm->cmdfd, comm->datafd));
    break;
  case XPA_INFO:
    /* send OK before callback because we do not want the client waiting */
    if( comm->ack )
      XPAOK(xpa);
    save_ack = comm->ack;
    /* don't ever ack in callback */
    comm->ack = 0;
    /* execute the info callback -- don't bother checking for errors */
    (xpa->info_callback)(xpa->info_data, xpa, comm->paramlist);
    comm->ack = save_ack;
    break;
  case XPA_ACCESS:
    /* return errors -- that how we know if we have access */
    comm->ack = 1;
    /* type is in paramlist */
    if( comm->paramlist && *comm->paramlist ){
      char *s;
      for(s=comm->paramlist; *s; s++){
	switch(*s){
	case 'g':
	  if( !xpa->send_callback ){
	    XPAError(xpa, "no send callback (i.e., can't xpaget)");
	    goto done;
	  }
	  break;
	case 'i':
	  if( !xpa->info_callback ){
	    XPAError(xpa, "no info callback (i.e., can't xpainfo)");
	    goto done;
	  }
	  break;
	case 's':
	  if( !xpa->receive_callback ){
	    XPAError(xpa, "no receive callback (i.e., can't xpaset)");
	    goto done;
	  }
	  break;
	case 'a':
	  break;
	default:
	  XPAError(xpa, "unknown xpa access type");
	  goto done;
	}
      }
      /* if we got here, its OK */
      XPAOK(xpa);
    }
    /* no type, anything is OK */
    else
      XPAOK(xpa);
    break;
  default:
    /* something is really wrong if we have no command  */
    FPRINTF((stderr, "%sXPAHandler: invalid command #%d for fd %d\n",
	     _sp, comm->cmd, comm->cmdfd));
    got = XPA_RTN_NOCMD;
    goto error;
    break;
  }

done:
  FPRINTF((stderr,
	   "%sXPAHandler: finished processing %d with status %d\n", _sp,
	   fd, got));
  /* add xpa back to list of active ones */
  XPAActive(xpa, comm, 1);

  /* finalize comm record */
  if( comm ){
    /* close data channel */
    XPACloseData(xpa, comm);
    /* xpa is no longer active */
    comm->status &= ~XPA_STATUS_ACTIVE;
  }

  /* join common code */
  goto end;

eof:
  /* on eof, free up comm */
  if( comm ){
    ns = comm->ns;
    CommFree(xpa, comm, 1);
    comm = NULL;
    if( ns && !ns->nproxy && !ns->nxpa ){
      FPRINTF((stderr, "%sXPAHandler: closing ns %s\n", _sp, ns->name));
      XPANSClose(xpa, ns);
    }
  }
  /* join common code */
  goto end;
  

error:
  FPRINTF((stderr, "%sXPAHandler ERROR: return code %d on %d\n",
	   _sp, got, fd));
  /* add xpa back to list of active ones (but not comm) */
  XPAActive(xpa, comm, 1);
  /* xpa is no longer using this comm */
  xpa->comm = NULL;
  /* don't accidentally close ns on error */
  if( comm ){
    if( comm->ns )
      CommFree(xpa, comm, 0);
    else
      CommFree(xpa, comm, 1);
    comm = NULL;
  }
  /* join common code */
  goto end;

end:
  /* if a free was requested by the callback, do it now when its safe */
  if( xpa->status & XPA_STATUS_FREE ){
    XPAFree(xpa);
  }
  /* restore old value of comm */
  else{
    xpa->comm = ocomm;
  }

  /* return the status */
  return(got);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAMode
 *
 * Purpose:	parse the mode string and set flags
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
void 
XPAMode (char *mode, int *flag, char *name, int mask, int def)
#else
void XPAMode(mode, flag, name, mask, def)
     char *mode;
     int *flag;
     char *name;
     int mask;
     int def;
#endif
{
  char tbuf[SZ_LINE];
  char s[SZ_LINE];

  /* keyword routine requires an input buffer that can be modified */
  if( mode && *mode ){
    strncpy(s, mode, SZ_LINE-1);
    s[SZ_LINE-1] = '\0';
  }
  else
    goto error;
  /* look for the keyword=<value> string */
  if( keyword(s, name, tbuf, SZ_LINE) ){
    if( istrue(tbuf) )
      *flag |= mask;
    else
      *flag &= ~mask;
    return;
  }
  else
    goto error;

error:
  if( def )
    *flag |= mask;
  else
    *flag &= ~mask;
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAShortTimeout
 *
 * Purpose:	return short (select, gets) timeout value
 *
 * Return:	timeout in seconds
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAShortTimeout (void)
#else
int XPAShortTimeout()
#endif
{
  return(stimeout);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPALongTimeout
 *
 * Purpose:	return long (fillbuf) timeout value
 *
 * Return:	timeout in seconds
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPALongTimeout (void)
#else
int XPALongTimeout()
#endif
{
  return(ltimeout);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAReceiveLTimeout
 *
 * Purpose:	modify long timeout value for this process
 *
 * Returns:	0 for success, -1 for failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAReceiveLTimeout (void *client_data, void *call_data, char *paramlist,
	       char *buf, size_t len)
#else
int XPAReceiveLTimeout(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char *buf;
     size_t len;
#endif
{
  XPA xpa = (XPA)call_data;
  char tbuf[SZ_LINE];
  char *s;

  if( paramlist && *paramlist ){
    strncpy(tbuf, paramlist, SZ_LINE-1);
    tbuf[SZ_LINE-1] = '\0';
    nocr(tbuf);
    culc(tbuf);
    if( !strcmp(tbuf, "reset") ){
      ltimeout = XPA_LONG_TIMEOUT;
      if( (s=(char *)getenv("XPA_LONG_TIMEOUT")) != NULL )
	ltimeout = atoi(s);
    }
    else{
      ltimeout = atoi(tbuf);
    }
    return(0);
  }
  else{
    XPAError(xpa, "missing long timeout value");
    return(-1);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPASendLTimeout
 *
 * Purpose:	return the long timeout for this process
 *
 * Returns:	0 for success, -1 for failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPASendLTimeout (void *client_data, void *call_data, char *paramlist,
	    char **buf, size_t *len)
#else
int XPASendLTimeout(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char **buf;
     size_t *len;
#endif
{
  XPA xpa = (XPA)call_data;
  char tbuf[SZ_LINE];

  snprintf(tbuf, SZ_LINE, "%d\n", ltimeout);
  send(xpa_datafd(xpa), tbuf, strlen(tbuf), 0);
  return(0);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAReceiveSTimeout
 *
 * Purpose:	modify short timeout value for this process
 *
 * Returns:	0 for success, -1 for failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAReceiveSTimeout (void *client_data, void *call_data, char *paramlist,
	       char *buf, size_t len)
#else
int XPAReceiveSTimeout(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char *buf;
     size_t len;
#endif
{
  XPA xpa = (XPA)call_data;
  char tbuf[SZ_LINE];
  char *s;

  if( paramlist && *paramlist ){
    strncpy(tbuf, paramlist, SZ_LINE-1);
    tbuf[SZ_LINE-1] = '\0';
    nocr(tbuf);
    culc(tbuf);
    if( !strcmp(tbuf, "reset") ){
      stimeout = XPA_SHORT_TIMEOUT;
      if( (s=(char *)getenv("XPA_SHORT_TIMEOUT")) != NULL )
	stimeout = atoi(s);
    }
    else{
      stimeout = atoi(tbuf);
    }
    return(0);
  }
  else{
    XPAError(xpa, "missing short timeout value");
    return(-1);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPASendSTimeout
 *
 * Purpose:	return the short timeout for this process
 *
 * Returns:	0 for success, -1 for failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPASendSTimeout (void *client_data, void *call_data, char *paramlist,
	    char **buf, size_t *len)
#else
int XPASendSTimeout(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char **buf;
     size_t *len;
#endif
{
  XPA xpa = (XPA)call_data;
  char tbuf[SZ_LINE];

  snprintf(tbuf, SZ_LINE, "%d\n", stimeout);
  send(xpa_datafd(xpa), tbuf, strlen(tbuf), 0);
  return(0);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAVerbosity
 *
 * Purpose:	return verbosity value
 *
 * Return:	verbosity value (0, 1, 2)
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAVerbosity (void)
#else
int XPAVerbosity()
#endif
{
  return(verbosity);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPASigusr1
 *
 * Purpose:	return flag for using sigusr1
 *
 * Return:	0 or 1
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPASigusr1 (void)
#else
int XPASigusr1()
#endif
{
  return(sigusr1);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAInitEnv
 *
 * Purpose:	initialize the xpa environment
 *
 * Return:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
void 
XPAInitEnv (void)
#else
void XPAInitEnv()
#endif
{
  char *s;

  if( !tmpdir ){
    /* determine the communication method */
    mtype=XPAMethod(NULL);
    /* enable access controls and port management */
    if( mtype != XPA_UNIX ){
      XPAAclNew(NULL, 0);
      XPAPortNew(NULL, 0);
    }
    /* set short (select,gets) timeout, if necessary */
    if( (s=(char *)getenv("XPA_SHORT_TIMEOUT")) != NULL )
      stimeout = atoi(s);
    /* set long (fillbuf) timeout, if necessary */
    if( (s=(char *)getenv("XPA_LONG_TIMEOUT")) != NULL )
      ltimeout = atoi(s);
    /* set xpans connect timeout, if necessary */
    if( (s=(char *)getenv("XPA_CONNECT_TIMEOUT")) != NULL )
      ctimeout = atoi(s);
    /* set verbosity level, if necessary */
    if( (s=(char *)getenv("XPA_VERBOSITY")) != NULL ){
      if( istrue(s) )
	verbosity = XPA_VERBOSITY;
      else if( isfalse(s) )
	verbosity = 0;
      else
	verbosity = atoi(s);
      if( verbosity < 0 )
	verbosity = 0;
    }
    /* check for acl enable/disable */
    if( (s=(char *)getenv("XPA_ACL")) != NULL )
      guseacl = istrue(s);
    /* check for timestamp on errors */
    if( (s=(char *)getenv("XPA_TIMESTAMP_ERRORS")) != NULL )
      etimestamp = istrue(s);
    /* check for xpans register flag */
    if( (s=(char *)getenv("XPA_NSREGISTER")) != NULL )
      nsregister = istrue(s);
    /* check for use of siguser1 */
    if( (s=(char *)getenv("XPA_SIGUSR1")) != NULL )
      sigusr1 = istrue(s);
    /* check for version checking */
    if( (s=(char *)getenv("XPA_VERSIONCHECK")) != NULL ){
      if( istrue(s) )
	vercheck = 1;
      else if( isfalse(s) )
	vercheck = 0;
      else
	vercheck = atoi(s);
    }
    /* check for io loop calling xpa */
    if( (s=(char *)getenv("XPA_IOCALLSXPA")) != NULL ){
      if( istrue(s) ){
	XPAIOCallsXPA(1);
      }
      else if( isfalse(s) ){
	XPAIOCallsXPA(0);
      }
    }
    /* make sure we have a temp dir */
    if( tmpdir == NULL ){
      if( (s=(char *)getenv("XPA_TMPDIR")) != NULL )
	tmpdir = xstrdup(s);
      else if( (s=(char *)getenv("TMPDIR")) != NULL )
	tmpdir = xstrdup(s);
      else if( (s=(char *)getenv("TMP")) != NULL )
	tmpdir = xstrdup(s);
      else
	tmpdir = xstrdup(XPA_TMPDIR);
    }
    /* create directory, if necessary */
    xmkdir(tmpdir, 0777);
    xchmod(tmpdir, 0777);
#if HAVE_MINGW32==0
    /* Disable SIGPIPE so we do not die if the client dies.
     * Rather, we will get an EOF on reading or writing.
     */
    xsignal_sigpipe();
#endif
    /* platform-dependent startup */
    xsocketstartup();
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPANSAdd
 *
 * Purpose:	add this XPA to the name service
 *
 * Returns:	0 on success, -1 on failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPANSAdd (XPA xpa, char *host, char *mode)
#else
int XPANSAdd(xpa, host, mode)
     XPA xpa;
     char *host;
     char *mode;
#endif
{
  char username[SZ_LINE];
  char tbuf[SZ_LINE];
  char xmode[SZ_LINE];
  char *cmd="add";
  char *s;
  NS ns;
  struct passwd *pw;

  /* sanity check */
  if( !xpa )
    return(0);

  /* handle special case of the name server itself -- its a known entry */
  if( !strcmp(xpa->name, XPANS_NAME) ){
    return(0);
  }

  /* look for the proxy=<true|false> string */
  if( mode ){
    strncpy(xmode, mode, SZ_LINE-1);
    xmode[SZ_LINE-1] = '\0';
    if( keyword(xmode, "proxy", tbuf, SZ_LINE) && istrue(tbuf) ){
      cmd="addproxy";
    }
  }

  /* open a connection to the name service */
  if( (ns=XPANSOpen(xpa, host, 1)) != NULL ){
    /* get the user name, from the environment */
    if( (s=(char *)getenv("XPA_LOGNAME")) != NULL )
      strncpy(username, s, SZ_LINE-1);
    else if( (s=(char *)getenv("LOGNAME")) != NULL )
      strncpy(username, s, SZ_LINE-1);
#if HAVE_MINGW32==0
    /* this is a last resort */
    else if( (pw=getpwuid(geteuid())) )
      strncpy(username, pw->pw_name, SZ_LINE-1);
#endif
    /* if nothing good has happened, make it "unknown" */
    if( *username == '\0' )
      strcpy(username, "unknown");
    /* null-terminate string */
    username[SZ_LINE-1] = '\0';

    /* write the command to add this xpa */
    snprintf(tbuf, SZ_LINE, "%s %s %s:%s %s %s\n",
	     cmd, xpa->method, xpa->xclass, xpa->name, xpa->type, username);
    if( XPAPuts(xpa, ns->fd, tbuf, stimeout) < 0 ){
      return(-1);
    }
    /* get result */
    if( XPAGets(xpa, ns->fd, tbuf, SZ_LINE, stimeout) >0 ){
      if( !strncmp(tbuf, "XPA$OK", 6) ){
	/* for proxy, we now must listen for xpa requests on this ns */
	if( !strcmp(cmd, "addproxy") && xpa ){
	  if( CommNew(xpa, ns->fd, ns->ip, ns->port, ns->name, ns) ){
	    /* one more proxy is using this name server */
	    ns->nproxy += 1;
	  }
	}
	else{
	  /* one more access point is using this name server */
	  ns->nxpa += 1;
	}
	return(0);
      }
      else if( !strncmp(tbuf, "XPA$EXISTS", 10) )
	return(0);
      else
	return(-1);
    }
    else{
      return(-1);
    }
  }
  else{
    return(-1);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPANSDel
 *
 * Purpose:	remove public knowledge of this XPA from the name service
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPANSDel (XPA xpa, char *host, char *mode)
#else
int XPANSDel(xpa, host, mode)
     XPA xpa;
     char *host;
     char *mode;
#endif
{
  int got=0;
  char tbuf[SZ_LINE];
  char xmode[SZ_LINE];
  char *cmd="del";
  NS ns;

  /* sanity check */
  if( !xpa )
    return(0);

  /* handle special case of the name server itself -- its a known entry */
  if( xpa->name && !strcmp(xpa->name, XPANS_NAME) ){
    return(0);
  }

  /* if there is no method, just return */
  if( (xpa->method == NULL) || (*xpa->method == '\0') ){
    return(0);
  }

  /* look for the proxy=<true|false> string */
  if( mode ){
    strncpy(xmode, mode, SZ_LINE-1);
    xmode[SZ_LINE-1] = '\0';
    if( keyword(xmode, "proxy", tbuf, SZ_LINE) && istrue(tbuf) ){
      cmd="delproxy";
    }
  }

  /* open a connection to the name service */
  if( (ns=XPANSOpen(xpa, host, -1)) != NULL ){
    /* write the command to delete this xpa */
    snprintf(tbuf, SZ_LINE, "%s %s\n", cmd, xpa->method);
    XPAPuts(xpa, ns->fd, tbuf, stimeout);
    /* get result */
    if( XPAGets(xpa, ns->fd, tbuf, SZ_LINE, stimeout) >0 ){
      if( !strncmp(tbuf, "XPA$OK", 6) ){
	/* one less access point is using this name server */
	ns->nxpa -= 1;
	/* if there are no more access points using this xpans, close it */
	if( !ns->nxpa && !ns->nproxy ){
	  XPANSClose(xpa, ns);
	}
      }
      else{
	got = -1;
      }
    }
    else{
      got = -1;
    }
  }
  else
    got = -1;
  return(got);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAVersionCheck
 *
 * Purpose:	check our version vs. xpans version
 *
 * Returns:	-1,0,1 for our<=>xpans
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAVersionCheck (char *serv, char *nsv)
#else
int XPAVersionCheck(serv, nsv)
     char *serv;
     char *nsv;
#endif
{
  int i;
  int ip1=0;
  int ip2=0;
  int v1=0;
  int v2=0;
  int got=0;
  int vsize=2;
  char s1[SZ_LINE];
  char s2[SZ_LINE];

  /* return if not checking version */
  if( vercheck <=0 )
    return(0);
  /* if either does not exist, its a mismatch */
  if( !word(serv, s1, &ip1) || !word(nsv, s2, &ip2) )
    return(1);
  /* if strings are equal, versions are equal */
  if( !strcasecmp(s1, s2) )
    return(0);

  /* format for version is maj.min.patch[be]beta */
  newdtable(".be");
  /* we check only the major and minor version for incompatibilities */
  for(i=0; i<vsize; i++){
    if( !word(serv, s1, &ip1) || !word(nsv, s2, &ip2) ){
      break;
    }
    v1 = atoi(s1);
    v2 = atoi(s2);
    if( v1 > v2 ){
      got = 1;
      break;
    }
    if( v1 < v2 ){
      got = -1;
      break;
    }
  }

  freedtable();
  return(got);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAVersionWarn
 *
 * Purpose:	warn about mismatched versions
 *
 * Returns:	NONE
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
void
XPAVersionWarn (char *serv, char *nsv)
#else
void XPAVersionWarn(serv, nsv)
     char *serv;
     char *nsv;
#endif
{
  /* return if not checking version */
  if( vercheck <=0 )
    return;

  /* output warning */
  fprintf(stderr,
	  "XPA$WARNING: version mismatch detected between XPA-enabled server (%s)\n", serv?serv:"unknown");
  fprintf(stderr, "and xpans (%s).", nsv?nsv:"unknown");
  fprintf(stderr, " You probably will get bad results.\n");
  fprintf(stderr, "Please consider updating XPA to match the XPA-enabled server you are running.\n");

  /* we did it */
  vercheck--;
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
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAMethod
 *
 * Purpose:	return communication method type
 *
 * Returns:	XPA__INET, XPA_UNIX
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAMethod (char *method)
#else
int XPAMethod(method)
     char *method;
#endif
{
  char *s1;

  /* if no method is passed, we return the default method type */
  if( method == NULL ){
    if( mtype == 0 ){
      s1 = (char *)getenv("XPA_METHOD");
      if( s1 == NULL )
	mtype = XPA_INET;
      else if( !strcasecmp(s1, "inet") )
	mtype = XPA_INET;
      else if( !strcasecmp(s1, "localhost") ){
	mtype = XPA_INET;
	use_localhost = 1;
      }
      else if( !strcasecmp(s1, "unix") ){
#if HAVE_SYS_UN_H
	mtype = XPA_UNIX;
#else
        mtype = XPA_INET;
	use_localhost = 1;
#endif
      }
      else if( !strcasecmp(s1, "local") ){
#if HAVE_SYS_UN_H
	mtype = XPA_UNIX;
#else
        mtype = XPA_INET;
	use_localhost = 1;

#endif
      }
      else
	mtype = XPA_INET;
    }
    return(mtype);
  }
  /* otherwise, we analyze the input method to get the type */
  else{
    /* inet is ip:port, else unix filename */
    if( strchr(method, ':') != NULL )
      return(XPA_INET);
    else
#if HAVE_SYS_UN_H
      return(XPA_UNIX);
#else
      return(XPA_INET);
#endif
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPANSMethod
 *
 * Purpose:	return string containing name server method
 *
 * Returns:	name server method string
 *
 *----------------------------------------------------------------------------
 */

#ifdef ANSI_FUNC
char * 
XPANSMethod (char *host, int flag)
#else
char *XPANSMethod(host, flag)
     char *host;
     int flag;
#endif
{
  char *s, *t;
  char tbuf[SZ_LINE];
  int i;
  int ip;
  int port;
  unsigned int bip;
  unsigned short bport;

  switch( XPAMethod(host) ){
  case XPA_INET:
    if( (host != NULL) && (*host != '\0') )
      strncpy(nsmethod, host, SZ_LINE-1);
    else if( (s=(char *)getenv("XPA_NSINET")) != NULL )
      strncpy(nsmethod, s, SZ_LINE-1);
    else
      strncpy(nsmethod, XPA_NSINET, SZ_LINE-1);
    /* always null-terminate */
    nsmethod[SZ_LINE-1] = '\0';
    /* if flag, we want the XPA access ip and port, not the communication
       channel between xpa servers and the name service */
    if( flag ){
      if( (s=strrchr(nsmethod, ':')) != NULL ){
	/* this is where we will overwrite the port */
	t = s+1;
	/* get base port for default */
	XPAParseIpPort(nsmethod, &bip, &bport);
	newdtable(",");
	for(ip=0, i=0; i<=flag; i++){
	  if( !word(t, tbuf, &ip) ){
	    *tbuf = '\0';
	    break;
	  }
	}
	freedtable();
	if( *tbuf )
	  port = atoi(tbuf);
	else
	  port = bport + flag;
	snprintf(t, SZ_LINE, "%d", port);
      }
    }
    break;
#if HAVE_SYS_UN_H
  case XPA_UNIX:
    if( host != NULL )
      strncpy(nsmethod, host, SZ_LINE-1);
    else if( (s=(char *)getenv("XPA_NSUNIX")) != NULL )
      strncpy(nsmethod, s, SZ_LINE-1);
    else
      snprintf(nsmethod, SZ_LINE, "%s/%s", tmpdir, XPA_NSUNIX);
    /* always null-terminate */
    nsmethod[SZ_LINE-1] = '\0';
    /* if flag is set, we are getting the XPA access file, not the
       socket file and we have to change the name slightly */
    if( flag ){
      /* replace the ending, if possible */
      s = strrchr(nsmethod, '.');
      t = strrchr(nsmethod, '/');
      if( (s != NULL) && (s > t) )
	*s = '\0';
      snprintf(tbuf, SZ_LINE, ".xpa-%d", flag);
      strcat(nsmethod, tbuf);
    }
    break;
#endif
  default:
    if( (s=(char *)getenv("XPA_NSINET")) != NULL )
      strncpy(nsmethod, s, SZ_LINE-1);
    else
      strncpy(nsmethod, XPA_NSINET, SZ_LINE-1);
    /* always null-terminate */
    nsmethod[SZ_LINE-1] = '\0';
    break;
  }

  /* return the static method string */
  return(nsmethod);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAParseName
 *
 * Purpose:	split the xpaname into a class and name string
 *
 * Results:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
void 
XPAParseName (char *xpaname, char *xclass, char *name, int len)
#else
void XPAParseName(xpaname, xclass, name, len)
     char *xpaname;
     char *xclass;
     char *name;
     int len;
#endif
{
  char *s;
  char *t;
  char *cptr=NULL;
  char *nptr=NULL;

  /* if nothing is passed to us, allow everything */
  if( (xpaname == NULL) || (*xpaname == '\0') ){
    strncpy(xclass, "*", len-1);
    strncpy(name, "*", len-1);
    return;
  }
    
  /* split the xpaname into class and name */
  s = xstrdup(xpaname);
  if( (t=(char *)strchr(s, ':')) != NULL ){
    cptr = s;
    *t = '\0';
    nptr = t+1;
  }
  else{
    nptr = s;
    cptr = "*";
  }
  if( *cptr == '\0' )
    cptr = "*";
  if( *nptr == '\0' )
    nptr = "*";

  strncpy(xclass, cptr, len-1);
  strncpy(name, nptr, len-1);
  xfree(s);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAParseIpPort
 *
 * Purpose:	split the host into ip and port
 *
 * Results:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAParseIpPort (char *host, unsigned int *ip, unsigned short *port)
#else
int XPAParseIpPort(host, ip, port)
     char *host;
     unsigned int *ip;
     unsigned short *port;
#endif
{
  char *s1, *s2, *s3, *p1, *p2;
  int got;

  /* make sure we have something to work with */
  if( (host == NULL) || (*host == '\0') )
    return(0);

  /* parse up the string and look for a port number (which is essential) */
  s1 = xstrdup(host);
  /* if we have a ",", null it out since what comes after is aux info */
  if( (p1 = (char *)strchr(s1, ',')) != NULL ){
    *p1 = '\0';
  }
  /* if we have a ":", we will null it out (so that what comes before is
     the host name) and bump past it to point to the port */
  if( (p1 = (char *)strchr(s1, ':')) == NULL ){
    /* there is no ":", so the whole string is the port */
    p1 = s1;
    s2 = NULL;
  } else {
    /* null out ':' and bump port pointer */
    *p1 = '\0';
    p1++;
    s2 = s1;
  }

  /* get port */
  p2 = NULL;
  if( p1 && !strcmp(p1, "$port") )
    *port = XPA_NSPORT;
  /* NB: port number might be followed by other stuff */
  else
    *port = (unsigned short)strtol(p1, &p2, 0);
  /* check for bad port number -- we lose */
  if( *port <=0 || (p1 == p2) || (p2 && (*p2 != '\0')) ){
    *ip = 0;
    *port = 0;
    got = 0;
    goto done;
  }

  /* get ip */
  if( s2 && *s2 ){
    /* see if this already is a hex address in network byte order */
    *ip = strtoul16(s2, &s3);
    if( *s3 == '\0' ){
      got = 1;
      goto done;
    }
  }
  /* not hex or proxy -- convert ip string to an ip address */
  if( (*ip = gethostip(s2)) == 0 ){
    *port = 0;
    got = 0;
  }
  else{
    got = 1;
  }

done:
  xfree(s1);
  return(got);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAParseUnixSocket
 *
 * Purpose:	see if host is actually a unix socket file
 *
 * Results:	1 if its a socket, 0 otherwise
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAParseUnixSocket (char *host)
#else
int XPAParseUnixSocket(host)
     char *host;
#endif
{
  struct stat buf;

  /* see if its a file in the right directory */
  if( !strncmp(host, tmpdir, strlen(tmpdir)) &&
      !stat(host, &buf) ){
    return(1);
  }
  else{
    return(0);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAOK
 *
 * Purpose:	send an XPA OK message to the client
 *
 * Returns:	0 on success, -1 on error
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int
XPAOK (XPA xpa)
#else
int XPAOK(xpa)
     XPA xpa;
#endif
{
  int len;
  int status=0;
  char tbuf[SZ_LINE];

  /* make sure we have a valid struct */
  if( (xpa == NULL) || (xpa_cmdfd(xpa) <0) )
    return(-1);

  /* send message, if necessary */
  if( !(xpa_status(xpa) & XPA_STATUS_ACTIVE) || (xpa_ack(xpa) == 1) ){
    snprintf(tbuf, SZ_LINE, "%s XPA$OK (%s:%s %s)\n",
	     xpa_id(xpa), xpa_class(xpa), xpa_name(xpa), xpa_method(xpa));
    len = strlen(tbuf);
    if( XPAPuts(xpa, xpa_cmdfd(xpa), tbuf, stimeout) != len ){
      status = -1;
    }
  }

  /* flag that there was a message sent for this xpa */
  xpa->comm->message = 1;

  /* return status */
  return(status);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPATimestamp
 *
 * Purpose:	generate string with current date/time
 *
 * Returns:	time string (in static buffer)
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
char *
XPATimestamp(void)
#else
char *XPATimestamp()
#endif
{
  time_t t;
  struct tm *lt;

  *ctimebuf = '\0';
  if( etimestamp ){
    if( (t = time(NULL)) != (time_t)-1 ){
      if( (lt = localtime(&t)) != NULL ){
	snprintf(ctimebuf, SZ_LINE, " %02d/%02d/%d:%d:%d:%d",
		 lt->tm_mday, lt->tm_mon+1, lt->tm_year+1900,
		 lt->tm_hour, lt->tm_min, lt->tm_sec);
      }
    }
  }
  return ctimebuf;
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAError
 *
 * Purpose:	send an XPA error message to the client
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int
XPAError (XPA xpa, char *s)
#else
int XPAError(xpa, s)
     XPA xpa;
     char *s;
#endif
{
  int status=0;
  int ip=0;
  char tbuf[SZ_LINE];
  char *t;
  char *u;

  /* make sure we have a valid struct */
  if( (xpa == NULL) || (xpa_cmdfd(xpa) <0) )
    return(-1);

  /* send message, if necessary */
  if( !(xpa_status(xpa) & XPA_STATUS_ACTIVE) || (xpa_ack(xpa) == 1) ){
    t = xstrdup(s);
    /* get rid of CR in message -- we add one at the end */
    nowhite(t, t);
    if( !strncmp(t, "XPA$", 4) )
      word(t, tbuf, &ip);
    u = (char *)xcalloc(strlen(t)+SZ_LINE, sizeof(char));
    /* package up and write the message */
    snprintf(u, SZ_LINE, "%s XPA$ERROR %s (%s:%s %s%s)\n",
	     xpa_id(xpa),
	     &t[ip], xpa_class(xpa), xpa_name(xpa), xpa_method(xpa),
	     XPATimestamp());
    if( XPAPuts(xpa, xpa_cmdfd(xpa), u, stimeout) != (int)strlen(u) ){
      status = -1;
    }
    if( t )
      xfree(t);
    if( u )
      xfree(u);
  }

  /* flag that there was a message sent for this xpa */
  xpa->comm->message = 1;

  /* return status */
  return(status);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAMessage
 *
 * Purpose:	send an XPA message to the client
 *
 * Returns:	0 on success, -1 on error
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAMessage (XPA xpa, char *s)
#else
int XPAMessage(xpa, s)
     XPA xpa;
     char *s;
#endif
{
  int status=0;
  int ip=0;
  char tbuf[SZ_LINE];
  char *t;
  char *u;

  /* make sure we have a valid struct */
  if( (xpa == NULL) || (xpa_cmdfd(xpa) <0) )
    return(-1);

  /* send message, if necessary */
  if( !(xpa_status(xpa) & XPA_STATUS_ACTIVE) || (xpa_ack(xpa) == 1) ){
    t = xstrdup(s);
    /* get rid of CR in message -- we add one at the end */
    nowhite(t, t);
    if( !strncmp(t, "XPA$", 4) )
      word(t, tbuf, &ip);
    u = (char *)xcalloc(strlen(t)+SZ_LINE, sizeof(char));
    /* package up and write the message */
    snprintf(u, SZ_LINE, "%s XPA$MESSAGE %s (%s:%s %s%s)\n",
	     xpa_id(xpa),
	     &t[ip], xpa_class(xpa), xpa_name(xpa), xpa_method(xpa),
	     XPATimestamp());
    if( XPAPuts(xpa, xpa_cmdfd(xpa), u, stimeout) != (int)strlen(u) ){
      status = -1;
    }
    if( t )
      xfree(t);
    if( u )
      xfree(u);
  }

  /* flag that there was a message sent for this xpa */
  xpa->comm->message = 1;

  /* return status */
  return(status);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAArgvParamlist
 *
 * Purpose:	generate a paramlist string from an argv
 *
 * Results:	allocated paramlist string
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
char *
XPAArgvParamlist (int argc, char **argv, int start)
#else
char *XPAArgvParamlist(argc, argv, start)
     int argc;
     char **argv;
     int start;
#endif
{
  int plen;
  int i;
  char *paramlist;

  /* get length of paramlist */
  for(plen=0, i=start; i<argc; i++){
    plen += (strlen(argv[i])+1);
  }

  /* allocate enough space for it */
  if( (paramlist = (char *)xcalloc(plen+1, sizeof(char))) == NULL ){
    return(NULL);
  }

  /* gather up the paramlist */
  for(i=start; i<argc; i++){
    strcat(paramlist, argv[i]);
    strcat(paramlist, " ");
  }

  /* remove whitespace from beginning and end */
  nowhite(paramlist, paramlist);

  /* return paramlist */
  return(paramlist);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPANSLookup
 *
 * Purpose:	get name server matches
 *
 * Returns:	number of matches
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPANSLookup (XPA xpa, char *tname, char *ttype,
	     char ***xclasses, char ***names, char ***methods, char ***infos)
#else
int XPANSLookup(xpa, tname, ttype, xclasses, names, methods, infos)
     XPA xpa;
     char *tname;
     char *ttype;
     char ***xclasses;
     char ***names;
     char ***methods;
     char ***infos;
#endif
{
  unsigned short port;
  unsigned int ip;
  int own;
  int lp=0;
  int got=0;
  int nentry=100;
  char *xtype;
  char xclass[SZ_LINE];
  char name[SZ_LINE];
  char method[SZ_LINE];
  char info[SZ_LINE];
  char user[SZ_LINE];
  char type[SZ_LINE];
  char tbuf[SZ_LINE];
  char lbuf[SZ_LINE];
  NS ns;
  XPA txpa;

  /* do some initialization */
  XPAInitEnv();

  /* use "*" as default if no type was specified */
  if( (ttype == NULL) || (*ttype == '\0') )
    xtype = "*";
  /* type 'a' means we are only trying to access */
  else if( *ttype == 'a' )
    xtype = "*";
  else
    xtype = ttype;

  /* special case of name server */
  if( !strcmp(tname, XPANS_NAME) ){
    *xclasses  = (char **)xmalloc(sizeof(char *));
    *names     = (char **)xmalloc(sizeof(char *));
    *methods   = (char **)xmalloc(sizeof(char *));
    *infos     = (char **)xmalloc(sizeof(char *));
    (*xclasses)[0] = xstrdup(XPANS_CLASS);
    (*names)[0]   = xstrdup(XPANS_NAME);
    (*methods)[0]   = xstrdup(XPANSMethod(NULL, 1));
    (*infos)[0] = xstrdup(XPA_DEF_CLIENT_INFO);
    return(1);
  }

  /* special case of a string containing ip:port -- avoid trip to ns */
  if( XPAParseIpPort(tname, &ip, &port) ){
    *xclasses   = (char **)xmalloc(sizeof(char *));
    *names      = (char **)xmalloc(sizeof(char *));
    *methods    = (char **)xmalloc(sizeof(char *));
    *infos      = (char **)xmalloc(sizeof(char *));
    (*xclasses)[0] = xstrdup("?");
    (*names)[0]   = xstrdup("?");
    (*methods)[0] = xstrdup(tname);
    (*infos)[0] = xstrdup(XPA_DEF_CLIENT_INFO);
    return(1);
  }

  /* special case of a string containing unix socket -- avoid trip to ns */
  if( XPAParseUnixSocket(tname) ){
    *xclasses   = (char **)xmalloc(sizeof(char *));
    *names      = (char **)xmalloc(sizeof(char *));
    *methods    = (char **)xmalloc(sizeof(char *));
    *infos      = (char **)xmalloc(sizeof(char *));
    (*xclasses)[0] = xstrdup("?");
    (*names)[0]   = xstrdup("?");
    (*methods)[0] = xstrdup(tname);
    (*infos)[0] = xstrdup(XPA_DEF_CLIENT_INFO);
    return(1);
  }

  /* pre-allocate the various arrays to an absurd number */
  *xclasses = (char **)xmalloc(nentry * sizeof(char *));
  *names    = (char **)xmalloc(nentry * sizeof(char *));
  *methods  = (char **)xmalloc(nentry * sizeof(char *));
  *infos    = (char **)xmalloc(nentry * sizeof(char *));

  /* open a connection to the name service */
  if( (ns=XPANSOpen(xpa, NULL, 0)) != NULL ){
    while( word(tname, lbuf, &lp) ){
      XPAParseName(lbuf, xclass, name, SZ_LINE);
      /* write the command to add this xpa */
      snprintf(tbuf, SZ_LINE, "lookup %s:%s %s %s\n",
	       xclass, name, xtype, nsusers);
      FPRINTF((stderr, "%sXPANSLookup: sending command %s", _sp, tbuf));
      XPAPuts(xpa, ns->fd, tbuf, stimeout);
      /* read matches from the name server */
      while( 1 ){
	if( XPAGets(xpa, ns->fd, tbuf, SZ_LINE, stimeout) <=0 ){
	  FPRINTF((stderr, "%sXPANSLookup: unexpected EOF from xpans\n", _sp));
	  break;
	}
	FPRINTF((stderr, "%sXPANSLookup: receiving %s", _sp, tbuf));
	/* XPA$<result> signals end of input */
	if( !strncmp(tbuf, "XPA$", 4) )
	  break;
	/* otherwise scan next line */
	if( sscanf(tbuf, "%s %s %s %s %s %s\n", 
		   xclass, name, type, method, user, info) != EOF ){
	  /* make sure this entry is not in the current process
	     (i.e., we can't ever xpa ourselves!) */
	  for(own=0, txpa=xpahead; txpa!=NULL; txpa=txpa->next){
	    if( !strcmp(txpa->xclass, xclass) && !strcmp(txpa->name, name) &&
		!strcmp(txpa->method, method)				   ){
	      own = 1;
	      break;
	    }
	  }
	  /* if this xpa is in the current process, skip it */
	  if( own )
	    continue;
	  /* make sure we have enough space */
	  if( got >= nentry ){
	    nentry *= 2;
	    *xclasses = (char **)xrealloc(*xclasses, nentry * sizeof(char *));
	    *names    = (char **)xrealloc(*names, nentry * sizeof(char *));
	    *methods  = (char **)xrealloc(*methods, nentry * sizeof(char *));
	    *infos    = (char **)xrealloc(*infos, nentry * sizeof(char *));
	  }
	  /* add this entry to the list */
	  (*xclasses)[got] = xstrdup(xclass);
	  (*names)[got] = xstrdup(name);
	  (*methods)[got] = xstrdup(method);
	  (*infos)[got] = xstrdup(info);
	  got++;
	}
      }
    }
    /* if we did not add to an xpa record, close up here */
    if( xpa == NULL ){
      XPANSClose(NULL, ns);
    }
  }
  /* reallocate the exact number of buffers we have */
  if( got > 0 ){
    *xclasses = (char **)xrealloc(*xclasses, got * sizeof(char *));
    *names    = (char **)xrealloc(*names, got * sizeof(char *));
    *methods  = (char **)xrealloc(*methods, got * sizeof(char *));
    *infos    = (char **)xrealloc(*infos, got * sizeof(char *));
  }
  else{
    xfree(*xclasses);
    xfree(*names);
    xfree(*methods);
    xfree(*infos);
  }
  FPRINTF((stderr, "%sXPANSLookup: found %d entries\n", _sp, got));
  return(got);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPANSClose
 *
 * Purpose:	close connection to the name service
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int
XPANSClose (XPA xpa, NS ns)
#else
int XPANSClose(xpa, ns)
     XPA xpa;
     NS ns;
#endif
{
  NS cur;
  XPAComm comm, tcomm;

  if( !ns )
    return(-1);

  /* remove from xpa list */
  if( xpa ){
    if( xpa->nshead ){
      if( xpa->nshead == ns ){
	xpa->nshead = ns->next;
      }
      else{
	for(cur=xpa->nshead; cur!=NULL; cur=cur->next){
	  if( cur->next == ns ){
	    cur->next = ns->next;
	    break;
	  }
	}
      }
    }
    /* close comms associated with this ns */
    for(comm=xpa->commhead; comm!=NULL; ){
      tcomm = comm->next;
      if( comm->ns == ns ){
	CommFree(xpa, comm, 0);
      }
      comm = tcomm;
    }
  }

  /* close socket */
  if( ns->fd >=0 ){
    xclose(ns->fd);
  }
  /* free up space */
  if( ns->method) xfree(ns->method);
  if( ns->host )  xfree(ns->host);
  if( ns->name )  xfree(ns->name);
  if( ns )        xfree(ns);
  return(0);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPANSKeepAlive
 *
 * Purpose:	send a 1-byte keep-alive packet to each name server
 *
 * Returns:	-1 on error, else 1
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int
XPANSKeepAlive (XPA xpa, int type)
#else
  int XPANSKeepAlive(xpa, type)
     XPA xpa;
     int type;
#endif
{
  NS ns;
  int got=0;

  /* sanity check */
  if( !xpa )
    return(-1);

  /* use default type, if none specified */
  if( !type )
    type=DEF_KA_TYPE;

  /* send keep-alive to deserving xpans instances */
  for(ns=xpa->nshead; ns!=NULL; ns=ns->next){ 
    if( ((type&1) && (ns->nxpa>0)) || ((type&2) && (ns->nproxy>0)) ){
      FPRINTF((stderr, "%sXPANSKeepAlive: sending ka to %d\n", _sp, ns->fd));
#if USE_KA_OOB
      /* send as out of band data to avoid mixing with normal data stream */
      got = send(ns->fd, "\n", 1, MSG_OOB);
#else
      /* cisco routers can clear the URG flag by default, so use in-band */
      got = send(ns->fd, "\n", 1, 0);
#endif
    }
  }
  return(got);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPANew
 *
 * Purpose:	add a new xpa name to a process to allow external
 * 		process to read/write data associated with this name.
 *
 * If the send callback is defined, it can send to an external process.
 * If the receive callback is defined, it can receive from an external process.
 *
 * Returns: xpa handle associated with this class.name or NULL
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
XPA 
XPANew (char *xclass, char *name, char *help,
	SendCb send_callback, void *send_data, char *send_mode,
	ReceiveCb rec_callback, void *rec_data, char *rec_mode)
#else
XPA XPANew(xclass, name, help,
	   send_callback, send_data, send_mode,
	   rec_callback, rec_data, rec_mode)
     char *xclass;
     char *name;
     char *help;
     SendCb send_callback;
     void *send_data;
     char *send_mode;
     ReceiveCb rec_callback;
     void *rec_data;
     char *rec_mode;
#endif
{
  unsigned short port;
  unsigned int ip;
  int got;
  int oum;
  int keep_alive=1;
  int reuse_addr=1;
  char tbuf[SZ_LINE];
  char tbuf2[SZ_LINE];
  char tfile[SZ_LINE];
  char *tfptr;
  XPA xpa;
  socklen_t slen = sizeof(struct sockaddr_in);
  struct sockaddr_in sock_in;
#if HAVE_SYS_UN_H
  struct sockaddr_un sock_un;
#endif

  /* do some initialization */
  XPAInitEnv();
  /* init the list of reserved commands */
  XPAInitReserved();

  /* we need a name, but no ":" allowed in the name */
  if( (name == NULL) || (*name == '\0') || strchr(name, ':') )
    return(NULL);
  
  /* limit the size of the xclass and name designation */
  if( xclass && *xclass && (strlen(xclass) > XPA_NAMELEN) ){
    if( verbosity )
      fprintf(stderr, "XPA$ERROR: class designator too long\n");
    return(NULL);
  }
  if( strlen(name) > XPA_NAMELEN ){
    if( verbosity )
      fprintf(stderr, "XPA$ERROR: name designator too long\n");
    return(NULL);
  }

  /* we need either a send or a receive or both */
  if( (send_callback == NULL) && (rec_callback == NULL ) ){
    if( verbosity )
      fprintf(stderr, "XPA$ERROR: requires send and/or receive callback\n");
    return(NULL);
  }

  /* allocate xpa struct */
  if( (xpa = (XPA)xcalloc(1, sizeof(XPARec))) == NULL )
    return(NULL);

  /* fill in the blanks */
  xpa->version = xstrdup(XPA_VERSION);
  xpa->type  = (char *)xcalloc(10, sizeof(char));
  if( xclass && *xclass )
    xpa->xclass = xstrdup(xclass);
  else
    xpa->xclass = xstrdup("*");
  xpa->name  = xstrdup(name);
  xpa->help  = xstrdup(help);
  /* set the value of the server big-endian-ness */
  xpa->sendian = XPAEndian() ? xstrdup("big") : xstrdup("little");

  /* fill in send information */
  if( send_callback != NULL ){
    xpa->send_callback = send_callback;
    xpa->send_data = send_data;
    strcat(xpa->type, "g");
    /* process the mode string */
    xpa->send_mode = XPA_DEF_MODE_SEND;
    XPAMode(send_mode, &(xpa->send_mode), "freebuf", XPA_MODE_FREEBUF,1);
    XPAMode(send_mode, &(xpa->send_mode), "acl", XPA_MODE_ACL, 1);
  }

  /* fill in receive information */
  if( rec_callback != NULL ){
    xpa->receive_callback = rec_callback;
    xpa->receive_data = rec_data;
    strcat(xpa->type, "s");
    /* process the mode string */
    xpa->receive_mode = XPA_DEF_MODE_REC;
    XPAMode(rec_mode, &(xpa->receive_mode), "buf", XPA_MODE_BUF, 1);
    XPAMode(rec_mode, &(xpa->receive_mode), "fillbuf", XPA_MODE_FILLBUF, 1);
    XPAMode(rec_mode, &(xpa->receive_mode), "freebuf", XPA_MODE_FREEBUF, 1);
    XPAMode(rec_mode, &(xpa->receive_mode), "acl", XPA_MODE_ACL, 1);
  }

  /* set up communication method */
  switch(mtype){
  case XPA_INET:
    /* open a socket and fill in socket information */
    if( (xpa->fd = xsocket(AF_INET, SOCK_STREAM, 0)) < 0 )
      goto error;
    setsockopt(xpa->fd, SOL_SOCKET, SO_KEEPALIVE,
	       (char *)&keep_alive, sizeof(keep_alive));
    setsockopt(xpa->fd, SOL_SOCKET, SO_REUSEADDR,
	       (char *)&reuse_addr, sizeof(reuse_addr));
    memset((char *)&sock_in, 0, sizeof(sock_in));
    sock_in.sin_family = AF_INET;
    /* localhost only */
    if( use_localhost )
      sock_in.sin_addr.s_addr = htonl(gethostip("$localhost"));
    /* any address will do */
    else
      sock_in.sin_addr.s_addr = htonl(INADDR_ANY);
    /* handle special case of xpans port */
    if( !strcmp(xpa->name, XPANS_NAME) ){
      XPAParseIpPort(XPANSMethod(NULL, 1), &ip, &port);
      sock_in.sin_port = htons(port);
    }
    else{
      sock_in.sin_port = htons(XPAPort(xpa));
    }
    /* bind to the ip:port */
    if( xbind(xpa->fd, (struct sockaddr *)&sock_in, sizeof(sock_in)) < 0 )
      goto error;
    /* we now can determine which port the system assigned */
    if( getsockname(xpa->fd, (struct sockaddr *)&sock_in, &slen) < 0 )
      goto error;
    else{
      /* ip:port is the method */
      gethost(tbuf2, SZ_LINE);
      snprintf(tbuf, SZ_LINE, "%x:%d",
	       gethostip(tbuf2), ntohs(sock_in.sin_port));
      xpa->method = xstrdup(tbuf);
    }
    break;
#if HAVE_SYS_UN_H
  case XPA_UNIX:
    /* open a socket and fill in socket information */
    if( (xpa->fd = xsocket(AF_UNIX, SOCK_STREAM, 0)) < 0 )
      goto error;
    setsockopt(xpa->fd, SOL_SOCKET, SO_KEEPALIVE,
	       (char *)&keep_alive, sizeof(keep_alive));
    setsockopt(xpa->fd, SOL_SOCKET, SO_REUSEADDR,
	       (char *)&reuse_addr, sizeof(reuse_addr));
    memset((char *)&sock_in, 0, sizeof(sock_in));
    sock_un.sun_family = AF_UNIX;
    /* handle special case of xpans */
    if( !strcmp(xpa->name, XPANS_NAME) ){
      strcpy(tbuf, XPANSMethod(NULL, 1));
    }
    else{
      /* get filename part, composed of class and name and unique id */
      snprintf(tfile, SZ_LINE, "%s_%s.%d",
	       xpa->xclass, xpa->name, (int)getpid());
      /* change "/" to "_" for filename */
      for(tfptr = tfile; *tfptr != '\0'; tfptr++){
	if( *tfptr == '/' )
	  *tfptr = '_';
      }
      /* create full pathname */
      snprintf(tbuf, SZ_LINE, "%s/%s", tmpdir, tfile);
    }
    /* delete old copy */
    unlink (tbuf);
    strcpy(sock_un.sun_path, tbuf);
    /* unset umask so that everyone can read and write */
    oum = umask(0);
    /* bind to the file */
    got = xbind(xpa->fd, (struct sockaddr *)&sock_un, sizeof(sock_un));
    /* reset umask */
    umask(oum);
    /* now check for bind error */
    if( got < 0 )
      goto error;
    /* path is the method */
    xpa->method = xstrdup(tbuf);
    break;
#endif
  default:
    goto error;
  }

  /* listen for connections */
  if( listen(xpa->fd, XPA_MAXLISTEN) < 0 )
    goto error;

  /* make sure we close on exec */
  xfcntl(xpa->fd, F_SETFD, FD_CLOEXEC);

  /* add this xpa to end of list of xpas */
  XPAListAdd(&xpahead, xpa);

  /* publish this entry to the world */
  if( nsregister )
    XPANSAdd(xpa, NULL, NULL);

  /* make it active */
  XPAActive(xpa, NULL, 1);

#if NO_AUTOMATIC_HAVE_ATEXIT
  /* register XPA atexit funtion */
  if( !atexitinit ){
    atexit(_XPAAtExit);
    atexitinit = getpid();
  }
#endif

  /* return good news */
  return(xpa);

error:
  if( verbosity ){
    perror("XPANew");
  }
  _XPAFree(xpa);
  return(NULL);
}

/*
 *---------------------------------------------------------------------------
 *
 * Routine: 	XPAFree
 *
 * Purpose: 	free up alloc'ed memory in the XPA record structure
 *
 * Results:	0 on success, -1 for failure
 *
 *---------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAFree (XPA xpa)
#else
int XPAFree(xpa)
     XPA xpa;
#endif
{
  /* if status is active, just flag eventual need to free and exit */
  if( _XPAValid(xpahead, xpa, XPA_ACLS) ){
    if( xpa_status(xpa) & XPA_STATUS_ACTIVE ){
      xpa->status |= XPA_STATUS_FREE;
      FPRINTF((stderr, "%sXPAFree: marking xpa struct for later free'ing\n",
	       _sp));
      return(0);
    }
    else{
      /* call the primitive routine */
      FPRINTF((stderr, "%sXPAFree: freeing xpa struct\n", _sp));
      return(_XPAFree(xpa));
    }
  }
  else{
    return(-1);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAInfoNew
 *
 * Purpose:	add a new xpa name to a process to allow external
 * 		process to send info messages
 *

 * Returns: xpa handle associated with this class.name or NULL
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
XPA 
XPAInfoNew (char *xclass, char *name,
	    InfoCb info_callback, void *info_data, char *info_mode)
#else
XPA XPAInfoNew(xclass, name, info_callback, info_data, info_mode)
     char *xclass;
     char *name;
     InfoCb info_callback;
     void *info_data;
     char *info_mode;
#endif
{
  int got;
  int oum;
  int keep_alive=1;
  int reuse_addr=1;
  char tbuf[SZ_LINE];
  char tbuf2[SZ_LINE];
  char tfile[SZ_LINE];
  char *tfptr;
  XPA xpa;
  socklen_t slen = sizeof(struct sockaddr_in);
  struct sockaddr_in sock_in;
#if HAVE_SYS_UN_H
  struct sockaddr_un sock_un;
#endif

  /* do some initialization */
  XPAInitEnv();
  /* init the list of reserved commands */
  XPAInitReserved();

  /* we need a name, but no ":" allowed in the name */
  if( (name == NULL) || (*name == '\0') || strchr(name, ':') )
    return(NULL);
  
  /* we need an info callback */
  if( info_callback == NULL ){
    if( verbosity ){
      fprintf(stderr, "XPA$ERROR: requires info callback\n");
    }
    return(NULL);
  }

  /* allocate xpa struct */
  if( (xpa = (XPA)xcalloc(1, sizeof(XPARec))) == NULL )
    return(NULL);

  xpa->version = xstrdup(XPA_VERSION);
  xpa->type  = (char *)xcalloc(10, sizeof(char));
  /* fill in the blanks */
  if( xclass != NULL )
    xpa->xclass = xstrdup(xclass);
  else
    xpa->xclass = xstrdup("*");
  xpa->name  = xstrdup(name);

  /* fill in send information */
  xpa->info_callback = info_callback;
  xpa->info_data = info_data;
  strcat(xpa->type, "i");
  /* process the mode string */
  xpa->info_mode = XPA_DEF_MODE_INFO;
  XPAMode(info_mode, &(xpa->info_mode), "acl", XPA_MODE_ACL, 1);

  /* set up communication method */
  switch(mtype){
  case XPA_INET:
    /* open a socket and fill in socket information */
    if( (xpa->fd = xsocket(AF_INET, SOCK_STREAM, 0)) < 0 )
      goto error;
    setsockopt(xpa->fd, SOL_SOCKET, SO_KEEPALIVE,
	       (char *)&keep_alive, sizeof(keep_alive));
    setsockopt(xpa->fd, SOL_SOCKET, SO_REUSEADDR,
	       (char *)&reuse_addr, sizeof(reuse_addr));
    memset((char *)&sock_in, 0, sizeof(sock_in));
    sock_in.sin_family = AF_INET;
    /* localhost only */
    if( use_localhost )
      sock_in.sin_addr.s_addr = htonl(gethostip("$localhost"));
    /* any address will do */
    else
      sock_in.sin_addr.s_addr = htonl(INADDR_ANY);
    sock_in.sin_port = htons(XPAPort(xpa));
    /* bind to the ip:port */
    if( xbind(xpa->fd, (struct sockaddr *)&sock_in, sizeof(sock_in)) < 0 )
      goto error;
    /* we now can determine which port the system assigned */
    if( getsockname(xpa->fd, (struct sockaddr *)&sock_in, &slen) < 0 )
      goto error;
    else{
      /* ip:port is the method */
      gethost(tbuf2, SZ_LINE);
      snprintf(tbuf, SZ_LINE, "%x:%d",
	       gethostip(tbuf2), ntohs(sock_in.sin_port));
      xpa->method = xstrdup(tbuf);
    }
    break;
#if HAVE_SYS_UN_H
  case XPA_UNIX:
    /* get filename part, composed of class and name and unique id */
    snprintf(tfile, SZ_LINE, "%s_%s.%d",
	     xpa->xclass, xpa->name, (int)getpid());
    /* change "/" to "_" for filename */
    for(tfptr = tfile; *tfptr != '\0'; tfptr++){
      if( *tfptr == '/' )
	*tfptr = '_';
    }
    /* create full pathname */
    snprintf(tbuf, SZ_LINE, "%s/%s", tmpdir, tfile);
    /* delete old copy */
    unlink (tbuf);
    /* open a socket and fill in socket information */
    if( (xpa->fd = xsocket(AF_UNIX, SOCK_STREAM, 0)) < 0 )
      goto error;
    setsockopt(xpa->fd, SOL_SOCKET, SO_KEEPALIVE,
	       (char *)&keep_alive, sizeof(keep_alive));
    memset((char *)&sock_in, 0, sizeof(sock_in));
    sock_un.sun_family = AF_UNIX;
    strcpy(sock_un.sun_path, tbuf);
    /* unset umask so that everyone can read and write */
    oum = umask(0);
    /* bind to the file */
    got = xbind(xpa->fd, (struct sockaddr *)&sock_un, sizeof(sock_un));
    /* reset umask */
    umask(oum);
    /* now check for bind error */
    if( got < 0 )
      goto error;
    /* path is the method */
    xpa->method = xstrdup(tbuf);
    break;
#endif
  default:
    goto error;
  }

  /* listen for connections */
  if( listen(xpa->fd, XPA_MAXLISTEN) < 0 )
    goto error;

  /* make sure we close on exec */
  xfcntl(xpa->fd, F_SETFD, FD_CLOEXEC);

  /* add this xpa to end of list of xpas */
  XPAListAdd(&xpahead, xpa);

  /* publish this entry to the world */
  if( nsregister )
    XPANSAdd(xpa, NULL, NULL);

  /* make it active */
  XPAActive(xpa, NULL, 1);

#if NO_AUTOMATIC_HAVE_ATEXIT
  /* register XPA atexit funtion */
  if( !atexitinit ){
    atexit(_XPAAtExit);
    atexitinit = getpid();
  }
#endif

  /* return good news */
  return(xpa);

error:
  XPAFree(xpa);
  return(NULL);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAPoll
 *
 * Purpose:	non-blocking handling of XPA access points
 *		timeout in millisecs, but if negative, no timeout is used
 *
 * Returns:	number of requests processed (if maxreq >=0)
 *		number of requests pending   (if maxreq <0)
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int
XPAPoll (int msec, int maxreq)
#else
int XPAPoll(msec, maxreq)
     int msec;
     int maxreq;
#endif
{
  int sgot;
  int got=0;
  fd_set readfds;
  struct timeval tv;
  struct timeval *tvp;

again:
  if( msec >= 0 ){
    tv.tv_sec = msec / 1000;
    tv.tv_usec = (msec % 1000) * 1000;
    tvp = &tv;
  }
  /* negative value means just block and wait */
  else{
    tvp = NULL;
  }
  FD_ZERO(&readfds);
  if( XPAAddSelect(NULL, &readfds) ){
    sgot = xselect(swidth, &readfds, NULL, NULL, tvp);
    /* error -- what should we do? */
    if( sgot < 0 ){
      if( xerrno == EINTR )
	goto again;
      if( verbosity ){
	perror("XPAPoll() select");
      }
      exit(1);
    }
    /* timeout -- just return */
    else if( sgot == 0 )
      ;
    /* finally ... something to do */
    else{
      /* if maxreq < 0, just return how many are ready */
      if( maxreq < 0 )
	return(sgot);
      else
	got = XPAProcessSelect(&readfds, maxreq);
    }
  }
  return(got);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAMainLoop
 *
 * Purpose:	non-X programs event loop for handling XPA
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int
XPAMainLoop (void)
#else
int XPAMainLoop()
#endif
{
  int sgot;
  int got=0;
  fd_set readfds;


  FD_ZERO(&readfds);
  while( XPAAddSelect(NULL, &readfds) ){
    FPRINTF((stderr, "%sXPAMainLoop: waiting for select() ...\n", _sp));
    sgot = xselect(swidth, &readfds, NULL, NULL, NULL);
    FPRINTF((stderr, "%sXPAMainLoop: select() returned: %d\n", _sp, sgot));
    /* error -- what should we do? */
    if( sgot < 0 ){
      if( xerrno == EINTR ){
	FD_ZERO(&readfds);
	continue;
      }
      if( verbosity ){
	perror("XPAMainLoop() select");
      }
      exit(1);
    }
    /* can't happen, since we have no timeout */
    else if( sgot == 0 )
      ;
    /* finally ... something to do */
    else
      got += XPAProcessSelect(&readfds, 0);
    FD_ZERO(&readfds);
  }
  return(got);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPASleep
 *
 * Purpose:	sleep for specified milliseconds
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
void 
XPASleep (int msec)
#else
void XPASleep(msec)
     int msec;
#endif
{
  struct timeval tv;

  if( msec > 0 ){
    tv.tv_sec = msec / 1000;
    tv.tv_usec = (msec % 1000) * 1000;
    xselect(1, NULL, NULL, NULL, &tv);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAListHead
 *
 * Purpose:	semi-public routine to return the head of the xpa list
 *
 * Results:	XPA list pointer on success
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int
XPAMtype (void)
#else
int XPAMtype()
#endif
{
  return(mtype);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPATmpdir
 *
 * Purpose:	semi-public routine to return the tmpdir value
 *
 * Results:	tmpdir
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
char *
XPATmpdir (void)
#else
char * XPATmpdir()
#endif
{
  return(tmpdir);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPASetBuf
 *
 * Purpose:	set the return buffer in a server send callback
 *		(use mainly by tcl to transfer tcl buffers to C)
 *
 * Returns:	0 on success, -1 on failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPASetBuf (XPA xpa, char *buf, size_t len, int xcopy)
#else
int XPASetBuf(xpa, buf, len, xcopy)
     XPA xpa;
     char *buf;
     size_t len;
     int xcopy;
#endif
{
  /* sanity check */
  if( !xpa || !xpa->comm )
    return(-1);
  /* xcopy >0 => make a copy of the data, else just assign */
  if( xcopy ){
    xpa->comm->len = len;
    if( (xpa->comm->buf = (char *)xmalloc(len)) == NULL )
      return(-1);
    memcpy(xpa->comm->buf, buf, len);
  }
  else{
    xpa->comm->len = len;
    xpa->comm->buf = buf;
  }
  return(0);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPASetBuf
 *
 * Purpose:	set the return buffer in a server send callback
 *		(use mainly by tcl to transfer tcl buffers to C)
 *
 * Returns:	0 on success, -1 on failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPASetFree (XPA xpa, MyFree myfree, void *myfree_ptr)
#else
  int XPASetFree(xpa, myfree, myfree_ptr)
     XPA xpa;
     MyFree myfree;
     void *myfree_ptr;
#endif
{
  /* sanity check */
  if( !xpa || !xpa->comm ) return(-1);
  /* set the free routine and data pointer */
  xpa->comm->myfree = myfree;
  xpa->comm->myfree_ptr = myfree_ptr;
  return(0);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPACleanup
 *
 * Purpose:	make valgrind happy by freeing memory 
 *
 * Results:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
void XPACleanup (void)
#else
void XPACleanup ()
#endif
{
  XPAFreeReserved();
  XPAAclFree();
  if( tmpdir ){
    xfree(tmpdir);
    tmpdir = NULL;
  }
}

#ifdef ANSI_FUNC
void XPASaveJmp(void *env)
#else
void XPASaveJmp(env)
     void *env;
#endif
{
#if HAVE_SETJMP_H
  xalloc_savejmp((jmp_buf *)env);
#else
  return;
#endif
}
