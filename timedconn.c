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

#if HAVE_MINGW32==0

static int alarm_flag=0;

#ifdef ANSI_FUNC
static void AlarmFunc (int signo)
#else
static void AlarmFunc (signo)
     int signo;
#endif
{
  alarm_flag = 1;
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
 * Routine:	alrmconnect
 *
 * Purpose:	connect with alarm-based timeout
 *
 * Returns:	status
 *
 *  adapted from the connect_alarm() code in:
 *  W. Richard Stevens
 *  "Advanced Programming in the Unix Environment" 
 *  Addison-Wesley Publishing Co, 1992
 *  p. 350
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int alrmconnect(int sockfd, void *saptr, int salen, int nsec)
#else
int alrmconnect(sockfd, saptr, salen, nsec)
     int sockfd;
     void *saptr;
     int salen;
     int nsec;
#endif
{
  int status=0;
  struct sigaction act1, oact1;

  /* no error yet */
  alarm_flag = 0;
  errno = 0;

  /* set up alarm */
  if( nsec ){
    act1.sa_handler = AlarmFunc;
    sigemptyset(&act1.sa_mask);
    act1.sa_flags = 0;
#ifdef SA_INTERRUPT
    act1.sa_flags |= SA_INTERRUPT;
#endif
    if( sigaction(SIGALRM, &act1, &oact1) < 0 ){
      goto done;
    }
    /* start alarm */
    alarm(nsec);
  }

  /* try to connect */
  status=connect(sockfd, (struct sockaddr *)saptr, salen);

  /* turn off alarm if it did not go off */
  if( nsec )
    alarm(0);

done:
  /* check for alarm => we timed out */
  if( alarm_flag ){
    xclose(sockfd);
    errno = ETIMEDOUT;
    status = -1;
  }

  return(status);
}

#endif

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	noblkconnect
 *
 * Purpose:	non-blocking connect with select-based timeout
 *
 * Returns:	status
 *
 *  adapted from the connect_nonb() code in:
 *  W. Richard Stevens
 *  "Advanced Programming in the Unix Environment" 
 *  Addison-Wesley Publishing Co, 1992
 *  p. 411
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int noblkconnect(int sockfd, void *saptr, int salen, int nsec)
#else
int noblkconnect(sockfd, saptr, salen, nsec)
     int sockfd;
     void *saptr;
     int salen;
     int nsec;
#endif
{
	int			flags, n, error;
	socklen_t		len;
	fd_set			rset, wset;
	struct timeval	tval;

	/* save state and set in non-blocking mode */
	xfcntl_nonblock(sockfd, flags);

	error = 0;
	if( (n = connect(sockfd, (struct sockaddr *) saptr, salen)) < 0){
	  if((xerrno != EINPROGRESS) && (xerrno != EWOULDBLOCK))
	    return(-1);
	}

	/* Do whatever we want while the connect is taking place. */
	if(n == 0)
	  goto done;	/* connect completed immediately */

	FD_ZERO(&rset);
	FD_SET(sockfd, &rset);
	wset = rset;
	tval.tv_sec = nsec;
	tval.tv_usec = 0;

	if( (n = xselect(sockfd+1, &rset, &wset, NULL,
			nsec ? &tval : NULL)) == 0) {
	  xclose(sockfd);		/* timeout */
	  errno = ETIMEDOUT;
	  return(-1);
	}

	if(FD_ISSET(sockfd, &rset) || FD_ISSET(sockfd, &wset)) {
	  len = sizeof(error);
	  if(getsockopt(sockfd, SOL_SOCKET, SO_ERROR, (void *)&error, &len) <0)
	    return(-1);			/* Solaris pending error */
	} else{
	  errno = ETIMEDOUT;
	}

done:
	xfcntl_restore(sockfd, flags);	/* restore file status flags */

	if(error) {
	  xclose(sockfd);		/* just in case */
	  errno = error;
	  return(-1);
	}
	return(0);
}

#ifdef DO_MAIN
/*
 * solaris: gcc -o atest atest.c -lsocket -lnsl
 * linux: gcc -o atest atest.c
 * os x: gcc -o atest atest.c
 */
#include <stdio.h>

extern char *optarg;
extern int optind;

int main(int argc, char **argv)
{
  int c;
  int args;
  int status;
  int fd;
  int doalarm=0;
  int nsec=2;
  unsigned int ip;
  char *sip;
  struct sockaddr_in sock_in;

  /* process switch arguments */
  while ((c = getopt(argc, argv, "ab")) != -1){
    switch(c){
    case 'a':
      doalarm = 1;
      break;
    case 'b':
      doalarm = 0;
      break;
    }
  }

  args = argc - optind;
  if( args > 0 )
    sip = argv[optind];
  /* this ip is bogus and normally will cause connect to hang */
  else
    sip ="209.1.1.1";

  /* set up socket to a bogus ip and port */
  if( (int)(ip = inet_addr(sip)) == -1 ){
    perror("inet_addr");
    exit(1);
  }
  if( (fd = xsocket(AF_INET, SOCK_STREAM, 0)) < 0 ){
    perror("socket");
    exit(1);
  }
  memset((char *)&sock_in, 0, sizeof(sock_in));
  sock_in.sin_family = AF_INET;
  sock_in.sin_addr.s_addr = ip;
  sock_in.sin_port = htons(80);

  if( doalarm ){
    fprintf(stderr, "alarm-based connect() ...\n");
    status=alrmconnect(fd, (void *)&sock_in, sizeof(sock_in), nsec);
  }
  else{
    fprintf(stderr, "non-blocking connect() ...\n");
    status=noblkconnect(fd, (void *)&sock_in, sizeof(sock_in), nsec);
  }

  /* if alarm_flag is 1, alarm went off and interrupted connect */
  fprintf(stderr, "alarm_flag=%d status=%d\n", alarm_flag, status);
  if( status != 0 )
    perror("connect");
}

#endif
