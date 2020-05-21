/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

/*
 *
 * xpa.h - include file for the X Public Access mechanism
 *
 */

#ifndef	__xpa_h
#define	__xpa_h

#include <stdio.h>
#include <sys/types.h>
#include <prsetup.h>
#if HAVE_MINGW32
#include <winsock2.h>
#endif

#define XPA_MAJOR_VERSION 2
#define XPA_MINOR_VERSION 1
#define XPA_PATCH_LEVEL 20
#define XPA_VERSION "2.1.20"

/* #define XPA_DEBUG 1 */
#ifdef XPA_DEBUG
#define FPRINTF(x) fprintf x
#define PERROR(x)  perror x
#else
#define FPRINTF(x)
#define PERROR(x)
#endif

/* types of xpa request */
#define XPA_SET		1
#define XPA_GET		2
#define XPA_INFO	3
#define XPA_ACCESS	4
/* not actually commands but ... */
#define XPA_DATA	5
#define XPA_ACCEPT	6
#define XPA_NAGLE	7

/* this is the number of actual commands we have above */
#define XPA_CMDS	4

/* comm modes */
#define COMM_RESERVED	1
#define COMM_CONNECT	2

/* the ever-present */
#ifndef SZ_LINE
#define SZ_LINE 4096
#endif

/* limit the length of the name and xclass strings */
/* at least 2 of these should fit into SZ_LINE with lots of room to spare */
#define XPA_NAMELEN	1024

/* defines the types of callback procedure we use */
typedef int (*SendCb)(
#ifdef ANSI_FUNC
    void *client_data,
    void *call_data,
    char *paramlist,
    char **buf,
    size_t *len
#endif
);

typedef int (*ReceiveCb)(
#ifdef ANSI_FUNC
    void *client_data,
    void *call_data,
    char *paramlist,
    char *buf,
    size_t len
#endif
);

typedef int (*InfoCb)(
#ifdef ANSI_FUNC
    void *client_data,
    void *call_data,
    char *paramlist
#endif
);

typedef void *(*SelAdd)(
#ifdef ANSI_FUNC
    void *client_data,
    int fd
#endif
);

typedef void (*SelDel)(
#ifdef ANSI_FUNC
    void *client_data
#endif
);

typedef void (*SelOn)(
#ifdef ANSI_FUNC
    void *client_data
#endif
);

typedef void (*SelOff)(
#ifdef ANSI_FUNC
    void *client_data
#endif
);

typedef void (*MyFree)(
#ifdef ANSI_FUNC
    void *buf
#endif
);

typedef void Sigfunc(
#ifdef ANSI_FUNC
    int		     
#endif
);

/*
 *
 *
 * xpa access control record structure
 *
 */
typedef struct aclrec{
  struct aclrec *next;
  char *xclass;
  char *name;
  unsigned int ip;
  char *acl;
  int flag;
} *XACL, XACLRec;

/*
 *
 *
 * port management record structure
 *
 */
typedef struct portrec{
  struct portrec *next;
  char *xclass;
  char *name;
  int port;
} *PORT, PORTRec;

/*
 *
 *
 * xpa name server management
 *
 */
typedef struct nsrec{
  struct nsrec *next;
  char *method;
  int nxpa;
  int nproxy;
  char *host;
  int fd;
  FILE *in;
  FILE *out;
  /* for AF_INET */
  unsigned int ip;
  int port;
  /* for AF_UNIX */
  char *name;
} *NS, NSRec;

/*
 *
 *
 * xpa communication structure for each connection
 *
 */
typedef struct xpacommrec{
  struct xpacommrec *next;
  int status;
  int message;
  int n;
  int cmd;
  int mode;
  int telnet;
  int usebuf;
  int useacl;
  char *id;
  char *info;
  char *target;
  char *paramlist;
  int cmdfd;
  int datafd;
  char *cendian;
  int ack;
  /* buf and len passed to callbacks */
  char *buf;
  size_t len;
  /* for AF_INET */
  unsigned int cmdip;
  int cmdport;
  int dataport;
  /* for AF_UNIX */
  char *cmdname;
  char *dataname;
  int acl[XPA_CMDS+1];
  /* for handling fd's in non-select event loops */
  void *selcptr;	/* cmdfd struct for seldel */
  void *seldptr;	/* datafd struct for seldel */
  /* pointer to associated name server */
  struct nsrec *ns;
  /* myfree routine */
  MyFree myfree;
  void *myfree_ptr;
} *XPAComm, XPACommRec;

/*
 *
 *
 * clipboard record structure
 *
 */
typedef struct cliprec{
  struct cliprec *next;
  unsigned int ip;
  char *name;
  char *value;
} *XPAClip, XPAClipRec;

/* 
 *
 * record struct for receiving data from stdin
 *
 */
typedef struct xpainputrec{
  struct xpainputrec *next;
  size_t start;
  size_t end;
  size_t bytes;
  char *buf;
} *XPAInput, XPAInputRec;

/*
 *
 *
 * xpa command record structure
 *
 */
typedef struct xpacmdrec{
  struct xpacmdrec *next;
  struct xparec *xpa;
  char *name;
  char *help;
  int ntokens;
  /* send callback info */
  SendCb send_callback;
  void *send_data;
  int send_mode;
  /* receive callback info */
  ReceiveCb receive_callback;
  void *receive_data;
  int receive_mode;
} *XPACmd, XPACmdRec;

/*
 *
 *
 * xpa client record structure
 *
 */
typedef struct xpaclientrec{
  struct xpaclientrec *next;
  int status;
  char *id;
  char *xtemplate;
  int type;
  char *xclass;
  char *name;
  char *method;
  char *info;
  char *dataname;
  unsigned int ip;
  int cmdfd;
  int datafd;
  int mode;
  int nsproxy;
  /* xpaget parameters */
  char **bufptr;
  size_t  *lenptr;
  size_t bufsize;
  int fd;
  /* xpaset parameters */
  char *buf;
  size_t len;
  size_t bytes;
  /* fork parameters */
  pid_t pid;
  /* common parameters */
  char **nameptr;
  char **errptr;
} *XPAClient, XPAClientRec;

/*
 *
 *
 * main xpa record structure
 *
 * explanation of send_mode and receive_mode flags:
 *
 * receive-specific callback modes:
 *
 *	r (raw) 	-- don't read data into buf (callback will read)
 *
 * general callback modes:
 *
 *	r (raw) 	-- write raw data without protocol info to client
 *	s (save)	-- 's' save passed buf (don't free it)
 *
 */
typedef struct xparec{
  /* xpa version */
  char *version;
  /* status of this xpa */
  int status;
  /* "g", "s", "i" are server types; "c" for client */
  char *type;
  /*
   * THE SERVER SIDE
   */
  struct xparec *next;
  char *xclass;
  char *name;
  char *help;
  /* send callback info */
  SendCb send_callback;
  void *send_data;
  int send_mode;
  /* receive callback info */
  ReceiveCb receive_callback;
  void *receive_data;
  int receive_mode;
  /* info callback info */
  InfoCb info_callback;
  void *info_data;
  int info_mode;
  /* list of sub-commands for this access point */
  XPACmd commands;
  /* communication info */
  int fd;		/* listening socket file descriptor */
  char *method;		/* method string: host:ip or unix_filename */
  NS nshead;		/* name servers associated with this access point */
  XPAComm commhead;	/* linked list of communcation records */
  XPAClip cliphead;	/* linked list of cliboard records */
  char *filename;	/* file name (unix sockets) for listening */
  char *sendian;	/* endian-ness of server */
  /* request-specific info */
  XPAComm comm;		/* current comm if we are processing a request */
  /* select loop info */
  SelDel seldel;	/* routine to remove xpa socket from select loop */
  SelAdd seladd;	/* routine to add xpa command sockets to select loop */
  SelOn selon;		/* routine to enable xpa command sockets */
  SelOff seloff;	/* routine to disable xpa command sockets */
  void *selptr;		/* additional info for seldelete() */
  /*
   * THE CLIENT SIDE
   */
  int persist;		/* flag whether this is a persistent client */
  int nclient;		/* number of clients -- used in processing headers */
  int client_mode;	/* global client mode */
  XPAClient clienthead;	/* linked list of active clients */
  int ifd;		/* input fd for XPASetFd() */
  size_t inpbytes;	/* total number of bytes in input lists */
  XPAInput inphead;	/* linked list of input structs */
} *XPA, XPARec;

/* macros to access the xpa struct */
#define xpa_name(xpa)	 ((xpa)->name)
#define xpa_class(xpa)	 ((xpa)->xclass)
#define xpa_method(xpa)	 ((xpa)->method)
#define xpa_sendian(xpa) ((xpa)->sendian)
#define xpa_comm(xpa)	 (xpa&&(xpa)->comm?(xpa)->comm:NULL)
#define xpa_cendian(xpa) (((xpa)->comm&&(xpa)->comm->cendian)?(xpa)->comm->cendian:"?")
#define xpa_cmdfd(xpa)	 ((xpa)->comm?(xpa)->comm->cmdfd:-1)
#define xpa_datafd(xpa)	 ((xpa)->comm?(xpa)->comm->datafd:-1)
#define xpa_ack(xpa)	 ((xpa)->comm?(xpa)->comm->ack:1)
#define xpa_status(xpa)	 ((xpa)->comm?(xpa)->comm->status:0)
#define xpa_id(xpa)	 (((xpa)->comm&&(xpa)->comm->id)?(xpa)->comm->id:"?")

extern char *xpaMessbuf[];

_PRbeg

XPA XPAListHead _PRx((void));
void XPAListAdd _PRx((XPA *head, XPA xpa));
void XPAListDel _PRx((XPA *head, XPA xpa));
int XPAActive _PRx((XPA xpa, XPAComm comm, int flag));
int XPAActiveFd _PRx((int fd));
int XPAAddSelect _PRx((XPA xpa, fd_set *readfdsptr));
int XPAProcessSelect _PRx((fd_set *readfdsptr, int maxreq));
void XPACloseData _PRx((XPA xpa, XPAComm comm));
int XPAHandler _PRx((XPA xpa, int fd));
void XPAMode  _PRx((char *mode, int *flag, char *name, int mask, int def));
int XPAEndian _PRx((void));
char *XPATmpdir _PRx((void));
void XPACleanup _PRx((void));
int XPASetBuf  _PRx((XPA xpa, char *buf, size_t len, int xcopy));
int XPASetFree _PRx((XPA xpa, MyFree myfree, void *myfree_ptr));
int XPAShortTimeout _PRx((void));
int XPALongTimeout _PRx((void));
int XPASendLTimeout _PRx((void *client_data, void *call_data,
			  char *paramlist, char **buf, size_t *len));
int XPAReceiveLTimeout _PRx((void *client_data, void *call_data,
			     char *paramlist, char *buf, size_t len));
int XPASendSTimeout _PRx((void *client_data, void *call_data,
			  char *paramlist, char **buf, size_t *len));
int XPAReceiveSTimeout _PRx((void *client_data, void *call_data,
			     char *paramlist, char *buf, size_t len));
int XPADebug _PRx((void));
int XPASigusr1 _PRx((void));
int XPAVerbosity _PRx((void));
void XPAInitEnv _PRx((void));
void XPAParseName _PRx((char *xpaname, char *xclass, char *name, int len));
int XPAParseIpPort _PRx((char *host, unsigned int *ip, unsigned short *port));
int XPAParseUnixSocket _PRx((char *host));
int _XPAValid _PRx((XPA head, XPA xpa, char *type));
int XPAValid _PRx((XPA xpa));
char *XPATimestamp _PRx((void));
int XPAError _PRx((XPA xpa, char *s));
int XPAOK _PRx((XPA xpa));
int XPAMessage _PRx((XPA xpa, char *s));
char *XPAArgvParamlist _PRx((int argc, char **argv, int start));
int XPAMethod _PRx((char *method));
int XPAAccess _PRx((XPA xpa, char *xtemplate, char *paramlist, char *mode,
		    char **names, char **messages, int n));
int XPANSLookup _PRx((XPA xpa, char *tname, char *ttype, 
		      char ***xclasses, char ***names,
		      char ***methods, char ***infs));
int XPANSClose _PRx((XPA xpa, NS ns));
int XPANSKeepAlive _PRx((XPA xpa, int type));
int XPANSAdd _PRx((XPA xpa, char *host, char *mode));
int XPANSDel _PRx((XPA xpa, char *host, char *mode));
int XPAVersionCheck _PRx((char *serv, char *nsv));
void XPAVersionWarn _PRx((char *myv, char *nsv));
char *XPANSMethod _PRx((char *host, int flag));
XPA XPANew _PRx((char *xclass, char *name, char *help,
		 SendCb send_callback, void *send_data, char *send_mode,
		 ReceiveCb rec_callback, void *rec_data, char *rec_mode));
int XPAFree _PRx((XPA xpa));
XPA XPAInfoNew _PRx((char *xclass, char *name,
		     InfoCb info_callback, void *info_data, char *info_mode));
int XPAPoll  _PRx((int msec, int maxreq));
int XPAMainLoop _PRx((void));
void XPASleep  _PRx((int msec));
void XPAAtExit  _PRx((void));
/* command.c */
void XPAInitReserved _PRx((void));
void XPAFreeReserved _PRx((void));
XPACmd XPACmdLookupReserved _PRx((XPA xpa, char *lbuf, int *lp));
XPACmd XPACmdLookup _PRx((XPA xpa, char *lbuf, int *lp));
int XPAReceiveCommands _PRx((void *client_data, void *call_data,
			     char *paramlist, char *buf, size_t len));
int XPASendCommands _PRx((void *client_data, void *call_data,
			  char *paramlist, char **buf, size_t *len));
XPA XPACmdNew  _PRx((char *xclass, char *name));
XPACmd XPACmdAdd _PRx((XPA xpa, char *name, char *help,
		      SendCb send_callback, void *send_data, char *send_mode,
		      ReceiveCb rec_callback, void *rec_data, char *rec_mode));
int XPACmdDel _PRx((XPA xpa, XPACmd cmd));
int XPACmdInternalReceive _PRx((void *client_data, void *call_data,
				char *paramlist, char *buf, size_t len));
int XPACmdInternalSend _PRx((void *client_data, void *call_data,
			     char *paramlist, char **buf, size_t *len));
XPA XPAGetReserved  _PRx((void));
int XPAMtype _PRx((void));
/* client.c */
int XPAClientAddSelect _PRx((XPA xpa,
			     fd_set *readfdsptr, fd_set *writefdsptr));
int XPAClientProcessSelect _PRx((XPA xpa,
				 fd_set *readfdsptr, fd_set *writefdsptr,
				 int maxreq));
XPA XPAOpen  _PRx((char *mode));
void XPAClose _PRx((XPA xpa));
int XPAGet _PRx((XPA xpa, char *xtemplate,
		 char *paramlist, char *mode,
		 char **bufs, size_t *lens, char **names, char **errs, int n));
int XPAGetFd _PRx((XPA xpa, char *xtemplate,
		   char *paramlist, char *mode,
		   int *fds, char **names, char **errs, int n));
int XPASet _PRx((XPA xpa, char *xtemplate,
		 char *paramlist, char *mode,
		 char *buf, size_t len, char **names, char **errs, int n));
int XPASetFd _PRx((XPA xpa, char *xtemplate,
		   char *paramlist, char *mode,
		   int fd, char **names, char **errs, int n));
int XPAInfo _PRx((XPA xpa, char *xtemplate,
		  char *paramlist, char *mode,
		  char **names, char **errs, int n));
int XPAClientValid _PRx((XPA xpa));
void XPASaveJmp _PRx((void *env));


/* acl.c */
int XPAReceiveAcl _PRx((void *client_data, void *call_data,
			char *paramlist, char *buf, size_t len));
int XPASendAcl _PRx((void *client_data, void *call_data,
		     char *paramlist, char **buf, size_t *len));
int XPAAclEdit _PRx((char *lbuf));
int XPAAclAdd _PRx((char *lbuf));
int XPAAclDel _PRx((XACL acl));
void XPAAclFree _PRx((void));
int XPAAclNew _PRx((char *aname, int flag));
int XPAAclCheck _PRx((XPA xpa, unsigned int ip, char *acl));
/* port.c */
int XPAPortEdit _PRx((char *lbuf));
int XPAPortAdd _PRx((char *lbuf));
int XPAPortDel _PRx((PORT port));
void XPAPortFree _PRx((void));
int XPAPortNew _PRx((char *aname, int flag));
int XPAPort _PRx((XPA xpa));
/* remote.c */
int XPAReceiveRemote _PRx((void *client_data, void *call_data,
			   char *paramlist, char *buf, size_t len));
int XPASendRemote _PRx((void *client_data, void *call_data,
			char *paramlist, char **buf, size_t *len));
int XPARemote _PRx((XPA xpa, char *host, char *acl, char *mode));
/* clipboard.c */
int XPAReceiveClipboard _PRx((void *client_data, void *call_data,
			      char *paramlist, char *buf, size_t len));
int XPASendClipboard _PRx((void *client_data, void *call_data,
			   char *paramlist, char **buf, size_t *len));
int ClipBoardFree _PRx((XPA xpa, XPAClip clip));
/* xt.c */
int XPAXtAddInput _PRx((void *app, XPA xpa));
/* tcl.c */
int XPATclAddInput _PRx((XPA xpa));
int Tclxpa_Init _PRx((void *vinterp));
/* gtkloop.c */
int XPAGtkAddInput _PRx((XPA xpa));
/* xpaio.c */
int XPAGets _PRx((XPA xpa, int fd, char *buf, int len, int timeout));
int XPAPuts _PRx((XPA xpa, int fd, char *buf, int timeout));
int XPAGetBuf _PRx((XPA xpa, int fd, char **buf, size_t *len, int timeout));
int XPAPutBuf _PRx((XPA xpa, int fd, char *buf, size_t len, int timeout));
int XPAIOCallsXPA _PRx((int flag));
char *XPALevelSpaces _PRx((void));
void XPALevelSet _PRx((int lev));
int XPALevelGet _PRx((void));

_PRend

#endif /* __xpa.h */
