/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

#include <xpap.h>

#if HAVE_LIBPTHREAD
#include <pthread.h>
static pthread_mutex_t xpans_mutex = PTHREAD_MUTEX_INITIALIZER;
#endif

#define MAX_ERRORS 5

static int doproxy=0;
static unsigned int localhost_ip=0;

extern char *optarg;
extern int optind;

typedef struct entrec{
  struct entrec *next;
  char *method;
  char *xclass;
  char *name;
  char *type;
  char *user;
  char *info;
} *Entry, EntryRec;

typedef struct reqrec{
  struct reqrec *next;
  int sock;
  unsigned int ip;
  int port;
  Entry entry;
} *Req, ReqRec;

static char *helpbuf = "xpans commands:\nhelp\t\t\t\t# print this help message\nlist\t\t\t\t# list all entries\nlookup class:name type user\t# lookup entries of this type and user\n";

static int keepalive=0;
static int ksec=0;
static int mtype = 0;
static int nentry = 0;
static int exconn=0;
static int sock=-1;
static char *logfile=NULL;
static time_t lastt=(time_t)0;
static time_t curt=(time_t)0;
static FILE *securefp=NULL;
static Req reqhead=NULL;

static int LookupReq _PRx((Req xreq, char *lbuf, int flag));
static int ListReq   _PRx((Req xreq, int flag));
static void HelpReq   _PRx((Req xreq, int flag));
#ifdef __STDC__
static void SecureLog(char *format, ...);
#else
static void SecureLog();
#endif

#if HAVE_LIBPTHREAD
/*
 *----------------------------------------------------------------------------
 *
 * Routine:	doxpaloop
 *
 * Purpose:	start up XPAMainLoop in another thread
 *
 * Returns:	NONE
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
void *doxpaloop(void *arg)
#else
void *doxpaloop(arg)
     void *arg;
#endif
{
  XPAMainLoop();
  return (void *)NULL;
}
#endif

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	receive_proxy
 *
 * Purpose:	receive callback for a proxy request
 *
 * Returns:	0 for success, -1 for failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
receive_proxy (void *client_data, void *call_data, char *paramlist,
	       char *buf, int len)
#else
int receive_proxy(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char *buf;
     int len;
#endif
{
  XPA xpa = (XPA)call_data;
  char *xtemplate;
  char *mode;
  char *err;
  char *s;
  char xmode[SZ_LINE];
  char tbuf[SZ_LINE];
  int fd=0;
  int pfd=-1;
  int got=0;
  Req req=NULL;

  xtemplate = xpa->comm->target;
  mode = xpa->comm->info;
  fd = xpa->comm->datafd;

  /* get proxy fd and associated xpans request struct */
  if( mode ){
    strcpy(xmode, mode);
    if( keyword(xmode, "nsproxy", tbuf, SZ_LINE) ){
      pfd = strtol(tbuf, &s, 0);
      if( s != tbuf ){
	for(req=reqhead; req!=NULL; req=req->next){
	  if( req->sock == pfd ){
	    break;
	  }
	}
      }
    }
  }
  if( pfd < 0 ){
    snprintf(tbuf, SZ_LINE, "invalid or missing proxy fd");
    XPAError(xpa, tbuf);
    return(-1);
  }
  else if( req == NULL ){
    snprintf(tbuf, SZ_LINE, "could not find xpans fd for proxy fd %d", pfd);
    XPAError(xpa, tbuf);
    return(-1);
  }

  FPRINTF((stderr, "%sreceive_proxy: fd=%d xtmpl=%s mode=%s paramlist=%s\n",
	   _sp, xpa->comm->cmdfd, xtemplate, mode,
	   paramlist?paramlist:"NONE"));

  if( XPASetFd(xpa, xtemplate, paramlist, mode, fd, NULL, &err, 1) ){
    /* display errors and free up strings */
    if( err != NULL ){
      XPAError(xpa, err);
      xfree(err);
      got = -1;
    }
  }
  else{
    got = -1;
  }

  FPRINTF((stderr, "%sreceive_proxy done\n", _sp));
  return(got);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	send_proxy
 *
 * Purpose:	send callback for a proxy request
 *
 * Returns:	0 for success, -1 for failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
send_proxy (void *client_data, void *call_data, char *paramlist,
	    char **buf, size_t *len)
#else
static int send_proxy(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char **buf;
     size_t *len;
#endif
{
  XPA xpa = (XPA)call_data;
  char *xtemplate;
  char *mode;
  char *err;
  char *s;
  char xmode[SZ_LINE];
  char tbuf[SZ_LINE];
  int fd=0;
  int pfd=-1;
  int got=0;
  Req req=NULL;

  xtemplate = xpa->comm->target;
  mode = xpa->comm->info;
  fd = xpa->comm->datafd;

  /* get proxy fd and associated xpans request struct */
  if( mode ){
    strcpy(xmode, mode);
    if( keyword(xmode, "nsproxy", tbuf, SZ_LINE) ){
      pfd = strtol(tbuf, &s, 0);
      if( s != tbuf ){
	for(req=reqhead; req!=NULL; req=req->next){
	  if( req->sock == pfd ){
	    break;
	  }
	}
      }
    }
  }
  if( pfd < 0 ){
    snprintf(tbuf, SZ_LINE, "invalid or missing proxy fd");
    XPAError(xpa, tbuf);
    return(-1);
  }
  else if( req == NULL ){
    snprintf(tbuf, SZ_LINE, "could not find xpans fd for proxy fd %d", pfd);
    XPAError(xpa, tbuf);
    return(-1);
  }

  FPRINTF((stderr, "%ssend_proxy: fd=%d xtemplate=%s mode=%s paramlist=%s\n",
	  _sp, xpa->comm->cmdfd, xtemplate, mode, paramlist?paramlist:"NONE"));

  if( XPAGetFd(xpa, xtemplate, paramlist, mode, &fd, NULL, &err, 1) ){
    /* display errors and free up strings */
    if( err != NULL ){
      XPAError(xpa, err);
      xfree(err);
      got = -1;
    }
  }
  else{
    got = -1;
  }

  FPRINTF((stderr, "%ssend_proxy done\n", _sp));
  return(got);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	receive_cb
 *
 * Purpose:	receive callback for XPA access point
 *
 * Returns:	0 for success, -1 for failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
receive_cb (void *client_data, void *call_data, char *paramlist,
	    char *buf, size_t len)
#else
int receive_cb(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char *buf;
     size_t len;
#endif
{
  XPA xpa = (XPA)call_data;
  char tbuf[SZ_LINE];

  /* if target is not xpans, we have a proxy request */
  snprintf(tbuf, SZ_LINE, "%s:%s", XPANS_CLASS, XPANS_NAME);
  if( strcmp(xpa->comm->target, tbuf) ){
    if( doproxy )
      return(receive_proxy(client_data, call_data, paramlist, buf, len));
    else{
      XPAError(xpa, "proxy requests not enabled in this xpans");
      return(-1);
    }
  }

  /* nothing to do for normal receive callback */
  XPAError(xpa, "no receive function defined for xpans");
  return(-1);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	send_cb
 *
 * Purpose:	send callback for XPA access point
 *
 * Returns:	0 for success, -1 for failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
send_cb (void *client_data, void *call_data, char *paramlist,
	 char **buf, size_t *len)
#else
static int send_cb(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char **buf;
     size_t *len;
#endif
{
  XPA xpa = (XPA)call_data;
  Req req;
  char tbuf[SZ_LINE];
  char ebuf[SZ_LINE];
  char tmpl[SZ_LINE];
  char type[SZ_LINE];
  char users[SZ_LINE];
  int got=0;
  int wp=0;

  /* if target is not xpans, we have a proxy request */
  snprintf(tbuf, SZ_LINE, "%s:%s", XPANS_CLASS, XPANS_NAME);
  if( strcmp(xpa->comm->target, tbuf) ){
    if( doproxy )
      return(send_proxy(client_data, call_data, paramlist, buf, len));
    else{
      XPAError(xpa, "proxy requests not enabled in this xpans");
      return(-1);
    }
  }

  if( paramlist && *paramlist )
    SecureLog("xpaget from host %x:%d (%s): %s", 
	      xpa->comm->cmdip, xpa->comm->cmdport,
	      getiphost(xpa->comm->cmdip),
	      (paramlist && *paramlist)?paramlist:"<no params>");
  else
    SecureLog("xpaget from host %x:%d (%s)", 
	      xpa->comm->cmdip, xpa->comm->cmdport,
	      getiphost(xpa->comm->cmdip));
  if( (req = (Req)xcalloc(1, sizeof(ReqRec))) == NULL )
    return(-1);
  if( xpa_datafd(xpa) >= 0 ){
    req->sock = xpa_datafd(xpa);
  }

#if HAVE_LIBPTHREAD
  /* lock the mutex before processing a request */
  if( doproxy >= 2 ) pthread_mutex_lock(&xpans_mutex);
#endif

  /* execute the appropriate routine */
  if( paramlist && *paramlist && word(paramlist, tbuf, &wp) ){
    if( !strcmp(tbuf, "list") ){
      ListReq(req, 0);
    }
    else if( !strcmp(tbuf, "help") ){
      HelpReq(req, 0);
    }
    else if( !strcmp(tbuf, "lookup") ){
      if( word(paramlist, tmpl, &wp ) ){
	/* look for type */
	if( !word(paramlist, type, &wp ) )
	  strcpy(type, XPA_ACLS);
	/* look for users */
	if( !word(paramlist, users, &wp ) )
	  strcpy(users, "*");
	snprintf(tbuf, SZ_LINE, "%s %s %s", tmpl, type, users);
	LookupReq(req, tbuf, 0);
      }
      else{
	strcpy(ebuf,
	       "XPA$ERROR 'lookup' requires class:name [type] [user]\n");
	XPAPuts(NULL, req->sock, ebuf, XPALongTimeout());
	got = -1;
      }
    }
    else{
      snprintf(ebuf, SZ_LINE, "XPA$ERROR unknown command '%s'\n", tbuf);
      XPAPuts(NULL, req->sock, ebuf, XPALongTimeout());
      got = -1;
    }
  }
  else {
    ListReq(req, 0);
  }

#if HAVE_LIBPTHREAD
  /* unlock the mutex */
  if( doproxy >= 2 ) pthread_mutex_unlock(&xpans_mutex);
#endif

  /* clean up */
  if( req ) xfree(req);
  return(got);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	Log
 *
 * Purpose:	write all names to a backup log
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void 
Log (void)
#else
static void Log()
#endif
{
  FILE *fp;
  Req req;
  Entry entry;

  if( !logfile )
    return;
  if( !strcasecmp(logfile, "stdout") )
    fp = stdout;
  else if( (fp=fopen(logfile, "w")) == NULL )
    return;
  for(req=reqhead; req!=NULL; req=req->next){
    for(entry=req->entry; entry!=NULL; entry=entry->next){
      fprintf(fp, "# add %s %s %s %s %s\n",
	      entry->method, entry->xclass,
	      entry->name, entry->type, entry->user);
      /* last one */
      if( entry->next == NULL )
	fprintf(fp, "xpaset -p %s -nsconnect\n", entry->method);
    }
  }
  if( fp != stdout )
    fclose(fp);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	SecureLog
 *
 * Purpose:	write security info to a backup log
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef __STDC__
void SecureLog(char *format, ...) 
{
    char sbuf[SZ_LINE];
    time_t t;
    va_list args;
    va_start(args, format);
#else
void SecureLog(va_alist) va_dcl
{
    char *format;
    char sbuf[SZ_LINE];
    time_t t;
    va_list args;

    va_start(args);
    format = va_arg(args, char *);
#endif
    if( securefp == NULL )
      return;
    t = time(NULL);
    vsnprintf(sbuf, SZ_LINE, format, args);
    fprintf(securefp, "%s", sbuf);
    fprintf(securefp, "\t%s", ctime(&t));
    fflush(securefp);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	SplitArg
 *
 * Purpose:	split the specified argument by changing a ":" to a space
 *		splitting is done in place
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void
SplitArg (char *buf, int arg)
#else
static void SplitArg(buf, arg)
     char *buf;
     int arg;
#endif
{
  int i;
  char *s;

  /* point to beginning of buffer */
  s = buf;
  /* skip over previous args */
  for(i=0; i<arg; i++){
    /* skip up to white space */
    while( *s && !isspace((int)*s) )
      s++;
    /* skip over white space to next arg */
    while( *s && isspace((int)*s) )
      s++;
  }
  /* we now are pointing at the arg in question.
     look for a ':' (up to next white space) and change to space */
  while( *s && !isspace((int)*s) ){
    if( *s == ':' ){
      *s = ' ';
      break;
    }
    else
      s++;
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	NewEntry
 *
 * Purpose:	allocate a new XPA entry
 *
 * Returns:	entry struct
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
NewEntry (Req req,
	  char *method, char *xclass, char *name, 
	  char *type, char *user, char *info)
#else
static int NewEntry(req, method, xclass, name, type, user, info)
     Req req;
     char *method;
     char *xclass;
     char *name;
     char *type;
     char *user;
     char *info;
#endif
{
  Entry entry, cur;
  Req xreq;

  /* don't duplicate with any other entry */
  for(xreq=reqhead; xreq!=NULL; xreq=xreq->next){
    for(entry=xreq->entry; entry!=NULL; entry=entry->next){
      if( !strcmp(entry->method, method) &&
	  !strcmp(entry->xclass, xclass) &&
	  !strcmp(entry->name, name)     &&
	  !strcmp(entry->type, type)     &&
	  !strcmp(entry->user, user)     &&
	  !strcmp(entry->info, info)     )
	return(1);
    }
  }

  /* allocate new entry */
  if( (entry = (Entry)xcalloc(1, sizeof(EntryRec))) == NULL )
    return(-1);

  /* fill in the blanks */
  entry->xclass = xstrdup(xclass);
  entry->name = xstrdup(name);
  entry->method = xstrdup(method);
  entry->type = xstrdup(type);
  entry->user = xstrdup(user);
  entry->info = xstrdup(info);

  FPRINTF((stderr, "%sNewEntry: %s %s %s %s %s %s\n", _sp,
	  xclass, name, method, type, user, info));

  /* add this to end of the list */
  if( req->entry == NULL ){
    req->entry = entry;
  }
  else{
    for(cur=req->entry; cur->next!=NULL; cur=cur->next)
      ;
    cur->next = entry;
  }

  /* inc the total number of entries */
  nentry++;

  /* return the news */
  return(0);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	FreeEntry
 *
 * Purpose:	free up an XPA entry
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void 
FreeEntry (Req req, Entry entry)
#else
static void FreeEntry(req, entry)
     Req req;
     Entry entry;
#endif
{
  Entry cur;

  /* remove this entry from the list so it can't be found */
  if( entry == req->entry ){
    req->entry = req->entry->next;
  }
  else{
    for(cur=req->entry; cur!=NULL; cur=cur->next){
      if( entry == cur->next ){
	cur->next = entry->next;
	break;
      }
    }
  }

  FPRINTF((stderr, "%sFreeEntry: %s %s\n", _sp, entry->xclass, entry->name));

  /* now free this struct */
  if( entry->method )
    xfree(entry->method);
  if( entry->xclass )
    xfree(entry->xclass);
  if( entry->name )
    xfree(entry->name);
  if( entry->type )
    xfree(entry->type);
  if( entry->user )
    xfree(entry->user);
  if( entry->info )
    xfree(entry->info);
  xfree(entry);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	DelEntry
 *
 * Purpose:	Delete an XPA entry
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
DelEntry (Req req, char *method)
#else
static int DelEntry(req, method)
     Req req;
     char *method;
#endif
{
  Entry cur, tcur;
  int got=-1;

  for(cur=req->entry; cur!=NULL; ){
    tcur = cur->next;
    if( ((method == NULL) || (*method == '\0'))         ||
	(!strcmp(method, "@") && (*cur->method == '@')) ||
	!strcmp(cur->method, method)		        ){
      FreeEntry(req, cur);
      got = 0;
    }
    cur = tcur;
  }
  return(got);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	FirewallEntry
 *
 * Purpose:	Correct the method to take a firewall into account
 *              we do this by taking the ip from the socket packet instead
 *              of the specified ip, if they differ
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void 
FirewallEntry (Req req, char *method)
#else
static void FirewallEntry(req, method)
     Req req;
     char *method;
#endif
{
  unsigned int ip;
  unsigned short port;

  if( mtype != XPA_INET )
    return;
  if( XPAParseIpPort(method, &ip, &port) ){
    if( (ip != req->ip) && (req->ip != localhost_ip) ){
      SecureLog("firewall %d: changing ip from %x to %x",
		req->sock, ip, req->ip);
      snprintf(method, SZ_LINE, "%x:%d", req->ip, port);
    }
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	NewReq
 *
 * Purpose:	allocate a new XPA request struct
 *
 * Returns:	Req struct
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static Req 
NewReq (int sock, unsigned int ip, int port)
#else
static Req NewReq(sock, ip, port)
     int sock;
     unsigned int ip;
     int port;
#endif
{
  Req req;
  Req cur;

  if( (req = (Req)xcalloc(1, sizeof(ReqRec))) == NULL )
    return(NULL);

  /* fill in the blanks */
  req->sock = sock;
  req->ip = ip;
  req->port = port;

  /* add this to end of the list */
  if( reqhead == NULL ){
    reqhead = req;
  }
  else{
    for(cur=reqhead; cur->next!=NULL; cur=cur->next)
      ;
    cur->next = req;
  }
  /* return the news */
  return(req);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	FreeReq
 *
 * Purpose:	free up an XPA request entry
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void 
FreeReq (Req req)
#else
static void FreeReq(req)
     Req req;
#endif
{
  Req cur;
  /* remove this entry from the list so it can't be found */
  if( req == reqhead ){
    reqhead = req->next;
  }
  else{
    for(cur=reqhead; cur!=NULL; cur=cur->next){
      if( req == cur->next ){
	cur->next = req->next;
	break;
      }
    }
  }
  /* close the communication channel */
  close(req->sock);
  /* now free this struct */
  xfree(req);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	AddReq
 *
 * Purpose:	add an XPA entry to the list
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void 
AddReq (Req req, char *lbuf, int flag)
#else
static void AddReq(req, lbuf, flag)
     Req req;
     char *lbuf;
     int flag;
#endif
{
  int got;
  char xclass[SZ_LINE];
  char name[SZ_LINE];
  char method[SZ_LINE];
  char omethod[SZ_LINE];
  char type[SZ_LINE];
  char user[SZ_LINE];
  char tbuf[SZ_LINE];

  SplitArg(lbuf, 1);
  got = sscanf(lbuf, "%s %s %s %s %s", method, xclass, name, type, user);
  if( got == 5 ){
    /* fix method if we can determine its been through a firewall */
    strcpy(omethod, method);
    FirewallEntry(req, method);
    if( !strcmp(omethod, method) )
      strcpy(tbuf, method);
    else
      snprintf(tbuf, SZ_LINE, "%s,%s", method, omethod);
    /* add the new entry */
    got = NewEntry(req, tbuf, xclass, name, type, user, XPA_DEF_CLIENT_INFO);
    Log();
    if( flag ){
      switch(got){
      case -1:
	XPAPuts(NULL, req->sock, "XPA$ERROR could not add entry\n",
		XPALongTimeout());
	break;
      case 0:
	XPAPuts(NULL, req->sock, "XPA$OK\n", XPALongTimeout());
	break;
      case 1:
	XPAPuts(NULL, req->sock, "XPA$EXISTS entry already exists\n",
		XPALongTimeout());
	break;
      default:
	XPAPuts(NULL, req->sock, "XPA$ERROR could not add entry\n",
		XPALongTimeout());
	break;
      }
    }
  }
  else{
    strcpy(tbuf, 
    "XPA$ERROR 'add' requires 4 args: ip:port class:name type user\n");
    XPAPuts(NULL, req->sock, tbuf, XPALongTimeout());
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	AddProxyReq
 *
 * Purpose:	add an XPA proxy entry to the list
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void 
AddProxyReq (Req req, char *lbuf, int flag)
#else
static void AddProxyReq(req, lbuf, flag)
     Req req;
     char *lbuf;
     int flag;
#endif
{
  int got=0;
  char xclass[SZ_LINE];
  char name[SZ_LINE];
  char method[SZ_LINE];
  char omethod[SZ_LINE];
  char type[SZ_LINE];
  char user[SZ_LINE];
  char info[SZ_LINE];
  char tbuf[SZ_LINE];

  /* make sure we are accepting proxy requests */
  if( !doproxy ){
    strcpy(tbuf, 
	   "XPA$ERROR: proxy requests not enabled in this xpans\n");
    XPAPuts(NULL, req->sock, tbuf, XPALongTimeout());
    return;
  }

  SplitArg(lbuf, 1);
  got = sscanf(lbuf, "%s %s %s %s %s", method, xclass, name, type, user);
  if( got == 5 ){
    if(  XPAMethod(method) == XPA_INET ){
      /* fix method if we can determine its been through a firewall */
      strcpy(omethod, method);
      FirewallEntry(req, method);
      if( !strcmp(omethod, method) )
	snprintf(tbuf, SZ_LINE, "@%s", method);
      else
	snprintf(tbuf, SZ_LINE, "@%s,%s", method, omethod);
    }
    else{
      strcpy(tbuf, 
	     "XPA$ERROR 'proxy' requires INET method\n");
      XPAPuts(NULL, req->sock, tbuf, XPALongTimeout());
      return;
    }
    /* save info */
    snprintf(info, SZ_LINE, "nsproxy=%d,ns=(%s,%s,%s,%s),dofork=true", 
	    req->sock, xclass, name, method, omethod);
    /* add the new entry */
    got = NewEntry(req, tbuf, xclass, name, type, user, info);
    Log();
    if( flag ){
      switch(got){
      case -1:
	XPAPuts(NULL, req->sock, "XPA$ERROR could not add entry\n",
		XPALongTimeout());
	break;
      case 0:
	XPAPuts(NULL, req->sock, "XPA$OK\n", XPALongTimeout());
	break;
      case 1:
	XPAPuts(NULL, req->sock, "XPA$EXISTS entry already exists\n",
		XPALongTimeout());
	break;
      default:
	XPAPuts(NULL, req->sock, "XPA$ERROR could not add entry\n",
		XPALongTimeout());
	break;
      }
    }
  }
  else{
    strcpy(tbuf, 
    "XPA$ERROR 'proxy' requires 4 args: ip:port class:name type user\n");
    XPAPuts(NULL, req->sock, tbuf, XPALongTimeout());
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	DelReq
 *
 * Purpose:	delete an XPA entry from the list
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void 
DelReq (Req req, char *lbuf, int flag)
#else
static void DelReq(req, lbuf, flag)
     Req req;
     char *lbuf;
     int flag;
#endif
{
  int got=0;
  char method[SZ_LINE];
  char omethod[SZ_LINE];
  char tbuf[SZ_LINE];

  if( lbuf != NULL ){
    if( sscanf(lbuf, "%s", method) == 1 ){
      /* fix method if we can determine its been through a firewall */
      strcpy(omethod, method);
      FirewallEntry(req, method);
      if( !strcmp(omethod, method) )
	strcpy(tbuf, method);
      else
	snprintf(tbuf, SZ_LINE, "%s,%s", method, omethod);
      got = DelEntry(req, tbuf);
      Log();
      if( flag ){
	if( got == 0 )
	  XPAPuts(NULL, req->sock, "XPA$OK\n", XPALongTimeout());
	else
	  XPAPuts(NULL, req->sock, "XPA$ERROR entry does not exist\n",
		  XPALongTimeout());
      }
    }
    else{
      strcpy(tbuf, "XPA$ERROR 'del' requires 1 arg: ip:port\n");
      XPAPuts(NULL, req->sock, tbuf, XPALongTimeout());
    }
  }
  else{
    /* connection is closed -- free all entries for req, and delete req */
    FPRINTF((stderr, "%sxpans request really died: %d\n", _sp, req->sock));
    DelEntry(req, NULL);
    FreeReq(req);
    Log();
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	DelProxyReq
 *
 * Purpose:	delete an XPA entry from the list
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void 
DelProxyReq (Req req, char *lbuf, int flag)
#else
static void DelProxyReq(req, lbuf, flag)
     Req req;
     char *lbuf;
     int flag;
#endif
{
  int got=0;
  char method[SZ_LINE];
  char omethod[SZ_LINE];
  char tbuf[SZ_LINE];

  /* make sure we are accepting proxy requests */
  if( !doproxy ){
    strcpy(tbuf, 
	   "XPA$ERROR: proxy requests not enabled in this xpans\n");
    XPAPuts(NULL, req->sock, tbuf, XPALongTimeout());
    return;
  }

  if( lbuf != NULL ){
    if( sscanf(lbuf, "%s", method) == 1 ){
      /* fix method if we can determine its been through a firewall */
      strcpy(omethod, method);
      FirewallEntry(req, method);
      if( !strcmp(omethod, method) )
	strcpy(tbuf, method);
      else
	snprintf(tbuf, SZ_LINE, "@%s,%s", method, omethod);
      /* free the specified entry */
      got = DelEntry(req, tbuf);
      Log();
      if( flag ){
	if( got == 0 )
	  XPAPuts(NULL, req->sock, "XPA$OK\n", XPALongTimeout());
	else
	  XPAPuts(NULL, req->sock, "XPA$ERROR entry does not exist\n",
		  XPALongTimeout());
      }
    }
    else{
      strcpy(tbuf, "XPA$ERROR 'del' requires 1 arg: ip:port\n");
      XPAPuts(NULL, req->sock, tbuf, XPALongTimeout());
    }
  }
  else{
    /* connection is closed -- free all entries for req, and delete req */
    DelEntry(req, "@");
    /* if this is the last entry, delete the request struct as well */
    if( req->entry == NULL ){
      FreeReq(req);
    }
    Log();
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	LookupReq
 *
 * Purpose:	lookup a template in the XPA list
 *
 * Returns:	number of matched lookups
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
LookupReq (Req xreq, char *lbuf, int flag)
#else
static int LookupReq(xreq, lbuf, flag)
     Req xreq;
     char *lbuf;
     int flag;
#endif
{
  int i;
  int nrec;
  int got=0;
  int domethod=0;
  int slen=1024;
  int *lens;
  char args[4][SZ_LINE];
  char ctmpl[SZ_LINE];
  char ntmpl[SZ_LINE];
  char tbuf[SZ_LINE];
  char type[SZ_LINE];
  char users[SZ_LINE];
  char method[SZ_LINE];
  char *user;
  char *usercopy;
  char **strings;
  char *tstring;
  Req req;
  Entry entry;

  SplitArg(lbuf, 0);
  nrec = sscanf(lbuf, "%s %s %s %s", args[0], args[1], args[2], args[3]);
  switch(nrec){
  case 0:
    goto error;
  case 1:
    strcpy(ctmpl, "*");
    strcpy(ntmpl, args[0]);
    strcpy(type,  "*");
    strcpy(users, "*");
    if( *args[0] == '@' ){
      strcpy(method, args[0]);
      domethod = 1;
    }
    break;
  case 2:
    strcpy(ctmpl, "*");
    strcpy(ntmpl, args[0]);
    strcpy(type,  args[1]);
    strcpy(users, "*");
    if( *args[0] == '@' ){
      snprintf(method, SZ_LINE, "%s:%s", args[0], args[1]);
      domethod = 1;
    }
    break;
  case 3:
    strcpy(ctmpl, "*");
    strcpy(ntmpl, args[0]);
    strcpy(type,  args[1]);
    strcpy(users, args[2]);
    if( *args[0] == '@' ){
      strcpy(method, args[0]);
      domethod = 1;
    }
    break;
  case 4:
    strcpy(ctmpl, args[0]);
    strcpy(ntmpl, args[1]);
    strcpy(type,  args[2]);
    strcpy(users, args[3]);
    if( *args[0] == '@' ){
      snprintf(method, SZ_LINE, "%s:%s", args[0], args[1]);
      domethod = 1;
    }
    break;
  case 5:
    goto error;
  }
  strings = (char **)xmalloc(slen * sizeof(char *));
  lens = (int *)xmalloc(slen * sizeof(int));
  lens[0] = 0;
  for(req=reqhead; req!=NULL; req=req->next){
    for(entry=req->entry; entry!=NULL; entry=entry->next){
      /* check method or class:name */
      if( domethod ){
	if( strcmp(entry->method, method) )
	  continue;
      }
      else{
	if( !tmatch(entry->xclass, ctmpl) || !tmatch(entry->name, ntmpl) )
	  continue;
      }
      /* check type */
      if( strcmp(type, "*") && !strpbrk(entry->type, type) )
	continue;
      /* check user */
      if( !strcmp(users, "*") || !strcmp(users, entry->user) ){
	user = entry->user;
      }
      else{
	user = NULL;
	usercopy = (char *)xstrdup(users);
	for(user=(char *)strtok(usercopy, " :;,");
	    user!=NULL;
	    user=(char *)strtok(NULL," :;,")){
	  if ( !strcasecmp(user, entry->user) ){
	    break;
	  }
	}
	if( usercopy )
	  xfree(usercopy);
      }
      if( !user )
	continue;
      /* made it through all checks! */
      if( domethod || (*entry->method == '@') ){
	snprintf(tbuf, SZ_LINE, "%s %s %s %s %s %s\n",
		 entry->xclass, entry->name, 
		 entry->type, XPANSMethod(NULL,1), entry->user, entry->info);
	FPRINTF((stderr, "%sLookupReq: method lookup found:\n%s", _sp, tbuf));
      }
      else{
	snprintf(tbuf, SZ_LINE, "%s %s %s %s %s %s\n",
		 entry->xclass, entry->name, 
		 entry->type, entry->method, entry->user, entry->info);
	FPRINTF((stderr, "%sLookupReq: class/name lookup got:\n%s",
		 _sp, tbuf));
      }
      if( got >= (slen-2) ){
	slen *= 2;
	strings = (char **)xrealloc(strings, slen * sizeof(char *));
	lens = (int *)xrealloc(lens, slen * sizeof(int));
      }
      strings[got] = xstrdup(tbuf);
      lens[got+1] = lens[got] + strlen(strings[got]);
      got++;
    }
  }
  if( flag ){
    strings[got] = xstrdup("XPA$OK\n");
    lens[got+1] = lens[got] + strlen(strings[got]);
    got++;
  }
  /* write one buffer load: we have to avoid multiple writes in a row
     because tcp_delay buffers these (i.e., the Nagle algorithm) and kills
     the performance */
  if( got > 0 ){
    tstring = (char *)xcalloc(lens[got]+1, sizeof(char));
    for(i=0; i<got; i++){
      if( strings[i] ){
	strcpy(&(tstring[lens[i]]), strings[i]);
      }
    }
    XPAPutBuf(NULL, xreq->sock, tstring, lens[got], XPALongTimeout());
    for(i=0; i<got; i++){
      if( strings[i] )
	xfree(strings[i]);
    }
    if( tstring )
      xfree(tstring);
  }
  if( strings )
    xfree(strings);
  if( lens )
    xfree(lens);
  return(got);

error:
    strcpy(tbuf,
   "XPA$ERROR xpans 'lookup' requires: class:name [type] [user]\n");
    XPAPuts(NULL, xreq->sock, tbuf, XPALongTimeout());
    return(0);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	HelpReq
 *
 * Purpose:	send help message
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void
HelpReq (Req xreq, int flag)
#else
static void HelpReq(xreq, flag)
     Req xreq;
     int flag;
#endif
{
  /* XPAPuts(NULL, xreq->sock, helpbuf, XPALongTimeout()); */
  XPAPutBuf(NULL, xreq->sock, helpbuf, strlen(helpbuf), XPALongTimeout());
  if( flag )
    XPAPuts(NULL, xreq->sock, "XPA$OK\n", XPALongTimeout());
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	ListReq
 *
 * Purpose:	list all entries in the XPA list
 *
 * Returns:	number of entries listed
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
ListReq (Req xreq, int flag)
#else
static int ListReq(xreq, flag)
     Req xreq;
     int flag;
#endif
{
  int got=0;
  char tbuf[SZ_LINE];
  Req req;
  Entry entry;

  for(req=reqhead; req!=NULL; req=req->next){
    for(entry=req->entry; entry!=NULL; entry=entry->next){
      snprintf(tbuf, SZ_LINE, "%s %s %s %s %s\n",
	       entry->xclass, entry->name,
	       entry->type, entry->method, entry->user);
      XPAPuts(NULL, xreq->sock, tbuf, XPALongTimeout());
      got++;
    }
  }
  if( flag )
    XPAPuts(NULL, xreq->sock, "XPA$OK\n", XPALongTimeout());
  return(got);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	StatusReq
 *
 * Purpose:	send short "alive" message to inquiring server
 *
 * Returns:	NONE
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void
StatusReq (Req xreq)
#else
static void StatusReq(xreq)
     Req xreq;
#endif
{
  XPAPuts(NULL, xreq->sock, "XPA$OK\n", XPALongTimeout());
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	VersionReq
 *
 * Purpose:	send version info to inquiring server
 *
 * Returns:	NONE
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void
VersionReq (Req xreq, char *vstr)
#else
static void VersionReq(xreq, vstr)
     Req xreq;
     char *vstr;
#endif
{
  int ip=0;
  int dowarn=0;
  char tbuf[SZ_LINE];

  /* version check: server version should be <= our version */
  if( word(vstr, tbuf, &ip) ){
    dowarn = (XPAVersionCheck(XPA_VERSION, tbuf)>0);
  }
  else{
    strcpy(tbuf, "unknown/pre-2.1");
    dowarn = 1;
  }
  if( dowarn )
    XPAVersionWarn(tbuf, XPA_VERSION);
  snprintf(tbuf, SZ_LINE, "XPA$VERSION %s\n", XPA_VERSION);
  XPAPuts(NULL, xreq->sock, tbuf, XPALongTimeout());
}

#ifdef ANSI_FUNC
void
usage (char *s)
#else
void usage(s)
     char *s;
#endif
{
    fprintf(stderr, "\n");
    fprintf(stderr, "usage: xpans [-h] [-e] [-k msec] [-l log] [-p port] [-s slog] [-P n]  \n");
    fprintf(stderr, "switches:\n");
    fprintf(stderr, "\t-h\tprint this message\n");
    fprintf(stderr, "\t-e\texit when there are no more XPA connections\n");
    fprintf(stderr, "\t-k msec\tsend keepalive messages every n sec\n");
    fprintf(stderr, "\t-l file\tlog data base entries to specified file\n");
    fprintf(stderr, "\t-p port\tlisten for connections on specified port\n");
    fprintf(stderr, "\t-s file\tlog security info to specified file\n");
    fprintf(stderr, "\t-P 1|2\taccept proxy requests (1) using separate thread (2) \n");
    fprintf(stderr, "\t--version display version and exit\n");
    fprintf(stderr, "\n(version: %s)\n", XPA_VERSION);
    exit(1);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	KeepAliveReq
 *
 * Purpose:	send keep alive to all open connections
 *
 * Returns:	number of entries processed
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
KeepAliveReq (void)
#else
static int KeepAliveReq()
#endif
{
  int got=0;
  Req req;

  /* return if keepalive is turned off */
  if( !keepalive )
    return(0);
  /* get current time */
  curt = time(NULL);
  /* if keep alive time has passed, send keep alive messages */
  if( (curt - lastt) > ksec ){
    for(req=reqhead; req!=NULL; req=req->next){
      send(req->sock, " ", 1, MSG_OOB);
      got++;
    }
    lastt = curt;
  }
  return(got);
}

#ifdef ANSI_FUNC
int 
main (int argc, char **argv)
#else
int
main(argc, argv)
     int argc;
     char **argv;
#endif
{
  char lbuf[SZ_LINE];
  char tbuf[SZ_LINE];
  char cmd[SZ_LINE];
  char method[SZ_LINE];
  int c;
  int sock2;
  int width;
  int got;
  int wp;
  int cmdport;
  int sval;
  int nerr=0;
  int oum;
  int llen;
  int reuse_addr=1;
  int keep_alive=1;
  unsigned int ip;
  unsigned int cmdip;
  unsigned short port=0;
  socklen_t slen=sizeof(struct sockaddr_in);
  struct sockaddr_in sock_in;
  struct sockaddr_in sock_in2;
#if HAVE_LIBPTHREAD
  pthread_t tid;
#endif
#if HAVE_SYS_UN_H
  struct sockaddr_un sock_un;
  struct sockaddr_un sock_un2;
  char lockfile[SZ_LINE];
  int lockfd=-1;
  struct flock lock;
#endif
  fd_set readfds;
  struct timeval tv;
  struct timeval *tvp;
  Req req, treq;
  XPA xpa;

  /* display version and exit, if necessary */
  if( (argc == 2) && !strcmp(argv[1], "--version") ){
    fprintf(stderr, "%s\n", XPA_VERSION);
    exit(0);
  }

  /* init the XPA environment */
  XPAInitEnv();

  /* Disable SIGPIPE so we do not die if the client dies.
   * Rather, we will get an EOF on reading or writing.
   */
  xsignal_sigpipe();

  /* we want the args in the same order in which they arrived, and
     gnu getopt sometimes changes things without this */
  putenv("POSIXLY_CORRECT=true");

  /* process command line args */
  while ((c = getopt(argc, argv, "ef:hk:l:p:P:s:")) != -1){
    switch(c){
    case 'h':
      usage(argv[0]);
      exit(0);
    case 'e':
      exconn = 1;
      break;
    case 'f':
#if HAVE_SYS_UN_H
      /* method is unix with specified file */
      putenv(xstrdup("XPA_METHOD=unix"));
      snprintf(tbuf, SZ_LINE, "XPA_NSUNIX=%s", optarg);
      putenv(xstrdup(tbuf));
      break;
#else
      fprintf(stderr, "XPA$ERROR: UNIX sockets not supported on this host\n");
      exit(1);
      break;
#endif
    case 'k':
      fprintf(stderr,
      "XPA$KEEPALIVE: URG TCP data is changed by some Cisco routers into in-band data.\n");
      fprintf(stderr, 
      "Encountering such a router will break the keep-alive function and may break your\n");
      fprintf(stderr, "XPA server as well. Proceed with caution!\n");
      keepalive = 1;
      ksec = atoi(optarg);
      if( ksec <= 0 )
	ksec = 1;
      break;
    case 'l':
      logfile = optarg;
      break;
    case 'p':
      /* method is inet with specified port */
      putenv(xstrdup("XPA_METHOD=inet"));
      snprintf(tbuf, SZ_LINE, "XPA_NSINET=$host:%d", atoi(optarg));
      putenv(xstrdup(tbuf));
      break;
    case 'P':
      if( istrue(optarg) )
	doproxy = 1;
      else if( isfalse(optarg) )
	doproxy = 0;
      else
	doproxy = atoi(optarg);
      if( doproxy < 0 )
	doproxy = 0;
#if HAVE_LIBPTHREAD==0
      if( doproxy >= 2 ){
	fprintf(stderr,
	"XPA$ERROR: xpans not built with thread support on this host\n");
	exit(1);
      }
#endif
      break;
    case 's':
      if( !strcasecmp(optarg, "stdout") ){
	securefp = stdout;
      }
      else if( (securefp=fopen(optarg, "w")) == NULL ){
	perror("securefp");
	exit(1);
      }
      break;
    }
  }

  /* get default ip and port */
  strcpy(method, XPANSMethod(NULL, 0));
  mtype = XPAMethod(method);
  localhost_ip = gethostip("$localhost");

  /* start secure logging, if necessary */
  SecureLog("Starting xpans: %s", method);
  /* set up communication method */
  switch(mtype){
  case XPA_INET:
    XPAParseIpPort(method, &ip, &port);
    if( (sock = xsocket(AF_INET, SOCK_STREAM, 0)) < 0 ){
      if( XPAVerbosity() > 1 )
	perror("xpans socket()");
      exit(1);
    }
    setsockopt(sock, SOL_SOCKET, SO_KEEPALIVE,
	       (char *)&keep_alive, sizeof(keep_alive));
    setsockopt(sock, SOL_SOCKET, SO_REUSEADDR,
	       (char *)&reuse_addr, sizeof(reuse_addr));
    memset((char *)&sock_in, 0, sizeof(sock_in));
    sock_in.sin_family = AF_INET;
    /* localhost only */
    if( ip == localhost_ip )
      sock_in.sin_addr.s_addr = htonl(ip);
    /* any address will do */
    else
      sock_in.sin_addr.s_addr = htonl(INADDR_ANY);
    sock_in.sin_port = htons(port);
    /* bind to a port -- an error indicates that another xpans is running */
    if( xbind(sock, (struct sockaddr *)&sock_in, sizeof(sock_in)) < 0 ){
      if( XPAVerbosity() > 1 )
	perror("xpans bind()");
      exit(1);
    }
    SecureLog("Opening INET socket: %d", sock);
    break;
#if HAVE_SYS_UN_H
  case XPA_UNIX:
    /* with unix sockets, we lock a special file to signal any new xpans
       process that it is not needed. This behavior mimicks the bind()
       error with inet sockets */
    snprintf(lockfile, SZ_LINE, "%s-lock", method);
    if( (lockfd=open(lockfile, O_CREAT|O_RDWR, 0666)) >=0 ){
      lock.l_type = F_WRLCK;	/* F_RDLCK, F_WRLCK, F_UNLCK */
      lock.l_start = 0;		/* byte offset, relative to l_whence */
      lock.l_whence = SEEK_SET;	/* SEEK_SET, SEE_CUR, SEEK_END */
      lock.l_len = 1;		/* #bytes (0 means to EOF) */
      /* if we can't get the lock, there is an xpans already running */
      if( xfcntl(lockfd, F_SETLK, &lock) < 0 ){
	close(lockfd);
	if( XPAVerbosity() > 1 )
	  fprintf(stderr, "XPA$ERROR: xpans already running\n");
	exit(1);
      }
    }
    unlink(method);
    if( (sock = xsocket(AF_UNIX, SOCK_STREAM, 0)) < 0 ){
      if( XPAVerbosity() > 1 )
	perror("xpans socket()");
      exit(1);
    }
    setsockopt(sock, SOL_SOCKET, SO_KEEPALIVE,
	       (char *)&keep_alive, sizeof(keep_alive));
    setsockopt(sock, SOL_SOCKET, SO_REUSEADDR,
	       (char *)&reuse_addr, sizeof(reuse_addr));
    memset((char *)&sock_un, 0, sizeof(sock_un));
    sock_un.sun_family = AF_UNIX;
    strcpy(sock_un.sun_path, method);
    /* unset umask so that everyone can read and write */
    oum = umask(0);
    /* bind to a port */
    if( xbind(sock, (struct sockaddr *)&sock_un, sizeof(sock_un)) < 0 ){
      if( XPAVerbosity() > 1 )
	perror("xpans bind()");
      exit(1);
    }
    /* reset umask */
    umask(oum);
    SecureLog("opened UNIX socket: %d", sock);
    break;
#endif
  default:
    break;
  }

  /* listen for connections */
  if( listen(sock, XPA_MAXLISTEN) < 0 ){
    if( XPAVerbosity() > 1 )
      perror("xpans listen()");
    exit(1);
  }
  /* make sure we close on exec */
  xfcntl(sock, F_SETFD, FD_CLOEXEC);

  /* add an XPA access point for external processing */
  if( !(xpa=XPANew(XPANS_CLASS, XPANS_NAME, helpbuf,
		   send_cb,    NULL, "fillbuf=false",
		   receive_cb, NULL, "fillbuf=false")) ){
    if( XPAVerbosity() > 1 )
      fprintf(stderr, "XPA$ERROR: failed to create access point for xpans\n");
    exit(1);
  }
  SecureLog("XPA access point: %s", xpa->name);

  /* init select parameters */
  width = FD_SETSIZE;

#if HAVE_LIBPTHREAD
  /* start up new thread for XPA main loop, if necessary */
  if( doproxy >= 2 ){
    if( pthread_create(&tid, NULL, doxpaloop, NULL) != 0 ){
      fprintf(stderr,
	      "XPA$ERROR: can't create new thread for XPA handler in xpans\n");
      exit(1);
    }
  }
#endif

  /* enter processing loop */
  while( 1 ){
    /* reset flag */
    FD_ZERO(&readfds);
    /* add main listening socket */
    FD_SET(sock, &readfds);
    /* add request lines */
    for(got=0, req=reqhead; req!=NULL; req=req->next){
      FD_SET(req->sock, &readfds);
      got++;
    }
    /* add XPA selections */
    if( doproxy < 2 ) XPAAddSelect(NULL, &readfds);
    /* if we once had entries but do not have them now, we might be done */
    if( exconn && nentry && !got ){
      goto done;
    }
    if( keepalive ){
      tv.tv_sec = ksec;
      tv.tv_usec = 0;
      tvp = &tv;
    }
    else{
      tvp = NULL;
    }
    /* wait for next request */
    sval = xselect(width, &readfds, NULL, NULL, tvp);
    if( sval > 0 ){
#if HAVE_LIBPTHREAD
      /* lock the mutex before processing a reqest */
      if( doproxy >= 2 ) pthread_mutex_lock(&xpans_mutex);
#endif
      /* process a new major request */
      if( FD_ISSET(sock, &readfds) ){
	/* new request */
	switch(mtype){
	case XPA_INET:
	  while( 1 ){
	    slen = sizeof(struct sockaddr_in);
	    if((sock2=xaccept(sock, (struct sockaddr *)&sock_in2, &slen))>=0){
	      cmdip = ntohl(sock_in2.sin_addr.s_addr);
	      cmdport = ntohs(sock_in2.sin_port);
	      /* make sure we close on exec */
	      xfcntl(sock2, F_SETFD, FD_CLOEXEC);
	      NewReq(sock2, cmdip, cmdport);
	      SecureLog("accept %d: %x:%d (%s)",
			sock2, cmdip, cmdport, getiphost(cmdip));
	      break;
	    }
	    else{
	      if( errno == EINTR )
		continue;
	      else
		break;
	    }
	  }
	  break;
#if HAVE_SYS_UN_H
	case XPA_UNIX:
	  while( 1 ){
	    slen = sizeof(struct sockaddr_un);
	    if( (sock2=xaccept(sock, (struct sockaddr *)&sock_un2, &slen))>=0){
	      /* make sure we close on exec */
	      xfcntl(sock2, F_SETFD, FD_CLOEXEC);
	      NewReq(sock2, 0, 0);
	      SecureLog("accept from local socket");
	      break;
	    }
	    else{
	      if( errno == EINTR )
		continue;
	      else
		break;
	    }
	  }
	  break;
#endif
	default:
	  break;
	}
      }
      /* process an existing request line */
      for(got=0, req=reqhead; req!=NULL; ){
	treq = req->next;
	if( FD_ISSET(req->sock, &readfds) ){
	  FPRINTF((stderr, "%sxpans existing request: %d\n", _sp, req->sock));
	  if( XPAGets(NULL, req->sock, lbuf, SZ_LINE, XPAShortTimeout()) >0 ){
	    llen = strlen(lbuf) - 1;
	    if( (lbuf[llen]) == '\n' ){
	      /* ignore a single new-line, its a keep-alive message */
	      if( llen == 0){
		FPRINTF((stderr, "%sxpans ignoring keep-alive\n", _sp));
		req = treq;
		continue;
	      }
	      /* else remove new-line */
	      else{
		lbuf[llen] = '\0';
	      }
	    }
	    FPRINTF((stderr, "%sxpans request: %s\n", _sp, lbuf));
	    SecureLog("cmd %d: %s", req->sock, lbuf);
	    /* process another request from this process */
	    wp = 0;
	    /* get first token: command */
	    if( !word(lbuf, cmd, &wp) ){
	      strcpy(tbuf, "XPA$ERROR no xpans command specified\n");
	      XPAPuts(NULL, req->sock, tbuf, XPALongTimeout());
	    }
	    else{
	      /* skip white space */
	      while( isspace((int)lbuf[wp]) )
		wp++;
	      /* lookup the command */
	      if( !strcmp(cmd, "status") ){
		StatusReq(req);
	      }
	      else if( !strcmp(cmd, "version") ){
		VersionReq(req, &(lbuf[wp]));
	      }
	      else if( !strcmp(cmd, "add") ){
		AddReq(req, &(lbuf[wp]), 1);
	      }
	      else if( !strcmp(cmd, "addproxy") ){
		AddProxyReq(req, &(lbuf[wp]), 1);
	      }
	      else if( !strcmp(cmd, "del") ){
		DelReq(req, &(lbuf[wp]), 1);
	      }
	      else if( !strcmp(cmd, "delproxy") ){
		DelProxyReq(req, &(lbuf[wp]), 1);
	      }
	      else if( !strcmp(cmd, "help") ){
		HelpReq(req, 1);
	      }
	      else if( !strcmp(cmd, "list") ){
		ListReq(req, 1);
	      }
	      else if( !strcmp(cmd, "lookup") ){
		LookupReq(req, &(lbuf[wp]), 1);
	      }
	      else{
		SecureLog("ignoring unknown command");
		snprintf(tbuf, SZ_LINE,
			 "XPA$ERROR unknown xpans request: %s\n", lbuf);
		XPAPuts(NULL, req->sock, tbuf, XPALongTimeout());
	      }
	    }
	  }
	  else{
	    /* process dies: delete all entries associated with this sock */
	    FPRINTF((stderr, "%sxpans request died: %d\n", _sp, req->sock));
	    DelReq(req, NULL, 1);
	  }
	}
	req = treq;
      }

      /* process xpa requests */
      if( doproxy < 2 ) XPAProcessSelect(&readfds, 0);
#if HAVE_LIBPTHREAD
      /* unlock the mutex */
      if( doproxy >= 2 ) pthread_mutex_unlock(&xpans_mutex);
#endif
    }
    /* keep alive timer went off */
    else if( sval == 0 ){
      ;
    }
    /* error on select() */
    else{
      /* restart system call if interrupted */
      if( errno != EINTR ){
	/* all others are problematic */
	if( XPAVerbosity() > 1 )
	  perror("xpans select()");
	if( ++nerr >= MAX_ERRORS ){
	  if( XPAVerbosity() > 1 )
	    fprintf(stderr,
		    "XPA$ERROR: too many select() errors in xpans\n");
	  goto done;
	}
      }
    }
    /* see if its time to send keepalive probe */
    if( keepalive )
      KeepAliveReq();
  }

done:
  if( sock >=0 ) close(sock);
  if( securefp && (securefp != stdout) ) fclose(securefp);
#if HAVE_SYS_UN_H
  if( mtype == XPA_UNIX ){
    unlink(method);
    if( lockfd >= 0 ){
      close(lockfd);
      unlink(lockfile);
    }
  }
#endif
  XPAFree(xpa);
  return(0);
}
