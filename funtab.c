/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

#include <ctype.h>
#include <funtoolsP.h>

/*
 *
 * private routines
 *
 */

#ifdef ANSI_FUNC
static void *
swap(void *obuf, void *ibuf, int width, int type)
#else
static void *swap(obuf, ibuf, width, type)
     void *obuf;
     void *ibuf;
     int width;
     int type;
#endif
{
  switch ( type ) {
  case 'A':
  case 'B':
  case 'X':
  case 'L':
    memcpy(obuf, ibuf, width);
    break;
  case 'I':
  case 'U':
    swap2(obuf, ibuf, width);
    break;
  case 'J':
  case 'V':
  case 'E':
    swap4(obuf, ibuf, width);
    break;
  case 'K':
  case 'D':
    swap8(obuf, ibuf, width);
    break;
  default:
    memcpy(obuf, ibuf, width);
    break;
  }
  return obuf;
}

#ifdef ANSI_FUNC
static void
_FunTableSave(Fun fun, char *rows, char *ebuf, int nrow)
#else
static void _FunTableSave(fun, rows, ebuf, nrow)
     Fun fun;
     char *rows;
     char *ebuf;
     int nrow;
#endif
{
  SaveBuf new, cur;
  int n;

  /* allocate new data space */
  new = (SaveBuf)xcalloc(1, sizeof(SaveBufRec));
  /* this is how many rows we are saving */
  new->nrow = nrow;
  /* see if we can store in memory or if we have to shunt to a file */
  n = nrow * (fun->rowsize + fun->rawsize);
  if( (fun->head->lmem < 0) || ((fun->head->lmem-n)>0) ){
    new->type = 1;
    /* save alloc'ed raw buf null out buf so funtools does not free it */
    new->rbuf = fun->rawbuf;
    fun->rawbuf = NULL;
    /* if user passed in a row buffer, we save a copy */
    if( rows ){
      new->ebuf = xmalloc(nrow*fun->rawsize);
      memcpy(new->ebuf, ebuf, new->nrow*fun->rowsize);
    }
    /* otherwise just save funtools-allocated row buffer */
    else{
      new->ebuf  = ebuf;
    }
    /* decrease amount of memory we have left for saved data */
    if( fun->head->lmem > 0 )
      fun->head->lmem -= n;
  }
  else{
    new->type = 2;
    /* write user rows */
    fwrite(ebuf, fun->rowsize, nrow, fun->lefp);
    /* free up user row buffer unless user allocated it */
    if( !rows && ebuf ) xfree(ebuf);
    /* write raw rows */
    fwrite(fun->rawbuf, fun->rawsize, nrow, fun->lrfp);
    /* free up raw buffer */
    if( fun->rawbuf ) xfree(fun->rawbuf);
    fun->rawbuf = NULL;
  }
  /* add to end of list */
  if( fun->save == NULL ){
    fun->save = new;
  }
  else{
    for(cur=fun->save; cur->next!=NULL; cur=cur->next)
      ;
    cur->next = new;
  }
}

#ifdef ANSI_FUNC
static char *
_FunTableRestore(Fun fun, char *rows, int *nrow)
#else
static char *_FunTableRestore(fun, rows, nrow)
     Fun fun;
     char *rows;
     int *nrow;
#endif
{
  SaveBuf cur;
  char *ebuf=NULL;
  unsigned char *rbuf;

  /* start of pessimistically */
  *nrow = 0;
  /* make sure we have something to restore */
  if( !fun->save )
    return NULL;
  /* bump list to next */
  cur = fun->save;
  fun->save = cur->next;
  /* fill in the blanks */
  *nrow = cur->nrow;
  switch(cur->type){
  case 1:
    /* we might have to fill the passed row buffer */
    if( rows ){
      /* copy into user-supplied buffer */
      memcpy(rows, cur->ebuf, cur->nrow*fun->rowsize);
      /* we will return user-supplied buffer */
      ebuf = rows;
      /* free up temp buffer */
      if(cur->ebuf ) xfree(cur->ebuf);
    }
    /* otherwise, we just pass back the saved row buffer */
    else{
      ebuf = cur->ebuf;
    }
    /* move raw rows buf back into funtools struct */
    if( fun->rawbuf ) xfree(fun->rawbuf);
    fun->rawbuf = cur->rbuf;
    break;
  case 2:
    /* we might have to fill the passed row buffer */
    if( rows )
      ebuf = rows;
    else
      ebuf = xmalloc(fun->rowsize*cur->nrow);
    /* read into user-supplied buffer */
    fread(ebuf, fun->rowsize, cur->nrow, fun->lefp);
    /* allocate space for the raw buffer */
    rbuf = xmalloc(fun->rawsize*cur->nrow);
    /* read into raw buffer */
    fread(rbuf, fun->rawsize, cur->nrow, fun->lrfp);
    /* move raw rows buf back into funtools struct */
    if( fun->rawbuf ) xfree(fun->rawbuf);
    fun->rawbuf = rbuf;
    break;
  }
  /* this is the last file we "read" in the list */
  if( fun->head )
    fun->head->current = fun;
  else
    fun->current = fun;
  if( cur ) xfree(cur);
  /* return results */
  return ebuf;
}

#ifdef ANSI_FUNC
static void
_FunBlank(Fun fun, int type, char *buf)
#else
static void _FunBlank(fun, type, buf)
     Fun fun;
     int type;
     char *buf;
#endif
{
  unsigned char bval;
  short sval;
  int ival;
  longlong lval;
  float fval;
  double dval;

  switch(type){
  case 'B':
    bval = fun->blank;
    memcpy(buf, &bval, sizeof(char));
    break;
  case 'I':
  case 'U':
    sval = fun->blank;
    memcpy(buf, &sval, sizeof(short));
    break;
  case 'J':
  case 'V':
    ival = fun->blank;
    memcpy(buf, &ival, sizeof(int));
    break;
  case 'K':
#if HAVE_LONG_LONG == 0
    gerror(stderr,
	   "long long support was not built into this program\n");
    exit(1);
#endif
    lval = fun->blank;
    memcpy(buf, &lval, sizeof(longlong));
    break;
  case 'E':
    fval = getnanf();
    memcpy(buf, &fval, sizeof(float));
    break;
  case 'D':
    dval = getnand();
    memcpy(buf, &dval, sizeof(double));
    break;
  default:
    memset(buf, 0, ft_sizeof(type));
    break;
  }
}
  
#ifdef ANSI_FUNC
static void *
_FunTextRead(Fun fun, char *buf, size_t UNUSED(size), size_t get,  size_t *got)
#else
static void *_FunTextRead(fun, buf, size, get,  got)
     Fun fun;
     char *buf;
     size_t size;
     size_t get;
     size_t *got;
#endif
{
  int p, t;
  int len;
  int dodata1;
  int xtype;
  int ntoken;
  int nline=0;
  char lbuf[SZ_LINE];
  char *bp;
  Parse parser=NULL;
  ParsedLine line;

  /* sanity checks
     NB: the order of ascii columns should be identical to the fitsy columns
     (since the latter was generated by the former) */
  if( !fun->header || !fun->header->table || !fun->header->table->col )
    return 0;

  /* if we have not read any bytes, use data1 */
  dodata1 = (fun->bytes==0);

  /* convert ASCII columns to binary columns */
  bp = buf;
  while( (size_t)nline < get ){
    /* first line should be in data1 */
    if( dodata1 ){
      /* look for the parser with data1 that has the most tokens */
      for(parser=NULL, ntoken=0, p=0; p<fun->nparser; p++){
	if( !(fun->parsers[p]->state & PARSE_STATE_BAD) && 
	    fun->parsers[p]->data1 ){
	  if( fun->parsers[p]->ntoken > ntoken ){
	    parser = fun->parsers[p];
	    ntoken = parser->ntoken;
	  }
	}
      }
      /* use the parser with the max number of tokens */
      if( parser ){
	line = parser->data1;
	if( PARSE_ISCOMMENT(line) ) continue;
	for(t=0; t<line->ntoken; t++){
	  switch(line->tokens[t].type){
	  case PARSE_FLOAT:
	  case PARSE_HEXINT:
	  case PARSE_INTEGER:
	    /* handle string type specially */
	    if( fun->header->table->col[t].type == 'A' ){
	      len = strlen(line->tokens[t].sval);
	      if( len >= fun->header->table->col[t].width){
		memmove(bp, line->tokens[t].sval, 
			fun->header->table->col[t].width);
	      }
	      else{
		memmove(bp, line->tokens[t].sval, len);
		memset(bp+len, 0, fun->header->table->col[t].width-len);
	      }
	    }
	    /* handle bit-field processing specially */
	    else if( fun->header->table->col[t].type == 'X' ){
	      switch(fun->header->table->col[t].width){
	      case 0:
	      case 1:
		xtype = 'B'; break;
	      case 2:
		xtype = 'U'; break;
	      case 4:
		xtype = 'V'; break;
	      default:
		xtype = 'B'; break;
	      }
	      if( (line->tokens[t].type == PARSE_INTEGER) ||
		  (line->tokens[t].type == PARSE_HEXINT)   )
		ft_acht2(xtype, bp, 'K', &line->tokens[t].lval, 1, 0, 0);
	      else
		ft_acht2(xtype, bp, 'D', &line->tokens[t].dval, 1, 0, 0);
	    }
	    else{
	      if( (line->tokens[t].type == PARSE_INTEGER) ||
		  (line->tokens[t].type == PARSE_HEXINT)   )
		ft_acht2(fun->header->table->col[t].type, bp, 
			 'K', &line->tokens[t].lval, 1, 0, 0);
	      else
		ft_acht2(fun->header->table->col[t].type, bp, 
			 'D', &line->tokens[t].dval, 1, 0, 0);
	    }
	    bp += fun->header->table->col[t].width;
	    break;
	  case PARSE_NULL:
	    _FunBlank(fun, fun->header->table->col[t].type, bp);
	    bp += fun->header->table->col[t].width;
	    break;
	  case PARSE_STRING:
	    len = strlen(line->tokens[t].sval);
	    if( len >= fun->header->table->col[t].width){
	      memmove(bp, line->tokens[t].sval, 
		      fun->header->table->col[t].width);
	    }
	    else{
	      memmove(bp, line->tokens[t].sval, len);
	      memset(bp+len, 0, fun->header->table->col[t].width-len);
	    }
	    bp += fun->header->table->col[t].width;
	    break;
	  default:
	    break;
	  }
	}
	/* processed data1 line */
	nline++;
      }
      /* went through all parsers looking for data1 */
      dodata1 = 0;
    }
    /* read and process the next line */
    else{
      /* get next line or be done */
      if( !ggets(fun->gio, lbuf, SZ_LINE) )
	break;
      /* analyze line and make sure one parser succeeded (even if its EOT) */
      if( !ParseAnalyze(fun->parsers, fun->nparser, lbuf) ){
	gerror(stderr, "text parser failure analyzing line: %s\n", lbuf);
	break;
      }
      /* look for valid parser with the most tokens */
      for(parser=NULL, ntoken=0, parser=NULL, p=0; p<fun->nparser; p++){
	if( fun->parsers[p]->state & PARSE_STATE_BAD) 
	  continue;
	else if( fun->parsers[p]->ntoken > ntoken ){
	  parser = fun->parsers[p];
	  ntoken = parser->ntoken;
	}
      }
      /* stop if no valid parser or valid parser found EOT */
      if( !parser ) break;
      if( parser->state & PARSE_STATE_EOT) break;
      /* use selected parser to fill up row buffer */
      line = parser->cur;
      if( PARSE_ISCOMMENT(line) ) continue;
      for(t=0; t<line->ntoken; t++){
	switch(line->tokens[t].type){
	case PARSE_FLOAT:
	case PARSE_HEXINT:
	case PARSE_INTEGER:
	  /* handle string type specially */
	  if( fun->header->table->col[t].type == 'A' ){
	    len = strlen(line->tokens[t].sval);
	    if( len >= fun->header->table->col[t].width){
	      memmove(bp, line->tokens[t].sval, 
		      fun->header->table->col[t].width);
	    }
	    else{
	      memmove(bp, line->tokens[t].sval, len);
	      memset(bp+len, 0, fun->header->table->col[t].width-len);
	    }
	  }
	  /* handle bit-field processing specially */
	  else if( fun->header->table->col[t].type == 'X' ){
	    switch(fun->header->table->col[t].width){
	    case 0:
	    case 1:
	      xtype = 'B'; break;
	    case 2:
	      xtype = 'U'; break;
	    case 4:
	      xtype = 'V'; break;
	    default:
	      xtype = 'B'; break;
	    }
	    if( (line->tokens[t].type == PARSE_INTEGER) ||
		(line->tokens[t].type == PARSE_HEXINT)   )
	      ft_acht2(xtype, bp, 'K', &line->tokens[t].lval, 1, 0, 0);
	    else
	      ft_acht2(xtype, bp, 'D', &line->tokens[t].dval, 1, 0, 0);
	  }
	  else{
	    if( (line->tokens[t].type == PARSE_INTEGER) ||
		(line->tokens[t].type == PARSE_HEXINT)   )
	      ft_acht2(fun->header->table->col[t].type, bp, 
		       'K', &line->tokens[t].lval, 1, 0, 0);
	    else
	      ft_acht2(fun->header->table->col[t].type, bp, 
		       'D', &line->tokens[t].dval, 1, 0, 0);
	  }
	  bp += fun->header->table->col[t].width;
	  break;
	case PARSE_STRING:
	  /* handle string type specially */
	  if( fun->header->table->col[t].type == 'A' ){
	    len = strlen(line->tokens[t].sval);
	    if( len >= fun->header->table->col[t].width){
	      memmove(bp, line->tokens[t].sval, 
		      fun->header->table->col[t].width);
	    }
	    else{
	      memmove(bp, line->tokens[t].sval, len);
	      memset(bp+len, 0, fun->header->table->col[t].width-len);
	    }
	  }
	  bp += fun->header->table->col[t].width;
	  break;
	case PARSE_NULL:
	  _FunBlank(fun, fun->header->table->col[t].type, bp);
	  bp += fun->header->table->col[t].width;
	  break;
	default:
	  break;
	}
      }
      /* processed another line */
      nline++;
    }
  }
  *got = nline;
  return buf;
}

/*
 *
 * semi-public routines
 *
 */

#ifdef ANSI_FUNC
void *
_FunRead(Fun fun, char *buf, size_t size, size_t get,  size_t *got)
#else
void *_FunRead(fun, buf, size, get,  got)
     Fun fun;
     char *buf;
     size_t size;
     size_t get;
     size_t *got;
#endif
{
  /* initialize */
  *got = 0;
  
  /* sanity check */
  if( !fun || !buf ) return NULL;

  /* text parsers are handled one line at a time */
  if( fun->parsers ){
    return _FunTextRead(fun, buf, size, get,  got);
  }
  /* binary reads */
  else{
    /* ordinary binary read */
    if( (fun->filt == NOFILTER) || (fun->filt->doidx != 1) ){
      return _gread(fun->gio, (void *)buf, size, get, got);
    }
    /* indexed read */
    else{
      return idxread(fun->filt->idx, fun->gio, fun->header,
		     (void *)buf, size, get, got, &fun->dofilt);
    }
  }
}

/*
 *
 * _FunFixNaxis2 -- change the value of an NAXIS2 card
 * used to correct a copied binary table after we filter
 *
 */
#ifdef ANSI_FUNC
int
_FunFixNaxis2(Fun fun)
#else
int _FunFixNaxis2(fun)
     Fun fun;
#endif
{
  if( (fun->ops & OP_WRHEAD) && (fun->headpos >=0) ){
    return FunParamPuti(fun,
			"NAXIS", 2, fun->io, "Number of entries in table", 0);
  }
  else{
    return(0);
  }
}

/*
 *
 * _FunTablePutHeader -- writes binary table header to file
 * used by FunTablePut and sometimes FunFlush (if no Put was done)
 *
 */
#ifdef ANSI_FUNC
int
_FunTablePutHeader(Fun fun)
#else
int _FunTablePutHeader(fun)
	Fun fun;
#endif
{
  /* write table header, if necessary */
  if( !fun->ops ){
    /* if we have no columns yet, try to get some from the assoc. input file */
    if( !fun->ncol ){
      /* if we have a header to copy from, that is */
      if( fun->ifun && fun->ifun->header && fun->ifun->header->table ){
	FunColumnSelect(fun, 0, "copy=select", NULL);
	/* grab the copied merge value  */
	fun->merge = fun->ifun->merge;
	/* and the organization value */
	fun->org = fun->ifun->org;
      }
      /* else we lose */
      else
	return 0;
    }

    /* write the dummy primary header, if necessary */
    _FunPrimaryExtension(fun);

    /* generate the fitsy header for specified columns */
    _FunColumnHeader(fun, fun->cols, fun->ncol);

    /* save file position for later updating */
    fun->headpos = gtell(fun->gio);

    /* write the binary table header */
    ft_headwrite(fun->gio, fun->header);

    /* we just wrote the header */
    fun->ops |= OP_WRHEAD;
  }
  return 1;
}

/*
 *
 * _FunTableRowGet -- get rows from a table
 *
*/
#ifdef ANSI_FUNC
void *
_FunTableRowGet(Fun fun, void *rows, int maxrow, char *plist, int *nrow)
#else
void *_FunTableRowGet(fun, rows, maxrow, plist, nrow)
     Fun fun;
     void *rows;
     int maxrow;
     char *plist;
     int *nrow;
#endif
{
  int i, j, k, l;		/* counters */
  int tival;			/* temp int value */
  int dofilt;			/* true if we can filter */
  int skip;			/* bytes to skip to end of extension */
  int *rbuf;			/* valid row flags */
  int rowbufsize;		/* alloc'ed output buffer size */
  int maxbufsize;		/* max alloc'ed output buffer size */
  int smax;			/* max elements in sbuf */
  int pad=sizeof(double);	/* double boundary pad bytes */
  size_t get;			/* number of rows to read */
  size_t got;			/* number of rows read */
  double *sbuf=NULL;		/* temp buffer for scaling */
  unsigned char *vheap;		/* vheap space for output vector allocation */
  unsigned char *rawbase=NULL;	/* base pointer into rawbuf */
  unsigned char *rawptr;	/* current pointer into rawbuf */
  unsigned char *rowbase=NULL;	/* base pointer to output row buf */
  unsigned char *rowptr;	/* current pointer into output row buf */
  char *rawoff;			/* temp pointer to input */
  char *rowoff;			/* temp pointer to output */
  char *pbuf;			/* temp plist buffer */
  char tbuf[SZ_LINE];		/* ever-present temp buffer */
  static char paint[SZ_LINE];	/* paint mode (like zhtools) */
  static char debug[SZ_LINE];
  static int rconvert;

  /* init result */
  *nrow = 0;
  rbuf = NULL;
  
  /* just in case ... */
  if( !_FunValid(fun) ){
    gerror(stderr, "invalid funtools handle\n");
    return NULL;
  }

  /* if we delayed the open before, we have to open now */
  if( !fun->header && strchr(fun->mode, 'r') )
    _FunFITSOpen(fun, fun->fname, "r");

  /* make sure something good happened */
  if( !fun->header || !fun->header->table ){
    gerror(stderr, "not a binary table\n");
    return NULL;
  }

  /* check plist values: convert, mask ... */
  if( fun->iconvert < 0 ){
    rconvert = 0;
    fun->transparent = 0;
    pbuf = xstrdup(plist);
    if( _FunKeyword(pbuf, "convert", NULL, tbuf, SZ_LINE) ){
      fun->iconvert = istrue(tbuf);
      if( fun->iconvert != is_bigendian() ){
	rconvert = 1;
      }
    }
    else{
      fun->iconvert = (fun->endian != is_bigendian());
    }
    if( _FunKeyword(pbuf, "mask", "FUN_MASK", tbuf, SZ_LINE) ){
      if( !strcasecmp(tbuf, "transparent") )
	fun->transparent = 1;
    }
    if( _FunKeyword(pbuf, "paint", "FILTER_PAINT", tbuf, SZ_LINE) ){
      strncpy(paint, tbuf, SZ_LINE);
    }
    else{
      *paint = '\0';
    }
    if( _FunKeyword(pbuf, "debug", "FILTER_DEBUG", tbuf, SZ_LINE) ){
      strncpy(debug, tbuf, SZ_LINE);
    }
    else{
      *debug = '\0';
    }
    if( pbuf ) xfree(pbuf);
  }

  /* check for no more row to read in this file */
  if( !fun->left ){
    /* if possible, set up to read next file in list */
    if((fun->head) && (fun->head->ltype != LIST_NONE) && fun->head->current){
      fun->head->current = fun->next;
      /* if there is a next file, set it up */
      if(  fun->head->current ){
	/* rewind save file pointers */
	rewind(fun->head->current->lefp);
	rewind(fun->head->current->lrfp);
	/* and if we read no rows but we have set up a next file,
	   try again immediately */
	return FunTableRowGet(fun->head, rows, maxrow, plist, nrow);
      }
    }
    return NULL;
  }

  /* open the filter, if its not already been done */
  if( !fun->filt ){
    if( fun->filter && *fun->filter ){
      /* create the mode string */
      if( fun->endian != is_bigendian() )
	strncpy(tbuf, "convert=true", SZ_LINE-1);
      else
	strncpy(tbuf, "convert=false", SZ_LINE-1);
      /* add the binning key */
      if( fun->bincols ){
	strncat(tbuf, ",", SZ_LINE-1);
	strncat(tbuf, fun->bincols, SZ_LINE-1);
      }
      /* add the index flag */
      if( fun->idx == 1 ){
	strncat(tbuf, ",idx=true", SZ_LINE-1);
      }
      else if( fun->idx == -1 ){
	strncat(tbuf, ",idx=false", SZ_LINE-1);
      }
      /* add paint mode */
      if( *paint ){
	strncat(tbuf, ",", SZ_LINE-1);
	strncat(tbuf, "paint=", SZ_LINE-1);
	strncat(tbuf, paint, SZ_LINE-1);
      }
      /* add debug flag */
      if( *debug ){
	strcat(tbuf, ",");
	strcat(tbuf, "debug=");
	strcat(tbuf, debug);
      }
      fun->filt = FilterOpen(fun->header, fun->filter, tbuf);
      if( fun->filt == NULL ){
	gerror(stderr, "can't open filter\n");
	return NULL;
      }
      else if( fun->filt == NOFILTER ){
	fun->dofilt = 0;
      }
    }
    else{
      fun->filt = NOFILTER;
      fun->dofilt = 0;
    }
  }

  /* sanity check (after setup, to allow setup without actually reading) */
  if( maxrow <=0 ) return NULL;

  /* allocate output buffer, if necessary */
  if( rows ){
    rowbase = rows;
  }
  else{
    maxbufsize = fun->maxbufsize;
    rowbufsize = fun->rowsize + pad;
    /* we might have to allocate space for pointers as well */
    for(j=0; j<fun->ncol; j++){
      if( fun->cols[j]->mode & COL_PTR ){
	if( fun->cols[j]->poff && (fun->cols[j]->mode & COL_READ) ){
	  gerror(stderr,
	  "FunTableRowGet: [poff] not yet supported for allocated pointers\n");
	}
	rowbufsize += (fun->cols[j]->width + pad);
      }
    }
    /* ensure that we don't try to allocate too large a buffer, or we might
       swap our brains out and then die anyway */
    if( maxrow * rowbufsize > maxbufsize ){
      if( rowbufsize > maxbufsize )
	maxrow = 1;
      else
	maxrow = maxbufsize / rowbufsize;
    }
    if( maxrow <= 0 ) maxrow = 1;
    /* don't call xcalloc (which has internal error checking) but instead
       call system calloc and handle failure by halving the row number */
    while( !(rowbase = (unsigned char *)malloc(maxrow*rowbufsize+pad)) ){
      maxrow /= 2;
      if( maxrow <= 0 ){
	gerror(stderr, "can't allocate row buffer\n");
	return NULL;
      }
    }
    /* clear buffer */
    memset(rowbase, 0, maxrow*rowbufsize+pad);
    /* the vheap for pointers starts after row buffer */
    vheap = rowbase + (maxrow * fun->rowsize);
    /* make sure its on a double boundary */
    vheap += (pad - ((long)vheap % pad));
    /* set up the allocated pointers in each record */
    for(j=0; j<fun->ncol; j++){
      if( fun->cols[j]->mode & COL_PTR ){
	for(i=0; i<maxrow; i++){
	  rowptr = rowbase + (i*fun->rowsize);
	  *((unsigned char **)(rowptr+fun->cols[j]->offset)) = vheap;
	  vheap += fun->cols[j]->width + (pad - (fun->cols[j]->width % pad));
	  if( vheap >= (rowbase + (maxrow*rowbufsize+pad)) ){
	    gerror(stderr, "internal funtools error: vheap too small\n");
	    return NULL;
	  }
	}
      }
    }
  }

  /* free previously saved buffer of raw input data */
  if( fun->rawbuf ) xfree(fun->rawbuf);
  /* allocate space for a pile of row records */
  if( fun->left > 0 )
    fun->rawbufsize = MIN(maxrow, fun->left);
  /* this is the case where we read til EOF */
  else
    fun->rawbufsize = maxrow;
  if( !(fun->rawbuf=(unsigned char *)xmalloc(fun->rawsize*fun->rawbufsize)) ||
      !(rbuf = (int *)xmalloc(sizeof(int)*fun->rawbufsize)) ){
    gerror(stderr, "can't allocate row buffer\n");
    return NULL;
  }

  /* allocate a scaling buffer for the largest input or output column */
  smax = -1;
  for(j=0; j<fun->ncol; j++){
    smax = MAX(fun->cols[j]->n, smax);
  }
  if( smax >0 )
    sbuf = (double *)malloc(smax*sizeof(double));

  /* seed output pointer to start of output buffer */
  rowptr = rowbase;

  /* while there are still rows to read and we have not read the max ... */ 
  while( (fun->left != 0) && (*nrow < maxrow) ){
    /* figure out how many to read this time */
    if( fun->left > 0 )
      get = MIN(maxrow - *nrow, fun->left);
    /* read to EOF */
    else
      get = maxrow - *nrow;
    /* read in a pile of rows AFTER the currently saved raw rows */
    rawbase = fun->rawbuf + (*nrow * fun->rawsize);
    _FunRead(fun, (void *)rawbase, fun->rawsize, get, &got);
    /* if we got what we asked for ... */
    if( got == get ){
      /* if we are reading a set number of rows ... */
      if( fun->left > 0 ){
	/* subtract the number we just got */
	fun->left -= got;
	/* just in case! */
	if( fun->left < 0 )
	  fun->left = 0;
      }
    }
    /* didn't get what we asked for ... */
    else{
      /* if we are reading a set number of rows ... */
      if( fun->left > 0 ){
	/* using an index => already filtering, so fewer rows are acceptable */
	if( (fun->filt == NOFILTER) || (fun->filt->doidx != 1) ){
	  /* otherwise its unexpected */
	  gerror(stderr, "unexpected EOF reading rows\n");
	}
	/* ensure we stop after this iteration */
	fun->left = 0;
      }
      /* if we are reading til EOF, we just got there */
      else{
	fun->left = 0;
      }
    }

    /* filter these rows through the co-process */
    if( fun->dofilt ){
      dofilt = FilterEvents(fun->filt, (void *)rawbase, fun->rawsize, (int)got,
			    (void *)rbuf);
      /* look for error on filter call */
      if( dofilt < 0 ){
	gerror(stderr, "event filter failed\n");
      }
    }
    else{
      dofilt = 0;
    }

    /* process each row in this batch */
    for(rawptr=rawbase, i=0; (size_t)i<got; i++, rawptr += fun->rawsize){
      /* if its not a valid row, skip it */
      if( dofilt && !fun->transparent && !rbuf[i] ){
	continue;
      }
      /* get specified columns, convert to type, and store in output */
      for(j=0; j<fun->ncol; j++){
	/* if this column is not active, or is not to be read, or if its
	   to be taken from the input data, skip it */
	if(!(fun->cols[j]->mode & COL_ACTIVE)	||
	   !(fun->cols[j]->mode & COL_READ)  	||
	    (fun->cols[j]->mode & COL_IBUF)  	)
	  continue;
	/* this is the (input) fitsy column number */
	k = fun->cols[j]->tcol;
	if( fun->cols[j]->mode & COL_PTR )
	  rowoff = *((char **)(((char *)rowptr)+fun->cols[j]->offset));
	else
	  rowoff = (char *)rowptr+fun->cols[j]->offset;
	rowoff += fun->cols[j]->poff;
	/* for soa, rowbuf (i.e. rowbase) is indexed by nrows */
	if( fun->org == FUN_ORG_SOA )
	  rowoff += *nrow * fun->cols[j]->width;
	/* process special values, or data values */
	switch(k){
        /* unknown means mode is "rw" but we don't actually have the col
	   in the input data -- do nothing */
	case COL_UNKNOWN_ID:
	  break;
        /* $region: the special region id */
	case COL_REGION_ID:
	case COL_NUM_ID:
	  if( k == COL_REGION_ID ){
	    /* we either use the return value or -1 (no region filtering) */
	    if( dofilt )
	      tival = rbuf[i];
	    else
	      tival = COL_REGION_ID;
	  }
	  if( k == COL_NUM_ID ){
	    tival = fun->io + i + 1;
	  }
	  /* common code */
	  /* if source and dest type diff, we must do full type convert */
	  if( fun->cols[j]->type != 'J' ){
	    ft_acht2(fun->cols[j]->type, rowoff, 'J', &tival, 1, rconvert, 0);
	  }
	  /* for same types, we might have to swap bytes */
	  else if( rconvert ){
	    swap(rowoff, &tival, ft_sizeof('J'), 'J');
	  }
	  /* otherwise its an easy copy */
	  else{
	    memcpy(rowoff, &tival, ft_sizeof('J'));
	  }
	  break;
        /* data column */
	default:
	  /* this is the offset into the input record */
	  rawoff = (char *)rawptr + fun->header->table->col[k].offset;
	  /* if source and dest type diff or we are scaling the column,
	     we must do full type convert */
	  if( (fun->cols[j]->type != fun->header->table->col[k].type)	||
	       fun->header->table->col[k].scaled			){
	    /* handle bit-field processing specially */
	    if( fun->header->table->col[k].type == 'X' ){
	      int xtype;
	      switch(fun->header->table->col[k].width/fun->cols[j]->n){
	      case 0:
	      case 1:
		xtype = 'B'; break;
	      case 2:
		xtype = 'U'; break;
	      case 4:
		xtype = 'V'; break;
	      default:
		xtype = 'B'; break;
	      }
	      ft_acht2(fun->cols[j]->type, rowoff,
		       xtype, rawoff,
		       fun->cols[j]->n, fun->iconvert, 0);
	    }
	    /* handle scaled input data */
	    else if( fun->header->table->col[k].scaled ){
	      /* convert raw to double */
	      ft_acht2('D', sbuf,
		       fun->header->table->col[k].type, rawoff,
		       fun->cols[j]->n, fun->iconvert, 0);
	      /* calculate scaled value */
	      for(l=0; l<fun->cols[j]->n; l++){
		sbuf[l] = sbuf[l] * fun->header->table->col[k].scale +
		          fun->header->table->col[k].zero;
	      }
	      /* convert double to type */
	      ft_acht2(fun->cols[j]->type, rowoff,
		       'D', sbuf, fun->cols[j]->n, 0, 0);
	      /* mark column as having been scaled */
	      fun->cols[j]->scaled |= FUN_SCALE_APPLIED;
	    }
	    /* handle straight-forward change of type */
	    else{
	      ft_acht2(fun->cols[j]->type, rowoff,
		       fun->header->table->col[k].type, rawoff,
		       fun->cols[j]->n, fun->iconvert, 0);
	    }
	  }
	  /* for same types, we might have to swap bytes */
	  else if( fun->iconvert ){
	    if( fun->header->table->col[k].width >= fun->cols[j]->width ){
	      swap(rowoff, rawoff, fun->cols[j]->width, fun->cols[j]->type);
	    }
	    else{
	      swap(rowoff, rawoff, fun->header->table->col[k].width,
		   fun->cols[j]->type);
	      memset(rowoff+fun->header->table->col[k].width, 0,
		     fun->cols[j]->width-fun->header->table->col[k].width);
	    }
	  }
	  /* otherwise its an easy copy */
	  else{
	    if( fun->header->table->col[k].width >= fun->cols[j]->width ){
	      memcpy(rowoff, rawoff, fun->cols[j]->width);
	    }
	    else{
	      memcpy(rowoff, rawoff, fun->header->table->col[k].width);
	      memset(rowoff+fun->header->table->col[k].width, 0,
		     fun->cols[j]->width-fun->header->table->col[k].width);
	    }
	  }
	  break;
	}
      }
      /* save the input data in rawbuf */
      if( (fun->rawbuf + (*nrow * fun->rawsize)) != rawptr)
	memcpy((fun->rawbuf + (*nrow * fun->rawsize)), rawptr, fun->rawsize);
      /* got another row */
      *nrow += 1;
      /* bump to next output pointer */
      if( fun->org == FUN_ORG_AOS )
	rowptr += fun->rowsize;
    }
    /* update how many input rows we have read */
    fun->io += got;
    fun->bytes += (got*fun->rawsize);
  }

  /* free up space */
  if( rbuf ) xfree(rbuf);
  if( sbuf ) xfree(sbuf); 

  /* we just read a table */
  fun->ops |= OP_RDTABLE;
  /* this is the last file we read in the list */
  if( fun->head )
    fun->head->current = fun;
  else
    fun->current = fun;

  /* if we have no more rows left, clean up */
  if( !fun->left ){
    /* skip to end of extension */
    if( fun->bytes ){
      /* skip any unread rows */
      skip = (fun->rawsize*fun->total) - fun->bytes;
      gskip(fun->gio, (off_t)skip);
      fun->bytes += skip;
      /* skip padding */
      if( (skip = FT_BLOCK - (fun->bytes % FT_BLOCK)) == FT_BLOCK )
	skip = 0;
      gskip(fun->gio, (off_t)skip);
      /* reset io flag */
      /* fun->io = 0; */
    }
    /* close filter if done with the filter process */
    if( fun->filt && (fun->filt != NOFILTER) ){
      FilterClose(fun->filt);
      fun->filt = NULL;
    }
  }

  /* return buffer */
  return rowbase;
}

/*
 *
 * public routines
 *
 */

/*
 *
 * FunTableRowGet -- get rows from a table
 *
*/
#ifdef ANSI_FUNC
void *
FunTableRowGet(Fun fun, void *rows, int maxrow, char *plist, int *nrow)
#else
void *FunTableRowGet(fun, rows, maxrow, plist, nrow)
     Fun fun;
     void *rows;
     int maxrow;
     char *plist;
     int *nrow;
#endif
{
  int got;
  fd_set readfds;		/* read fds for select() */
  char *obuf;
  Fun cur, wrap, mark=NULL;

  /* just in case ... */
  *nrow = 0;
  if( !_FunValid(fun) ){
    gerror(stderr, "invalid data handle\n");
    return NULL;
  }
  
  /* process list type */
  switch(fun->ltype){
  case LIST_NONE:
    return _FunTableRowGet(fun, rows, maxrow, plist, nrow);
  case LIST_FILEORDER:
    return _FunTableRowGet(fun->current, rows, maxrow, plist, nrow);
  case LIST_SORT:
  case LIST_UNSORT:
  case LIST_TRYSORT:
again:
    /* if we are sorting -- look for first valid file before we read */
    if( fun->ltype == LIST_SORT ){
      for(mark=fun->head; mark; mark=mark->next ){
	if( mark->left )
	  break;
      }
      /* if we have no valid files left, we are done */
      if( !mark ){
	return NULL;
      }
      /* if we are sorting and we have current buffers, use one of them */
      else if( mark->save ){
	return _FunTableRestore(mark, rows, nrow);
      }
    }
    /* if we have no more active fds to process, select() for more */
    FD_ZERO(&readfds);
    for(got=0, cur=fun; cur; cur=cur->next){
      if( (cur->ifd >=0) && cur->left ){
	FD_SET(cur->ifd, &readfds);
	got++;
      }
    }
    /* if we have no more files, we are done */
    if( got == 0 ) return NULL;
    /* find out who is ready to be read */
    got = select(FD_SETSIZE, &readfds, NULL, NULL, NULL);
    if( got >0 ){
      /* get current starting place in list */
      if( fun->current && fun->current->next )
	cur = fun->current->next;
      else
	cur = fun;
      wrap = cur;
      while( !FD_ISSET(cur->ifd, &readfds) ){
	/* next file in list (with wrap around) */
	if( cur->next )
	  cur = cur->next;
	else
	  cur = fun;
	/* should not happen -- we went through the whole list unsucessfully */
	if( cur == wrap ){
	  return NULL;
	}
      }
      /* read rows */
      obuf = _FunTableRowGet(cur, rows, maxrow, plist, nrow);
      /* return if not sorting, or if we are and this file is current */
      if( fun->ltype != LIST_SORT ){
	return obuf;
      }
      else{
	/* if the currently accessed file is the one we want, return it */
	if( fun->current == mark ){
	  return obuf;
	}
	/* else we must save these rows for when this file is current */
	else{
	  /* store these rows */
	  _FunTableSave(fun->current, rows, obuf, *nrow);
	  /* reset, go back for current */
	  *nrow = 0;
	  goto again;
	}
      }
    }
    else
      return NULL;
  default:
    return NULL;
  }
}

/*
 *
 * FunTableRowPut -- put rows to a table
 *
*/
#ifdef ANSI_FUNC
int
FunTableRowPut(Fun fun, void *rows, int nrow, int idx, char *plist)
#else
int FunTableRowPut(fun, rows, nrow, idx, plist)
     Fun fun;
     void *rows;
     int nrow;
     int idx;
     char *plist;
#endif
{
  int i;
  int ieoff1, ieoff2;
  int to, from;
  int width;
  int convert;
  int shortcut;
  char *rawptr;
  char *oebuf;
  char *rowptr;
  char *pbuf;
  char tbuf[SZ_LINE];
  Fun ifun;

  /* gotta have it */
  if( !_FunValid(fun) )
    return 0;

  /* this extension is a table */
  fun->type = FUN_TABLE;

  /* temp switch this fun's ifun to be the last fun we read in the ifun list */
  /* we need to do this to pick up the correct raw rawbuf */
  if( (ifun = fun->ifun) ){
    if( ifun->current )
      ifun = ifun->current;
  }
  /* no reference fun handle -- rely on the output fun */
  else
    ifun = fun;

  /* we have to convert from native if the data is the big-endian */
  if( fun->oconvert < 0 ){
    pbuf = xstrdup(plist);
    if( _FunKeyword(pbuf, "convert", NULL, tbuf, SZ_LINE) )
      fun->oconvert = istrue(tbuf);
    else
      fun->oconvert = !is_bigendian();
    if( pbuf ) xfree(pbuf);
  }

  /* initialize for writing */
  if( !_FunTablePutHeader(fun) )
    return(0);

  /* exit if we are not actually writing any events */
  if( !nrow )
    return(0);

  /* allocate temp buffer for rows */
  shortcut = 1;
  for(width=0, i=0; i<fun->ncol; i++){
    if( (fun->cols[i]->mode  & COL_ACTIVE)     &&
	(fun->cols[i]->mode  & COL_WRITE)      &&
        !(fun->cols[i]->mode & COL_REPLACEME) ){
      /* if we are writing anything from the user buffer, no shortcuts */
      if( !(fun->cols[i]->mode & COL_IBUF) || (i != fun->cols[i]->from) )
	shortcut = 0;
      /* add to the size of the output row record */
      width += fun->cols[i]->width;
    }
    /* if we are not writing anything from the input buffer, no shortcuts */
    else if( (fun->cols[i]->mode & COL_IBUF) )
      shortcut = 0;
  }

  /* make sure we have something to write */
  if( !width ){
    gerror(stderr, "No columns defined for FunTableRowPut()\n");
  }

  /* if we are just writing the input rows, we can do it much faster */
  if( shortcut ){
    oebuf = (char *)ifun->rawbuf + (idx * ifun->rawsize); 
  }
  /* normally, we have to move all columns to a temp buffer and then write */
  else{
    /* write rows (might have to convert to big_endian) */
    oebuf = xmalloc(width*nrow);
    rowptr = oebuf;
    ieoff1 = idx * ifun->rawsize;
    ieoff2 = 0;
    /* process rows */
    for(i=0; i<nrow; i++){
      /* process columns in a row */
      for(to=0; to<fun->ncol; to++){
	/* skip if necessary */
	if( !(fun->cols[to]->mode & COL_ACTIVE)    ||
	    !(fun->cols[to]->mode & COL_WRITE)     ||
	     (fun->cols[to]->mode & COL_REPLACEME) )
	  continue;
	/* if from value is -1, that means "use value from this column" */
	if( fun->cols[to]->from <0 )
	  from = to;
	/* otherwise we use the value from some other column */
	else
	  from = fun->cols[to]->from;
	/* raw input data */
	if( (fun->cols[from]->mode & COL_IBUF) ){
	  rawptr = (char *)ifun->rawbuf+ieoff1;
	  convert = !ifun->endian;
	}
	/* user data */
	else{
	  rawptr = (char *)rows+ieoff2;
	  convert = fun->oconvert;
	}
	if( fun->cols[from]->mode & COL_PTR ){
	  rawptr = *((char **)(((char *)rawptr)+fun->cols[from]->offset));
	}
	else{
	  rawptr = rawptr + fun->cols[from]->offset;
	}
	rawptr += fun->cols[from]->poff;
	/* for soa, rowbuf (i.e. rowbase) is indexed by nrows */
	if( fun->org == FUN_ORG_SOA )
	  rawptr += i * fun->cols[from]->width;
	/* if source and dest type are different, we do full type convert */
	if( fun->cols[to]->type != fun->cols[from]->type ){
	  /* but try to handle writing int to bit-field specially */
	  if( fun->cols[to]->type == 'X' ){
	    int xtype;
	    switch(fun->cols[to]->width/fun->cols[from]->n){
	    case 0:
	    case 1:
	      xtype = 'B'; break;
	    case 2:
	      xtype = 'U'; break;
	    case 4:
	      xtype = 'V'; break;
	    default:
	      xtype = 'B'; break;
	    }
	    ft_acht2(xtype, rowptr,
		     fun->cols[from]->type, rawptr,
		     fun->cols[from]->n, convert, 1);
	  }
	  else{
	    ft_acht2(fun->cols[to]->type, rowptr, 
		     fun->cols[from]->type, rawptr,
		     fun->cols[from]->n, convert, 1);
	  }
	}
	/* for same types, we might have to swap bytes */
	else if( convert ){
	  swap(rowptr, rawptr, fun->cols[to]->width, fun->cols[to]->type);
	}
	/* otherwise its an easy copy */
	else{
	  memcpy(rowptr, rawptr, fun->cols[to]->width);
	}
	/* bump output pointer */
	rowptr += fun->cols[to]->width;
      }
      /* bump raw and user row pointers */
      ieoff1 += ifun->rawsize;
      if( fun->org == FUN_ORG_AOS )
	ieoff2 += fun->rowsize;
    }
  }

  /* write rows */
  if( gwrite(fun->gio, oebuf, width, nrow) != (size_t)nrow ){
    gerror(stderr, "unexpected error writing rows\n");
    return 0;
  }

  /* update bookkeeping */
  fun->io += nrow;
  fun->bytes += (width*nrow);

  /* free up allocated space */
  if( !shortcut && oebuf ) xfree(oebuf);

  /* we just wrote a table */
  fun->ops |= OP_WRTABLE;

  /* return the number of rows output */
  return nrow;
}

/*
 *
 * FunTableRowSeek -- seek to a specified rows in a table
 *
*/
#ifdef ANSI_FUNC
off_t
FunTableRowSeek(Fun fun, int nrow, char *UNUSED(plist))
#else
off_t FunTableRowSeek(fun, nrow, plist)
     Fun fun;
     int nrow;
     char *plist;
#endif
{
  off_t ipos, opos;

  /* gotta have it */
  if( !_FunValid(fun) )
    return (off_t)-1;
  /* get new position */
  ipos = fun->datastart + (fun->rawsize*(nrow-1));
  /* try to set position */
  opos = gseek(fun->gio, ipos, 0);
  /* if successful, reset the byte positon */
  if( opos >= 0 ){
    fun->bytes = opos;
    fun->io = nrow-1;
    fun->left = fun->total - fun->io;
    opos = ((opos - fun->datastart) / fun->rawsize) + 1;
    /* a negative record number only means we started from an odd place */
    if( opos < 0 ) opos = 0;
  }
  /* return results */
  return opos;
}
