/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

/*
 *
 * GIO -- generalized I/O to disk files, streams, and memory
 *
 */

#include <gio.h>
#include <find.h>
#include <word.h>
#include <zlib.h>

/*
 *
 * Private Routines
 *
 */

#define GBUFSZ 32768
static char _gtbuf[GBUFSZ];

static char _gerrors[GBUFSZ];
static int _gerror = -1;

static char _gwarnings[GBUFSZ];
static int _gwarning = -1;

static int _gcrnl = 1;

/*
 *
 * gext -- return extension from a file (without bracket extension)
 *
 */
#ifdef ANSI_FUNC
static char *
gext(char *fname)
#else
static char *gext(fname)
     char *fname;
#endif
{
  char *s, *t=NULL;
  char *file;
 
  if( !fname || !*fname )
    return(NULL);
  /* make a working copy */
  file = xstrdup(fname);
  /* remove the bracket extension */
  if( (s=strchr(file, '[')) ){
    *s = '\0';
  }
  /* look for a file extension */
  if( (s = strrchr(file, '.')) ){
    strncpy(_gtbuf, s, GBUFSZ-2);
    _gtbuf[GBUFSZ-1] = '\0';
    t = _gtbuf;
  }
  /* free working copy */
  if( file ) xfree(file);
  /* return extension */
  return(t);
}
                                                         

/*
 *
 * gnew -- create a new GIO structure
 *
 */
#ifdef ANSI_FUNC
static GIO
gnew (void)
#else
static GIO gnew()
#endif
{
  GIO gio;
  gio = (GIO)xcalloc(1, sizeof(GFile));
  gio->ifd = -1;
  gio->ofd = -1;
  return(gio);
}

/*
 *
 * gfree -- destroy a GIO structure
 *
 */
#ifdef ANSI_FUNC
static void
gfree (GIO gio)
#else
static void gfree(gio)
     GIO gio;
#endif
{
  if( gio == NULL )
    return;
  if( gio->name )
    xfree(gio->name);
  if( gio->mode )
    xfree(gio->mode);
  if( gio->crbuf )
    xfree(gio->crbuf);
  xfree((void *)gio);
}


/*
 *
 * gmemseek -- memory "seek" of data
 *
 */
#ifdef ANSI_FUNC
static off_t
gmemseek (GIO gio, off_t offset, int whence)
#else
static off_t gmemseek(gio, offset, whence)
     GIO gio;
     off_t offset;
     int whence;
#endif
{
  int offset2;

  switch(whence){
  case 0:
    offset2 = offset;
    break;
  case 1:
    offset2 = gio->cur + offset;
    break;
  case 2:
    offset2 = gio->len + offset;
    break;
  default:
    return(-1);
  }
  if( offset2 >= gio->len ){
    if( gio->extend ){
      gio->len = offset2 + 1;
      gio->buf = (char *)xrealloc(gio->buf, gio->len);
      gio->cur = offset2;
      return(0);
    }
    else{
      return(-1);
    }
  } else {
    gio->cur = offset2;
    return(0);
  }
}

/*
 *
 * gmemread -- memory "read" of data
 *
 */
#ifdef ANSI_FUNC
static void *
gmemread (GIO gio, void *buf, size_t size, size_t n, size_t *got)
#else
static void *gmemread(gio, buf, size, n, got)
     GIO gio;
     void *buf;
     size_t size;
     size_t n;
     size_t *got;
#endif
{
  char *obuf;

  /* sanity checks */
  if( (gio==NULL) || (gio->buf == NULL) )
    return((void *)NULL);
  if( !strchr(gio->mode, 'r') && !strstr(gio->mode, "w+") ){
    gerror(stderr,
	   "illegal read operation on write-only data (%s)\n", gio->name);
    return((void *)NULL);
  }
  /* see how much we can grab to "EOF" */
  if( size <= 0 ) size = 1;
  *got = MIN(size*n, ((gio->len - gio->cur)/size)*size);
  /* copy bytes, if a buffer was supplied */
  if( buf ){
    obuf = buf;
    memmove(obuf, &(gio->buf[gio->cur]), *got);
  }
  else{
    obuf = &(gio->buf[gio->cur]);
  }
  /* bump position pointer */
  gio->cur += *got;
  /* convert got to elements */
  *got /= size;
  /* return buffer */
  return(obuf);
}

/*
 *
 * gmemwrite -- memory "write" of data
 *
 */
#ifdef ANSI_FUNC
static int
gmemwrite (GIO gio, char *buf, size_t size, size_t n)
#else
static int gmemwrite(gio, buf, size, n)
     GIO gio;
     char *buf;
     size_t size;
     size_t n;
#endif
{
  size_t n2;
  int len;

  /* sanity checks */
  if( (gio==NULL) || (gio->buf == NULL) )
    return(0);
  if( !strchr(gio->mode, 'w') && !strstr(gio->mode, "r+") ){
    gerror(stderr,
	   "illegal write operation on read-only data (%s)\n", gio->name);
    return(0);
  }
  len = size*n;
  /* make sure we have enough space */
  if( gio->cur + len >= gio->len ){
    if( gio->extend ){
      gio->len += MAX(len, GIO_BUFINC);
      if( (gio->buf = (char *)xrealloc(gio->buf, gio->len)) != NULL )
	n2 = len;
      /* could not grab space -- try just a bit to recover */
      else{
	gerror(stderr, "could not realloc space for memory write\n");
	n2 = 0;
      }
    }
    else{
      n2 = gio->len - gio->cur;
    }
  }
  else
    n2 = len;
  /* copy bytes */
  memmove(&(gio->buf[gio->cur]), buf, n2);
  /* bump pointer */
  gio->cur += n2;
  return(n/size);
}

#if HAVE_MINGW32==0
/* 
 *
 * gexec -- open a connected subprocess with bidirectional
 * IPC channels, implemented with pipes for this version
 *
 */
#ifdef ANSI_FUNC
static int
gexec(GIO gio, char *cmd, char *mode)
#else
static int gexec(gio, cmd, mode)
     GIO gio;
     char *cmd;
     char *mode;
#endif
{
  int pin[2], pout[2];
  int maxforks = 3;
  char *argv[4096];

  /* start out pessimisticaly */
  gio->ifd = -1;
  gio->ofd = -1;

  /* open pipes */
  pipe(pin);
  if( pipe(pout) != 0){
    return(-1);
  }

  /* Create child process. The child inherits the open stdio files. 
   * The fork can fail if swap space is full or if we have too many processes.
   */
  while ((gio->pid = fork()) == -1) {
    if (--maxforks == 0) {
      close(pin[0]);  close(pin[1]);
      close(pout[0]); close(pout[1]);
      return(-1);
    }
    sleep (2);
  }
  if(gio->pid == 0) {
    /* New child process.  Make child think the pipe is its stdin/out.
     */
    close(pin[0]);
    close(pout[1]);
    close(0);  dup (pout[0]);  close(pout[0]);
    close(1);  dup (pin[1]);   close(pin[1]);

    /* run through shell so that we expand shell meta characters */
    argv[0] = "sh";
    argv[1] = "-c";
    argv[2] = cmd;
    argv[3] = NULL;

    /* Exec the new process.  Will not return if successful. */
    execvp(argv[0], (void *)argv);
    
    /* If we get here the new process could not be executed for some
     * reason.  Shutdown, calling _exit to avoid flushing parent's
     * io buffers.
     */
    _exit(1);
  } else {
    /* Existing, parent process. */
    close(pin[1]);
    close(pout[0]);
    if( strchr(mode, 'r') )
      gio->ifd  = pin[0];
    else{
      close(pin[0]);
    }
    if( strchr(mode, 'w') )
      gio->ofd = pout[1];
    else{
      close(pout[1]);
    }
  }
  /* clean up and return */
  return(0);
}

/*
 *
 * gopenpipe -- open a command pipe
 *
 */
#ifdef ANSI_FUNC
static GIO
gopenpipe (char *name, char *mode)
#else
static GIO gopenpipe(name, mode)
     char *name;
     char *mode;
#endif
{
  GIO gio;
  char *s;

  /* allocate the new struct */
  if( (gio = gnew()) == NULL )
    return(NULL);

  /* skip past prefix */
  s = name;
  if( !strncasecmp(s, "pipe:", 5) ) s += 5;
  while( isspace((int)*s) ) s++;

  /* start the piped process */
  if( gexec(gio, s, mode) != 0 ){
    gclose(gio);
    return(NULL);
  }

  /* fill in the record */
  gio->name = xstrdup(s);
  gio->mode = xstrdup(mode);
  gio->type = GIO_PIPE;
  gio->extend = 0;
  return(gio);
}
#endif

/*
 *
 * giohostip -- convert ascii host into ip number
 *
 */
#ifdef ANSI_FUNC
static unsigned int 
giohostip (char *xhost)
#else
static unsigned int giohostip(xhost)
    char *xhost;
#endif
{
    struct hostent *hostent;
    unsigned int ip;
    char temp[SZ_LINE];

    /* null input means current host */
    if( (xhost == NULL) || (*xhost == '\0') || !strncmp(xhost, "$host", 5) ){
      gethostname(temp, SZ_LINE);
    } else {
      strcpy(temp, xhost);
    }

    /* special check */
    if( !strcmp(temp, "$localhost") ){
      return(0x7F000001);
    }

    /*
     * Try looking by address (i.e., host is something like "128.84.253.1").
     * Do this first because it's much faster (no trip to the DNS)
     */
    if( (int)(ip = inet_addr(temp)) != -1 ){
	return(ntohl(ip));
    }

    /*
     * Try looking it up by name. If successful, the IP address is in
     * hostent->h_addr_list[0]
     */
    if( (hostent = gethostbyname(temp)) != NULL ){
	memcpy(&ip, hostent->h_addr_list[0], (size_t)hostent->h_length);
	return(ntohl(ip));
    }

    /* could not convert */
    return(0);
}

/*
 *
 * gioparseipport -- parse ascii string into a host and port
 *
 */
#ifdef ANSI_FUNC
static int 
gioparseipport (char *host, unsigned int *ip, unsigned short *port)
#else
static int gioparseipport(host, ip, port)
     char *host;
     unsigned int *ip;
     unsigned short *port;
#endif
{
  char *s1, *p1, *p2;
  int got;

  /* start out pessimistically */
  *ip = 0;
  *port = 0;

  /* make sure we have something to work with */
  if( !host || !*host )
    return(0);

  /* we null out ':' (so that what comes before is the host name) and
     bump past it to point to the port */
  s1 = xstrdup(host);
  if( !(p1 = (char *)strchr(s1, ':')) ){
    got = 0;
    goto done;
  }
  *p1 = '\0';
  p1++;

  /* get port */
  p2 = NULL;
  *port = (unsigned short)strtol(p1, &p2, 0);
  /* check for bad port number -- we lose */
  if( *port <=0 || (p1 == p2) ){
    *port = 0;
    got = 0;
    goto done;
  }

  /* convert ip string (might be null) to an ip address */
  if( (*ip = giohostip(s1)) == 0 ){
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
 *
 * gopensocket -- open a socket for reading and/or writing
 *
 */
#ifdef ANSI_FUNC
static GIO
gopensocket (char *name, char *mode)
#else
static GIO gopensocket(name, mode)
     char *name;
     char *mode;
#endif
{
  char *s;
  char tbuf[SZ_LINE];
  int fd=-1;
  int fd2=-1;
  int status;
  int tries;
  int reuse_addr=1;
  int doaccept=-1;
  unsigned int ip;
  unsigned short port;
  socklen_t slen;
  struct sockaddr_in sock_in;
  struct timeval tv;
  fd_set readfds;
  GIO gio;

  /* allocate a new struct */
  if( (gio = gnew()) == NULL )
    return(NULL);

  /* skip past prefix */
  s = name;
  if( !strncasecmp(s, "socket:", 7) ) s += 7;
  while( isspace((int)*s) ) s++;

  /* if $host is the socket, we might also be specifying whether we
     connect ($host_c[onnect]) or accept ($host_a[ccept]). This allows
     either end to initiate the connection */
  if( !strncasecmp(s, "$host_a", 7) ){
    doaccept = 1;
    s = strchr(s,':');
  }
  else if( !strncasecmp(s, "$host_c", 7) ){
    doaccept = 0;
    s = strchr(s,':');
  }
  while( isspace((int)*s) ) s++;

  /* get host and port number */
  if( !gioparseipport(s, &ip, &port) )
    goto error;

  if( doaccept < 0 ){
    /* see whether we accept or connect */
    if( ip != giohostip(NULL) ){
      doaccept = 0;
    }
    else{
      if( strchr(mode, 'w') ){
	doaccept = 0;
      }
      else{
	doaccept = 1;
      }
    }
  }

  /* open socket for reading, i.e., reading 'stdin' from another host */
  if( doaccept ){
    /* set up listening socket, which will accept connection */
    if( (fd = socket(AF_INET, SOCK_STREAM, 0)) < 0 )
      goto error;
    setsockopt(fd, SOL_SOCKET, SO_REUSEADDR,
	       (char *)&reuse_addr, sizeof(reuse_addr));
    memset((char *)&sock_in, 0, sizeof(sock_in));
    sock_in.sin_family = AF_INET;
    sock_in.sin_addr.s_addr = htonl(INADDR_ANY);
    sock_in.sin_port = htons(port);
    /* bind to a port */
    if( bind(fd, (struct sockaddr *)&sock_in, sizeof(sock_in)) < 0 )
      goto error;
    /* listen for connections */
    if( listen(fd, 5) < 0 )
      goto error;
    /* use select() to wait for a connect, so that we can timeout */
    FD_ZERO(&readfds);
    FD_SET(fd, &readfds);
    tv.tv_sec = GIO_TIMEOUT;
    tv.tv_usec = 0;
    if( select(fd+1, &readfds, NULL, NULL, &tv) <=0)
      goto error;
    /* accept connection -- the goal of our striving */
    slen = sizeof(struct sockaddr_in);
    if((fd2=accept(fd, (struct sockaddr *)&sock_in, &slen)) <0)
      goto error;
    /* done with the listening socket */
    close(fd);
    /* make sure we close on exec */
    xfcntl(fd2, F_SETFD, FD_CLOEXEC);
    setsockopt(fd2, SOL_SOCKET, SO_REUSEADDR,
	       (char *)&reuse_addr, sizeof(reuse_addr));
    /* make sure the right fd is set properly */
    if( strchr(mode, 'r') ) gio->ifd = fd2;
    if( strchr(mode, 'w') ) gio->ofd = fd2;
  }
  /* open socket for writing, i.e., writing to 'stdout' on another host */
  else{
    tries = GIO_RETRIES;
    /* if we opened a socket for reading, use the next port for writing */
    if( gio->ifd >=0 )
      port++;
again:
    if( (fd2 = socket(AF_INET, SOCK_STREAM, 0)) < 0 ){
      gerror(stderr, "can't open socket (%s)\n", name);
      gfree(gio);
      return(NULL);
    }
    memset((char *)&sock_in, 0, sizeof(sock_in));
    sock_in.sin_family = AF_INET;
    sock_in.sin_addr.s_addr = htonl(ip);
    sock_in.sin_port = htons(port);
    /* try connecting to the specified socket */
    status=connect(fd2, (struct sockaddr *)&sock_in, sizeof(sock_in));
    /* handle error */
    if( status != 0 ){
      close(fd2);
      /* if the other process is not ready, we can wait a bit */
      if( (errno == ECONNREFUSED) && (--tries >0) ){
	gsleep(10);
	goto again;
      }
      else{
	goto error;
      }
    }
    /* make sure we close on exec */
    xfcntl(fd2, F_SETFD, FD_CLOEXEC);
    setsockopt(fd2, SOL_SOCKET, SO_REUSEADDR,
	       (char *)&reuse_addr, sizeof(reuse_addr));
    /* make sure the right fd is set properly */
    if( strchr(mode, 'r') ) gio->ifd = fd2;
    if( strchr(mode, 'w') ) gio->ofd = fd2;
  }

  /* fill in the record */
  gio->name = xstrdup(s);
  gio->mode = xstrdup(mode);
  gio->type = GIO_SOCKET;
  gio->extend = 0;
  /* return the good news */
  return(gio);

error:
  snprintf(tbuf, SZ_LINE-1, "in %s: %s\n", name, strerror(errno));
  gerror(stderr, tbuf);
  if( fd >=0 ) close(fd);
  return(NULL);
}

/*
 *
 * gopenstdio -- open stdin or stdout
 *
 */
#ifdef ANSI_FUNC
static GIO
gopenstdio (char *name, char *mode)
#else
static GIO gopenstdio(name, mode)
     char *name;
     char *mode;
#endif
{
  GIO gio;

  /* allocate a new struct */
  if( (gio = gnew()) == NULL )
    return(NULL);

  if( !strncasecmp(name, "stdout", 6) ||
      (!strncmp(name, "-", 1) && strchr(mode, 'w')) ){
    if( strchr(mode, 'r') ){
      gerror(stderr, "can't open STDOUT for reading\n");
      gfree(gio);
      return(NULL);
    }
    else{
      /* fill in the record */
      gio->name = xstrdup("stdout");
      gio->mode = xstrdup(mode);
      gio->type = GIO_STREAM;
      gio->extend = 0;
      gio->fp = stdout;
    }
  }
  /* look for stdin */
  else if( !strncasecmp(name, "stdin", 5) ||
	   (!strncmp(name, "-", 1) && strchr(mode, 'r')) ){
    if( strchr(mode, 'w') ){
      gerror(stderr, "can't open STDIN for writing\n");
      gfree(gio);
      return(NULL);
    }
    else{
      /* fill in the record */
      gio->name = xstrdup("stdin");
      gio->mode = xstrdup(mode);
      gio->type = GIO_STREAM;
      gio->extend = 0;
      gio->fp = stdin;
    }
  }
  else{
    gerror(stderr, "invalid stdout specification (%s)\n", name);
    gfree(gio);
    return(NULL);
  }
  /* return the good news */
  return(gio);
}

#ifdef HAVE_SYS_SHM_H
/*
 *
 * gopenshm -- open shared memory for reading or writing
 *
 */
#ifdef ANSI_FUNC
static GIO
gopenshm (char *name, char *mode)
#else
static GIO gopenshm(name, mode)
     char *name;
     char *mode;
#endif
{
  GIO gio;
  int shmid=-1;
  int shmkey=-1;
  int shmflg=0;
  int shmlen=0;
  int smode=0;
  char *shmaddr=NULL;
  char *shmbuf;
  char *s, *t;
  struct shmid_ds buf;

  /* allocate a new struct */
  if( (gio = gnew()) == NULL )
    return(NULL);

  /* skip past prefix */
  s = name;
  if( !strncasecmp(s, "shm:", 4) ) s += 4;
  while( isspace((int)*s) ) s++;

  /* fill in the record */
  gio->name = xstrdup(s);
  gio->mode = xstrdup(mode);
  gio->type = GIO_SHM;
  gio->extend = 0;

  /* parse the shared memory specification */
  if( !s || !*s ){
    gerror(stderr, "missing shared memory specification\n");
    goto error;
  }
  /* @ => shmkey, otherwise shmid */
  if( *s == '@' ){
    s++;
    if( !strncasecmp(s, "IPC_PRIVATE", 11) ){
      shmkey = IPC_PRIVATE;
      s += 11;
    }
    else{
      shmkey = strtol(s, &t, 0);
      s = t;
    }
  }
  else{
    shmid = strtol(s, &t, 0);
    s = t;
  }

  /* get length parameter, if necessary */
  if( *s == ':' ){
    s++;
    shmlen = strtol(s, &t, 0);
    s = t;
  }

  /* convert key to id, if necessary */
  if( shmid == -1 ){
    if( shmkey != -1 ){
      /* create if segment des not exist */
      if( strstr(mode, "w+") ){
	smode = 0664|IPC_CREAT;
      }
      /* open for reading and/or writing */
      else{
	if( strchr(mode, 'w') )
	  smode |= 0600;
	if( strchr(mode, 'r') )
	  smode |= 0400;
      }
      /* get shared memory area identifier */
      shmid = shmget(shmkey, shmlen, smode);
    }
    else{
      gerror(stderr, "invalid shared memory key (%s)\n", name);
      goto error;
    }
    /* at this point, we better have one */
    if( shmid == -1 ){
	gerror(stderr, "invalid shared memory id (%s)\n", name);
	goto error;
    }
  }

  /* get (optional) max len we are allowed to access (def: whole segment) */
  if( shmctl(shmid, IPC_STAT, &buf) == 0 ){
    if( (shmlen <= 0) || ((size_t)shmlen > buf.shm_segsz) ){
      shmlen = buf.shm_segsz;
    }
  }
  else{
    gerror(stderr, "can't determine memory mapping length (%s)\n", name);
    goto error;
  }

  /* finally ... map shared memory containing data */
  shmbuf = (char *)shmat(shmid, shmaddr, shmflg);
  if( shmbuf == (char *)-1){
    gerror(stderr, "can't map shared memory image (%s)\n", name);
    goto error;
  }

  /* set the access parameters */
  gio->buf = shmbuf;
  gio->len = shmlen;
  gio->cur = 0;
  gio->shmid = shmid;
  /* return the good news */
  return(gio);

error:
  gfree(gio);
  return(NULL);
}
#endif

#ifdef HAVE_SYS_MMAN_H
/*
 *
 * gopenmmap -- open memory mapped file for reading or writing
 *
 */
#ifdef ANSI_FUNC
static GIO
gopenmmap (char *name, char *mode)
#else
static GIO gopenmmap(name, mode)
     char *name;
     char *mode;
#endif
{
  GIO gio;
  int prot;
  int flags;
  int len;
  char *buf;
  char *s;
  struct stat statbuf;

  /* allocate a new struct */
  if( (gio = gnew()) == NULL )
    return(NULL);

  /* skip past prefix */
  s = name;
  if( !strncasecmp(s, "mmap:", 5) ) s += 5;
  while( isspace((int)*s) ) s++;

  /* fill in the record */
  gio->name = xstrdup(s);
  gio->mode = xstrdup(mode);
  gio->type = GIO_MMAP;

  /* open the file */
  gio->fp = fopen(s, gio->mode);
  if( gio->fp == NULL ){
    gerror(stderr, "can't open data file (%s)\n", s);
    goto error;
  }
  fstat(fileno(gio->fp), &statbuf);
  len = statbuf.st_size;
  prot = 0;
  if( strchr(mode, 'r') ) prot |= PROT_READ;
  if( strchr(mode, 'w') ) prot |= PROT_WRITE;
  flags = MAP_PRIVATE;
  buf = mmap(NULL, len, prot, flags, fileno(gio->fp), 0);
  fclose(gio->fp);
  if( buf == NULL ){
    gerror(stderr, "can't mmap data file (%s)\n", s);
    goto error;
  }
  gio->buf = (void *)buf;
  gio->len = len;
  gio->cur = 0;
  if( strchr(mode, 'w') ) 
    gio->extend = 1;
  else
    gio->extend = 0;
  /* return the good news */
  return(gio);

error:
  gfree(gio);
  return(NULL);
}
#endif

/*
 *
 * gopengzip -- open gzip'ed for reading or writing
 *
 */
#ifdef ANSI_FUNC
static GIO
gopengzip (char *name, char *mode)
#else
static GIO gopengzip(name, mode)
     char *name;
     char *mode;
#endif
{
  GIO gio;
  char *s;

  /* allocate a new struct */
  if( (gio = gnew()) == NULL )
    return(NULL);

  /* skip past prefix */
  s = name;
  if( !strncasecmp(s, "gzip:", 5) ) s += 5;
  while( isspace((int)*s) ) s++;

  /* fill in the record */
  gio->name = xstrdup(s);
  gio->mode = xstrdup(mode);
  gio->type = GIO_GZIP;
  gio->extend = 1;

  /* open stdin specially */
  if( !strncasecmp(name, "stdin", 5) ||
      (!strncmp(name, "-", 1) && strchr(mode, 'r')) ){
    gio->gz = (void *)gzdopen(dup(fileno(stdin)), gio->mode);
  }
  /* open stdout specially */
  else if( !strncasecmp(name, "stdout", 6) ||
	   (!strncmp(name, "-", 1) && strchr(mode, 'w')) ){
    gio->gz = (void *)gzdopen(dup(fileno(stdout)), gio->mode);
  }
  /* open the file */
  else{
    gio->gz = (void *)gzopen(s, gio->mode);
  }
  if( gio->gz == NULL ){
    gerror(stderr, "can't open gzip'ed data file (%s)\n", s);
    goto error;
  }
  else{
    return(gio);
  }

error:
  gfree(gio);
  return(NULL);
}


#ifdef ANSI_FUNC
static void *
_ggets (GIO gio, char *obuf, int len)
#else
static void *_ggets(gio, obuf, len)
     GIO gio;
     char *obuf;
     int len;
#endif
{
  int i, j, l;
  char *s=NULL;
  char *t=NULL;

  /* existence of crbuf => we already determined that the data uses cr
     instead of newline for end of line */
  if( gio->crbuf ){
    /* make sure we have a large enough buffer */
    if( len > gio->crlen ){
      gio->crbuf = xrealloc(gio->crbuf, len);
      gio->crlen = len;
    }
    /* grab from existing buffer, reading from file when necessary */
    for(i=0, j=0; i<(len-1);){
      /* did we reach the end of the cr buffer? */
      if( gio->crbuf[j] == '\0' ){
	/* yes, try to get more */
	if( !(s=fgets(gio->crbuf, gio->crlen, gio->fp)) ) break;
	/* reset cr buffer pointer to beginning */
	j = 0;
	/* continue processing at beginning of buffer */
	continue;
      }
      /* transfer character from cr buffer to output */
      obuf[i] = gio->crbuf[j];
      /* look for CR as end of line */
      if( obuf[i] == '\r' ){
	/* change it to a new-line */
	obuf[i++] = '\n';
	/* shift rest of start of cr buffer */
	memmove(gio->crbuf, &(gio->crbuf[j+1]), strlen(&(gio->crbuf[j+1]))+1);
	/* bump cr bbuf pointer */
	j++;
	break;
      }
      else{
	/* bump pointers to both buffers */
	i++; j++;
      }
    }
    obuf[i] = '\0';
    return((void *)obuf);
  }
  /* hopefully we have a nice, new-line delimited file */
  else{
    /* get next line, the usual way */
    s = fgets(obuf, len, gio->fp);
    /* return if we don't want t check, have no data, or already checked */
    if( !_gcrnl || !s || gio->crlen ) return s;
    /* if we did not get a new-line at the end, we either have a very long
       line, or we have a cr-delimited file */
    l = strlen(s);
    /* look for standard new-line */
    if( s[l-1] == '\n' ){
      /* found one -- flag that we have checked this file and return */
      gio->crlen=len;
      return s;
    }
    /* look for cr */
    if( !(t=strchr(s, '\r')) ){
      /* no new-line and no cr -- we'll have to check the next line as well */
      return s;
    }
    /* its cr-delimited */
    gio->crbuf = xmalloc(len);
    gio->crlen=len;
    /* copy everything after the cr to a save buffer */
    memmove(gio->crbuf, t+1, (s+l)-t);
    /* change cr to new-line */
    *t = '\n';
    /* null terminate */
    *(t+1) = '\0';
    return (void *)obuf;
  }
}

/*
 *
 * gopenfile -- open ordinary file for reading or writing
 *
 */
#ifdef ANSI_FUNC
static GIO
gopenfile (char *name, char *mode)
#else
static GIO gopenfile(name, mode)
     char *name;
     char *mode;
#endif
{
  char *s;
  GIO gio;

#if HAVE_MINGW32
  /* binary mode for mingw */
  _fmode = _O_BINARY;
#endif

  /* allocate a new struct */
  if( (gio = gnew()) == NULL )
    return(NULL);

  /* skip past prefix */
  s = name;
  if( !strncasecmp(s, "file:", 5) ) s += 5;
  if( !strncasecmp(s, "unfile:", 7) ){
    gio->unbuffered = 1;
    s += 7;
  }
  while( isspace((int)*s) ) s++;

  /* fill in the record */
  gio->name = xstrdup(s);
  gio->type = GIO_DISK;
  gio->extend = 1;
  gio->mode = xstrdup(mode);

  /* open the file */
  gio->fp = fopen(s, gio->mode);
  if( gio->fp == NULL ){
    gerror(stderr, "can't open data file (%s)\n", s);
    goto error;
  }
  else{
    return(gio);
  }

error:
  gfree(gio);
  return(NULL);
}

/*
 *
 * Public Routines
 *
 */

/*
 *
 * gopen -- open a file or a stream
 *
 */
#ifdef ANSI_FUNC
GIO
gopen (char *fname, char *mode)
#else
GIO gopen(fname, mode)
     char *fname;
     char *mode;
#endif
{
  GIO gio;
  unsigned int ip;
  unsigned short port;
  off_t len=0;
  char name[SZ_LINE];
  char *buf=NULL;
  char *tname=NULL;
  char *s, *t;

  /* make sure we have a valid fname */
  if( (fname==NULL) || (*fname=='\0') )
    return(NULL);

  /* escape clause so that we can NOT convert cr to nl in ggets */
  if( (s=getenv("GCRNL")) ){
    if( istrue(s) )
      _gcrnl = 1;
    else if( isfalse(s) )
      _gcrnl = 0;
  }

  /* make a temp file name */
  tname = xstrdup(fname);
  /* remove the bracket extension for everything except pipes */
  if( strncasecmp(tname, "pipe:", 5) ){
    if( (s=strchr(tname, '[')) ) *s = '\0';
  }

  /* expand environment variables to get working filename */
  ExpandEnv (tname, name, SZ_LINE-1);

  /* look for an explicit file */
  if( !strncasecmp(name, "file:", 5)   ||
      !strncasecmp(name, "unfile:", 7) || strchr(mode, 'u') )
    gio = gopenfile(name, mode);
  /* look for stdio */
  else if( (!strncasecmp(name, "stdin", 5)   || 
	    !strncasecmp(name, "stdout", 6)) &&
  	    !(gext(name) && !strcmp(gext(name),".gz")) )
    gio = gopenstdio(name, mode);
  else if( (*name == '-') && ((*(name+1) == '\0') || (*(name+1) == '[')) )
    gio = gopenstdio(name, mode);
#if HAVE_MINGW32==0
  /* look for command pipe */
  else if( !strncasecmp(name, "pipe:", 5) || strchr(mode, 'p') )
    gio = gopenpipe(name, mode);
#endif
#ifdef HAVE_SYS_MMAN_H
  /* look for a mapped file */
  else if( !strncasecmp(name, "mmap:", 5) || strchr(mode, 'm') )
    gio = gopenmmap(name, mode);
#endif
#ifdef HAVE_SYS_SHM_H
  /* look for shared memory segment */
  else if( !strncasecmp(name, "shm:", 4) || strchr(mode, 's') )
    gio = gopenshm(name, mode);
#endif
  /* look for data in memory (ordinary buffer) */
  else if( !strncasecmp(name, "mem:", 4) || 
	   !strncasecmp(name, "buf:", 4) || strchr(mode, 'b') ){
    s = name;
    if( !strncasecmp(name, "mem:", 4) || !strncasecmp(name, "buf:", 4) )
      s += 4;
    buf = (char *)strtoul(s, &t, 0);
    if( *t != ':' ){
      gerror(stderr, "illegal memory buffer specification (%s)\n", name);
      gio = NULL;
    }
    else{
      len = (off_t)strtoul(++t, NULL, 0);
      gio = gmemopen(buf, len, mode);
    }
  }
  /* look for a socket, in the form machine:port */
  else if( gioparseipport(name, &ip, &port) )
    gio = gopensocket(name, mode);
  /* look for gzip'ed file */
  else if( !strncasecmp(name, "gzip:", 5) || 
	   (gext(name) && !strcmp(gext(name),".gz")) )
    gio = gopengzip(name, mode);
  /* if all else fails, its an ordinary file */
  else
    gio = gopenfile(name, mode);

  /* free working space */
  if( tname ) xfree(tname);

  /* return results */
  return(gio);
}

/*
 *
 * gmemopen -- open memory for reading or writing
 *
 */
#ifdef ANSI_FUNC
GIO
gmemopen (char *buf, off_t len, char *mode)
#else
GIO gmemopen(buf, len, mode)
     char *buf;
     off_t len;
     char *mode;
#endif
{
  GIO gio;

  /* allocate a new struct */
  if( (gio = gnew()) == NULL )
    return(NULL);

  /* fill in the record */
  gio->name = xstrdup("MEMORY");
  gio->mode = xstrdup(mode);
  gio->type = GIO_MEMORY;

  /* process open type */
  if( strchr(mode, 'w') ){
    if( (buf!=NULL) && (len>0) ){
      gio->buf = (void *)buf;
      gio->len = len;
    }
    else{
      gio->buf = (char *)xmalloc(GIO_BUFINC);
      gio->len = GIO_BUFINC;
    }
    gio->cur = 0;
    gio->extend = 1;
  } else {
    gio->buf = (void *)buf;
    gio->len = len;
    gio->cur = 0;
    gio->extend = 0;
  }

  /* return the news */
  return(gio);
}

/*
 *
 * _gread -- read bytes from a data I/O structure
 *
 */
#ifdef ANSI_FUNC
void *
_gread (GIO gio, char *buf, size_t size, size_t n, size_t *got)
#else
void *_gread(gio, buf, size, n, got)
     GIO gio;
     char *buf;
     size_t size;
     size_t n;
     size_t *got;
#endif
{
  char *obuf;
  char *tptr;
  int get;
  int tgot;

  /* got nothing yet */
  *got = 0;

  /* sanity checks */
  if( gio==NULL )
    return(NULL);
  if( !strchr(gio->mode, 'r') && !strstr(gio->mode, "w+") ){
    gerror(stderr, 
	   "illegal read operation on write-only data (%s)\n", gio->name);
    return(NULL);
  }

  /* try to read */
  switch(gio->type){
  case GIO_DISK:
    if( buf )
      obuf = buf;
    else
      obuf = (char *)xmalloc(size*n);
    if( gio->unbuffered ){
      for(tptr=obuf, get=size*n; get>0; get -= tgot){
	tgot = read(fileno(gio->fp), tptr, get);
	if( tgot <0 ) {
	  *got = tgot;
	  break;
	}
	if( tgot == 0 ){
	  break;
	}
	else{
	  *got += tgot;
	  tptr += tgot;
	}
      }
      if( *got >0 )
	*got /= size;
    }
    else{
      *got = fread(obuf, size, n, gio->fp);
    }
    if( *got <= 0 ){
      if( !buf )
	xfree(obuf);
      obuf = NULL;
    }
    return(obuf);
  case GIO_STREAM:
    if( buf )
      obuf = buf;
    else
      obuf = (char *)xmalloc(size*n);
    *got = fread(obuf, size, n, gio->fp);
    if( *got <= 0 ){
      if( !buf )
	xfree(obuf);
      obuf = NULL;
    }
    return(obuf);
  case GIO_MEMORY:
    return(gmemread(gio, buf, size, n, got));
#ifdef HAVE_SYS_MMAN_H
  case GIO_MMAP:
    return(gmemread(gio, buf, size, n, got));
#endif
#ifdef HAVE_SYS_SHM_H
  case GIO_SHM:
    return(gmemread(gio, buf, size, n, got));
#endif
  case GIO_PIPE:
    if( buf )
      obuf = buf;
    else
      obuf = (char *)xmalloc(size*n);
    if( gio->ifd >=0 ){
      for(tptr=obuf, get=size*n; get>0; get -= tgot){
	tgot = read(gio->ifd, tptr, get);
	if( tgot <0 ) {
	  *got = tgot;
	  break;
	}
	else if( tgot ==0 ) {
	  break;
	}
	else{
	  *got += tgot;
	  tptr += tgot;
	}
      }
      if( *got > 0 )
	*got /= size;
    }
    if( *got <= 0 ){
      if( !buf )
	xfree(obuf);
      obuf = NULL;
    }
    else{
      gio->cur += *got;
    }
    return(obuf);
  case GIO_SOCKET:
    if( buf )
      obuf = buf;
    else
      obuf = (char *)xmalloc(size*n);
    if( gio->ifd >=0 ){
      for(tptr=obuf, get=size*n; get>0; get -= tgot){
	tgot = recv(gio->ifd, tptr, get, 0);
	if( tgot <0 ) {
	  *got = tgot;
	  break;
	}
	else if( tgot == 0 ) {
	  break;
	}
	else{
	  *got += tgot;
	  tptr += tgot;
	}
      }
      if( *got > 0 )
	*got /= size;
    }
    if( *got <= 0 ){
      if( !buf )
	xfree(obuf);
      obuf = NULL;
    }
    else{
      gio->cur += *got;
    }
    return(obuf);
  case GIO_GZIP:
    if( buf )
      obuf = buf;
    else
      obuf = (char *)xmalloc(size*n);
    *got = gzread(gio->gz, obuf, size * n);
    if( *got <= 0 ){
      if( !buf )
	xfree(obuf);
      obuf = NULL;
    }
    if( *got >0 )
      *got /= size;
    return(obuf);
  default:
    return(NULL);
  }
}

/*
 *
 * gread -- read bytes from a data I/O structure
 *
 */
#ifdef ANSI_FUNC
size_t
gread (GIO gio, char *buf, size_t size, size_t n)
#else
size_t gread(gio, buf, size, n)
     GIO gio;
     char *buf;
     size_t size;
     size_t n;
#endif
{
  size_t got;
  if( buf == NULL )
    return(0);
  _gread(gio, buf, size, n, &got);
  return (got);
}

/*
 *
 * gwrite -- write bytes to a structure
 *
 */
#ifdef ANSI_FUNC
size_t
gwrite (GIO gio, char *buf, size_t size, size_t n)
#else
size_t gwrite(gio, buf, size, n)
     GIO gio;
     char *buf;
     size_t size;
     size_t n;
#endif
{
  int got=0;

  /* sanity checks */
  if( gio==NULL )
    return(0);
  if( !strchr(gio->mode, 'w') && !strchr(gio->mode, 'a') && 
      !strstr(gio->mode, "r+") ){
    gerror(stderr, 
	   "illegal write operation on read-only data (%s)\n", gio->name);
    return(0);
  }

  switch(gio->type){
  case GIO_DISK:
    if( gio->unbuffered ){
      got = write(fileno(gio->fp), buf, size*n);
      if( got > 0 ) got /= size;
    }
    else{
      got = fwrite(buf, size, n, gio->fp);
    }
    break;
  case GIO_STREAM:
    got = fwrite(buf, size, n, gio->fp);
    break;
  case GIO_MEMORY:
    got = gmemwrite(gio, buf, size, n);
    break;
#ifdef HAVE_SYS_MMAN_H
  case GIO_MMAP:
    got = gmemwrite(gio, buf, size, n);
    break;
#endif
#ifdef HAVE_SYS_SHM_H
  case GIO_SHM:
    got = gmemwrite(gio, buf, size, n);
    break;
#endif
  case GIO_PIPE:
    if( gio->ofd >= 0 ){
      got = write(gio->ofd, buf, size * n);
      if( got > 0 ){
	gio->cur += got;
	got /= size;
      }
    }
    break;
  case GIO_SOCKET:
    if( gio->ofd >= 0 ){
      got = send(gio->ofd, buf, size * n, 0);
      if( got > 0 ){
	gio->cur += got;
	got /= size;
      }
    }
    break;
  case GIO_GZIP:
    got = gzwrite(gio->gz, buf, size*n);
    if( got >=0 ) got /= size;
    break;
  default:
    break;
  }
  return(got);
}

#ifdef ANSI_FUNC
void *
ggets (GIO gio, char *buf, int len)
#else
void *ggets(gio, buf, len)
     GIO gio;
     char *buf;
     int len;
#endif
{
  int i=0;
  int got;
  char *obuf=NULL;

  /* sanity checks */
  if( !gio )
    return NULL;
  if( !strchr(gio->mode, 'r') && !strstr(gio->mode, "w+") ){
    gerror(stderr, 
	   "illegal read operation on write-only data (%s)\n", gio->name);
    return NULL;
  }

  /* allocate buffer, if necessary */
  if( buf )
    obuf = buf;
  else
    obuf = (char *)xmalloc(len);

  /* start out clean */
  *obuf = '\0';

  switch(gio->type){
  case GIO_STREAM:
    _ggets(gio, obuf, len);
    if( !obuf || !*obuf ){
      if( !buf ) xfree(obuf);
      obuf = NULL;
    }
    return obuf;
  case GIO_DISK:
    if( !gio->unbuffered ){
      _ggets(gio, obuf, len);
      if( !obuf || !*obuf ){
	if( !buf ) xfree(obuf);
	obuf = NULL;
      }
      return obuf;
    }
 default:
    /* grab characters up to a new-line or max len */
    while( i < (len-1) ){
      got = gread(gio, &(obuf[i]), sizeof(char), 1);
      if( got < 0 ){
	i = 0;
	break;
      }
      else if( got == 0 )
	break;
      else if( obuf[i] == '\n' ){
	i++;
	break;
      }
      else if( (obuf[i] == '\r') && _gcrnl ){
	obuf[i] = '\n';
	i++;
	break;
      }
      else{
	i++;
      }
    }
    obuf[i] = '\0';
    if( i == 0 ){
      if( !buf ) xfree(obuf);
      obuf = NULL;
    }
    return((void *)obuf);
  }
}

#ifdef __STDC__
int
gprintf(GIO gio, char *format, ...) 
{
    int got;
    va_list args;
    va_start(args, format);
#else
int gprintf(va_alist) va_dcl
{
    GIO gio
    char *format;
    int got;
    va_list args;

    va_start(args);
    gio  = va_arg(args, GIO);
    format = va_arg(args, char *);
#endif
    got = vsnprintf(_gtbuf, GBUFSZ, format, args);
    if( got > GBUFSZ ){
      gerror(stderr, "gprintf string too long (%d > %d)\n", got, GBUFSZ);
      return -1;
    }
    else{
      return gwrite(gio, _gtbuf, sizeof(char), strlen(_gtbuf));
    }
}

/*
 *
 * gflush -- flush I/O
 *
 */
#ifdef ANSI_FUNC
int
gflush (GIO gio)
#else
int gflush(gio)
     GIO gio;
#endif
{
  /* sanity checks */
  if( gio==NULL )
    return(-1);

  switch(gio->type){
  case GIO_DISK:
    if( gio->unbuffered )
      return(0);
    else
      return(fflush(gio->fp));
  case GIO_STREAM:
    return(fflush(gio->fp));
  case GIO_MEMORY:
    return(0);
#ifdef HAVE_SYS_MMAN_H
  case GIO_MMAP:
    return(0);
#endif
#ifdef HAVE_SYS_SHM_H
  case GIO_SHM:
    return(0);
#endif
  case GIO_PIPE:
    return(0);
  case GIO_SOCKET:
    return(0);
  case GIO_GZIP:
    return(0);
  default:
    return(-1);
  }
}

/*
 *
 * gseek -- set current pointer position in a "file"
 *
 */
#ifdef ANSI_FUNC
off_t
gseek (GIO gio, off_t offset, int whence)
#else
off_t gseek(gio, offset, whence)
     GIO gio;
     off_t offset;
     int whence;
#endif
{
  off_t opos;
  /* sanity checks */
  if( gio==NULL )
    return(-1);

  switch(gio->type){
  case GIO_DISK:
    if( gio->unbuffered )
      return(lseek(fileno(gio->fp), offset, whence));
    else{
#if USE_FSEEKO
      opos = ftello(gio->fp);
      if( fseeko(gio->fp, offset, whence) == 0 ){
	return(opos);
      }
      else{
	return(-1);
      }
#else
      opos = ftell(gio->fp);
      if( fseek(gio->fp, (long)offset, whence) == 0 ){
	return(opos);
      }
      else{
	return(-1);
      }
#endif
    }
  case GIO_STREAM:
    if( whence == SEEK_CUR )
      return( gskip(gio, offset) );
    else{
#if USE_FSEEKO
      opos = ftello(gio->fp);
      if( fseeko(gio->fp, offset, whence) == 0 ){
	return(opos);
      }
      else{
	return(-1);
      }
#else
      opos = ftell(gio->fp);
      if( fseek(gio->fp, (long)offset, whence) == 0 ){
	return(opos);
      }
      else{
	return(-1);
      }
#endif
    }
  case GIO_MEMORY:
    return(gmemseek(gio, offset, whence));
#ifdef HAVE_SYS_MMAN_H
  case GIO_MMAP:
    return(gmemseek(gio, offset, whence));
#endif
#ifdef HAVE_SYS_SHM_H
  case GIO_SHM:
    return(gmemseek(gio, offset, whence));
#endif
  case GIO_PIPE:
    if( whence == SEEK_CUR )
      return( gskip(gio, offset) );
    else
      return(-1);
  case GIO_SOCKET:
    if( whence == SEEK_CUR )
      return( gskip(gio, offset) );
    else
      return(-1);
  case GIO_GZIP:
    return(gzseek(gio->gz, offset, whence));
  default:
    return(-1);
  }
}

/*
 *
 * gtell -- return current pointer position in a "file"
 *
 */
#ifdef ANSI_FUNC
off_t
gtell (GIO gio)
#else
off_t gtell(gio)
     GIO gio;
#endif
{
#if USE_FTELLO
  off_t lval;
#else
  long lval;
#endif
  /* sanity checks */
  if( gio==NULL )
    return((off_t)-1);

  switch(gio->type){
  case GIO_DISK:
    if( gio->unbuffered )
      return(lseek(fileno(gio->fp), 0, SEEK_CUR));
    else
#if USE_FTELLO
      return(ftello(gio->fp));
#else
      return(ftell(gio->fp));
#endif
  case GIO_STREAM:
#if USE_FTELLO
    lval = ftello(gio->fp);
#else
    lval = ftell(gio->fp);
#endif
    if( lval >=0 )
      return lval;
    else
      return gio->cur;
  case GIO_MEMORY:
    return(gio->cur);
#ifdef HAVE_SYS_MMAN_H
  case GIO_MMAP:
    return(gio->cur);
#endif
#ifdef HAVE_SYS_SHM_H
  case GIO_SHM:
    return(gio->cur);
#endif
  case GIO_PIPE:
    return(gio->cur);
  case GIO_SOCKET:
    return(gio->cur);
  case GIO_GZIP:
    return(gztell(gio->gz));
  default:
    return((off_t)-1);
  }
}

/*
 *
 * gskip - skip reading bytes to a file position
 *
 */
#ifdef ANSI_FUNC
int
gskip (GIO gio, off_t n)
#else
int gskip(gio, n)
     GIO gio;
     off_t n;
#endif
{
  char buf[1];

  /* sanity checks */
  if( !gio )
    return(-1);

  /* nothing to do */
  if( !n )
    return 0;

  switch(gio->type){
  case GIO_DISK:
    if( gio->unbuffered )
      return(lseek(fileno(gio->fp), n, SEEK_CUR));
    else
#if USE_FSEEKO
      return(fseeko(gio->fp, n, SEEK_CUR));
#else
      return(fseek(gio->fp, (long)n, SEEK_CUR));
#endif
  case GIO_STREAM:
    /* for stdin, read the bytes */
    if( gio->fp == stdin ){
      if( n < 0 )
	return(-1);
      while( n-- ){
	if( fread(buf, sizeof(char), 1, gio->fp) != 1 )
	  return(0);
      }
      return(0);
    }
    /* who knows what will happen here */
    else{
#if USE_FSEEKO
      return(fseeko(gio->fp, n, SEEK_CUR));
#else
      return(fseek(gio->fp, (long)n, SEEK_CUR));
#endif
    }
  case GIO_MEMORY:
    if( (gio->cur + n >= gio->len) || (gio->cur + n <0) ){
      return(-1);
    }
    else{
      gio->cur += n;
      return(0);
    }
#ifdef HAVE_SYS_MMAN_H
  case GIO_MMAP:
    if( (gio->cur + n >= gio->len) || (gio->cur + n <0) ){
      return(-1);
    }
    else{
      gio->cur += n;
      return(0);
    }
#endif
#ifdef HAVE_SYS_SHM_H
  case GIO_SHM:
    if( (gio->cur + n >= gio->len) || (gio->cur + n <0) ){
      return(-1);
    }
    else{
      gio->cur += n;
      return(0);
    }
#endif
  case GIO_PIPE:
    if( n < 0 )
      return(-1);
    if( gio->ifd >= 0 ){
      while( n-- ){
	if( read(gio->ifd, buf, 1) != 1 )
	  return(0);
	gio->cur++;
      }
      return(0);
    }
    else{
      return(-1);
    }
  case GIO_SOCKET:
    if( n < 0 )
      return(-1);
    if( gio->ifd >= 0 ){
      while( n-- ){
	if( recv(gio->ifd, buf, 1, 0) != 1 )
	  return(0);
	gio->cur++;
      }
      return(0);
    }
    else{
      return(-1);
    }
  case GIO_GZIP:
    return(gzseek(gio->gz, (z_off_t)n, SEEK_CUR));
  default:
    return(-1);
  }
}

/*
 *
 * ginfo -- return information about a "file"
 *
 */
#ifdef ANSI_FUNC
int
ginfo (GIO gio, char **name, int *type, off_t *cur, char **buf, int *len)
#else
int ginfo(gio, name, type, cur, buf, len)
     GIO gio;
     char **name;
     int *type;
     off_t *cur;
     char **buf;
     int *len;
#endif
{
  if( gio==NULL )
    return(-1);
  if( name )
    *name = gio->name;
  if( type )
    *type = gio->type;
  if( cur )
    *cur = gtell(gio);
  if( buf )
    *buf = gio->buf;
  if( len )
    *len = gio->len;
  return(0);
}

/*
 *
 * gfreebuf -- free allocated data buffers
 *
 */
#ifdef ANSI_FUNC
void
gfreebuf (GIO gio, void *buf)
#else
void gfreebuf(gio, buf)
     GIO gio;
     void *buf;
#endif
{
  if( gio==NULL )
    return;

  switch(gio->type){
  case GIO_DISK:
    if( buf )
      xfree(buf);
    break;
  case GIO_STREAM:
    if( buf )
      xfree(buf);
    break;
  case GIO_MEMORY:
    break;
#ifdef HAVE_SYS_MMAN_H
  case GIO_MMAP:
    break;
#endif
#ifdef HAVE_SYS_SHM_H
  case GIO_SHM:
    break;
#endif
  case GIO_PIPE:
    if( buf )
      xfree(buf);
    break;
  case GIO_SOCKET:
    if( buf )
      xfree(buf);
    break;
  case GIO_GZIP:
    if( buf )
      xfree(buf);
    break;
  default:
    break;
  }
}

/*
 *
 * gclose -- close an I/O structure
 *
 */
#ifdef ANSI_FUNC
void
gclose (GIO gio)
#else
void gclose(gio)
     GIO gio;
#endif
{
  int status;

  /* sanity checks */
  if( gio==NULL )
    return;

  switch(gio->type){
  case GIO_DISK:
    if( gio->unbuffered ){
      fclose(gio->fp);
    }
    else{
      fflush(gio->fp);
      fclose(gio->fp);
    }
    break;
  case GIO_STREAM:
    fflush(gio->fp);
    /* close stream, but don't close a stdio stream */
    if( (gio->fp != stdin) && (gio->fp != stdout) && (gio->fp != stderr) )
      fclose(gio->fp);
    break;
#ifdef HAVE_SYS_MMAN_H
  case GIO_MMAP:
    munmap(gio->buf, gio->len);
    break;
#endif
  case GIO_MEMORY:
    break;
#ifdef HAVE_SYS_SHM_H
  case GIO_SHM:
    /* unmap shared memory segment */
    shmdt(gio->buf);
    /* in write+ mode, we try to destroy the shared memory as well */
    if( strstr(gio->mode, "w+") ) shmctl(gio->shmid, IPC_RMID, NULL);
    break;
#endif
  case GIO_PIPE:
    if( gio->ifd >=0 )
      close(gio->ifd);
    if( gio->ofd >=0 )
      close(gio->ofd);
#if HAVE_MINGW32==0
    if( gio->pid )
      waitpid(gio->pid, &status, 0);
#endif
    break;
  case GIO_SOCKET:
    if( gio->ifd >=0 )
      close(gio->ifd);
    else if( gio->ofd >=0 )
      close(gio->ofd);
    break;
  case GIO_GZIP:
    gzclose(gio->gz);
    break;
  default:
    break;
  }
  gfree(gio);
}

/*
 *
 * gerrorstring -- return last exception string
 *
 */
#ifdef ANSI_FUNC
char *
gerrorstring(void)
#else
char *gerrorstring()
#endif
{
  return(_gerrors);
}

/*
 *
 * setgerror -- set the error flag
 *
 */
#ifdef ANSI_FUNC
int
setgerror(int flag)
#else
int setgerror(flag)
     int flag;
#endif
{
  int oflag;
  oflag = _gerror;
  _gerror = flag;
  return oflag;
}

/*
 *
 * gerror - error message handler
 * actions based on value of error flag:
 *
 *  flag    action
 *  ----    ------
 *   0      store error message in _gerrors string
 *   1      store, print error message and continue
 *   2      print error message and exit
 *
 */
#ifdef __STDC__
void gerror(FILE *fd, char *format, ...) 
{
    char tbuf[SZ_LINE];
    va_list args;
    va_start(args, format);
#else
void gerror(va_alist) va_dcl
{
    FILE *fd;
    char *format;
    char tbuf[SZ_LINE];
    va_list args;

    va_start(args);
    fd  = va_arg(args, FILE *);
    format = va_arg(args, char *);
#endif
    /* initialize level, if not already done */
    if( _gerror == -1 ){
      char *s;
      if( (s=getenv("GERROR")) )
	_gerror = atoi(s);
      else
	_gerror = 2;
    }
    snprintf(tbuf, SZ_LINE-1, "ERROR: %s", format);
    vsnprintf(_gerrors, SZ_LINE-1, tbuf, args);
    /* if the error flag is positive, we output immediately */
    if( (fd != NULL) && _gerror ){
      fputs(_gerrors, fd);
      fflush(fd);
    }
    /* if the error flag is set high, we exit */
    if( _gerror >= 2 )
      exit(_gerror);
}

/*
 *
 * gwarningstring -- return last exception string
 *
 */
#ifdef ANSI_FUNC
char *
gwarningstring(void)
#else
char *gwarningstring()
#endif
{
  return(_gwarnings);
}

/*
 *
 * setgwarning -- set the warning flag
 *
 */
#ifdef ANSI_FUNC
int
setgwarning(int flag)
#else
int setgwarning(flag)
     int flag;
#endif
{
  int oflag;
  oflag = _gwarning;
  _gwarning = flag;
  return oflag;
}

#ifdef __STDC__
void gwarning(FILE *fd, char *format, ...) 
{
    char tbuf[SZ_LINE];
    va_list args;
    va_start(args, format);
#else
void gwarning(va_alist) va_dcl
{
    FILE *fd;
    char *format;
    char tbuf[SZ_LINE];
    va_list args;

    va_start(args);
    fd  = va_arg(args, FILE *);
    format = va_arg(args, char *);
#endif
    /* initialize level, if not already done */
    if( _gwarning == -1 ){
      char *s;
      if( (s=getenv("GWARNING")) )
	_gwarning = atoi(s);
      else
	_gwarning = 1;
    }
    snprintf(tbuf, SZ_LINE-1, "WARNING: %s", format);
    vsnprintf(_gwarnings, SZ_LINE-1, tbuf, args);
    /* if the warning flag is positive, we output immediately */
    if( (fd != NULL) && _gwarning ){
      fputs(_gwarnings, fd);
      fflush(fd);
    }
}

#ifdef ANSI_FUNC
void 
gsleep (int msec)
#else
void gsleep(msec)
     int msec;
#endif
{
  struct timeval tv;
  if( msec > 0 ){
    tv.tv_sec = msec / 1000;
    tv.tv_usec = (msec % 1000) * 1000;
    select(1, NULL, NULL, NULL, &tv);
  }
}
