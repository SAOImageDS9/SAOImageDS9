/*
 *	Copyright (c) 2005 Smithsonian Astrophysical Observatory
 */

/*
 *
 * idxacts.c -- action routines for idx
 *
 */

#include <filter.h>
#include <idx.h>
#include <idx.tab.h>

#if HAVE_LONG_LONG
#define LFMT "%lld"
#else
#define LFMT "%ld"
#endif

#define IDX_DEBUG 1
#if IDX_DEBUG
#define IPRINTF(x) if( idx_debug ) fprintf x
#else
#define IPRINTF(x)
#endif

/* used by idx.l, so it must be global */
int idx_debug=0;

/*
 *
 * private routines
 *
 */

#define MAXD 3
static char dbuf[MAXD][SZ_LINE];
static int nd=0;

static char _swapped[8];
static int idx_io=IDX_IO_DEFAULT;

static char *idxcolname=NULL;
static char *idxfilename=NULL;
static char *idxfileroot1=NULL;
static char *idxfileroot2=NULL;
static char *idxpath=NULL;
static char *idxsort=NULL;

static char fmt[SZ_LINE];

#ifdef ANSI_FUNC
static void *
_swap(void *ibuf, int isize)
#else
static void *_swap(ibuf, isize)
     void *ibuf;
     int isize;
#endif
{
  return ft_dataswap(_swapped, ibuf, isize, isize*8);
}

#if IDX_DEBUG
#ifdef ANSI_FUNC
static char *
rowdisp(idxrowrec *row)
#else
static char *rowdisp(row)
     idxrowrec *row;
#endif
{
  int i;
  char tbuf[SZ_LINE];

  if( nd >= MAXD ) nd = 0;
  *dbuf[nd] = '\0';
  switch(row->rtype){
  case IDX_ROW_LIST:
    if( row->s ){
      snprintf(dbuf[nd], SZ_LINE-1, "%s[ROW", row->s);
    }
    else{
      snprintf(dbuf[nd], SZ_LINE-1, "[ROW");
    }
    for(i=0; i<row->nrow; i++){
      strncat(dbuf[nd], " ", SZ_LINE-1);
      snprintf(tbuf, SZ_LINE-1, "%d:%d", row->startrow[i], row->stoprow[i]);
      strncat(dbuf[nd], tbuf, SZ_LINE-1);
    }
    strncat(dbuf[nd], "]", SZ_LINE-1);
    break;
  case IDX_SORT:
    snprintf(dbuf[nd], SZ_LINE-1, "[IDX_SORT]");
    break;
  case IDX_OR_SORT:
    snprintf(dbuf[nd], SZ_LINE-1, "[IDX_OR_SORT]");
    break;
  case IDX_AND_SORT:
    snprintf(dbuf[nd], SZ_LINE-1, "[IDX_AND_SORT]");
    break;
  case IDX_INDEF:
    snprintf(dbuf[nd], SZ_LINE-1, "[INDEF]");
    break;
  }
  if( !*dbuf[nd] ){
    snprintf(dbuf[nd], SZ_LINE-1, "type=%d?", row->rtype);
  }
  return dbuf[nd++];
}
#endif

#ifdef ANSI_FUNC
static int
_idxvalfree(idxvalrec *v)
#else
static int _idxvalfree(v)
  idxvalrec *v;
#endif
{
  if( !v )       return 0;
  if( v->s )     xfree(v->s);
#ifdef HAVE_SYS_MMAN_H
  if( v->idata ) munmap(v->idata, v->ilen);
#endif
  /* these are linked (i.e. if iname does not exist, its a copy of another */
  if( v->iname && v->igio && v->ifits ){
    gclose(v->igio);
    xfree(v->iname);
    ft_headfree(v->ifits, 1);
  }
  xfree(v);
  return 1;
}

#ifdef ANSI_FUNC
static int
_idxrowfree(idxrowrec *r)
#else
static int _idxrowfree(r)
  idxrowrec *r;
#endif
{
  int tries=0;
  int exit_status;

  if( !r ) return 0;
  if( r->s ) xfree(r->s);
  if( r->startrow ) xfree(r->startrow);
  if( r->stoprow ) xfree(r->stoprow);
  if( r->ifile )
    fclose(r->ifile);
  else if( r->ichan )
    close(r->ichan);
  if( r->ochan )
    close(r->ochan);
#if HAVE_MINGW32==0
  if( r->pid ){
    while( (waitpid(r->pid, &exit_status, WNOHANG)==0) && (tries<10) ){
      gsleep(10);
      tries++;
    }
    r->pid = 0;
  }
#endif
  if( r->fdata ){
#ifdef HAVE_SYS_MMAN_H
    munmap(r->fdata, r->flen);
#endif
  }
  xfree(r);
  return 1;
}


#ifdef ANSI_FUNC
static int
_idxstartsort(int type, int *ichan, int *ochan, int *pid)
#else
static int _idxstartsort(type, ichan, ochan, pid)
     int type;
     int *ichan;
     int *ochan;
     int *pid;
#endif
{
  char *s;
  char cmd[SZ_LINE];

  if( !idxsort ){
    if( idxpath ) return 0;
    if( (s=(char *)getenv("PATH")) ){
      idxpath = xstrdup(s);
    }
    if( !(idxsort=Find(IDX_SORTPROG, "x", NULL, idxpath)) &&
	!(idxsort=Find(IDX_SORTPROG, "x", NULL, "."))  	  ){
      idxerror("index sort program cannot be found");
      return 0;
    }
  }
  /* construct command line for sort program */
  switch(type){
  case IDX_SORT:
    snprintf(cmd, SZ_LINE-1, "%s -B4 +i0", idxsort);
    break;
  case IDX_OR_SORT:
    snprintf(cmd, SZ_LINE-1, "%s -B4 +i0 -u", idxsort);
    break;
  case IDX_AND_SORT:
    snprintf(cmd, SZ_LINE-1, "%s -B4 +i0 -D", idxsort);
    break;
  default:
    snprintf(cmd, SZ_LINE-1, "%s -B4 +i0", idxsort);
    break;
  }
  /* start the sort program */
  if( !ProcessOpen(cmd, ichan, ochan, pid) ){
    idxerror("index sort process cannot be started");
    return 0;
  }
  return 1;
}

#ifdef ANSI_FUNC
static int
_idxwritesort(idxrowrec *x, idxrowrec *row)
#else
static int _idxwritesort(x, row)
     idxrowrec *x;
     idxrowrec *row;
#endif
{
  int i, j, k=0;
  int rowsize;
  int ioffset;
  int itype;
  int isize;
  int obuf[SZ_LINE];
  long ipos;
  char nbuf[8];
  idxvalrec *v=NULL;

  v = row->v;
  rowsize = ft_naxis(v->ifits, 1);
  ioffset = v->ioffset;
  itype = v->itype;
  isize = ft_sizeof(v->itype);
  for(i=0; i<row->nrow; i++){
    for(j=row->startrow[i]; j<=row->stoprow[i]; j++){
      ipos =  v->ifits->data + ((j-1)*rowsize) + ioffset;
      switch( idx_io ){
      case IDX_IO_MMAP:
	if( v->idata ){
#ifdef HAVE_SYS_MMAN_H
	  memcpy(nbuf, &v->idata[ipos], isize);
#else
	  idxerror("mmap not supported on this system");
#endif
	  break;
	}
      case IDX_IO_LSEEK:
	if( gseek(v->igio, (off_t)ipos, 0) < 0 ){
	  idxerror("can't lseek into index file");
	  return 0;
	}
	if( !gread(v->igio, nbuf, isize, 1) ){
	  idxerror("can't read index file");
	  return 0;
	}
	break;
      }
      switch(itype){
      case 'B':
	obuf[k++] = (int)*(unsigned char *)(nbuf);
	break;
      case 'I':
	obuf[k++] = (int)*(short *)_swap(nbuf,2);
	break;
      case 'U':
	obuf[k++] = (int)*(unsigned short *)_swap(nbuf,2);
	break;
      case 'J':
	obuf[k++] = (int)*(int *)_swap(nbuf,4);
	break;
      case 'V':
	obuf[k++] = (int)*(unsigned int *)_swap(nbuf,4);
	break;
      case 'K':
	idxerror("64-bit integer not supported for index");
	break;
      default:
	idxerror("illegal index data type");
      }
      if( k == SZ_LINE ){
	if( write(x->ochan, obuf, k*sizeof(int)) != (int)(k*sizeof(int)) ){
	  idxerror("can't write index value to sort");
	  return 0;
	}
	k = 0;
      }
    }
  }
  if( k ){
    if( write(x->ochan, obuf, k*sizeof(int)) != (int)(k*sizeof(int)) ){
      idxerror("can't write index value to sort");
      return 0;
    }
  }
  return 1;
}

#ifdef ANSI_FUNC
static int
_idxcompare(char *buf, int type, int offset, int n, 
	    double d, longlong l, int t)
#else
static int _idxcompare(buf, type, offset, n, d, l, t)
     char *buf;
     int type;
     int offset;
     int n;
     double d;
     longlong l;
     int t;
#endif
{
  unsigned short sval;
  unsigned int xval;
  int xn;
  double dval=0.0;
  longlong lval=0;
  int isint=0;

  switch(type){
  case 'X':
    isint = 1;
    if( n == 16 ){
      xn = 1;
      n = 1;
    }
    else if( n == 32 ){
      xn = 2;
      n = 1;
    }
    else if( n == 64 ){
      xn = 3;
      n = 1;
    }
    else{
      xn = 0;
      n = (n+7)/8;
    }
    switch(xn){
    case 1:
      memcpy(&sval, _swap(buf+offset,2), sizeof(unsigned short));
      dval = (double)sval;
      lval = (longlong)sval;
      break;
    case 2:
      memcpy(&xval, _swap(buf+offset,4), sizeof(unsigned int));
      dval = (double)xval;
      lval = (longlong)xval;
      break;
    case 3:
      memcpy(&lval, _swap(buf+offset,8), sizeof(unsigned int));
      dval = (double)lval;
      break;
    case 0:
    default:
      xval = (unsigned int)*(unsigned char *)(buf+offset);
      dval = (double)xval;
      lval = (longlong)xval;
      break;
    }
  case 'B':
    isint = 1;
    dval = (double)*(unsigned char *)(buf+offset);
    lval = (longlong)*(unsigned char *)(buf+offset);
    break;
  case 'I':
    isint = 1;
    dval = (double)*(short *)_swap(buf+offset,2);
    lval = (longlong)*(short *)_swap(buf+offset,2);
    break;
  case 'U':
    isint = 1;
    dval = (double)*(unsigned short *)_swap(buf+offset,2);
    lval = (longlong)*(unsigned short *)_swap(buf+offset,2);
    break;
  case 'J':
    isint = 1;
    dval = (double)*(int *)_swap(buf+offset,4);
    lval = (longlong)*(int *)_swap(buf+offset,4);
    break;
  case 'V':
    isint = 1;
    dval = (double)*(unsigned int *)_swap(buf+offset,4);
    lval = (longlong)*(unsigned int *)_swap(buf+offset,4);
    break;
  case 'K':
    isint = 1;
    dval = (double)*(longlong *)_swap(buf+offset,8);
    lval = (longlong)*(longlong *)_swap(buf+offset,8);
    break;
  case 'E':
    isint = 0;
    dval = (double)*(float *)_swap(buf+offset,4);
    lval = (longlong)*(float *)_swap(buf+offset,4);
    break;
  case 'D':
    isint = 0;
    dval = *(double *)_swap(buf+offset,8);
    lval = *(longlong *)_swap(buf+offset,8);
    break;
  case 'L':
    isint = 1;
    dval = (double)*(unsigned char *)(buf+offset);
    lval = (longlong)*(unsigned char *)(buf+offset);
    break;
  case 'A':
  default:
    gerror(stderr, "illegal numeric value for compare: %d\n", type);
    break;
  }
  if( t == PARSE_INTEGER ){
    if( isint ){
      if( lval < l )
	return -1;
      else if( lval > l )
	return 1;
      else
	return 0;
    }
    else{
      if( dval < l )
	return -1;
      else if( dval > l )
	return 1;
      else
	return 0;
    }
  }
  else{
    if( isint ){
      if( lval < d )
	return -1;
      else if( lval > d )
	return 1;
      else
	return 0;
    }
    else{
      if( dval < d )
	return -1;
      else if( dval > d )
	return 1;
      else
	return 0;
    }
  }
}

#ifdef ANSI_FUNC
static int
_idxbsearch(GIO gio, FITSHead fits, int type, int offset, int n,
	    int exact, int edge, double d, longlong l, int t)
#else
static int _idxbsearch(gio, fits, type, offset, n, exact, edge, d, l, t)
     GIO gio;
     FITSHead fits;
     int type;
     int offset;
     int n;
     int exact;
     int edge;
     double d;
     longlong l;
     int t;
#endif
{
  int high, low, try;
  int cmp;
  int rowsize;
  size_t got;
  long ipos;
  char *buf=NULL;

  /* sanity check */
  if( !gio || !fits ) return -1;

  /* set limits */
  low = 0;
  high = ft_naxis(fits, 2)+1;
  rowsize = ft_naxis(fits, 1);
  /* search */
  while( (high - low) > 1){
    try = (high + low) / 2;
    /* grab desired row in index */
    ipos =  fits->data + ((try-1)*rowsize);
    if( gseek(gio, (off_t)ipos, 0) < 0 ) return -1;
    buf = _gread(gio, NULL, sizeof(char), rowsize, &got);
    if( !buf || (got != (size_t)rowsize) ) return -1;
    /* compare row to key value */
    cmp = _idxcompare(buf, type, offset, n, d, l, t);
    if( buf ) xfree(buf);
    switch(cmp){
    /* thisval < val */
    case -1:
      low = try;
      break;
    /* thisval == val */
    case 0:
      /* to find first record, set hi */
      if( edge == -1 )
	high = try;
      /* for last record, set lo */
      else
	low = try;
      break;
    /* thisval > val */
    case 1:
      high = try;
      break;
    }
  }
  /* check for out of bounds and get candidate row */
  if( edge == 1 ){
    if( low  == 0 ) {
      if( exact )
	return -1;
      else
	return 0;
    }
    try = low;
  }
  else{
    if( high == (ft_naxis(fits, 2)+1) ){
      if( exact )
	return -1;
      else
	return ft_naxis(fits, 2)+1;;
    }
    try = high;
  }
  /* grab desired row in index */
  ipos =  fits->data + ((try-1)*rowsize);
  if( gseek(gio, (off_t)ipos, 0) < 0 ) return -1;
  buf = _gread(gio, NULL, sizeof(char), rowsize, &got);
  if( !buf || (got != (size_t)rowsize) ) return -1;
  /* compare row to key value */
  cmp = _idxcompare(buf, type, offset, n, d, l, t);
  if( buf ) xfree(buf);
  /* if row == key value, we got a match */
  if( !cmp || !exact ){
    if( edge == 1 ) 
      return low;
    else
      return high;
  }
  else
    return -1;
}

#ifdef ANSI_FUNC
static int 
_idxrowcommon(idxvalrec *val1, idxvalrec *val2, int exact, int which,
	      idxrowrec **x, int *start, int *stop, int *nrow)
#else
static int _idxrowcommon(val1, val2, exact, which, x, start, stop, nrow)
     idxvalrec *val1, *val2;
     int exact;
     int which;
     idxrowrec **x;
     int *start, *stop;
     int *nrow
#endif
{
  idxvalrec *v1=NULL, *v2=NULL;

  *start = -1;
  *stop = -1;
  *nrow = -1;
  *x = idxrownew();
  if( (val1->type == COL) && (val2->type == NUM) ){
    v1 = val1;
    v2 = val2;
  }
  if( v1 && v2 ){
    (*x)->type = COL;
    (*x)->rtype = IDX_ROW_LIST;
    (*x)->dofilt = 0;
    (*x)->s = xstrdup(v1->s);
    (*x)->v = v1;
    *nrow = v1->nrow;
    if( which & IDX_EDGE_LEFT )
      *start = _idxbsearch(v1->igio, v1->ifits, v1->vtype, v1->voffset, v1->vn,
			   exact, -1, v2->dval, v2->ival, v2->ntype);
    if( which & IDX_EDGE_RIGHT )
      *stop = _idxbsearch(v1->igio, v1->ifits, v1->vtype, v1->voffset, v1->vn, 
			  exact, 1, v2->dval, v2->ival, v2->ntype);
    return 1;
  }
  else{
    (*x)->type = IDX_INDEF;
    (*x)->rtype = IDX_INDEF;
    (*x)->dofilt = 1;
    return 0;
  }
}

#ifdef ANSI_FUNC
static int
_idxrowaddrow(idxrowrec *r, int start, int stop)
#else
  static int _idxrowaddrow(r, start, stop)
  idxrowrec *r;
  int start;
  int stop;
#endif
{
  if( !r ) return 0;
  if( r->nrow >= r->maxrow ){
    r->maxrow += IDX_ROW_INC;
    r->startrow = xrealloc(r->startrow, r->maxrow*sizeof(int));
    r->stoprow =  xrealloc(r->stoprow,  r->maxrow*sizeof(int));
  }
  r->startrow[r->nrow] = start;
  r->stoprow[r->nrow]  = stop;
  r->nrow++;
  return r->nrow;
}

#ifdef ANSI_FUNC
static void
idxrowmark(idxrowrec *row1, idxrowrec *row2, char **mbuf, int *nm)
#else
static void idxrowmark(row1, row2, mbuf, nm)
     idxrowrec *row1, *row2;
     char **mbuf;
     int *nm;
#endif
{
  int i, j;

  *nm=0;
  for(i=0; i<row1->nrow; i++){
    *nm = MAX(*nm, row1->stoprow[i]);
  }
  for(i=0; i<row2->nrow; i++){
    *nm = MAX(*nm, row2->stoprow[i]);
  }
  *nm += 1;
  if( !(*mbuf = xcalloc(*nm, sizeof(char))) ){
    idxerror("can't allocate memory for index");
  }
  for(i=0; i<row1->nrow; i++){
    for(j=row1->startrow[i]; j<=row1->stoprow[i]; j++){
      (*mbuf)[j-1] |= 1;
    }
  }
  for(i=0; i<row2->nrow; i++){
    for(j=row2->startrow[i]; j<=row2->stoprow[i]; j++){
      (*mbuf)[j-1] |= 2;
    }
  }
}

#ifdef ANSI_FUNC
static idxrowrec *
_idxrowmerge(idxrowrec *x, idxrowrec *row1, idxrowrec *row2, int type)
#else
static idxrowrec *_idxrowmerge(x, row1, row2, type)
     idxrowrec *x;
     idxrowrec *row1;
     idxrowrec *row2
     int type;
#endif
{
  int last=-1;
  int in1=-1, in2=-1, on=0;
  int igot1=-1, igot2=-1;
  int fd[2];
  int ibuf1[SZ_LINE];
  int ibuf2[SZ_LINE];
  int obuf[SZ_LINE];
  FILE *ifd1, *ifd2, *ofd;

#if HAVE_MINGW32==0
  /* we fork a process that will read the output from 2 instances of sort and
     either OR and AND the results. Doing this avoids having the main process
     read the output of the sorts and write to a new merge process */
  if( pipe(fd) < 0 ){
    x->type = IDX_INDEF;
    x->rtype = IDX_INDEF;
    x->dofilt = 1;
    return x;
  }
  if( (x->pid = fork()) < 0 ){
    x->type = IDX_INDEF;
    x->rtype = IDX_INDEF;
    x->dofilt = 1;
    return x;
  } else if( x->pid != 0 ){	/* parent */
    IPRINTF((stderr, "idxmerge(%d): %s %s\n", 
	     type, rowdisp(row1), rowdisp(row2)));
    close(fd[1]);
    x->ichan = fd[0];
    close(row1->ichan); row1->ichan=0;
    close(row2->ichan); row2->ichan=0;
    return x;
  }
  else{				/* child */
    close(fd[0]);
    if( !(ifd1 = fdopen(row1->ichan, "r")) ||
	!(ifd2 = fdopen(row2->ichan, "r")) ||
	!(ofd  = fdopen(fd[1], "w"))       ){
      _exit(1);
    }
    while( 1 ){
      if( in1 == igot1 ){
	igot1 = fread(ibuf1, sizeof(int), SZ_LINE, ifd1);
	if( igot1 != 0 ){
	  in1 = 0;
	}
      }
      if( in2 == igot2 ){
	igot2 = fread(ibuf2, sizeof(int), SZ_LINE, ifd2);
	if( igot2 != 0 ){
	  in2 = 0;
	}
      }
      if( igot1 && igot2 ){
	if( ibuf1[in1] < ibuf2[in2] ){
	  switch(type){
	  case IDX_SORT:
	    obuf[on++] = ibuf1[in1];
	    break;
	  case IDX_AND_SORT:
	    if( ibuf1[in1] == last )
	      obuf[on++] = ibuf1[in1];
	    break;
	  case IDX_OR_SORT:
	    if( ibuf1[in1] != last )
	      obuf[on++] = ibuf1[in1];
	    break;
	  }
	  last = ibuf1[in1++];
	}
	else{
	  switch(type){
	  case IDX_SORT:
	    obuf[on++] = ibuf2[in2];
	    break;
	  case IDX_AND_SORT:
	    if( ibuf2[in2] == last )
	      obuf[on++] = ibuf2[in2];
	    break;
	  case IDX_OR_SORT:
	    if( ibuf2[in2] != last )
	      obuf[on++] = ibuf2[in2];
	    break;
	  }
	  last = ibuf2[in2++];
	}
      }
      else if( igot1 ){
	switch(type){
	case IDX_SORT:
	  obuf[on++] = ibuf2[in2];
	  break;
	case IDX_AND_SORT:
	  if( ibuf1[in1] == last )
	    obuf[on++] = ibuf1[in1];
	  break;
	case IDX_OR_SORT:
	  if( ibuf1[in1] != last )
	    obuf[on++] = ibuf1[in1];
	  break;
	}
	last = ibuf1[in1++];
      }
      else if( igot2 ){
	switch(type){
	case IDX_SORT:
	  obuf[on++] = ibuf2[in2];
	  break;
	case IDX_AND_SORT:
	  if( ibuf2[in2] == last )
	    obuf[on++] = ibuf2[in2];
	  break;
	case IDX_OR_SORT:
	  if( ibuf2[in2] != last )
	    obuf[on++] = ibuf2[in2];
	  break;
	}
	last = ibuf2[in2++];
      }
      else{
	break;
      }
      if( on == SZ_LINE ){
	fwrite(obuf, sizeof(int), on, ofd);
	fflush(ofd);
	on = 0;
      }
    }
    fwrite(obuf, sizeof(int), on, ofd);
    fflush(ofd);
    _exit(0);
  }
#else
  idxerror("can't use index optimization with MinGW");
#endif
  /* shouldn't get here */
  return NULL;
}

/*
 *
 * public routines
 *
 */

#ifdef ANSI_FUNC
idxrowrec *idxall(idxrowrec *row)
#else
idxrowrec *idxall(row)
     idxrowrec *row;
#endif
{
  Filter filt;
  idxrowrec *x;

  /* sanity check */
  if( !(filt = FilterDefault()) )
    idxerror("filter symbol table not initialized");
  /* most range list columns need to be sorted; col==val already is sorted */
  if( (row->type == COL) && (row->rtype == IDX_ROW_LIST) && row->dosort ){
    x = idxrownew();
    if( _idxstartsort(0, &(x->ichan), &(x->ochan), &(x->pid)) &&
	_idxwritesort(x, row) ){
      x->type = row->type;
      /* doesn't matter which sort we use here */
      x->rtype = IDX_SORT;
      x->dofilt = row->dofilt;
      /* close input to start sort */
      close(x->ochan);
      x->ochan = 0;
    }
    else{
      x->type = IDX_INDEF;
      x->rtype = IDX_INDEF;
      x->dofilt = 1;
    }
  }
  /* everything else is fine as is */
  else{
    x = row;
  }
  IPRINTF((stderr, "idxall(%d): %s\n", x->dofilt, rowdisp(x)));
  filt->idx = x;
  return x;
}

#ifdef ANSI_FUNC
void *
idxread(idxrowrec *row, GIO gio, FITSHead fits,
	void *buf, size_t size, size_t get, size_t *got, int *dofilt)
#else
  void *idxread(row, gio, fits, buf, size, get, got, dofilt)
     idxrowrec *row;
     GIO gio;
     FITSHead fits;
     void *buf; 
     size_t size;
     size_t get;
     size_t *got;
     int *dofilt;
#endif
{
  int j, k=0;
  int left;
  int nrow;
  int rowsize;
  int ioffset;
  int itype;
  int isize;
  int start, stop;
  int *ibuf=NULL;
  size_t i;
  char nbuf[8];
  long ipos;
  struct stat fbuf;
  
  /* initialize */
  *got = 0;
  *dofilt = row->dofilt;

  /* handle particular io method */
  switch( idx_io ){
  case IDX_IO_MMAP:
#ifdef HAVE_SYS_MMAN_H
    if( !row->fdata ){
      if( fstat(fileno(gio->fp), &fbuf) < 0 ){
	*got = 0;
	idxerror("can't fstat data file");
	goto done;
      }
      row->flen = fbuf.st_size;
      if( (row->fdata = mmap(NULL, row->flen, PROT_READ, MAP_PRIVATE, 
			     fileno(gio->fp), 0)) == MAP_FAILED ){
	*got = 0;
	idxerror("can't mmap data file");
	perror("mmap");
	goto done;
      }
    }
#else
    idxerror("mmap not supported on this system");
#endif
    break;
  case IDX_IO_LSEEK:
    break;
  }

  /* get rows */
  switch(row->rtype){
  case IDX_ROW_LIST:
    if( !(ibuf = xcalloc(get, sizeof(int))) ){
      *got = 0;
      idxerror("can't allocate index record buffer");
      goto done;
    }
    rowsize = ft_naxis(row->v->ifits, 1);
    ioffset = row->v->ioffset;
    itype = row->v->itype;
    isize = ft_sizeof(row->v->itype);
    for(left=get, i=0; (left>0) && (i<(size_t)row->nrow); i++){
      if( (row->startrow[i]<0) && (row->stoprow[i]<0) ) continue;
      nrow = row->stoprow[i] - row->startrow[i] + 1;
      if( left > nrow ){
	start = row->startrow[i];
	stop = row->stoprow[i];
	row->startrow[i] = -1;
	row->stoprow[i] = -1;
	*got += nrow;
	left -= nrow;
      }
      else if( nrow == left ){
	start = row->startrow[i];
	stop = row->stoprow[i];
	row->startrow[i] = -1;
	row->stoprow[i] = -1;
	*got += nrow;
	left = 0;
      }
      else{
	start = row->startrow[i];
	stop = start + left - 1;
	row->startrow[i] += left;
	*got += left;
	left = 0;
      }
      for(j=start; j<=stop; j++){
	ipos =  row->v->ifits->data + ((j-1)*rowsize) + ioffset;
	switch( idx_io ){
	case IDX_IO_MMAP:
	  if( row->v->idata ){
#ifdef HAVE_SYS_MMAN_H
	    memcpy(nbuf, &(row->v->idata[ipos]), isize);
#else
	    idxerror("mmap not supported on this system");
#endif
	    break;
	  }
	case IDX_IO_LSEEK:
	  if( gseek(row->v->igio, (off_t)ipos, 0) < 0 ){
	    *got = 0;
	    idxerror("can't seek into index file");
	    goto done;
	  }
	  if( !gread(row->v->igio, nbuf, isize, 1) ){
	    *got = 0;
	    idxerror("can't read index file");
	    goto done;
	  }
	  break;
	}
	switch(itype){
	case 'B':
	  ibuf[k++] = (int)*(unsigned char *)(nbuf);
	  break;
	case 'I':
	  ibuf[k++] = (int)*(short *)_swap(nbuf,2);
	  break;
	case 'U':
	  ibuf[k++] = (int)*(unsigned short *)_swap(nbuf,2);
	  break;
	case 'J':
	  ibuf[k++] = (int)*(int *)_swap(nbuf,4);
	  break;
	case 'V':
	  ibuf[k++] = (int)*(unsigned int *)_swap(nbuf,4);
	  break;
	case 'K':
	  idxerror("64-bit integer not supported for index");
	  break;
	default:
	  *got = 0;
	  idxerror("illegal index data type");
	  goto done;
	}
      }
    }
    /* now grab the row associated with each row value */
    for(i=0; i<*got; i++){
      /* grab desired row in index */
      ipos =  fits->data + ((ibuf[i]-1)*size);
      switch( idx_io ){
      case IDX_IO_MMAP:
#ifdef HAVE_SYS_MMAN_H
	memcpy((char *)buf+(i*size), &(row->fdata[ipos]), size);
#else
	idxerror("mmap not supported on this system");
#endif
	break;
      case IDX_IO_LSEEK:
	if( gseek(gio, (off_t)ipos, 0) < 0 ){
	  return 0;
	}
	if( !gread(gio, (char *)buf+(i*size), size, 1) ){
	  *got = i;
	}
	break;
      }
    }
    break;
  case IDX_SORT:
  case IDX_OR_SORT:
  case IDX_AND_SORT:
    if( !row->ifile && !(row->ifile = fdopen(row->ichan, "r")) ){
      *got = 0;
      idxerror("can't fdup input index records");
      goto done;
    }
    if( !(ibuf = xcalloc(get, sizeof(int))) ){
      *got = 0;
      idxerror("can't allocate index record buffer");
      goto done;
    }
    /* read the row values */
    *got=fread(ibuf, sizeof(int), get, row->ifile);
    /* now grab the row associated with each row value */
    for(i=0; i<*got; i++){
      /* grab desired row in index */
      ipos =  fits->data + ((ibuf[i]-1)*size);
      switch( idx_io ){
      case IDX_IO_MMAP:
#ifdef HAVE_SYS_MMAN_H
	memcpy((char *)buf+(i*size), &(row->fdata[ipos]), size);
#else
	idxerror("mmap not supported on this system");
#endif
	break;
      case IDX_IO_LSEEK:
	if( gseek(gio, (off_t)ipos, 0) < 0 ){
	  return 0;
	}
	if( !gread(gio, (char *)buf+(i*size), size, 1) ){
	  *got = i;
	}
	break;
      }
    }
    break;
  case IDX_INDEF:
  default:
    *dofilt = 1;
    _gread(gio, (void *)buf, size, get, got);
    break;
  }

done:
  if( ibuf ) xfree(ibuf);
  return (void *)buf;
}

#ifdef ANSI_FUNC
idxrowrec *idxor(idxrowrec *row1, idxrowrec *row2)
#else
idxrowrec *idxor(row1, row2)
     idxrowrec *row1, *row2;
#endif
{
  int i;
  int nm=0;
  int start=0, stop=0;
  char *mbuf=NULL;
  idxrowrec *x=NULL;
  idxrowrec *r1, *r2;;

  x = idxrownew();
  if( (row1->type == IDX_INDEF) || (row2->type == IDX_INDEF) ){
    /* if we have an indef we will have to go through all of the rows. */
    x->type = IDX_INDEF;
    x->rtype = IDX_INDEF;
    x->dofilt = 1;
    IPRINTF((stderr, "idxor(%d): INDEF %s\n", x->dofilt, rowdisp(x)));
    return x;
  }
  if( (row1->type == COL) && (row2->type == COL) &&
      (row1->rtype == IDX_ROW_LIST) && (row2->rtype == IDX_ROW_LIST) &&
      row1->s && row2->s && !strcmp(row1->s, row2->s) ){
    IPRINTF((stderr, "idxor: %s %s", rowdisp(row1), rowdisp(row2)));
    x->type = COL;
    x->rtype = IDX_ROW_LIST;
    x->dofilt = 0;
    x->s = xstrdup(row1->s);
    x->v = row1->v;
    /* a bit quicker when we have a simple OR */
    if( (row1->nrow == 1) && (row2->nrow == 1) ){
      if( (row1->stoprow[0] < row2->startrow[0]) ||
	  (row2->stoprow[0] < row1->startrow[0]) ){
	_idxrowaddrow(x, row1->startrow[0], row1->stoprow[0]);
	_idxrowaddrow(x, row2->startrow[0], row2->stoprow[0]);
      }
      else{
	start = MIN(row1->startrow[0], row2->startrow[0]);
	stop = MAX(row1->stoprow[0], row2->stoprow[0]);
	_idxrowaddrow(x, start, stop);
      }
      IPRINTF((stderr, " =>(q) %s\n", rowdisp(x)));
      return x;
    }
    idxrowmark(row1, row2, &mbuf, &nm);
    for(i=0; i<nm; i++){
      if( mbuf[i] ){
	if( !start )
	  start = i+1;
      }
      else{
	if( start ){
	  stop = i;
	  _idxrowaddrow(x, start, stop);
	  start = 0;
	  stop = 0;
	}
      }
    }
    if( start ){
      stop = nm;
      _idxrowaddrow(x, start, stop);
      start = 0;
      stop = 0;
    }
    if( mbuf ) xfree(mbuf);
    IPRINTF((stderr, " => %s\n", rowdisp(x)));
    return x;
  }
  else{
    if( (row1->type == REG) || (row2->type == REG) ){
      x->type = REG;
      x->dofilt = 1;
    }
    else{
      x->type = COL;
      x->dofilt = 0;
    }
    x->rtype = IDX_OR_SORT;
    /* two row lists: we sort both at once */
    if( (row1->rtype == IDX_ROW_LIST) && (row2->rtype == IDX_ROW_LIST) ){
      IPRINTF((stderr, "idxor sort: %s %s\n", rowdisp(row1), rowdisp(row2)));
      /* open sort program and return only unique records */
      if( !_idxstartsort(IDX_OR_SORT, &(x->ichan), &(x->ochan), &(x->pid)) ||
	  !_idxwritesort(x, row1) || !_idxwritesort(x, row2)  ){
	x->type = IDX_INDEF;
	x->rtype = IDX_INDEF;
	x->dofilt = 1;
	return x;
      }
      /* close input to start sort */
      close(x->ochan);
      x->ochan = 0;
      /* return here */
      return x;
    }
    /* at least one sorted process: we set up a merge (and maybe a sort) */
    else if( row1->rtype == IDX_ROW_LIST ){
      IPRINTF((stderr, "idxor sort/merge: %s %s\n", 
	       rowdisp(row1), rowdisp(row2)));
      r1 = row2;
      r2 = idxrownew();
      r2->type = row1->type;
      r2->rtype = row1->rtype;
      r2->s = xstrdup(row1->s);
      r2->dofilt = row1->dofilt;
      /* open sort program to return all records */
      if( !_idxstartsort(0, &(r2->ichan), &(r2->ochan), &(r2->pid)) ||
	  !_idxwritesort(r2, row1) ){
	x->type = IDX_INDEF;
	x->rtype = IDX_INDEF;
	x->dofilt = 1;
	return x;
      }
      /* close input to start sort */
      close(r2->ochan);
      r2->ochan = 0;
      /* common merge code */
      return _idxrowmerge(x, r1, r2, IDX_OR_SORT);
    }
    /* at least one sorted process: we set up a merge (and maybe a sort) */
    else if( row2->rtype == IDX_ROW_LIST ){
      r1 = row1;
      IPRINTF((stderr, "idxor sort/merge: %s %s\n",
	       rowdisp(row1), rowdisp(row2)));
      r2 = idxrownew();
      r2->type = row2->type;
      r2->rtype = row2->rtype;
      r2->s = xstrdup(row2->s);
      r2->dofilt = row2->dofilt;
      /* open sort program to return all records */
      if( !_idxstartsort(0, &(r2->ichan), &(r2->ochan), &(r2->pid)) ||
	  !_idxwritesort(r2, row2) ){
	x->type = IDX_INDEF;
	x->rtype = IDX_INDEF;
	x->dofilt = 1;
	return x;
      }
      /* close input to start sort */
      close(r2->ochan);
      r2->ochan = 0;
      /* common merge code */
      return _idxrowmerge(x, r1, r2, IDX_OR_SORT);
    }
    else{
      return _idxrowmerge(x, row1, row2, IDX_OR_SORT);
    }
  }
}

#ifdef ANSI_FUNC
idxrowrec *idxand(idxrowrec *row1, idxrowrec *row2)
#else
idxrowrec *idxand(row1, row2)
     idxrowrec *row1, *row2;
#endif
{
  int i;
  int nm=0;
  int start=0, stop=0;
  char *mbuf=NULL;
  idxrowrec *x=NULL;
  idxrowrec *r1, *r2;

  if( (row1->type == IDX_INDEF) || (row2->type == IDX_INDEF) ){
    /* if we have an indef we return the other row and turn dofilter on.
       this works with AND but not with OR */
    if( (row1->type != IDX_INDEF)  ){
      x = row1;
      x->dofilt = 1;
    }
    else if( (row2->type != IDX_INDEF) ){
      x = row2;
      x->dofilt = 1;
    }
    /* can't happen */
    else{
      x = idxrownew();
      x->type = IDX_INDEF;
      x->rtype = IDX_INDEF;
      x->dofilt = 1;
    }
    IPRINTF((stderr, "idxand(%d): INDEF %s\n", x->dofilt, rowdisp(x)));
    return x;
  }
  x = idxrownew();
  if( (row1->type == COL) && (row2->type == COL) &&
      (row1->rtype == IDX_ROW_LIST) && (row2->rtype == IDX_ROW_LIST) &&
      row1->s && row2->s && !strcmp(row1->s, row2->s) ){
    IPRINTF((stderr, "idxand: %s %s", rowdisp(row1), rowdisp(row2)));
    x->type = COL;
    x->rtype = IDX_ROW_LIST;
    x->dofilt = 0;
    x->s = xstrdup(row1->s);
    x->v = row1->v;
    /* a bit quicker when we have a simple AND */
    if( (row1->nrow == 1) && (row2->nrow == 1) ){
      start = MAX(row1->startrow[0], row2->startrow[0]);
      stop = MIN(row1->stoprow[0], row2->stoprow[0]);
      if( start <= stop ){
	_idxrowaddrow(x, start, stop);
      }
      IPRINTF((stderr, " =>(q) %s\n", rowdisp(x)));
      return x;
    }
    idxrowmark(row1, row2, &mbuf, &nm);
    for(i=0; i<nm; i++){
      if( mbuf[i] == 3 ){
	if( !start )
	  start = i+1;
      }
      else{
	if( start ){
	  stop = i;
	  _idxrowaddrow(x, start, stop);
	  start = 0;
	  stop = 0;
	}
      }
    }
    if( start ){
      stop = nm;
      _idxrowaddrow(x, start, stop);
      start = 0;
      stop = 0;
    }
    if( mbuf ) xfree(mbuf);
    IPRINTF((stderr, " => %s\n", rowdisp(x)));
    return x;
  }
  else{
    if( (row1->type == REG) || (row2->type == REG) ){
      x->type = REG;
      x->dofilt = 1;
    }
    else{
      x->type = COL;
      x->dofilt = 0;
    }
    x->rtype = IDX_OR_SORT;
    /* two row lists: we sort both at once */
    if( (row1->rtype == IDX_ROW_LIST) && (row2->rtype == IDX_ROW_LIST) ){
      IPRINTF((stderr, "idxand sort: %s %s\n", rowdisp(row1), rowdisp(row2)));
      /* open sort program and return only dup records */
      if( !_idxstartsort(IDX_AND_SORT, &(x->ichan), &(x->ochan), &(x->pid)) ||
	  !_idxwritesort(x, row1) || !_idxwritesort(x, row2)  ){
	x->type = IDX_INDEF;
	x->rtype = IDX_INDEF;
	x->dofilt = 1;
	return x;
      }
      /* close input to start sort */
      close(x->ochan);
      x->ochan = 0;
      /* return here */
      return x;
    }
    /* at least one sorted process: we set up a merge (and maybe a sort) */
    else if( row1->rtype == IDX_ROW_LIST ){
      IPRINTF((stderr, "idxor sort/merge: %s %s\n",
	       rowdisp(row1), rowdisp(row2)));
      r1 = row2;
      r2 = idxrownew();
      r2->type = row1->type;
      r2->rtype = row1->rtype;
      r2->s = xstrdup(row1->s);
      r2->dofilt = row1->dofilt;
      /* open sort program to return all records */
      if( !_idxstartsort(0, &(r2->ichan), &(r2->ochan), &(r2->pid)) ||
	  !_idxwritesort(r2, row1) ){
	x->type = IDX_INDEF;
	x->rtype = IDX_INDEF;
	x->dofilt = 1;
	return x;
      }
      /* close input to start sort */
      close(r2->ochan);
      r2->ochan = 0;
      /* common merge code */
      return _idxrowmerge(x, r1, r2, IDX_AND_SORT);
    }
    /* at least one sorted process: we set up a merge (and maybe a sort) */
    else if( row2->rtype == IDX_ROW_LIST ){
      r1 = row1;
      IPRINTF((stderr, "idxor sort/merge: %s %s\n",
	       rowdisp(row1), rowdisp(row2)));
      r2 = idxrownew();
      r2->type = row2->type;
      r2->rtype = row2->rtype;
      r2->s = xstrdup(row2->s);
      r2->dofilt = row2->dofilt;
      /* open sort program to return all records */
      if( !_idxstartsort(0, &(r2->ichan), &(r2->ochan), &(r2->pid)) ||
	  !_idxwritesort(r2, row2) ){
	x->type = IDX_INDEF;
	x->rtype = IDX_INDEF;
	x->dofilt = 1;
	return x;
      }
      /* close input to start sort */
      close(r2->ochan);
      r2->ochan = 0;
      /* common merge code */
      return _idxrowmerge(x, r1, r2, IDX_AND_SORT);
    }
    else{
      return _idxrowmerge(x, row1, row2, IDX_AND_SORT);
    }
  }
}

#ifdef ANSI_FUNC
idxrowrec *idxrowreg(idxvalrec *val)
#else
idxrowrec *idxrowreg(idxvalrec *val)
  idxvalrec *val;
#endif
{
  int i=0, j=0;
  idxrowrec *x=NULL;
  idxrowrec *r[2];
  int start[2], stop[2];

  x = idxrownew();
  if( (val->type == INDEF) ||
      ((val->rv[0]->type == INDEF) && (val->rv[1]->type == INDEF)) ){
    x->type = IDX_INDEF;
    x->rtype = IDX_INDEF;
    x->dofilt = 1;
    return x;
  }
  for(i=0; i<2; i++){
    r[i] = idxrownew(); 
    /* handle case where one of the regions has no index */
    if( val->rv[i]->type == INDEF ){
      r[i]->type = IDX_INDEF;
      r[i]->rtype = IDX_INDEF;
      r[i]->dofilt = 1;
      continue;
    }
    /* j will be the index of the valid val record we use in the output row */
    j = i;
    r[i]->type = REG;
    r[i]->rtype = IDX_ROW_LIST;
    r[i]->s = xstrdup(val->rv[i]->s);
    r[i]->v = val->rv[i];
    start[i] = _idxbsearch(val->rv[i]->igio,
			   val->rv[i]->ifits, val->rv[i]->vtype,
			   val->rv[i]->voffset, val->rv[i]->vn,
			   0, -1, val->rlo[i], (longlong)0, PARSE_FLOAT);
    stop[i] =  _idxbsearch(val->rv[i]->igio,
			   val->rv[i]->ifits, val->rv[i]->vtype,
			   val->rv[i]->voffset, val->rv[i]->vn,
			   0,  1, val->rhi[i], (longlong)0, PARSE_FLOAT);
    if( (start[i] > 0) && (stop[i] > 0) ){
      _idxrowaddrow(r[i], start[i], stop[i]);
    }
  }
  x = idxand(r[0], r[1]);
  x->type = REG;
  x->dofilt = 1;
  x->v = val->rv[j];
  return x;
}

#ifdef ANSI_FUNC
idxrowrec *idxrowfun(idxvalrec *UNUSED(val))
#else
idxrowrec *idxrowfun(idxvalrec *val)
  idxvalrec *val;
#endif
{
  idxrowrec *x=NULL;

  x = idxrownew();
  x->type = IDX_INDEF;
  x->rtype = IDX_INDEF;
  x->dofilt = 1;
  return x;
}

#ifdef ANSI_FUNC
idxrowrec *idxroweq(idxvalrec *val1, idxvalrec *val2)
#else
idxrowrec *idxroweq(val1, val2)
     idxvalrec *val1, *val2;
#endif
{
  int start, stop;
  int nrow;
  idxrowrec *x=NULL;

  if( (val1->type == NUM) && (val2->type == COL) ){
    return idxroweq(val2, val1);
  }
  IPRINTF((stderr, "idxeq: "));
  if( _idxrowcommon(val1, val2, 1, IDX_EDGE_BOTH, &x, &start, &stop, &nrow) ){
    IPRINTF((stderr, "%s start=%d,stop=%d", x->s, start, stop));
    if( (start > 0) && (stop > 0) ){
      _idxrowaddrow(x, start, stop);
    }
    IPRINTF((stderr, " => "));
  }
  IPRINTF((stderr, "%s\n", rowdisp(x)));
  /* this is the only operator resulting in a sorted range list */
  x->dosort = 0;
  return x;
}

#ifdef ANSI_FUNC
idxrowrec *idxrowne(idxvalrec *val1, idxvalrec *val2)
#else
idxrowrec *idxrowne(val1, val2)
     idxvalrec *val1, *val2;
#endif
{
  int start, stop;
  int nrow;
  int i=0;
  idxrowrec *x=NULL;

  if( (val1->type == NUM) && (val2->type == COL) ){
    return idxrowne(val2, val1);
  }
  IPRINTF((stderr, "idxne: "));
  if( _idxrowcommon(val1, val2, 0, IDX_EDGE_BOTH, &x, &start, &stop, &nrow) ){
    IPRINTF((stderr, "%s start=%d,stop=%d", x->s, start, stop));
    if( start > 1 ){
      _idxrowaddrow(x, 1, start-1);
      i++;
    }
    if( stop && (stop < nrow) ){
      _idxrowaddrow(x, stop+1, nrow);
      IPRINTF((stderr, " start=%d,stop=%d", x->startrow[i], x->stoprow[i]));
    }
    IPRINTF((stderr, " => "));
  }
  IPRINTF((stderr, "%s\n", rowdisp(x)));
  return x;
}

#ifdef ANSI_FUNC
idxrowrec *idxrowlt(idxvalrec *val1, idxvalrec *val2)
#else
idxrowrec *idxrowlt(val1, val2)
     idxvalrec *val1, *val2;
#endif
{
  int start, stop;
  int nrow;
  int i=0;
  idxrowrec *x=NULL;

  if( (val1->type == NUM) && (val2->type == COL) ){
    return idxrowgt(val2, val1);
  }
  IPRINTF((stderr, "idxlt: "));
  if( _idxrowcommon(val1, val2, 0, IDX_EDGE_LEFT, &x, &start, &stop, &nrow) ){
    IPRINTF((stderr, "%s start=%d,stop=%d", x->s, start, stop));
    if( start > 1 ){
      _idxrowaddrow(x, 1, start-1);
      i++;
    }
    IPRINTF((stderr, " => "));
  }
  IPRINTF((stderr, "%s\n", rowdisp(x)));
  return x;
}

#ifdef ANSI_FUNC
idxrowrec *idxrowle(idxvalrec *val1, idxvalrec *val2)
#else
idxrowrec *idxrowle(val1, val2)
     idxvalrec *val1, *val2;
#endif
{
  int start, stop;
  int nrow;
  idxrowrec *x=NULL;

  if( (val1->type == NUM) && (val2->type == COL) ){
    return idxrowge(val2, val1);
  }
  IPRINTF((stderr, "idxle: "));
  if( _idxrowcommon(val1, val2, 0, IDX_EDGE_RIGHT, &x, &start, &stop, &nrow) ){
    IPRINTF((stderr, "%s start=%d,stop=%d", x->s, start, stop));
    if( stop > 0 ){
      _idxrowaddrow(x, 1, stop);
    }
    IPRINTF((stderr, " => "));
  }
  IPRINTF((stderr, "%s\n", rowdisp(x)));
  return x;
}

#ifdef ANSI_FUNC
idxrowrec *idxrowgt(idxvalrec *val1, idxvalrec *val2)
#else
idxrowrec *idxrowgt(val1, val2)
     idxvalrec *val1, *val2;
#endif
{
  int start, stop;
  int nrow;
  int i=0;
  idxrowrec *x=NULL;

  if( (val1->type == NUM) && (val2->type == COL) ){
    return idxrowlt(val2, val1);
  }
  IPRINTF((stderr, "idxgt: "));
  if( _idxrowcommon(val1, val2, 0, IDX_EDGE_RIGHT, &x, &start, &stop, &nrow) ){
    IPRINTF((stderr, "%s start=%d,stop=%d ", x->s, start, stop));
    if( (stop >= 0) && (stop < nrow) ){
      _idxrowaddrow(x, stop+1, nrow);
      i++;
    }
    IPRINTF((stderr, " => "));
  }
  IPRINTF((stderr, "%s\n", rowdisp(x)));
  return x;
}

#ifdef ANSI_FUNC
idxrowrec *idxrowge(idxvalrec *val1, idxvalrec *val2)
#else
idxrowrec *idxrowge(val1, val2)
     idxvalrec *val1, *val2;
#endif
{
  int start, stop;
  int nrow;
  int i=0;
  idxrowrec *x=NULL;

  if( (val1->type == NUM) && (val2->type == COL) ){
    return idxrowle(val2, val1);
  }
  IPRINTF((stderr, "idxge: "));
  if( _idxrowcommon(val1, val2, 0, IDX_EDGE_LEFT, &x, &start, &stop, &nrow) ){
    IPRINTF((stderr, "%s start=%d,stop=%d ", x->s, start, stop));
    if( (start > 0) && (start <= nrow) ){
      _idxrowaddrow(x, start, nrow);
      i++;
    }
    IPRINTF((stderr, " => "));
  }
  IPRINTF((stderr, "%s\n", rowdisp(x)));
  return x;
}

#ifdef ANSI_FUNC
idxvalrec *idxvaladd(idxvalrec *val1, idxvalrec *val2)
#else
idxvalrec *idxvaladd(val1, val2)
     idxvalrec *val1, *val2;
#endif
{
  idxvalrec *x=NULL;

  x = idxvalnew(NULL);
  if( (val1->type == NUM) && (val2->type == NUM) ){
    x->type = NUM;
    if( (val1->ntype == PARSE_FLOAT) || (val2->ntype == PARSE_FLOAT) ){
      x->ntype = PARSE_FLOAT;
      x->dval = val1->dval + val2->dval;
      IPRINTF((stderr, "valadd: %f + %f => %f\n", 
	       val1->dval, val2->dval, x->dval));
    }
    else{
      x->ntype = PARSE_INTEGER;
      x->ival = val1->ival + val2->ival;
      x->dval = x->ival;
      snprintf(fmt, SZ_LINE, "valadd: %s + %s => %s\n", LFMT, LFMT, LFMT);
      IPRINTF((stderr, fmt, val1->ival, val2->ival, x->ival));
    }
  }
  else{
    x->type = INDEF;
  }
  return x;
}

#ifdef ANSI_FUNC
idxvalrec *idxvalsub(idxvalrec *val1, idxvalrec *val2)
#else
idxvalrec *idxvalsub(val1, val2)
     idxvalrec *val1, *val2;
#endif
{
  idxvalrec *x=NULL;

  x = idxvalnew(NULL);
  if( (val1->type == NUM) && (val2->type == NUM) ){
    x->type = NUM;
    if( (val1->ntype == PARSE_FLOAT) || (val2->ntype == PARSE_FLOAT) ){
      x->ntype = PARSE_FLOAT;
      x->dval = val1->dval - val2->dval;
      IPRINTF((stderr, "valsub: %f - %f => %f\n",
	       val1->dval, val2->dval, x->dval));
    }
    else{
      x->ntype = PARSE_INTEGER;
      x->ival = val1->ival - val2->ival;
      x->dval = x->ival;
      snprintf(fmt, SZ_LINE, "valsub: %s - %s => %s\n", LFMT, LFMT, LFMT);
      IPRINTF((stderr, fmt, val1->ival, val2->ival, x->ival));
    }
  }
  else{
    x->type = INDEF;
  }
  return x;
}

#ifdef ANSI_FUNC
idxvalrec *idxvalmul(idxvalrec *val1, idxvalrec *val2)
#else
idxvalrec *idxvalmul(val1, val2)
     idxvalrec *val1, *val2;
#endif
{
  idxvalrec *x=NULL;

  x = idxvalnew(NULL);
  if( (val1->type == NUM) && (val2->type == NUM) ){
    x->type = NUM;
    if( (val1->ntype == PARSE_FLOAT) || (val2->ntype == PARSE_FLOAT) ){
      x->ntype = PARSE_FLOAT;
      x->dval = val1->dval * val2->dval;
      IPRINTF((stderr, "valmul: %f * %f => %f\n",
	       val1->dval, val2->dval, x->dval));
    }
    else{
      x->ntype = PARSE_INTEGER;
      x->ival = val1->ival * val2->ival;
      x->dval = x->ival;
      snprintf(fmt, SZ_LINE, "valmul: %s * %s => %s\n", LFMT, LFMT, LFMT);
      IPRINTF((stderr, fmt, val1->ival, val2->ival, x->ival));
    }
  }
  else{
    x->type = INDEF;
  }
  return x;
}

#ifdef ANSI_FUNC
idxvalrec *idxvaldiv(idxvalrec *val1, idxvalrec *val2)
#else
idxvalrec *idxvaldiv(val1, val2)
  idxvalrec *val1, *val2;
#endif
{
  idxvalrec *x=NULL;

  x = idxvalnew(NULL);
  if( (val1->type == NUM) && (val2->type == NUM) ){
    x->type = NUM;
    if( val2->dval == 0.0 )
      idxerror("can't divide by zero");
    if( (val1->ntype == PARSE_FLOAT) || (val2->ntype == PARSE_FLOAT) ){
      x->dval = val1->dval / val2->dval;
      x->ntype = PARSE_FLOAT;
    }
    else{
      x->ival = val1->ival / val2->ival;
      x->ntype = PARSE_INTEGER;
    }
    IPRINTF((stderr, "valdiv: %f / %f => %f\n",
	     val1->dval, val2->dval, x->dval));
  }
  else{
    x->type = INDEF;
  }
  return x;
}

#ifdef ANSI_FUNC
idxvalrec *idxvalmod(idxvalrec *val1, idxvalrec *val2)
#else
idxvalrec *idxvalmod(val1, val2)
  idxvalrec *val1, *val2;
#endif
{
  idxvalrec *x=NULL;

  x = idxvalnew(NULL);
  if( (val1->type == NUM) && (val2->type == NUM) ){
    x->type = NUM;
    if( (val1->ntype == PARSE_FLOAT) || (val2->ntype == PARSE_FLOAT) ){
      idxerror("can't use mod operator with floating point value");
    }
    else{
      x->ntype = PARSE_INTEGER;
      x->ival = val1->ival % val2->ival;
      x->dval = x->ival;
      snprintf(fmt, SZ_LINE, "valmod: %s mod %s => %s\n", LFMT, LFMT, LFMT);
      IPRINTF((stderr, fmt, val1->ival, val2->ival, x->ival));
    }
  }
  else{
    x->type = INDEF;
  }
  return x;
}

#ifdef ANSI_FUNC
idxvalrec *idxvaland(idxvalrec *val1, idxvalrec *val2)
#else
idxvalrec *idxvaland(val1, val2)
  idxvalrec *val1, *val2;
#endif
{
  idxvalrec *x=NULL;

  x = idxvalnew(NULL);
  if( (val1->type == NUM) && (val2->type == NUM) ){
    x->type = NUM;
    x->ntype = PARSE_INTEGER;
    if( (val1->ntype == PARSE_FLOAT) || (val2->ntype == PARSE_FLOAT)  )
      x->ival = (longlong)val1->dval & (longlong)val2->dval;
    else
      x->ival = val1->ival & val2->ival;
    x->dval = x->ival;
    snprintf(fmt, SZ_LINE, "valand: %s & %s => %s\n", LFMT, LFMT, LFMT);
    IPRINTF((stderr, fmt, val1->ival, val2->ival, x->ival));
  }
  else{
    x->type = INDEF;
  }
  return x;
}

#ifdef ANSI_FUNC
idxvalrec *idxvalor(idxvalrec *val1, idxvalrec *val2)
#else
idxvalrec *idxvalor(val1, val2)
  idxvalrec *val1, *val2;
#endif
{
  idxvalrec *x=NULL;

  x = idxvalnew(NULL);
  if( (val1->type == NUM) && (val2->type == NUM) ){
    x->type = NUM;
    x->ntype = PARSE_INTEGER;
    if( (val1->ntype == PARSE_FLOAT) || (val2->ntype == PARSE_FLOAT)  )
      x->ival = (longlong)val1->dval | (longlong)val2->dval;
    else
      x->ival = val1->ival | val2->ival;
    x->dval = x->ival;
    snprintf(fmt, SZ_LINE, "valor: %s | %s => %s\n", LFMT, LFMT, LFMT);
    IPRINTF((stderr, fmt, val1->ival, val2->ival, x->ival));
  }
  else{
    x->type = INDEF;
  }
  return x;
}

#ifdef ANSI_FUNC
idxvalrec *idxvalxor(idxvalrec *val1, idxvalrec *val2)
#else
idxvalrec *idxvalxor(val1, val2)
  idxvalrec *val1, *val2;
#endif
{
  idxvalrec *x=NULL;

  x = idxvalnew(NULL);
  if( (val1->type == NUM) && (val2->type == NUM) ){
    x->type = NUM;
    x->ntype = PARSE_INTEGER;
    if( (val1->ntype == PARSE_FLOAT) || (val2->ntype == PARSE_FLOAT)  )
      x->ival = (longlong)val1->dval ^ (longlong)val2->dval;
    else
      x->ival = val1->ival ^ val2->ival;
    x->dval = x->ival;
    snprintf(fmt, SZ_LINE, "valxor: %s ^ %s => %s\n", LFMT, LFMT, LFMT);
    IPRINTF((stderr, fmt, val1->ival, val2->ival, x->ival));
  }
   else{
    x->type = INDEF;
  }
  return x;
}

#ifdef ANSI_FUNC
idxvalrec *idxvalnot(idxvalrec *val)
#else
idxvalrec *idxvalnot(val)
  idxvalrec *val;
#endif
{
  idxvalrec *x=NULL;

  x = idxvalnew(NULL);
  x->type = NUM;
  x->ntype = PARSE_INTEGER;
  if( val->ntype == PARSE_FLOAT )
    x->ival = !val->dval;
  else
    x->ival = !val->ival;
  x->dval = x->ival;
  snprintf(fmt, SZ_LINE, "valnot: %s => %s\n", LFMT, LFMT);
  IPRINTF((stderr, fmt, val->ival, x->ival));
  return x;
}

#ifdef ANSI_FUNC
idxvalrec *idxvalcom(idxvalrec *val)
#else
idxvalrec *idxvalcom(val)
  idxvalrec *val;
#endif
{
  idxvalrec *x=NULL;

  x = idxvalnew(NULL);
  x->type = NUM;
  x->ntype = PARSE_INTEGER;
  if( val->ntype == PARSE_FLOAT )
    x->ival = ~(longlong)val->dval;
  else
    x->ival = ~val->ival;
  x->dval = x->ival;
  snprintf(fmt, SZ_LINE, "valcom: %s => %s\n", LFMT, LFMT);
  IPRINTF((stderr, fmt, val->ival, x->ival));
  return x;
}

#ifdef ANSI_FUNC
idxvalrec *idxvalmin(idxvalrec *val)
#else
idxvalrec *idxvalmin(val)
  idxvalrec *val;
#endif
{
  idxvalrec *x=NULL;

  x = idxvalnew(NULL);
  x->type = NUM;
  x->ntype = val->ntype;
  x->dval = -val->dval;
  x->ival = -val->ival;
  if( val->ntype == PARSE_FLOAT ){
    IPRINTF((stderr, "valmin: %f => %f\n", val->dval, x->dval));
  }
  else{
    snprintf(fmt, SZ_LINE, "valmin: %s => %s\n", LFMT, LFMT);
    IPRINTF((stderr, fmt, val->ival, x->ival));
  }
  return x;
}

#ifdef ANSI_FUNC
idxvalrec *idxvalnew(char *s)
#else
idxvalrec *idxvalnew(s)
    char *s;
#endif
{
  idxvalrec *v=NULL;
  Filter filt;

  if( !(filt = FilterDefault()) )
    idxerror("filter symbol table not initialized");
  if( !(v=xcalloc(1, sizeof(struct _idxvalrec))) )
    idxerror("can't allocate idxvalrec");
  if( s ) v->s = xstrdup(s);
  v->next = filt->valhead;
  filt->valhead = v;
  return v;
}


#ifdef ANSI_FUNC
int idxvalfree(idxvalrec *v)
#else
int idxvalfree(v)
  idxvalrec *v;
#endif
{
  idxvalrec *t;
  int n=0;
  Filter filt;

  if( !(filt = FilterDefault()) )
    idxerror("filter symbol table not initialized");
  if( v ){
    if( filt->valhead == v ){
      filt->valhead = v->next;
    }
    else{
      for(t=filt->valhead; t; t=t->next){
        if( t->next == v ){
          t->next = v->next;
	  break;
        }
      }
    }
    _idxvalfree(v);
    n = 1;
  }
  else{
    for(v=filt->valhead; v; n++){
      t = v->next;
      _idxvalfree(v);
      v = t;
    }
    filt->valhead = NULL;
  }
  return n;
}

#ifdef ANSI_FUNC
idxvalrec *
idxlookupfilename(char *iname)
#else
idxvalrec *idxlookupfilename(iname)
  char *iname
#endif
{
  idxvalrec *t;
  Filter filt;

  if( !(filt = FilterDefault()) )
    return NULL;
  for(t=filt->valhead; t; t=t->next){
    if( t->iname && !strcmp(t->iname, iname) ){
      return t;
    }
  }
  return NULL;
}

#ifdef ANSI_FUNC
idxrowrec *idxrownew(void)
#else
idxrowrec *idxrownew()
#endif
{
  idxrowrec *r=NULL;
  Filter filt;

  if( !(filt = FilterDefault()) )
    idxerror("filter symbol table not initialized");
  if( !(r=xcalloc(1, sizeof(struct _idxrowrec))) )
    idxerror("can't allocate idxrowrec");
  r->maxrow = IDX_ROW_INC;
  r->startrow = xcalloc(r->maxrow, sizeof(int));
  r->stoprow  = xcalloc(r->maxrow, sizeof(int));
  r->nrow = 0;
  r->dosort = 1;
  r->next = filt->rowhead;
  filt->rowhead = r;
  return r;
}

#ifdef ANSI_FUNC
int idxrowfree(idxrowrec *r)
#else
int idxrowfree(r)
     idxrowrec *r;
#endif
{
  idxrowrec *t;
  int n=0;
  Filter filt;

  if( !(filt = FilterDefault()) )
    idxerror("filter symbol table not initialized");
  if( r ){
    if( filt->rowhead == r ){
      filt->rowhead = r->next;
    }
    else{
      for(t=filt->rowhead; t; t=t->next){
        if( t->next == r ){
          t->next = r->next;
	  break;
        }
      }
    }
    _idxrowfree(r);
    n = 1;
  }
  else{
    for(r=filt->rowhead; r; n++){
      t = r->next;
      _idxrowfree(r);
      r = t;
    }
    filt->rowhead = NULL;
  }
  return n;
}

#ifdef ANSI_FUNC
int
idxinitfilenames(char *t, int *flag)
#else
int idxinitfilenames(t, flag)
     char *t;
     int *flag;
#endif
{
  char *u=NULL;
  int havegz=0;

  /* initialize */
  if( flag ) *flag = 0;
  /* free current values */
  idxfreefilenames();

  /* sanity check */
  if( !t || !*t) return 0;

  if( (u=strchr(t, ':')) ){
    if( !strncasecmp(t, "pipe:", 5) || !strncasecmp(t, "mmap:", 5)   ||
	!strncasecmp(t, "shm:", 4)  || !strncasecmp(t, "mem:", 4)    ||
	!strncasecmp(t, "buf:", 4)  || !strncasecmp(t, "file:", 5)   ||
	!strncasecmp(t, "gzip:", 5) || !strncasecmp(t, "unfile:", 7) ){
      t = u+1;
    }
  }
  idxfilename = xstrdup(t);
  if( (idxfileroot2=xstrdup(t)) ){
    if( (t=strrchr(idxfileroot2, '.')) ){
      if( !strcmp(t, ".gz") ){
	havegz=1;
        *t = '\0';
        if( (t=strrchr(idxfileroot2, '.')) ){
          *t = '\0';
        }
      }
      else{
	*t = '\0';
      }
    }
    if( (t=strrchr(idxfileroot2, '/')) ){
      idxfileroot1 = xstrdup(t+1);
    }
    else{
      idxfileroot1 = xstrdup(idxfileroot2);
    }
  }
  if( flag ) *flag = havegz;
  return 1;
}

#ifdef ANSI_FUNC
void
idxfreefilenames(void)
#else
void idxfreefilenames()
#endif
{
  if( idxfilename ){
    xfree(idxfilename);
    idxfilename=NULL;
  }
  if( idxfileroot1 ){
    xfree(idxfileroot1);
    idxfileroot1=NULL;
  }
  if( idxfileroot2 ){
    xfree(idxfileroot2);
    idxfileroot2=NULL;
  }
}

#ifdef ANSI_FUNC
void
idxfreeglobals(void)
#else
void idxfreeglobals()
#endif
{
  if( idxcolname ){
    xfree(idxcolname);
    idxcolname=NULL;
  }
  if( idxpath ){
    xfree(idxpath);
    idxpath=NULL;
  }
  if( idxsort ){
    xfree(idxsort);
    idxsort=NULL;
  }
  idxfreefilenames();
}

#ifdef ANSI_FUNC
char *
idxindexfilename(char *col, int *size)
#else
char *idxindexfilename(col, size)
     char *col;
     int *size;
#endif
{
  int i;
  char *iname=NULL;
  char *fname=NULL;
  char *idxname=NULL;
  char *suffix="";
  char colbuf[SZ_LINE];
  char tbuf[SZ_LINE];
  char tbuf1[SZ_LINE];
  char tbuf2[SZ_LINE];
  struct stat ibuf;
  struct stat fbuf;

  /* sanity checks */
  if( !col ) return NULL;
  if( !idxinfo(IDX_FILENAME) ) return NULL;
  if( !idxinfo(IDX_FILEROOT1) || !idxinfo(IDX_FILEROOT2) ) return NULL;

  /* we try using the column name as is, in lower case, and in upper case */
  /* we also try with and without a .gz extension */
  strncpy(colbuf, col, SZ_LINE-1);
  for(i=0; i<6; i++){
    switch(i){
    case 0:
      break;
    case 1:
      culc(colbuf);
      break;
    case 2:
      cluc(colbuf);
      break;
    case 3:
      suffix=".gz";
      break;
    case 4:
      culc(colbuf);
      suffix=".gz";
      break;
    case 5:
      cluc(colbuf);
      suffix=".gz";
      break;
    }
    snprintf(tbuf1, SZ_LINE-1, "%s_%s.idx%s", idxinfo(IDX_FILEROOT1), 
	     colbuf, suffix);
    snprintf(tbuf2, SZ_LINE-1, "%s_%s.idx%s", idxinfo(IDX_FILEROOT2), 
	     colbuf, suffix);
    if( (iname=Find(tbuf1, "r", NULL, "." ))         ||
	(iname=Find(tbuf1, "r", NULL, FilterPath())) ||
	(iname=Find(tbuf2, "r", NULL, "." ))         ||
	(iname=Find(tbuf2, "r", NULL, FilterPath())) ){
      if( (fname=Find(idxinfo(IDX_FILENAME), "r", NULL, "." ))         ||
	  (fname=Find(idxinfo(IDX_FILENAME), "r", NULL, FilterPath())) ){
	if( (stat(fname, &fbuf) <0) || (stat(iname, &ibuf) <0) ){
	  goto done;
	}
	else if( fbuf.st_mtime >  ibuf.st_mtime ){
	  goto done;
	}
      }
      snprintf(tbuf, SZ_LINE-1, "%s[1]", iname);
      idxname = xstrdup(tbuf);
      break;
    }
  }

done:
  if( iname ) xfree(iname);
  if( fname ) xfree(fname);
  if( size ) *size = ibuf.st_size;
  return idxname;
}

#ifdef ANSI_FUNC
int
idxinitparser(char *s)
#else
int idxinitparser(s)
     char *s;
#endif
{
  char *t;
  int havegz=0;
  Filter filt;

  /* sanity checks */
  if( !(filt = FilterDefault()) ) return 0;
  if( !filt->fhd->filename )      return 0;

  /* initialize index file name info */
  idxinitfilenames(filt->fhd->filename, &havegz);

  /* process index environent */
  if( (t=getenv("FILTER_IDX_COLNAME")) ){
    idxcolname = xstrdup(t);
  }
  else{
    idxcolname = xstrdup("n");
  }
  if( (t=getenv("FILTER_IDX_IO")) ){
    if( !strncasecmp(t, "mmap", 4) ){
#ifdef HAVE_SYS_MMAN_H
      idx_io = IDX_IO_MMAP;
#else
      idx_io = IDX_IO_LSEEK;
#endif
    }
    else if( !strncasecmp(t, "lseek", 5) ){
      idx_io = IDX_IO_LSEEK;
    }
    else{
      idx_io = IDX_IO_DEFAULT;
    }
  }
  /* oops ... if we have a gz file, we can't use mmap */
  if( havegz ){
    idx_io = IDX_IO_LSEEK;
  }
  if( s ) idxstring(s);
  return 1;
}

#ifdef ANSI_FUNC
void
idxendparser(void)
#else
void idxendparser()
#endif
{
  idxvalfree(NULL);
  idxrowfree(NULL);
  idxfreeglobals();
}

#ifdef ANSI_FUNC
char *
idxinfo(int which)
#else
char *idxinfo(which)
     int which;
#endif
{
  switch(which){
  case IDX_COLNAME:
    return idxcolname;
  case IDX_FILENAME:
    return idxfilename;
  case IDX_FILEROOT1:
    return idxfileroot1;
  case IDX_FILEROOT2:
    return idxfileroot2;
  case IDX_PATHNAME:
    return idxpath;
  case IDX_SORTNAME:
    return idxsort;
  default:
    return NULL;
  }
}

#ifdef ANSI_FUNC
int
idxdebug(int debug)
#else
int idxdebug(debug)
     int debug;
#endif
{
  int odebug;

  odebug = idx_debug;
  idx_debug = debug;
  return odebug;
}
