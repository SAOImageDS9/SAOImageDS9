/*
 *	Copyright (c) 1999-2005 Smithsonian Astrophysical Observatory
 */

#include <funtoolsP.h>

/*
 *
 * private routines
 *
 */

/* struct for getting column info from headers */
typedef struct _hcstruct{
  int args;
  int eflag;
  int clen;
  int maxlen;
  char *fmt;
  char *expr;
  char mbuf[SZ_LINE];
  char tbuf[SZ_LINE];
} *HC, HCRec;

/* parser characteristics struct */
typedef struct _ptyperec{
  char *delims;
  char *comchars;
  char *eot;
  int nullvalue;
  int whitespace;
  int units;
  int comeot;
  int lazyeot;
  char *hcolfmt;
} *PType, PTypeRec;

static PTypeRec ptype[] =
  {{" \t,\n", "#\n", NULL,   0, 0, 0, 1, 1, NULL},               /* funtools */
   {" \t\n",  "#\n", NULL,   0, 0, 0, 1, 1, NULL},                 /* spaces */
   {",\n",    "#\n", NULL,   1, 0, 0, 1, 1, NULL},                 /* commas */
   {"\t\n",   "#\n", "\f\n", 1, 0, 0, 1, 0, NULL},                    /* rdb */
   {"\t\n",   "#\n", NULL,   1, 0, 1, 1, 1, "Column $col ($fmt)"}, /* VizieR */
   {"|;\n",   "#\n", NULL,   1, 0, 0, 1, 1, NULL}};                 /* other */
		           
/* macro return buffer */
static char macrobuf[SZ_LINE];

/*
 *
 * _HCCB -- callback for macro expansion
 *
 */
#ifdef ANSI_FUNC
static char *_HCCB(char *name, void *client_data)
#else
static char *_HCCB(name, client_data)
     char *name;
     void *client_data;
#endif
{
  HC hc = (HC)client_data;

  /* perform macro replacement */
  if( !strcmp(name, "name") || !strcmp(name, "col") ){
    if( strchr(hc->mbuf, 'n') ){
      hc->eflag = 1;
      gerror(stderr, 
	     "$%s can only be specified once in headcol format\n", name);
      return NULL;
    }
    strncpy(macrobuf, "%s", SZ_LINE);
    strncat(hc->mbuf, "n", SZ_LINE);
    hc->args++;
    return macrobuf;
  }
  else if( !strcmp(name, "format") || !strcmp(name, "fmt") ){
    if( strchr(hc->mbuf, 'f') ){
      hc->eflag = 1;
      gerror(stderr,
	     "$%s can only be specified once in headcol format\n", name);
      return NULL;
    }
    strncpy(macrobuf, "%[a-zA-Z0-9.]", SZ_LINE);
    strncat(hc->mbuf, "f", SZ_LINE);
    hc->args++;
    return macrobuf;
  }
  else if( !strcmp(name, "skip") ){
    strncpy(macrobuf, "%*s", SZ_LINE);
    return macrobuf;
  }
  else if( !strcmp(name, "skipi") ){
    strncpy(macrobuf, "%*d", SZ_LINE);
    return macrobuf;
  }
  else if( !strcmp(name, "skipf") ){
    strncpy(macrobuf, "%*f", SZ_LINE);
    return macrobuf;
  }
  else{
    return NULL;
  }
}

/*
 *
 * HCFree -- free up headercolumn struct
 *
 */
#ifdef ANSI_FUNC
static void
HCFree(HC hc)
#else
static void
HCFree(hc)
     HC hc;
#endif
{
  /* sanity check */
  if( !hc ) return;
  if( hc->fmt )  xfree(hc->fmt);
  if( hc->expr ) xfree(hc->expr);
  xfree(hc);
}

/*
 *
 * HCNew -- allocate header/column struct and generate scanf expression
 *
 */
#ifdef ANSI_FUNC
static HC
HCNew(char *s)
#else
static HC
HCNew(s)
     char *s;
#endif
{
  HC hc=NULL;

  /* sanity check */
  if( !s ) return NULL;

  /* allocate record */
  if( !(hc=xcalloc(1, sizeof(HCRec))) ) return NULL;
  /* expand format specification to make a scanf format */
  if( !(hc->fmt = ExpandMacro(s, NULL, NULL, 0, _HCCB, hc)) ||
      hc->eflag ){
    HCFree(hc);
    return NULL;
  }
  return hc;
}

/*
 *
 * HCProcess -- process a header line to see if it contains column info
 *
 */
#ifdef ANSI_FUNC
static char *
HCProcess(HC hc, char *s)
#else
static char *
HCProcess(hc, s)
     HC hc;
     char *s;
#endif
{
  int got;
  int len;
  char tbuf[SZ_LINE];
  char tbuf1[SZ_LINE];
  char tbuf2[SZ_LINE];

  /* sanity check */
  if( !hc || !*hc->mbuf || !hc->fmt || !s ) return NULL;

  /* clear buffers */
  *tbuf  = '\0';
  *tbuf1 = '\0';
  *tbuf2 = '\0';

  /* skip leading white space */
  while( isspace((int)*s) ) s++;

  /* try to recognize a type specification */
  if( !strcmp(hc->mbuf, "n") ){
    if( (got = sscanf(s, hc->fmt, tbuf1)) != hc->args ) return NULL;
    strncpy(tbuf, tbuf1, SZ_LINE);
  }
  else if( !strcmp(hc->mbuf, "f") ){
    if( (got = sscanf(s, hc->fmt, tbuf1)) != hc->args ) return NULL;
    strncpy(tbuf, tbuf1, SZ_LINE);
  }
  else if( !strcmp(hc->mbuf, "nf") ){
    if( (got = sscanf(s, hc->fmt, tbuf1, tbuf2)) != hc->args ) return NULL;
    switch(*tbuf2){
    case 'I':
      snprintf(tbuf, SZ_LINE, "%s:J", tbuf1);
      break;
    case 'F':
      snprintf(tbuf, SZ_LINE, "%s:D", tbuf1);
      break;
    case 'A':
      snprintf(tbuf, SZ_LINE, "%s:%sA", tbuf1, &tbuf2[1]?&tbuf2[1]:"");
      break;
    default:
      snprintf(tbuf, SZ_LINE, "%s:%s", tbuf1, tbuf2);
      break;
    }
  }
  else if( !strcmp(hc->mbuf, "fn") ){
    if( (got = sscanf(s, hc->fmt, tbuf1, tbuf2)) != hc->args ) return NULL;
    switch(*tbuf2){
    case 'I':
      snprintf(tbuf, SZ_LINE, "%s:J", tbuf2);
      break;
    case 'F':
      snprintf(tbuf, SZ_LINE, "%s:D", tbuf2);
      break;
    case 'A':
      snprintf(tbuf, SZ_LINE, "%s:%sA", tbuf2, &tbuf1[1]?&tbuf1[1]:"");
      break;
    default:
      snprintf(tbuf, SZ_LINE, "%s:%s", tbuf2, tbuf1);
      break;
    }
  }
  else{
    *tbuf = '\0';
  }

  /* add to expression */
  if( *hc->tbuf ){
    len = strlen(tbuf);
    /* make sure we have ennough room */
    if( (len + hc->clen + 1) >= hc->maxlen ){
      while( (len + hc->clen +1) > hc->maxlen ){
	hc->maxlen += SZ_LINE;
      }
      if( hc->clen == 0 )
	hc->expr = (char *)xcalloc(hc->maxlen, sizeof(char));
      else
	hc->expr = (char *)xrealloc(hc->expr, hc->maxlen);
    }
    /* eventdef syntax requires a comma between column arguments */
    if( *hc->expr ) strncat(hc->expr, ",", SZ_LINE-1);
    /* add new column */
    strncat(hc->expr, tbuf, SZ_LINE-1);
  }

  /* return what we just got */
  return hc->tbuf;
}

/*
 *
 * _FunTextGetLine -- get a line of text (using existing line if possible)
 *
 */
#ifdef ANSI_FUNC
static int
_FunTextGetLine(Fun fun, char *iline, char *lbuf, int llen)
#else
static int _FunTextGetLine(fun, iline, lbuf, llen)
     Fun fun;
     char *iline;
     char *lbuf;
     int llen;
#endif
{
  int len;
  char *lptr=NULL;

  /* initialize */
  *lbuf = '\0';

  /* seed with previously-read partial line, if necessary */
  if( iline && iline[0] ){
    strncpy(lbuf, iline, llen-1);
    lbuf[llen-1] = '\0';
    iline[0] = '\0';
    /* get actual length of string */
    len = strlen(lbuf);
    /* check for complete line (EOL at end of string) */
    if( lbuf[len-1] == '\n' )
      lptr = NULL;
    /* otherwise prepare to read rest of line */
    else
      lptr = &lbuf[len];
  }
  /* need a whole line */
  else{
    lptr = lbuf;
  }
  /* read more if we need it */
  if( lptr ){
    /* get next line, error if none */
    if( !ggets(fun->gio, lptr, llen) ){
      return 0;
    }
  }
  return strlen(lbuf);
}

/*
 *
 * semi-public routines, used by other modules
 *
 */

/*
 *
 * FunTextParam -- parse a line, looking for a valid parameter
 *
 */
#ifdef ANSI_FUNC
int
FunTextParam(char *pdelims, 
	     char *lbuf, char *kbuf, char *vbuf, char *cbuf, int maxlen)
#else
int FunTextParam(pdelims, lbuf, kbuf, vbuf, cbuf, maxlen)
     char *pdelims;
     char *lbuf, *kbuf, *vbuf, *cbuf;
     int maxlen;
#endif
{
  int i;
  int hstate=0;
  int got=0;
  int kgot=0;
  int len=0;
  int docom=0;
  int dtable[PARSE_TABLE_SIZE];
  char *s;
  char *kptr, *vptr, *cptr;
  char *tptr;
  char *tbuf;
  char quote='\0';

  kptr = kbuf;
  vptr = vbuf;
  cptr = cbuf;
  *kptr = '\0';
  *vptr = '\0';
  *cptr = '\0';

  /* set up delim table for removing enclosing chars from keyword strings */
  memset(dtable, 0, PARSE_TABLE_SIZE*sizeof(int));
  if( pdelims && *pdelims ){
    /* set the delim table */
    for(s=pdelims; s && *s; s++){
      if( (i=(int)*s) == '\\' ){
	s++;
	if( *s == 'n' ) i = '\n';
	else if( *s == 't' ) i = '\t';
	else if( *s == 'r' ) i = '\r';
	else if( *s == 'f' ) i = '\014';
      }
      dtable[i] = 1;
    }
  }
  else{
    dtable[(int)'='] = 1;
    dtable[(int)':'] = 1;
  }

  /* get modifiable string */
  tbuf = xstrdup(lbuf);
  nocr(tbuf);
  nowhite(tbuf, tbuf);

  /* process it */
  for(tptr=tbuf; *tptr;){
    switch(hstate){
    /* gather up keyword */
    case 0:
      if( (*tptr == ' ') || (*tptr == '\t') || dtable[(int)*tptr] ){
	/* check for FITS-style comment */
	if( *tptr == '=' ) docom=1;
	hstate = 1;
	len = 0;
      }
      else{
	*kptr++ = *tptr;
	*kptr = '\0';
	if( ++len >= maxlen ) goto done;
      }
      tptr++;
      break;
    /* process whitespace, including = and : */
    case 1:
      /* skip past whitespace before value */
      if( (*tptr == ' ') || (*tptr == '\t') )
	tptr++;
      else if( dtable[(int)*tptr] ){
	/* check for FITS-style comment */
	if( *tptr == '=' ) docom=1;
	/*only one = or : allowed */
	kgot++;
	if( kgot > 1 ){
	  hstate = 2;
	  len = 0;
	}
	else{
	  tptr++;
	}
      }
      else{
	hstate = 2;
	len = 0;
      }
      break;
    /* check for quoted string */
    case 2:
      if( *tptr == '"' ){
	quote = '"';
	docom = 1;
	hstate = 3;
	len = 0;
      }
      else if( *tptr == '\'' ){
	quote = '\'';
	docom = 1;
	hstate = 3;
	len = 0;
      }
      else{
	*vptr++ = *tptr;
	*vptr = '\0';;
	if( ++len >= maxlen ) goto done;
	hstate = 4;
	len = 0;
      }
      tptr++;
      break;
    /* gather up value in quoted string */
    case 3:
      if( *tptr == quote ){
	hstate = 5;
	len = 0;
      }
      else{
	*vptr++ = *tptr;
	*vptr = '\0';
	if( ++len >= maxlen ) goto done;
      }
      tptr++;
      break;
    /* gather value up to whitespace */
    case 4:
      /* gather up value */
      if( (*tptr == ' ') || (*tptr == '\t') ){
	hstate = 5;
	len = 0;
      }
      else{
	*vptr++ = *tptr;
	*vptr = '\0';
	if( ++len >= maxlen ) goto done;
      }
      tptr++;
      break;
    /* skip past whitespace before possible comment */
    case 5:
      if( docom ){
	if( (*tptr == ' ') || (*tptr == '\t') ){
	  tptr++;
	}
	else{
	  hstate = 6;
	  len = 0;
	}
      }
      /* if comments are not wanted, then everything is value */
      else{
	*vptr++ = *tptr;
	*vptr = '\0';
	tptr++;
	if( ++len >= maxlen ) goto done;
      }
      break;
    /* look for comment */
    case 6:
      if( *tptr == '/' ){
	tptr++;
	hstate = 7;
	len = 0;
      }
      /* extra chars but no comment char */
      else{
	got = 4;
	goto done2;
      }
      break;
    /* skip past whitespace before possible comment */
    case 7:
      if( (*tptr == ' ') || (*tptr == '\t') ){
	tptr++;
      }
      else{
	hstate = 8;
	len = 0;
      }
      break;
    /* gather up comment to end of line */
    case 8:
      *cptr++ = *tptr++;
      *cptr = '\0';
      if( ++len >= maxlen ) goto done;
      break;
    default:
      gerror(stderr, "unknown state (%d) processing text header\n", hstate);
      break;
    }
  }

  /* result code depends on what we gathered up */
done:
  if( *cbuf )
    got = 3;
  else if( *vbuf )
    got = 2;
  else if( *kbuf )
    got = 1;
  else
    got = 0;
  
done2:
  if( tbuf ) xfree(tbuf);
  return got;
}


/*
 *
 * FunTextParamHeader -- put param into header
 *
 */
#ifdef ANSI_FUNC
void
FunTextParamHeader(FITSHead theader,
		   char *lbuf, char *key, char *val, char *com, int pgot)
#else
void FunTextParamHeader(theader, lbuf, key, val, com, pgot)
     FITSHead theader;
     char *lbuf, *key, *val, *com;
     int pgot;
#endif
{
  char *lptr;
  longlong ival;
  int dtype;
  double dval;

  switch(pgot){
  case -1:
    gerror(stderr, "internal text parser error: processing params\n");
    break;
  case 0:
    break;
  case 1:
    ft_headapps(theader, "COMMENT", 0, key, NULL);
    break;
  case 2:
  case 3:
    dtype = ParseDataType(val, &dval, &ival);
    switch( dtype ){
    case PARSE_COMMENT:
    case PARSE_DASH:
    case PARSE_EOL:
    case PARSE_NULL:
    case PARSE_EOT:
      break;
    case PARSE_FLOAT:
      ft_headsetr(theader, key, 0, dval, 7, com, 1);
      break;
    case PARSE_HEXINT:
    case PARSE_INTEGER:
      ft_headseti(theader, key, 0, (int)ival, com, 1);
      break;
    case PARSE_STRING:
      ft_headsets(theader, key, 0, val, com, 1);
      break;
    }
    break;
  case 4:
    /* clean up line */
    nocr(lbuf);
    nowhite(lbuf, lbuf);
    for(lptr=lbuf; *lptr; lptr++)
      if( *lptr == '\t' ) *lptr = ' ';
    ft_headapps(theader, "COMMENT", 0, lbuf, NULL);
    break;
  }
}

/*
 *
 * FunTextOpen -- open a ascii text events file, 
 *	      	   set up binning and filtering parameters
 *
 */
#ifdef ANSI_FUNC
Fun
FunTextOpen(char *fname, char *mode, char *iline, GIO ifd)
#else
Fun FunTextOpen(fname, mode, iline, ifd)
     char *fname;
     char *mode;
     char *iline;
     GIO ifd;
#endif
{
  int i=0, p=0, q=0, t=0;
  int got;
  int state;
  int alen=0;
  int indx=0;
  int pgot=0;
  int nheader=0;
  int ntheader=0;
  char *s;
  char *delim=NULL, *comchars=NULL, *eot=NULL, *textp=NULL;
  char **hcolfmts=NULL;
  char tdelims[SZ_LINE];
  char tdebug[SZ_LINE];
  char pdelims[SZ_LINE];
  char tcomchars[SZ_LINE];
  char thcolfmt[SZ_LINE];
  char teot[SZ_LINE];
  char tnull1[SZ_LINE];
  char lbuf[SZ_LINE];
  char tbuf[SZ_LINE];
  char tbuf2[SZ_LINE];
  char pmode[SZ_LINE];
  char key[SZ_LINE];
  char val[SZ_LINE];
  char com[SZ_LINE];
  char eventdef[SZ_LINE];
  char file[SZ_LINE];
  char extn[SZ_LINE];
  char textparams[SZ_LINE];
  char tail[SZ_LINE];
  char ttail[SZ_LINE];
  char tname[SZ_LINE];
  Parse parser;
  Parse fakep=NULL;
  ParsedLine line=NULL, header=NULL, data1=NULL;
  FITSHead theader=NULL, tmerge=NULL;
  Fun fun=NULL;
  HC *hc=NULL;

  /* intialize */
  *tdebug = '\0';
  *tdelims = '\0';
  *pdelims = '\0';
  *tcomchars = '\0';
  *thcolfmt = '\0';
  *eventdef = '\0';
  *teot = '\0';
  *tnull1 = '\0';
  *tbuf = '\0';
  *extn = '\0';
  *textparams = '\0';
  *tail = '\0';
  *ttail = '\0';
  *tname = '\0';
  *file = '\0';

  /* allocate a fun record */
  if( !(fun = _FunNew()) )
    return NULL;

  /* save filename and mode */
  fun->fname = xstrdup(fname);
  fun->mode = xstrdup(mode);

  /* parse filename and get extension, index and tail */
  ft_parsefilename(fname, file, extn, SZ_LINE, &indx, ttail, SZ_LINE);
  /* if TEXT() specified, strip it out and place in textparams */
  if( !_FunSpecialFile(ttail, "TEXT", tname, tail, textparams, SZ_LINE) ){
    strncpy(tail, ttail, SZ_LINE-1);
  }

  /* use passed-in fd or try to open the file  */
  if( ifd )
    fun->gio = ifd;
  else if( !(fun->gio=gopen(file, mode)) )
    goto error;

  /* process section and keywords (but not mode keywords) */
  textp = textparams;
  _FunKeyword(textp, "debug", "TEXT_DEBUG", tdebug, SZ_LINE);
  _FunKeyword(textp, "delims", "TEXT_DELIMS", tdelims, SZ_LINE);
  _FunKeyword(textp, "pdelims", "TEXT_DELIMS", pdelims, SZ_LINE);
  _FunKeyword(textp, "comchars", "TEXT_COMCHARS", tcomchars, SZ_LINE);
  _FunKeyword(textp, "hcolfmt", "TEXT_HCOLFMT", thcolfmt, SZ_LINE);
  _FunKeyword(textp, "cols", "TEXT_COLUMNS", eventdef, SZ_LINE);
  _FunKeyword(textp, "eot", "TEXT_EOT", teot, SZ_LINE);
  _FunKeyword(textp, "null1", "TEXT_NULL1", tnull1, SZ_LINE);
  _FunKeyword(textp, "alen", "TEXT_ALEN", tbuf, SZ_LINE);
  if( *tbuf ) alen = atoi(tbuf);
  if( *textparams ){
    if( strlen(textp) && !strchr(textp, '=') ){
      /* the whole string is the column spec */
      strncpy(eventdef, textp, SZ_LINE-1);
      textp = NULL;
    }
  }

  /* make sure CR is in the delim table */
  if(*tdelims && !strstr(tdelims, "\\n")) strncat(tdelims, "\\n", SZ_LINE-1);

  /* create parsers */
  if( *tdelims ){
    fun->nparser = 1;
    fun->parsers = (Parse *)xcalloc(fun->nparser, sizeof(Parse));
    hcolfmts = xcalloc(fun->nparser, sizeof(char *));
    hc = xcalloc(fun->nparser, sizeof(HCRec));
    delim = tdelims;
    comchars = (*tcomchars ? tcomchars : PARSE_DEFAULT_COMCHARS);
    hcolfmts[0] = (*thcolfmt ? thcolfmt : NULL);
    hc[0] = HCNew(hcolfmts[0]);
    eot = (*teot ? teot : NULL);
    *pmode = '\0';
    if( textp && *textp ){
      strncat(pmode, textp, SZ_LINE-1);
      strncat(pmode, ",", SZ_LINE-1);
    }
    strncat(pmode, PARSE_DEFAULT_NULLVALUES, SZ_LINE-1);
    strncat(pmode, ",", SZ_LINE-1);
    strncat(pmode, PARSE_DEFAULT_WHITESPACE, SZ_LINE-1);
    strncat(pmode, ",", SZ_LINE-1);
    strncat(pmode, PARSE_DEFAULT_UNITS, SZ_LINE-1);
    strncat(pmode, ",", SZ_LINE-1);
    strncat(pmode, PARSE_DEFAULT_COMEOT, SZ_LINE-1);
    strncat(pmode, ",", SZ_LINE-1);
    strncat(pmode, PARSE_DEFAULT_LAZYEOT, SZ_LINE-1);
    if( !(fun->parsers[0] = ParseNew(delim, comchars, eot, pmode)) ){
      gwarning(stderr, "could not create parser #%d (%s)\n", p, delim);
      return NULL;
    }
  }
  else{
    fun->nparser = sizeof(ptype)/sizeof(PTypeRec);
    fun->parsers = (Parse *)xcalloc(fun->nparser, sizeof(Parse));
    hcolfmts = xcalloc(fun->nparser, sizeof(char *));
    hc = xcalloc(fun->nparser, sizeof(HCRec));
    for(p=0; p<fun->nparser; p++){
      delim = ptype[p].delims;
      comchars = (*tcomchars ? tcomchars : ptype[p].comchars);
      hcolfmts[p] = (*thcolfmt ? thcolfmt : ptype[p].hcolfmt);
      hc[p] = HCNew(hcolfmts[p]);
      eot = (*teot ? teot : ptype[p].eot);
      *pmode = '\0';
      if( textp && *textp ){
	strncat(pmode, textp, SZ_LINE-1);
      }
      if( *pmode ) strncat(pmode, ",", SZ_LINE-1);
      if( ptype[p].nullvalue ){
       	strncat(pmode, "nullvalues=true", SZ_LINE-1);
      }
      else{
	strncat(pmode, "nullvalues=false", SZ_LINE-1);
      }
      if( *pmode ) strncat(pmode, ",", SZ_LINE-1);
      if( ptype[p].whitespace ){
	strncat(pmode, "whitespace=true", SZ_LINE-1);
      }
      else{
	strncat(pmode, "whitespace=false", SZ_LINE-1);
      }
      if( *pmode ) strncat(pmode, ",", SZ_LINE-1);
      if( ptype[p].units ){
	strncat(pmode, "units=true", SZ_LINE-1);
      }
      else{
	strncat(pmode, "units=false", SZ_LINE-1);
      }
      if( *pmode ) strncat(pmode, ",", SZ_LINE-1);
      snprintf(tbuf, SZ_LINE-1, "comeot=%d", ptype[p].comeot);
      strncat(pmode, tbuf, SZ_LINE-1);
      if( *pmode ) strncat(pmode, ",", SZ_LINE-1);
      snprintf(tbuf, SZ_LINE-1, "lazyeot=%d", ptype[p].lazyeot);
      strncat(pmode, tbuf, SZ_LINE-1);
      if( *tdebug ){
	if( *pmode ) strncat(pmode, ",", SZ_LINE-1);
	if( istrue(tdebug) ) strcpy(tdebug, "1");
	else if( isfalse(tdebug) ) strcpy(tdebug, "0");
	snprintf(tbuf, SZ_LINE-1, "debug=%d", atoi(tdebug));
	strncat(pmode, tbuf, SZ_LINE-1);
      }
      if( !(fun->parsers[p] = ParseNew(delim, comchars, eot, pmode)) ){
	gwarning(stderr, "could not create text parser #%d (%s)\n", p, delim);
	goto error;
      }
    }
  }

  /* look for section specification in environment, if none was specified */
  if ( !*extn && (indx <=0) ) {
    if ( (s = (char *)getenv("TEXT_EXTNAME")) ) {
      strncpy(extn, s, SZ_LINE-1);
      extn[SZ_LINE-1] = '\0';
    }
    if ( (s = (char *)getenv("TEXT_EXTNUM")) ) {
      indx = atoi(s);
    }
  }

  /* skip to the specified table -- loop requires explicit break, which
     we do through a goto to the header processing section or to error */
  i = 0;
ext:
  i++;
  /* if no extension was specified, we are at the right place already */
  if( !*extn && (indx <=0) ) goto ext2;
  /* index was found, break out and process header */
  if( i == indx ) goto ext2;
  /* grab next table: get next line, error if none */
  while( 1 ){
    if( !_FunTextGetLine(fun, iline, lbuf, SZ_LINE) ){
      gwarning(stderr,
	       "text parser failure looking for extension: %s/%d\n",
	       *extn?extn:"unnamed", (indx!=-1)?indx:1);
      goto error;
    }
    /* analyze line and make sure one parser succeeded (even if its EOT) */
    if( !ParseAnalyze(fun->parsers, fun->nparser, lbuf) ){
      gwarning(stderr, "text parser failure analyzing line:\n%s", lbuf);
      goto error;
    }
    /* look for that valid parser */
    for(got=0, parser=NULL, p=0; p<fun->nparser; p++){
      if( fun->parsers[p]->state & PARSE_STATE_BAD) continue;
      if( fun->parsers[p]->state & PARSE_STATE_EOT){
	for(q=0; q<fun->nparser; q++){
	  if( fun->parsers[q]->state & PARSE_STATE_BAD) continue;
	  /* a parser finding eot is still valid */
	  if( fun->parsers[q]->state & PARSE_STATE_EOT) continue;
	  /* all other parsers missed this eot, so they are "bad" */
	  fun->parsers[q]->state = PARSE_STATE_BADMATCH;
	}
	got++;
	parser = NULL;
	break;
      }
      else{
	parser = fun->parsers[p];
      }
    }
    /* check for extn, if necessary */
    if( parser ){
      if( *extn ){
	if( parser->types[0] == PARSE_COMMENT ){
	  if( FunTextParam(pdelims, &lbuf[1], key, val, com, SZ_LINE) >=2 ){
	    /* initialize fitsy header, if necessary */
	    if( !theader ) theader = ft_headinit(NULL, 0);
	    /* add to temp header */
	    FunTextParamHeader(theader, &lbuf[1], key, val, com, pgot);
	    /* see if this is the right extension */
	    nowhite(val, val);
	    if( !strcasecmp(key, "extname") && !strcasecmp(val, extn) ){
	      goto ext2;
	    }
	  }
	}
      }
    }
    /* found another EOT */
    else{
      /* did not find named extension, free temp header for this section */
      if( *extn ){
	ft_headfree(theader, 1);
	theader = NULL;
      }
      /* if we still have parsers, we can continue with the next section */
      if( got ){
	/* bad parsers are kept bad, but others are reset */
	for(p=0; p<fun->nparser; p++){
	  if( fun->parsers[p]->state & PARSE_STATE_BAD) continue;
	  /* if we read and analyzed into the next table, back up a bit */
	  if( fun->parsers[p]->state & PARSE_STATE_NEXTLINE ){
	    line = ParseLineDup(fun->parsers[p], fun->parsers[p]->cur);
	    state = fun->parsers[p]->state;
	    state &= ~(PARSE_STATE_NEXTLINE|PARSE_STATE_EOT);
	    ParseReset(fun->parsers[p], line, state);
	  }
	  /* for comments, we just reprocess the line */
	  else if( fun->parsers[p]->state & PARSE_STATE_REDOLINE ){
	    ParseReset(fun->parsers[p], NULL, 0);
	    strncpy(tbuf, lbuf, SZ_LINE-1);
	    iline = tbuf;
	  }
	  else{
	    ParseReset(fun->parsers[p], NULL, 0);
	  }
	}
	/* go back to the outermost loop and look for next extension */
	goto ext;
      }
      else{
	gwarning(stderr,
		 "text parser failure looking for data table %d\n",
		 indx);
	goto error;
      }
    }
  }
ext2:

/* look for a header */
header:
  /* get line, seeding with previously-read partial line, if necessary */
  if( !_FunTextGetLine(fun, iline, lbuf, SZ_LINE) ){
    /* if we ran out of file but eventdef was passed, we have an empty table */
    if( *eventdef ){
      goto evdef;
    }
    /* otherwise we're probably in trouble */
    /* we'll make some last-ditch checks for a header, which should be in
       parse.c but would be really hard to add there */
    else{
      /* it might be an empty table with a proper header */
      if( !nheader ) goto headguess;
      /* or, if all strings have ':' characters, it might be a header line */
      for(nheader=0, p=0; p<fun->nparser; p++){
	if( fun->parsers[p]->state & PARSE_STATE_BAD ) continue;
	if( fun->parsers[p]->types[0] == PARSE_STRING ){
	  for(t=0; t<fun->parsers[p]->ntoken; t++){
	    if( !strchr(fun->parsers[p]->tokens[t].sval, ':') ){
	      nheader++;
	      break;
	    }
	  }
	  /* flag that we are past the header and into the data */
	  fun->parsers[p]->state = PARSE_STATE_DATA;
	  fun->parsers[p]->header = 
	    ParseLineDup(fun->parsers[p], fun->parsers[p]->cur);
	}
	else{
	  nheader++;
	  break;
	}
      }
      if( !nheader ) goto headguess;
      /* give up */
      gwarning(stderr, "text parser failure looking for header (section %d)\n",
	       indx);
      goto error;
    }
  }
  /* parse and analyze line */
  if( !ParseAnalyze(fun->parsers, fun->nparser, lbuf) ){
    gwarning(stderr, "text parser failure analyzing header\n");
    goto error;
  }
  /* see if all are in data state, meaning we have found the header */
  for(p=0, nheader=0, ntheader=0; p<fun->nparser; p++){
    if( fun->parsers[p]->state & PARSE_STATE_BAD ) continue;
    /* process comment into a header parameter */
    if( fun->parsers[p]->types[0] == PARSE_COMMENT ){
      if( strlen(lbuf) ){
	/* try to process parameter as a header column spec */
	if( !hc[p] || !HCProcess(hc[p], &lbuf[1]) ){
	  /* if not, process as an ordinary parameter (first time only) */
	  if( !ntheader ){
	    pgot = FunTextParam(pdelims, &lbuf[1], key, val, com, SZ_LINE);
	    /* initialize fitsy header, if necessary */
	    if( !theader ) theader = ft_headinit(NULL, 0);
	    FunTextParamHeader(theader, &lbuf[1], key, val, com, pgot);
	    ntheader++;
	  }
	}
      }
    }
    if( !(fun->parsers[p]->state & PARSE_STATE_DATA) ) nheader++;
  }
  /* if we're not all in the data state, to back for more */
  if( nheader ) goto header;

  /* first line of data tells data types */
  for(p=0; p<fun->nparser; p++){
    if( !(fun->parsers[p]->state & PARSE_STATE_BAD) ){
      if( fun->parsers[p]->data1 ){
	data1 = fun->parsers[p]->data1;
	break;
      }
    }
  }
  /* make sure we read enough to get data */
  if( !data1 ) goto header;
  
  /* if the eventdef was not specified, make a guess */
headguess:
  if( !*eventdef ){
    /* see if we got the evendef from the header */
    for(p=0; p<fun->nparser; p++){
      if( hc[p] && hc[p]->expr ){
	/* if it has type information, use it */
	if( strchr(hc[p]->expr, ':') ){
	  strncpy(eventdef, hc[p]->expr, SZ_LINE-1);
	  goto evdef;
	}
	else{
	  /* if we have no header info, we should be able to get it here */
	  if( !fun->parsers[p]->header ){
	    if( (fakep = ParseNew(",\n", NULL, NULL, NULL)) ){
	      ParseLine(fakep, hc[p]->expr, NULL);
	      if( fakep->cur ){
		fun->parsers[p]->header = ParseLineDup(fakep, fakep->cur);
	      }
	      ParseFree(fakep);
	    }
	  }
	}
      }
    }
    /* a header tells column names (or else we have to make them up) */
    for(p=0; p<fun->nparser; p++){
      if( !(fun->parsers[p]->state & PARSE_STATE_BAD) ){
	if( fun->parsers[p]->header ){
	  header = fun->parsers[p]->header;
	  break;
	}
      }
    }
    /* fake header line, if necessary */
    if( !header ){
      *tbuf = '\0';
      *lbuf = '\0';
      if( !data1 ){
	gwarning(stderr,
	 "internal text parser error: no data available to fake text header\n");
	goto error;
      }
      for(t=0; t<data1->ntoken; t++){
	snprintf(tbuf, SZ_LINE-1, "col%d", t+1);
	if( *lbuf )
	  strncat(lbuf, " ", SZ_LINE-1);
	strncat(lbuf, tbuf, SZ_LINE-1);
      }
      if( !(fakep = ParseNew(" \n", NULL, NULL, NULL)) ) goto error;
      if( !ParseAnalyze(&fakep, 1, lbuf) ) goto error;
      header = fakep->cur;
    }
    
    /* make up the event definition */
    for(t=0; t<header->ntoken; t++){
      *tbuf = '\0';
      strncpy(tbuf, header->tokens[t].sval, SZ_LINE-1);
      if( !strchr(header->tokens[t].sval, ':') ) {
	if( !data1 ){
	  gwarning(stderr,
	   "an empty table must specify data types in the column header\n");
	  goto error;
	}
	switch(data1->tokens[t].type){
	case PARSE_FLOAT:
	  strncat(tbuf, ":1D", SZ_LINE-1);
	  break;
	case PARSE_HEXINT:
	  strncat(tbuf, ":32X", SZ_LINE-1);
	  break;
	case PARSE_INTEGER:
	  strncat(tbuf, ":1J", SZ_LINE-1);
	  break;
	case PARSE_STRING:
	  if( alen <=0 )
	    alen = MAX(strlen(data1->tokens[t].sval), PARSE_DEFAULT_ALEN);
	  snprintf(tbuf2, SZ_LINE-1, ":%dA", alen);
	  strncat(tbuf, tbuf2, SZ_LINE-1);
	  break;
	case PARSE_NULL:
	  if( *tnull1 ){
	    snprintf(tbuf, SZ_LINE-1, "%s:%s", header->tokens[t].sval, tnull1);
	  }
	  else{
	    gwarning(stderr,
		     "a NULL value in row1,col%d requires null1='[I|J|E|D|A]' or cols='...'\n",
		     t+1);
	    goto error;
	  }
	  break;
	  /* ignore everything else */
	case PARSE_DASH:
	case PARSE_COMMENT:
	case PARSE_EOL:
	  break;
	default:
	  gwarning(stderr,
	   "internal text parser error: invalid type in text header: '%c'\n", 
	   data1->tokens[t].type);
	  goto error;
	}
      }
      if( *tbuf ){
	if( *eventdef ) strncat(eventdef, ",", SZ_LINE-1);
	strncat(eventdef, tbuf, SZ_LINE-1);
      }
    }
  }
    
evdef:
  /* create a fake table header from the event description */
  if( !(fun->header = _FunRawEvHeader(fun, NULL, tail, eventdef)) )
    goto error;
  
  /* its a valid event file */
  fun->type = FUN_EVENTS;
  /* no blanks for events */
  fun->doblank = 0;

  /* data will not need conversion */
  fun->endian = is_bigendian();

  /* look for indication of bitpix */
  if( _FunKeyword(tail, "bitpix", "TEXT_BITPIX", tbuf, SZ_LINE) )
    fun->bitpix = atoi(tbuf);
  /* else assume a safe value */
  else
    fun->bitpix = 32;

  /* no header on text files */
  fun->skip = 0;

  /* determine whether we are only processing specific rows */
  _FunRowNum(fun, tail, NULL);
  /* get the key for binning */
  _FunTableBinCols(fun, tail, "TEXT_BINCOLS");
  /* get the key for the value column for binning */
  _FunTableValCol(fun, tail, "TEXT_VCOL");
  /* calculate the image length including padding */
  _FunImageSize(fun);
  /* now parse the section specification */
  _FunParseSection(fun, tail,
		   &(fun->x0), &(fun->x1), &(fun->y0), &(fun->y1),
		   &(fun->block), &(fun->btype), tail, SZ_LINE);
  /* get maxbufsize for table access */
  _FunMaxBufSize(fun, tail);
  /* what's left in the tail is the filter */
  fun->filter = xstrdup(tail);
  /* fill in the default selected columns */
  FunColumnSelect(fun, 0, "copy=reference", NULL);

  /* skip events header, if necessary */
  if( fun->skip )
    gskip(fun->gio, (off_t)fun->skip);

  /* merge in comments as params */
  if( theader && fun->header ){
    tmerge = ft_headmerge(fun->header, theader, 1);
    ft_headfree(fun->header, 1);
    ft_headfree(theader, 1);
    fun->header = tmerge;
  }

  /* common code */
  if( !_FunOpenCommon(fun) ) goto error;

  /* make sure we turned indexing off */
  fun->idx = -1;

  /* free up tem space */
  if( fakep )   ParseFree(fakep);
  if( hcolfmts) xfree(hcolfmts);
  if( hc ){
    for(i=0; i<fun->nparser; i++){
      if( hc[i] ) HCFree(hc[i]);
    }
    xfree(hc);
  }
  /* return completed struct */
  return fun;
  
error:
  /* free up temp space */
  if( fakep )   ParseFree(fakep);
  if( theader ) ft_headfree(theader, 1);
  if( hcolfmts) xfree(hcolfmts);
  if( hc ){
    for(i=0; i<fun->nparser; i++){
      if( hc[i] ) HCFree(hc[i]);
    }
    xfree(hc);
  }
  _FunFree(fun, 1);
  return NULL;
}

