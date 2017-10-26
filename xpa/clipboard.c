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

#ifdef ANSI_FUNC
static XPAClip
ClipBoardNew(XPA xpa, char *name)
#else
static XPAClip ClipBoardNew(xpa, name)
     XPA xpa;
     char *name;
#endif
{
  XPAClip cur, xnew;
  if( (xnew = (XPAClip)xcalloc(1, sizeof(XPAClipRec))) == NULL )
    return(NULL);

  /* fill in record structure */
  xnew->name = xstrdup(name);
  xnew->ip = xpa->comm->cmdip;

  /* add to the end of list */
  if( xpa->cliphead == NULL ){
    xpa->cliphead = xnew;
  }
  else{
    for(cur=xpa->cliphead; cur->next!=NULL; cur=cur->next){
      ;
    }
    cur->next = xnew;
  }
  return xnew;
}

#ifdef ANSI_FUNC
static XPAClip
ClipBoardLookup(XPA xpa, char *name)
#else
static XPAClip ClipBoardLookup(xpa, name)
     XPA xpa;
     char *name;
#endif
{
  XPAClip cur;

  /* look for reserved keywords that have callbacks */
  for(cur=xpa->cliphead; cur!=NULL; cur=cur->next){
    if( !strcmp(name, cur->name) && (xpa->comm->cmdip == cur->ip) ){
      return(cur);
    }
  }
  return NULL;
}

#ifdef ANSI_FUNC
static int
ClipBoardAdd(XPA xpa, char *name, char *paramlist, char *buf)
#else
static int
ClipBoardAdd(xpa, name, paramlist, buf)
     XPA xpa;
     char *name;
     char *paramlist;
     char *buf;
#endif
{
  XPAClip cur;
  if( !(cur = ClipBoardLookup(xpa, name)) )
    cur = ClipBoardNew(xpa, name);
  if( !cur )
    return -1;
  if( cur->value )
    xfree(cur->value);
  cur->value = xstrdup(buf);
  return 0;
}

#ifdef ANSI_FUNC
static int
ClipBoardAppend(XPA xpa, char *name, char *paramlist, char *buf)
#else
static int
ClipBoardAppend(xpa, name, paramlist, buf)
     XPA xpa;
     char *name;
     char *paramlist;
     char *buf;
#endif
{
  XPAClip cur;
  if( !(cur = ClipBoardLookup(xpa, name)) )
    cur = ClipBoardNew(xpa, name);
  if( !cur )
    return -1;
  if( cur->value ){
    if( (cur->value = (char *)xrealloc(cur->value, 
				       strlen(cur->value)+strlen(buf)+1)) )
      strcat(cur->value, buf);
    else
      return -1;
  }
  else{
    cur->value = xstrdup(buf);
  }
  return 0;
}

#ifdef ANSI_FUNC
static int
ClipBoardDelete(XPA xpa, char *name, char *paramlist)
#else
static int
ClipBoardDelete(xpa, name, paramlist)
     XPA xpa;
     char *name;
     char *paramlist;
#endif
{
  XPAClip cur;
  if( (cur = ClipBoardLookup(xpa, name)) ){
    ClipBoardFree(xpa, cur);
    return 0;
  }
  else
    return -1;
}

/*
 *----------------------------------------------------------------------------
 *
 *
 *		Semi-Public Routines (used by xpa.c and command.c)
 *
 *
 *----------------------------------------------------------------------------
 */

#ifdef ANSI_FUNC
int
ClipBoardFree(XPA xpa, XPAClip clip)
#else
int ClipBoardFree(xpa, clip)
     XPA xpa;
     XPAClip clip;
#endif
{
  XPAClip cur;

  if( !clip )
    return 0;
  /* remove from list */
  if( xpa->cliphead ){
    if( xpa->cliphead == clip ){
      xpa->cliphead = clip->next;
    }
    else{
      for(cur=xpa->cliphead; cur!=NULL; cur=cur->next){
	if( cur->next == clip ){
	  cur->next = clip->next;
	  break;
	}
      }
    }
  }
  if( clip->name ) xfree(clip->name);
  if( clip->value ) xfree(clip->value);
  xfree(clip);
  return 1;
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAReceiveClipboard
 *
 * Purpose:	add a new clipboard entry
 *
 * Returns:	xpa callback error codes
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAReceiveClipboard (void *client_data, void *call_data, char *paramlist,
	       char *buf, size_t len)
#else
int XPAReceiveClipboard(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char *buf;
     size_t len;
#endif
{
  XPA xpa = (XPA)call_data;
  char cmd[SZ_LINE];
  char name[SZ_LINE];
  char tbuf[SZ_LINE];
  int lp=0;
  int status = -1;

  *cmd = '\0';
  *name = '\0';
  if( paramlist && *paramlist ){
    if( !word(paramlist, cmd, &lp) || !word(paramlist, name, &lp) )
      goto done;
    /* lookup the command */
    if( !strcmp(cmd, "add") ){
      status = ClipBoardAdd(xpa, name, &paramlist[lp], buf);
    }
    else if( !strncmp(cmd, "app", 3) ){
      status = ClipBoardAppend(xpa, name, &paramlist[lp], buf);
    }
    else if( !strncmp(cmd, "del", 3) ){
      status = ClipBoardDelete(xpa, name, &paramlist[lp]);
    }
#ifdef LATER
    else if( !strncmp(cmd, "loa", 3) ){
      status = ClipBoardLoad(xpa, name, &paramlist[lp], buf);
    }
    else if( !strncmp(cmd, "sav", 3) ){
      status = ClipBoardSave(xpa, name, &paramlist[lp]);
    }
#endif
  }

done:
  if( status < 0 ){
    if( !*cmd || !*name ){
      XPAError(xpa, "XPA clipboard requires: add|append|delete name\n");
    }
    else{
      snprintf(tbuf, SZ_LINE,
	       "XPA clipboard invalid cmd or name: %s %s\n", cmd, name);
      XPAError(xpa, tbuf);
    }
  }
  return(status);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPASendClipboard
 *
 * Purpose:	return clipboard information
 *
 * Returns:	0 for success, -1 for failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPASendClipboard (void *client_data, void *call_data, char *paramlist,
	    char **buf, size_t *len)
#else
int XPASendClipboard(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char **buf;
     size_t *len;
#endif
{
  XPA xpa = (XPA)call_data;
  char name[SZ_LINE];
  char tbuf[SZ_LINE];
  int lp=0;
  int status = -1;
  XPAClip cur;

  *name = '\0';
  if( paramlist && *paramlist ){
    if( !word(paramlist, name, &lp) )
      goto done;
    if( !(cur = ClipBoardLookup(xpa, name)) )
      goto done;
    if( cur->value ){
      send(xpa_datafd(xpa), cur->value, strlen(cur->value), 0);
      status =  0;
    }
  }

done:
  if( status < 0 ){
    if( !*name ){
      XPAError(xpa, "XPA clipboard requires: name\n");
    }
    else{
      snprintf(tbuf, SZ_LINE, "XPA clipboard invalid name: %s\n", name);
      XPAError(xpa, tbuf);
    }
  }
  return(status);
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

