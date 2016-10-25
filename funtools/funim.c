/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

#include <funtoolsP.h>

/*
 *
 * private routines
 *
 */

#define MAXEV 10240

/*
 *
 * _FunTableBin -- bin a blocked section of data from a table
 *
*/
#ifdef ANSI_FUNC
static void *
_FunTableBin(Fun fun, void *buf, char *plist)
#else
static void *_FunTableBin(fun, buf, plist)
     Fun fun;
     void *buf;
     char *plist;
#endif
{
  int skip;			/* temp for skipping data to end of ext */
  int offset[2];		/* offset into event record for x, y */
  int size[2];			/* size of x, y value in bytes */
  int val[2];			/* x, y bin values of this event */
  int convert;			/* whether we have to convert to native */
  int index;			/* index into image array for this pixel */
  int esize;			/* max number of events to read at once */
  int dofilt;			/* true if we can filter */
  int dovcol;			/* true if we use a value column */
  int voffset;			/* offset into event record for vcol */
  /* not used, so avoid gcc compiler warning */
  /* int vsize; */		/* size of vcol in bytes */
  int vtype;			/* data type of event vcol */
  int imdim;			/* total dims of image buffer */
  int itsnan;			/* if value is a nan */
  int transparent;		/* allow everything through the filter? */
  int *rbuf=NULL;		/* valid event flags */
  size_t i, j;			/* loop counters */
  size_t get;			/* number of events to read */
  size_t got;			/* number of events read */
  unsigned char *ebuf=NULL;	/* event buffer */
  unsigned char *eptr;		/* current pointer into ebuf */
  double block2;		/* block * block */
  double minval[2];		/* x, y min axis values */
  double binsiz[2];		/* x, y bin values */
  char *obuf;			/* output image buffer */
  char *pbuf;			/* temp plist buf */
  char tbuf[SZ_LINE];		/* ever-present temp buffer */
  short sval;			/* short val */
  unsigned short usval;		/* unsigned short val */
  int ival;			/* int val */
  longlong lval;		/* 64-bit int val */
  unsigned int uival;		/* unsigned int vala */
  float fval;			/* float val */
  double dval;			/* double val */
  double vval;			/* value of the event */

  /* just in case ... */
  if( !_FunValid(fun) ){
    gerror(stderr, "invalid funtools handle\n");
    return NULL;
  }

  /* if we delayed the open before, we have to open now */
  if( !fun->header && strchr(fun->mode, 'r') )
    _FunFITSOpen(fun, fun->fname, "r");

  /* make sure something good can happen */
  if( !fun->header || !fun->header->table ){
    gerror(stderr, "not a binary table\n");
    return NULL;
  }

  /* make sure we have binning parameters */
  if( (fun->bin[0] < 0) || ((fun->dims > 1) && (fun->bin[1] < 0)) ){
    gerror(stderr, "invalid or missing binning column(s) for table\n");
    return NULL;
  }

  /* make sure we have valid output dimensions */
  if( (fun->odim1 <= 0) || ((fun->dims > 1) && (fun->odim2 <= 0)) ){
    gerror(stderr, "invalid or zero image dimension(s) for table (%s;%d,%d)\n",
	   fun->bincols ? fun->bincols : "invalid bincols?",
	   fun->odim1, fun->odim2);
    return NULL;
  }

  /* we have to convert to native if the data is not the
     same as the big-endian-ness of the machine */
  convert = (fun->endian != is_bigendian());

  /* set x and y info -- whatever columns they actually are */
  offset[0] = fun->header->table->col[fun->bin[0]].offset;
  size[0] = fun->header->table->col[fun->bin[0]].size;
  minval[0] = fun->min1;
  binsiz[0] = fun->binsiz1;
  if( fun->dims > 1 ){
    offset[1] = fun->header->table->col[fun->bin[1]].offset;
    size[1] = fun->header->table->col[fun->bin[1]].size;
    minval[1] = fun->min2;
    binsiz[1] = fun->binsiz2;
  }
  /* optional value column for binning */
  if( fun->vbin >= 0 ){
    dovcol = 1;
    voffset = fun->header->table->col[fun->vbin].offset;
    /* not used, so avoid gcc compiler warning */
    /* vsize = fun->header->table->col[fun->vbin].size; */
    vtype = fun->header->table->col[fun->vbin].type;
  }
  else{
    dovcol = 0;
  }

  /* init some convenience variables */
  imdim = fun->odim1*MAX(fun->odim2,1);
  block2 = (double)fun->block*fun->block;
  transparent = 0;

  /* see if default data type is to be over-ridden */
  pbuf = xstrdup(plist);
  if( _FunKeyword(pbuf, "bitpix", NULL, tbuf, SZ_LINE) ){
    if( (i = atoi(tbuf)) ){
      fun->obitpix = i;
      fun->odtype = fun->obitpix / FT_WORDLEN;
    }
  }
  else if( _FunKeyword(pbuf, "mask", "FUN_MASK", tbuf, SZ_LINE) ){
    if( !strcasecmp(tbuf, "transparent") )
      transparent = 1;
  }
  if( pbuf ) xfree(pbuf);

  /* allocate output buffer, if necessary */
  if( buf )
    obuf = buf;
  else{
    obuf = (char *)xcalloc(imdim, ABS(fun->odtype));
    if( !obuf ){
      gerror(stderr, "can't allocate image buffer (%dx%dx%d)\n", 
	     fun->odim1, MAX(fun->odim2,1), ABS(fun->odtype));
      return NULL;
    }
  }

  /* create the plist string */
  if( convert )
    strcpy(tbuf, "convert=true");
  else
    strcpy(tbuf, "convert=false");
  /* add the binning key */
  if( fun->bincols ){
    strcat(tbuf, ",");
    strcat(tbuf, fun->bincols);
  }
  /* add the index flag */
  if( fun->idx == 1 ){
    strcat(tbuf, ",idx=true");
  }
  else if( fun->idx == -1 ){
    strcat(tbuf, ",idx=false");
  }

  /* open the filter, if its not already been done */
  if( !fun->filt ){
    if( fun->filter && *fun->filter ){
      fun->filt = FilterOpen(fun->header, fun->filter, tbuf);
      /* check for error */
      if( fun->filt == NULL ){
	fun->filt = NOFILTER;
	gerror(stderr, "can't open filter: %s\n", fun->filter);
	return NULL;
      }
    }
    else{
      fun->filt = NOFILTER;
      fun->dofilt = 0;
    }
  }

  /* allocate space for a pile of event records */
  for(esize=MIN(MAXEV,(fun->left>0?fun->left:MAXEV)); esize>0; esize /=2){
    if( ((ebuf = (unsigned char *)malloc(fun->rawsize*esize)) != NULL) &&
        ((rbuf = (int *)malloc(sizeof(int)*esize)) != NULL) )
      break;
  }

  /* while there are still events to read ... */ 
  while( fun->left != 0 ){
    /* figure out how many to read this time */
    if( fun->left > 0 )
      get = MIN(esize, fun->left);
    /* read to EOF */
    else
      get = esize;
    /* read in a pile of events */
    _FunRead(fun, (void *)ebuf, fun->rawsize, get, &got);
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
    /* update how many input events we have read */
    fun->io += got;
    fun->bytes += (got*fun->rawsize);

    /* filter these events through the co-process */
    if( fun->dofilt )
      dofilt = FilterEvents(fun->filt, (void *)ebuf, fun->rawsize, (int)got,
			    (void *)rbuf);
    else
      dofilt = 0;

    /* process each event in this batch */
    for(eptr=ebuf, i=0; i<got; 	i++, eptr += fun->rawsize){
      /* if its not a valid event, skip it */
      if( dofilt && !transparent && !rbuf[i] ){
	continue;
      }

      /* get y and x values and convert to int data type for indexing */
      for(j=0; j<(size_t)fun->dims; j++){
	switch(fun->header->table->col[fun->bin[j]].type){
	  /* unsigned 8-bit int */
	case 'B':
	  val[j] = itlp2i((double)eptr[offset[j]], minval[j], binsiz[j], 'B');
	  break;
	  /* 16-bit short */
	case 'I':
	  ColumnLoad((void *)(eptr+offset[j]), size[j], 1, convert, &sval);
	  val[j] = itlp2i((double)sval, minval[j], binsiz[j], 'I');
	  break;
	  /* unsigned 16-bit int */
	case 'U':
	  ColumnLoad((void *)(eptr+offset[j]), size[j], 1, convert, &usval);
	  val[j] = itlp2i((double)usval, minval[j], binsiz[j], 'U');
	  break;
	  /* 32-bit int */
	case 'J':
	  ColumnLoad((void *)(eptr+offset[j]), size[j], 1, convert, &ival);
	  val[j] = itlp2i((double)ival, minval[j], binsiz[j], 'J');
	  break;
	  /* unsigned 32-bit int */
	case 'K':
	  ColumnLoad((void *)(eptr+offset[j]), size[j], 1, convert, &lval);
	  val[j] = itlp2i((double)ival, minval[j], binsiz[j], 'K');
	  break;
	  /* unsigned 32-bit int */
	case 'V':
	  ColumnLoad((void *)(eptr+offset[j]), size[j], 1, convert, &uival);
	  val[j] = itlp2i((double)uival, minval[j], binsiz[j], 'V');
	  break;
	  /* 32-bit float */
	case 'E':
	  ColumnLoad((void *)(eptr+offset[j]), size[j], 1, convert, &fval);
	  val[j] = itlp2i((double)fval, minval[j], binsiz[j], 'E');
	  break;
	  /* 64-bit float */
	case 'D':
	  ColumnLoad((void *)(eptr+offset[j]), size[j], 1, convert, &dval);
	  val[j] = itlp2i(dval, minval[j], binsiz[j], 'D');
	  break;
	case 'X':
	case 'L':
	case 'C':
	case 'A':
	case 'M':
	case 'P':
	default:
	  goto done;
	}
      }

      /* make sure we are in the desired section, and 
	 calculate the offset into the image array */
      if( fun->dims == 1 ){
	if( (val[0] < fun->x0) || (val[0] > fun->x1) )
	  continue;
	index = (val[0] - fun->x0)/fun->block;
      }
      else{
	if( (val[0] < fun->x0) || (val[0] > fun->x1) ||
	    (val[1] < fun->y0) || (val[1] > fun->y1) )
	  continue;
	index = ((val[1] - fun->y0)/fun->block)*fun->odim1 +
	  (val[0] - fun->x0)/fun->block;
      }

      /* make sure its valid */
      if( (index<0) || (index>=imdim) )
	continue;

      /* use value column or 1 as event value */
      itsnan = 0;
      if( dovcol ){
	/* if vcol is not double, we must do full type convert */
	if( vtype != 'D' ){
	  ft_acht2('D', &vval, vtype, eptr+voffset, 1, convert, 0);
	}
	/* for same types, we might have to swap the bytes of the double */
	else if( convert ){
	  swap8((char *)&vval, (char *)(eptr+voffset), 8);
	}
	/* otherwise its an easy copy */
	else{
	  memcpy(&vval, eptr+voffset, ft_sizeof(vtype));
	}
	/* value operators */
	switch(fun->vop){
	case '/':
	  if( vval ){
	    vval = 1.0/vval;
	  }
	  else{
	    itsnan = 1;
	  }
	  break;
	default:
	  break;
	}
	if( vval == getnand() ){
	  itsnan = 1;
	  vval = 0.0;
	}
      }
      else{
	vval = 1.0;
      }

      /* add this event to the image array */
      switch(fun->odtype){
      case TY_CHAR:
	if( !dovcol ){
	  if( ((unsigned char *)obuf)[index] > 
	      (((unsigned char *)obuf)[index]+(unsigned char)vval) ){
	    fun->overflow++;
	  }
	  else{
	    ((unsigned char *)obuf)[index] += (unsigned char)vval;
	  }
	}
	else{
	  if(fun->doblank && (((unsigned char *)obuf)[index] == fun->blank)){
	    ;
	  }
	  else if( itsnan ){
	    ((unsigned char *)obuf)[index] = fun->blank;
	  }
	  else{
	    ((unsigned char *)obuf)[index] += (unsigned char)vval;
	  }
	}
	break;
	/* 32-bit int */
      case TY_USHORT:
	if( !dovcol ){
	  if( ((unsigned short *)obuf)[index] > 
	      (((unsigned short *)obuf)[index]+(unsigned short)vval) ){
	    fun->overflow++;
	  }
	  else{
	    ((unsigned short *)obuf)[index] += (unsigned short)vval;
	  }
	}
	else{
	  if(fun->doblank && (((unsigned short *)obuf)[index] == fun->blank)){
	    ;
	  }
	  else if( itsnan ){
	    ((unsigned short *)buf)[index] = fun->blank;
	  }
	  else{
	    ((unsigned short *)buf)[index] += (unsigned short)vval;
	  }
	}
	break;
	/* 32-bit int */
      case TY_SHORT:
	if( !dovcol ){
	  if( ((short *)obuf)[index] > (((short *)obuf)[index]+(short)vval) ){
	    fun->overflow++;
	  }
	  else{
	    ((short *)obuf)[index] += (short)vval;
	  }
	}
	else{
	  if( fun->doblank && (((short *)obuf)[index] == fun->blank) ){
	    ;
	  }
	  else if( itsnan ){
	    ((short *)obuf)[index] = fun->blank;
	  }
	  else{
	    ((short *)obuf)[index] += (short)vval;
	  }
	}
	break;
	/* 32-bit int */
      case TY_INT:
	if( !dovcol ){
	  if( ((int *)obuf)[index] > (((int *)obuf)[index]+(int)vval) ){
	    fun->overflow++;
	  }
	  else{
	    ((int *)obuf)[index] += (int)vval;
	  }
	}
	else{
	  if( fun->doblank && (((int *)obuf)[index] == fun->blank) ){
	    ;
	  }
	  else if( itsnan ){
	    ((int *)obuf)[index] = fun->blank;
	  }
	  else{
	    ((int *)obuf)[index] += (int)vval;
	  }
	}
	break;
	/* 64-bit int */
      case TY_LONG:
#if HAVE_LONG_LONG == 0
	gerror(stderr, 
	       "64-bit data support not built (long long not available)\n");
#endif
	if( !dovcol ){
	  if(((longlong *)obuf)[index] > 
	     (((longlong *)obuf)[index]+(longlong)vval)){
	    fun->overflow++;
	  }
	  else{
	    ((longlong *)obuf)[index] += (longlong)vval;
	  }
	}
	else{
	  if( fun->doblank && (((longlong *)obuf)[index] == fun->blank) ){
	    ;
	  }
	  else if( itsnan ){
	    ((longlong *)obuf)[index] = fun->blank;
	  }
	  else{
	    ((longlong *)obuf)[index] += (longlong)vval;
	  }
	}
	break;
	/* 32-bit float */
      case TY_FLOAT:
	if( !dovcol ){
	  ((float *)obuf)[index] += (float)vval;
	}
	else{
	  if( isnanf(((float *)obuf)[index]) ){
	    ;
	  }
	  else if( itsnan ){
	    ((float *)obuf)[index] = getnanf();
	  }
	  else{
	    ((float *)obuf)[index] += (float)vval;
	  }
	}
	break;
	/* 64-bit float */
      case TY_DOUBLE:
	if( !dovcol ){
	  ((double *)obuf)[index] += (double)vval;
	}
	else{
	  if( isnand(((double *)obuf)[index]) ){
	    ;
	  }
	  else if( itsnan ){
	    ((double *)obuf)[index] = getnand();
	  }
	  else{
	    ((double *)obuf)[index] += (double)vval;
	  }
	}
	break;
      default:
	goto done;
      }
    }
  }

  /* binned all events, average each pixel, if necessary */
  if( fun->btype == FUN_AVG ){
    for(i=0; i<(size_t)imdim; i++){
      switch(fun->odtype){
      case TY_CHAR:
	((unsigned char *)obuf)[i] /= block2;
	break;
      case TY_USHORT:
	((unsigned short *)obuf)[i] /= block2;
	break;
      case TY_SHORT:
	((short *)obuf)[i] /= block2;
	break;
      case TY_INT:
	((int *)obuf)[i] /= block2;
	break;
      case TY_LONG:
#if HAVE_LONG_LONG == 0
	gerror(stderr, 
	       "64-bit data support not built (long long not available)\n");
#endif
	((longlong *)obuf)[i] /= block2;
	break;
      case TY_FLOAT:
	((float *)obuf)[i] /= block2;
	break;
      case TY_DOUBLE:
	((double *)obuf)[i] /= block2;
	break;
      default:
	break;
      }
    }
  }

done:
  /* free up space */
  if( ebuf ) xfree(ebuf);
  if( rbuf ) xfree(rbuf);

  /* if we have no more rows left, clean up */
  if( !fun->left ){
    /* skip to end of extension */
    if( fun->bytes ){
      /* skip any unread events */
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
  }

  /* close filter if done with the filter process */
  if( !fun->left && (fun->filt != NOFILTER) ){
    FilterClose(fun->filt);
    fun->filt = NULL;
  }

  /* that's good news */
  return (void *)obuf;
}

/*
 *
 * _FunImageExtract -- grab a blocked section of data from an array
 *
*/
#ifdef ANSI_FUNC
static void *
_FunImageExtract(Fun fun, void *buf, int rstart, int rstop, char *plist)
#else
static void *_FunImageExtract(fun, buf, rstart, rstop, plist)
     Fun fun;
     void *buf;
     int rstart;
     int rstop;
     char *plist;
#endif
{
  int i, j, k;
  int ox, oy;
  int convert;
  int yoff;
  int doscale=0;
  size_t got;
  off_t newpos;
  char *obuf;
  char *pbuf;
  char **bufs;
  char tbuf[SZ_LINE];
  unsigned char cval;
  unsigned short usval;
  short sval;
  int ival;
  longlong lval;
  float fval;
  double dval;
  double block2;
  register double val;
  longlong vall;

  /* make sure we have something */
  if( !_FunValid(fun) )
    return NULL;

  /* if we delayed the open before, we have to open now */
  if( !fun->header && strchr(fun->mode, 'r') )
    _FunFITSOpen(fun, fun->fname, "r");

  /* just in case ... */
  if( !fun->header || !fun->header->image ){
    gerror(stderr, "data is not a table or an image\n");
    return NULL;
  }

  /* make sure we have valid dimensions */
  if( fun->odim1 <=0 ){
    gerror(stderr, "invalid dim1 (%d) from x0,x1=%d,%d\n", 
	   fun->odim1, fun->x0, fun->x1);
    return NULL;
  }
  if( (fun->dims > 1) && (fun->odim2 <=0) ){
    gerror(stderr, "invalid dim2 (%d) from y0,y1=%d,%d\n",
	   fun->odim2, fun->y0, fun->y1);
    return NULL;
  }

  /* we have to convert to native if the data is not the
     same as the big-endian-ness of the machine */
  convert = (fun->endian != is_bigendian());

  /* set up some oft-used variables */
  block2 = (double)fun->block*fun->block;

  /* we cannot handle BLANK==0 */
  if( (fun->dtype>=-2) && fun->doblank && (fun->blank==0) ){
    gwarning(stderr, "BLANK==0 detected ... disabling NaN checking\n");
    fun->doblank = 0;
  }
  
  /* see if default data type is to be over-ridden */
  pbuf = xstrdup(plist);
  if( _FunKeyword(pbuf, "bitpix", NULL, tbuf, SZ_LINE) ){
    if( (i = atoi(tbuf)) ){
      fun->obitpix = i;
      fun->odtype = fun->obitpix / FT_WORDLEN;
    }
  }
  /* see if scaling is explicitly turned off */
  if( _FunKeyword(pbuf, "bscale", NULL, tbuf, SZ_LINE) ){
    if( isfalse(tbuf) )
      doscale = -1;
  }
  if( pbuf ) xfree(pbuf);

  /* actually, we only scale if we have scaled int data */
  if( (doscale==0) && (fun->scaled&FUN_SCALE_EXISTS) && (fun->dtype>=-2) ){
    /* flag that we scaled the input data */
    fun->scaled |= FUN_SCALE_APPLIED;
    doscale = 1;
  }
  else
    doscale = 0;

  /* make sure we are not out of bounds */
  if( rstart < 1 ) rstart = 1;
  if( rstop < 1 ) rstop = 1;
  if( rstop > MAX(fun->odim2,1) ) rstop = MAX(fun->odim2,1);

  /* allocate output buffer, if necessary */
  if( buf )
    obuf = buf;
  else{
    obuf = (char *)xcalloc(fun->odim1*(rstop-rstart+1), ABS(fun->odtype));
    if( !obuf ){
      gerror(stderr, "can't allocate image buffer (%dx%dx%d)\n", 
	     fun->odim1, (rstop-rstart+1), ABS(fun->odtype));
      return NULL;
    }
  }

  /* allocate some row buffers: number of bufs is equal to the block factor */
  bufs = (char **)xmalloc(fun->block * sizeof(char *));
  for(i=0; i<fun->block; i++){
    bufs[i] = (char *)xmalloc((fun->x1-fun->x0+1)*ABS(fun->dtype));
  }

  /* for all rows in the output image (or image section) ... */
  for(oy=rstart; oy<=rstop; oy++){
    yoff = (oy-rstart) * fun->odim1;
    /* get input rows associated with this output row (by block factor) */
    for(j=0; j<fun->block; i++, j++){
      /* calculate specific y line we are processing */
      i = (fun->y0 - 1) + ((oy-1) * fun->block) + j;
      /* calculate the new position into the data */
      newpos = ((i*fun->dim1)+(fun->x0-1)) * ABS(fun->dtype);
      /* skip to new position */
      if( gskip(fun->gio, newpos - fun->curpos) < 0 ){
	gerror(stderr,
	       "_FunImageExtract can't seek %d bytes into image data\n",
	       newpos - fun->curpos);
	if( !buf && obuf ) xfree(obuf);
	return(NULL);
      }
      /* read the row */
      _gread(fun->gio, bufs[j], ABS(fun->dtype), (fun->x1-fun->x0+1), &got);
      /* check for EOF */
      if( got != (size_t)(fun->x1-fun->x0+1) ){
	gerror(stderr, "unexpected EOF reading data\n");
	if( !buf && obuf ) xfree(obuf);
	return(NULL);
      }
      /* convert to native, if necessary */
      if( convert )
	swap_data(bufs[j], got, fun->dtype);
      /* update the current position */
      fun->curpos = newpos + (got * ABS(fun->dtype));
    }

    /* process all pixels in this output row */
    for(ox=0; ox<fun->odim1; ox++){
      /* reset temp value */
      val = 0.0;
      vall = 0;
      /* for all rows in the input blocks */
      for(i=0; i<fun->block; i++){
	/* sum the input pixels which make up this output pixel */
	for(j=ox*fun->block, k=0; k<fun->block; j++, k++){
	  switch(fun->dtype){
	  case TY_CHAR:
	    cval = ((unsigned char **)bufs)[i][j];
	    if( fun->doblank && (cval == fun->blank) )
	      goto blank;
	    if( doscale )
	      val += ((double)cval*fun->bscale)+fun->bzero;
	    else
	      val += (double)cval;
	    break;
	  case TY_USHORT:
	    usval = ((unsigned short **)bufs)[i][j];
	    if( fun->doblank && (usval == fun->blank) )
	      goto blank;
	    if( doscale )
	      val += ((double)usval*fun->bscale)+fun->bzero;
	    else
	      val += (double)usval;
	    break;
	  case TY_SHORT:
	    sval = ((short **)bufs)[i][j];
	    if( fun->doblank && (sval == fun->blank) )
	      goto blank;
	    if( doscale )
	      val += ((double)sval*fun->bscale)+fun->bzero;
	    else
	      val += (double)sval;
	    break;
	  case TY_INT:
	    ival = ((int **)bufs)[i][j];
	    if( fun->doblank && (ival == fun->blank) )
	      goto blank;
	    if( doscale )
	      val += ((double)ival*fun->bscale)+fun->bzero;
	    else
	      val += (double)ival;
	    break;
	  case TY_LONG:
#if HAVE_LONG_LONG == 0
	    gerror(stderr, 
	          "64-bit data support not built (long long not available)\n");
#endif
	    /* argh ... 64-bit does not fit into a double! */
	    lval = ((longlong **)bufs)[i][j];
	    if( fun->doblank && (lval == fun->blank) )
	      goto blank;
	    /* probably going to lose precision here */
	    if( doscale )
	      vall += ((double)lval*fun->bscale)+fun->bzero;
	    else
	      vall += lval;
	    break;
	  case TY_FLOAT:
	    fval = ((float **)bufs)[i][j];
	    if( isnanf(fval) )
	      goto blank;
	    val += (double)fval;
	    break;
	  case TY_DOUBLE:
	    dval = ((double **)bufs)[i][j];
	    if( isnand(dval) )
	      goto blank;
	    val += dval;
	    break;
	  default:
	    break;
	  }
	}
      } /* x block loop */

      /* take average of this output pixel, if necessary */
      if( fun->btype  == FUN_AVG ){
	val /= block2;
	vall /= block2;
      }

      /* store the resulting value in the output image */
      /* argh ... 64-bit does not fit into a double! */
      if( fun->dtype == TY_LONG ){
	switch(fun->odtype){
	case TY_CHAR:
	  ((unsigned char *)obuf)[yoff+ox] = (unsigned char)vall;
	  break;
	case TY_USHORT:
	  ((unsigned short *)obuf)[yoff+ox] = (unsigned short)vall;
	  break;
	case TY_SHORT:
	  ((short *)obuf)[yoff+ox] = (short)vall;
	  break;
	case TY_INT:
	  ((int *)obuf)[yoff+ox] = (int)vall;
	  break;
	case TY_LONG:
#if HAVE_LONG_LONG == 0
	  gerror(stderr, 
		 "64-bit data support not built (long long not available)\n");
#endif
	  ((longlong *)obuf)[yoff+ox] = (longlong)vall;
	  break;
	case TY_FLOAT:
	  ((float *)obuf)[yoff+ox] = (float)vall;
	  break;
	case TY_DOUBLE:
	  ((double *)obuf)[yoff+ox] = (double)vall;
	  break;
	default:
	  break;
	}
      }
      else{
	switch(fun->odtype){
	case TY_CHAR:
	  ((unsigned char *)obuf)[yoff+ox] = (unsigned char)val;
	  break;
	case TY_USHORT:
	  ((unsigned short *)obuf)[yoff+ox] = (unsigned short)val;
	  break;
	case TY_SHORT:
	  ((short *)obuf)[yoff+ox] = (short)val;
	  break;
	case TY_INT:
	  ((int *)obuf)[yoff+ox] = (int)val;
	  break;
	case TY_LONG:
#if HAVE_LONG_LONG == 0
	  gerror(stderr, 
		 "64-bit data support not built (long long not available)\n");
#endif
	  ((longlong *)obuf)[yoff+ox] = (longlong)val;
	  break;
	case TY_FLOAT:
	  ((float *)obuf)[yoff+ox] = (float)val;
	  break;
	case TY_DOUBLE:
	  ((double *)obuf)[yoff+ox] = (double)val;
	  break;
	default:
	  break;
	}
      }

      /* skip the blank assignment */
      continue;

blank:
      /* arrive here is we found a blank or nan */
      switch(fun->odtype){
      case TY_CHAR:
	((unsigned char *)obuf)[yoff+ox] = fun->blank;
	break;
      case TY_USHORT:
        ((unsigned short *)obuf)[yoff+ox] = fun->blank;
	break;
      case TY_SHORT:
	((short *)obuf)[yoff+ox] = fun->blank;
	break;
      case TY_INT:
	((int *)obuf)[yoff+ox] = fun->blank;
	break;
      case TY_LONG:
#if HAVE_LONG_LONG == 0
	gerror(stderr, 
	       "64-bit data support not built (long long not available)\n");
#endif
	((longlong *)obuf)[yoff+ox] = fun->blank;
	break;
      case TY_FLOAT:
	((float *)obuf)[yoff+ox] = getnanf();
	break;
      case TY_DOUBLE:
	((double *)obuf)[yoff+ox] = getnand();
	break;
      default:
	break;
      }

    } /* x loop */
  }   /* y loop */

  /* free allocated space */
  for(i=0; i<fun->block; i++){
    if( bufs[i] ) xfree(bufs[i]);
  }
  if( bufs ) xfree(bufs);

  /* calculate the position to the end of the data, if we read last line */
  if( rstop == MAX(fun->odim2,1) ){
    newpos = ((MAX(fun->dim2,1)*fun->dim1)) * ABS(fun->dtype);
    /* skip to end of data */
    gskip(fun->gio, newpos - fun->curpos);
    /* skip padding as well */
    gskip(fun->gio, (off_t)fun->dpad);
    /* reset current position to end of image */
    fun->curpos = newpos + fun->dpad;
  }

  return (void *)obuf;
}

/*
 *
 * semi-public routines
 *
 */


#ifdef ANSI_FUNC
void *
_FunImageMask(Fun fun, void *buf, int rstart, int rstop,
	      FilterMask masks, int nmask, char *plist)
#else
void *_FunImageMask(fun, buf, rstart, rstop, masks, nmask, plist)
     Fun fun;
     void *buf;
     int rstart;
     int rstop;
     FilterMask masks;
     int nmask;
     char *plist;
#endif
{
  int len;
  int i, n;
  int pixsize;
  int rowsize;
  int flag;
  int bitpix;
  int dtype;
  int x=0, y=0;
  char *pbuf;
  char *obuf;
  char *optr;
  char tbuf[SZ_LINE];

  /* make sure we have something to do */
  if( !_FunValid(fun) )
    return buf;

  /* make sure we really want to mask, and figure out which sort of mask */
  flag = 0;
  pbuf = xstrdup(plist);
  if( _FunKeyword(pbuf, "mask", "FUN_MASK", tbuf, SZ_LINE) ){
    if( isfalse(tbuf) ){
      if( pbuf ) xfree(pbuf);
      return buf;
    }
    /* 'all' means we change each pixel, setting pixels to 0 outside,
       and setting pixels to region value inside */
    else if( !strcasecmp(tbuf, "all") ){
      /* if we are allocating the buffer, we can change bitpix as well */
      if( !buf && _FunKeyword(pbuf, "bitpix", NULL, tbuf, SZ_LINE) ){
	if( (i = atoi(tbuf)) ){
	  fun->obitpix = i;
	  fun->odtype = fun->obitpix / FT_WORDLEN;
	}
      }
      flag = 1;
    }
  }
  if( pbuf ) xfree(pbuf);
  bitpix = fun->obitpix;
  dtype = fun->odtype;

  /* make sure we are not out of bounds */
  if( rstart < 1 ) rstart = 1;
  if( rstop > MAX(fun->odim2,1) ) rstop = MAX(fun->odim2,1);

  /* allocate output buffer, if necessary */
  if( buf )
    obuf = buf;
  else{
    obuf = (char *)xcalloc(fun->odim1*(rstop-rstart+1), ABS(dtype));
    if( !obuf ){
      gerror(stderr, "can't allocate image buffer (%dx%dx%d)\n", 
	     fun->odim1, (rstop-rstart+1), ABS(fun->odtype));
      return NULL;
    }
  }

  /* this is the size of a single pixel in bytes */
  pixsize = ABS(bitpix/FT_WORDLEN);
  /* this is the number of bytes per line */
  rowsize = fun->odim1 * pixsize;
  
  /* clear y rows before first row containing a mask segment */
  if( nmask ){
    for(y=rstart; y<=MIN(masks[0].y-1,rstop); y++){
      optr = (char *)obuf + ((y-rstart) * rowsize);
      memset(optr, 0, rowsize);
    }
  }

  /* process all mask segments */
  for(n=0; n<nmask; n++){
    /* do not process mask values greater than rstop */
    if( masks[n].y < rstart )  continue;
    if( masks[n].y > rstop )   break;
    /* blank out rows before the y row associated with this mask segment */
    for(; y<masks[n].y; y++){
      optr = (char *)obuf + ((y-rstart) * rowsize);
      memset(optr, 0, rowsize);
    }
    /* process each mask segment having this same y value */
    x = 1;
    while(1){
      /* clear columns before the start of this segment */
      optr = (char *)obuf + ((y-rstart) * rowsize) + ((x-1) * pixsize);
      if( (len = (masks[n].xstart - x) * pixsize) >0 )
	memset(optr, 0, len);
      x = masks[n].xstart;
      /* if flag is set, we set the pixel values to be the region id */
      if( flag ){
	optr = (char *)obuf + ((y-rstart) * rowsize) + ((x-1) * pixsize);
	for(x=masks[n].xstart; x<=masks[n].xstop; x++){
	  switch(dtype){
	  case TY_CHAR:
	    *((char *)optr) = (char)masks[n].region;
	    optr += pixsize;
	    break;
	  case TY_USHORT:
	    *((unsigned short *)optr) = (unsigned short)masks[n].region;
	    optr += pixsize;
	    break;
	  case TY_SHORT:
	    *((short *)optr) = (short)masks[n].region;
	    optr += pixsize;
	    break;
	  case TY_INT:
	    *((int *)optr) = (int)masks[n].region;
	    optr += pixsize;
	    break;
	  case TY_LONG:
#if HAVE_LONG_LONG == 0
	    gerror(stderr, 
		  "64-bit data support not built (long long not available)\n");
#endif
	    *((longlong *)optr) = (longlong)masks[n].region;
	    optr += pixsize;
	    break;
	  case TY_FLOAT:
	    *((float *)optr) = (float)masks[n].region;
	    optr += pixsize;
	    break;
	  case TY_DOUBLE:
	    *((double *)optr) = (double)masks[n].region;
	    optr += pixsize;
	    break;
	  default:
	    break;
	  }
	}
      }
      /* position after end of segment */
      x = masks[n].xstop+1;
      /* if we have another mask segment with the same y,
	 we keep going */
      if( ((n+1) < nmask) && (masks[n+1].y == y) )
	n++;
      else
	break;
    }
    /* clear the rest of the columns for this y row */
    optr = (char *)obuf + ((y-rstart) * rowsize) + ((x-1) * pixsize);
    if( (len = (fun->odim1 - x + 1) * pixsize) >0 )
      memset(optr, 0, len);
    /* bump to next y row */
    y++;
  }

  /* clear y rows after last row containing a mask segment */
  for(y = (nmask ? MAX(rstart,masks[nmask-1].y+1) : rstart); y<=rstop; y++){
    optr = (char *)obuf + ((y-rstart) * rowsize);
    memset(optr, 0, rowsize);
  }

  /* return result */
  return obuf;
}


/*
 *
 * _FunImagePutHeader -- writes header to file
 * used by FunImagePut and sometimes FunFlush (if no Put was done)
 *
 */
#ifdef ANSI_FUNC
int
_FunImagePutHeader(Fun fun, int dim1, int dim2, int bitpix)
#else
int _FunImagePutHeader(fun, dim1, dim2, bitpix)
	Fun fun;
	int dim1, dim2, bitpix;
#endif
{
  int i;
  int extver=1;
  int domerge=0;
  char *extname="IMAGE";
  FITSHead merge;

  /* if no operation has been performed, we have no header */
  if( !fun->ops ){
    /* if we do not have header info yet, we should be able to copy it */
    if( !fun->header ){
      /* copy header from reference image */
      if( fun->ifun )
	_FunCopy2ImageHeader(fun->ifun, fun);
      /* use passed dims and bitpix, if possible */
      if( dim1 && bitpix ){
	/* note that we may not have a header yet -- make one here */
	if( !fun->header ){
	  fun->header = ft_headinit(NULL, 0);
	  ft_headsetl(fun->header, "SIMPLE", 0, 1, "FITS STANDARD", 1);
	}
	/* add the passed dim and bitpix values */
	ft_headseti(fun->header, "BITPIX", 0, bitpix, "Bits/pixel", 1);
	if( dim2 ){
	  ft_headseti(fun->header, "NAXIS", 0, 2, "2-D image", 1);
	  ft_headseti(fun->header, "NAXIS", 1, dim1, "Axis 1 dimension", 1);
	  ft_headseti(fun->header, "NAXIS", 2, dim2, "Axis 2 dimension", 1);
	}
	else{
	  ft_headseti(fun->header, "NAXIS", 0, 1, "1-D image", 1);
	  ft_headseti(fun->header, "NAXIS", 1, dim1, "Axis 1 dimension", 1);
	}
	ft_headsetl(fun->header, "EXTEND", 0, 1, 
		    "Standard extensions might follow", 1);
	/* synchronize the header and the cards after any changes */
	ft_syncdata(fun->header);
	/* fill in values */
	if( dim2 ){
	  fun->dims = 2;
	  fun->dim1 = dim1;
	  fun->dim2 = dim2;
	}
	else{
	  fun->dims = 1;
	  fun->dim1 = dim1;
	  fun->dim2 = 1;
	}
	fun->bitpix = bitpix;
	_FunImageSize(fun);
      }
      /* hmmm ... could not make a header of any sort */
      if( !fun->header )
	return 0;
      /* flag that we need to merge in user params before writing */
      domerge = 1;
    }
    /* if something is already written, this is an image extension */
    if( fun->primio || gtell(fun->gio)>0 ){
      /* required after naxis */
      ft_headseti(fun->header, "PCOUNT", 0, 0, "Random parameter count", 1);
      ft_headseti(fun->header, "GCOUNT", 0, 1, "Group count", 1);
      /* convert first card to a FITS image extension */
      ft_cardfmt((FITSCard)fun->header->cards, 
	 "XTENSION", 0, FT_STRING, "IMAGE", 0, "FITS Image Extension");
      if( !ft_headfind(fun->header, "EXTNAME", 0, 0) )
	ft_headsets(fun->header, "EXTNAME", 0, extname, "Ext. name", 1);
      if( !ft_headfind(fun->header, "EXTVER", 0, 0) )
	ft_headseti(fun->header, "EXTVER", 0, extver, "Ext. version", 1);
      /* delete EXTEND keyword, which is for primary only */
      if( ft_headfind(fun->header, "EXTEND", 0, 0) )
	ft_headdel(fun->header, "EXTEND", 0);
    }
    else{
      /* flag that we have written the primary header */
      fun->primio++;
    }
    /* if the data are floats, we must delete BSCALE and BZERO */
    if( fun->bitpix < 0 ){
      if( ft_headfind(fun->header, "BSCALE", 0, 0) )
	ft_headdel(fun->header, "BSCALE", 0);
      if( ft_headfind(fun->header, "BZERO", 0, 0) )
	ft_headdel(fun->header, "BZERO", 0);
    }
    /* merge in user-specified params with overwrite */
    if( domerge && fun->theader ){
      merge = ft_headmerge(fun->header, fun->theader, 1);
      ft_headfree(fun->theader, 1);
      fun->theader = NULL;
      ft_headfree(fun->header, 1);
      fun->header = merge;
      ft_syncdata(fun->header);
    }
    /* for a 1D image, we have to delete 2D header params */
    if( fun->dims == 1 ){
      ft_headdel(fun->header, "NAXIS", 2);
      /* remove 2D WCS header parameters */
      for(i=0; i<=2; i++){
	ft_headdel(fun->header, "CTYPE", i);
	ft_headdel(fun->header, "CRVAL", i);
	ft_headdel(fun->header, "CRPIX", i);
	ft_headdel(fun->header, "CDELT", i);
	ft_headdel(fun->header, "LTV", i);
	ft_headdel(fun->header, "LTM1_", i);
	ft_headdel(fun->header, "LTM2_", i);
	ft_headdel(fun->header, "CD1_", i);
	ft_headdel(fun->header, "CD2_", i);
	ft_headdel(fun->header, "CD3_", i);
      }
    }

    /* save file position for later updating */
    fun->headpos = gtell(fun->gio);

    /* write the header */
    ft_headwrite(fun->gio, fun->header);

    /* we just wrote the header */
    fun->ops |= OP_WRHEAD;
  }

  /* good news */
  return 1;
}

/*
 *
 * public routines
 *
 */

#ifdef ANSI_FUNC
void *
FunImageGet (Fun fun, void *buf, char *plist)
#else
void *FunImageGet (fun, buf, plist)
     Fun fun;
     void *buf;
     char *plist;
#endif
{
  int domask;
  int doimage;
  int imagetable;
  char *pbuf;
  char *s;
  void *obuf=NULL;
  char paint[SZ_LINE];
  char debug[SZ_LINE];
  char tbuf[SZ_LINE];

  /* sanity checks */
  if( !_FunValid(fun) ){
    gerror(stderr, "data does not contain a valid header\n");
    return NULL;
  }

  /* if we delayed the open before, we have to open now */
  if( !fun->header && strchr(fun->mode, 'r') )
    _FunFITSOpen(fun, fun->fname, "r");

  /* sanity checks */
  if( !fun->header ){
    gerror(stderr, "data does not contain a valid header\n");
    return NULL;
  }

  pbuf = xstrdup(plist);
  domask = 1;
  doimage = 1;
  imagetable = 0;
  if( _FunKeyword(pbuf, "mask", "FUN_MASK", tbuf, SZ_LINE) ){
    if( isfalse(tbuf) )
      domask = 0;
    /* mask=all => no data, just make the mask */
    else if( !strcasecmp(tbuf, "all") )
      doimage = 0;
    /* mask=image => we want to use image masking on a table */
    else if( !strcasecmp(tbuf, "image") )
      imagetable = 1;
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

  /* pick the appropriate routine for tables and/or images */
  if( doimage ){
    if( fun->header->image ){
      obuf = _FunImageExtract(fun, buf, 1, MAX(fun->odim2,1), plist);
    }
    else if( fun->header->table ){
      obuf = _FunTableBin(fun, buf, plist);
      /* if mask=image, we remask using image binning, otherwise not */
      if( !imagetable )
	domask = 0;
    }
    /* don't bother masking if we have no image */
    if( obuf == NULL )
      domask = 0;
  }

  /* filter resulting image, if we have one */
  if( domask ){
    if( fun->filter && *fun->filter )
      s = fun->filter;
    else if( !doimage )
      s = "field";
    else
      s = NULL;
    if( s ){
      /* open the filter, first time through */
      if( !fun->filt ){
	/* make up filter plist string */
	strncpy(tbuf, "type=image", SZ_LINE-1);
	/* add the binning key */
	if( fun->bincols ){
	  strncat(tbuf, ",", SZ_LINE-1);
	  strncat(tbuf, fun->bincols, SZ_LINE-1);
	}
	/* add paint mode */
	if( *paint ){
	  strncat(tbuf, ",", SZ_LINE-1);
	  strncat(tbuf, "paint=", SZ_LINE-1);
	  strncat(tbuf, paint, SZ_LINE-1);
	}
	/* add debug flag */
	if( *debug ){
	  strncat(tbuf, ",", SZ_LINE-1);
	  strncat(tbuf, "debug=", SZ_LINE-1);
	  strncat(tbuf, debug, SZ_LINE-1);
	}
	fun->filt = FilterOpen(fun->header, s, tbuf);
	if( fun->filt && (fun->filt != NOFILTER) ){
	  fun->nmask = FilterImage(fun->filt,
			    fun->x0, fun->x1, fun->y0, fun->y1, fun->block,
			    &(fun->masks), NULL);
	}
      }
      /* perform the filter, if necessary */
      if( fun->filt && (fun->filt != NOFILTER) ){
	obuf = _FunImageMask(fun, obuf, 1, MAX(fun->odim2,1),
			     fun->masks, fun->nmask, plist);
      }
      /* close filters, free masks */
      if( fun->filt && (fun->filt != NOFILTER) ){
	FilterClose(fun->filt);
	fun->filt = NULL;
      }
      if( fun->masks ){
	xfree(fun->masks);
	fun->masks = NULL;
      }
      fun->nmask = 0;
    }
  }

  /* we just read an image */
  fun->ops |= OP_RDIMAGE;

  /* return result */
  return obuf;
}

#ifdef ANSI_FUNC
void *
FunImageRowGet (Fun fun, void *buf, int rstart, int rstop, char *plist)
#else
void *FunImageRowGet (fun, buf, rstart, rstop, plist)
     Fun fun;
     void *buf;
     int rstart;
     int rstop;
     char *plist;
#endif
{
  int domask;
  int doimage;
  char *pbuf;
  void *obuf=NULL;
  char paint[SZ_LINE];
  char debug[SZ_LINE];
  char tbuf[SZ_LINE];

  /* sanity checks */
  if( !_FunValid(fun) ){
    gerror(stderr, "data does not contain a valid header\n");
    return NULL;
  }

  /* if we delayed the open before, we have to open now */
  if( !fun->header && strchr(fun->mode, 'r') )
    _FunFITSOpen(fun, fun->fname, "r");

  /* sanity checks */
  if( !fun->header ){
    gerror(stderr, "data does not contain a valid header\n");
    return NULL;
  }

  pbuf = xstrdup(plist);
  domask = 1;
  doimage = 1;
  if( _FunKeyword(pbuf, "mask", "FUN_MASK", tbuf, SZ_LINE) ){
    if( isfalse(tbuf) )
      domask = 0;
    else if( !strcasecmp(tbuf, "all") )
      doimage = 0;
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

  /* pick the appropriate routine for tables and/or images */
  if( doimage ){
    if( fun->header->image ){
      obuf = _FunImageExtract(fun, buf, rstart, rstop, plist);
    }
    /* we do not get lines for tables (they are not sorted) */
    else if( fun->header->table ){
      obuf = NULL;
      domask = 0;
    }
    else{
      obuf = NULL;
    }
    if( obuf == NULL )
      domask = 0;
  }

  /* filter resulting image, if we have one */
  if( domask ){
    if( fun->filter && *fun->filter ){
      /* open the filter, first time through */
      if( !fun->filt ){
	/* make up filter plist string */
	strncpy(tbuf, "type=image", SZ_LINE-1);
	/* add the binning key */
	if( fun->bincols ){
	  strncat(tbuf, ",", SZ_LINE-1);
	  strncat(tbuf, fun->bincols, SZ_LINE-1);
	}
	/* add paint mode */
	if( *paint ){
	  strncat(tbuf, ",", SZ_LINE-1);
	  strncat(tbuf, "paint=", SZ_LINE-1);
	  strncat(tbuf, paint, SZ_LINE-1);
	}
	/* add debug flag */
	if( *debug ){
	  strncat(tbuf, ",", SZ_LINE-1);
	  strncat(tbuf, "debug=", SZ_LINE-1);
	  strncat(tbuf, debug, SZ_LINE-1);
	}
	fun->filt = FilterOpen(fun->header, fun->filter, tbuf);
	if( fun->filt && (fun->filt != NOFILTER) ){
	  fun->nmask = FilterImage(fun->filt,
			    fun->x0, fun->x1, fun->y0, fun->y1, fun->block,
			    &(fun->masks), NULL);
	}
      }
      /* perform the filter, if necessary */
      if( fun->filt && (fun->filt != NOFILTER) ){
	obuf = _FunImageMask(fun, obuf, rstart, rstop,
			     fun->masks, fun->nmask, plist);
      }
    }
  }

  /* we just read an image row */
  fun->ops |= OP_RDIMAGE;

  /* return result */
  return obuf;
}

#ifdef ANSI_FUNC
static int
_FunImagePut (Fun fun, void *buf, int rstart, int rstop,
	      int dim1, int dim2, int bitpix, char *plist)
#else
static int _FunImagePut (fun, buf, rstart, rstop, dim1, dim2, bitpix, plist)
     Fun fun;
     void *buf;
     int rstart;
     int rstop;
     int dim1;
     int dim2;
     int bitpix;
     char *plist;
#endif
{
  char tbuf[SZ_LINE];
  char *pbuf;
  char *zbuf;
  int convert;
  int dlen;
  int dpad;
  int tdim;
  off_t newpos;

  /* sanity checks */
  if( !_FunValid(fun) )
    return 0;

  /* this extension is an image */
  fun->type = FUN_IMAGE;

  /* put header */
  if( !_FunImagePutHeader(fun, dim1, dim2, bitpix) )
    return 0;

  /* fill in the blanks, if necessary */
  if( (dim1 == 0) && (dim2 == 0) && (bitpix == 0) ){
    bitpix = fun->bitpix;
    dim1 = fun->dim1;
    dim2 = fun->dim2;
  }

  /* see if we override the normal data conversion */
  pbuf = xstrdup(plist);
  if( _FunKeyword(pbuf, "convert", NULL, tbuf, SZ_LINE) )
    convert = istrue(tbuf);
  else
    convert = !is_bigendian();
  if( pbuf ) xfree(pbuf);

  /* determine if we are writing one line or the whole image */
  if( !rstart )
    tdim = dim1 * MAX(dim2,1);
  else
    tdim = dim1 * (rstop-rstart+1);

  /* convert to IEEE, if necessary */
  if( convert )
    swap_data(buf, tdim,  bitpix/FT_WORDLEN);

  /* determine data size */
  dlen = tdim * ABS(bitpix/FT_WORDLEN);

  /* we need to skip to the right row */
  if( rstart ){
    newpos = ((rstart-1) * dim1) * ABS(fun->dtype);
    if( gskip(fun->gio, newpos - fun->curpos) < 0 ){
      gerror(stderr,
	     "FunImagePut can't seek %d bytes into image data\n",
	     newpos - fun->curpos);
      return 0;
    }
    fun->curpos = newpos;
  }

  /* write the data */
  gwrite(fun->gio, buf, sizeof(char), dlen);

  /* update the current position */
  fun->curpos += dlen;

  /* and the current number of bytes read */
  fun->bytes += dlen;

  /* write the padding, if we just wrote the last row (or full image) */
  if( !rstart || (rstop == MAX(dim2,1)) ){
    if( (dpad = FT_BLOCK - (fun->bytes % FT_BLOCK)) != FT_BLOCK ){
      zbuf = xcalloc(dpad, sizeof(char));
      gwrite(fun->gio, zbuf, sizeof(char), dpad);
      if( zbuf ) xfree(zbuf);
      /* update current position */
      fun->curpos += dpad;
      fun->bytes += dpad;
    }
  }

  /* we just wrote an image */
  fun->ops |= OP_WRIMAGE;

  /* success */
  return 1;
}

#ifdef ANSI_FUNC
int
FunImagePut (Fun fun, void *buf, int dim1, int dim2, int bitpix, char *plist)
#else
int FunImagePut (fun, buf, dim1, dim2, bitpix, plist)
     Fun fun;
     void *buf;
     int dim1;
     int dim2;
     int bitpix;
     char *plist;
#endif
{
  return _FunImagePut(fun, buf, 0, 0, dim1, dim2, bitpix, plist);
}

#ifdef ANSI_FUNC
int
FunImageRowPut (Fun fun, void *buf, int rstart, int rstop, int dim1, int dim2,
		int bitpix, char *plist)
#else
int FunImageRowPut (fun, buf, rstart, rstop, dim1, dim2, bitpix, plist)
     Fun fun;
     void *buf;
     int rstart;
     int rstop;
     int dim1;
     int dim2;
     int bitpix;
     char *plist;
#endif
{
  return _FunImagePut(fun, buf, rstart, rstop, dim1, dim2, bitpix, plist);
}

