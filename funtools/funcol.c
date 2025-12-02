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
 * _FunColCmp -- compare routine for qsort
 *
 */
#ifdef ANSI_FUNC
static int
_FunColCmp(const void *s1, const void *s2)
#else
static int _FunColCmp(s1, s2)
     const void *s1;
     const void *s2;
#endif
{
  FunCol *f1 = (FunCol *)s1;
  FunCol *f2 = (FunCol *)s2;
  
  /* user order flag */
  if( (*f1)->order > (*f2)->order )
    return -1;
  if( (*f1)->order < (*f2)->order )
    return 1;
  else
    return 0;
}

#ifdef ANSI_FUNC
static int 
mparse (char *mode)
#else
static int mparse(mode)
     char *mode;
#endif
{
  int xmode = 0;
  xmode |= ( strpbrk(mode, "a") != NULL ? COL_ACTIVE : 0 );
  xmode |= ( strpbrk(mode, "i") != NULL ? COL_IBUF   : 0 );
  xmode |= ( strpbrk(mode, "p") != NULL ? COL_PTR    : 0 );
  xmode |= ( strpbrk(mode, "r") != NULL ? COL_READ   : 0 );
  xmode |= ( strpbrk(mode, "w") != NULL ? COL_WRITE  : 0 );
  return xmode;
}	

#ifdef ANSI_FUNC
static void
_FunGetAlias(Fun fun, char *iname, char *oname)
#else
static void _FunGetAlias(fun, iname, oname)
     Fun fun;
     char *iname;
     char *oname;
#endif
{
  strcpy(oname, iname);
  if( !strcasecmp(iname, "$x") ){
    if( fun->bin[0] >= 0 ){
      strcpy(oname, fun->header->table->col[fun->bin[0]].name);
    }
  }
  else if( !strcasecmp(iname, "$y") ){
    if( fun->bin[1] >= 0 ){
      strcpy(oname, fun->header->table->col[fun->bin[1]].name);
    }
  }
}


/*
 *
 * _FunColumnAddRegion -- primitive to add region to a list of columns
 *
 */
#ifdef ANSI_FUNC
static int
_FunColumnAddRegion(Fun fun, int dopad, char *mode, int *rgot, size_t *rsize)
#else
static int
_FunColumnAddRegion(fun, dopad, mode, rgot, rsize)
     Fun fun;
     int dopad;
     char *mode;
     int *rgot;
     size_t *rsize;
#endif
{
  int got=*rgot;
  size_t tsize=*rsize;
  size_t pad;

  /* only add region if we do not have it already, but don't activate it */
  if( !FunColumnLookup(fun, COL_REGION_NAME, 0,
		       NULL, NULL, NULL, NULL, NULL, NULL) ){
    /* allocate a new column struct */
    if( !(fun->cols[got] = (FunCol)xcalloc(1, sizeof(FunColRec))) ){
      gerror(stderr, "can't allocate FunCol struct\n");
      return 0;
    }
    /* fill in the blanks with the known info */
    fun->cols[got]->tcol = COL_REGION_ID;
    fun->cols[got]->name = xstrdup(COL_REGION_NAME);
    fun->cols[got]->type = 'J';
    fun->cols[got]->from  = -1;
    fun->cols[got]->mode = mparse(mode);
    fun->cols[got]->mode &= ~COL_ACTIVE;
    fun->cols[got]->n = 1;
    fun->cols[got]->width = ft_sizeof(fun->cols[got]->type);
    /* pad for alignment */
    if( dopad ){
      pad = (sizeof(int) - (tsize % sizeof(int)));
      if( pad != sizeof(int) )
	tsize += pad;
    }
    fun->cols[got]->offset = tsize;
    tsize += sizeof(int);
    got++;

    /* reset return values */
    *rgot = got;
    *rsize = tsize;
    /* return the news */
    return got;
  }
  else
    return 0;
}

/*
 *
 * _FunColumnAddNum -- primitive to add num to a list of columns
 *
 */
#ifdef ANSI_FUNC
static int
_FunColumnAddNum(Fun fun, int dopad, char *mode, int *rgot, size_t *rsize)
#else
static int
_FunColumnAddNum(fun, dopad, mode, rgot, rsize)
     Fun fun;
     int dopad;
     char *mode;
     int *rgot;
     size_t *rsize;
#endif
{
  int got=*rgot;
  size_t tsize=*rsize;
  size_t pad;

  /* only add num if we do not have it already, but don't activate it */
  if( !FunColumnLookup(fun, COL_NUM_NAME, 0,
		       NULL, NULL, NULL, NULL, NULL, NULL) ){
    /* allocate a new column struct */
    if( !(fun->cols[got] = (FunCol)xcalloc(1, sizeof(FunColRec))) ){
      gerror(stderr, "can't allocate FunCol struct\n");
      return 0;
    }
    /* fill in the blanks with the known info */
    fun->cols[got]->tcol = COL_NUM_ID;
    fun->cols[got]->name = xstrdup(COL_NUM_NAME);
    fun->cols[got]->type = 'J';
    fun->cols[got]->from  = -1;
    fun->cols[got]->mode = mparse(mode);
    fun->cols[got]->mode &= ~COL_ACTIVE;
    fun->cols[got]->n = 1;
    fun->cols[got]->width = ft_sizeof(fun->cols[got]->type);
    /* pad for alignment */
    if( dopad ){
      pad = (sizeof(int) - (tsize % sizeof(int)));
      if( pad != sizeof(int) )
	tsize += pad;
    }
    fun->cols[got]->offset = tsize;
    tsize += sizeof(int);
    got++;

    /* reset return values */
    *rgot = got;
    *rsize = tsize;
    /* return the news */
    return got;
  }
  else
    return 0;
}

/*
 *
 * _FunColumnAddTable -- primitive to add entries from a binary table to list
 *
 */
#ifdef ANSI_FUNC
static int
_FunColumnAddTable(Fun fun, FITSHead header, char *mode, 
		   int dopad, int *got, size_t *size)
#else
static int
_FunColumnAddTable(fun, header, mode, dopad, got, size)
     Fun fun;
     FITSHead header;
     char *mode;
     int dopad;
     int *got;
     size_t *size;
#endif
{
  int i;
  int pad;
  int fsize;
  FITSCard card1, card2, card3;

  for(i=0; (i<header->table->tfields) && (*got<FUN_MAXCOL) ; i++){
    /* sanity check */
    if( !ft_sizeof(header->table->col[i].type) ){
      gwarning(stderr,
      "skipping column %s with no width (FITS TFORM%d is probably unknown)\n", 
	       header->table->col[i].name, i+1);
      continue;
    }
    /* allocate a new column struct */
    if( !(fun->cols[*got] = (FunCol)xcalloc(1, sizeof(FunColRec))) ){
      gerror(stderr, "can't allocate FunCol struct\n");
      return 0;
    }
    /* fill in the blanks with the info directly from the table */
    fun->cols[*got]->tcol = i;
    fun->cols[*got]->name = xstrdup(header->table->col[i].name);

    fun->cols[*got]->from  = -1;
    fun->cols[*got]->mode = mparse(mode);
    fun->cols[*got]->n = header->table->col[i].n;
    fun->cols[*got]->tblank = header->table->col[i].dblank;
    fun->cols[*got]->doblank = header->table->col[i].has_blank;
    fun->cols[*got]->tlmin = ft_headgetr(header, "TLMIN", i+1, 0.0, &card1);
    fun->cols[*got]->tlmax = ft_headgetr(header, "TLMAX", i+1, 0.0, &card2);
    fun->cols[*got]->binsiz = ft_headgetr(header, "TDBIN", i+1, 0.0, &card3);
    fun->cols[*got]->type = header->table->col[i].type;
    if( header->table->col[i].scaled && (header->table->col[i].type != 'X')){
      /* for input data, just set the scale values */
      if( fun->cols[*got]->mode & COL_IBUF ){
	fun->cols[*got]->tzero = header->table->col[i].zero;
	fun->cols[*got]->tscale = header->table->col[i].scale;
	fun->cols[*got]->scaled = FUN_SCALE_EXISTS;
      }
      /* otherwise, change type of column to double */
      else{
	switch(header->table->col[i].type){
	case 'B':
	  fun->cols[*got]->type = 'I';
	  break;
	case 'I':
	case 'U':
	  fun->cols[*got]->type = 'J';
	  break;
	default:
	  fun->cols[*got]->type = 'D';
	  break;
	}
      }
    }
    /* save wcs keywords */
    fun->cols[*got]->tctyp = ft_headgets(header, "TCTYP",
					i+1, NULL, &card1);
    fun->cols[*got]->tcrvl = ft_headgets(header, "TCRVL",
					i+1, NULL, &card1);
    fun->cols[*got]->tcdlt = ft_headgets(header, "TCDLT",
					i+1, NULL, &card1);
    fun->cols[*got]->tcrpx = ft_headgets(header, "TCRPX",
					i+1, NULL, &card1);
    fun->cols[*got]->tcrot = ft_headgets(header, "TCROT",
					i+1, NULL, &card1);
    fun->cols[*got]->tunit = ft_headgets(header, "TUNIT",
					i+1, NULL, &card1);
    fun->cols[*got]->vla = xstrdup(header->table->col[i].vla);
    /* now that we have the type, calculate offset, width, etc. */
    fsize = ft_sizeof(fun->cols[*got]->type);
    /* pad for alignment, if necessary */
    if( dopad ){
      pad = (fsize - (*size % fsize));
      if( pad != fsize ) *size += pad;
    }
    fun->cols[*got]->offset = *size;
    fun->cols[*got]->width = fsize * fun->cols[*got]->n;
    /* size of bitfield adjusted specially */
    if( fun->cols[*got]->type == 'X' )
      fun->cols[*got]->width = (fun->cols[*got]->width + 7) / 8;
    *size += fun->cols[*got]->width;
    /* make column active */
    fun->cols[*got]->mode |= COL_ACTIVE;
    *got += 1;
  }
  /* add special columns, if necessary */
  _FunColumnAddRegion(fun, dopad, "rw", got, size);
  _FunColumnAddNum(fun, dopad, "rw", got, size);
  return *got;
}

/*
 *
 * _FunColumnSelect -- primitive to add columns to the selected column list
 *
 */
#ifdef ANSI_FUNC
static int
_FunColumnSelect(Fun fun, size_t size, char *mode, char **names, char **types,
		  char **modes, int *offsets, int nargs) 
#else
static int 
_FunColumnSelect(fun, size, mode, names, types, modes, offsets, nargs)
     Fun fun;
     size_t size;
     char *mode;
     char **names;
     char **types;
     char **modes;
     int *offsets;
     int nargs;
#endif
{
  int i;
  int got;
  int flag;
  int type;
  int ptype;
  int poff;
  int n;
  int narg;
  int offset;
  int dopad;
  int doselect;
  int doref;
  int idx;
  int dims;
  int scaled;
  size_t pad;
  size_t tsize;
  char *mbuf;
  char name[SZ_LINE];
  char tbuf[SZ_LINE];
  char *s, *t, *m;
  char *activate=NULL;
  double tlmin;
  double tlmax;
  double binsiz;
  double tscale;
  double tzero;
  FITSHead header;

  /* make sure we have something */
  if( !_FunValid(fun) )
    return 0;

  /* make sure we have something like a table */
  if( fun->header && fun->header->table ){
    header = fun->header;
    activate = NULL;
  }
  /* if not, we can use the input fun handle's table */
  else if( fun->ifun && fun->ifun->header && fun->ifun->header->table ){
    header = fun->ifun->header;
    activate = fun->ifun->activate;
  }
  /* else die */
  else{
    header = NULL;
    activate = NULL;
  }

  /* this extension must be a table */
  fun->type = FUN_TABLE;
  /* reset the io flag, since we are presumably preparing a new table */
  fun->io = 0;
  /* assume array of structs */
  fun->org = FUN_ORG_AOS;
  /* init flag */
  flag = 0;

  /* process mode string */
  doselect = 0;
  doref = 0;
  mbuf = xstrdup(mode);
  if( _FunKeyword(mbuf, "pad", NULL, tbuf, SZ_LINE) )
    dopad = istrue(tbuf);
  else
    dopad = 1;
  if( _FunKeyword(mbuf, "copy", NULL, tbuf, SZ_LINE) ){
    doselect = !strcasecmp(tbuf, "select") && (fun->ifun && fun->ifun->ncol);
    doref    = !strcasecmp(tbuf, "reference");
  }
  if( _FunKeyword(mbuf, "org", NULL, tbuf, SZ_LINE) ){
    if( !strcasecmp(tbuf, "soa") || !strcasecmp(tbuf, "structofarrays") )
      fun->org = FUN_ORG_SOA;
    else if( !strcasecmp(tbuf, "aos") || !strcasecmp(tbuf, "arrayofstructs") )
      fun->org = FUN_ORG_AOS;
  }
  if( mbuf ) xfree(mbuf);

  /* process the argument list */
  tsize = 0;
  for(narg=0, got=fun->ncol; (narg<nargs) && (got<FUN_MAXCOL); narg++){
    /* we got info from the routine call, not from the FITS file */
    flag = 1;
    /* get name, type, and mode, and make sure they are valid */
    s = names[narg];
    t = types[narg];
    m = modes[narg];
    if( !s || !*s || !t || !*t || !m || !*m )
      continue;
    offset = offsets[narg];
    _FunGetAlias(fun, s, name);
    _FunColumnType(t, &type, &n, &tlmin, &tlmax, &binsiz, &dims,
		   &tscale, &tzero, &scaled, &ptype, &poff);
    /* allocate a new column struct */
    if( !(fun->cols[got] = (FunCol)xcalloc(1, sizeof(FunColRec))) ){
      gerror(stderr, "can't allocate FunCol struct\n");
      return 0;
    }
    /* if we have a header, look for the specified column */
    if( header ){
      for(i=0; i<header->table->tfields; i++){
	if( !header->table->col[i].name ) continue;
	if( !strcasecmp(header->table->col[i].name, name) ){
	  fun->cols[got]->tcol = i;
	  fun->cols[got]->name = xstrdup(header->table->col[i].name);
	  break;
	}
      }
    }
    /* if we did not find the name in the header, maybe its "$region" */
    if( !fun->cols[got]->name && !strcasecmp(name, COL_REGION_NAME) ){
      fun->cols[got]->tcol = COL_REGION_ID;
      fun->cols[got]->name = xstrdup(COL_REGION_NAME);
    }
    if( !fun->cols[got]->name && !strcasecmp(name, COL_NUM_NAME) ){
      fun->cols[got]->tcol = COL_NUM_ID;
      fun->cols[got]->name = xstrdup(COL_NUM_NAME);
    }
    /* for reading, make sure we found it */
    if( !fun->cols[got]->name ){
      if( strchr(m, 'w') ){
	fun->cols[got]->tcol = COL_UNKNOWN_ID;
	fun->cols[got]->name = xstrdup(name);
      }
      else{
	gerror(stderr,
	       "selected column '%s' does not exist in table\n", name);
	return 0;
      }

    }
    /* fill in the remaining info */
    fun->cols[got]->type = type;
    fun->cols[got]->from = -1;
    fun->cols[got]->mode = mparse(m);
    fun->cols[got]->mode |= COL_ACTIVE;
    fun->cols[got]->mode |= ptype;
    if( poff >= 0 )
      /* offset is in units of data type */
      fun->cols[got]->poff = poff*ft_sizeof(fun->cols[got]->type);
    else
      /* negative means its a byte offset */
      fun->cols[got]->poff = -poff;
    fun->cols[got]->n = n;
    fun->cols[got]->offset = offset;
    fun->cols[got]->tlmin = tlmin;
    fun->cols[got]->tlmax = tlmax;
    fun->cols[got]->binsiz = binsiz;
    fun->cols[got]->tscale = tscale;
    fun->cols[got]->tzero = tzero;
    fun->cols[got]->scaled = scaled;
    fun->cols[got]->width = fun->cols[got]->n*ft_sizeof(fun->cols[got]->type);
    /* size of bitfield adjusted specially */
    if( fun->cols[got]->type == 'X' )
      fun->cols[got]->width = (fun->cols[got]->width + 7) / 8;
    if( fun->cols[got]->mode & COL_PTR )
      tsize += sizeof(char *);
    else
      tsize += fun->cols[got]->width;
    /* if we are merging, we may have to set the mode on an original column */
    switch( fun->merge ){
    case MERGE_UPDATE:
      /* for update, we change the value of the original column -- that is,
	 if this is a writable column itself */
      if( fun->cols[got]->mode & COL_WRITE ){
	if( (idx = FunColumnLookup(fun, fun->cols[got]->name, 0, NULL,
				   NULL, NULL, NULL, NULL, NULL)) ){
	  idx--;
	  /* we don't write the updating column */
	  fun->cols[got]->mode &= ~COL_WRITE;
	  /* instead we write the updated column with the updating info */
	  fun->cols[idx]->from = got;
	}
      }
      break;
    case MERGE_REPLACE:
      /* for replace, we don't write the original column --  that is,
	 if this is a writable column itself */
      if( fun->cols[got]->mode & COL_WRITE ){
	if( (idx = FunColumnLookup(fun, fun->cols[got]->name, 0, NULL,
				   NULL, NULL, NULL, NULL, NULL)) ){
	  idx--;
	  fun->cols[idx]->mode |= COL_REPLACEME;
	  /* if the replacing column has no tlmin,tlmax, but the replaced
	     column does, we use the replaced column's values */
	  if( !fun->cols[got]->tlmin && !fun->cols[got]->tlmax ){
	    if( fun->cols[idx]->tlmin || fun->cols[idx]->tlmax ){
	      fun->cols[got]->tlmin = fun->cols[idx]->tlmin;
	      fun->cols[got]->tlmax = fun->cols[idx]->tlmax;
	      fun->cols[got]->binsiz = fun->cols[idx]->binsiz;
	    }
	  }

	}
      }
      break;
    case MERGE_APPEND:
      /* for append, only write user columns if they are new */
      if( (idx = FunColumnLookup(fun, fun->cols[got]->name, 0, NULL,
				 NULL, NULL, NULL, NULL, NULL)) ){
	fun->cols[got]->mode &= ~COL_WRITE;
      }
      break;
    }
    got++;
  }

  /* if select, and no args, use the defaults from the FITS table itself or
     from selected input columns */
  if( !got ){
    /* copy selected columns from input struct */
    if( doselect ){
      /* flag input from columns */
      flag = 1;
      /* copy column records */
      memcpy(fun->cols, fun->ifun->cols, fun->ifun->ncol*sizeof(FunCol));
      for(got=0; got<fun->ifun->ncol; got++){
	if( !(fun->cols[got] = (FunCol)xcalloc(1, sizeof(FunColRec))) ){
	  gerror(stderr, "can't allocate FunCol struct\n");
	  return 0;
	}
	memcpy(fun->cols[got], fun->ifun->cols[got], sizeof(FunColRec));
	fun->cols[got]->name  = xstrdup(fun->ifun->cols[got]->name);
	fun->cols[got]->tctyp = xstrdup(fun->ifun->cols[got]->tctyp);
	fun->cols[got]->tcrvl = xstrdup(fun->ifun->cols[got]->tcrvl);
	fun->cols[got]->tcdlt = xstrdup(fun->ifun->cols[got]->tcdlt);
	fun->cols[got]->tcrpx = xstrdup(fun->ifun->cols[got]->tcrpx);
	fun->cols[got]->tcrot = xstrdup(fun->ifun->cols[got]->tcrot);
	fun->cols[got]->tunit = xstrdup(fun->ifun->cols[got]->tunit);
	fun->cols[got]->vla   = xstrdup(fun->ifun->cols[got]->vla);
      }
      size = fun->ifun->rowsize;
      /* copy activation string */
      fun->activate = xstrdup(fun->ifun->activate);
    }
    /* copy all of the columns from the reference file */
    else if( doref ){
      if( header ){
	/* flag that we got info from FITS file, not from the routine call */
	flag = 0;
	/* add columns from table */
	if( !_FunColumnAddTable(fun, header, "rw", dopad, &got, &tsize) )
	  return 0;
	/* if we are copying raw columns from a reference file,
	   we have to call the reference activate routine */
	if( activate ) FunColumnActivate(fun, activate, NULL);
      }
      else{
	gerror(stderr, "no reference header passed to FunColumnSelect()\n");
	return 0;
      }
    }
  }

  /* this is how many specified columns we have */
  fun->ncol = got;

  /* if we had input, we have to accept the size */
  if( flag )
    fun->rowsize = size;
  else{
    /* make sure we are padded properly */
    if( dopad ){
      pad = sizeof(double) - (tsize % sizeof(double));
      if( pad != sizeof(double) )
	tsize += pad;
    }
    fun->rowsize = tsize;
  }
  if( fun->rowsize < 0 ){
    gerror(stderr, "invalid event record size in FunColumnSelect (%d)\n",
	   fun->rowsize);
    return 0;
  }

  /* return the number of selected columns */
  return fun->ncol;
}

/*
 *
 * semi-public routines
 *
 */

/*
 *
 * _FunColumnHeader -- generate a fitsy header from the col array
 *
 */
#ifdef ANSI_FUNC
void
_FunColumnHeader(Fun fun, FunCol *cols, int ncol)
#else
void _FunColumnHeader(fun, cols, ncol)
     Fun fun;
     FunCol *cols;
     int ncol;
#endif
{
  int i, j, k;
  int width;
  int acol;

  char tbuf[SZ_LINE];
  char *extname="EVENTS";
  int extver = 1;
  FITSHead old, merge;
  FITSCard card;

  /* make sure we have something to work with */
  if( !_FunValid(fun) )
    return;

  /* create a fitsy header, if necessary */
  if( !fun->header ){
    if( (fun->header = ft_headinit(NULL, 0)) == NULL )
      return;
  }

  /* get width of each row */
  for(acol=0, width=0, i=0; i<ncol; i++){
    if( (cols[i]->mode  & COL_ACTIVE)     &&
	(cols[i]->mode  & COL_WRITE)      &&
       !(cols[i]->mode & COL_REPLACEME)   ){
      width += cols[i]->width;
      acol++;
    }
  }

  /* if there is an input table, look for a name */
  if( fun->ifun && fun->ifun->header && fun->ifun->header->basic ){
    if( ft_name(fun->ifun->header) && *ft_name(fun->ifun->header) )
      extname = ft_name(fun->ifun->header);
    extver = MAX(1, ft_extn(fun->ifun->header));
  }

  /* fill in the header to this binary table */
  ft_headsets(fun->header, "XTENSION", 0, "BINTABLE", "FITS BINARY TABLE", 1);
  ft_headseti(fun->header, "BITPIX", 0, 8, "Binary data", 1);
  ft_headseti(fun->header, "NAXIS", 0, 2, "Table is a matrix", 1);
  ft_headseti(fun->header, "NAXIS", 1, width, "Width of table in bytes", 1);
  ft_headseti(fun->header, "NAXIS", 2, -1, "Number of entries in table", 1);
  ft_headseti(fun->header, "PCOUNT", 0, 0, "Random parameter count", 1);
  ft_headseti(fun->header, "GCOUNT", 0, 1, "Group count", 1);
  ft_headseti(fun->header, "TFIELDS", 0, acol, "Number of fields in row", 1);
  if( !ft_headfind(fun->header, "EXTNAME", 0, 0) )
    ft_headsets(fun->header, "EXTNAME", 0, extname, "Ext. name", 1);
  if( !ft_headfind(fun->header, "EXTVER", 0, 0) )
    ft_headseti(fun->header, "EXTVER", 0, extver, "Ext. version", 1);


  /* now add the info for each active column */
  for(i=0, j=1; i<ncol; i++){
    if( !(cols[i]->mode & COL_ACTIVE)     ||
	!(cols[i]->mode & COL_WRITE)      ||
	 (cols[i]->mode & COL_REPLACEME)  )
      continue;
    if( cols[i]->vla ){
      ft_headsets(fun->header, "TFORM", j, cols[i]->vla,
		  "Data type for field", 1);
    }
    else{
      snprintf(tbuf, SZ_LINE-1, "%d%c", cols[i]->n, toupper(cols[i]->type));
      ft_headsets(fun->header, "TFORM", j, tbuf, "Data type for field", 1);
    }
    /* name of column */
    if( fun->cols[i]->name ){
      /* we change "$region" to "region" */
      if( !strcasecmp(cols[i]->name, COL_REGION_NAME) ){
	/* best to use "region", if its not already used */
	if( !FunColumnLookup(fun, COL_REGION_ONAME, 0,
			     NULL, NULL, NULL, NULL, NULL, NULL) )
	  ft_headsets(fun->header,
		      "TTYPE", j, COL_REGION_ONAME, "Label for field", 1);
	/* otherwise use region[n], using the first free value for n */
	else{
	  for(k=1; ; k++){
	    snprintf(tbuf, SZ_LINE-1, "%s%d", COL_REGION_ONAME, k);
	    if( !FunColumnLookup(fun, tbuf, 0,
				 NULL, NULL, NULL, NULL, NULL, NULL) ){
	      ft_headsets(fun->header, "TTYPE", j, tbuf, "Label for field", 1);
	      break;
	    }
	  }
	}
      }
      /* might have to change "$n" to something else */
      else if( !strcasecmp(cols[i]->name, COL_NUM_NAME) ){
	/* best to use "n", if its not already used */
	if( !FunColumnLookup(fun, COL_NUM_ONAME, 0,
			     NULL, NULL, NULL, NULL, NULL, NULL) )
	  ft_headsets(fun->header,
		      "TTYPE", j, COL_NUM_ONAME, "Label for field", 1);
	/* otherwise use n[n], using the first free value for n */
	else{
	  for(k=1; ; k++){
	    snprintf(tbuf, SZ_LINE-1, "%s%d", COL_NUM_ONAME, k);
	    if( !FunColumnLookup(fun, tbuf, 0,
				 NULL, NULL, NULL, NULL, NULL, NULL) ){
	      ft_headsets(fun->header, "TTYPE", j, tbuf, "Label for field", 1);
	      break;
	    }
	  }
	}
      }
      /* not a special name, just use as is */
      else{
	ft_headsets(fun->header,
		    "TTYPE", j, cols[i]->name, "Label for field", 1);
      }
    }
    /* write out tlmin/tlmax values if either is set */
    if( cols[i]->tlmin || cols[i]->tlmax ){
      /* match data type of number to data type of column */
      switch(cols[i]->type){
      case 'D':
      case 'E':
	if( !ft_headfind(fun->header, "TLMIN", j, 0) )
	  ft_headsetr(fun->header, "TLMIN", j, cols[i]->tlmin, 7,
		      "Min. axis value", 1);
	if( !ft_headfind(fun->header, "TLMAX", j, 0) )
	  ft_headsetr(fun->header, "TLMAX", j, cols[i]->tlmax, 7,
		      "Max. axis value", 1);
	if( cols[i]->binsiz != 0.0 ){
	  if( !ft_headfind(fun->header, "TDBIN", j, 0) )
	    ft_headsetr(fun->header, "TDBIN", j, cols[i]->binsiz, 7,
			"Binsize", 1);
	}
	break;
      default:
	if( !ft_headfind(fun->header, "TLMIN", j, 0) )
	  ft_headseti(fun->header, "TLMIN", j, (int)cols[i]->tlmin,
		      "Min. axis value", 1);
	if( !ft_headfind(fun->header, "TLMAX", j, 0) )
	  ft_headseti(fun->header, "TLMAX", j, (int)cols[i]->tlmax,
		      "Max. axis value", 1);
	if( cols[i]->binsiz != 0.0 ){
	  if( !ft_headfind(fun->header, "TDBIN", j, 0) )
	    ft_headsetr(fun->header, "TDBIN", j, cols[i]->binsiz, 7,
			"Binsize", 1);
	}
	break;
      }
    }
    /* add wcs info */
    if( cols[i]->tctyp && !ft_headfind(fun->header, "TCTYP", j, 0))
      ft_headsets(fun->header,
		  "TCTYP", j, cols[i]->tctyp, "axis type (e.g. RA---TAN)", 1);
    if( cols[i]->tcrvl && !ft_headfind(fun->header, "TCRVL", j, 0))
      ft_headappv(fun->header,
		  "TCRVL", j, cols[i]->tcrvl, "sky coord (deg.)");
    if( cols[i]->tcdlt && !ft_headfind(fun->header, "TCDLT", j, 0))
      ft_headappv(fun->header,
		  "TCDLT", j, cols[i]->tcdlt, "degrees per pixel");
    if( cols[i]->tcrpx && !ft_headfind(fun->header, "TCRPX", j, 0))
      ft_headappv(fun->header,
		  "TCRPX", j, cols[i]->tcrpx, "pixel of tangent plane direc.");
    if( cols[i]->tcrot && !ft_headfind(fun->header, "TCROT", j, 0))
      ft_headappv(fun->header,
		  "TCROT", j, cols[i]->tcrot, "rotation angle (degrees)");
    if( cols[i]->tunit && !ft_headfind(fun->header, "TUNIT", j, 0))
      ft_headsets(fun->header,
		  "TUNIT", j, cols[i]->tunit, "axis units", 1);
    if( cols[i]->tblank && !ft_headfind(fun->header, "TNULL", j, 0))
      ft_headsetr(fun->header, "TNULL", j, (double)cols[i]->tblank, 7,
		  "undefined value", 1);
    if( cols[i]->scaled & FUN_SCALE_APPLIED ){
      if( ft_headfind(fun->header, "TZERO", j, 0) )
	ft_headdel(fun->header, "TZERO", j);
      if( ft_headfind(fun->header, "TSCAL", j, 0) )
	ft_headdel(fun->header, "TSCAL", j);
    }
    else if( cols[i]->scaled & FUN_SCALE_EXISTS ){
      ft_headsetr(fun->header, "TZERO", j, cols[i]->tzero, 7, 
		  "phys_val = tzero + tscale * field_val", 1);
      ft_headsetr(fun->header, "TSCAL", j, cols[i]->tscale, 7, 
		  "phys_val = tzero + tscale * field_val", 1);
    }
    j++;
  }

  /* now turn this into a table header */
  ft_syncdata(fun->header);

  /* merge in params from original header, if they exist */
  if( fun->ifun && fun->ifun->header && fun->ifun->header->table ){
    old = ft_headcopy(fun->ifun->header);
    i = ft_headgeti(old, "TFIELDS", 0, 0, &card);
    _FunCopyBinDelete(old, i);
    /* merge, but don't overwrite new with old */
    merge = ft_headmerge(fun->header, old, 0);
    ft_headfree(old, 1);
    ft_headfree(fun->header, 1);
    fun->header = merge;
    ft_syncdata(fun->header);
  }

  /* merge in user-specified params with overwrite */
  merge = ft_headmerge(fun->header, fun->theader, 1);
  ft_headfree(fun->theader, 1);
  fun->theader = NULL;
  ft_headfree(fun->header, 1);
  fun->header = merge;
  ft_syncdata(fun->header);
}

/*
 *
 * _FunColumnReplace -- replace values from one set of columns into another
 *
 */
#ifdef ANSI_FUNC
int
_FunColumnReplace(Fun fund, char *d, Fun funs, char *s, 
		 int convert, int direction, int n)
#else
int _FunColumnReplace(fund, d, funs, s, convert, direction, n)
     Fun fund;
     char *d;
     Fun funs;
     char *s;
     int convert;
     int direction;
     int n;
#endif
{
  int i, j;
  int got = 0;
  char *ss, *dd;

  n = MAX(1,n);
  while( n-- ){
    for(i=0; i<funs->ncol; i++){
      for(j=0; j<fund->ncol; j++){
	if( !strcasecmp(funs->cols[i]->name, fund->cols[j]->name) ){
	  /* determine addresses for pointers or offsets */
	  if( !(funs->cols[i]->mode & COL_PTR) )
	    ss = s+funs->cols[i]->offset;
	  else
	    ss = *((char **)(((char *)s)+funs->cols[i]->offset));
	  ss += funs->cols[i]->poff;
	  if( !(fund->cols[j]->mode & COL_PTR) )
	    dd = d+fund->cols[j]->offset;
	  else
	    dd = *((char **)(((char *)d)+fund->cols[j]->offset));
	  dd += fund->cols[i]->poff;
	  /* convert dest to source type and replace */
	  ft_acht2(fund->cols[j]->offset, dd, funs->cols[i]->offset, ss,
		   MIN(funs->cols[i]->n,fund->cols[j]->n),
		   convert, direction);
	  got++;
	  break;
	}
      }
    }
    s += funs->rowsize;
    d += fund->rowsize;
  }
  return got;
}

#ifdef ANSI_FUNC
void
_FunColumnFree(Fun fun)
#else
void _FunColumnFree(fun)
     Fun fun;
#endif
{
  int i;

  if( !_FunValid(fun) )
    return;
  if( fun->cols ){
    for(i=0; i<fun->ncol; i++){
      if( fun->cols[i] ){
	if( fun->cols[i]->name )  xfree(fun->cols[i]->name);
	if( fun->cols[i]->tctyp ) xfree(fun->cols[i]->tctyp);
	if( fun->cols[i]->tcrvl ) xfree(fun->cols[i]->tcrvl);
	if( fun->cols[i]->tcdlt ) xfree(fun->cols[i]->tcdlt);
	if( fun->cols[i]->tcrpx ) xfree(fun->cols[i]->tcrpx);
	if( fun->cols[i]->tcrot ) xfree(fun->cols[i]->tcrot);
	if( fun->cols[i]->tunit ) xfree(fun->cols[i]->tunit);
	if( fun->cols[i]->vla )   xfree(fun->cols[i]->vla);
	xfree(fun->cols[i]);
      }
    }
    xfree(fun->cols);
    fun->cols = NULL;
  }
  fun->ncol = 0;
  fun->rowsize = 0;
  fun->merge = 0;
}

/*
 *
 * public routines
 *
 */

/*
 *
 * FunColumnActivate -- activate/de-activate a list of columns
 *
 */
#ifdef ANSI_FUNC
void
FunColumnActivate(Fun fun, char *s, char *mode)
#else
void FunColumnActivate(fun, s, mode)
     Fun fun;
     char *s;
     char *mode;
#endif
{
  int i, j;
  int xmode;
  int dosort;
  int matches;
  int ip=0;
  int ncol=0;
  int imodes=0;
  int emodes=0;
  int amode=0;
  int  modes[FUN_MAXCOL];
  char *names[FUN_MAXCOL];
  char tbuf[SZ_LINE];
  char tbuf2[SZ_LINE];
  char *t;
  char *mbuf;

  /* sanity check */
  if( !fun ) return;

  /* if no columns on the commmand line ... */
  if( !s ){
    /* check for existence of previously specified view cols */
    if( fun->vcols ){
      s = fun->vcols;
    }
    /* or look for environment variable */
    else{
      s = getenv("FUN_COLUMNS");
    }
  }

  /* sanity check */
  if( !s || !*s ) return;

  /* process mode string */
  mbuf = xstrdup(mode);
  if( _FunKeyword(mbuf, "sort", NULL, tbuf, SZ_LINE) )
    dosort = istrue(tbuf);
  else
    dosort = -1;
  if( _FunKeyword(mbuf, "mode", NULL, tbuf, SZ_LINE) )
    amode = mparse(tbuf);
  if( mbuf ) xfree(mbuf);

  /* parse entries and create a list of names/modes */
  while( word(s, tbuf, &ip) ){
    if( _FunKeyword(tbuf, "sort", NULL, tbuf2, SZ_LINE) ){
      dosort = istrue(tbuf2);
      continue;
    }
    /* convert to upper case */
    t = tbuf;
    /* set activate mode and get name without prefix */
    if( *tbuf == '-' ){
      t++;
      xmode = 0;
    }
    else if( *tbuf == '+' ){
      t++;
      xmode = 1;
    }
    else
      xmode = 1;
    if( xmode )
      imodes++;
    else
      emodes++;
    /* look up aliases for this name */
    _FunGetAlias(fun, t, tbuf2);
    /* save this entry */
    names[ncol] = xstrdup(tbuf2);
    modes[ncol] = xmode;
    ncol++;
  }

  /* loop through the (possible) list */
  for(; fun != NULL; fun=fun->next){
    if( !_FunValid(fun) )
      return;

    /* if we delayed the open for reading before, we have to open now */
    if( !fun->header && strchr(fun->mode, 'r') )
      _FunFITSOpen(fun, fun->fname, "r");

    /* if we have no columns yet, try to get some from the assoc. input file */
    if( !fun->ncol ){
      /* if we have a header to copy from, that is */
      if( fun->ifun && fun->ifun->header && fun->ifun->header->table ){
	FunColumnSelect(fun, 0, "copy=select", NULL);
	/* grab the copied merge value as well */
	fun->merge = fun->ifun->merge;
      }
      /* else we lose */
      else
	return;
    }

    /* save activation string */
    if( fun->activate ) xfree(fun->activate );
    fun->activate = xstrdup(s);

    /* handle the case of setting the mode specially */
    if( amode ) goto doamode;

    /* if we have excludes, activate all to start with */
    if( emodes && !imodes ){
      for(i=0; i<fun->ncol; i++){
	if( !fun->cols[i]->name ) continue;
	/* all except the special columns, that is! */
	if( strcasecmp(fun->cols[i]->name, COL_REGION_NAME) &&
	    strcasecmp(fun->cols[i]->name, COL_NUM_NAME) )
	  fun->cols[i]->mode |= COL_ACTIVE;
      }
    }
    /* otherwise, we de-activate all to start with */
    else if( imodes ){
      if( dosort < 0 )
	dosort = 1;
      for(i=0; i<fun->ncol; i++){
	fun->cols[i]->mode &= ~COL_ACTIVE;
	fun->cols[i]->order = 0;
      }
    }

    /* process entries */
    for(j=0; j<ncol; j++){
      /* "+" means activate all, "-" means de-activate all,
         (nb: we removed the +/i earlier, leaving no name) */
      if( !*names[j] ){
	for(i=0; i<fun->ncol; i++){
	  if( modes[j] ){
	    if( !fun->cols[i]->name ) continue;
	    /* all except the special columns, that is! */
	    if( strcasecmp(fun->cols[i]->name, COL_REGION_NAME) &&
		strcasecmp(fun->cols[i]->name, COL_NUM_NAME) )
	      fun->cols[i]->mode |= COL_ACTIVE;
	  }
	  else{
	    fun->cols[i]->mode &= ~COL_ACTIVE;
	    fun->cols[i]->order = 0;
	  }
	}
	continue;
      }
      /* look for corresponding selected column and set status */
      for(matches=0, i=0; i<fun->ncol; i++){
	if( !fun->cols[i]->name ) continue;
	if( !strcasecmp(fun->cols[i]->name, names[j])     ||
	    tmatch(fun->cols[i]->name, names[j])          ){
	  matches++;
	  if( modes[j] ){
	    fun->cols[i]->mode |= COL_ACTIVE;
	    if( dosort == 1 )
	      fun->cols[i]->order = ncol-j;
	  }
	  else{
	    fun->cols[i]->mode &= ~COL_ACTIVE;
	  }
	}
      }
      /* can't activate a non-existent column, but ok to de-activate one */
      if( !matches && modes[j] ){
	gerror(stderr, "no column named '%s' in table\n", names[j]);
	return;
      }
    }

    /* re-sort, if necessary */
    if( dosort == 1 ){
      /* save current indexes to adjust the 'from' value after sorting */
      for(i=0; i<fun->ncol; i++)
	fun->cols[i]->ofrom = i;
      /* sort the column records */
      qsort(fun->cols, fun->ncol, sizeof(FunCol), _FunColCmp);
      /* fix up the 'from' indices to reflect the new indexes */
      for(i=0; i<fun->ncol; i++){
	/* if 'from' is not 'self' ... */
	if( fun->cols[i]->from >=0 ){
	  /* look through al columns ... */
	  for(j=0; j<fun->ncol; j++){
	    /* ... for the original index */
	    if( fun->cols[i]->from == fun->cols[j]->ofrom ){
	      /* reset the 'from' value to the new index of this column */
	      fun->cols[i]->from = j;
	      break;
	    }
	  }
	}
      }
    }
    continue;

/* special code to activate and change access mode */
doamode:
    for(j=0; j<ncol; j++){
      /* "+" means activate all, "-" means de-activate all,
         (nb: we removed the +/i earlier, leaving no name) */
      if( *names[j] ){
	/* look for corresponding selected column and set status */
	for(matches=0, i=0; i<fun->ncol; i++){
	  if( !fun->cols[i]->name ) continue;
	  if( !strcasecmp(fun->cols[i]->name, names[j])     ||
	      tmatch(fun->cols[i]->name, names[j])          ){
	    /* set the new mode */
	    fun->cols[i]->mode = amode;
	    if( modes[j] ){
	      fun->cols[i]->mode |= COL_ACTIVE;
	    }
	    else{
	      fun->cols[i]->mode &= ~COL_ACTIVE;
	    }
	  }
	}
      }
    }
    continue;
  }

  /* clean up */
  for(j=0; j<ncol; j++){
    /* done with this one */
    if( names[j] ) xfree(names[j]);
  }
}

/*
 *
 * FunColumnSelectArr -- non-varargs add columns to the selected column list
 *
 */
#ifdef ANSI_FUNC
int
FunColumnSelectArr(Fun fun, size_t size, char *mode, 
		   char **names, char **types,
		   char **modes, int *offsets, int nargs) 
#else
int FunColumnSelectArr(fun, size, mode, names, types, modes, offsets, nargs)
     Fun fun;
     size_t size;
     char *mode;
     char **names;
     char **types;
     char **modes;
     int *offsets;
     int nargs;
#endif
{
  int got, goterr;
  int domerge;
  size_t tsize;
  char *mbuf;
  char *activate;
  char tbuf[SZ_LINE];
  FITSHead header;

  /* start out with no error */
  goterr = 0;

  /* how many args have we got? */
  got = nargs;

  /* look at keywords */
  mbuf = xstrdup(mode);
  if( _FunKeyword(mbuf, "merge", NULL, tbuf, SZ_LINE) ){
    if( !strncasecmp(tbuf, "replace", 7) )
      domerge = MERGE_REPLACE;
    else if( !strncasecmp(tbuf, "append", 6) )
      domerge = MERGE_APPEND;
    else if( !strncasecmp(tbuf, "update", 6) )
      domerge = MERGE_UPDATE;
    else if( istrue(tbuf) )
      domerge = MERGE_UPDATE;
    else
      domerge = 0;
  }
  else
    domerge = 0;
  if( mbuf ) xfree(mbuf);

  /* loop through the (possible) list */
  for(; fun != NULL; fun=fun->next){
    /* make sure we have something */
    if( !_FunValid(fun) ){
      goterr = 1;
      goto done;
    }

    /* if we delayed the open for reading before, we have to open now */
    if( !fun->header && strchr(fun->mode, 'r') )
      _FunFITSOpen(fun, fun->fname, "r");

    /* free previous -- this is a new start */
    _FunColumnFree(fun);
    /* allocate space for these new columns */
    if( !(fun->cols = (FunCol *)xcalloc(FUN_MAXCOL, sizeof(FunCol))) ){
      gerror(stderr, "can't allocate FunCol array\n");
      goterr = 1;
      goto done;
    }

    /* if merging, we need to set up the raw input columns for writing */
    if( (fun->merge=domerge) != 0 ){
      if( fun->header && fun->header->table ){
	header = fun->header;
	activate = NULL;
      }
      /* if not, we can use the input fun handle's table */
      else if( fun->ifun && fun->ifun->header && fun->ifun->header->table ){
	header = fun->ifun->header;
	activate = fun->ifun->activate;
      }
      /* else die */
      else{
	goterr = 1;
	goto done;
      }
      /* set flag for writing, also flag this as input data, not user data */
      tsize=0;
      if( !_FunColumnAddTable(fun, header, "iw", 0, &(fun->ncol), &tsize) ){
	goterr = 1;
	goto done;
      }
      /* if we are copying raw columns from a reference file,
	 we have to call the reference activate routine */
      if( activate ) FunColumnActivate(fun, activate, NULL);
    }

    /* we can't have no columns and no mode */
    if( !got && !mode ){
      gerror(stderr, "FunColumnSelect requires valid column(s) or mode\n");
      goterr = 1;
      goto done;
    }

    /* add columns (or add default columns if none were specified) */
    _FunColumnSelect(fun, size, mode, names, types, modes, offsets, got);
  }

done:
  /* return the news */
  if( goterr )
    got = 0;
  return got;
}

/*
 *
 * FunColumnSelect -- select columns for extraction
 *
 */
#ifdef __STDC__
int FunColumnSelect(Fun fun, size_t size, char *mode, ...) 
{
  int i;
  int got, got2;
  char *s;
  char *names[FUN_MAXCOL];
  char *types[FUN_MAXCOL];
  char *modes[FUN_MAXCOL];
  int offsets[FUN_MAXCOL];
  va_list args;
  va_start(args, mode);
#else
int FunColumnSelect(va_alist) va_dcl
{
  Fun fun;
  size_t size;
  int i;
  int got, got2;
  char *s;
  char *mode;
  char *names[FUN_MAXCOL];
  char *types[FUN_MAXCOL];
  char *modes[FUN_MAXCOL];
  int offsets[FUN_MAXCOL];
  va_list args;
  va_start(args);
  fun  = va_arg(args, Fun);
  size  = va_arg(args, size_t);
  mode  = va_arg(args, char *);
#endif

  /* collect variable arguments */
  for(got=0; (s=va_arg(args, char *)) && *s && (got<FUN_MAXCOL); got++ ){
    names[got] = xstrdup(s);
    s = va_arg(args, char *);
    types[got] = xstrdup(s);
    s = va_arg(args, char *);
    modes[got] = xstrdup(s);
    offsets[got] = va_arg(args, int);
  }

  /* call non-varargs version */
  got2=FunColumnSelectArr(fun, size, mode, names, types, modes, offsets, got);

  /* clean up */
  for(i=0; i<got; i++){
    if( names[i] ) xfree(names[i]);
    if( types[i] ) xfree(types[i]);
    if( modes[i] ) xfree(modes[i]);
  }

  /* return the news */
  return got2;
}

#ifdef ANSI_FUNC
int
FunColumnLookup(Fun fun, char *s, int which, char **name,
		int *type, int *mode, int *offset, int *n, int *width)
#else
int FunColumnLookup(fun, s, which, name, type, mode, offset, n, width)
     Fun fun;
     char *s;
     int which;
     char **name;
     int *type;
     int *mode;
     int *offset;
     int *n;
     int *width;
#endif
{
  int i;
  int got = 0;

  /* make sure we have something */
  if( !_FunValid(fun) )
    return 0;

  /* if we delayed the open for reading before, we have to open now */
  if( !fun->header && strchr(fun->mode, 'r') )
    _FunFITSOpen(fun, fun->fname, "r");

  /* if we were passed a string, use that as the name for the lookup */
  if( s ){
    for(i=0; i<fun->ncol; i++){
      if( !fun->cols[i]->name ) continue;
      if( !strcasecmp(s, fun->cols[i]->name) ){
	got = i+1;
	break;
      }
    }
  }
  /* otherwise, we got the zero-based index to lookup */
  else
    got = which+1;

  /* if we have something to look up, do it */
  if( got ){
    i = got - 1;
    if( name )   *name   = fun->cols[i]->name;
    if( type )   *type   = fun->cols[i]->type;
    if( mode )   *mode   = fun->cols[i]->mode;
    if( offset ) *offset = fun->cols[i]->offset;
    if( n )      *n      = fun->cols[i]->n;
    if( width )  *width  = fun->cols[i]->width;
  }
  return got;
}

#ifdef ANSI_FUNC
int
FunColumnLookup2(Fun fun, char *s, int which, double *tlmin, double *tlmax,
		 double *binsize, double *tscale, double *tzero)
#else
int FunColumnLookup2(fun, s, which, tlmin, tlmax, binsize, tscale, tzero)
     Fun fun;
     char *s;
     int which;
     double *tlmin;
     double *tlmax;
     double *binsize;
     double *tscale;
     double *tzero;
#endif
{
  int i;
  int got = 0;

  /* make sure we have something */
  if( !_FunValid(fun) )
    return 0;

  /* if we delayed the open for reading before, we have to open now */
  if( !fun->header && strchr(fun->mode, 'r') )
    _FunFITSOpen(fun, fun->fname, "r");

  /* if we were passed a string, use that as the name for the lookup */
  if( s ){
    for(i=0; i<fun->ncol; i++){
      if( !fun->cols[i]->name ) continue;
      if( !strcasecmp(s, fun->cols[i]->name) ){
	got = i+1;
	break;
      }
    }
  }
  /* otherwise, we got the zero-based index to lookup */
  else
    got = which+1;

  /* if we have something to look up, do it */
  if( got ){
    i = got - 1;
    if( tlmin )   *tlmin   = fun->cols[i]->tlmin;
    if( tlmax )   *tlmax   = fun->cols[i]->tlmax;
    if( binsize ) *binsize = fun->cols[i]->binsiz;
    if( tscale )  *tscale  = fun->cols[i]->tscale;
    if( tzero )   *tzero   = fun->cols[i]->tzero;
  }
  return got;
}

