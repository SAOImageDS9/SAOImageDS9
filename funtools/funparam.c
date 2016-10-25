/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

#include <funtoolsP.h>

static int doprim=0;
static int doraw=0;

#define BLANK_NAME "        "

#define MULTI_ENTRY(name,n) (!n && (!strcmp(name, BLANK_NAME)  || \
				    !strcmp(name, "HISTORY")   || \
				    !strcmp(name, "CONTINUE")  || \
				    !strcmp(name, "COMMENT"))  )

#ifdef ANSI_FUNC
static int
_FunParamGetType(FITSCard card)
#else
static int _FunParamGetType(card)
     FITSCard card;
#endif
{
  FITSType type;
  char tbuf[SZ_LINE];

  if( ft_cardpar(card, &type, tbuf, NULL, NULL) != NULL ){
    switch(type){
    case FT_UNKNOWN:
      return(FUN_PAR_UNKNOWN);
    case FT_COMMENT:
      return(FUN_PAR_COMMENT);
    case FT_LOGICAL:
      return(FUN_PAR_LOGICAL);
    case FT_INTEGER:
      return(FUN_PAR_INTEGER);
    case FT_STRING:
      return(FUN_PAR_STRING);
    case FT_VALUE:
      return(FUN_PAR_VALUE);
    case FT_REAL:
      return(FUN_PAR_REAL);
    case FT_COMPLEX:
      return(FUN_PAR_COMPLEX);
    default:
      return(FUN_PAR_UNKNOWN);
    }
  }
  return(0);
}

/*
 *
 * _FunParamUpdateFile -- make a stab at updating a param value
 *
 */
#ifdef ANSI_FUNC
static int
_FunParamUpdateFile(Fun fun, FITSCard ocard, FITSCard card)
#else
static int _FunParamUpdateFile(fun, ocard, card)
     Fun fun;
     FITSCard card;
     FITSCard ocard;
#endif
{
  off_t pos, opos;

  /* sanity check */
  if( !ocard ) return 0;

  /* try to update file if necessary */
  if( (fun->ops & OP_WRHEAD) && (fun->headpos >=0) ){
    pos = fun->headpos + (char *)ocard - (char *)fun->header->cards;
    if( ((opos=gtell(fun->gio)) >=0) && (gseek(fun->gio, pos, 0) >=0) ){
      gwrite(fun->gio, (char *)card, sizeof(char), FT_CARDLEN);
      gseek(fun->gio, opos, 0);
      return 1;
    }
    else
      return 0;
  }
  else
    return 1;
}

/*
 *
 * FUN_PRIMARY -- set the doprim flag
 * this is meant to look like one of the funtools defines
 *
 */
#ifdef ANSI_FUNC
Fun
FUN_PRIMARY(Fun fun)
#else
Fun FUN_PRIMARY(fun)
	Fun fun;
#endif
{
  doprim = 1;
  return fun;
}

/*
 *
 * FUN_RAW -- set the doraw flag
 * this is meant to look like one of the funtools defines
 *
 */
#ifdef ANSI_FUNC
char *
FUN_RAW(char *name)
#else
char *FUN_RAW(name)
     char *name;
#endif
{
  doraw = 1;
  return name;
}

/*
 *
 * FunParamGetb -- get a parameter as a logical
 *
 */
#ifdef ANSI_FUNC
int
FunParamGetb(Fun fun, char *name, int n, int defval, int *got)
#else
int FunParamGetb(fun, name, n, defval, got)
     Fun fun;
     char *name;
     int n;
     int defval;
     int *got;
#endif
{
  FITSCard card;
  FITSHead hd;
  int val;

  *got = 0;
  val = defval;
  if( doprim || fun->doprim ){
    if( fun->header->primary )
      hd = fun->header->primary;
    else
      goto done;
  }
  else{
    if( fun->header )
      hd = fun->header;
    else if( fun->theader )
      hd = fun->theader;
    else
      goto done;
  }
  val = ft_headgetl(hd, name, n, defval, &card);
  if( card ){
    *got = _FunParamGetType(card);
  }

done:
  doprim = 0;
  doraw = 0;
  return val;
}

/*
 *
 * FunParamGeti -- get a parameter as an integer
 *
 */
#ifdef ANSI_FUNC
int
FunParamGeti(Fun fun, char *name, int n, int defval, int *got)
#else
int FunParamGeti(fun, name, n, defval, got)
     Fun fun;
     char *name;
     int n;
     int defval;
     int *got;
#endif
{
  FITSCard card;
  FITSHead hd;
  int val;

  *got = 0;
  val = defval;
  if( doprim || fun->doprim ){
    if( fun->header->primary )
      hd = fun->header->primary;
      goto done;
  }
  else{
    if( fun->header )
      hd = fun->header;
    else if( fun->theader )
      hd = fun->theader;
    else
      goto done;
  }

  val = ft_headgeti(hd, name, n, defval, &card);
  if( card ){
    *got = _FunParamGetType(card);
  }

done:
  doprim = 0;
  doraw = 0;
  return val;
}

/*
 *
 * FunParamGetl -- get a parameter as a longlong
 *
 */
#ifdef ANSI_FUNC
longlong
FunParamGetl(Fun fun, char *name, int n, longlong defval, int *got)
#else
longlong FunParamGetl(fun, name, n, defval, got)
     Fun fun;
     char *name;
     int n;
     longlong defval;
     int *got;
#endif
{
  FITSCard card;
  FITSHead hd;
  int val;

  *got = 0;
  val = defval;
  if( doprim || fun->doprim ){
    if( fun->header->primary )
      hd = fun->header->primary;
      goto done;
  }
  else{
    if( fun->header )
      hd = fun->header;
    else if( fun->theader )
      hd = fun->theader;
    else
      goto done;
  }

  val = ft_headgetil(hd, name, n, defval, &card);
  if( card ){
    *got = _FunParamGetType(card);
  }

done:
  doprim = 0;
  doraw = 0;
  return val;
}

/*
 *
 * FunParamGetd -- get a parameter as a double float
 *
 */
#ifdef ANSI_FUNC
double
FunParamGetd(Fun fun, char *name, int n, double defval, int *got)
#else
double FunParamGetd(fun, name, n, defval, got)
     Fun fun;
     char *name;
     int n;
     double defval;
     int *got;
#endif
{
  FITSCard card;
  FITSHead hd;
  double val;

  *got = 0;
  val = defval;
  if( doprim || fun->doprim ){
    if( fun->header->primary )
      hd = fun->header->primary;
    else
      goto done;
  }
  else{
    if( fun->header )
      hd = fun->header;
    else if( fun->theader )
      hd = fun->theader;
    else
      goto done;
  }

  val = ft_headgetr(hd, name, n, defval, &card);
  if( card ){
    *got = _FunParamGetType(card);
  }

done:
  doprim = 0;
  doraw = 0;
  return val;
}

/*
 *
 * FunParamGets -- get a parameter as a string
 *
 */
#ifdef ANSI_FUNC
char *
FunParamGets(Fun fun, char *name, int n, char *defval, int *got)
#else
char *FunParamGets(fun, name, n, defval, got)
     Fun fun;
     char *name;
     int n;
     char * defval;
     int *got;
#endif
{
  FITSCard card;
  FITSHead hd;
  char tbuf[FT_CARDLEN+1];
  char *val;

  *got = 0;
  if( doprim || fun->doprim ){
    if( fun->header->primary )
      hd = fun->header->primary;
    else
      goto dodef;
  }
  else{
    if( fun->header )
      hd = fun->header;
    else if( fun->theader )
      hd = fun->theader;
    else
      goto dodef;
  }

  if( name && *name ){
    val = ft_headgets(hd, name, n, defval, &card);
    if( doraw || fun->doraw ){
      if( val ) xfree(val);
      if( card && *card->c ){
	strncpy(tbuf, card->c, FT_CARDLEN);
	tbuf[FT_CARDLEN] = '\0';
	val = xstrdup(tbuf);
      }
      else{
	goto dodef;
      }
    }
  }
  else{
    if( n > 0 ){
      card = ft_cardnth(hd, n);
      if( card && *card->c ){
	strncpy(tbuf, card->c, FT_CARDLEN);
	tbuf[FT_CARDLEN] = '\0';
	val = xstrdup(tbuf);
      }
      else
	goto dodef;
    }
    else{
      goto dodef;
    }
  }
  if( card ){
    *got = _FunParamGetType(card);
  }
  doprim = 0;
  doraw = 0;
  return val;

dodef:
  *got = 0;
  doprim = 0;
  doraw = 0;
  if( defval && *defval )
    val = xstrdup(defval);
  else
    val = NULL;
  return val;
}

/*
 *
 * FunParamPutb -- set a logical parameter value
 *
 */
#ifdef ANSI_FUNC
int
FunParamPutb(Fun fun, char *name, int n, int value, char *comm, 
		   int append)
#else
int FunParamPutb(fun, name, n, value, comm, append)
     Fun fun;
     char *name;
     int n;
     int value;
     char *comm;
     int append;
#endif
{
  FITSCard card=NULL, ocard=NULL, tcard=NULL;
  FITSHead hd;
  int got;
  int ip;
  char tbuf[SZ_LINE], tbuf2[SZ_LINE];

  got = -1;
  if( !name ) name = BLANK_NAME;
  if( doprim || fun->doprim ){
    if( fun->primary )
      hd = fun->primary;
    else
      goto done;
  }
  else{
    if( fun->header )
      hd = fun->header;
    else if( fun->theader )
      hd = fun->theader;
    else
      goto done;
  }

  /* see if we have to update file (if we already have written this param) */
  if( (fun->ops & OP_WRHEAD) && (fun->headpos >=0) ){
    /* look for the exact card */
    ocard=ft_headfind(hd, name, n, 0);
    /* look for a blank placeholder card whose value is the card name */
    if( !ocard && (append == 2) ){
      if( n != 0 )
	snprintf(tbuf2, SZ_LINE-1, "%s%d", name, n);
      else
	strncpy(tbuf2, name, SZ_LINE-1);
      for(tcard=hd->cards; tcard!=&(hd->cards[hd->ncard]); tcard++){
	if( !strncmp((*tcard).c, BLANK_NAME, 8) ){
	  ip = 0;
	  if( word((*tcard).c, tbuf, &ip) && !strcasecmp(tbuf, tbuf2) ){
	    ocard = tcard;
	    break;
	  }
	}
      }
    }
  }

  /* set parameter value */
  if( MULTI_ENTRY(name, n) )
    card = ft_headappl(hd, name, n, value, comm);
  else
    card = ft_headsetl(hd, name, n, value, comm, append);
  /* so far, so good */
  if( card ) got = 1;

  /* update file if necessary */
  if( ocard && card ) got = _FunParamUpdateFile(fun, ocard, card);

done:
  doprim = 0;
  doraw = 0;
  return got;
}

/*
 *
 * FunParamPuti -- set an integer parameter value
 *
 */
#ifdef ANSI_FUNC
int
FunParamPuti(Fun fun, char *name, int n, int value, char *comm, int append)
#else
int FunParamPuti(fun, name, n, value, comm, append)
     Fun fun;
     char *name;
     int n;
     int value;
     char *comm;
     int append;
#endif
{
  FITSCard card=NULL, ocard=NULL, tcard=NULL;
  FITSHead hd;
  int got;
  int ip;
  char tbuf[SZ_LINE], tbuf2[SZ_LINE];

  got = -1;
  if( !name ) name = BLANK_NAME;
  if( doprim || fun->doprim ){
    if( fun->primary )
      hd = fun->primary;
    else
      goto done;
  }
  else{
    if( fun->header )
      hd = fun->header;
    else if( fun->theader )
      hd = fun->theader;
    else
      goto done;
  }

  /* see if we have to update file (if we already have written this param) */
  if( (fun->ops & OP_WRHEAD) && (fun->headpos >=0) ){
    /* look for the exact card */
    ocard=ft_headfind(hd, name, n, 0);
    /* look for a blank placeholder card whose value is the card name */
    if( !ocard && (append == 2) ){
      if( n != 0 )
	snprintf(tbuf2, SZ_LINE-1, "%s%d", name, n);
      else
	strncpy(tbuf2, name, SZ_LINE-1);
      for(tcard=hd->cards; tcard!=&(hd->cards[hd->ncard]); tcard++){
	if( !strncmp((*tcard).c, BLANK_NAME, 8) ){
	  ip = 0;
	  if( word((*tcard).c, tbuf, &ip) && !strcasecmp(tbuf, tbuf2) ){
	    ocard = tcard;
	    break;
	  }
	}
      }
    }
  }

  /* set parameter value */
  if( MULTI_ENTRY(name, n) )
    card = ft_headappi(hd, name, n, value, comm);
  else
    card = ft_headseti(hd, name, n, value, comm, append);
  /* so far, so good */
  if( card ) got = 1;

  /* update file if necessary */
  if( ocard && card ) got = _FunParamUpdateFile(fun, ocard, card);

done:
  doprim = 0;
  doraw = 0;
  return got;
}

/*
 *
 * FunParamPutl -- set a integer64 parameter value
 *
 */
#ifdef ANSI_FUNC
int
FunParamPutl(Fun fun, char *name, int n, longlong value, char *comm, int append)
#else
int FunParamPutl(fun, name, n, value, comm, append)
     Fun fun;
     char *name;
     int n;
     longlong value;
     char *comm;
     int append;
#endif
{
  FITSCard card=NULL, ocard=NULL, tcard=NULL;
  FITSHead hd;
  int got;
  int ip;
  char tbuf[SZ_LINE], tbuf2[SZ_LINE];

  got = -1;
  if( !name ) name = BLANK_NAME;
  if( doprim || fun->doprim ){
    if( fun->primary )
      hd = fun->primary;
    else
      goto done;
  }
  else{
    if( fun->header )
      hd = fun->header;
    else if( fun->theader )
      hd = fun->theader;
    else
      goto done;
  }

  /* see if we have to update file (if we already have written this param) */
  if( (fun->ops & OP_WRHEAD) && (fun->headpos >=0) ){
    /* look for the exact card */
    ocard=ft_headfind(hd, name, n, 0);
    /* look for a blank placeholder card whose value is the card name */
    if( !ocard && (append == 2) ){
      if( n != 0 )
	snprintf(tbuf2, SZ_LINE-1, "%s%d", name, n);
      else
	strncpy(tbuf2, name, SZ_LINE-1);
      for(tcard=hd->cards; tcard!=&(hd->cards[hd->ncard]); tcard++){
	if( !strncmp((*tcard).c, BLANK_NAME, 8) ){
	  ip = 0;
	  if( word((*tcard).c, tbuf, &ip) && !strcasecmp(tbuf, tbuf2) ){
	    ocard = tcard;
	    break;
	  }
	}
      }
    }
  }

  /* set parameter value */
  if( MULTI_ENTRY(name, n) )
    card = ft_headappil(hd, name, n, value, comm);
  else
    card = ft_headsetil(hd, name, n, value, comm, append);
  /* so far, so good */
  if( card ) got = 1;

  /* update file if necessary */
  if( ocard && card ) got = _FunParamUpdateFile(fun, ocard, card);

done:
  doprim = 0;
  doraw = 0;
  return got;
}

/*
 *
 * FunParamPutd -- set a double parameter value
 *
 */
#ifdef ANSI_FUNC
int
FunParamPutd(Fun fun, char *name, int n, double value, int prec, 
		  char *comm,  int append)
#else
int FunParamPutd(fun, name, n, value, prec, comm, append)
     Fun fun;
     char *name;
     int n;
     double value;
     int prec;
     char *comm;
     int append;
#endif
{
  FITSCard card=NULL, ocard=NULL, tcard=NULL;
  FITSHead hd;
  int got;
  int ip;
  char tbuf[SZ_LINE], tbuf2[SZ_LINE];

  got = -1;
  if( !name ) name = BLANK_NAME;
  if( doprim || fun->doprim ){
    if( fun->primary )
      hd = fun->primary;
    else
      goto done;
  }
  else{
    if( fun->header )
      hd = fun->header;
    else if( fun->theader )
      hd = fun->theader;
    else
      goto done;
  }

  /* see if we have to update file (if we already have written this param) */
  if( (fun->ops & OP_WRHEAD) && (fun->headpos >=0) ){
    /* look for the exact card */
    ocard=ft_headfind(hd, name, n, 0);
    /* look for a blank placeholder card whose value is the card name */
    if( !ocard && (append == 2) ){
      if( n != 0 )
	snprintf(tbuf2, SZ_LINE-1, "%s%d", name, n);
      else
	strncpy(tbuf2, name, SZ_LINE-1);
      for(tcard=hd->cards; tcard!=&(hd->cards[hd->ncard]); tcard++){
	if( !strncmp((*tcard).c, BLANK_NAME, 8) ){
	  ip = 0;
	  if( word((*tcard).c, tbuf, &ip) && !strcasecmp(tbuf, tbuf2) ){
	    ocard = tcard;
	    break;
	  }
	}
      }
    }
  }

  /* set parameter value */
  if( MULTI_ENTRY(name, n) )
    card = ft_headappr(hd, name, n, value, prec, comm);
  else
    card = ft_headsetr(hd, name, n, value, prec, comm, append);
  /* so far, so good */
  if( card ) got = 1;

  /* update file if necessary */
  if( ocard && card ) got = _FunParamUpdateFile(fun, ocard, card);

done:
  doprim = 0;
  doraw = 0;
  return got;
}

/*
 *
 * FunParamPuts -- set a string parameter value
 *
 */
#ifdef ANSI_FUNC
int
FunParamPuts(Fun fun, char *name, int n, char *value, char *comm,
		  int append)
#else
int FunParamPuts(fun, name, n, value, comm, append)
     Fun fun;
     char *name;
     int n;
     char *value;
     char *comm;
     int append;
#endif
{
  FITSCard card=NULL, ocard=NULL, tcard=NULL;
  FITSHead hd;
  int got;
  int ip;
  char tbuf[SZ_LINE], tbuf2[SZ_LINE];

  got = -1;
  if( !name ) name = BLANK_NAME;
  if( doprim || fun->doprim ){
    if( fun->primary )
      hd = fun->primary;
    else
      goto done;
  }
  else{
    if( fun->header )
      hd = fun->header;
    else if( fun->theader )
      hd = fun->theader;
    else
      goto done;
  }

  /* see if we have to update file (if we already have written this param) */
  if( (fun->ops & OP_WRHEAD) && (fun->headpos >=0) ){
    /* look for the exact card */
    ocard=ft_headfind(hd, name, n, 0);
    /* look for a blank placeholder card whose value is the card name */
    if( !ocard && (append == 2) ){
      if( n != 0 )
	snprintf(tbuf2, SZ_LINE-1, "%s%d", name, n);
      else
	strncpy(tbuf2, name, SZ_LINE-1);
      for(tcard=hd->cards; tcard!=&(hd->cards[hd->ncard]); tcard++){
	if( !strncmp((*tcard).c, BLANK_NAME, 8) ){
	  ip = 0;
	  if( word((*tcard).c, tbuf, &ip) && !strcasecmp(tbuf, tbuf2) ){
	    ocard = tcard;
	    break;
	  }
	}
      }
    }
  }

  /* set parameter value */
  if( MULTI_ENTRY(name, n) )
    card = ft_headapps(hd, name, n, value, comm);
  else
    card = ft_headsets(hd, name, n, value, comm, append);
  /* so far, so good */
  if( card ) got = 1;

  /* update file if necessary */
  if( ocard && card ) got = _FunParamUpdateFile(fun, ocard, card);

done:
  doprim = 0;
  doraw = 0;
  return got;
}
