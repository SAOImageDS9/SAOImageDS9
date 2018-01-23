/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

/*
 *
 * tcp.c -- unix tcp connection routines
 *
 */
#if HAVE_CONFIG_H
#include <conf.h>
#endif

#if HAVE_UNISTD_H
#include <unistd.h>
#endif
#if HAVE_STDLIB_H
#include <stdlib.h>
#endif
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <xport.h>
#include <tcp.h>

/* the ever-present */
#ifndef SZ_LINE
#define SZ_LINE 1024
#endif

/* name of user environment variable specifying this host */
#ifndef MYHOST
#define MYHOST "XPA_HOST"
#endif

/* other modules can set this variable and the default for various routines
   will be "localhost" instead of the DNS-dependent hostname */
int use_localhost=0;

static char myhost[SZ_LINE]; 	/* hostname to registering access points */

/*
 *----------------------------------------------------------------------------
 *
 *
 * 			Private Routines and Data
 *
 *
 *----------------------------------------------------------------------------
 */

static char ipstr[SZ_LINE];

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
 *--------------------------------------------------------------
 *
 * Routines:	gethost
 *
 * Purpose:	Find the current hostname
 *
 * Results:	1 on success, 0 for failure
 *
 *--------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
gethost (
    char *xhost,		/* (out) corresponding hostname */
    int len			/* (in) length of host buffer */
)
#else
int gethost(xhost, len)
    char *xhost;		/* (out) corresponding hostname */
    int len;			/* (in) length of host buffer */
#endif
{
    char *s=NULL;
#if HAVE_GETADDRINFO
    struct addrinfo *hints=NULL, *addrinfo=NULL;
#else
    struct hostent *hent;
#endif
    static int init=0;

    if( use_localhost == 0 ){
      if( init == 0 ){
	if( (s=(char *)getenv(MYHOST)) != NULL ){
	  strncpy(myhost, s, SZ_LINE-1);
	} else {
	  gethostname(myhost, SZ_LINE-1);
	}
	init++;
      }
      strncpy(xhost, myhost, len-1);

#if HAVE_GETADDRINFO
      hints = (struct addrinfo *)calloc(1, sizeof(struct addrinfo));
      hints->ai_flags |= AI_CANONNAME;
      hints->ai_family = AF_INET;
      if( getaddrinfo(xhost, NULL, hints, &addrinfo) != 0 ){
	freeaddrinfo(addrinfo);
	if( hints ) free(hints);
	return -1;
      }
      strncpy(xhost, addrinfo->ai_canonname, len-1);
      freeaddrinfo(addrinfo);
      if( hints ) free(hints);
#else
      if( (hent = gethostbyname(xhost)) == NULL ){
	return(-1);
      }
      strncpy(xhost, hent->h_name, len-1);
#endif
    }
    else{
      strncpy(xhost, "localhost", len-1);
    }
    xhost[len-1] = '\0';
    return(0);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	gethostip
 *
 * Purpose:	Find the IP address corresponding to a hostname
 *
 * Results: 	ip (host byte order) on success, 0 if host is unknown
 *
 *---------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
unsigned int 
gethostip (
    char *xhost		/* (in) Hostname (human readable) */
)
#else
unsigned int gethostip(xhost)
    char *xhost;		/* (in) Hostname (human readable) */
#endif
{
#if HAVE_GETADDRINFO
    struct addrinfo *hints=NULL, *addrinfo=NULL;
    struct sockaddr_in * p;
    int got;
#else
    struct hostent *hostent;
#endif
    unsigned int ip;
    char temp[SZ_LINE];
    int saveip=0;
    static unsigned int myip=0;
    
    /* null input means current host */
    if( (xhost == NULL) || (*xhost == '\0') || !strcmp(xhost, "$host") ){
      if( myip != 0 )
	return(myip);
      saveip = 1;
      gethost(temp, SZ_LINE);
    }
    else if( !strcmp(xhost, "$localhost")  ){
      strcpy(temp, "localhost");
    } else {
      strncpy(temp, xhost, SZ_LINE-1);
      temp[SZ_LINE-1] = '\0';
    }

    /* special check */
    if( !strcmp(temp, "localhost") || !strcmp(temp, "localhost.localdomain") ){
      ip = htonl(0x7F000001);
      goto done;
    }

    /*
     * Try looking by address (i.e., host is something like "128.84.253.1").
     * Do this first because it's much faster (no trip to the DNS)
     */
    if( (int)(ip = inet_addr(temp)) != -1 ){
      goto done;
    }

#if HAVE_GETADDRINFO
    /*
     * Try looking it up by name.
     */
    hints = (struct addrinfo *)calloc(1, sizeof(struct addrinfo));
    hints->ai_family = AF_INET;
    got = getaddrinfo(temp, NULL, hints, &addrinfo);
    if( got == 0 ){
      p = (struct sockaddr_in *)(addrinfo->ai_addr);
      memcpy(&ip, &(p->sin_addr.s_addr), sizeof(p->sin_addr.s_addr));
      goto done;
    }
#else
    /*
     * Try looking it up by name. If successful, the IP address is in
     * hostent->h_addr_list[0]
     */
    if( (hostent = gethostbyname(temp)) != NULL ){
      memcpy(&ip, hostent->h_addr_list[0], (size_t)hostent->h_length);
      goto done;
    }
#endif
    /* could not convert */
    ip = 0;
    saveip = 0;

done:
#if HAVE_GETADDRINFO
    freeaddrinfo(addrinfo);
    if( hints ) free(hints);
#endif
    ip = ntohl(ip);
    if( saveip ) myip = ip;
    return(ip);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	getiphost
 *
 * Purpose:	Find the IP address in dot format corresponding to an ip
 *
 * Results: 	ip string (in static buffer) or NULL
 *
 *---------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
char *
getiphost (unsigned int ip)
#else
char *getiphost(ip)
     unsigned int ip;
#endif
{
  char *s;
  struct sockaddr_in sockbuf;

  if( ip == 0x7F000001 ){
    strcpy(ipstr, "localhost");
    return(ipstr);
  }

  sockbuf.sin_addr.s_addr = htonl(ip);
  s = (char *)inet_ntoa(sockbuf.sin_addr);
  if( s != NULL ){
    strcpy(ipstr, s);
    return(ipstr);
  }
  else
    return(NULL);
}
