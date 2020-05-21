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

static int ioerr=0;
static int doxpa=XPA_IOCALLSXPA;
static int _doxpa=1;
static int level=0;
static char _xpalevelspaces[SZ_LINE];

#if HAVE_MINGW32==0

static struct sigaction act1, oact1;

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAInterruptFunc
 *
 * Purpose:	function to call when interrupted
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void
XPAInterruptFunc (int signo)
#else
static void XPAInterruptFunc(signo)
	int signo;
#endif
{
  ioerr = 1;
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAInterruptSetup
 *
 * Purpose:	set up the InterruptSetup handler
 *
 * Returns:	0 for success, -1 for failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
XPAInterruptSetup (Sigfunc *func1)
#else
static int XPAInterruptSetup(func1)
	Sigfunc *func1;
#endif
{
  ioerr = 0;

  if( XPASigusr1() ){
    act1.sa_handler = func1;
    sigemptyset(&act1.sa_mask);
    act1.sa_flags = 0;
#ifdef SA_INTERRUPT
    act1.sa_flags |= SA_INTERRUPT;
#endif
    if( sigaction(SIGUSR1, &act1, &oact1) < 0 )
      return(-1);
  }
  return(0);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAInterruptStart
 *
 * Purpose:	set up sigaction for interrupt
 *
 * Returns:	0 for success, -1 for failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void
XPAInterruptStart (void)
#else
static void XPAInterruptStart()
#endif
{
  /* Disable SIGPIPE so we do not die if the client dies.
     Rather, we will get an EOF on reading or writing. */
  xsignal_sigpipe();

  /* set up the signal callbacks */
  XPAInterruptSetup(XPAInterruptFunc);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAInterruptEnd
 *
 * Purpose:	stop the interrupt handling
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void
XPAInterruptEnd (void)
#else
static void XPAInterruptEnd()
#endif
{
  /* restore old sigaction, if necessary */
  if( XPASigusr1() )
    XPAInterruptSetup(oact1.sa_handler);
}

#else

/* Windows does not support SIGUSR1 */
#define XPAInterruptStart()	ioerr=0
#define XPAInterruptEnd()

#endif

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAIOErrorCheck
 *
 * Purpose:	check to see if there was an error
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
XPAIOErrorCheck (void)
#else
static int XPAIOErrorCheck()
#endif
{
  return(ioerr);
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
 * Routine:	XPAGets
 *
 * Purpose:	read characters up a new-line -- sockets only
 *
 * Returns:	number of characters read
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAGets (XPA xpa, int fd, char *buf, int len, int timeout)
#else
int XPAGets(xpa, fd, buf, len, timeout)
     XPA xpa;
     int fd;
     char *buf;
     int len;
     int timeout;
#endif
{
  int cur;
  int got;
  int flags;
  int active;
  int firsttime;
  int done1, done2;
  int swidth = FD_SETSIZE;
  struct timeval tv;
  struct timeval *tvp;
  fd_set readfds;
  fd_set writefds;

  /* do we allow xpa processing within this routine? */
  _doxpa = 1;

  /* start out pessimistically */
  *buf = '\0';

  /* make sure we have a valid channel */
  if( fd < 0 ) return(-1);

  /* make sure we have a valid len */
  if( len <= 0 ) return(-1);

  FPRINTF((stderr, "%sXPAGets: %d entering to read %d bytes\n", _sp, fd, len));

  /* start the interrupt handler */
  XPAInterruptStart();

  /* turn this xpa off */
  active = XPAActive(xpa, xpa_comm(xpa), 0);

  /* put socket into non-blocking mode */
  xfcntl_nonblock(fd,flags);

  /* grab characters up to a new-line or max len */
  cur = 0;
  done1 = (cur >= (len-1));
  firsttime = 1;
  while( !done1 ){
    /* first time through we try the primary IO before selecting */
    if( !firsttime ){
      /* set up timer, if necessary */
      if( timeout >= 0 ){
	tv.tv_sec = timeout;
	tv.tv_usec = 0;
	tvp = &tv;
      }
      else{
	tvp = NULL;
      }
      /* select this socket and all XPA server sockets */
      FD_ZERO(&readfds);
      FD_SET(fd, &readfds);
      FD_ZERO(&writefds);
      if( doxpa && _doxpa ){
	XPAClientAddSelect(NULL, &readfds, &writefds);
	XPAAddSelect(NULL, &readfds);
      }
      /* wait for the IO ready */
      FPRINTF((stderr, "%sXPAGets: select on fd %d ...", _sp, fd));
      got = xselect(swidth, &readfds, &writefds, NULL, tvp);
      FPRINTF((stderr, " returned %d\n", got));
      /* check for user interrupt or error or timeout */
      if( XPAIOErrorCheck() || (got <=0) ){
	cur = -1;
	done1 = 1;
	continue;
      }
      /* if socket is not ready, process XPA's and try again */
      if( !FD_ISSET(fd, &readfds) ){
	if( doxpa && _doxpa ){
	  XPALevelSet(1);
	  XPAClientProcessSelect(NULL, &readfds, &writefds, 0);
	  XPAProcessSelect(&readfds, 0);
	  XPALevelSet(-1);
	}
	continue;
      }
    }
    else{
      firsttime = 0;
    }
    done2 = 0;
    while( !done1 && !done2 ){
      /* get data */
      got = recv(fd, &(buf[cur]), 1, 0);
      /* check for user interrupt */
      if( XPAIOErrorCheck() ){
	cur = -1;
	done1 = 1;
	continue;
      }
      /* process result code */
      switch(got){
      case -1:
	/* socket would block */
	if((xerrno == EINPROGRESS) ||
	   (xerrno == EWOULDBLOCK) || 
	   (xerrno == EAGAIN) 	   ){
	  FPRINTF((stderr, "%sXPAGets: recoverable recv fd=%d errno=%d\n",
		   _sp, fd, xerrno));
	  done2 = 1;
	}
	/* error of some sort */
	else{
	  FPRINTF((stderr, "%sXPAGets: error recv fd=%d errno=%d\n",
		   _sp, fd, xerrno));
	  PERROR(("XPAGets recv"));
	  cur = -1;
	  done1 = 1;
	}
	break;
      case 0:
	/* EOF */
	done1 = 1;
	break;
      default:
	/* got a valid byte -- check for EOL */
	if( buf[cur++] == '\n' ){
	  /* change \r\n to \n */
	  if( (cur >= 2) && (buf[cur-2] == '\r') ){
	    cur--;
	    buf[cur-1] = '\n';
	  }
	  done1 = 1;
	}
	else{
	  done1 = cur >= (len-1);
	}
	break;
      }
    }
  }

  /* restore socket mode */
  xfcntl_restore(fd,flags);

  /* restore active flag */
  XPAActive(xpa, xpa_comm(xpa), active);

  /* stop the interrupt handler */
  XPAInterruptEnd();

  if( cur >= 0 ){
    buf[cur] = '\0';
  }
  else{
    buf[0] = '\0';
  }
  FPRINTF((stderr, "%sXPAGets: %d read %d bytes:\n%.80s", _sp, fd, cur, buf));

  /* return error code or length */
  return(cur);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAPuts
 *
 * Purpose:	write a line of characters up to a newline -- sockets only
 *
 * Returns:	number of characters written
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAPuts (XPA xpa, int fd, char *buf, int timeout)
#else
int XPAPuts(xpa, fd, buf, timeout)
     XPA xpa;
     int fd;
     char *buf;
     int timeout;
#endif
{
  int n;
  int total;
  int cur;
  int got;
  int flags;
  int active;
  int firsttime;
  int done1, done2;
  int swidth = FD_SETSIZE;
  struct timeval tv;
  struct timeval *tvp;
  fd_set readfds, writefds;

  /* do we allow xpa processing within this routine? */
  _doxpa = 1;

  /* make sure we have a valid channel */
  if( fd < 0 ) return(-1);

  /* determine how many characters to send */
  got = strlen(buf);
  for(total=0; total<got; total++){
    if( buf[total] == '\n' ){
      total++;
      break;
    }
  }
  FPRINTF((stderr, "%sXPAPuts: %d entering to write %d bytes\n",
	   _sp, fd, total));

  /* start the interrupt handler */
  XPAInterruptStart();

  /* turn this xpa off */
  active = XPAActive(xpa, xpa_comm(xpa), 0);

  /* put socket into non-blocking mode */
  xfcntl_nonblock(fd,flags);

  /* send characters up to a new-line */
  cur = 0;
  done1 = (cur >= total);
  firsttime = 1;
  while( !done1 ){
    /* first time through we try the primary IO before selecting */
    if( !firsttime ){
      /* set up timer, if necessary */
      if( timeout >= 0 ){
	tv.tv_sec = timeout;
	tv.tv_usec = 0;
	tvp = &tv;
      }
      else{
	tvp = NULL;
      }
      /* select this socket and all XPA server sockets */
      FD_ZERO(&readfds);
      FD_ZERO(&writefds);
      FD_SET(fd, &writefds);
      if( doxpa && _doxpa ){
	XPAClientAddSelect(NULL, &readfds, &writefds);
	XPAAddSelect(NULL, &readfds);
      }
      /* wait for the IO ready */
      FPRINTF((stderr, "%sXPAPuts: select on fd %d ...", _sp, fd));
      got = xselect(swidth, &readfds, &writefds, NULL, tvp);
      FPRINTF((stderr, " returned %d\n", got));
      /* check for user interrupt or error or timeout */
      if( XPAIOErrorCheck() || (got <=0) ){
	cur = -1;
	done1 = 1;
	continue;
      }
      /* if socket is not ready, process XPA's and try again */
      if( !FD_ISSET(fd, &writefds) ){
	FD_CLR(fd, &readfds);
	if( doxpa && _doxpa ){
	  XPALevelSet(1);
	  XPAClientProcessSelect(NULL, &readfds, &writefds, 0);
	  XPAProcessSelect(&readfds, 0);
	  XPALevelSet(-1);
	}
	continue;
      }
    }
    else{
      firsttime = 0;
    }
    done2 = 0;
    while( !done1 && !done2 ){
      /* calculate size of next chunk */
      if( (n = MIN(total-cur, XPA_IOSIZE)) <=0 ){
	done1 = 1;
	continue;
      }
      /* write the data */
      FPRINTF((stderr, "%sXPAPuts: send %d on fd %d ...", _sp, n, fd));
      got=send(fd, &buf[cur], n, 0);
      FPRINTF((stderr, " returned %d\n", got));
      /* check for user interrupt */
      if( XPAIOErrorCheck() ){
	cur = -1;
	done1 = 1;
	continue;
      }
      /* process return code */
      switch(got){
      case -1:
	/* socket would block */
	if((xerrno == EINPROGRESS) ||
	   (xerrno == EWOULDBLOCK) || 
	   (xerrno == EAGAIN) 	   ){
	  done2 = 1;
	}
	/* error of some sort */
	else{
	  cur = -1;
	  done1 = 1;
	}
	break;
      case 0:
	/* shouldn't happen */
	done1 = (cur >= total);
	break;
      default:
	/* sent some data */
	cur += got;
	done1 = (cur >= total);
	break;
      }
    }
  }

  /* restore socket mode */
  xfcntl_restore(fd,flags);

  /* restore active flag */
  XPAActive(xpa, xpa_comm(xpa), active);

  /* stop the interrupt handler */
  XPAInterruptEnd();
  FPRINTF((stderr, "%sXPAPuts: %d wrote %d bytes: %.50s",
	   _sp, fd, total, buf));
  /* return error code or length */
  return(cur);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAGetBuf
 *
 * Purpose:	read data from the xpa data socket until EOF -- sockets only
 *
 * Results:	0 on success, -1 on failure
 *		also allocates memory for buf and returns len
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAGetBuf (XPA xpa, int fd, char **buf, size_t *len, int timeout)
#else
int XPAGetBuf(xpa, fd, buf, len, timeout)
     XPA xpa;
     int fd;
     char **buf;
     size_t *len;
     int timeout;
#endif
{
  int n;
  int cur;
  int flags;
  int active;
  int firsttime;
  int done1, done2;
  int swidth = FD_SETSIZE;
  int got;
  size_t total;
  size_t slen;
  char *s=NULL;
  struct timeval tv;
  struct timeval *tvp;
  fd_set readfds;
  fd_set writefds;

  /* do we allow xpa processing within this routine? */
  _doxpa = 1;

  /* make sure we have a valid data channel */
  if( fd < 0 ) return(-1);

  /* make sure we have a valid buf ptr and len ptr */
  if( (len == NULL) || (buf == NULL) ) return(-1);

  FPRINTF((stderr, "%sXPAGetBuf: entering fd %d\n", _sp, fd));

  /* allocate the first buffer, if necessary */
  if( (*len != 0) && (*buf != NULL) ){
    slen = *len;
    total = *len;
    s = *buf;
  }
  else{
    slen = XPA_IOSIZE;
    total = 0;
    if( (s=(char *)xmalloc(slen)) == NULL )
      return(-1);
  }
  n = XPA_IOSIZE;

  /* start the interrupt handler */
  XPAInterruptStart();

  /* turn this xpa off */
  active = XPAActive(xpa, xpa_comm(xpa), 0);

  /* put socket into non-blocking mode */
  xfcntl_nonblock(fd,flags);

  /* grab bytes to EOF */
  done1 = 0;
  firsttime = 1;
  while( !done1 ){
    /* first time through we try the primary IO before selecting */
    if( !firsttime ){
      /* set up timer, if necessary */
      if( timeout >= 0 ){
	tv.tv_sec = timeout;
	tv.tv_usec = 0;
	tvp = &tv;
      }
      else{
	tvp = NULL;
      }
      /* select this socket and all XPA server sockets */
      FD_ZERO(&readfds);
      FD_SET(fd, &readfds);
      FD_ZERO(&writefds);
      if( doxpa && _doxpa ){
	XPAClientAddSelect(NULL, &readfds, &writefds);
	XPAAddSelect(NULL, &readfds);
      }
      /* wait for the IO ready */
      FPRINTF((stderr, "%sXPAGetBuf: select on fd %d ...", _sp, fd));
      got = xselect(swidth, &readfds, &writefds, NULL, tvp);
      FPRINTF((stderr, " returned %lu\n", (unsigned long)got));
      /* check for user interrupt or error or timeout */
      if( XPAIOErrorCheck() || (got <=0) ){
	cur = -1;
	done1 = 1;
	continue;
      }
      /* if socket is not ready, process XPA's and try again */
      if( !FD_ISSET(fd, &readfds) ){
	if( doxpa && _doxpa ){
	  XPALevelSet(1);
	  XPAClientProcessSelect(NULL, &readfds, &writefds, 0);
	  XPAProcessSelect(&readfds, 0);
	  XPALevelSet(-1);
	}
	continue;
      }
    }
    else{
      firsttime = 0;
    }
    done2 = 0;
    while( !done1 && !done2 ){
      /* make sure we have enough room */
      while( (total + n) > slen ){
	slen += (n*10);
	if( (s = (char *)xrealloc(s, slen)) == NULL ){
	  return(-1);
	}
      }
      /* get data */
      got = recv(fd, &(s[total]), n, 0);
      FPRINTF((stderr, "%sXPAGetBuf: %d got %d bytes (tried %d at %lu)\n", 
	       _sp, fd, got, n, (unsigned long)total));
      /* check for user interrupt */
      if( XPAIOErrorCheck() ){
	cur = -1;
	done1 = 1;
	continue;
      }
      /* process return code */
      switch(got){
      case -1:
	/* socket would block */
	if((xerrno == EINPROGRESS) ||
	   (xerrno == EWOULDBLOCK) || 
	   (xerrno == EAGAIN) 	   ){
	  done2 = 1;
	}
	/* error of some sort */
	else{
	  cur = -1;
	  done1 = 1;
	}
	break;
      case 0:
	/* EOF */
	cur = 0;
	done1 = 1;
	break;
      default:
	/* got data */
	total += got;
	break;
      }
    }
  }

  /* restore socket mode */
  xfcntl_restore(fd,flags);

  /* restore active flag */
  XPAActive(xpa, xpa_comm(xpa), active);

  /* stop the interrupt handler */
  XPAInterruptEnd();

  /* null terminate after last byte as a courtesy */
  if( cur == 0 ){
    s = (char *)xrealloc(s, total+1);
    s[total] = '\0';
    *buf = s;
    *len = total;
  }
  else{
    if( s ) xfree(s);
    *buf = NULL;
    *len = 0;
  }

  FPRINTF((stderr, "%sXPAGetBuf: leaving fd %d with %lu bytes\n", 
	   _sp, fd, (unsigned long)*len));

  /* return error code or length */
  return(cur);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAPutBuf
 *
 * Purpose:	write data to the xpa data socket -- sockets only
 *
 * Results:	0 on success, -1 for failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAPutBuf (XPA xpa, int fd, char *buf, size_t len, int timeout)
#else
int XPAPutBuf(xpa, fd, buf, len, timeout)
     XPA xpa;
     int fd;
     char *buf;
     size_t len;
     int timeout;
#endif
{
  int n;
  int cur;
  int got;
  int flags;
  int active;
  int firsttime;
  int done1, done2;
  int swidth = FD_SETSIZE;
  size_t total;
  struct timeval tv;
  struct timeval *tvp;
  fd_set readfds, writefds;

  /* do we allow xpa processing within this routine? */
  _doxpa = 1;

  /* make sure we have a valid data channel */
  if( fd < 0 ) return(-1);

  /* make sure we have a valid buf ptr and len ptr */
  if( (len == 0) || (buf == NULL) ) return(-1);

  FPRINTF((stderr, "%sXPAPutBuf: writing %lu bytes to %d\n",
	   _sp, (unsigned long)len, fd));

  /* start the interrupt handler */
  XPAInterruptStart();

  /* turn this xpa off */
  active = XPAActive(xpa, xpa_comm(xpa), 0);

  /* put socket into non-blocking mode */
  xfcntl_nonblock(fd,flags);

  cur = 0;
  total = len;
  /* write in batches until done */
  done1 = (cur >= total);
  firsttime = 1;
  while( !done1 ){
    /* first time through we try the primary IO before selecting */
    if( !firsttime ){
      /* set up timer, if necessary */
      if( timeout >= 0 ){
	tv.tv_sec = timeout;
	tv.tv_usec = 0;
	tvp = &tv;
      }
      else{
	tvp = NULL;
      }
      /* select this socket and all XPA server sockets */
      FD_ZERO(&readfds);
      FD_ZERO(&writefds);
      FD_SET(fd, &writefds);
      if( doxpa && _doxpa ){
	XPAClientAddSelect(NULL, &readfds, &writefds);
	XPAAddSelect(NULL, &readfds);
      }
      /* wait for the IO ready */
      FPRINTF((stderr, "%sXPAPutBuf: select on fd %d ...", _sp, fd));
      got = xselect(swidth, &readfds, &writefds, NULL, tvp);
      FPRINTF((stderr, " returned %d\n", got));
      /* check for user interrupt or error or timeout */
      if( XPAIOErrorCheck() || (got <=0) ){
	cur = -1;
	done1 = 1;
	continue;
      }
      /* if socket is not ready, process XPA's and try again */
      if( !FD_ISSET(fd, &writefds) ){
	if( doxpa && _doxpa ){
	  XPALevelSet(1);
	  XPAClientProcessSelect(NULL, &readfds, &writefds, 0);
	  XPAProcessSelect(&readfds, 0);
	  XPALevelSet(-1);
	}
	continue;
      }
    }
    else{
      firsttime = 0;
    }
    done2 = 0;
    while( !done1 && !done2 ){
      /* calculate size of next chunk */
      if( (n = MIN(total-cur, XPA_IOSIZE)) <=0 ){
	done1 = 1;
	continue;
      }
      /* write the data */
      got=send(fd, &buf[cur], n, 0);
      FPRINTF((stderr, "%sXPAPutBuf: %d sent %lu bytes (tried %d at %d)\n", 
	       _sp, fd, (unsigned long)got, n, cur));
      /* check for user interrupt */
      if( XPAIOErrorCheck() ){
	cur = -1;
	done1 = 1;
	continue;
      }
      /* process result code */
      switch(got){
      case -1:
	PERROR(("XPAPutBuf send"));
	/* socket would block */
	if((xerrno == EINPROGRESS) ||
	   (xerrno == EWOULDBLOCK) || 
	   (xerrno == EAGAIN) 	   ){
	  done2 = 1;
	}
	/* error of some sort */
	else{
	  cur = -1;
	  done1 = 1;
	}
	break;
      case 0:
	/* EOF */
	done1 = 1;
	break;
      default:
	/* got some data */
	cur += got;
	done1 = (cur >= total);
	break;
      }
    }
  }

  /* restore socket mode */
  xfcntl_restore(fd,flags);

  /* restore active flag */
  XPAActive(xpa, xpa_comm(xpa), active);

  /* stop the interrupt handler */
  XPAInterruptEnd();

  /* return error code or length */
  return(cur);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAIOCallsXPA
 *
 * Purpose:	function to flag whether IO calls also call XPA
 *
 * Returns:	old value
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int
XPAIOCallsXPA (int flag)
#else
int XPAIOCallsXPA(flag)
     int flag;
#endif
{
  int old_doxpa;

  old_doxpa=doxpa;
  doxpa = flag;
  return old_doxpa;
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPALevelSpaces
 *
 * Purpose:	return string containing spaces for debugging process level
 *
 * Returns:	string
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
char *XPALevelSpaces (void)
#else
char *XPALevelSpaces()
#endif
{
  return(_xpalevelspaces);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPALevelSet
 *
 * Purpose:	set processing level and update level string for debugging
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
void
XPALevelSet (int lev)
#else
void XPALevelSet(lev)
#endif
{
#ifdef XPA_DEBUG
  int i;
  int spaces;
  int maxspaces;
  char tbuf[SZ_LINE];
#endif

  level += lev;
  _xpalevelspaces[0] = '\0';        
#ifdef XPA_DEBUG
  sprintf(tbuf, "#%d:", level);
  maxspaces = SZ_LINE - strlen(tbuf);
  if( level < maxspaces )
    spaces = level;
  else
    spaces = maxspaces-1;
  for(i=0; i<spaces; i++){
    _xpalevelspaces[i] = ' ';
    _xpalevelspaces[i+1] = '\0';        
  }    
  strncat(_xpalevelspaces, tbuf, SZ_LINE);
#endif
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPALevelGet
 *
 * Purpose:	get processing level
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int
XPALevelGet (void)
#else
int XPALevelGet()
#endif
{
  return level;
}

