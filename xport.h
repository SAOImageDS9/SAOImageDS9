/*
 *	Copyright (c) 1999-2004 Smithsonian Astrophysical Observatory
 */

/*
 *
 * xport.h - include file for platform-dependent system calls
 *
 */
#ifndef	__xport_h
#define	__xport_h

#if HAVE_CONFIG_H
#include <conf.h>
#endif

#if HAVE_MINGW32

#define FD_SETSIZE 8192
#include <winsock2.h>
#include <process.h>
#include <io.h>

#ifdef	EINPROGRESS
#undef  EINPROGRESS
#endif
#define EINPROGRESS	WSAEINPROGRESS
#ifdef	EINTR
#undef  EINTR	
#endif
#define EINTR		WSAEINTR
#ifdef ETIMEDOUT
#undef  ETIMEDOUT
#endif
#define ETIMEDOUT	WSAETIMEDOUT
#ifdef ECONNREFUSED
#undef  ECONNREFUSED
#endif
#define ECONNREFUSED	WSAECONNREFUSED
#ifdef EWOULDBLOCK
#undef  EWOULDBLOCK
#endif
#define EWOULDBLOCK	WSAEWOULDBLOCK
#ifdef EAGAIN
#undef  EAGAIN	
#endif
#define EAGAIN		WSAEWOULDBLOCK

#else

#include <sys/types.h>
#include <sys/wait.h>
#include <sys/socket.h>                                                  
#include <netinet/in.h>         /* struct in_addr, struct sockaddr_in */
#include <netdb.h>              /* gethostbyname() */
#include <arpa/inet.h>		/* inet_addr() */
#if HAVE_SYS_UN_H
#include <sys/un.h>
#endif
#if HAVE_CYGWIN
#include <process.h>
#endif

#endif

/* common definitions (i.e. not yet requiring platform differentiation) */

#define xsocket(a,b,c)		socket(a,b,c)
#define xbind(a,b,c)		bind(a,b,c)
#define xaccept(a,b,c)		accept(a,b,c)
#define xselect(a,b,c,d,e)	select(a,b,c,d,e)

/* UNIX */
#if HAVE_MINGW32==0

#define xclose(a)		close(a)

#define xfcntl(a,b,c)		fcntl(a,b,c)

#define xfcntl_nonblock(a,b)				  \
				b = fcntl(a, F_GETFL, 0); \
				fcntl(a, F_SETFL, b|O_NONBLOCK)

#define xfcntl_restore(a,b)	fcntl(a, F_SETFL, b)

#define xsocketstartup()

#define xsocketcleanup()

#define xfd_set_stdin(a,b)	FD_SET(a,b)	
#define xfd_isset_stdin(a,b)	(a >= 0) && FD_ISSET(a,b)	
#define xfd_clr_stdin(a,b)	FD_CLR(a,b)	

#define xsignal_sigpipe()	signal(SIGPIPE, SIG_IGN)

#define xerrno			errno

#define xmkdir(a,b)		mkdir(a,b)
#define xchmod(a,b)		chmod(a,b)

/* WINDOWS */
#else

#define xclose(a)		closesocket(a)

#define xfcntl(a,b,c)

#define xfcntl_nonblock(a,b)						\
	{								\
		int iomode=1;						\
		ioctlsocket(a, FIONBIO, (u_long FAR *) &iomode);	\
	}

#define xfcntl_restore(a,b)						\
	{								\
		int iomode=0;						\
		ioctlsocket(a, FIONBIO, (u_long FAR *) &iomode);	\
	}

#define xsocketstartup()					\
	{							\
		WSADATA wsaData;				\
		WSAStartup(MAKEWORD(2,0), &wsaData);		\
	}

#define xsocketcleanup()	WSACleanup()

#define xfd_set_stdin(a,b)	setmode(a, O_BINARY)

#define xfd_isset_stdin(a,b)	(a >= 0)
#define xfd_clr_stdin(a,b)

#define xsignal_sigpipe()

#define xerrno			WSAGetLastError()

#define xmkdir(a,b)		mkdir(a)
#define xchmod(a,b)		chmod(a,b)

#endif

#endif /* __xport.h */
