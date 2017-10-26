/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

/*
 *
 * port.c -- xpa port management
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
static PORT porthead=NULL;

#ifdef ANSI_FUNC
static PORT 
XPAPortLookup (char *xclass, char *name)
#else
static PORT XPAPortLookup(xclass, name)
     char *xclass;
     char *name;
#endif
{
  PORT cur;
  /*  look for exact match */
  for(cur=porthead; cur!=NULL; cur=cur->next){
    if( !strcmp(xclass, cur->xclass) 		&&
	!strcmp(name, cur->name)   		){
      return(cur);
    }
  }
  /* otherwise look for a template match */
  for(cur=porthead; cur!=NULL; cur=cur->next){
    if( tmatch(xclass, cur->xclass)		&&
	tmatch(name, cur->name) 		){
      return(cur);
    }
  }
  return(NULL);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAPortParse
 *
 * Purpose:	parse port list into components
 *
 * Returns:	0 on success, -1 on failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
XPAPortParse (char *lbuf, char *xclass, char *name, int *port, int len)
#else
static int XPAPortParse(lbuf, xclass, name, port, len)
     char *lbuf;
     char *xclass;
     char *name;
     int *port;
     int len;
#endif
{
  char tbuf[SZ_LINE];
  int lp=0;

  /* init port values */
  *port = 0;

  /* class:name is required */
  if( word(lbuf, tbuf, &lp) ){
    XPAParseName(tbuf, xclass, name, len);
  }
  else{
    return(-1);
  }

  /* port is required but can be "*" for default port */
  if( word(lbuf, tbuf, &lp) ){
    if( !strcmp(tbuf, "*") )
      *port = XPA_DEFPORT;
    else
      *port = atoi(tbuf);
  }
  else{
    return(-1);
  }

  /* made it */
  return(0);
}

/*----------------------------------------------------------------------------
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
 * Routine:	XPAPortAdd
 *
 * Purpose:	add one port entry to the xpa port list
 *
 * Returns: 	0 on success, -1 on failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAPortAdd (char *lbuf)
#else
int XPAPortAdd(lbuf)
     char *lbuf;
#endif
{
  PORT xnew;
  PORT cur;
  char xclass[SZ_LINE];
  char name[SZ_LINE];
  int port;

  /* allocate port struct */
  if( (xnew = (PORT)xcalloc(1, sizeof(struct portrec))) == NULL )
    goto error;

  /* parse info from line buffer */
  if( XPAPortParse(lbuf, xclass, name, &port, SZ_LINE) < 0 )
    goto error;

  /* fill in the blanks */
  xnew->xclass = xstrdup(xclass);
  xnew->name = xstrdup(name);
  xnew->port = port;

  /* add this port to end of list of port's */
  if( porthead == NULL ){
    porthead = xnew;
  }
  else{
    for(cur=porthead; cur->next!=NULL; cur=cur->next)
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
 * Routine: 	XPAPortDel
 *
 * Purpose: 	free up alloc'ed memory in the port record structure
 *
 * Results:	0 on success, -1 for failure
 *
 *---------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAPortDel (PORT port)
#else
int XPAPortDel(port)
     PORT port;
#endif
{
  PORT cur;

  if( port == NULL )
    return(-1);

  /* remove from list of port's */
  if( porthead ){
    if( porthead == port ){
      porthead = porthead->next;
    }
    else{
      for(cur=porthead; cur!=NULL; cur=cur->next){
	if( cur->next == port ){
	  cur->next = (cur->next)->next;
	  break;
	}
      }
    }
  }

  /* free up string space */
  if( port->xclass ) xfree(port->xclass);
  if( port->name )   xfree(port->name);

  /* free up record struct */
  xfree((char *)port);
  return(0);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAPortFree
 *
 * Purpose:	
 *
 * Results:	1 on success, 0 for failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
void 
XPAPortFree (void)
#else
void XPAPortFree()
#endif
{
  PORT cur;
  PORT saveport;

  for(cur=porthead; cur!=NULL; ){
    saveport = cur->next;
    XPAPortDel(cur);
    cur = saveport;
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAPortNew
 *
 * Purpose:	read or re-read the port list
 *
 * Results:	number of lines in list (including default)
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAPortNew (char *aname, int flag)
#else
int XPAPortNew(aname, flag)
     char *aname;
     int flag;
#endif
{
  int got=0;
  char lbuf[SZ_LINE];
  char *s;
  char *portname=NULL;
  char *portpath=NULL;
  char *portstr=NULL;
  char *portcopy=NULL;
  FILE *fp;

  /* if there is an old list, free it */
  if( flag == 0 )
    XPAPortFree();

  /* get port file name */
  if( aname && *aname )
    portname = aname;
  else if( (portname=(char *)getenv("XPA_PORTFILE")) == NULL )
    portname = XPA_PORTFILE;

  /* get the default port */
  portstr=(char *)getenv("XPA_PORT");

  /* add the port assignments from environment first */
  if( portstr && *portstr ){
    portcopy=(char *)xstrdup(portstr);
    for(s=(char *)strtok(portcopy,";"); s!=NULL; s=(char *)strtok(NULL,";")){
      if( XPAPortAdd(s) == 0 )
	got++;
    }
    if( portcopy) xfree(portcopy);
  }

  /* add the port assignments from file next */
  if( (portpath=(char *)Access(portname, "r")) != NULL ){
    if( (fp=fopen(portpath, "r")) != NULL ){
      while( fgets(lbuf, SZ_LINE, fp) ){
	if( *lbuf == '#' ){
	  continue;
	}
	if( XPAPortAdd(lbuf) == 0 )
	  got++;
      }
      fclose(fp);
    }
    xfree(portpath);
  }

  /* return the news */
  return(got);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAPort
 *
 * Purpose:	check for pre-defined port for a given class, name and
 *		1 for com port, 2 for data port
 *
 * Results:	assigned port or 0
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAPort (XPA xpa)
#else
int XPAPort(xpa)
     XPA xpa;
#endif
{
  int p=0;
  PORT cur;
  
  if( xpa == NULL )
    return 0;
  if( (cur = XPAPortLookup(xpa->xclass, xpa->name)) ){
    p = cur->port;
  }
  return p;
}
