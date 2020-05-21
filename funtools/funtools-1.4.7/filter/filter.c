/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

/*
 *
 * filter.c -- hi-level management of filters
 *
 */

#include <filter.h>

#if HAVE_CYGWIN||HAVE_MINGW32
#include <windows.h>
#endif

extern int idx_debug;

/*
 *
 * private routines
 *
 */

/* this is needed by lex */
static Filter default_filter = NULL;

/* null filters return this special record */
static FilterRec null_filter;

#ifdef ANSI_FUNC
static void
FiltInitRegions(void)
#else
static void FiltInitRegions()
#endif
{
  initevregions();
  initimregions();
}

/*
 *
 * _FilterImageCmp -- compare routine for qsort
 *
 */
#ifdef ANSI_FUNC
static int
_FilterImageCmp(const void *s1, const void *s2)
#else
static int _FilterImageCmp(s1, s2)
     const void *s1;
     const void *s2;
#endif
{
  FilterMask f1 = (FilterMask)s1;
  FilterMask f2 = (FilterMask)s2;
  
  if( f1->y < f2->y ){
    return -1;
  }
  else if( f1->y > f2->y ){
    return 1;
  }
  else{
    if( f1->xstart < f2->xstart ){
      return -1;
    }
    else{
      return 1;
    }
  }
}

/*
 *
 * semi-public routines, used by other modules
 *
 */

/*
 *
 * public routines
 *
 */

/*
 *
 * FilterClip -- save the filter without the enclosing brackets
 *
 */
#ifdef ANSI_FUNC
char *
FilterClip(char *filter)
#else
char *FilterClip(filter)
     char *filter;
#endif
{
  char *tbuf;
  char *tptr;
  char *ofilter;
  int len;
  int i;

  /* check for the obvious */
  if( !filter || (*filter == '\0') )
    return(NULL);

  /* save filter, but without the enclosing brackets */
  tbuf = xstrdup(filter);
  nowhite(tbuf, tbuf);
  tptr = tbuf;
  if( *tbuf == '[' ){
    tptr++;
    len = strlen(tptr);
    for(i=len-1; i>=0; i-- ){
      if( tptr[i] == ']' ){
	tptr[i] = '\0';
	break;
      }
    }
  }
  if( tptr && (*tptr != '\0') ){
    /* we extend the buffer because flex has problems in filt_init_buffer 
       if its smaller than sizeof(FILE *) */
    ofilter = xcalloc(strlen(tptr)+SZ_LINE, sizeof(char));
    nowhite(tptr, ofilter);
  }
  else{
    ofilter = NULL;
  }
  xfree(tbuf);
  return(ofilter);
}

/*
 *
 * FilterDefault -- get the default filter handle for the parser
 *
 */
#ifdef ANSI_FUNC
Filter
FilterDefault(void)
#else
Filter FilterDefault()
#endif
{
  return(default_filter);
}

/*
 *
 * FilterNull -- get the null filter pointer
 *
 */
#ifdef ANSI_FUNC
Filter
FilterNull(void)
#else
Filter FilterNull()
#endif
{
  return(&null_filter);
}

/*
 *
 * FilterNum -- get a unique number associated with an open filter
 *
 */
static int filter_num=0;
#ifdef ANSI_FUNC
int
FilterNum(void)
#else
int FilterNum()
#endif
{
  filter_num++;
  return(filter_num);
}

/*
 *
 * FilterPath -- get the path through which we look for things
 *
 */
#ifdef ANSI_FUNC
char *
FilterPath(void)
#else
char *FilterPath()
#endif
{
  static char *filter_path=NULL;
  if( filter_path == NULL ){
    filter_path = (char *)getenv("PATH");
  }
  return(filter_path);
}

/*
 *
 * FilterOpen -- open a filter and initialize the symbol table
 *
 */
#ifdef ANSI_FUNC
Filter
FilterOpen(FITSHead header, char *string, char *mode)
#else
Filter FilterOpen(header, string, mode)
     FITSHead header;		/* fitsy header struct */
     char *string;		/* filter string */
     char *mode;		/* "C", "f77", "awk", etc. */
#endif
{
  int lexonly=0;
  int got=0;
  char *s, *t;
  char tbuf[SZ_LINE];
  Filter filter;
  char *filtstr;

  /* return if we have no filter */
  if( (string == NULL) || (*string == '\0') ||
	!strcmp(string, "[]") || !strcmp(string, "\n") )
    return(NOFILTER);

  /* more checks for an essentially blank string */
  for(got=0, s=string; *s; s++){
    if( (*s != ' ') && (*s != '\t') && (*s != '\n') && (*s != ';') ){
      got++;
      break;
    }
  }
  if( !got )
    return(NOFILTER);

  /* allocate a new filter record */
  if( (filter = (Filter)xcalloc(1, sizeof(FilterRec))) == NULL )
    return(NULL);

  /* this is the default filter handle for the parser */
  default_filter = filter;

  /* clean up filter */
  s = FilterClip(string);
  /* if its not a file, use string directly */
  if( *s != '@' ){
    t = xstrdup(s);
  }
  /* if it a FITS file, use string directly */
  else if( IsFits(&(s[1])) ){
    t = xstrdup(s);
  }
  /* replace ASCII file with contents, if possible */
  else if( !(t = FileContents(&(s[1]), 0, NULL)) ){
    t = xstrdup(s);
  }
  /* set the input filter string for the parser */
  filter->string = FilterClip(t);
  if( s ) xfree(s);
  if( t ) xfree(t);
  /* return if we have no filter */
  if( !filter->string || (*filter->string == '\0') ){
    return(NOFILTER);
  }

  /* save mode */
  filter->mode=xstrdup(mode);

  /* assume we will use an index */
#if HAVE_MINGW32==0
  filter->doidx = 1;
#else
  filter->doidx = 0;
#endif

  /* process the mode string */
  if( (s = xstrdup(filter->mode)) ){
    /* set global convert flag */
    if( keyword(s, "convert", tbuf, SZ_LINE) )
      filter->convert = istrue(tbuf);
    /* set the event section */
    if( keyword(s, "evsect", tbuf, SZ_LINE) )
      filter->evsect = xstrdup(tbuf);
    if( keyword(s, "lexonly", tbuf, SZ_LINE) )
      lexonly = 1;
#if HAVE_MINGW32==0
    if( keyword(s, "idx", tbuf, SZ_LINE) ){
      if( istrue(tbuf) )
	filter->doidx = 1;
      else if( isfalse(tbuf) )
	filter->doidx = -1;
    }
#endif
  }
  if( s ) xfree(s);

  /* determine which method of filter processing we will use:
     currently we support only the C method */
  filter->method = DEFAULT_FILTER_METHOD;
  *tbuf = '\0';
  if( (s=(char *)getenv("FILTER_METHOD")) ){
    strcpy(tbuf, s);
  }
  if( !*tbuf && (s=xstrdup(filter->mode)) ){
    keyword(s, "method", tbuf, SZ_LINE);
    if( s ) xfree(s);
  }
  if( *tbuf ){
    if( !strcasecmp(tbuf, "c") )
      filter->method = METHOD_C;
  }

  /* determine which type of filtering we do: event or image */
  filter->type = DEFAULT_FILTER_TYPE;
  *tbuf = '\0';
  if( (s=(char *)getenv("FILTER_TYPE")) ){
    strcpy(tbuf, s);
  }
  if( !*tbuf && (s=xstrdup(filter->mode)) ){
    keyword(s, "type", tbuf, SZ_LINE);
    if( s ) xfree(s);
  }
  if( *tbuf ){
    if( !strncasecmp(tbuf, "ev", 2) )
      filter->type = TYPE_EVENTS;
    else if( !strncasecmp(tbuf, "im", 2) )
      filter->type = TYPE_IMAGE;
  }

  /* determine which type of process execution we do */
  switch(filter->method){
  case METHOD_C:
    filter->ptype = DEFAULT_FILTER_PTYPE;
    *tbuf = '\0';
    if( (s=(char *)getenv("FILTER_PTYPE")) ){
      strcpy(tbuf, s);
    }
    if( !*tbuf && (s=xstrdup(filter->mode)) ){
      keyword(s, "ptype", tbuf, SZ_LINE);
      if( s ) xfree(s);
    }
    if( *tbuf ){
      if( *tbuf == 'p' )
	filter->ptype = PTYPE_PROCESS;
      else if( *tbuf == 'c' )
	filter->ptype = PTYPE_CONTAINED;
#ifdef USE_DL
      else if( *tbuf == 'd' )
	filter->ptype = PTYPE_DYNAMIC;
#endif
    }
    break;
  default:
    filter->ptype = PTYPE_PROCESS;
    break;
  }

  /* determine region paint mode */
  *tbuf = '\0';
  if( (s=(char *)getenv("FILTER_PAINT")) ){
    strcpy(tbuf, s);
  }
  if( !*tbuf && (s=xstrdup(filter->mode)) ){
    keyword(s, "paint", tbuf, SZ_LINE);
    if( s ) xfree(s);
  }
  if( !*tbuf )
    strcpy(tbuf, DEFAULT_PAINT_MODE);
  if( *tbuf ){
    if( istrue(tbuf) )
      filter->paint = 1;
    else
      filter->paint = 0;
  }

  /* debugging mode */
  *tbuf = '\0';
  if( (s=(char *)getenv("FILTER_DEBUG")) ){
    strcpy(tbuf, s);
  }
  if( !*tbuf && (s=xstrdup(filter->mode)) ){
    keyword(s, "debug", tbuf, SZ_LINE);
    if( s ) xfree(s);
  }
  if( *tbuf ){
    if( isdigit((int)*tbuf) )
      filter->debug = atoi(tbuf);
    else if( istrue(tbuf) )
      filter->debug = 1;
    else if( isfalse(tbuf) )
      filter->debug = 0;
  }

  /* save the fits header */
  filter->fhd = header;

  /* init the symbol table */
  if( !FilterSymbolInit(filter) )
    goto error;

  /* init parser variables */
  FiltInitParser();

  /* init regions */
  FiltInitRegions();

  /* set up to parse the input filter */
  FiltScanString(filter->string);

  /* parse filter */
  filtlex();

  /* check for errors while parsing the string */
  if( FilterParseError() )
    goto error;

  /* make sure we have something to filter */
  if( !(filtstr = (char *)_FilterString()) || !strcmp(filtstr, "()") ){
    FilterClose(filter);
    return(NOFILTER);
  }

  /* imagemask processing of images does not use the compiled process */
  if( filter->nmask && filter->masks && (filter->type == TYPE_IMAGE) )
    goto done;

  /* for event filtering, we can use indexes */
#if HAVE_MINGW32==0
  if( filter->type == TYPE_EVENTS ){
    /* run index grammar and see if we can get help from indexes */
    if( filter->doidx == 1 ){
      if( !idxinitparser(filtstr) ){
	filter->doidx = -1;
      }
      else{
	idxparse();
	idxfreeglobals();
	if( !filter->idx || (filter->idx->type == IDX_INDEF) ){
	  if( filter->idx ){
	    idxendparser();
	    filter->idx = NULL;
	  }
	  filter->doidx = -1;
	}
      }
    }
    /* if we are using an index and we are only processing indexed columns,
       we don't need to use compiled filter */
    if( FILTER_INDEX_ONLY(filter) ){
      if( idx_debug ) fprintf(stderr, "idx: skipping compiled filter\n");
      goto done;
    }
  }
#endif

  /* lexonly means we only wanted to run the lexer */
  if( lexonly )
    goto done;

  /* open the program file that we will compile from the filter */
  if( !FilterProgOpen(filter) )
    goto error;

  /* prepend the to C program as needed */
  if( !FilterProgPrepend(filter) )
    goto error;

  /* write the symbols to the appropriate program */
  if( !FilterProgWrite(filter) )
    goto error;

  /* append the program body to C program */
  if( !FilterProgAppend(filter) )
    goto error;

  /* that is all we need to output */
  if( !FilterProgClose(filter) )
    goto error;

  /* compile the filter program */
  if( !FilterProgCompile(filter) )
    goto error;

  if( filter->debug >= 2 ) goto done;

  switch(filter->method){
  case METHOD_C:
    switch(filter->ptype){
    case PTYPE_PROCESS:
    case PTYPE_CONTAINED:
      switch(filter->pipeos){
      case PIPE_WIN32:
#if HAVE_CYGWIN||HAVE_MINGW32
	if( !WinProcessOpen(filter->prog, 
	     &(filter->ihandle), &(filter->ohandle), &(filter->process)) )
	  goto error;
#else
	gerror(stderr, "internal error: no WinProcess without Windows");
	goto error;
#endif
	break;
      default:
	if( !ProcessOpen(filter->prog, 
	     &(filter->ichan), &(filter->ochan), &(filter->pid)) )
	  goto error;
	break;
      }
      break;
#ifdef USE_DL
    case PTYPE_DYNAMIC:
      if( !(filter->dl=DLOpen(filter->prog)) )
	goto error;
      break;
#endif
    default:
	goto error;
    }
    break;
  default:
    goto error;
  }

  /* return the good news */
done:
  return(filter);

error:
  FilterClose(filter);
  return(NULL);

}

/*
 *
 * FilterEvents -- filter events by sending them to a co-process,
 * which returns a char array of good event flags
 *
 */
#ifdef ANSI_FUNC
int
FilterEvents(Filter filter, char *ebuf, int esize, int n, int *vbuf)
#else
int FilterEvents(filter, ebuf, esize, n, vbuf)
     Filter filter;
     char *ebuf;
     int esize;
     int n;
     int *vbuf;
#endif
{
  int i;
  int flag;
  int get=0, got=0;
  int bytes;
  char *eptr;
  char *etop;
  char *obuf;
  char *optr;
#ifdef USE_DL
  FilterTableCall evrtn;
#endif
  FilterSymbols sp;

  /* make sure we have a valid filter and a valid table */
  if( !filter || (filter == NOFILTER) || !filter->fhd || !filter->fhd->table )
    return(0);

  /* handle fits image mask specially */
  if( filter->nmask && filter->masks && !filter->evsect ){
    gerror(stderr, "event filtering cannot use image masks\n");
    return(0);
  }

  /* if the index is enough, just return */
  if( FILTER_INDEX_ONLY(filter) )
    return 0;

  /* we only send the necessary parts of each event record */
  if( (obuf = (char *)xcalloc(n*filter->evsize, sizeof(char))) == NULL )
    return(0);
  optr = obuf;

  /* extract (and convert) the necessary columns of the event */
  for(eptr=ebuf, etop=ebuf+(n*esize); eptr<etop; eptr += esize){
    /* loop through the symbol table and process columns */
    for(i=0; i<filter->nsyms; i++){
      sp = &(filter->symtab[i]);
      /* skip accidentally empty ones */
      if( (sp->name == NULL) || (*sp->name == '\0') )
	continue;
      /* process this type of symbol */
      switch(sp->type){
      case SYM_COL:
	if( filter->fhd->table->col[sp->idx].type == 'X' ){
	  ColumnLoad(eptr+filter->fhd->table->col[sp->idx].offset,
		     filter->fhd->table->col[sp->idx].size,
		     (filter->fhd->table->col[sp->idx].n+7)/8,
		     filter->convert, optr+sp->offset);
	}
	else{
	  ColumnLoad(eptr+filter->fhd->table->col[sp->idx].offset,
		     filter->fhd->table->col[sp->idx].size,
		     filter->fhd->table->col[sp->idx].n,
		     filter->convert, optr+sp->offset);
	}
	break;
      default:
	break;
      }
    }
    /* bump to next output record */
    optr += filter->evsize;
  }

  switch(filter->ptype){
  case PTYPE_PROCESS:
  case PTYPE_CONTAINED:
    switch(filter->pipeos){
    case PIPE_WIN32:
#if HAVE_CYGWIN||HAVE_MINGW32
      /* write events to the filter process */
      bytes = n*filter->evsize;
      if((got=WinProcessWrite(filter->ohandle, obuf, bytes)) != bytes){
	gerror(stderr, 
	       "event filter failed: wanted to write %d bytes but wrote %d\n",
	       bytes, got);
	flag = -1;
      }
      /* read back result flags */
      get = n * sizeof(unsigned int);
      WinProcessRead(filter->ihandle, vbuf, get, &got);
#else
      gerror(stderr, "internal error: no WinProcess without Windows");
      flag = -1;
#endif
      break;
    default:
      /* write events to the filter process */
      bytes = n*filter->evsize;
      if((got=ProcessWrite(filter->ochan, obuf, bytes)) != bytes){
	gerror(stderr, 
	       "event filter failed: wanted to write %d bytes but wrote %d\n",
	       bytes, got);
	flag = -1;
      }
      /* read back result flags */
      get = n * sizeof(unsigned int);
      ProcessRead(filter->ichan, vbuf, get, &got);
      break;
    }
    /* we need one int back for each event we wrote */
    if( get == got ){
      flag = 1;
    }
    else{
      gerror(stderr, 
	     "event filter failed: wanted to read %d bytes but got %d\n",
	     get, got);
      flag = -1;
    }
    break;
#ifdef USE_DL
  case PTYPE_DYNAMIC:
    if( (evrtn=(FilterTableCall)DLSym(filter->dl, filter->pname)) ){
      filter->g = (*evrtn)(filter->g, obuf, n, filter->evsize, vbuf);
      flag = 1;
    }
    else{
      flag = -1;
    }
    break;
#endif
  default:
    flag = -1;
    break;
  }

  /* free up malloc'ed space */
  if( obuf ) xfree(obuf);
  /* return the news */
  return flag;
}	

/*
 *
 * FilterImage -- filter image by sending sections to a co-process,
 * which returns segments of valid image data
 *
 */
#ifdef ANSI_FUNC
int
FilterImage(Filter filter, int x0, int x1, int y0, int y1, int block,
	    FilterMask *masks, int *nreg)
#else
int FilterImage(filter, x0, x1, y0, y1, block, masks, nreg)
     Filter filter;
     int x0, x1, y0, y1, block;
     FilterMask *masks;
     int *nreg;
#endif
{
  int i, j;
  int got;
  int fsize;
  int mblock;
  char tbuf[SZ_LINE];
  FilterMask xmasks;
#ifdef USE_DL
  FilterImageCall imrtn;
#endif

  /* make sure we have a valid filter */
  if( !filter || (filter == NOFILTER) )
    return(0);

  /* handle fits image mask specially */
  if( filter->nmask && filter->masks ){
    mblock = (int)(((double)((x1 - x0 + 1)/block)/(double)ft_naxis(filter->maskhd, 1)) + 0.5);
    if( mblock < 1 ){
      gerror(stderr, "image mask cannot be larger than blocked image section");
      return(0);
    }
    /* copy mask records into return buffer */
    fsize = filter->nmask * sizeof(FilterMaskRec) * mblock;
    xmasks = xmalloc(fsize);
    /* copy all masks and translate x,y positions as needed */
    for(got=0, i=0; i<filter->nmask; i++){
      xmasks[got].region = filter->masks[i].region;
      xmasks[got].y = (filter->masks[i].y - 1.0) * mblock + 1.0;
      xmasks[got].xstart = (filter->masks[i].xstart - 1.0) * mblock + 1.0;
      xmasks[got].xstop = (filter->masks[i].xstop - 1.0) * mblock + 1.0;
      /* replicate the segment up to the block factor */
      for(j=1; j<mblock; j++){
	xmasks[got+j].region = xmasks[got].region;
	xmasks[got+j].y = xmasks[got].y+j;
	xmasks[got+j].xstart = xmasks[got].xstart;
	xmasks[got+j].xstop = xmasks[got].xstop;
      }
      got += mblock;
    }
    /* sort by y and x */
    qsort(xmasks, got, sizeof(FilterMaskRec), _FilterImageCmp);
    /* mask records */
    if( masks ) *masks = xmasks;
    /* number of regions */
    if( nreg ) *nreg = filter->nmaskreg;
    return(got);
  }

  /* if the index is enough, just return */
  if( FILTER_INDEX_ONLY(filter) )
    return(0);

  switch(filter->ptype){
  case PTYPE_PROCESS:
  case PTYPE_CONTAINED:
    switch(filter->pipeos){
    case PIPE_WIN32:
#if HAVE_CYGWIN||HAVE_MINGW32
      /* write command to process */
      snprintf(tbuf, SZ_LINE-1, "%d %d %d %d %d\n", x0, x1, y0, y1, block);
      WinProcessWrite(filter->ohandle, tbuf, (int)strlen(tbuf));
      /* read back mask records */
      *masks = WinProcessRead(filter->ihandle, NULL, -1, &got);
      got /=  sizeof(FilterMaskRec);
#else
      gerror(stderr, "internal error: no WinProcess without Windows");
      return(-1);
#endif
      break;
    default:
      /* write command to process */
      snprintf(tbuf, SZ_LINE-1, "%d %d %d %d %d\n", x0, x1, y0, y1, block);
      ProcessWrite(filter->ochan, tbuf, (int)strlen(tbuf));
      /* read back mask records */
      *masks = ProcessRead(filter->ichan, NULL, -1, &got);
      got /=  sizeof(FilterMaskRec);
      break;
    }
    break;
#ifdef USE_DL
  case PTYPE_DYNAMIC:
    if( (imrtn=(FilterImageCall)DLSym(filter->dl, filter->pname)) ){
      *masks = (*imrtn)(x0, x1, y0, y1, block, &got);
    }
    else
      return(-1);
    break;
#endif
  default:
    return(-1);
  }

  /* how many separate regions? */
  if( nreg ) *nreg = FilterRegionCount(TOK_IREG);

  /* return the news */
  return(got);
}

/*
 *
 * FilterClose -- close a filter and free up memory
 *
 */
#ifdef ANSI_FUNC
int FilterClose(Filter filter)
#else
int FilterClose(filter)
     Filter filter;
#endif
{
  int status=0;
  int i, j;
  Scan scan, tscan;

  if( !filter || (filter == NOFILTER) )
    return(0);

  /* this is the default filter handle */
  default_filter = filter;

  switch(filter->ptype){
  case PTYPE_PROCESS:
  case PTYPE_CONTAINED:
    /* close the filter process */
    switch(filter->pipeos){
    case PIPE_WIN32:
#if HAVE_CYGWIN||HAVE_MINGW32
      if( filter->process ) WinProcessClose(filter->process, &status);
#else
      gerror(stderr, "internal error: no WinProcess without Windows");
#endif
      break;
    default:
      if( filter->pid > 0 ) ProcessClose(filter->pid, &status);
      break;
    }
    /* delete program */
    if( filter->prog ) unlink(filter->prog);
    break;
#ifdef USE_DL
  case PTYPE_DYNAMIC:
    if( filter->dl )
      DLClose(filter->dl);
    break;
#endif
  default:
    break;
  }

  /* call any method-specific cleanup routines */
  FilterProgClose(filter);
  FilterProgEnd(filter);

  /* free alloc'ed memory */
  FilterSymbolFree(filter);
  if( filter->pname )   xfree(filter->pname);
  if( filter->mode )    xfree(filter->mode);
  if( filter->masks )   xfree(filter->masks);
  if( filter->cc )      xfree(filter->cc);
  if( filter->cflags ) xfree(filter->cflags);
  if( filter->objs )    xfree(filter->objs);
  if( filter->extra )   xfree(filter->extra);
  if( filter->shflags ) xfree(filter->shflags);
  if( filter->code )    xfree(filter->code);
  if( filter->prog )    xfree(filter->prog);
  if( filter->string )  xfree(filter->string);
  if( filter->xbin )    xfree(filter->xbin);
  if( filter->ybin )    xfree(filter->ybin);
  if( filter->symtab )  xfree(filter->symtab);
  if( filter->evsect )  xfree(filter->evsect);
  if( filter->maskhd )   ft_headfree(filter->maskhd, 1);
  /* free region information */
  if( filter->g ){
    for(i=0; i<filter->g->maxshapes; i++){
      if( filter->g->shapes[i].scanlist ){
	for(j=0; j<=filter->g->y1; j++){
	  if( filter->g->shapes[i].scanlist[j] ){
	    for(scan=filter->g->shapes[i].scanlist[j]; scan; ){
	      tscan = scan->next;
	      xfree(scan);
	      scan = tscan;
	    }
	  }
	}
	xfree(filter->g->shapes[i].scanlist);
      }
      if( filter->g->shapes[i].pts ) xfree(filter->g->shapes[i].pts);
      if( filter->g->shapes[i].xv ) xfree(filter->g->shapes[i].xv);
    }
    if( filter->g->shapes ) xfree(filter->g->shapes);
    if( filter->g->ybuf )   xfree(filter->g->ybuf);
    if( filter->g->x0s )     xfree(filter->g->x0s);
    if( filter->g->x1s )     xfree(filter->g->x1s);
    if( filter->g->masks )  xfree(filter->g->masks);
    if( filter->g )         xfree(filter->g);
  }
  /* free index information */
#if HAVE_MINGW32==0
  idxendparser();
#endif
  /* free main struct */
  xfree(filter);
  /* return the status from closing the sub-process */
  return(status);
}


/*
 *
 * FilterConcats -- concat n filters, removing enclosing brackets as necessary
 *
 */
#ifdef ANSI_FUNC
char *
FilterConcats(char **filters, int n)
#else
char *FilterConcats(filters, n)
  char **filters;
  int n;
#endif
{
  char *ofilter;
  char *optr;
  char *clip;
  int i;
  int len;

  /* need at least 1 string */
  if( n == 0 )
    return(NULL);

  /* get max length of output filter */
  for(len=0, i=0; i<n; i++){
    if( filters[i] && (*filters[i] != '\0') ){
      len += strlen(filters[i]);
    }
  }

  /* need something to return */
  if( len == 0 )
    return(NULL);

  /* allocate space for the output filter */
  ofilter = (char *)xcalloc(len+1, sizeof(char));
  optr = ofilter;

  /* take each input filter */
  for(i=0; i<n; i++){
    if( filters[i] && (*filters[i] != '\0') ){
      /* clip off the brackets */
      clip = FilterClip(filters[i]);
      /* copy the clipped filter to the output */
      if( clip && (*clip != '\0') ){
	strcpy(optr, clip);
	xfree(clip);
	while( *optr )
	  optr++;
      }
    }
  }

  /* this is the concat'ed filter */
  return(ofilter);
}

/*
 *
 * FilterConcat -- concat 2 filters, with an optional operation in between
 *
 */
#ifdef ANSI_FUNC
char *
FilterConcat(char *f1, char *f2, char *op)
#else
char *FilterConcat(f1, f2, op)
     char *f1;
     char *f2;
     char *op;
#endif
{
  char *nf1, *nf2, *nop;
  char *result;
  char *filters[4];
  int n=0;

  /* clip the filters and look for null extensions */
  nf1 = FilterClip(f1);
  nf2 = FilterClip(f2);
  nop = FilterClip(op);

  if( nf1 && (*nf1 != '\0') ){
    filters[n++] = nf1;
  }
  if( nop && (*nop != '\0') &&
      nf1 && (*nf1 != '\0') &&
      nf2 && (*nf2 != '\0') ){
    filters[n++] = nop;
  }
  if( nf2 && (*nf2 != '\0') ){
    filters[n++] = nf2;
  }

  /* get the concated filters */
  result = FilterConcats(filters, n);

  /* free up space */
  if( nf1 )
    xfree(nf1);
  if( nf2 )
    xfree(nf2);
  if( nop )
    xfree(nop);

  /* return result */
  return(result);
}

/*
 *
 * FilterString -- return the filter string used for this filter
 *
 */
#ifdef ANSI_FUNC
char *
FilterString(Filter filter)
#else
char *FilterString(filter)
     Filter filter;
#endif
{
  if( !filter || (filter == NOFILTER) )
    return NULL;
  else
    return filter->string;
}
