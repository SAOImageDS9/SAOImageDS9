/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

/*
 *
 * acl.c -- xpa access control list management
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

/* this is the head of the global list -- too lazy to do anything more */
static XACL aclhead=NULL;

#ifdef ANSI_FUNC
static XACL 
XPAAclLookup (char *xclass, char *name, unsigned int ip, int exact)
#else
static XACL XPAAclLookup(xclass, name, ip, exact)
     char *xclass;
     char *name;
     unsigned int ip;
     int exact;
#endif
{
  XACL cur;
  /*  look for exact match */
  for(cur=aclhead; cur!=NULL; cur=cur->next){
    if( !strcmp(xclass, cur->xclass) 		&&
	!strcmp(name, cur->name)   		&&
	((cur->ip == 0) || (cur->ip == ip)) 	){
      return(cur);
    }
  }
  /* otherwise look for a template match (unless exact was specified) */
  if( !exact ){
    for(cur=aclhead; cur!=NULL; cur=cur->next){
      if( tmatch(xclass, cur->xclass)		&&
	  tmatch(name, cur->name) 		&&
	  ((cur->ip == 0) || (cur->ip == ip)) 	){
	return(cur);
      }
    }
  }
  return(NULL);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAAclParse
 *
 * Purpose:	parse acl list into components
 *
 * Returns:	0 on success, -1 on failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
XPAAclParse (char *lbuf, char *xclass, char *name, unsigned int *ip,
	     char *acl, int len)
#else
static int XPAAclParse(lbuf, xclass, name, ip, acl, len)
     char *lbuf;
     char *xclass;
     char *name;
     unsigned int *ip;
     char *acl;
     int len;
#endif
{
  char tbuf[SZ_LINE];
  int lp=0;

  /* class:name is required */
  if( word(lbuf, tbuf, &lp) ){
    XPAParseName(tbuf, xclass, name, len);
  }
  else
    return(-1);

  /* host is required but can be "*" for "all hosts" */
  if( word(lbuf, tbuf, &lp) ){
    if( !strcmp(tbuf, "*") )
      *ip = 0;
    else
      *ip = gethostip(tbuf);
  }
  else
    return(-1);

  /* acl is required */
  if( word(lbuf, tbuf, &lp) ){
    if( !strcmp(tbuf, "+") )
      strcpy(acl, XPA_ACLS);
    else if( !strcmp(tbuf, "-") )
      *acl = '\0';
    else
      strcpy(acl, tbuf);
    return(0);
  }
  else
    return(-1);
}

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
 * Routine:	XPAReceiveAcl
 *
 * Purpose:	add or modify the acl for this access point
 *
 * Returns:	0 for success, -1 for failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAReceiveAcl (void *client_data, void *call_data, char *paramlist,
	       char *buf, size_t len)
#else
int XPAReceiveAcl(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char *buf;
     size_t len;
#endif
{
  XPA xpa = (XPA)call_data;
  XPAComm comm;
  int i;
  int got;
  char *s=NULL;
  char lbuf[SZ_LINE];
  char tbuf[SZ_LINE];

  if( paramlist && *paramlist ){
    s = paramlist;
    while( isspace((int)*s) )
      s++;
    snprintf(tbuf, SZ_LINE, "%s:%s %s\n", xpa->xclass, xpa->name, s);
    if( XPAAclEdit(tbuf) < 0 ){
      snprintf(lbuf, SZ_LINE, "invalid acl: %s\n", tbuf);
      XPAError(xpa, lbuf);
      return(-1);
    }
  }
  else{
    while((XPAGets(xpa, xpa_datafd(xpa), lbuf, SZ_LINE, XPAShortTimeout())>0)&&
	  *lbuf ){
      snprintf(tbuf, SZ_LINE, "%s:%s %s\n", xpa->xclass, xpa->name, lbuf);
      got = XPAAclEdit(tbuf);
      if( got < 0 ){
	snprintf(lbuf, SZ_LINE, "invalid acl: %s\n", tbuf);
	XPAError(xpa, lbuf);
	return(-1);
      }
    }
  }

  /* reset all acl flags for this xpa so acl is recalculated */
  for(comm=xpa->commhead; comm!=NULL; comm=comm->next){
    for(i=0; i<4; i++){
      comm->acl[i] = -1;
    }
  }

  return(0);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPASendAcl
 *
 * Purpose:	return the acl for this access point
 *
 * Returns:	0 for success, -1 for failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPASendAcl (void *client_data, void *call_data, char *paramlist,
	    char **buf, size_t *len)
#else
int XPASendAcl(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char **buf;
     size_t *len;
#endif
{
  XPA xpa = (XPA)call_data;
  XACL cur;
  int got = 0;
  char tbuf[SZ_LINE];

  /* zero all flags */
  for(cur=aclhead; cur!=NULL; cur=cur->next){
    cur->flag = 0;
  }
  /* look for exact matches */
  for(cur=aclhead; cur!=NULL; cur=cur->next){
    if(!strcmp(xpa->xclass, cur->xclass) && !strcmp(xpa->name, cur->name)){
      snprintf(tbuf, SZ_LINE, "%s:%s %s %s\n",
	       cur->xclass, cur->name, getiphost(cur->ip), cur->acl);
      send(xpa_datafd(xpa), tbuf, strlen(tbuf), 0);
      cur->flag = 1;
      got++;
    }
  }
  /* look for template matches that we have not printed yet */
  for(cur=aclhead; cur!=NULL; cur=cur->next){
    if( cur->flag == 0 ){
      if(tmatch(xpa->xclass, cur->xclass) && tmatch(xpa->name, cur->name)){
	snprintf(tbuf, SZ_LINE, "%s:%s %s %s\n",
		 cur->xclass, cur->name, getiphost(cur->ip), cur->acl);
	send(xpa_datafd(xpa), tbuf, strlen(tbuf), 0);
	got++;
      }
    }
  }
  /* zero all flags */
  for(cur=aclhead; cur!=NULL; cur=cur->next){
    cur->flag = 0;
  }
  if( got == 0 ){
    send(xpa_datafd(xpa), "\n", 1, 0);
  }
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

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAAclEdit
 *
 * Purpose:	add or modify acl entry in the xpa acl list
 *
 * Returns: 	0 on success, -1 on failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAAclEdit (char *lbuf)
#else
int XPAAclEdit(lbuf)
     char *lbuf;
#endif
{
  XACL cur;
  char xclass[SZ_LINE];
  char name[SZ_LINE];
  char acl[SZ_LINE];
  unsigned int ip;

  if( XPAAclParse(lbuf, xclass, name, &ip, acl, SZ_LINE) < 0 )
    return(-1);
  if( ip == 0 )
    return(-1);
  cur = XPAAclLookup(xclass, name, ip, 1);
  if( cur == NULL )
    return(XPAAclAdd(lbuf));
  else{
    if( *acl == '\0' ){
      XPAAclDel(cur);
    }
    else{
      if( cur->acl )
	xfree(cur->acl);
      cur->acl = xstrdup(acl);
    }
    return(0);
  }
}


/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAAclAdd
 *
 * Purpose:	add one acl entry to the xpa acl list
 *
 * Returns: 	0 on success, -1 on failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAAclAdd (char *lbuf)
#else
int XPAAclAdd(lbuf)
     char *lbuf;
#endif
{
  XACL xnew;
  XACL cur;
  char xclass[SZ_LINE];
  char name[SZ_LINE];
  char acl[SZ_LINE];
  unsigned int ip;

  /* allocate acl struct */
  if( (xnew = (XACL)xcalloc(1, sizeof(XACLRec))) == NULL )
    goto error;

  /* parse info from line buffer */
  if( XPAAclParse(lbuf, xclass, name, &ip, acl, SZ_LINE) < 0 )
    goto error;

  /* fill in the blanks */
  xnew->xclass = xstrdup(xclass);
  xnew->name = xstrdup(name);
  xnew->ip = ip;
  xnew->acl = xstrdup(acl);

  /* add this acl to end of list of acl's */
  if( aclhead == NULL ){
    aclhead = xnew;
  }
  else{
    for(cur=aclhead; cur->next!=NULL; cur=cur->next)
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
 * Routine: 	XPAAclDel
 *
 * Purpose: 	free up memory in the acl record structure
 *
 * Results:	0 on success, -1 for failure
 *
 *---------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAAclDel (XACL acl)
#else
int XPAAclDel(acl)
     XACL acl;
#endif
{
  XACL cur;

  if( acl == NULL )
    return(-1);

  /* remove from list of acl's */
  if( aclhead ){
    if( aclhead == acl ){
      aclhead = aclhead->next;
    }
    else{
      for(cur=aclhead; cur!=NULL; cur=cur->next){
	if( cur->next == acl ){
	  cur->next = (cur->next)->next;
	  break;
	}
      }
    }
  }

  /* free up string space */
  if( acl->xclass ) xfree(acl->xclass);
  if( acl->name )  xfree(acl->name);
  if( acl->acl )   xfree(acl->acl);

  /* free up record struct */
  xfree((char *)acl);
  return(0);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAAclFree
 *
 * Purpose:	
 *
 * Results:	1 on success, 0 for failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
void 
XPAAclFree (void)
#else
void XPAAclFree()
#endif
{
  XACL cur, tacl;

  for(cur=aclhead; cur!=NULL; ){
    tacl = cur->next;
    XPAAclDel(cur);
    cur = tacl;
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAAclNew
 *
 * Purpose:	read or re-read the acl list
 *
 * Results:	number of lines in list (including default)
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAAclNew (char *aname, int flag)
#else
int XPAAclNew(aname, flag)
     char *aname;
     int flag;
#endif
{
  int got=0;
  char lbuf[SZ_LINE];
  char hostname[SZ_LINE];
  char *s;
  char *obuf;
  char *aclname=NULL;
  char *aclpath=NULL;
  char *defacl=NULL;
  char *defcopy=NULL;
  char *keywords[10];
  char *values[10];
  int nkeys;
  FILE *fp=NULL;

  /* if there is an old list, free it */
  if( flag == 0 )
    XPAAclFree();

  /* get acl file name */
  if( aname && *aname )
    aclname = aname;
  else if( (aclname=(char *)getenv("XPA_ACLFILE")) == NULL )
    aclname = XPA_ACLFILE;

  /* get the default acl */
  if( (defacl=(char *)getenv("XPA_DEFACL")) == NULL )
    defacl = XPA_DEFACL;

  /* macro-expand it to deal with the host name */
  gethost(hostname, SZ_LINE);
  nkeys = 0;
  keywords[0] = "host";  values[0] = hostname; nkeys++;

  /* open the acl file */
  if( (aclpath=(char *)Access(aclname, "r")) != NULL ){
    if( (fp=fopen(aclpath, "r")) != NULL ){
      while( fgets(lbuf, SZ_LINE, fp) ){
	if( *lbuf == '#' ){
	  continue;
	}
	if( (obuf=macro(lbuf, keywords, values, nkeys, NULL, NULL)) != NULL ){
	  if( XPAAclAdd(obuf) == 0 )
	    got++;
	  xfree(obuf);
	}
      }
      fclose(fp);
    }
    xfree(aclpath);
  }

  /* add default acl (it very likely was overridden in the file) */
  defcopy=(char *)xstrdup(defacl);
  for(s=(char *)strtok(defcopy,";"); s!=NULL; s=(char *)strtok(NULL,";")){
    if( (obuf = macro(s, keywords, values, nkeys, NULL, NULL)) != NULL ){
      if( XPAAclAdd(obuf) == 0 )
	got++;
      xfree(obuf);
    }
  }
  if( defcopy) xfree(defcopy);

  /* return the news */
  return(got);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAAclCheck
 *
 * Purpose:	validate an acl for a given class, name, and host
 *
 * Results:	1 on success, 0 on failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAAclCheck (XPA xpa, unsigned int ip, char *acl)
#else
int XPAAclCheck(xpa, ip, acl)
     XPA xpa;
     unsigned int ip;
     char *acl;
#endif
{
  char *s;
  XACL cur;

  if( !(cur = XPAAclLookup(xpa->xclass, xpa->name, ip, 0)) )
    return(0);
  else if( cur->acl == NULL )
    return(0);
  else{
    for(s=acl; *s; s++){
      if( !strchr(cur->acl, *s) )
	return(0);
    }
    return(1);
  }
}
