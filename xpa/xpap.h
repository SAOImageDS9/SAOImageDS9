/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

/*
 *
 * xpa.h - include file for the X Public Access mechanism
 *
 */
#ifndef	__xpap_h
#define	__xpap_h

#if HAVE_CONFIG_H
#include <conf.h>
#endif

/* avoid use of system -- its not secure */
#if USE_SPAWN == 0
#define USE_LAUNCH 1
#endif

#if HAVE_UNISTD_H
#include <unistd.h>
#endif
#if HAVE_STDINT_H
#include <stdint.h>
#endif
#if HAVE_STRING_H
#include <string.h>
#endif
#if HAVE_STRINGS_H
#include <strings.h>
#endif
#if HAVE_STDLIB_H
#include <stdlib.h>
#endif
#if HAVE_MALLOC_H
#include <malloc.h>
#endif
#if HAVE_GETOPT_H
#include <getopt.h>
#endif
#if HAVE_SETJMP_H
#include <setjmp.h>
#endif
#if HAVE_PWD_H
#include <pwd.h>
#endif
#include <ctype.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <time.h>
#include <sys/types.h>
#include <sys/time.h>
#include <sys/stat.h>
#if HAVE_SYS_SELECT_H
#include <sys/select.h>
#endif
#ifdef __STDC__
#include <stdarg.h>
#else
#include <varargs.h>
#endif
#include <xport.h>
#include <tcp.h>
#include <word.h>
#include <xalloc.h>
#include <find.h>
#if USE_LAUNCH
#include <xlaunch.h>
#endif
#include <timedconn.h>

/* B.Schoenhammer@bit-field.de 2009-09-21 */
#if HAVE_MINGW32
#ifdef HAVE_ATEXIT
#undef HAVE_ATEXIT
#endif
#endif

/* make sure socklen_t is available, since some systems don't use it */
#ifndef HAVE_SOCKLEN_T
#define socklen_t int
#endif

/* the flag for setting non-blocking I/O varies a bit from Unix to Unix  */
#ifndef O_NONBLOCK 
#ifdef O_NDELAY
#define O_NONBLOCK O_NDELAY
#endif
#endif

#if HAVE_MINGW32==0
/* we always want to know about errors when a read/write would block */
#ifndef EWOULDBLOCK
#ifdef EAGAIN
#define EWOULDBLOCK EAGAIN
#endif
#else
#ifndef EAGAIN
#ifdef EWOULDBLOCK
#define EAGAIN EWOULDBLOCK
#endif
#endif
#endif
#endif

/* not all systems define shutdown() params */
#ifndef SHUT_RDWR
#define SHUT_RDWR 2
#endif

/* cisco routers can clear the URG flag by default, so use in-band */
#define USE_KA_OOB	0
/* KA_TYPE: 1->only access points, 2->only proxies 3->both */
#define DEF_KA_TYPE	2

/* for listen() routine */
#define XPA_MAXLISTEN 1000

/* status flags for xpa server */
#define XPA_STATUS_ACTIVE 	1
#define XPA_STATUS_FREE 	2
#define XPA_STATUS_READBUF	4
#define XPA_STATUS_ENDBUF	8

/* status flags for xpa clients */
#define XPA_CLIENT_IDLE		0
#define XPA_CLIENT_ACTIVE	1
#define XPA_CLIENT_PROCESSING	2
#define XPA_CLIENT_WAITING	3

/* server mode flags for receive, send, info */
/* crafted so that they are turned on by default */
#define XPA_MODE_BUF		1
#define XPA_MODE_FILLBUF	2
#define XPA_MODE_FREEBUF	4
#define XPA_MODE_ACL		8

/* default modes for receive, send, info */
#define XPA_DEF_MODE_REC  (XPA_MODE_BUF|XPA_MODE_FILLBUF|XPA_MODE_FREEBUF|XPA_MODE_ACL)
#define XPA_DEF_MODE_SEND (XPA_MODE_BUF|XPA_MODE_FREEBUF|XPA_MODE_ACL)
#define XPA_DEF_MODE_INFO (XPA_MODE_ACL)

/* default client info string */
#define XPA_DEF_CLIENT_INFO	"NONE"

/* client mode flags */
#define XPA_CLIENT_BUF		1
#define XPA_CLIENT_FD		2
#define XPA_CLIENT_ACK		4
#define XPA_CLIENT_VERIFY	8

/* client select mode flags */
#define XPA_CLIENT_SEL_XPA	1
#define XPA_CLIENT_SEL_FORK	2

/* error codes -- these must match the strings in xpaMessbuf in xpa.c */
/* always make 0 an OK return */
#define XPA_RTN_OK	0
#define XPA_RTN_NOAUTH	1
#define XPA_RTN_NOCONN	2
#define XPA_RTN_NOHOST	3
#define XPA_RTN_NOBUF	4
#define XPA_RTN_NOCMD	5
#define XPA_RTN_NOREC	6
#define XPA_RTN_NOSEND	7
#define XPA_RTN_NOINFO	8
#define XPA_RTN_UNCMD	9
#define XPA_RTN_NOCMD2	10
#define XPA_RTN_NOTARG	11
#define XPA_RTN_NOCMD3	12
#define XPA_RTN_NODATA	13
#define XPA_RTN_ILLCMD	14

/* connection methods */
#define XPA_INET	1
#define XPA_UNIX	2

/* select loop types */
#define XPA_XPA_LOOP	1
#define XPA_XT_LOOP	2
#define XPA_TCL_LOOP	3

/* name server management */
#define XPA_NSINET	"$host:$port"
#define XPA_NSPORT	14285
#define XPA_NSUNIX	"xpans_unix"
#define XPA_RETRIES	10
#define XPA_NSDELAY	300

/* access control */
#define XPA_ACLS	"gisa"
#define XPA_ACLFILE	"$HOME/acls.xpa"
#define XPA_DEFACL	"*:* $host +; *:* $localhost +"

/* port management */
#define XPA_DEFPORT	28571
#define XPA_PORTFILE	"$HOME/ports.xpa"

/* misc */
#define XPA_IOSIZE     		4096
#define XPA_BIOSIZE    		204800

#ifndef HAVE_CYGWIN
#define XPA_CONNECT_TIMEOUT_MODE 1
#else
/* cygwin does not support interruptible connect(), so we have
   to use non-blocking connect, which is less portable in general */
#define XPA_CONNECT_TIMEOUT_MODE 2
#endif

/* these can be changed by user environment variable */
#define XPA_MAXHOSTS		100
#define XPA_SHORT_TIMEOUT	15
#define XPA_LONG_TIMEOUT	180
#define XPA_CONNECT_TIMEOUT	10
#define XPA_TMPDIR		"/tmp/.xpa"
#define XPA_VERBOSITY		1
#define XPA_IOCALLSXPA		0

#define LOCALIP(ip)   ((ip==gethostip("$localhost"))||(ip==gethostip("$host")))

#if HAVE_CYGWIN||HAVE_MINGW32
#define XPANSNAME "xpans.exe"
#else
#define XPANSNAME "xpans"
#endif

#define XPANS_CLASS "XPANS"
#define XPANS_NAME  "xpans"

/* for debugging */
#define _sp	XPALevelSpaces()

#include <xpa.h>

#endif /* __xpap.h */
