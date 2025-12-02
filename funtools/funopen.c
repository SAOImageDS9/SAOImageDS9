/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

#include <funtoolsP.h>

/*
 *
 * private routines
 *
 */

/*
 *
 * _FunRawEvOpen -- open a raw events file, 
 *	      set up binning and filtering parameters
 *
 */
#ifdef ANSI_FUNC
static Fun
_FunRawEvOpen(char *fname, char *tail, char *mode, char *eventdef)
#else
static Fun _FunRawEvOpen(fname, tail, mode, eventdef)
     char *fname;
     char *tail;
     char *mode;
     char *eventdef;
#endif
{
  Fun fun;
  char tbuf[SZ_LINE];

  /* sanity check */
  if( !eventdef || !*eventdef )
    return NULL;

  /* allocate a fun record */
  if( !(fun = _FunNew()) ) return NULL;

  /* see if this file name is a view */
  FunView(fun, fname, mode, tbuf, SZ_LINE);

  /* try to open the file  */
  if( !(fun->gio=gopen(tbuf, mode)) ) goto error;

  /* save filename and mode */
  fun->fname = xstrdup(tbuf);
  fun->mode = xstrdup(mode);

  /* create a fake table header from the event description */
  if( !(fun->header = _FunRawEvHeader(fun, tbuf, tail, eventdef)) )
    goto error;
  
  /* its a valid event file */
  fun->type = FUN_EVENTS;
  /* no blanks for events */
  fun->doblank = 0;

  /* look for indication of whether these data are bigendian */
  if( _FunKeyword(tail, "endian", "EVENTS_ENDIAN", tbuf, SZ_LINE) )
    fun->endian = ((*tbuf == 'b') || (*tbuf == 'B'));
  else if( _FunKeyword(tail, "bigendian", "EVENTS_BIGENDIAN", tbuf, SZ_LINE) )
    fun->endian = istrue(tbuf);
  /* otherwise assume we have native format */
  else
    fun->endian = is_bigendian();

  /* look for indication of bitpix */
  if( _FunKeyword(tail, "bitpix", "EVENTS_BITPIX", tbuf, SZ_LINE) )
    fun->bitpix = atoi(tbuf);
  /* else assume a safe value */
  else
    fun->bitpix = 32;
  if( _FunKeyword(tail, "skip", "EVENTS_SKIP", tbuf, SZ_LINE) )
    fun->skip = atoi(tbuf);

  /* determine whether we are only processing specific rows */
  _FunRowNum(fun, tail, NULL);
  /* get the key for binning */
  _FunTableBinCols(fun, tail, "EVENTS_BINCOLS");
  /* get the key for the value column for binning */
  _FunTableValCol(fun, tail, "EVENTS_VCOL");
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

  /* common code */
  if( !_FunOpenCommon(fun) ) goto error;

  /* return completed struct */
  return fun;

error:
  _FunFree(fun, 1);
  return NULL;
}

/*
 *
 * _FunArrayOpen -- open a raw array file, 
 *	      set up binning and filtering parameters
 *
 */
#ifdef ANSI_FUNC
static Fun
_FunArrayOpen(char *fname, char *tail, char *mode, char *arraydef)
#else
static Fun _FunArrayOpen(fname, tail, mode, arraydef)
     char *fname;
     char *tail;
     char *mode;
     char *arraydef;
#endif
{
  Fun fun;
  char tbuf[SZ_LINE];

  /* sanity check */
  if( !arraydef || !*arraydef )
    return NULL;

  /* allocate a fun record */
  if( !(fun = _FunNew()) ) return NULL;

  /* see if this file name is a view */
  FunView(fun, fname, mode, tbuf, SZ_LINE);

  /* try to open the file  */
  if( !(fun->gio=gopen(tbuf, mode)) ) goto error;

  /* save filename and mode */
  fun->fname = xstrdup(tbuf);
  fun->mode = xstrdup(mode);

  /* look for indication of whether these data are bigendian */
  if( _FunKeyword(tail, "endian", "ARRAY_ENDIAN", tbuf, SZ_LINE) )
    fun->endian = ((*tbuf == 'b') || (*tbuf == 'B'));
  else if( _FunKeyword(tail, "bigendian", "ARRAY_BIGENDIAN", tbuf, SZ_LINE) )
    fun->endian = istrue(tbuf);
  /* otherwise assume we have native format */
  else
    fun->endian = is_bigendian();

  /* parse the array spec for dimension info */
  if( ParseArraySpec(arraydef, &(fun->dim1), &(fun->dim2),
		     &(fun->bitpix), &(fun->skip), &(fun->endian)) ){
    fun->min1 = 1;
    fun->max1 = fun->dim1;
    if( fun->dim2 ){
      fun->dims = 2;
      fun->min2 = 1;
      fun->max2 = fun->dim2;
    }
    else{
      fun->dims = 1;
      fun->dim2 = 1;
      fun->min2 = 1;
      fun->max2 = 1;
    }
  }
  else
    goto error;

  /* we have a valid array */
  fun->type = FUN_ARRAY;
  /* no blanks for arrays */
  fun->doblank = 0;

  /* make a dummy FITS header for this array */
  fun->header = ft_headinit(NULL, 0);
  ft_headsetl(fun->header, "SIMPLE", 0, 1, "Is FITS of standard type?", 1);
  ft_headseti(fun->header, "BITPIX", 0, fun->bitpix, "bits/pixel", 1);
  ft_headseti(fun->header, "NAXIS", 0, fun->dims, "number of axes", 1);
  ft_headseti(fun->header, "NAXIS", 1, fun->dim1, "x axis dimension", 1);
  if( fun->dims >= 2 )
    ft_headseti(fun->header, "NAXIS", 2, fun->dim2, "y axis dimension", 1);
  ft_syncdata(fun->header);

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

  /* skip array header, if necessary */
  if( fun->skip )
    gskip(fun->gio, (off_t)fun->skip);

  /* common code */
  if( !_FunOpenCommon(fun) ) goto error;

  /* return completed struct */
  return fun;

error:
  _FunFree(fun, 1);
  return NULL;
}

/*
 *
 * _FunFITSOpen -- open a FITS-type file, scan to the appropriate extension,
 *	      set up binning and filtering parameters
 *
 */
#ifdef ANSI_FUNC
Fun
_FunFITSOpen(Fun ifun, char *fname, char *mode)
#else
Fun _FunFITSOpen(ifun, fname, mode)
     Fun ifun;
     char *fname;
     char *mode;
#endif
{
  char tbuf[SZ_LINE];
  char tail[SZ_LINE];
  char iline[SZ_LINE];
  GIO ifd=NULL;
  Fun fun;

  /* initialize iline */
  memset(iline, 0, SZ_LINE);

  /* use old fun handle */
  if( ifun ){
    fun = ifun;
    strncpy(tbuf, fname, SZ_LINE);
  }
  /* allocate a fun record */
  else{
    if( !(fun = _FunNew()) ) return NULL;
    /* see if this file name is a view */
    FunView(fun, fname, mode, tbuf, SZ_LINE);
    /* save filename and mode */
    fun->fname = xstrdup(tbuf);
    fun->mode = xstrdup(mode);
  }

  /* set up a default ext name for searching table extensions */
  if( getenv("FITS_EXTNAME") == NULL )
    putenv("FITS_EXTNAME=EVENTS STDEVT");

  /* try to open as FITS */
  if(!(fun->gio=ft_fitsheadopenfd(tbuf, &(fun->header), tail, SZ_LINE, mode,
				  fun->gio, iline, &ifd))){
    /* if its not FITS, try opening as ascii text */
    if( ifd && ( !iline[0] || (iline[0] && isascii(iline[0]))) ){
      if( !ifun ) _FunFree(fun, 1);
      return FunTextOpen(tbuf, mode, iline, ifd);
    }
    else{
      goto error;
    }
  }

  /* if we are delaying the real file positioning, exit here */
  if( !fun->header )
    return(fun);

  /* we have a valid header -- process its specific type */
  if( fun->header ){
    /* its a FITS image */
    if( fun->header->image ){
      /* its an image */
      fun->type = FUN_IMAGE;
      /* if its FITS, its big-endian */
      fun->endian = 1;
      /* get info about the image */
      fun->dims = ft_naxes(fun->header);
      fun->min1 = 1;
      fun->max1 = ft_naxis(fun->header, 1);
      fun->dim1 = tldim(fun->min1, fun->max1,  fun->binsiz1, 0);
      if( fun->dims == 1 ){
	fun->min2 = 1;
	fun->max2 = 1;
	fun->dim2 = 1;
      }
      else{
	fun->min2 = 1;
	fun->max2 = ft_naxis(fun->header, 2);
	fun->dim2 = tldim(fun->min2, fun->max2,  fun->binsiz2, 0);
      }
      if( (fun->max1 <0) || (fun->max2 <0) )
	return 0;
      fun->bitpix = ft_bitpix(fun->header);
      fun->dtype = fun->bitpix / FT_WORDLEN;

      /* determine scaling and blank parameters */
      fun->bscale = ft_bscale(fun->header);
      fun->bzero = ft_bzero(fun->header);
      if( (ft_hasbscale(fun->header) && (fun->bscale != 1.0)) || 
	  (ft_hasbzero(fun->header)  && (fun->bzero  != 0.0)) )
	fun->scaled = FUN_SCALE_EXISTS;
      fun->doblank = ft_hasblank(fun->header);
      fun->blank = ft_blank(fun->header);

      /* if more than 2 axes, we might have to skip to an image plane ...
	 we assume that the first 2 dimensions are the image */
      if( ft_naxes(fun->header) > 2 ){
	if( (fun->skip = _FunImageSkip(fun, tail)) <0 )
	  return 0;
	/* skip, if necessary */
	if( fun->skip )
	  gskip(fun->gio, (off_t)fun->skip);
      }
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
      /* common code */
      if( !_FunOpenCommon(fun) ) goto error;
      /* return completed struct */
      return fun;
    }

    /* its a FITS binary table */
    else if( fun->header->table ){
      /* start positive */
      fun->type = FUN_TABLE;
      /* if its FITS, its big-endian */
      fun->endian = 1;
      /* no blanks for tables */
      fun->doblank = 0;
      /* get size of record and number of records */
      if( fun->header->basic ){
	fun->rawsize = fun->header->basic->naxis[0];
	fun->total = fun->header->basic->naxis[1];
	fun->left = fun->total;
      }
      /* look for indication of bitpix */
      if( _FunKeyword(tail, "bitpix", "FITS_BITPIX", tbuf, SZ_LINE) )
	fun->bitpix = atoi(tbuf);
      /* else assume a safe value */
      else
	fun->bitpix = 32;
      /* should we use indices if we find them? */
      if( _FunKeyword(tail, "idx_activate", "FILTER_IDX_ACTIVATE", tbuf, SZ_LINE) ){
	if( istrue(tbuf) )
	  fun->idx = 1;
	else if( isfalse(tbuf) )
	  fun->idx = -1;
      }
      /* else assume yes */
      else
	fun->idx = 1;
      if( _FunKeyword(tail, "idx_debug", "FILTER_IDX_DEBUG", tbuf, SZ_LINE) ){
	if( istrue(tbuf) )
	  idxdebug(1);
	else if( isfalse(tbuf) )
	  idxdebug(0);
      }
      /* determine whether we are only processing specific rows */
      _FunRowNum(fun, tail, NULL);
      /* get the key for binning */
      _FunTableBinCols(fun, tail, "FITS_BINCOLS");
      /* get the key for the value column for binning */
      _FunTableValCol(fun, tail, "FITS_VCOL");
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
      /* common code */
      if( !_FunOpenCommon(fun) ) goto error;
      /* return completed struct */
      return fun;
    }
    else
      goto error;
  }
  else
    goto error;

error:
  if( !ifun ) _FunFree(fun, 1);
  return NULL;
}

#ifdef ANSI_FUNC
static Fun
_FunOpen(char *fname, char *name, char *tail, int len, char *mode)
#else
static Fun
_FunOpen(fname, name, tail, len, mode)
     char *fname;
     char *name;
     char *tail;
     int len;
     char *mode;
#endif
{
  Fun fun=NULL;
  char *special=NULL;
  char *xname=NULL;

  /* string to hold special characteristics must be len length */
  if( !(special = xcalloc(len, sizeof(char))) ) return NULL;
  /* remove quotes, if nexessary */
  if( (*fname == '\'') || (*fname == '"') ){
    xname = xstrdup(fname+1);
    if( xname[strlen(xname)-1] == *fname ){
      xname[strlen(xname)-1] = '\0';
    }
  }
  else{
    xname = xstrdup(fname);
  }
  if( _FunSpecialFile(xname, "ARRAY", name, tail, special, len) )
    fun = _FunArrayOpen(name, tail, mode, special);
  /* look for non-FITS events file */
  else if( _FunSpecialFile(xname, "EVENTS", name, tail, special, len) )
    fun = _FunRawEvOpen(name, tail, mode, special);
  /* just a normal FITS file */
  else
    fun = _FunFITSOpen(NULL, xname, mode);
  /* hack */
  if( fun ){
    /* here is the bad bit: we will want to select on the input file fd, but
       gio "files" do not always have an fd and when they do, they might
       have two of them.  I am hacking this for the time being */
    if( (fun->gio->type == GIO_DISK) || (fun->gio->type == GIO_STREAM) )
      fun->ifd = fileno(fun->gio->fp);
    else if((fun->gio->type == GIO_SOCKET)||(fun->gio->type == GIO_PIPE))
      fun->ifd = fun->gio->ifd;
    else
      fun->ifd = -1;
  }
  /* clean up */
  if( xname ) xfree(xname);
  if( special ) xfree(special);
  return fun;
}

/*
 *
 * public routines
 *
 */

/*
 *
 * FunOpen -- open a FITS-type file, scan to the appropriate extension,
 *	      set up binning and filtering parameters
 *
 */
#ifdef ANSI_FUNC
Fun
FunOpen(char *fname, char *mode, Fun ref)
#else
Fun FunOpen(fname, mode, ref)
     char *fname;
     char *mode;
     Fun ref;
#endif
{
  int i;
  int ltype;
  int lmem;
  int ip=0;
  int got=0;
  char name[SZ_LINE];
  char tail[SZ_LINE];
  char tbuf[SZ_LINE];
  char tbuf2[SZ_LINE];
  Fun tfun, fun=NULL;
  Fun cur, last=NULL;

  /* better have a filename and a mode */
  if( !fname || !*fname || !mode || !*mode )
    goto error;

  /* handle non-read opens specially -- we have to create a file */
  if( !strchr(mode, 'r') ){
    /* allocate a fun record */
    if( !(fun = _FunNew()) )
      goto error;
    /* for 'A' (mimick of append), we open r+ and seek to end */
    if( strchr(mode, 'A') ){
      if( !(fun->gio=gopen(fname, "r+")) )
	goto error;
      gseek(fun->gio, 0, SEEK_END);
    }
    /* normal open */
    else{
      if( !(fun->gio=gopen(fname, mode)) )
	goto error;
    }
    /* save filename and mode */
    fun->fname = xstrdup(fname);
    fun->mode = xstrdup(mode);
    /* make a primary header  */
    fun->primary = ft_headinit(NULL, 0);
    /* make a header for temp variables */
    fun->theader = ft_headinit(NULL, 0);
    /* if a ref struct was specified, make a ref from the fun struct */
    if( ref && (*(short *)ref == FUN_MAGIC) ){
      fun->ifun = ref;
      /* if we have delayed opening the reference for a copy, do it now */
      if( !fun->ifun->header ){
	/* set copy flag */
	fun->icopy = 1;
	/* set internal fitsy output channel */
	ft_cfile(fun->gio);
	/* open the file Now unless delay is requested */
	if( !strchr(mode, 'd') ){
	  _FunFITSOpen(fun->ifun, fun->ifun->fname, "r");
	  /* reset output channel */
	  ft_cfile(NULL);
	}
      }
      /* enter this handle in the backlink list of the reference file */
      for(i=0; i<FUN_MAXBFUN; i++){
	if( !fun->ifun->bfun[i] ){
	  fun->ifun->bfun[i] = fun;
	  break;
	}
      }
    }
  }
  /* this is "read" mode */
  else{
    ltype = LIST_FILEORDER;
    lmem = -1;
    /* process as a space-delimited list of files */
    while( _FunFile(fname, tbuf, SZ_LINE, &ip) ){
      if( _FunKeyword(tbuf, "listorder", "FUN_LISTORDER", tbuf2, SZ_LINE) ){
	if( !strncasecmp(tbuf2, "s", 1) )
	  ltype = LIST_SORT;
	else if( !strncasecmp(tbuf2, "t", 1) )
	  ltype = LIST_TRYSORT;
	else if( !strncasecmp(tbuf2, "u", 1) )
	  ltype = LIST_UNSORT;
	else if( !strncasecmp(tbuf2, "f", 1) )
	  ltype = LIST_FILEORDER;
	continue;
      }
      if( _FunKeyword(tbuf, "listmem", "FUN_LISTMEM", tbuf2, SZ_LINE) ){
	lmem = (int)(atof(tbuf2)*1000000);
	continue;
      }
      /* try to open this possible file */
      if( !(tfun=_FunOpen(tbuf, name, tail, SZ_LINE, mode)) )
	goto error;
      if( !fun )
	fun = tfun;
      else if( last )
	last->next = tfun;
      last = tfun;
      got++;
    }
    /* only set current if we actually have a list */
    if( got == 1 )
      fun->ltype = LIST_NONE;
    else{
      fun->ltype = ltype;
      fun->lmem = lmem;
      fun->current = fun;
      /* list pre-processing */
      for(cur=fun; cur; cur=cur->next){
	/* set head of list */
	cur->head = fun;
	cur->lefp = tmpfile();
	cur->lrfp = tmpfile();
      }
    }
  }
  return(fun);

error:
  if( fun ) _FunFree(fun, 1);
  return NULL;
}

#ifdef ANSI_FUNC
void
FunFlush(Fun fun, char *plist)
#else
void FunFlush(fun, plist)
     Fun fun;
     char *plist;
#endif
{
  int i;
  int pad;
  int got;
  int doref=0;
  int dorest=0;
  int doback=0;
  int skip;
  char *pbuf;
  char tbuf[SZ_LINE];
  Fun tfun=NULL;
  GIO gios[1];

  /* make sure we have something to do */
  if( !_FunValid(fun) )
    return;

  /* check plist for copy mode -- but only if we have a reference handle */
  if( fun->ifun ){
    pbuf = xstrdup(plist);
    if( _FunKeyword(pbuf, "copy", NULL, tbuf, SZ_LINE) ){
      if( !strncasecmp(tbuf, "ref", 3) )
	doref = 1;
      else if( fun->icopy && !strncasecmp(tbuf, "remain", 6) )
	dorest = 1;
    }
    if( pbuf ) xfree(pbuf);
  }
  else{
    pbuf = xstrdup(plist);
    if( _FunKeyword(pbuf, "copy", NULL, tbuf, SZ_LINE) ){
      if( !strncasecmp(tbuf, "ref", 3) ){
	doback = 1;
	/* perform ordinary flush on each backlink */
	for(i=0; i<FUN_MAXBFUN; i++){
	  if( fun->bfun[i]  ){
	    FunFlush(fun->bfun[i], NULL);
	  }
	}
      }
    }
    if( pbuf ) xfree(pbuf);
  }

  /* If we did not set a type, perhaps because this is an output file
     that we did not write to, we might be able to set the type now to
     be the reference type. This will allow us to flush the ref header
     to the output file. */
  if( !fun->type && fun->ifun )
    fun->type = fun->ifun->type;

  /* if we are writing out the full reference extension, we just do it */
  if( doref ){
    /* copy header */
    ft_headwrite(fun->gio, fun->ifun->header);
    /* try to get back to the data, in case we read any already */
    gseek(fun->ifun->gio, ft_data(fun->ifun->header), 0);
    /* skip data, copying header if necessary */
    gios[0] = fun->gio;
    ft_dataskip(fun->ifun->gio, fun->ifun->header, gios, 1);
  }
  else{
    /* for writing, we might have to output the FITS header, padding, etc. */
    if( strchr(fun->mode, 'w') || strchr(fun->mode, 'a') || 
	strchr(fun->mode, 'A') ){
      /* process extension-specific flush */
      switch(fun->type){
      case FUN_IMAGE:
	/* might have to write the header */
	_FunImagePutHeader(fun, fun->dim1, fun->dim2, fun->bitpix);
	/* pad to end of extension, if necessary */
	pad = FT_BLOCK - (fun->bytes % FT_BLOCK);
	if( pad && (pad != FT_BLOCK) ){
	  pbuf = (char *)xcalloc(pad, sizeof(char));
	  gwrite(fun->gio, pbuf, 1, pad);
	  xfree(pbuf);
	  fun->io = 0;
	}
	break;
      case FUN_TABLE:
	/* might have to write the header */
	_FunTablePutHeader(fun);
	/* try to fix the naxis2 param, and if so, write padding as well */
	if( _FunFixNaxis2(fun) ){
	  pad = FT_BLOCK - (fun->bytes % FT_BLOCK);
	  if( pad && (pad != FT_BLOCK) ){
	    pbuf = (char *)xcalloc(pad, sizeof(char));
	    gwrite(fun->gio, pbuf, 1, pad);
	    xfree(pbuf);
	    fun->io = 0;
	  }
	}
	break;
      default:
	break;
      }
    }
  }

  /* if this is final flush, might have to copy remaining input extensions */
  if( dorest || doback ){
    if( dorest )
      tfun = fun->ifun;
    else if( doback )
      tfun = fun;
    /* might have to skip to end of this extension */
    switch(tfun->type){
    case FUN_IMAGE:
    case FUN_ARRAY:
      /* calculate bytes we should have read to end of extension, but didn't */
      skip = ((MAX(tfun->dim2,1)*tfun->dim1)*ABS(tfun->dtype)) +
	tfun->dpad - tfun->curpos;
      if( skip ){
	gskip(tfun->gio, (off_t)skip);
	fun->curpos += skip;
      }
      break;
    case FUN_TABLE:
    case FUN_EVENTS:
      /* calculate bytes we should have read to end of extension, but didn't */
      skip = ((tfun->rawsize*tfun->total)+ft_pcount(tfun->header))-tfun->bytes;
      /* if there are any ... */
      if( skip ){
	/* ... it also means we did not skip the padding */
	pad = FT_BLOCK - ((tfun->rawsize*tfun->total) % FT_BLOCK);
	if( pad == FT_BLOCK ) pad = 0;
	skip += pad;
	/* do it now */
	gskip(tfun->gio, (off_t)skip);
      }
      break;
    default:
      break;
    }
    /* write out the rest of the reference file */
    while( (got=gread(tfun->gio, tbuf, sizeof(char), SZ_LINE)) >0 ){
      if( dorest ){
	gwrite(fun->gio, tbuf, sizeof(char), got);
      }
      else if( doback ){
	for(i=0; i<FUN_MAXBFUN; i++){
	  if( fun->bfun[i] && fun->bfun[i]->gio ){
	    gwrite(fun->bfun[i]->gio, tbuf, sizeof(char), got);
	  }
	}
      }
    }
  }

  /* we can free up most structure, but leave enough to carry on */
  _FunFree(fun,0);
  /* since we just flushed, flag that we can start again */
  fun->ops = 0;
}

#ifdef ANSI_FUNC
void
FunClose(Fun fun)
#else
void FunClose(fun)
     Fun fun;
#endif
{
  int i;
  Fun tfun;
  if( !_FunValid(fun) )
    return;
  /* close all files (this might be a list) */
  while( fun ){
    tfun = fun->next;
    FunFlush(fun, "copy=remaining");
    gclose(fun->gio);
    fun->gio = NULL;
    /* remove this handle from the backlink list of the reference file */
    if( fun->ifun && (*(short *)fun->ifun == FUN_MAGIC) ){
      for(i=0; i<FUN_MAXBFUN; i++){
	if( fun->ifun->bfun[i] == fun ){
	  fun->ifun->bfun[i] = (Fun)NULL;
	  break;
	}
      }
    }
    /* if this is a ref file for other files, clear all of those ifun flags */
    for(i=0; i<FUN_MAXBFUN; i++){
      if( fun->bfun[i] && (*(short *)fun->bfun[i] == FUN_MAGIC) )
	fun->bfun[i]->ifun = (Fun)NULL;;
    }
    _FunFree(fun,1);
    fun = tfun;
  }
}

