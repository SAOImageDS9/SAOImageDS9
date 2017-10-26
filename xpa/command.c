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

/* this is the static xpa struct that holds the reserved commands */
static XPA rxpa=NULL;

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPACmdParseNames
 *
 * Purpose:	massage a name string, changing multiple sequential spaces
 *		into a single space
 *
 * Returns:	new name, with spaces massaged (also number of spacess)
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static char *
XPACmdParseNames(char *lbuf, int *ntokens)
#else
static char *XPACmdParseNames(lbuf, ntokens)
     char *lbuf;
     int *ntokens;
#endif
{
  char tbuf[SZ_LINE];
  int lp=0;
  char *buf;

  /* can't be larger than the original string */
  buf = (char *)xmalloc(strlen(lbuf)+1);
  *buf = '\0';
  *ntokens = 0;

  /* pick off each word, separating by a single space */
  while( word(lbuf, tbuf, &lp)){
    if( *buf != '\0' )
      strcat(buf, " ");
    strcat(buf, tbuf);
    *ntokens += 1;
  }

  /* make the string the right size */
  buf = (char *)xrealloc(buf, strlen(buf)+1);
  return(buf);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAReceiveNSConnect
 *
 * Purpose:	reset and re-establish connection to name server
 *
 * Returns:	xpa callback error codes
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
XPAReceiveNSConnect (void *client_data, void *call_data, char *paramlist,
	       char *buf, size_t len)
#else
static int XPAReceiveNSConnect(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char *buf;
     size_t len;
#endif
{
  XPA xpa = (XPA)call_data;
  XPA txpa;
  char tbuf[SZ_LINE];
  int doall=0;
  int lp=0;

  if( paramlist && *paramlist ){
    if( word(paramlist, tbuf, &lp) && !strcmp(tbuf, "-all") ){
      doall = 1;
    }
  }
  if( doall ){
    for(txpa=XPAListHead(); txpa!=NULL; txpa=txpa->next){
      XPANSAdd(txpa, NULL, NULL);
    }
  }
  else{
    XPANSAdd(xpa, NULL, NULL);
  }
  return(0);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAReceiveNSDisconnect
 *
 * Purpose:	break connection to name server
 *
 * Returns:	xpa callback error codes
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
XPAReceiveNSDisconnect (void *client_data, void *call_data, char *paramlist,
	       char *buf, size_t len)
#else
static int XPAReceiveNSDisconnect(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char *buf;
     size_t len;
#endif
{
  XPA xpa = (XPA)call_data;
  XPA txpa;
  NS ns, tns;
  char tbuf[SZ_LINE];
  int doall=0;
  int lp=0;

  if( paramlist && *paramlist ){
    if( word(paramlist, tbuf, &lp) && !strcmp(tbuf, "-all") ){
      doall = 1;
    }
  }
  if( doall ){
    for(txpa=XPAListHead(); txpa!=NULL; txpa=txpa->next){
      for(ns=txpa->nshead; ns!= NULL; ){
	tns = ns->next;
	XPANSClose(txpa, ns);
	ns = tns;
      }
    }
  }
  else{
    for(ns=xpa->nshead; ns!= NULL; ){
      tns = ns->next;
      XPANSClose(xpa, ns);
      ns = tns;
    }
  }
  return(0);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAReceiveEnv
 *
 * Purpose:	set an environment variable
 *
 * Returns:	xpa callback error codes
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
XPAReceiveEnv (void *client_data, void *call_data, char *paramlist,
	       char *buf, size_t len)
#else
static int XPAReceiveEnv(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char *buf;
     size_t len;
#endif
{
  XPA xpa = (XPA)call_data;
  char name[SZ_LINE];
  char value[SZ_LINE];
  char *tbuf;
  int lp=0;

  if( word(paramlist, name, &lp) ){
    if( word(paramlist, value, &lp) ){
      tbuf = (char *)xmalloc(strlen(name)+1+strlen(value)+1);
      snprintf(tbuf, SZ_LINE, "%s=%s", name, value);
      putenv(tbuf);
      return(0);
    }
    else{
      if( strchr(name, '=') != NULL ){
	tbuf = xstrdup(name);
	putenv(tbuf);
	return(0);
      }
      else{
	XPAError(xpa, "XPA setenv requires name and value pair\n");
	return(-1);
      }
    }
  }
  else{
    XPAError(xpa, "XPA setenv requires name and value pair\n");
    return(-1);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPASendEnv
 *
 * Purpose:	return an environment variable to client
 *
 * Returns:	xpa callback error codes
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
XPASendEnv (void *client_data, void *call_data, char *paramlist,
	    char **buf, size_t *len)
#else
static int XPASendEnv(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char **buf;
     size_t *len;
#endif
{
  int tlen;
  char *tbuf;
  char *ebuf;

  if( (ebuf = (char *)getenv(paramlist)) != NULL ){
    tlen = strlen(ebuf)+2;
    tbuf = (char *)xmalloc(tlen);
    snprintf(tbuf, tlen, "%s\n", ebuf);
    *buf = tbuf;
    *len = strlen(tbuf);
  }
  else{
    *buf = xstrdup("\n");
    *len = 1;
  }
  return(0);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAReceiveReserved
 *
 * Purpose:	execute reserved command
 *
 * Returns:	xpa callback error codes
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
XPAReceiveReserved (void *client_data, void *call_data, char *paramlist,
		    char *buf, size_t len)
#else
static int XPAReceiveReserved(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char *buf;
     size_t len;
#endif
{
  char *cmd = (char *)client_data;
  XPA xpa = (XPA)call_data;

  if( !strcmp(cmd, "end") ){
    xpa->comm->status |= XPA_STATUS_ENDBUF;
    return(0);
  }
  else if( !strcmp(cmd, "exec") ){
    xpa->comm->status |= XPA_STATUS_READBUF;
    return(0);
  }
  else{
    return(-1);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPASendHelp
 *
 * Purpose:	send help strings
 *
 * Returns:	xpa callback error codes
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
XPASendHelp (void *client_data, void *call_data, char *paramlist,
	     char **buf, size_t *len)
#else
static int XPASendHelp(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char **buf;
     size_t *len;
#endif
{
  XPA xpa = (XPA)call_data;
  XPACmd cmd;
  int lp=0;
  int slen;
  char tbuf[SZ_LINE];
  char lbuf[SZ_LINE];
  char *sbuf;

  if( !paramlist || !*paramlist ){
    if( xpa->version != NULL ){
      snprintf(lbuf, SZ_LINE, "XPA version: %s\n", xpa->version);
      send(xpa_datafd(xpa), lbuf, strlen(lbuf), 0);
    }
  }
  if( xpa->commands == NULL ){
    if( xpa->help != NULL ){
      slen = strlen(xpa->help)+SZ_LINE;
      sbuf = (char *)xmalloc(slen);
      snprintf(sbuf, slen, "%s\n", xpa->help);
      send(xpa_datafd(xpa), sbuf, strlen(sbuf), 0);
      xfree(sbuf);
    }
    else{
      strcpy(lbuf, "\n");
      send(xpa_datafd(xpa), lbuf, strlen(lbuf), 0);
    }
  }
  else{
    if( paramlist && *paramlist ){
      while( word(paramlist, tbuf, &lp) ){
	for(cmd=xpa->commands; cmd!=NULL; cmd=cmd->next){
	  if( !strcmp(tbuf, cmd->name) ){
	    if( cmd->help != NULL ){
	      slen = strlen(cmd->name)+strlen(cmd->help)+SZ_LINE;
	      sbuf = (char *)xmalloc(slen);
	      snprintf(sbuf, slen, "%s:\t%s\n", cmd->name, cmd->help);
	      send(xpa_datafd(xpa), sbuf, strlen(sbuf), 0);
	      xfree(sbuf);
	    }
	    else{
	      snprintf(lbuf, SZ_LINE, "%s:\t(no help available)\n", cmd->name);
	      send(xpa_datafd(xpa), lbuf, strlen(lbuf), 0);
	    }
	  }
	}
      }
    }
    else{
      for(cmd=xpa->commands; cmd!=NULL; cmd=cmd->next){
	if( cmd->help != NULL ){
	  slen = strlen(cmd->name)+strlen(cmd->help)+SZ_LINE;
	  sbuf = (char *)xmalloc(slen);
	  snprintf(sbuf, slen, "%s:\t%s\n", cmd->name, cmd->help);
	  send(xpa_datafd(xpa), sbuf, strlen(sbuf), 0);
	  xfree(sbuf);
	}
	else{
	  snprintf(lbuf, SZ_LINE, "%s:\t(no help available)\n", cmd->name);
	  send(xpa_datafd(xpa), lbuf, strlen(lbuf), 0);
	}
      }
    }
  }
  return(0);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPASendVersion
 *
 * Purpose:	send XPA version string
 *
 * Returns:	xpa callback error codes
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
XPASendVersion (void *client_data, void *call_data, char *paramlist,
	     char **buf, size_t *len)
#else
static int XPASendVersion(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char **buf;
     size_t *len;
#endif
{
  XPA xpa = (XPA)call_data;
  char lbuf[SZ_LINE];

  if( xpa->version != NULL )
    snprintf(lbuf, SZ_LINE, "%s\n", xpa->version);
  else
    strcpy(lbuf, "\n");
  send(xpa_datafd(xpa), lbuf, strlen(lbuf), 0);
  return(0);
}

/*
 *----------------------------------------------------------------------------
 *
 *
 * 			Semi-Public Routines and Data
 *
 *  		    These routines are used by XPAHandler and XPANew
 *
 *
 *----------------------------------------------------------------------------
 */

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAInitReserved
 *
 * Purpose:	add the reserved commands to the reserved xpa struct
 *
 * Results:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
void 
XPAInitReserved (void)
#else
void XPAInitReserved()
#endif
{
  if( !rxpa ){
    if( (rxpa = (XPA)xcalloc(1, sizeof(struct xparec))) == NULL )
      return;
    /* XPACmdAdd requires that the callbacks be defined explicitly in rxpa */
    rxpa->send_callback = XPASendCommands;
    rxpa->receive_callback = XPAReceiveCommands;
    /* add reserved commands */
    XPACmdAdd(rxpa, "-acl",
	  "\tget (set) the access control list\n\t\t  options: host type acl",
	  XPASendAcl, NULL, NULL, XPAReceiveAcl, NULL, "fillbuf=false");
    XPACmdAdd(rxpa, "-env",
	  "\tget (set) an environment variable\n\t\t  options: name (value)",
	  XPASendEnv, NULL, NULL, XPAReceiveEnv, NULL, NULL);
    XPACmdAdd(rxpa, "-exec",
	  "\texecute commands from buffer\n\t\t  options: none",
	  NULL, NULL, NULL, XPAReceiveReserved, (void *)"exec", NULL);
    XPACmdAdd(rxpa, "-help",
	  "\treturn help string for specified XPA\n\t\t  options: cmd name (commands only)",
	  XPASendHelp, NULL, NULL, NULL, NULL, NULL);
    XPACmdAdd(rxpa, "-ltimeout",
	  "\tget (set) long timeout\n\t\t  options: seconds|reset",
	  XPASendLTimeout, NULL, NULL, XPAReceiveLTimeout, NULL, NULL);
    XPACmdAdd(rxpa, "-nsconnect",
	  "\tre-establish name server connection to this XPA\n\t\t  options: -all",
	  NULL, NULL, NULL, XPAReceiveNSConnect, NULL, NULL);
    XPACmdAdd(rxpa, "-nsdisconnect",
	  "\tbreak name server connection to this XPA\n\t\t  options: -all",
	  NULL, NULL, NULL, XPAReceiveNSDisconnect, NULL, NULL);
    XPACmdAdd(rxpa, "-remote",
	  "\tconnect to remote name service with specified acl \n\t\t  options: host:port +|-|acl -proxy",
	  XPASendRemote, NULL, NULL, XPAReceiveRemote, NULL, "fillbuf=false");
    XPACmdAdd(rxpa, "-clipboard",
	  "\tset/get clipboard information \n\t\t  options: [cmd] name",
	  XPASendClipboard, NULL, NULL, XPAReceiveClipboard, NULL, NULL);
    XPACmdAdd(rxpa, "-stimeout",
	  "\tget (set) short timeout\n\t\t  options: seconds|reset",
	  XPASendSTimeout, NULL, NULL, XPAReceiveSTimeout, NULL, NULL);
    XPACmdAdd(rxpa, "-version",
	  "\treturn XPA version string\n\t\t  options: none",
	  XPASendVersion, NULL, NULL, NULL, NULL, NULL);
  }
}

#ifdef ANSI_FUNC
void 
XPAFreeReserved (void)
#else
void XPAFreeReserved()
#endif
{
  XPACmd cmd, tcmd;
  if( !rxpa ) return;
  /* free reserved commands */
  for(cmd=rxpa->commands; cmd!=NULL; ){
    tcmd = cmd->next;
    XPACmdDel(rxpa, cmd);
    cmd = tcmd;
  }
  xfree(rxpa);
  rxpa = NULL;
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPACmdLookupReserved
 *
 * Purpose:	lookup a reserved command name
 *
 * Results:	cmd struct or null
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
XPACmd 
XPACmdLookupReserved (XPA xpa, char *lbuf, int *lp)
#else
XPACmd XPACmdLookupReserved(xpa, lbuf, lp)
     XPA xpa;
     char *lbuf;
     int *lp;
#endif
{
  XPACmd cmd;
  int lp2=0;
  char *lptr;
  char name[SZ_LINE];

  /* make sure we have something to work with */
  if( (rxpa==NULL) || (lbuf==NULL) || (lbuf[*lp]=='\0') )
    return(NULL);

  /* this is where we start parsing */
  lptr = &(lbuf[*lp]);

  /* to simplify life, we assume reserved words are 1 token */
  if( !word(lptr, name, &lp2) )
    return(NULL);

  /* look for reserved keywords that have callbacks */
  for(cmd=rxpa->commands; cmd!=NULL; cmd=cmd->next){
    if( !strcmp(name, cmd->name) ){
      *lp += lp2;
      return(cmd);
    }
  }

  /* nothing, nowhere */
  return(NULL);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPACmdLookup
 *
 * Purpose:	lookup a user-defined command name
 *
 * Results:	cmd struct or null
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
XPACmd 
XPACmdLookup (XPA xpa, char *lbuf, int *lp)
#else
XPACmd XPACmdLookup(xpa, lbuf, lp)
     XPA xpa;
     char *lbuf;
     int *lp;
#endif
{
  XPACmd cmd;
  int i;
  int lp2;
  int len, tlen;
  char *lptr;
  char tbuf[SZ_LINE];
  char name[SZ_LINE];

  /* make sure we have something to work with */
  if( (xpa==NULL) || (lbuf==NULL) || (lbuf[*lp]=='\0') )
    return(NULL);

  /* this is where we start parsing */
  lptr = &(lbuf[*lp]);

  /* look up commands for this name */
  for(cmd=xpa->commands; cmd!=NULL; cmd=cmd->next){
    /* make up a name with the required number of tokens for this command */
    *name = '\0';
    lp2 = 0;
    tlen = 0;
    for(i=0; i<cmd->ntokens; i++){
      if( word(lptr, tbuf, &lp2)){
	len = strlen(tbuf)+1;
	if( (tlen+len) <= (SZ_LINE-1) ){
	  if( *name != '\0' )
	    strcat(name, " ");
	  strcat(name, tbuf);
	  tlen += len;
	}
	/* not enough room */
	else{
	  *name = '\0';
	  break;
	}
      }
    }
    /* we now have the name,  see if its what we want */
    if( *name && !strcmp(cmd->name, name) ){
      *lp += lp2;
      return(cmd);
    }
  }

  /* did not find the command in this xpa -- now look through reserved */
  return(XPACmdLookupReserved(xpa, lbuf, lp));
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAReceiveCommands
 *
 * Purpose:	process a list of commands from xpaset
 *
 * Results:	number of commands processed
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAReceiveCommands (void *client_data, void *call_data, char *paramlist,
		    char *buf, size_t len)
#else
int XPAReceiveCommands(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char *buf;
     size_t len;
#endif
{
  XPA xpa = (XPA)call_data;
  XPACmd cmd;
  int lp;
  int savelp;
  int plen;
  int bgot;
  int got=0;
  int gotbuf=0;
  int freebuf=1;
  char lbuf[SZ_LINE];
  char tbuf[SZ_LINE];
  char tbuf1[SZ_LINE];

  /* use ";" as a command separator (as well as \n) */
  newdtable(";");

  /* if we already have buf, there will be no need to get it */
  if( buf )
    gotbuf++;

  /* if we have no paramlist, we read from the socket */
  if( (xpa_datafd(xpa) >=0) && (!paramlist || (*paramlist == '\0')) ){
    xpa->comm->status |= XPA_STATUS_READBUF;
    XPAGets(xpa, xpa_datafd(xpa), lbuf, SZ_LINE, XPALongTimeout());
    FPRINTF((stderr, "%sXPAReceiveCommands: read %s\n", _sp, lbuf));
  }
  else{
    xpa->comm->status &= ~XPA_STATUS_READBUF;
    nowhite(paramlist, lbuf);
  }

  /* we must have something to start with */
  if( *lbuf == '\0' ){
    XPAError(xpa, xpaMessbuf[XPA_RTN_NOCMD2]);
    got = -1;
    goto done;
  }
  
  /* This look either executes the one set of commands in paramlist,
     or reads one line at a time from the socket and executes commands.
     In the latter case, each callback can read the socket as well */
  while( 1 ){
    FPRINTF((stderr, "%sXPAReceiveCommands: top of loop: %s\n", _sp, lbuf));
    lp = 0;
    while( lbuf[lp] != '\0' ){
      if( (cmd = XPACmdLookup(xpa, lbuf, &lp)) == NULL ){
	XPAError(xpa, xpaMessbuf[XPA_RTN_UNCMD]);
	got = -1;
	goto done;
      }
      /* reserved commands can only be called from the same host as the server,
	 or from local (unix) sockets */
      if( (cmd->xpa == rxpa) && 
	  strcmp(cmd->name, "-help") && strcmp(cmd->name, "-version") ){
	if( XPAMtype() == XPA_INET ){
	  if( (!xpa->comm || !LOCALIP(xpa->comm->cmdip)) ){
	    FPRINTF((stderr, "%sXPAReceiveCommands: rejecting reserved: %s\n",
		    _sp, cmd->name));
	    XPAError(xpa, xpaMessbuf[XPA_RTN_NOAUTH]);
	    got = -1;
	    goto done;
	  }
	}
      }
      FPRINTF((stderr, "%sXPAReceiveCommands: cmd->name: %s\n",
	       _sp, cmd->name));
      *tbuf = '\0';
      if( (lastdelim() != ';') && (lastdelim() != '\n') ){
	/* skip white space between command and params */
	while( isspace((int)lbuf[lp]) )
	  lp++;
	/* here is where the params start */
	savelp = lp;
	/* look for command delimiter -- the end of the params */
	while( word(lbuf, tbuf1, &lp) ){
	  if( (lastdelim() == ';')  || (lastdelim() == '\n') ){
	    break;
	  }
	  /* make sure a command-ending delim is not next */
	  while( isspace((int)lbuf[lp]) )
	    lp++;
	  if( (lbuf[lp] == ';')  || (lbuf[lp] == '\n') ){
	    break;
	  }
	}
	/* get length of parameter list */
	plen = lp - savelp;
	/* but skip final delim */
	if( (plen>0) && ((lastdelim() == ';')||(lastdelim() == '\n')) )
	  plen--;
	/* copy the params up to the command delimiter */
	if( plen > 0 ){
	  strncpy(tbuf, &(lbuf[savelp]), plen);
	  tbuf[plen] = '\0';
	}
      }
      /* execute the associated XPA callback */
      if( cmd->receive_callback != NULL ){
	/* get buf now, if its needed */
	if( !gotbuf && (xpa_datafd(xpa) >= 0) &&
	    (cmd->receive_mode & XPA_MODE_FILLBUF) ){
	  /* read buf -- this buf will stay around for all commands */
	  FPRINTF((stderr, "%sXPAReceiveCommands: at XPAGetBuf\n", _sp));
	  bgot = XPAGetBuf(xpa, xpa_datafd(xpa), &buf, &len, -1);
	  /* close the data channel */
	  XPACloseData(xpa, xpa->comm);
	  if( bgot >= 0 ){
	    /* got the buffer */
	    gotbuf++;
	  }
	  /* error getting buf */
	  else{
	    XPAError(xpa, xpaMessbuf[XPA_RTN_NODATA]);
	    got = -1;
	    goto done;
	  }
	}
	got = (cmd->receive_callback)(cmd->receive_data, call_data,
				      tbuf, buf, len);
	/* if we don't want to free the buffer, mark it for saving */
	if( (buf != NULL) && !(cmd->receive_mode & XPA_MODE_FREEBUF) ){
	  freebuf=0;
	}
	if( got != 0 ){
	  goto done;
	}
      }
      else{
	XPAError(xpa, xpaMessbuf[XPA_RTN_NOREC]);
	got = -1;
	goto done;
      }
    }
    /* conditions for exiting the command loop: */
    /* if we processed the END command, we are done */
    if( xpa->comm->status & XPA_STATUS_ENDBUF )
      break;
    /* if we are not reading the data buffer, we are done */
    if( !(xpa->comm->status & XPA_STATUS_READBUF) )
      break;
    /* if we got EOF or error reading the data buffer, we are done */
    if( XPAGets(xpa, xpa_datafd(xpa), lbuf, SZ_LINE, XPALongTimeout()) <=0 )
      break;
  }

done:
  /* if no one wants buf, free it now */
  if( freebuf )
    xfree(buf);
  /* restore last delimiter table */
  freedtable();
  /* return error code */
  return(got);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPASendCommands
 *
 * Purpose:	process a list of commands from xpaget
 *
 * Results:	number of commands processed (currently 0 or 1)
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPASendCommands (void *client_data, void *call_data, char *paramlist,
		 char **buf, size_t *len)
#else
int XPASendCommands(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char **buf;
     size_t *len;
#endif
{
  XPA xpa = (XPA)call_data;
  XPACmd cmd;
  char tbuf[SZ_LINE];
  int lp=0;
  int got=0;

  /* return help as default */
  if( *paramlist == '\0' ){
    paramlist = "-help";
  }

  /* lookup the command and execute */
  if( (cmd = XPACmdLookup(xpa, paramlist, &lp)) != NULL ){
    /* reserved commands can only be called from the same host as the server,
       or from local (unix) sockets */
    if( (cmd->xpa == rxpa) && 
	strcmp(cmd->name, "-help") && strcmp(cmd->name, "-version") ){
	if( XPAMtype() == XPA_INET ){
	  if( (!xpa->comm || !LOCALIP(xpa->comm->cmdip)) ){
	    FPRINTF((stderr, "%sXPAReceiveCommands: rejecting reserved: %s\n",
		    _sp, cmd->name));
	    XPAError(xpa, xpaMessbuf[XPA_RTN_NOAUTH]);
	    got = -1;
	    goto done;
	  }
	}
    }
    /* execute the associated XPA send callback,
       using the remaining command string as an argument */
    strcpy(tbuf, &paramlist[lp]);
    nocr(tbuf);
    if( !strcmp(tbuf, "-help") ){
      if( cmd->help != NULL )
	snprintf(tbuf, SZ_LINE, "%s\n", cmd->help);
      else
	snprintf(tbuf, SZ_LINE, "\n");
      send(xpa_datafd(xpa), tbuf, strlen(tbuf), 0);
      got = 0;
    }
    else if( cmd->send_callback != NULL ){
      got = (cmd->send_callback)(cmd->send_data, call_data,
				 &paramlist[lp], buf, len);
    }
    else{
      XPAError(xpa, xpaMessbuf[XPA_RTN_NOSEND]);
      got = -1;
      goto done;
    }
  }
  else{
    XPAError(xpa, xpaMessbuf[XPA_RTN_UNCMD]);
    got = -1;
    goto done;
  }

done:
  /* return error code */
  return(got);
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
 * Routine:	XPACmdNew
 *
 * Purpose:	define a named command access point 
 *
 * Results:	XPA struct or NULL
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
XPA 
XPACmdNew (char *xclass, char *name)
#else
XPA XPACmdNew(xclass, name)
     char *xclass;
     char *name;
#endif
{
  XPA xpa;
  char tbuf[SZ_LINE];

  /* we need a name */
  if( (name == NULL) || (*name == '\0') )
    return(NULL);

  /* we need some valid class */
  if( (xclass == NULL) || (*xclass == '\0') )
    xclass = "*";

  /* help string */
  snprintf(tbuf, SZ_LINE, "XPA commands for %s:%s\n\t\t  options: see -help",
	  xclass, name);

  /* create a new XPA with command callbacks */
  xpa = XPANew(xclass, name, tbuf,
	       XPASendCommands, NULL, NULL,
	       XPAReceiveCommands, NULL, "fillbuf=false");

  /* return the good news */
  return(xpa);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPACmdAdd
 *
 * Purpose:	add a command to a named command access point 
 *
 * Results:	0 on success, -1 for failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
XPACmd 
XPACmdAdd (XPA xpa, char *name, char *help,
	   SendCb send_callback, void *send_data, char *send_mode,
	   ReceiveCb rec_callback, void *rec_data, char *rec_mode)
#else
XPACmd XPACmdAdd(xpa, name, help,
		 send_callback, send_data, send_mode,
		 rec_callback, rec_data, rec_mode)
     XPA xpa;
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
  XPACmd xnew;
  XPACmd cur;
  XPACmd prev;

  /* make sure we have a valid command record */
  if( !xpa || 
      (xpa->send_callback != XPASendCommands)       || 
      (xpa->receive_callback != XPAReceiveCommands) ){
    return(NULL);
  }

  /* we need either a send or a receive or both */
  if( (send_callback == NULL) && (rec_callback == NULL ) ){
    return(NULL);
  }

  /* limit the size of the cmd name designation */
  if( strlen(name) > XPA_NAMELEN ){
    return(NULL);
  }

  /* allocate space for a new record */
  xnew = (XPACmd)xcalloc(1, sizeof(struct xpacmdrec));

  /* backlink to xpa */
  xnew->xpa = xpa;

  /* fill in the blanks */
  xnew->name = XPACmdParseNames(name, &(xnew->ntokens));
  xnew->help = xstrdup(help);

  /* receive callback */
  xnew->send_callback = send_callback;
  xnew->send_data = send_data;
  xnew->send_mode = XPA_DEF_MODE_SEND;
  XPAMode(send_mode, &(xnew->send_mode), "freebuf", XPA_MODE_FREEBUF,1);
  /* acl is a global mode */
  XPAMode(send_mode, &(xpa->send_mode), "acl", XPA_MODE_ACL, 1);

  /* receive callback */
  xnew->receive_callback = rec_callback;
  xnew->receive_data = rec_data;
  /* process the mode string */
  xnew->receive_mode = XPA_DEF_MODE_REC;
  XPAMode(rec_mode, &(xnew->receive_mode), "usebuf", XPA_MODE_BUF,1);
  XPAMode(rec_mode, &(xnew->receive_mode), "fillbuf", XPA_MODE_FILLBUF,1);
  XPAMode(rec_mode, &(xnew->receive_mode), "freebuf", XPA_MODE_FREEBUF,1);
  /* acl is a global mode */
  XPAMode(rec_mode, &(xpa->receive_mode), "acl", XPA_MODE_ACL, 1);

  /* enter into list, in alphabetical order */
  if( xpa->commands == NULL  ){
    xpa->commands = xnew;
    return(xnew);
  }
  else{
    for(prev=NULL, cur=xpa->commands; cur!=NULL; prev=cur, cur=cur->next){
      /* if new name is an existing name, add it before */
      if( strcmp(xnew->name,   cur->name) ==0 )
	goto addname;
      /* if existing name is a subset of new name, add it before */
      else if( !strncmp(xnew->name, cur->name, strlen(cur->name)) )
	goto addname;
      /* if new name is a subset of existing name, add it after */
      else if( !strncmp(xnew->name, cur->name, strlen(xnew->name)) )
	continue;
      /* if new name is lexically greater than existing name, add it after */
      else if( strcmp(xnew->name,   cur->name) >0 )
	continue;
addname:
      /* add the new name here and return */
      if( prev == NULL ){
	xpa->commands = xnew;
	xnew->next = cur;
	return(xnew);
      }
      else{
	prev->next = xnew;
	xnew->next = cur;
	return(xnew);
      }
    }
    /* if we are still here, we did not find a place to insert, i.e.,
       we are at the end of the list */
    prev->next = xnew;
    return(xnew);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPACmdDel
 *
 * Purpose:	free a named command access point 
 *
 * Results:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int
XPACmdDel (XPA xpa, XPACmd cmd)
#else
int XPACmdDel(xpa, cmd)
     XPA xpa;
     XPACmd cmd;
#endif
{
  XPACmd cur;
  int got=0;

  /* gotta have something to free */
  if( cmd == NULL )
    return(-1);

  /* remove from list of xpa's commands */
  if( xpa && xpa->commands ){
    if( xpa->commands == cmd ){
      xpa->commands = cmd->next;
      got++;
    }
    else{
      for(cur=xpa->commands; cur!=NULL; cur=cur->next){
	if( cur->next == cmd ){
	  cur->next = cmd->next;
	  got++;
	  break;
	}
      }
    }
  }

  /* free up space */
  if( got ){
    if( cmd->name )
      xfree(cmd->name);
    if( cmd->help )
      xfree(cmd->help);
    xfree(cmd);
    return(0);
  }
  else{
    return(-1);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPACmdInternalReceive
 *
 * Purpose:	internal execute of the receive callback for this command
 *
 * Results:	number of commands processed
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPACmdInternalReceive (void *client_data, void *call_data,
		       char *paramlist, char *buf, size_t len)
#else
int XPACmdInternalReceive(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char *buf;
     size_t len;
#endif
{
  XPA xpa = (XPA)call_data;

  /* make sure we have something */
  if( xpa == NULL )
    return(-1);
  /* make the call */
  return(XPAReceiveCommands(client_data, xpa, paramlist, buf, len));
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPACmdInternalSend
 *
 * Purpose:	internal execute of the send callback for this command
 *
 * Results:	number of commands processed (currently 0 or 1)
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPACmdInternalSend (void *client_data, void *call_data,
		    char *paramlist, char **buf, size_t *len)
#else
int XPACmdInternalSend(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char **buf;
     size_t *len;
#endif
{
  XPA xpa = (XPA)call_data;

  /* make sure we have something */
  if( xpa == NULL )
    return(-1);

  /* make the call */
  return(XPASendCommands(client_data, xpa, paramlist, buf, len));
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAGetReserved
 *
 * Purpose:	return xpa handle for reserved xpa commands
 *
 * Return:	xpa handle
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
XPA 
XPAGetReserved (void)
#else
XPA XPAGetReserved()
#endif
{
  return(rxpa);
}
