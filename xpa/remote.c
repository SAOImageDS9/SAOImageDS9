/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

/*
 *
 * remote.c -- xpa access control list management
 *
 */

#include <xpap.h>

/*
 *----------------------------------------------------------------------------
 *
 *
 *			Private Routines
 *
 *
 *----------------------------------------------------------------------------
 */

/*
 *----------------------------------------------------------------------------
 *
 *
 *		Semi-Public Routines (used by command.c)
 *
 *
 *----------------------------------------------------------------------------
 */

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAReceiveRemote
 *
 * Purpose:	establish remote connection with specified acls
 *
 * Returns:	xpa callback error codes
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAReceiveRemote (void *client_data, void *call_data, char *paramlist,
	       char *buf, size_t len)
#else
int XPAReceiveRemote(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char *buf;
     size_t len;
#endif
{
  XPA xpa = (XPA)call_data;
  XPA cxpa;
  char *mode=NULL;
  char host[SZ_LINE];
  char acl[SZ_LINE];
  char which[SZ_LINE];
  char tbuf[SZ_LINE];
  int lp=0;

  /* make sure we are using inet sockets */
  if( XPAMtype() != XPA_INET ){
    snprintf(tbuf, SZ_LINE, "remote requires that XPA_METHOD be 'inet'\n");
    XPAError(xpa, tbuf);
    return(-1);
  }

  /* see if we are connecting to a particular host */
  if( paramlist && *paramlist ){
    cxpa = xpa;
    /* arg1: host */
    if( !word(paramlist, host, &lp) ){
      goto error;
    }
    /* arg2: acl (optional) or -proxy */
    if( !word(paramlist, acl, &lp) ){
      strcpy(acl, "+");
    }
    /* arg3: -proxy to set up proxy processing
       or    acl (if other word was -proxy) */
    else{
      if( !strcmp(acl, "-proxy") ){
	mode="proxy=true";
	if( !word(paramlist, acl, &lp) ){
	  strcpy(acl, "+");
	}
      }
      else if( word(paramlist, which, &lp) ){
	if( !strcmp(which, "-proxy") ){
	  mode="proxy=true";
	}
	else{
	  goto error;
	}
      }
    }
    /* make the call */
    if( XPARemote(cxpa, host, acl, mode) >= 0 ){
      return(0);
    }
    else{
      snprintf(tbuf, SZ_LINE, "remote xpans %s failed to process %s\n",
	       host, xpa->name);
      XPAError(xpa, tbuf);
      return(-1);
    }
  }
  else{
    goto error;
  }

error:
  XPAError(xpa, "syntax error: -remote hostname:port [acl] [-proxy]\n");
  return(-1);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPASendRemote
 *
 * Purpose:	return the list of remotes for this access point
 *
 * Returns:	0 for success, -1 for failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPASendRemote (void *client_data, void *call_data, char *paramlist,
	    char **buf, size_t *len)
#else
int XPASendRemote(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char **buf;
     size_t *len;
#endif
{
  XPA xpa = (XPA)call_data;
  NS ns;
  int got = 0;
  char tbuf[SZ_LINE];

  /* list out the remotes */
  for(ns=xpa->nshead; ns!=NULL; ns=ns->next){
    /* skip default ns */
    if( ns->host == NULL ) continue;
    snprintf(tbuf, SZ_LINE, "%s %x:%d\n", ns->host, ns->ip, ns->port);
    send(xpa_datafd(xpa), tbuf, strlen(tbuf), 0);
    got++;
  }
  if( got == 0 ){
    send(xpa_datafd(xpa), "\n", 1, 0);
  }
  return(0);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPARemote
 *
 * Purpose:	register the specified XPA (or all XPAs) with the named remote
 *		name server using the specified acl
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int
XPARemote (XPA xpa, char *host, char *acl, char *mode)
#else
int XPARemote(xpa, host, acl, mode)
     XPA xpa;
     char *host;
     char *acl;
     char *mode;
#endif
{
  int got=0;
  char remote[SZ_LINE];
  char mach[SZ_LINE];
  char lbuf[SZ_LINE];
  char *ind;
  XPA cur;

  /* might have to add the "port" to the host to get remote */
  strncpy(remote, host, SZ_LINE-1);
  remote[SZ_LINE-1] = '\0';
  if( (ind=strchr(remote, ':')) == NULL ){
    strcat(remote, ":$port");
  }

  /* if no acl is specified, make it '+' */
  if( (acl == NULL) || (*acl == '\0') ){
    acl = "+";
  }

  /* get machine name by removing port suffix */
  strcpy(mach, remote);
  if( (ind=strchr(mach, ':')) != NULL ){
    *ind = '\0';
  }
  else{
    return(-1);
  }

  /* either process the specified xpa, or do all of them */
  if( xpa ){
    cur = xpa;
    /* acl="-" => delete, else add */
    if( strcmp(acl, "-") ){
      got=XPANSAdd(cur, remote, mode);
    }
    else{
      got=XPANSDel(cur, remote, mode);
    }
    switch(got){
    /* error condition */
    case -1:
      return(-1);
    /* OK */
    case 0:
      snprintf(lbuf, SZ_LINE, "%s:%s %s %s",
	       cur->xclass, cur->name, mach, acl);
      XPAAclEdit(lbuf);
      break;
    /* entry already exists (OK) */
    case 1:
      break;
    }
  }
  else{
    for(cur=XPAListHead(); cur!=NULL; cur=cur->next){
      /* acl="-" => delete, else add */
      if( strcmp(acl, "-") ){
	got=XPANSAdd(cur, remote, mode);
      }
      else{
	got=XPANSDel(cur, remote, mode);
      }
      switch(got){
      /* error condition */
      case -1:
	return(-1);
      /* OK */
      case 0:
	snprintf(lbuf, SZ_LINE, "%s:%s %s %s",
		 cur->xclass, cur->name, mach, acl);
	XPAAclEdit(lbuf);
	break;
      /* entry already exists (OK) */
      case 1:
	break;
      }
    }
  }

  /* return OK  */
  return(0);
}

/*
 *----------------------------------------------------------------------------
 *
 *
 *			Public Routines
 *
 *
 *----------------------------------------------------------------------------
 */

