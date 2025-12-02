/*
 *	Copyright (c) 2004 Smithsonian Astrophysical Observatory
 */

#include <parse.h>

/*
 *----------------------------------------------------------------------------
 *
 *
 * 			Private Routines and Data
 *
 *
 *----------------------------------------------------------------------------
 */

static int __parseline;
static ParseRec __parserec;
static Parse _parse = &__parserec;
static char _ctab[PARSE_TABLE_SIZE][PARSE_TABLE_SIZE];

#ifdef ANSI_FUNC
static int 
_gettype(char *s, double *d, longlong *i)
#else
_gettype(s, d, i)
     char *s;
     double *d;
     longlong *i;
#endif
{
  char *t;
  longlong lval;
  double dval;

  /* make sure we have something */
  if( !s || !*s ) return PARSE_NULL;

  /* the temp pointer will move along the string */
  t = s;

  /* skip leading spaces */
  while( *t && isspace((int)*t) ) t++;
  /* if all we had were spaces, its a string */
  if( !*t ) return PARSE_STRING;

  /* skip optional sign */
  if( *t && (*t == '+') ){
    t++;
  }
  /* skip optional minus sign or detect dashes */
  else if( *t && (*t == '-') ){
    t++;
    if( !*t ) return PARSE_DASH;
    if( *t && (*t == '-') ){
      for(t++; *t; t++){
	if( *t != '-' ) return PARSE_STRING;
      }
      return PARSE_DASH;
    }
  }

  /* look for hex indication */
  if( (*t == '0') && ((*(++t) == 'x') || (*t == 'X')) ){
    goto testhex;
  }

  /* quick look for indication of a float */
  for(; *t; t++){
    if( (*t == '.') || (*t == 'E') )
      goto testfloat;
  }
  goto testint;

testfloat:
  dval = SAOstrtod(s, &t);
  while( *t && isspace((int)*t) )
    t++;
  if( *t != '\0' )
    return PARSE_STRING;
  if( d ) *d = dval;
  return PARSE_FLOAT;

testint:
  lval = strtoll(s, &t, 10);
  while( *t && isspace((int)*t) )
    t++;
  if( *t != '\0' )
    return PARSE_STRING;
  if( i ) *i = (longlong)lval;
  if( d ) *d = (double)lval;
  return PARSE_INTEGER;

testhex:
  lval = strtoll(s, &t, 16);
  while( *t && isspace((int)*t) )
    t++;
  if( *t != '\0' )
    return PARSE_STRING;
  if( i ) *i = (longlong)lval;
  if( d ) *d = (double)lval;
  return PARSE_HEXINT;
}

#ifdef ANSI_FUNC
static void
_ParseInitialize(void)
#else
static void _ParseInitialize()
#endif
{
  /* clear ctable */
  memset(_ctab, 0, PARSE_TABLE_SIZE * PARSE_TABLE_SIZE);
  
  /* set allowable type conversions */
  _ctab[PARSE_NULL][PARSE_NULL] = 1;
  _ctab[PARSE_NULL][PARSE_FLOAT] = 1;
  _ctab[PARSE_NULL][PARSE_INTEGER] = 1;
  _ctab[PARSE_NULL][PARSE_HEXINT] = 1;
  _ctab[PARSE_NULL][PARSE_STRING] = 1;

  _ctab[PARSE_DASH][PARSE_NULL] = 1;
  _ctab[PARSE_DASH][PARSE_FLOAT] = 1;
  _ctab[PARSE_DASH][PARSE_INTEGER] = 1;
  _ctab[PARSE_DASH][PARSE_HEXINT] = 1;
  _ctab[PARSE_DASH][PARSE_STRING] = 1;

  _ctab[PARSE_FLOAT][PARSE_FLOAT] = 1;
  _ctab[PARSE_FLOAT][PARSE_INTEGER] = 1;
  _ctab[PARSE_FLOAT][PARSE_HEXINT] = 1;
  _ctab[PARSE_FLOAT][PARSE_NULL] = 1;

  _ctab[PARSE_INTEGER][PARSE_INTEGER] = 1;
  _ctab[PARSE_INTEGER][PARSE_HEXINT] = 1;
  _ctab[PARSE_INTEGER][PARSE_NULL] = 1;
  _ctab[PARSE_INTEGER][PARSE_STRING] = 1;

  _ctab[PARSE_HEXINT][PARSE_HEXINT] = 1;
  _ctab[PARSE_HEXINT][PARSE_INTEGER] = 1;
  _ctab[PARSE_HEXINT][PARSE_NULL] = 1;

  _ctab[PARSE_STRING][PARSE_STRING] = 1;
  _ctab[PARSE_STRING][PARSE_NULL] = 1;
  _ctab[PARSE_STRING][PARSE_INTEGER] = 1;

  /* set i2f conversions (requires explicit enabling) */
  _ctab[PARSE_INTEGER][PARSE_FLOAT] = -1;
  _ctab[PARSE_HEXINT][PARSE_FLOAT] = -1;
}

#ifdef ANSI_FUNC
static int
_ParseEOT(Parse parse, char *line)
#else
static int _ParseEOT(parse, line)
     Parse parse;
     char *line;
#endif
{
  if( !parse || !line || !parse->eot || (parse->state & PARSE_STATE_BAD) )
    return 0;
  if( !strcmp(parse->eot->lines[parse->eot->ncur], line) ){
    parse->eot->ncur++;
    if( parse->eot->ncur == parse->eot->nline ){
      parse->eot->ncur = 0;
      return 1;
    }
    else{
      return -1;
    }
  }
  else{
    parse->eot->ncur = 0;
    if( !strcmp(parse->eot->lines[parse->eot->ncur], line) ){
      parse->eot->ncur++;
      return -1;
    }
  }
  return 0;
}

#ifdef ANSI_FUNC
static int
_ParseFixTokens(ParsedLine line1, ParsedLine line2)
#else
static int _ParseFixTokens(line1, line2)
     ParsedLine line1;
     ParsedLine line2;
#endif
{
  int i;

  /* sanity check */
  if( !line1 || !line2 ) return -1;

  /* horrible vizier hack: the units line often is missing trailing
     null values. we try to fix that here. this really stinks */
  if( line2->ntoken < line1->ntoken ){
    line2->tokens = (ParsedToken)xrealloc(line2->tokens,
					 line1->ntoken*sizeof(ParsedTokenRec));
    for(i=line2->ntoken; i<line1->ntoken; i++){
      line2->tokens[i].sval = NULL;
      line2->tokens[i].type = PARSE_NULL;
      line2->tokens[i].delim = '\0';
    }
    line2->maxtoken = line1->ntoken;
    line2->ntoken = line1->ntoken;
    return 1;
  }
  else{
    return 0;
  }
}

#ifdef ANSI_FUNC
static int 
_ParseLineState(Parse parse, int istate, char *UNUSED(mode))
#else
_ParseLineState(parse, istate, mode)
     Parse parse;
     int state;
     char *mode;
#endif
{
  int state;
  ParsedLine line;

  /* sanity check */
  if( !parse ) return PARSE_STATE_UNKNOWN;

  /* get line */
  line = parse->cur;

  /* look for EOT and blanks */
  if( line->types[0] == PARSE_EOT )     return(PARSE_STATE_EOT);
  if( !line->ntoken )                   return(istate);

  /* comments might signify EOT under certain circumstances */
  if( line->types[0] == PARSE_COMMENT ){
    if( (istate == PARSE_STATE_DATA) && parse->data1 ){
      /* the middle of a multi-line EOT looks like a comment: just return */
      if( parse->eot && parse->eot->ncur ) return(istate);
      /* else check for comment-based EOT */
      switch(parse->comeot){
      case 0:
	return(istate);
      case 1:
	if( line->tokens[0].delim == '\n' )
	  return(istate);
	else{
	  state = PARSE_STATE_EOT|PARSE_STATE_REDOLINE;
	  return(state);
	}
	break;
      case 2:
	state = PARSE_STATE_EOT|PARSE_STATE_REDOLINE;
	return(state);
	break;
      default:
	return(istate);
      }
    }
    else{
      return(istate);
    }
  }

  switch(istate){
  case PARSE_STATE_INITIAL:
    if( line->ntypes[PARSE_DASH] == line->ntoken ){
      state = PARSE_STATE_DATA;
    }
    /* yuck: fix 'justify' bug that puts spaces in blank header lines */
    else if( line->ntypes[PARSE_NULL] == line->ntoken ){
      /* make believe we just saw a comment */
      line->types[0] = PARSE_COMMENT;
      return istate;
    }
    else if( (line->ntypes[PARSE_STRING]+line->ntypes[PARSE_NULL]) == 
	     line->ntoken ){
      state = PARSE_STATE_STRING;
    }
    else{
      state = PARSE_STATE_DATA;
      parse->data1 = ParseLineDup(parse, line);
    }
    break;
  case PARSE_STATE_STRING:
    if( line->ntypes[PARSE_DASH] == line->ntoken ){
      state = PARSE_STATE_DATA;
      if( parse->needunits && parse->prev2 ){
	parse->header = ParseLineDup(parse, parse->prev2);
	parse->units = ParseLineDup(parse, parse->prev);
      }
      else{
	parse->header = ParseLineDup(parse, parse->prev);
      }
    }
    else if( (line->ntypes[PARSE_STRING]+line->ntypes[PARSE_NULL]) == 
	     line->ntoken ){
      if( parse->needunits ){
	if( parse->prev2 ){
	  state = PARSE_STATE_DATA;
	  parse->header = ParseLineDup(parse, parse->prev2);
	  parse->units = ParseLineDup(parse, parse->prev);
	}
	else{
	  state = PARSE_STATE_STRING;
	  /* if needunits is set, this might be a broken vizier unit line */
	  _ParseFixTokens(parse->prev, line);
	}
      }
      else{
	if( parse->needheader ){
	  state = PARSE_STATE_DATA;
	  parse->header = ParseLineDup(parse, parse->prev);
	  parse->data1 = ParseLineDup(parse, line);
	}
	else{
	  state = PARSE_STATE_DATA;
	  parse->data1 = ParseLineDup(parse, parse->prev);
	}
      }
    }
    else{
      state = PARSE_STATE_DATA;
      if( parse->needunits && parse->prev2 ){
	parse->header = ParseLineDup(parse, parse->prev2);
	parse->units = ParseLineDup(parse, parse->prev);
      }
      else{
	parse->header = ParseLineDup(parse, parse->prev);
      }
      parse->data1 = ParseLineDup(parse, line);
    }
    break;
  case PARSE_STATE_DATA:
    /* all dashes means that we missed an EOT somewhere */
    if( line->ntypes[PARSE_DASH] == line->ntoken ){
      state = PARSE_STATE_BADMATCH;
    }
    /* all tokens are string might mean lazy EOT */
    else if( (line->ntypes[PARSE_STRING] == line->ntoken) && parse->lazyeot ){
      /* all tokens are strings and we have to look for a "lazy eot".
	 we look for a mismatch in the number of tokens or in the number 
	 of string/null tokens between this line and the first data line */
      if( parse->data1 && 
	  ((parse->data1->ntoken != line->ntoken) ||
	   ((parse->data1->ntypes[PARSE_STRING]+parse->data1->ntypes[PARSE_NULL]) != line->ntoken)) ){
#if PARSE_LOOSELY
	state = _ParseLineState(parse, PARSE_STATE_INITIAL, NULL);
	state |= PARSE_STATE_EOT|PARSE_STATE_NEXTLINE;
#else
	state = PARSE_STATE_BADTYPE;
#endif
      }
      else{
	state = PARSE_STATE_DATA;
	/* 8/22: I added this line to support tables containing only ascii
	   columns. But is there a reason why it was not here before??? */
	if( !parse->data1 ) parse->data1 = ParseLineDup(parse, line);
      }
    }
    else{
      state = PARSE_STATE_DATA;
      if( !parse->data1 ) parse->data1 = ParseLineDup(parse, line);
    }
    break;
  case PARSE_STATE_BADMATCH:
    state = PARSE_STATE_BADMATCH;
    break;
  case PARSE_STATE_BADMAX:
    state = PARSE_STATE_BADMAX;
    break;
  case PARSE_STATE_UNKNOWN:
    state = PARSE_STATE_UNKNOWN;
    break;
  default:
    state = PARSE_STATE_UNKNOWN;
    break;
  }
  return state;
}

#ifdef ANSI_FUNC
static int
_ParseLineFree(ParsedLine line)
#else
static int _ParseLineFree(line)
     ParsedLine line;
#endif
{
  int i;

  /* sanity check */
  if( !line ) return 0;

  /* free token strings */
  for(i=0; i< line->ntoken; i++){
    if( line->tokens[i].sval ) xfree(line->tokens[i].sval);
  }
  /* free line strings */
  if( line->types  ) xfree(line->types);
  if( line->tokens ) xfree(line->tokens);
  xfree(line);

  return 1;
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

#ifdef ANSI_FUNC
int 
ParseWord(int *delims, int *comtab, int nullvalues, int whitespace,
      char *lbuf, void *token, int tmax, int *lptr, int *lastd)
#else
int ParseWord(delims, comtab, nullvalues, whitespace,
		 lbuf, token, tmax, lptr, lastd)
     int *delims;
     int *comtab;
     int nullvalues;
     int whitespace;
     char *lbuf;
     void *token;
     int tmax;
     int *lptr;
     int *lastd;
#endif
{
  int ip;
  int i;
  int tlen;
  int tcomtab[PARSE_TABLE_SIZE];
  char quotes;
  char *tbuf=NULL;

  /* null out the output string, if passed in */
  if( tmax )
    *(char *)token = '\0';

  /* reset last delimiter */
  *lastd ='\0';

  /* look for comtab */
  if( !comtab ){
    memset(tcomtab, 0, PARSE_TABLE_SIZE*sizeof(int));
    comtab = tcomtab;
  }

  /* a more convenient pointer */
  ip = *lptr;

  /* if no buf, or we are at the end, just return */
  if( !lbuf || !lbuf[ip] ){
    *lastd = '\0';
    return(0);
  }

  /* comment at beginning of line, just return */
  if( (ip == 0) && comtab[(int)lbuf[ip]] ){
    *lastd = lbuf[ip];
    ip++;
    return(-2);
  }

  /* allocate token space if necessary */
  if( !tmax ){
    tlen = SZ_LINE;
    tbuf = xcalloc(tlen+1, sizeof(char));
  }
  else{
    tbuf = (char *)token;
    tlen = tmax;
  }

  /* skip over starting consecutive delims, if not processing null values  */
  if( !nullvalues ){
    while( delims[(int)lbuf[ip]] ){
      if( lbuf[ip] == '\0' ){
	*lptr = ip;
	return(0);
      }
      else
	ip++;
    }
  }

  /* grab up to next delim or comment */
  for(i=0; lbuf[ip] && !delims[(int)lbuf[ip]] && !comtab[(int)lbuf[ip]]; ip++){
    /*first  check for an explicit quote */
    if( lbuf[ip] == '"' ){
      quotes = '"';
      *lastd = '"';
    }
    else if( lbuf[ip] == '\'' ){
      quotes = '\'';
      *lastd = '\'';
    }
    else{
      quotes = '\0';
    }
    /* process quoted string as a single token */
    if( quotes  != '\0' ){
      /* bump past quote */
      ip++;
      /* grab up to next quote -- but skip escaped quotes */
      for(; lbuf[ip] != '\0'; ip++){
	if( (lbuf[ip] == quotes) && ((ip==0) || lbuf[ip-1] != '\\') ){
	  break;
	}
	else{
	  if( (tlen >= 0) && (i >= tlen) ){
	    if( tmax ){
	      break;
	    }
	    else{
	      tlen += SZ_LINE;
	      tbuf = xrealloc(tbuf, tlen);
	    }
	  }
	  tbuf[i++] = lbuf[ip];
	}
      }
    }
    /* single non-quoted token */
    else{
      if( (tlen >= 0) && (i >= tlen) ){
	if( tmax ){
	  break;
	}
	else{
	  tlen += SZ_LINE;
	  tbuf = xrealloc(tbuf, tlen);
	}
      }
      tbuf[i++] = lbuf[ip];
      /* reset lastd to erase any trace of a quoted delim */
      *lastd = '\0';
    }
  }
  /* save this delimiter (unless we ended with a quoted string) */
  if( !*lastd ) *lastd = lbuf[ip];
  /* bump past delimiter (but not null terminator) */
  if( lbuf[ip] ) ip++;

  /* realloc if necessary */
  if( !tmax ){
    tbuf = xrealloc(tbuf, i+1);
    *(char **)token = tbuf;
  }
  /* check size one more time */
  if( i >= tlen )
    i = tlen-1;
  /* null terminate */
  tbuf[i] = '\0';

  /* remove surrounding white space, if necessary */
  if( !whitespace && (strlen(tbuf)>1) )
    nowhite(tbuf, tbuf);

  /* got something */
  *lptr = ip;
  /* make allowance for nullvalues, if necessary */
  if( nullvalues && !i && *lastd ) i = -1;
  return(i);
}

#ifdef ANSI_FUNC
Parse
ParseNew(char *delims, char *comchars, char *eot, char *mode)
#else
Parse ParseNew(delims, comchars, eot, mode)
     char *delims;
     char *comchars;
     char *eot;
     char *mode;
#endif
{
  int i;
  int ip;
  int lastd;
  int tlen=0;
  int dtable[PARSE_TABLE_SIZE];
  char c;
  char *s;
  char *t;
  char tbuf[SZ_LINE];
  char tbuf2[SZ_LINE];
  Parse parse=NULL;
  static int init=0;

  /* allocate parse struct */
  if( (parse = (Parse)xcalloc(1, sizeof(ParseRec))) == NULL )
    return(NULL);

  /* initialize globals first time through */
  if( !init ){
    _ParseInitialize();
    init++;
  }

  /* reset line counter */
  __parseline = 0;

  /* default type conversion scheme */
  parse->convert = PARSE_DEFAULT_CONVERT;

  /* set up delim table for removing enclosing chars from keyword strings */
  memset(dtable, 0, PARSE_TABLE_SIZE*sizeof(int));
  dtable[(int)'('] = 1;
  dtable[(int)')'] = 1;

  /* set the delim table */
  if( !delims ) delims = PARSE_DEFAULT_DELIMS;
  ip = 0; t = NULL;
  ParseWord(dtable, (int *)NULL, 0, 1, delims, &t, 0, &ip, &lastd);
  for(s=t; s && *s; s++){
    if( (i=(int)*s) == '\\' ){
      s++;
      if( *s == 'n' ) i = '\n';
      else if( *s == 't' ) i = '\t';
      else if( *s == 'r' ) i = '\r';
      else if( *s == 'f' ) i = '\014';
    }
    parse->delimtab[i] = 1;
  }
  if( t ) xfree(t);

  /* set the comment table */
  if( !comchars ) comchars = PARSE_DEFAULT_COMCHARS;
  ip = 0; t = NULL;
  ParseWord(dtable, (int *)NULL, 0, 1, comchars, &t, 0, &ip, &lastd);
  for(s=t; s && *s; s++){
    if( (i=(int)*s) == '\\' ){
      s++;
      if( *s == 'n' ) i = '\n';
      else if( *s == 't' ) i = '\t';
      else if( *s == 'r' ) i = '\r';
      else if( *s == 'f' ) i = '\014';
    }
    parse->comtab[i] = 1;
  }
  if( t ) xfree(t);

  /* set the eot records */
  if( eot && *eot ){
    ip = 0; t = NULL;
    ParseWord(dtable, (int *)NULL, 0, 1, eot, &t, 0, &ip, &lastd);
    parse->eot = (ParsedEOT)xcalloc(1, sizeof(ParsedEOTRec));
    parse->eot->nline = 0;
    parse->eot->maxline = 1;
    parse->eot->lines =
      (char **)xcalloc(parse->eot->maxline, sizeof(char *));
    *tbuf = '\0';
    tlen = 0;
    /* split up eot string into separate lines */
    for(s=t; s && *s; s++){
      if( (c=*s) == '\\' ){
	s++;
	if( *s == 'n' ) c = '\n';
	else if( *s == 't' ) c = '\t';
	else if( *s == 'r' ) c = '\r';
	else if( *s == 'f' ) c = '\014';
      }
      if( tlen >= SZ_LINE )
	gerror(stderr, "EOT specification is too long (%d)\n", tlen);
      tbuf[tlen++] = c;
      /* handle end of one line */
      if( c == '\n' ){
	tbuf[tlen] = '\0';
	parse->eot->lines[parse->eot->nline] = xstrdup(tbuf);
	parse->eot->nline++;
	while( parse->eot->nline >= parse->eot->maxline ){
	  parse->eot->maxline++;
	  parse->eot->lines = 
	    (char **)xrealloc(parse->eot->lines,
			      parse->eot->maxline * sizeof(char *));
	  parse->eot->lines[parse->eot->maxline-1] = NULL;
	}
	*tbuf = '\0';
	tlen = 0;
      }
    }
    /* process final line, if \n was not the last char */
    if( *tbuf ){
      tbuf[tlen++] = '\n';
      tbuf[tlen] = '\0';
      parse->eot->lines[parse->eot->nline] = xstrdup(tbuf);
      parse->eot->nline++;
    }
    if( t ) xfree(t);
  }

  /* process mode string */
  if( mode && *mode ){
    strncpy(tbuf, mode, SZ_LINE-1);
    tbuf[SZ_LINE-1] = '\0';
    if( keyword(tbuf, "nullvalues", tbuf2, SZ_LINE) )
      parse->nullvalues = istrue(tbuf2);
    if( keyword(tbuf, "whitespace", tbuf2, SZ_LINE) )
      parse->whitespace = istrue(tbuf2);
    if( keyword(tbuf, "header", tbuf2, SZ_LINE) )
      parse->needheader = istrue(tbuf2);
    if( keyword(tbuf, "units", tbuf2, SZ_LINE) )
      parse->needunits = istrue(tbuf2);
    if( keyword(tbuf, "i2f", tbuf2, SZ_LINE) )
      parse->i2f = istrue(tbuf2);
    if( keyword(tbuf, "debug", tbuf2, SZ_LINE) ){
      if( istrue(tbuf2) )
	parse->debug = 1;
      else if( isfalse(tbuf2) )
	parse->debug = 0;
      else
	parse->debug = atoi(tbuf2);
    }
    if( keyword(tbuf, "convert", tbuf2, SZ_LINE) ){
      if( istrue(tbuf2) )
	parse->convert = 1;
      else if( isfalse(tbuf2) )
	parse->convert = 0;
    }
    if( keyword(tbuf, "comeot", tbuf2, SZ_LINE) ){
      if( istrue(tbuf2) )
	parse->comeot = 1;
      else if( isfalse(tbuf2) )
	parse->comeot = 0;
      else
	parse->comeot = atoi(tbuf2);
    }
    if( keyword(tbuf, "lazyeot", tbuf2, SZ_LINE) ){
      if( istrue(tbuf2) )
	parse->lazyeot = 1;
      else if( isfalse(tbuf2) )
	parse->lazyeot = 0;
    }
  }

  /* save inputs */
  parse->delims = xstrdup(delims);
  parse->comchars = xstrdup(comchars);
  parse->mode = xstrdup(mode);

  /* start out in initial state */
  parse->state = PARSE_STATE_INITIAL;

  /* return the news */
  return parse;
}

#ifdef ANSI_FUNC
int
ParseLine(Parse parse, char *lbuf, char *UNUSED(mode))
#else
int ParseLine(parse, lbuf, mode)
     Parse parse;
     char *lbuf;
     char *mode;
#endif
{
  int i;
  int got;
  int ip;
  ParsedLine line=NULL;

  /* use default if necessary */
  if( !parse ) parse = _parse;

  /* if we have turned this parser off, just return */
  if( parse->state & PARSE_STATE_BAD ) return 0;

  /* shuffle lines as needed */
  if( parse->cur ){
    /* if cur is a comment, just clear it */
    if( PARSE_ISCOMMENT(parse->cur) ){
      _ParseLineFree(parse->cur);
    }
    /* valid line gets moved into prev */
    else{
      if( parse->prev ){
	if( parse->prev2 )  _ParseLineFree(parse->prev2);
	parse->prev2 = parse->prev;
      }
      parse->prev = parse->cur;
    }
    /* allocate space for the line */
    parse->cur = (ParsedLine)xcalloc(1, sizeof(ParsedLineRec));
  }
  else{
    /* allocate space for the line */
    parse->cur = (ParsedLine)xcalloc(1, sizeof(ParsedLineRec));
  }

  /* convenience pointer to current */
  line = parse->cur;
  
  /* increment line number */
  parse->nline++;

  /* initialize line if necessary */
  if( !line->tokens ){
    line->maxtoken = PARSE_TOKEN_INCR;
    line->tokens = (ParsedToken)xcalloc(line->maxtoken,sizeof(ParsedTokenRec));
    line->types = (char *)xcalloc((line->maxtoken+1), sizeof(char));
  }

  /* look for EOT */
  if( (got=_ParseEOT(parse, lbuf)) != 0 ){
    i = 0;
    /* end of table */
    if( got == 1 )
      line->tokens[i].type = PARSE_EOT;
    else
      /* first part of multi-line EOT -- treat as comment */
      line->tokens[i].type = PARSE_COMMENT;
    /* add type to line types */
    line->types[i] = line->tokens[i].type;
    /* increment the number of times we have seen this type */
    line->ntypes[line->tokens[i].type] += 1;
    /* bump index so we can null terminate properly */
    i++;
    goto done;
  }

  /* process each token in the line */
  for(i=0, ip=0; lbuf[ip]; i++){
    /* make sure we have enough room */
    if( i >= line->maxtoken ){
      line->maxtoken += PARSE_TOKEN_INCR;
      line->tokens = (ParsedToken)xrealloc(line->tokens,
					line->maxtoken*sizeof(ParsedTokenRec));
      line->types = (char *)xrealloc(line->types,
				     (line->maxtoken+1)*sizeof(char));
    }

    /* process next word, and break if we don't get something */
    got=ParseWord(parse->delimtab, parse->comtab,
		  parse->nullvalues, parse->whitespace,
		  lbuf, &(line->tokens[i].sval), 0, &ip,
		  &(line->tokens[i].delim));
    /* analyze result */
    if( (got == 0) 
	&& (line->tokens[i].delim != '\'') && (line->tokens[i].delim != '"') ){
      /* end of line (probably some extra spaces), so free up sval */
      if( line->tokens[i].sval ){
	xfree(line->tokens[i].sval);
	line->tokens[i].sval = NULL;
      }
      break;
    }
    else if( got < 0 ){
      if( got == -3 ) 
	/* end of table */
	line->tokens[i].type = PARSE_EOT;
      else if( got == -2)
	/* comment */
	line->tokens[i].type = PARSE_COMMENT;
      else if( got == -1 )
	/* null value */
	line->tokens[i].type = PARSE_NULL;
      /* add type to line types */
      line->types[i] = line->tokens[i].type;
      /* increment the number of times we have seen this type */
      line->ntypes[line->tokens[i].type] += 1;
      /* for all but NULL, we are done with this line */
      if( line->types[i] != PARSE_NULL ){
	/* bump index so we can null terminate properly */
	i++;
	break;
      }
    }
    else{
      /* valid token, set token type */
      if( parse->convert ){
	if( (line->tokens[i].delim == '\'') || (line->tokens[i].delim == '"') )
	  line->tokens[i].type = PARSE_STRING;
	else
	  line->tokens[i].type =
	    _gettype(line->tokens[i].sval, 
		     &line->tokens[i].dval,
		     &line->tokens[i].lval); 
      }
      else{
	line->tokens[i].type = PARSE_STRING;
      }
      /* add type to line types */
      line->types[i] = line->tokens[i].type;
      /* increment the number of times we have seen this type */
      line->ntypes[line->tokens[i].type] += 1;
    }
  }

done:
  /* null terminate and realloc to actual size */
  line->types[i] = '\0';
  line->maxtoken = i;
  line->tokens = (ParsedToken)xrealloc(line->tokens, i*sizeof(ParsedTokenRec));
  line->types = (char *)xrealloc(line->types, (i+1)*sizeof(char));
  /* finalize total number of tokens processed */
  line->ntoken = i;
  /* get parse state for this line */
  if( line->types[0] == PARSE_EOT ){
    line->state = PARSE_STATE_EOT;
  }
  else{
    line->state = _ParseLineState(parse, parse->state, NULL);
  }

  /* set line info in main record structure for access convenience */
  parse->state  = line->state;
  parse->ntoken = line->ntoken;
  parse->types  = line->types;
  parse->tokens = line->tokens;

  /* return the news */
  return parse->ntoken;
}

#ifdef ANSI_FUNC
int 
ParseAnalyze(Parse *parsers, int nparser, char *lbuf)
#else
int ParseAnalyze(parsers, nparser, lbuf)
     Parse *parsers;
     int nparser;
     char *lbuf;
#endif
{
  int i, p;
  int eot=0;
  int np=0;
  int tmax=0;
  ParsedLine line;

  /* parse the line using all parsers */
  for(p=0; p<nparser; p++){
    if( parsers[p]->state & PARSE_STATE_BAD ) continue;
    if( parsers[p]->state & PARSE_STATE_EOT ) continue;
    ParseLine(parsers[p], lbuf, NULL);
    if( parsers[p]->state & PARSE_STATE_EOT ) eot++;
    if( parsers[p]->debug > 1 ){
      fprintf(stderr, "PARSE %d: state %x %s", p, parsers[p]->state, lbuf);
    }
  }
  /* if some parsers found eot, but others did not, we can no longer use
     the latter */
  if( eot ){
    for(p=0; p<nparser; p++){
      if( parsers[p]->state & PARSE_STATE_BAD ) continue;
      if( parsers[p]->state & PARSE_STATE_EOT ) continue;
      /* this parser is in an unknown state */
      parsers[p]->state = PARSE_STATE_UNKNOWN;
      if( parsers[p]->debug > 1 ){
	fprintf(stderr, "PARSE %d: did not find EOT (state unknown)\n", p);
      }
    }
    /* exit on EOT */
    return -1;
  }

  /* analyze each parser */
  /* remove any parsers where the number of args changes */
  for(p=0; p<nparser; p++){
    /* skip bad parsers */
    if( parsers[p]->state & PARSE_STATE_BAD ) continue;
    if( parsers[p]->state & PARSE_STATE_EOT ) continue;
    line = parsers[p]->cur;
    /* skip comments */
    if( line->types[0] == PARSE_COMMENT ) continue;
    /* make sure current ntokens == previous (non-comment) ntokens */
    if(  parsers[p]->prev ){
      if( parsers[p]->prev->ntoken != parsers[p]->cur->ntoken ){
	parsers[p]->state = PARSE_STATE_BADMATCH;
	if( parsers[p]->debug ){
	  fprintf(stderr, "PARSE: badmatch %d/%d: %d %d\n",
		  p, __parseline,
		  parsers[p]->prev->ntoken, parsers[p]->cur->ntoken);
	}
      }
      /* check data type transitions */
      if( parsers[p]->prev->state & PARSE_STATE_DATA ){
	for(i=0; i<parsers[p]->ntoken; i++){
	  /* skip check if prev line did not had this many tokens */
	  if( i > parsers[p]->prev->ntoken ) break;
	  switch(_ctab[(int)parsers[p]->prev->types[i]][(int)parsers[p]->cur->types[i]]){
	  case -1:
	    /* i2f conversion explicity permitted is OK */
	    if( parsers[p]->i2f ){
	      break;
	    }
	    /* current data type same as initial data type is OK */
	    if( parsers[p]->data1 && (i <= parsers[p]->data1->ntoken) &&
		(parsers[p]->data1->types[i] == parsers[p]->cur->types[i]) ){
	      break;
	    }
	    /* bad i2f conversion: drop through to error */
	  case 0:
	    parsers[p]->state = PARSE_STATE_BADMATCH;
	    if( parsers[p]->debug ){
	      fprintf(stderr, "PARSE: badconv %d/%d/%d: %c->%c\n",
		      p, __parseline, i,
		      parsers[p]->prev->types[i], parsers[p]->cur->types[i]);
	    }
	    break;
	  case 1:
	    break;
	  }
	}
      }
    }
    if( !(parsers[p]->state & PARSE_STATE_BAD) ){
      tmax=MAX(tmax, parsers[p]->ntoken);
    }
  }

  /* remove parsers with < tmax tokens */
  if( tmax > 2) tmax = 2;
  for(p=0; p<nparser; p++){
    /* skip bad parsers */
    if( parsers[p]->state & PARSE_STATE_BAD ) continue;
    if( parsers[p]->state & PARSE_STATE_EOT ) continue;
    /* skip comments */
    if( parsers[p]->types[0] == PARSE_COMMENT ) continue;
    /* check current number of tokens */
    if( parsers[p]->ntoken > 0 ){
      if( parsers[p]->ntoken < tmax ){
	parsers[p]->state = PARSE_STATE_BADMAX;
	if( parsers[p]->debug ){
	  fprintf(stderr, "PARSE: badmax %d/%d: %d < %d\n",
		  p, __parseline, parsers[p]->ntoken, tmax);
	}
      }
    }
  }

  /* make sure we still have a parser left */
  for(np=0, p=0; p<nparser; p++){
    if( parsers[p]->state & PARSE_STATE_BAD ) continue;
    if( parsers[p]->state & PARSE_STATE_EOT ) continue;
    np++;
  }

  /* parsed another line */
  __parseline++;
  /* we either have parsers (np>0) or an error condition (np==0) */
  return np;
}

#ifdef ANSI_FUNC
ParsedLine
ParseLineDup(Parse parse, ParsedLine line)
#else
ParsedLine ParseLineDup(parse, line)
     Parse parse;
     ParsedLine line;
#endif
{
  int i;
  ParsedLine nline;

  /* sanity check */
  if( !parse ) return NULL;

  /* rellocate everything */
  if( !(nline = (ParsedLine)xcalloc(1, sizeof(ParsedLineRec))) ) return NULL;
  memcpy(nline, line, sizeof(ParsedLineRec));
  nline->tokens = (ParsedToken)xcalloc(line->maxtoken, sizeof(ParsedTokenRec));
  memcpy(nline->tokens, line->tokens, line->maxtoken*sizeof(ParsedTokenRec));
  for(i=0; i<nline->ntoken; i++){
    nline->tokens[i].sval = xstrdup(line->tokens[i].sval);
  }
  nline->types = (char *)xcalloc((line->maxtoken+1), sizeof(char));
  memcpy(nline->types, line->types, line->maxtoken+1);
  return nline;
}

#ifdef ANSI_FUNC
int
ParseReset(Parse parse, ParsedLine line, int state)
#else
  int ParseReset(parse, line, state)
     Parse parse;
     ParsedLine line;
     int state;
#endif
{
  if( !parse ) return 0;

  if( parse->prev2 ){
    _ParseLineFree(parse->prev2);
    parse->prev2 = NULL;
  }
  if( parse->prev ){
    _ParseLineFree(parse->prev);
    parse->prev = NULL;
  }
  if( parse->cur ){
    _ParseLineFree(parse->cur);
    parse->cur = NULL;
  }
  if( parse->header ){
    _ParseLineFree(parse->header);
    parse->header = NULL;
  }
  if( parse->units ){
    _ParseLineFree(parse->units);
    parse->units = NULL;
  }
  if( parse->data1 ){
    _ParseLineFree(parse->data1);
    parse->data1 = NULL;
  }
  if( parse->eot ) parse->eot->ncur = 0;
  parse->ntoken = 0;
  parse->types  = NULL;
  parse->tokens = NULL;

  /* initialize as specified */
  if( line ){
    parse->cur = line;
  }
  if( state ){
    parse->state = state;
  }
  else{
    parse->state = PARSE_STATE_INITIAL;
  }

  return 1;
}

#ifdef ANSI_FUNC
int
ParseFree(Parse parse)
#else
int ParseFree(parse)
     Parse parse;
#endif
{
  int i;

  /* sanity check */
  if( !parse ) return 0;

  /* reset frees up some space */
  ParseReset(parse, NULL, 0);

  /* free up remainder of allocated space */
  if( parse->delims )   xfree(parse->delims);
  if( parse->comchars ) xfree(parse->comchars);
  if( parse->mode )     xfree(parse->mode);
  if( parse->eot ){
    if( parse->eot->lines ){
      for(i=0; i<parse->eot->maxline; i++){
	if( parse->eot->lines[i] ) xfree(parse->eot->lines[i]);
      }
      xfree(parse->eot->lines);
    }
    xfree(parse->eot);
  }

  /* free struct */
  xfree(parse);

  /* return the news */
  return 1;
}

#ifdef ANSI_FUNC
int
ParseDataType(char *s, double *dval, longlong *ival)
#else
  int ParseFree(s, dval, ival)
     char *s;
     double *dval;
     longlong *ival;
#endif
{
  return _gettype(s, dval, ival);
}
