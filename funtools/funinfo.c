/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

#include <funtoolsP.h>

/*
 *
 * FunInfoGet -- get information from the funtools struct
 *
 */
#ifdef __STDC__
int FunInfoGet(Fun fun, ...) 
{
  int type;
  int got;
  char *addr;
  Fun ofun;
  va_list args;
  va_start(args, fun);
#else
int FunInfoGet(va_alist) va_dcl
{
  Fun fun;
  int type;
  int got;
  char *addr;
  Fun ofun;
  va_list args;
  va_start(args);
  fun  = va_arg(args, Fun);
#endif
  /* just in case ... */
  if( !_FunValid(fun) ){
    gerror(stderr, "invalid funtools handle\n");
    return 0;
  }
  /* if we delayed the open before, we have to open now */
  if( !fun->header && strchr(fun->mode, 'r') )
    _FunFITSOpen(fun, fun->fname, "r");

  for(got=0; (type=va_arg(args, int)); got++){
    addr=va_arg(args, void *);
    ofun = fun;
    if( fun->current ) fun = fun->current;
    switch(type){
    case FUN_FNAME:
      if( addr ) memcpy(addr, &fun->fname, sizeof(fun->fname));
      break;
    case FUN_GIO:
      if( addr ) memcpy(addr, &fun->gio, sizeof(fun->gio));
      break;
    case FUN_HEADER:
      if( addr ) memcpy(addr, &fun->header, sizeof(fun->header));
      break;
    case FUN_THEADER:
      if( addr ) memcpy(addr, &fun->theader, sizeof(fun->theader));
      break;
    case FUN_WCS:
      if( addr ) memcpy(addr, &fun->wcs, sizeof(fun->wcs));
      break;
    case FUN_WCS0:
      if( addr ) memcpy(addr, &fun->wcs0, sizeof(fun->wcs0));
      break;
    case FUN_TYPE:
      if( addr ) memcpy(addr, &fun->type, sizeof(fun->type));
      break;
    case FUN_BITPIX:
      if( addr ) memcpy(addr, &fun->bitpix, sizeof(fun->bitpix));
      break;
    case FUN_MIN1:
      if( addr ) memcpy(addr, &fun->min1, sizeof(fun->min1));
      break;
    case FUN_MAX1:
      if( addr ) memcpy(addr, &fun->max1, sizeof(fun->max1));
      break;
    case FUN_MIN2:
      if( addr ) memcpy(addr, &fun->min2, sizeof(fun->min2));
      break;
    case FUN_MAX2:
      if( addr ) memcpy(addr, &fun->max2, sizeof(fun->max2));
      break;
    case FUN_DIM1:
      if( addr ) memcpy(addr, &fun->dim1, sizeof(fun->dim1));
      break;
    case FUN_DIM2:
      if( addr ) memcpy(addr, &fun->dim2, sizeof(fun->dim2));
      break;
    case FUN_DIMS:
      if( addr ) memcpy(addr, &fun->dims, sizeof(fun->dims));
      break;
    case FUN_ENDIAN:
      if( addr ) memcpy(addr, &fun->endian, sizeof(fun->endian));
      break;
    case FUN_FILTER:
      if( addr ) memcpy(addr, &fun->filter, sizeof(fun->filter));
      break;
    case FUN_OPS:
      if( addr ) memcpy(addr, &fun->ops, sizeof(fun->ops));
      break;
      /* image information */
    case FUN_DTYPE:
      if( addr ) memcpy(addr, &fun->dtype, sizeof(fun->dtype));
      break;
    case FUN_DLEN:
      if( addr ) memcpy(addr, &fun->dlen, sizeof(fun->dlen));
      break;
    case FUN_DPAD:
      if( addr ) memcpy(addr, &fun->dpad, sizeof(fun->dpad));
      break;
    case FUN_DOBLANK:
      if( addr ) memcpy(addr, &fun->doblank, sizeof(fun->doblank));
      break;
    case FUN_BLANK:
      if( addr ) memcpy(addr, &fun->blank, sizeof(fun->blank));
      break;
    case FUN_SCALED:
      if( addr ) memcpy(addr, &fun->scaled, sizeof(fun->scaled));
      break;
    case FUN_BSCALE:
      if( addr ) memcpy(addr, &fun->bscale, sizeof(fun->bscale));
      break;
    case FUN_BZERO:
      if( addr ) memcpy(addr, &fun->bzero, sizeof(fun->bzero));
      break;
      /* table information */
    case FUN_BINCOLS:
      if( addr ) memcpy(addr, &fun->bincols, sizeof(fun->bincols));
      break;
    case FUN_BINOFFS:
      if( addr ) memcpy(addr, fun->bin, sizeof(fun->bin));
      break;
    case FUN_ROWSIZE:
      if( addr ) memcpy(addr, &fun->rowsize, sizeof(fun->rowsize));
      break;
    case FUN_NROWS:
      if( addr ) memcpy(addr, &fun->total, sizeof(fun->total));
      break;
    case FUN_ROW:
      if( addr ) memcpy(addr, &fun->io, sizeof(fun->io));
      break;
    case FUN_OVERFLOW:
      if( addr ) memcpy(addr, &fun->overflow, sizeof(fun->overflow));
      break;
      /* array information */
    case FUN_SKIP:
      if( addr ) memcpy(addr, &fun->skip, sizeof(fun->skip));
      break;
      /* section information */
    case FUN_IFUN:
    case FUN_IFUN0:
      if( addr ) memcpy(addr, &fun->ifun, sizeof(fun->ifun));
      break;
    case FUN_BFUN:
      if( addr ) memcpy(addr, fun->bfun, sizeof(fun->bfun));
      break; 
   case FUN_SECT_X0:
      if( addr ) memcpy(addr, &fun->x0, sizeof(fun->x0));
      break;
    case FUN_SECT_X1:
      if( addr ) memcpy(addr, &fun->x1, sizeof(fun->x1));
      break;
    case FUN_SECT_Y0:
      if( addr ) memcpy(addr, &fun->y0, sizeof(fun->y0));
      break;
    case FUN_SECT_Y1:
      if( addr ) memcpy(addr, &fun->y1, sizeof(fun->y1));
      break;
    case FUN_SECT_BLOCK:
      if( addr ) memcpy(addr, &fun->block, sizeof(fun->block));
      break;
    case FUN_SECT_BTYPE:
      if( addr ) memcpy(addr, &fun->btype, sizeof(fun->btype));
      break;
    case FUN_SECT_DIM1:
      if( addr ) memcpy(addr, &fun->odim1, sizeof(fun->odim1));
      break;
    case FUN_SECT_DIM2:
      if( addr ) memcpy(addr, &fun->odim2, sizeof(fun->odim2));
      break;
    case FUN_SECT_DIMS:
      if( addr ) memcpy(addr, &fun->odims, sizeof(fun->odims));
      break;
    case FUN_SECT_BITPIX:
      if( addr ) memcpy(addr, &fun->obitpix, sizeof(fun->obitpix));
      break;
    case FUN_SECT_DTYPE:
      if( addr ) memcpy(addr, &fun->odtype, sizeof(fun->odtype));
      break;
      /* convenient ways to get to data in binned images and tables */
    case FUN_RAWBUF:
      if( addr ) memcpy(addr, &fun->rawbuf, sizeof(fun->rawbuf));
      break;
    case FUN_RAWSIZE:
      if( addr ) memcpy(addr, &fun->rawsize, sizeof(fun->rawsize));
      break;
      /* specified columns */
    case FUN_NCOL:
      if( addr ) memcpy(addr, &fun->ncol, sizeof(fun->ncol));
      break;
    case FUN_COLS:
      if( addr ) memcpy(addr, &fun->cols, sizeof(fun->cols));
      break;
    case FUN_LTYPE:
      if( addr ) memcpy(addr, &ofun->ltype, sizeof(ofun->ltype));
      break;
    case FUN_LMEM:
      if( addr ) memcpy(addr, &ofun->lmem, sizeof(ofun->lmem));
      break;
    case FUN_HEAD:
      if( addr ) memcpy(addr, &ofun->head, sizeof(ofun->head));
      break;
    case FUN_CURRENT:
      if( addr ) memcpy(addr, &ofun->current, sizeof(ofun->current));
      break;
    case FUN_NEXT:
      if( addr ) memcpy(addr, &ofun->next, sizeof(ofun->next));
      break;
    case FUN_RAWPARAM:
      if( addr ) memcpy(addr, &fun->doraw, sizeof(fun->doraw));
      break;
    case FUN_PRIMARYHEADER:
      if( addr ) memcpy(addr, &fun->doprim, sizeof(fun->doprim));
      break;
    case FUN_VCOLS:
      if( addr ) memcpy(addr, &fun->vcols, sizeof(fun->vcols));
      break;
    case FUN_VFMT:
      if( addr ) memcpy(addr, &fun->vfmt, sizeof(fun->vfmt));
      break;
    default:
      gerror(stderr,
	     "invalid info parameter passed to FunInfoGet: %d\n", type);
      return(got);
    }
  }
  return got;
}

/*
 *
 * FunInfoPut -- set information in the funtools struct
 *
 */
#ifdef __STDC__
int FunInfoPut(Fun fun, ...) 
{
  Fun ref;
  Fun oifun;
  Fun ofun;
  int i;
  int type;
  int got;
  char *addr;
  va_list args;
  va_start(args, fun);
#else
int FunInfoPut(va_alist) va_dcl
{
  Fun fun;
  Fun ref;
  Fun oifun;
  Fun ofun;
  int i;
  int type;
  int got;
  char *addr;
  va_list args;
  va_start(args);
  fun  = va_arg(args, Fun);
#endif
  /* just in case ... */
  if( !_FunValid(fun) ){
    gerror(stderr, "invalid funtools handle\n");
    return 0;
  }
  /* if we delayed the open before, we have to open now */
  if( !fun->header && strchr(fun->mode, 'r') )
    _FunFITSOpen(fun, fun->fname, "r");

  ofun = fun;
  if( fun->current ) fun = fun->current;
  for(got=0; (type=va_arg(args, int)); got++){
    addr=va_arg(args, void *);
    switch(type){
    case FUN_FNAME:
      if( addr ){
	if( fun->fname ) xfree(fun->fname);
	fun->fname = xstrdup(addr);
      }
      break;
    case FUN_GIO:
      if( addr ) memcpy(&fun->gio, addr, sizeof(fun->gio));
      break;
    case FUN_HEADER:
      if( addr ) memcpy(&fun->header, addr, sizeof(fun->header));
      break;
    case FUN_THEADER:
      if( addr ) memcpy(&fun->theader, addr, sizeof(fun->theader));
      break;
    case FUN_WCS:
      if( addr ) memcpy(&fun->wcs, addr, sizeof(fun->wcs));
      break;
    case FUN_WCS0:
      if( addr ) memcpy(&fun->wcs0, addr, sizeof(fun->wcs0));
      break;
    case FUN_TYPE:
      if( addr ) memcpy(&fun->type, addr, sizeof(fun->type));
      break;
    case FUN_BITPIX:
      if( addr ) memcpy(&fun->bitpix, addr, sizeof(fun->bitpix));
      break;
    case FUN_MIN1:
      if( addr ) memcpy(&fun->min1, addr, sizeof(fun->min1));
      break;
    case FUN_MAX1:
      if( addr ) memcpy(&fun->max1, addr, sizeof(fun->max1));
      break;
    case FUN_MIN2:
      if( addr ) memcpy(&fun->min2, addr, sizeof(fun->min2));
      break;
    case FUN_MAX2:
      if( addr ) memcpy(&fun->max2, addr, sizeof(fun->max2));
      break;
    case FUN_DIM1:
      if( addr ) memcpy(&fun->dim1, addr, sizeof(fun->dim1));
      break;
    case FUN_DIM2:
      if( addr ) memcpy(&fun->dim2, addr, sizeof(fun->dim2));
      break;
    case FUN_DIMS:
      if( addr ) memcpy(&fun->dims, addr, sizeof(fun->dims));
      break;
    case FUN_ENDIAN:
      if( addr ) memcpy(&fun->endian, addr, sizeof(fun->endian));
      break;
    case FUN_OPS:
      if( addr ) memcpy(&fun->ops, addr, sizeof(fun->ops));
      break;
    case FUN_FILTER:
      if( addr ) memcpy(&fun->filter, addr, sizeof(fun->filter));
      break;
      /* image information */
    case FUN_DTYPE:
      if( addr ) memcpy(&fun->dtype, addr, sizeof(fun->dtype));
      break;
    case FUN_DLEN:
      if( addr ) memcpy(&fun->dlen, addr, sizeof(fun->dlen));
      break;
    case FUN_DPAD:
      if( addr ) memcpy(&fun->dpad, addr, sizeof(fun->dpad));
      break;
    case FUN_DOBLANK:
      if( addr ) memcpy(&fun->doblank, addr, sizeof(fun->doblank));
      break;
    case FUN_BLANK:
      if( addr ) memcpy(&fun->blank, addr, sizeof(fun->blank));
      break;
    case FUN_SCALED:
      if( addr ) memcpy(&fun->scaled, addr, sizeof(fun->scaled));
      break;
    case FUN_BSCALE:
      if( addr ) memcpy(&fun->bscale, addr, sizeof(fun->bscale));
      break;
    case FUN_BZERO:
      if( addr ) memcpy(&fun->bzero, addr, sizeof(fun->bzero));
      break;
      /* table information */
    case FUN_BINCOLS:
      if( addr ) memcpy(&fun->bincols, addr, sizeof(fun->bincols));
      break;
    case FUN_BINOFFS:
      if( addr ) memcpy(fun->bin, addr, sizeof(fun->bin));
      break;
    case FUN_ROWSIZE:
      if( addr ) memcpy(&fun->rowsize, addr, sizeof(fun->rowsize));
      break;
    case FUN_NROWS:
      if( addr ) memcpy(&fun->total, addr, sizeof(fun->total));
      break;
    case FUN_OVERFLOW:
      if( addr ) memcpy(&fun->overflow, addr, sizeof(fun->overflow));
      break;
      /* array information */
    case FUN_SKIP:
      if( addr ) memcpy(&fun->skip, addr, sizeof(fun->skip));
      break;
      /* section information */
    case FUN_IFUN:
      if( addr ){
	ref = *(Fun *)addr;
	if( _FunValid(ref) ){
	  /* first, remove old ifun from the backlink list */
	  if( (oifun = fun->ifun) != NULL ){
	    for(i=0; i<FUN_MAXBFUN; i++){
	      if( oifun->bfun[i] == fun ){
		oifun->bfun[i] = NULL;
		break;
	      }
	    }
	  }
	  /* set new reference handle */
	  fun->ifun = ref;
	  /* enter this handle in the backlink list of the reference file */
	  for(i=0; i<FUN_MAXBFUN; i++){
	    if( !fun->ifun->bfun[i] ){
	      fun->ifun->bfun[i] = fun;
	      break;
	    }
	  }
	  /* free old columns */
	  _FunColumnFree(fun);
	  /* new ref handle means reset the ops for this funtools struct */
	  fun->ops = 0;
	  fun->bytes = 0;
	}
      }
      /* reset the fun handle */
      else
	fun->ifun = NULL;
      break;
    /* same as FUN_IFUN above, but don't reset I/O or columns */
    case FUN_IFUN0:
      if( addr ){
	ref = *(Fun *)addr;
	if( _FunValid(ref) ){
	  /* first, remove old ifun from the backlink list */
	  if( (oifun = fun->ifun) != NULL ){
	    for(i=0; i<FUN_MAXBFUN; i++){
	      if( oifun->bfun[i] == fun ){
		oifun->bfun[i] = NULL;
		break;
	      }
	    }
	  }
	  /* set new reference handle */
	  fun->ifun = ref;
	  /* enter this handle in the backlink list of the reference file */
	  for(i=0; i<FUN_MAXBFUN; i++){
	    if( !fun->ifun->bfun[i] ){
	      fun->ifun->bfun[i] = fun;
	      break;
	    }
	  }
	}
      }
      /* reset the fun handle */
      else
	fun->ifun = NULL;
      break;
    case FUN_BFUN:
      if( addr ) memcpy(fun->bfun, addr, sizeof(fun->bfun));
      break; 
    case FUN_SECT_X0:
      if( addr ) memcpy(&fun->x0, addr, sizeof(fun->x0));
      break;
    case FUN_SECT_X1:
      if( addr ) memcpy(&fun->x1, addr, sizeof(fun->x1));
      break;
    case FUN_SECT_Y0:
      if( addr ) memcpy(&fun->y0, addr, sizeof(fun->y0));
      break;
    case FUN_SECT_Y1:
      if( addr ) memcpy(&fun->y1, addr, sizeof(fun->y1));
      break;
    case FUN_SECT_BLOCK:
      if( addr ) memcpy(&fun->block, addr, sizeof(fun->block));
      break;
    case FUN_SECT_BTYPE:
      if( addr ) memcpy(&fun->btype, addr, sizeof(fun->btype));
      break;
    case FUN_SECT_DIM1:
      if( addr ) memcpy(&fun->odim1, addr, sizeof(fun->odim1));
      break;
    case FUN_SECT_DIM2:
      if( addr ) memcpy(&fun->odim2, addr, sizeof(fun->odim2));
      break;
    case FUN_SECT_DIMS:
      if( addr ) memcpy(&fun->odims, addr, sizeof(fun->odims));
      break;
    case FUN_SECT_BITPIX:
      if( addr ) memcpy(&fun->obitpix, addr, sizeof(fun->obitpix));
      break;
    case FUN_SECT_DTYPE:
      if( addr ) memcpy(&fun->odtype, addr, sizeof(fun->odtype));
      break;
      /* convenient ways to get to data in binned images and tables */
    case FUN_RAWBUF:
      if( addr ) memcpy(&fun->rawbuf, addr, sizeof(fun->rawbuf));
      break;
    case FUN_RAWSIZE:
      if( addr ) memcpy(&fun->rawsize, addr, sizeof(fun->rawsize));
      break;
      /* specified columns */
    case FUN_NCOL:
      if( addr ) memcpy(&fun->ncol, addr, sizeof(fun->ncol));
      break;
    case FUN_COLS:
      if( addr ) memcpy(&fun->cols, addr, sizeof(fun->cols));
      break;
    case FUN_LTYPE:
      if( addr ) memcpy(&ofun->ltype, addr, sizeof(ofun->ltype));
      break;
    case FUN_LMEM:
      if( addr ) memcpy(&ofun->lmem, addr, sizeof(ofun->lmem));
      break;
    case FUN_HEAD:
      if( addr ) memcpy(&ofun->head, addr, sizeof(ofun->head));
      break;
    case FUN_CURRENT:
      if( addr ) memcpy(&ofun->current, addr, sizeof(ofun->current));
      break;
    case FUN_NEXT:
      if( addr ) memcpy(&ofun->next, addr, sizeof(ofun->next));
      break;
    case FUN_RAWPARAM:
      if( addr ) memcpy(&fun->doraw, addr, sizeof(fun->doraw));
      break;
    case FUN_PRIMARYHEADER:
      if( addr ) memcpy(&fun->doprim, addr, sizeof(fun->doprim));
      break;
    case FUN_VCOLS:
      if( addr ){
	if( fun->vcols ) xfree(fun->vcols);
	fun->vcols = xstrdup(addr);
      }
    case FUN_VFMT:
      if( addr ){
	if( fun->vfmt ) xfree(fun->vfmt);
	fun->vfmt = xstrdup(addr);
      }
      break;
    default:
      gerror(stderr,
	     "invalid info parameter passed to FunInfoPut: %d\n", type);
      return(got);
    }
  }
  return got;
}

