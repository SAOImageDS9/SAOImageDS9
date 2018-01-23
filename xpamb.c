/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

#include <time.h>
#include <xpap.h>

#define XPAMB_CLASS "XPAMB"
#define XPAMB_NAME "xpamb"
#define XPAMB_MODE NULL
#define XPAMB_HELP "xpa message bus:\n"

/* message bus structure */
typedef struct mbrec{
  struct mbrec *next;
  char *name;
  char *info;
  char *buf;
  size_t len;
  time_t t;
} *MB, MBRec;

/* this is the head of the message bus list -- too lazy to do anything more */
static MB mbhead=NULL;

/* global error message buffer */
static char errbuf[SZ_LINE];
static int maxhosts=XPA_MAXHOSTS;
static XPA xpa=NULL;

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAReceiveExit
 *
 * Purpose:	exit program
 *
 * Returns:	NONE
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
XPAReceiveExit (void *client_data, void *call_data, char *paramlist,
		char *buf, size_t len)
#else
static int XPAReceiveExit(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char *buf;
     size_t len;
#endif
{
  /* freeing the xpa handle will cause the xpa loop to terminate */
  XPAFree(xpa);
  return(0);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPASendExit
 *
 * Purpose:	exit program
 *
 * Returns:	NONE
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
XPASendExit (void *client_data, void *call_data, char *paramlist,
	    char **buf, size_t *len)
#else
static int XPASendExit(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char **buf;
     size_t *len;
#endif
{
  /* freeing the xpa handle will cause the xpa loop to terminate */
  XPAFree(xpa);
  return(0);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	MBLookup
 *
 * Purpose:	lookup anentry by name
 *
 * Returns: 	mb struct on success, NULL on failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static MB 
MBLookup (char *name)
#else
static MB MBLookup(name)
     char *name;
#endif
{
  MB cur;

  /*make sure we have something to work with */
  if( (name == NULL) || (*name == '\0') )
    return(NULL);

  /*  look for exact match */
  for(cur=mbhead; cur!=NULL; cur=cur->next){
    if( !strcmp(name, cur->name) ){
      return(cur);
    }
  }
  return(NULL);
}

/*
 *---------------------------------------------------------------------------
 *
 * Routine: 	MBDel
 *
 * Purpose: 	free up and remove an MB
 *
 * Results:	0 on success, -1 for failure
 *
 *---------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
MBDel (MB mb)
#else
static int MBDel(mb)
     MB mb;
#endif
{
  MB cur;

  if( mb == NULL ){
    snprintf(errbuf, SZ_LINE, "can't delete invalid xpamb entry");
    return(-1);
  }

  /* remove from list of MB's */
  if( mbhead ){
    if( mbhead == mb ){
      mbhead = mbhead->next;
    }
    else{
      for(cur=mbhead; cur!=NULL; cur=cur->next){
	if( cur->next == mb ){
	  cur->next = (cur->next)->next;
	  break;
	}
      }
    }
  }

  /* free up alloc'ed space */
  if( mb->name ) xfree(mb->name);
  if( mb->info ) xfree(mb->info);
  if( mb->buf )  xfree(mb->buf);

  /* free up record struct */
  xfree((char *)mb);
  return(0);
}

/*
 *---------------------------------------------------------------------------
 *
 * Routine: 	MBRemove
 *
 * Purpose: 	free up and remove an MB by name
 *
 * Results:	0 on success, -1 for failure
 *
 *---------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
MBRemove (char *name)
#else
static int MBRemove(name)
     char *name;
#endif
{
  MB mb;

  if( (mb=MBLookup(name)) != NULL )
    return(MBDel(mb));
  else{
    snprintf(errbuf, SZ_LINE, "can't delete unknown xpamb entry: %s", name);
    return(-1);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	MBAdd
 *
 * Purpose:	add one MB to the xpa MB list
 *
 * Returns: 	0 on success, -1 on failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
MBAdd (char *name, char *info, char *buf, size_t len, int replace)
#else
static int MBAdd(name, info, buf, len, replace)
     char *name;
     char *info;
     char *buf;
     size_t len;
     int replace;
#endif
{
  MB xnew=NULL;
  MB cur;

  /* see if this entry already exists */
  if( (cur = MBLookup(name)) != NULL ){
    if( !replace ){
      snprintf(errbuf, SZ_LINE, "xpamb entry already exists: %s", name);
      goto error;
    }
    else
      MBDel(cur);
  }

  /* allocate MB struct */
  if( (xnew = (MB)xcalloc(1, sizeof(MBRec))) == NULL ){
    snprintf(errbuf, SZ_LINE, "can't allocate memory for xpamb entry: %s",
	     name);
    goto error;
  }

  /* fill in the blanks */
  xnew->name = xstrdup(name);
  xnew->info = xstrdup(info);
  if( !(xnew->buf = (char *)xmalloc(len)) ){
    snprintf(errbuf, SZ_LINE, "can't allocate memory for xpamb buffer: %s",
	     name);
    goto error;
  }
  memcpy(xnew->buf, buf, len);
  xnew->len = len;
  xnew->t = time(NULL);

  /* add this MB to end of list of MB's */
  if( mbhead == NULL ){
    mbhead = xnew;
  }
  else{
    for(cur=mbhead; cur->next!=NULL; cur=cur->next)
      ;
    cur->next = xnew;
  }
  return(0);

error:
  if( xnew )
    xfree(xnew);
  return(-1);
}

/*
 *---------------------------------------------------------------------------
 *
 * Routine: 	MBInfo
 *
 * Purpose: 	send info string to specified fd
 *
 * Results:	0 on success, -1 for failure
 *
 *---------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
MBInfo (int fd, MB mb)
#else
static int MBInfo(fd, mb)
     int fd;
     MB mb;
#endif
{
  MB cur;
  char *tbuf;

  if( mb != NULL ){
    tbuf = (char *)xmalloc(strlen(mb->name) + SZ_LINE);
    snprintf(tbuf, SZ_LINE, "%s\tsize:\t\t%d\n\tcreated:\t%s",
	     mb->name, (int)mb->len, ctime(&(mb->t)));
    send(fd, tbuf, strlen(tbuf), 0);
    xfree(tbuf);
    if( mb->info && *(mb->info) ){
      tbuf = (char *)xmalloc(strlen(mb->info) + SZ_LINE);
      snprintf(tbuf, SZ_LINE, "\tinfo:\t\t%s\n", mb->info);
      send(fd, tbuf, strlen(tbuf), 0);
      xfree(tbuf);
    }
  }
  else{
    /*  send info for all entries */
    for(cur=mbhead; cur!=NULL; cur=cur->next){
      MBInfo(fd, cur);
    }
  }
  return(0);
}

/*
 *---------------------------------------------------------------------------
 *
 * Routine: 	MBData
 *
 * Purpose: 	send data to specified fd
 *
 * Results:	0 on success, -1 for failure
 *
 *---------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
MBData (int fd, MB mb)
#else
static int MBData(fd, mb)
     int fd;
     MB mb;
#endif
{
  if( mb != NULL ){
    if( mb->buf && mb->len ){
      if( send(fd, mb->buf, mb->len, 0) == mb->len ){
	return(0);
      }
      else{
	snprintf(errbuf, SZ_LINE, "writing data for xpamb entry: %s",
		 mb->name);
	return(-1);
      }
    }
    else{
      return(0);
    }
  }
  return(0);
}

/*
 *---------------------------------------------------------------------------
 *
 * Routine: 	MBSendCB
 *
 * Purpose: 	callback when we need to send data to a client
 *
 * Results:	0 on success, -1 for failure
 *
 *---------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
MBSendCB (void *client_data, void *call_data, char *paramlist,
	 char **buf, size_t *len)
#else
static int MBSendCB(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char **buf;
     size_t *len;
#endif
{
  XPA xpa = (XPA)call_data;
  MB mb;
  int i;
  int got=0;
  int tp=0;
  int doinfo=0;
  int dodata=0;
  int status=0;
  int fds[1];
  char tbuf[SZ_LINE];
  char *errs[XPA_MAXHOSTS];
  char *names[XPA_MAXHOSTS];

  /* reset error buffer */
  *errbuf = '\0';

  /* no paramlist means return info on all stored entries */
  if( !paramlist || !*paramlist ){
    return(MBInfo(xpa_datafd(xpa), NULL));
  }

  /* process switches */
  while( word(paramlist, tbuf, &tp) ){
    if( *tbuf != '-' )
      break;
    else if( !strcmp(tbuf, "-data") ){
      dodata++;
    }
    else if( !strcmp(tbuf, "-info") ){
      doinfo++;
    }
    else{
      break;
    }
  }

  if( doinfo || dodata ){
    if( !*tbuf ){
      snprintf(errbuf, SZ_LINE, "missing xpamb entry name");
      status = -1;
    }
    if( (mb=MBLookup(tbuf)) != NULL ){
      if( doinfo ){
	status = MBInfo(xpa_datafd(xpa), mb);
      }
      if( dodata ){
	status = MBData(xpa_datafd(xpa), mb);
      }
    }
    else{
      snprintf(errbuf, SZ_LINE, "unknown xpamb entry: %s", tbuf);
      status = -1;
    }
  }
  else{
    fds[0] = xpa_datafd(xpa);
    got = XPAGetFd(NULL, tbuf, &paramlist[tp], NULL, fds, names, errs,
		   -maxhosts);
    for(i=0; i<got; i++){
      if( errs[i] ){
	if( !*errbuf )
	  strcpy(errbuf, errs[i]);
	status = -1;
	xfree(errs[i]);
      }
      if( names[i] ) xfree(names[i]);
    }
  }

  /* send error message and return status */
  if( *errbuf )
    XPAError(xpa, errbuf);
  return(status);
}

/*
 *---------------------------------------------------------------------------
 *
 * Routine: 	MBRecCB
 *
 * Purpose: 	callback when we receive data/command from a client
 *
 * Results:	0 on success, -1 for failure
 *
 *---------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
MBRecCB (void *client_data, void *call_data, char *paramlist,
	    char *buf, size_t len)
#else
static int MBRecCB(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char *buf;
     size_t len;
#endif
{
  XPA xpa = (XPA)call_data;
  MB mb;
  int i;
  int got=0;
  int tp=0;
  int rflag=0;
  int status=0;
  char tbuf[SZ_LINE];
  char xsend[SZ_LINE];
  char xadd[SZ_LINE];
  char xinfo[SZ_LINE];
  char xremove[SZ_LINE];
  char xtemplate[SZ_LINE];
  char *errs[XPA_MAXHOSTS];
  char *names[XPA_MAXHOSTS];

  /* init flags */
  *xsend = '\0';
  *xadd = '\0';
  *xinfo = '\0';
  *xremove = '\0';
  /* reset error buffer */
  *errbuf = '\0';

  /* process switches */
  while( word(paramlist, tbuf, &tp) ){
    if( *tbuf != '-' )
      break;
    else if( !strcmp(tbuf, "-data") ){
      word(paramlist, xadd, &tp);
    }
    else if( !strcmp(tbuf, "-add") ){
      word(paramlist, xadd, &tp);
    }
    else if( !strcmp(tbuf, "-replace") ){
      word(paramlist, xadd, &tp);
      rflag = 1;
    }
    else if( !strcmp(tbuf, "-info") ){
      word(paramlist, xinfo, &tp);
    }
    else if( !strncmp(tbuf, "-del", 4) ){
      word(paramlist, xremove, &tp);
    }
    else if( !strcmp(tbuf, "-send") ){
      word(paramlist, xsend, &tp);
    }
    else
      break;
  }

  /* broadcast data, if we have a target
     the first non-switch word we found previously is the target */
  if( *tbuf ){
    strcpy(xtemplate, tbuf);
    /* the rest of the input string is the paramlist */
    paramlist = &(paramlist[tp]);
    /* send named data, if necessary */
    if( *xsend != '\0' ){
      if( (mb=MBLookup(xsend)) != NULL ){
	got = XPASet(NULL, xtemplate, paramlist, NULL, mb->buf, mb->len,
		     names, errs, maxhosts);
      }
      if( (buf != NULL) && (len>0) ){
	got = XPASet(NULL, xtemplate, paramlist, NULL, buf, len,
		     names, errs, maxhosts);
      }
    }
    else{
      got = XPASet(NULL, xtemplate, paramlist, NULL, buf, len,
		   names, errs, maxhosts);
    }
    for(i=0; i<got; i++){
      if( errs[i] ){
	if( !*errbuf )
	  strcpy(errbuf, errs[i]);
	status = -1;
	xfree(errs[i]);
      }
      if( names[i] ) xfree(names[i]);
    }
  }

  /* save named data, if necessary */
  if( *xadd !='\0' ){
    status = MBAdd(xadd, xinfo, buf, len, rflag);
  }

  /* remove named data, if necessary */
  if( *xremove !='\0' ){
    status = MBRemove(xremove);
  }

  /* send error message and return status */
  if( *errbuf )
    XPAError(xpa, errbuf);
  return(status);
}

#ifdef ANSI_FUNC
int 
main (int argc, char **argv)
#else
int main(argc, argv)
     int argc;
     char **argv;
#endif
{
  char *s;

  /* display version and exit, if necessary */
  if( (argc == 2) && !strcmp(argv[1], "--version") ){
    fprintf(stderr, "%s\n", XPA_VERSION);
    exit(0);
  }

  /* set global value for max hosts */
  maxhosts=XPA_MAXHOSTS;
  if( (s=(char *)getenv("XPA_MAXHOSTS")) != NULL )
    maxhosts = atoi(s);

  /* start up the xpa access point */
  if( !(xpa=XPANew(XPAMB_CLASS, XPAMB_NAME, XPAMB_HELP,
		   MBSendCB, NULL, XPAMB_MODE, MBRecCB, NULL, XPAMB_MODE)) ){
    fprintf(stderr, "XPA$ERROR: could not create xpamb access point\n");
    exit(1);
  }
  /* allow for a graceful exit */
  XPACmdAdd(XPAGetReserved (), "-exit", "\texit program",
	  XPASendExit, NULL, NULL, XPAReceiveExit, NULL, "fillbuf=false");

  /* process events */
  XPAMainLoop();
  return(0);
}
