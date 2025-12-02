/*
 *	Copyright (c) 2005 Smithsonian Astrophysical Observatory
 */

#include <funtoolsP.h>
#include <ctype.h>

/*
 *
 * semi-public routines shared between funopen.c and other open modules
 *
 */

/*
 *
 * _FunNew -- allocate a new fun record
 *
 */
#ifdef ANSI_FUNC
Fun
_FunNew(void)
#else
Fun _FunNew()
#endif
{
  Fun fun;

  fun = (Fun)xcalloc(1, sizeof(FunRec));
  /* set the magic value */
  fun->magic = FUN_MAGIC;
  /* set table binning values to impossible values */
  fun->bin[0] = -1;
  fun->bin[1] = -1;
  /* no value column for binning yet */
  fun->vbin = -1;
  /* reset header position flag */
  fun->headpos = (off_t)-1;
  /* no data yet */
  fun->datastart = (off_t)-1;
  /* init save fd's to impossible values */
  fun->lmem = -1;
  /* set binsiz values to default value of 1 */
  fun->binsiz1 = 1;
  fun->binsiz2 = 1;
  /* no reaon why we can't filter */
  fun->dofilt = 1;
  /* convert flags not yet set */
  fun->iconvert = -1;
  fun->oconvert = -1;
  /* assume 2D image */
  fun->dims = 2;

  return fun;
}

#ifdef ANSI_FUNC
int 
_FunSpecialFile(char *fname, char *type,
		char *name, char *tail, char *special, int mlen)
#else
int _FunSpecialFile(fname, type, name, tail, special, mlen)
     char *fname;
     char *type;
     char *name;
     char *tail;
     char *special;
     int mlen;
#endif
{
  int len, tlen;
  char *s, *t;
  char tbuf[SZ_LINE];

  /* start off pessimistically */
  *name = '\0';
  *tail = '\0';
  *special = '\0';

  /* get type string */
  strncpy(tbuf, type, SZ_LINE-1);
  strncat(tbuf, "(", SZ_LINE-1);
  len = strlen(tbuf);

  /* look for [TYPE(...) */
  if( ((s=strchr(fname, '['))||(s=strchr(fname, ',')))    	&& 
      !strncasecmp(s+1, tbuf, len) && (t=strchr(s, ')'))  	&&
      ((*(t+1) == ')') || (*(t+1) == ',') || (*(t+1) == ']'))	){
    tlen = MIN(mlen-1,s-fname);
    strncpy(name, fname, tlen);
    name[tlen] = '\0';
    while( *(s+len+1) == '(' ) s++;
    tlen = MIN(mlen-1,t-(s+len+1));
    strncpy(special, s+len+1, tlen);
    special[tlen] = '\0';
    /* if special specification is blank, try to get it from the environment */
    if( !*special  && getenv(type) ) strncpy(special, getenv(type), mlen);
    special[mlen-1] = '\0';
    /* create tail, skipping empty section if necessary */
    while( *t == ')' ) t++;
    if( *t != ']' ){
      strncpy(tail, "[", mlen);
      strncat(tail, t, mlen);
    }
    else{
      strncpy(tail, ++t, mlen);
    }
    tail[mlen-1] = '\0';
    return 1;
  }
  else{
    return 0;
  }
}

/*
 *
 *  _FunRowNum -- get table/event row limits
 *
 */
#ifdef ANSI_FUNC
int
_FunRowNum(Fun fun, char *tail, char *env)
#else
int _FunRowNum(fun, tail, env)
     Fun fun;
     char *tail;
     char *env;
#endif
{
  char lobuf[SZ_LINE];
  char hibuf[SZ_LINE];
  char key[SZ_LINE];
  char *k;
  int ip=0;
  int lo, hi;
  int skip;

  /* first look in the extension for row range specification */
  if( _FunKeyword(tail, "row#", env, key, SZ_LINE) ){
    /* use a few command separators (as well as \n) */
    newdtable(",:)");
    k = key;
    /* point past first paren */
    if( *k == '(' )
      k++;
    /* process row specifiers */
    if( word(k, lobuf, &ip) ){
      /* set lo limit */
      if( !strcmp(lobuf, "*") )
	lo = 1;
      else
	lo = atoi(lobuf);
      /* set hi limit */
      if( word(k, hibuf, &ip) ){
	if( !strcmp(hibuf, "*") )
	  hi = fun->total;
	else
	  hi = atoi(hibuf);
      }
      /* if no hi limit, use lo (i.e. 1 row) ... or maybe use all rows */
      else{
	if( !strcmp(lobuf, "*") )
	  hi = fun->total;
	else
	  hi = lo;
      }
      /* must be within range */
      lo = MAX(1,lo);
      hi = MIN(fun->total,hi);
      /* skip past initial rows we are not interested in */
      if( lo > 1 ){
	skip = (lo-1) * fun->rawsize;
	gskip(fun->gio, (off_t)skip);
	fun->bytes += skip;
      }
      fun->left -= (lo-1);
      fun->left -= (fun->total-hi);
    }
    freedtable();
    return 1;
  }
  else
    return 0;
}

/*
 *
 *  _FunTableBinCols -- get table columns for binning
 *
 */
#ifdef ANSI_FUNC
int
_FunTableBinCols(Fun fun, char *tail, char *env)
#else
int _FunTableBinCols(fun, tail, env)
     Fun fun;
     char *tail;
     char *env;
#endif
{
  FITSCard card;
  int i, j, n;
  int got;
  int ip=0;
  int dims;
  int scaled;
  double tlmin, tlmax, binsiz, tscale, tzero;
  char *s;
  char *k;
  char key[SZ_LINE];
  char tbuf[SZ_LINE];
  char tbuf2[SZ_LINE];
  char binstr[2][SZ_LINE];
  static char *tstr[] = {"X", "Y"};
  static char *tstr2[] = {"x", "y"};

  /* set keys to impossible values */
  fun->bin[0] = -1;
  fun->bin[1] = -1;

  /* for backward compatibility, we look for binkey as well */
  if( !strcmp(env, "FITS_BINCOLS" ) )
    strcpy(tbuf2, "FITS_BINKEY");
  else if( !strcmp(env, "EVENTS_BINCOLS" ) )
    strcpy(tbuf2, "EVENTS_BINKEY");
  else if( !strcmp(env, "TEXT_BINCOLS" ) )
    strcpy(tbuf2, "TEXT_BINKEY");
  else
    *tbuf2 = '\0';

  /* first look in the extension for binning specification */
  if( _FunKeyword(tail, "bincols", env, tbuf, SZ_LINE) ){
    strcpy(key, tbuf);
  }
  else if( _FunKeyword(tail, "bincol", env, tbuf, SZ_LINE) ){
    strcpy(key, tbuf);
  }
  /* backward compatibility */
  else if( _FunKeyword(tail, "binkey", tbuf2, tbuf, SZ_LINE) ){
    strcpy(key, tbuf);
  }
  /* look for default binning specifications */
  else{
    got = 0;
    *key = '\0';
    /* look for CHANDRA PREFX keyword */
    for(j=1; j<=2; j++){
      if( (s=ft_headgets(fun->header, "CPREF", j, NULL, &card)) && card){
	strcat(key, s);
	strcat(key, ",");
	got |= j;
	if( s ) xfree(s);
      }
      else if( (s=ft_headgets(fun->header, "PREFX", j, NULL, &card)) && card){
	strcat(key, s);
	strcat(key, ",");
	got |= j;
	if( s ) xfree(s);
      }
    }
    /* look specifically for X, Y */
    if( got != 3 ){
      got = 0;
      *key = '\0';
      for(j=0; j<=1; j++){
	/* first look for X,Y as the default */
	for(i=0; i<fun->header->table->tfields; i++){
	  if( !fun->header->table->col[i].name ) continue;
	  if( !strcasecmp(fun->header->table->col[i].name, tstr[j]) ){
	    strcat(key, tstr[j]);
	    strcat(key, ",");
	    got |= (j+1);
	    break;
	  }
	}
      }
    }
    /* if we did not get X (or Y), look for anything containing an X (or Y) */
    if( got != 3 ){
      got = 0;
      *key = '\0';
      for(j=0; j<=1; j++){
	/* don't look a second time for a bin value we already have */
	if( got & (j+1) )
	  continue;
	for(i=0; i<fun->header->table->tfields; i++){
	  if( !fun->header->table->col[i].name ) continue;
	  if( strstr(fun->header->table->col[i].name, tstr[j]) != NULL ){
	    strcat(key, fun->header->table->col[i].name);
	    strcat(key, ",");
	    break;
	  }
	  /* sigh ... its gotta be case insensitive */
	  else if( strstr(fun->header->table->col[i].name, tstr2[j]) != NULL ){
	    strcat(key, fun->header->table->col[i].name);
	    strcat(key, ",");
	    break;
	  }
	}
      }
    }
  }

  /* seed the dim values */
  fun->min1 =  1;
  fun->max1 = -1;
  fun->min2 =  1;
  fun->max2 = -1;

  /* prepare to parse the bincol specifier */
  newdtable(",)");
  k = key;
  /* point past first paren */
  while( (*k == '(') || (*k == '"') ) k++;
  /* separate x and y specifiers */
  if( !word(k, binstr[0], &ip) )
    goto error;
  else
    n=1;
  if( word(k, binstr[1], &ip) )
    n++;
  freedtable();

  /* make sure columns are in the table, and check for 
     manually-specified image dimensions and binsize info */
  for(got=0, j=0; j<n; j++){
    /* look for specifiers after the name */
    if( (s = strchr(binstr[j], ':')) ){
      strncpy(tbuf, binstr[j], s-binstr[j]);
      tbuf[s-binstr[j]] = '\0';
    }
    else{
      strcpy(tbuf, binstr[j]);
    }
    /* look among columns for this column name */
    for(i=0; i<fun->header->table->tfields; i++){
      if( !fun->header->table->col[i].name ) continue;
      if( !strcasecmp(fun->header->table->col[i].name, tbuf) ){
	/* save the column number */
	fun->bin[j] = i;
	/* if dim/binsize was specified, put it all back into the header */
	if( _FunColumnDims(s, fun->header->table->col[i].type,
			   &tlmin, &tlmax, &binsiz, &dims,
			   &tscale, &tzero, &scaled)){
	  switch(fun->header->table->col[i].type){
	  case 'D':
	  case 'E':
	    if( tlmin != tlmax ){
	      ft_headsetr(fun->header, "TLMIN", i+1, tlmin, 7,
			  "Min. axis value", 1);
	      ft_headsetr(fun->header, "TLMAX", i+1, tlmax, 7,
			  "Max. axis value", 1);
	    }
	    if( binsiz > 0 ){
	      ft_headsetr(fun->header, "TDBIN", i+1, binsiz, 7,
			  "Binsize", 1);
	    }
	    break;
	  default:
	    if( tlmin != tlmax ){
	      ft_headseti(fun->header, "TLMIN", i+1, (int)tlmin,
			  "Min. axis value", 1);
	      ft_headseti(fun->header, "TLMAX", i+1, (int)tlmax,
			  "Max. axis value", 1);
	    }
	    if( binsiz > 0 ){
	      ft_headsetr(fun->header, "TDBIN", i+1, binsiz, 7,
			  "Binsize", 1);
	    }
	    break;
	  }
	}
	/* add scaling parameters if necessary */
	if( scaled ){
	  ft_headsetr(fun->header, "TSCAL", i+1, tscale, 7,
		      "phys_val= tzero + tscale * field_val", 1);
	  ft_headsetr(fun->header, "TZERO", i+1, tscale, 7,
		      "phys_val= tzero + tscale * field_val", 1);
	}
	got |= (j+1);
	break;
      }
    }
  }
  /* better have at least one column and, if we have only one binning 
     parameter, it has to be in bin[0] */
  if( (got==0) || (got==2) )
    return 0;

  /* save bincols (string is used in FilterOpen, for example) */
  switch(got){
  case 1:
    snprintf(tbuf, SZ_LINE-1, "bincols=(%s)",
	     fun->header->table->col[fun->bin[0]].name);
    fun->dims = 1;
    break;
  case 2:
    /* this never gets executed because we disallow this case */
    snprintf(tbuf, SZ_LINE-1, "bincols=(%s)",
	     fun->header->table->col[fun->bin[1]].name);
    fun->dims = 1;
    break;
  case 3:
    snprintf(tbuf, SZ_LINE-1, "bincols=(%s,%s)",
	     fun->header->table->col[fun->bin[0]].name,
	     fun->header->table->col[fun->bin[1]].name);
    fun->dims = 2;
    break;
  }
  fun->bincols=xstrdup(tbuf);

  /* make sure these keys have valid axis lengths associated with them */
  /* first look for TLMAX (and perhaps TLMIN) */
  if( got & 1 ){
    fun->max1 = ft_headgetr(fun->header, "TLMAX", fun->bin[0]+1, 0.0, &card);
    if( !card ) return 0;
    fun->min1 = ft_headgetr(fun->header, "TLMIN", fun->bin[0]+1, 1.0, &card);
    fun->binsiz1 = ft_headgetr(fun->header, "TDBIN", fun->bin[0]+1, 1.0,&card);
    fun->dim1 = tldim(fun->min1, fun->max1, fun->binsiz1,
		      fun->header->table->col[fun->bin[0]].type);
  }
  if( got & 2 ){
    fun->max2 = ft_headgetr(fun->header, "TLMAX", fun->bin[1]+1, 0.0, &card);
    if( !card ) return 0;
    fun->min2 = ft_headgetr(fun->header, "TLMIN", fun->bin[1]+1, 1.0, &card);
    fun->binsiz2 = ft_headgetr(fun->header, "TDBIN", fun->bin[1]+1, 1.0,&card);
    fun->dim2 = tldim(fun->min2, fun->max2, fun->binsiz2,
		      fun->header->table->col[fun->bin[1]].type);
  }
  return 1;

error:
  freedtable();
  return 0;
}

/*
 *
 *  _FunTableValCol -- get value table column for binning
 *
 */
#ifdef ANSI_FUNC
int
_FunTableValCol(Fun fun, char *tail, char *env)
#else
int _FunTableValCol(fun, tail, env)
     Fun fun;
     char *tail;
     char *env;
#endif
{
  int i;
  int got;
  int ip=0;
  char *k=NULL;
  char *v=NULL;
  char key[SZ_LINE];
  char tbuf[SZ_LINE];
  char valstr[SZ_LINE];

  /* initialize */
  *key = '\0';
  /* set to impossible value */
  fun->vbin = -1;

  /* look in the extension for value column specification */
  if( _FunKeyword(tail, "vcol", env, tbuf, SZ_LINE) ) strcpy(key, tbuf);
  if( !*key ) return 0;

  /* prepare to parse the bincol specifier */
  newdtable(",)");
  k = key;
  /* point past first paren */
  while( (*k == '(') || (*k == '"') ) k++;
  /* look for vcol specifier */
  got=word(k, valstr, &ip);
  freedtable();
  if( !got ) return 0;

  /* look for operator before the name */
  v = valstr;
  if( *valstr == '/' ){
    fun->vop = '/';
    v++;
  }
  /* look among columns for this column name */
  for(i=0, got=0; i<fun->header->table->tfields; i++){
    if( !fun->header->table->col[i].name ) continue;
    if( !strcasecmp(fun->header->table->col[i].name, v) ){
      /* save the value column number */
      fun->vbin = i;
      got++;
      break;
    }
  }
  return got;
}

/*
 *
 * FunRawEvHeader -- read a string that details the structure
 * of the event record and generate a fitsy header
 *
 */
#ifdef ANSI_FUNC
FITSHead
_FunRawEvHeader(Fun fun, char *iname, char *iext, char *eventdef)
#else
FITSHead _FunRawEvHeader(fun, iname, iext, eventdef)
     Fun fun;
     char *iname;
     char *iext;
     char *eventdef;
#endif
{
  char tbuf[SZ_LINE];
  char *s;
  char *neventdef=NULL;
  char **names=NULL;
  char **types=NULL;
  char *extname="EVENTS";
  int extver=1;
  int width=0;
  int ncol=0;
  int got;
  int i, r;
  int total;
  int skip;
  int type;
  int dim, scaled;
  int xtype, xoff;
  int *dims=NULL;
  int *scaleds=NULL;
  int *widths=NULL;
  double tlmin, tlmax, binsiz, tscale, tzero;
  double *tlmins=NULL, *tlmaxs=NULL, *binsizs=NULL;
  double *tscales=NULL, *tzeros=NULL;
  FITSHead header=NULL;
  struct stat buf;

  /* make sure we have some columns */
  if( !eventdef || !*eventdef ){
    gerror(stderr, "Event definition is empty\n");
    goto done;
  }

  /* init the fitsy header */
  header = ft_headinit(NULL, 0);

  /* get rid of enclosing parens */
  if(*eventdef == '('){
    neventdef = xstrdup(eventdef+1);
    i = strlen(neventdef);
    if( neventdef[i-1] == ')' )
      neventdef[i-1] = '\0';
  }
  /* get rid of enclosing quotes */
  else if( (*eventdef == '"') || (*eventdef == '\'') ){
    neventdef = xstrdup(eventdef+1);
    i = strlen(neventdef);
    if( neventdef[i-1] == *eventdef )
      neventdef[i-1] = '\0';
  }
  else{
    neventdef = xstrdup(eventdef);
  }
  /* we only deal with upper case in FITS */
  cluc(neventdef);

  /* count the number of columns, separated by ',' */
  for(ncol=0, s=neventdef; *s; s++){
    if( *s == ',' ) ncol++;
  }
  /* last column had a null after it */
  ncol++;

  /* allocate string space for each column */
  names = (char **)xcalloc(ncol, sizeof(char *));
  types = (char **)xcalloc(ncol, sizeof(char *));
  dims = (int *)xcalloc(ncol, sizeof(int));
  scaleds = (int *)xcalloc(ncol, sizeof(int));
  tlmins = (double *)xcalloc(ncol, sizeof(double));
  tlmaxs = (double *)xcalloc(ncol, sizeof(double));
  binsizs = (double *)xcalloc(ncol, sizeof(double));
  tscales = (double *)xcalloc(ncol, sizeof(double));
  tzeros = (double *)xcalloc(ncol, sizeof(double));
  widths = (int *)xcalloc(ncol, sizeof(int));

  /* process the string and gather up the information on each column */
  s = neventdef;
  for(got=0; got<ncol; got++){
    /* get name */
    for(i=0; (i < SZ_LINE-1) && *s && (*s != ':'); i++, s++){
      tbuf[i] = *s;
      tbuf[i+1] = '\0';
    }
    names[got] = xstrdup(tbuf);
    /* skip delim */
    if( *s == ':' )   s++;
    /* make sure we have something */
    if( *s == '\0' )  break;
    
    /* get column specification up to next comma */
    for(i=0; (i < SZ_LINE-1) && *s && (*s != ','); i++, s++){
      tbuf[i] = *s;
      tbuf[i+1] = '\0';
    }

    /* parse values for various column parameters */
    _FunColumnType(tbuf, &type, &r, &tlmin, &tlmax, &binsiz, &dim,
		   &tscale, &tzero, &scaled, &xtype, &xoff);

    /* save info for this column */
    snprintf(tbuf, SZ_LINE-1, "%d%c", r, type);
    types[got] = xstrdup(tbuf);
    tlmins[got] = tlmin;
    tlmaxs[got] = tlmax;
    binsizs[got] = binsiz;
    dims[got] = dim;
    tscales[got] = tscale;
    tzeros[got] = tzero;
    scaleds[got] = scaled;
    widths[got] = ft_sizeof(type);
    /* add to total width */
    if( type == 'X' )
      width += ((widths[got]*r) + 7 ) / 8;
    else
      width += widths[got] * r;
    /* bump past the comma */
    if( *s == ',' ) s++;
  }
  /* make sure we have some columns */
  if( width == 0 ){
    gerror(stderr, "Table width is zero\n");
    goto done;
  }

  /* get the size of the file and from this, the number of events */
  if( !iname || !*iname || 
      !strcasecmp(iname, "stdin") || (stat(iname, &buf) <0) ){
    total = -1;
  }
  else{
    if( fun == NULL )
      skip = 0;
    else
      skip = fun->skip;
    total = (buf.st_size - skip)/width;
  }

  /* check for monotonically desceasing widths */
  if( _FunKeyword(iext, "align", "EVENTS_ALIGN", tbuf, SZ_LINE) && 
      istrue(tbuf) ){
    for(i=1; i<got; i++){
      if(widths[i] > widths[i-1]){
	gwarning(stderr, 
		 "event alignment warning: %s (%d) follows %s (%d)\n",
		 names[i], widths[i], names[i-1], widths[i-1]);
      }
    }
  }

  /* fake the header to a binary table */
  ft_headsets(header, "XTENSION", 0, "BINTABLE", "FITS BINARY TABLE", 1);
  ft_headseti(header, "BITPIX", 0, 8, "Binary data", 1);
  ft_headseti(header, "NAXIS", 0, 2, "Table is a matrix", 1);
  ft_headseti(header, "NAXIS", 1, width, "Width of table in bytes", 1);
  ft_headseti(header, "NAXIS", 2, total, "Number of entries in table", 1);
  ft_headseti(header, "PCOUNT", 0, 0, "Random parameter count", 1);
  ft_headseti(header, "GCOUNT", 0, 1, "Group count", 1);
  ft_headseti(header, "TFIELDS", 0, got, "Number of fields in each row", 1);
  ft_headsets(header, "EXTNAME", 0, extname, "Table name", 1);
  ft_headseti(header, "EXTVER", 0, extver, "Version number of table", 1);
  /* info for each column */
  for(i=0; i<got; i++){
    ft_headsets(header, "TFORM", i+1, types[i], "Data type for field", 1);
    ft_headsets(header, "TTYPE", i+1, names[i], "Label for field", 1);
    if( dims[i] ){
      if( (tlmins[i] == (int)tlmins[i]) && (tlmaxs[i] == (int)tlmaxs[i]) ){
	ft_headseti(header, "TLMIN", i+1, (int)tlmins[i], 
		    "Min. axis value", 1);
        ft_headseti(header, "TLMAX", i+1, (int)tlmaxs[i], 
		    "Max. axis value", 1);
      }
      else{
	ft_headsetr(header, "TLMIN", i+1, tlmins[i], 7, "Min. axis value", 1);
        ft_headsetr(header, "TLMAX", i+1, tlmaxs[i], 7, "Max. axis value", 1);
      }
    }
    if( binsizs[i] != 1.0 ){
      ft_headsetr(header, "TDBIN", i+1, binsizs[i], 7, "Bin size", 1);
    }
    if( scaleds[i] ){
      ft_headsetr(header, "TSCAL", i+1, tscales[i], 7,
		  "phys_val = tzero + tscale * field_val", 1);
      ft_headsetr(header, "TZERO", i+1, tzeros[i], 7,
		  "phys_val = tzero + tscale * field_val", 1);
    }
  }

  /* get size of record and number of records */
  fun->rawsize = width;
  fun->total = total;
  fun->left = fun->total;

  /* now turn this into a table header */
  ft_syncdata(header);

done:
  /* free up the column strings */
  for(i=0; i<ncol; i++){
    if( names[i] ) xfree(names[i]);
    if( types[i] ) xfree(types[i]);
  }
  if( names )     xfree(names);
  if( types )     xfree(types);
  if( dims )	  xfree(dims);
  if( tlmins )	  xfree(tlmins);
  if( tlmaxs )	  xfree(tlmaxs);
  if( binsizs )	  xfree(binsizs);
  if( scaleds )	  xfree(scaleds);
  if( tscales )	  xfree(tscales);
  if( tzeros )	  xfree(tzeros);
  if( widths )    xfree(widths);
  if( neventdef ) xfree(neventdef);

  return header;
}

/*
 *
 * _FunImageSkip -- caclulcate the number of bytes to skip to get
 * to specified image plane of an N-dimensional image
 *
 */
#ifdef ANSI_FUNC
off_t 
_FunImageSkip(Fun fun, char *tail)
#else
off_t _FunImageSkip(fun, tail)
     Fun fun;
     char *tail;
#endif
{
  int i,j,k;
  int naxes;
  int plane;
  int planes[8];
  int skip;
  off_t total;
  char tbuf[SZ_LINE];
  char *s, *t;

  /* nothing to skip yet */
  total = 0;

  /* nothing to do if its not an n-D image */
  if( (naxes=ft_naxes(fun->header)) <= 2 )
    return total;

  /* look for a bracket specification */
  if( !_FunKeyword(tail, "plane", NULL, tbuf, SZ_LINE) )
    return 0;
  else
    s = tbuf;

  /* skip open parens */
  if( *s == '(' )
    s++;
  planes[1] = ft_naxis(fun->header, 1);
  planes[2] = ft_naxis(fun->header, 2);
  /* see the other planes */
  for(i=3; i<=7; i++)
    planes[i] = 1;
  /* we look for a plane specification for each axis > 2 */
  for(i=3; i<=naxes; i++){
    plane = strtol(s, &t, 10);
    if( s == t )
      plane = 1;
    else if( (plane < 1) || (plane > ft_naxis(fun->header, i)) )
      return -1;
    /* save the image plane desired for this dimension */
    planes[i] = plane;
    /* point past delimiter */
    if( *t == ':' )
      t++;
    /* see if we ran out of running room */
    if( (*t == '\0') || (*t == ']') || (*t == ')') )
      break;
    /* this is where we look next */
    s = t;
  }
  /* skip n-dimensional cubes of various dimensions until we
     get to the desired 2d image */
  for(j=naxes; j>2; j--){
    for(skip=1,k=1; k<j; k++)
      skip *= ft_naxis(fun->header, k);
    skip *= (planes[j]-1) * (ABS(fun->dtype));
    total += skip;
  }
  return total;
}

#ifdef ANSI_FUNC
Fun
_FunValid(Fun fun)
#else
Fun _FunValid(fun)
     Fun fun;
#endif
{
  Fun current;
  if( !fun ) return NULL;
  /* if a current list member is defined, test that one */
  if( fun->current )
    current = fun->current;
  /* else test this one */
  else
    current = fun;
  if( FUN_VALID(current) )
    return current;
  else
    return NULL;
}

/*
 *
 * _FunFree -- free up a fun record
 *
 */
#ifdef ANSI_FUNC
void
_FunFree(Fun fun, int flag)
#else
void _FunFree(fun, flag)
     Fun fun;
     int flag;
#endif
{
  int i;
  SaveBuf cur, tcur;

  if( fun ){
    _FunColumnFree(fun);
    if( fun->filter ){
      xfree(fun->filter);
      fun->filter = NULL;
    }
    if( fun->rawbuf ){
      xfree(fun->rawbuf);
      fun->rawbuf  = NULL;
    }
    if( fun->bincols ){
      xfree(fun->bincols);
      fun->bincols = NULL;
    }
    if( fun->activate ){
      xfree(fun->activate);
      fun->activate = NULL;
    }
    if( fun->header ){
      ft_headfree(fun->header, 1);
      fun->header = NULL;
    }
    if( fun->theader ){
      ft_headfree(fun->theader, 1);
      fun->theader = NULL;
    }
    if( fun->primary ){
      ft_headfree(fun->primary, 1);
      fun->primary = NULL;
    }
    /* close "save buffer" fds */
    if( fun->lefp ){
      fclose(fun->lefp);
      fun->lefp = NULL;
    }
    if( fun->lrfp ){
      fclose(fun->lrfp);
      fun->lrfp = NULL;
    }
    /* free save buffers */
    for(cur=fun->save; cur; ){
      tcur = cur->next;
      if(cur->ebuf ) xfree(cur->ebuf);
      if(cur->rbuf ) xfree(cur->rbuf);
      if( cur ) xfree(cur);
      cur = tcur;
    }
    fun->save = NULL;

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

    /* free up text parsers */
    if( fun->parsers ){
      for(i=0; i<fun->nparser; i++){
	if( fun->parsers[i] ) ParseFree(fun->parsers[i]);
      }
      xfree(fun->parsers);
      fun->parsers = NULL;
    }
    /* free up view info */
    if( fun->vcols ){
      xfree(fun->vcols);
      fun->vcols = NULL;
    }
    if( fun->vfmt ){
      xfree(fun->vfmt);
      fun->vfmt = NULL;
    }

    /* if flag is true, we free up all space
       otherwise, its assumed we will do some more writing */
    if( flag ){
      if( fun->fname ) xfree(fun->fname);
      if( fun->mode )  xfree(fun->mode);
      if( fun->wcs )   wcsfree(fun->wcs);
      if( fun->wcs0 )  wcsfree(fun->wcs0);
      /* clear the magic flag as a last resort */
      fun->magic = 0;
      xfree(fun);
    }
    else{
      fun->type = 0;
      fun->overflow = 0;
      fun->rowsize = 0;
      fun->rawsize = 0;
      fun->total = 0;
      fun->left = 0;
      fun->io = 0;
      fun->bytes = 0;
      fun->rawbufsize = 0;
      /* re-init header for temp variables for next extension */
      fun->theader = ft_headinit(NULL, 0);
    }
  }
}
 
/*
 *
 * _FunImageSize -- calculate the size of the image, including padding
 *
 */
#ifdef ANSI_FUNC
int
_FunImageSize(Fun fun)
#else
int _FunImageSize(fun)
     Fun fun;
#endif
{
  /* get data type code (which is abs(length)) */
  fun->dtype = fun->bitpix / FT_WORDLEN;
  /* this is the length of the image, without padding */
  fun->dlen = fun->dim1 * fun->dim2 * ABS(fun->dtype);
  /* determine the padding */
  if( (fun->dpad = FT_BLOCK - (fun->dlen % FT_BLOCK)) == FT_BLOCK )
    fun->dpad = 0;
  return fun->dlen;
}

/*
 *
 * _FunMaxBufSize -- calculate the size of the image, including padding
 *
 */
#ifdef ANSI_FUNC
int
_FunMaxBufSize(Fun fun, char *tail)
#else
int _FunMaxBufSize(fun, tail)
     Fun fun;
     char *tail;
#endif
{
  char tbuf[SZ_LINE];

  fun->maxbufsize = 0;
  if( _FunKeyword(tail, "maxbufsize", "FUN_MAXBUFSIZE", tbuf, SZ_LINE) )
    fun->maxbufsize = atoi(tbuf);
  if( fun->maxbufsize <= 0 )
    fun->maxbufsize = FUN_MAXBUFSIZE;
  return(fun->maxbufsize);
}

/*
 *
 * _FunOpenCommon -- common code for different Fun open routines
 *
 */
#ifdef ANSI_FUNC
int
_FunOpenCommon(Fun fun)
#else
int _FunOpenCommon(fun)
     Fun fun;
#endif
{
  int tval;

  if( fun && fun->header ){
    /* current file position is datapos */
    fun->datastart = gtell(fun->gio);
    /* calculate binning values */
    if( fun->header->table && (fun->bin[0]>=0) )
      tval = tldim(fun->min1, fun->max1, fun->binsiz1,
		   fun->header->table->col[fun->bin[0]].type);
    else
      tval = tldim(fun->min1, fun->max1,  fun->binsiz1, 0);
    if( (fun->x0 < 1) || (fun->x0 > tval) ) fun->x0 = 1;
    if( (fun->x1 < 1) || (fun->x1 > tval) ) fun->x1 = tval;
    if( fun->header->table && (fun->bin[1]>=0) )
      tval = tldim(fun->min2,fun->max2, fun->binsiz2,
		   fun->header->table->col[fun->bin[1]].type);
    else
      tval = tldim(fun->min2, fun->max2,  fun->binsiz2, 0);
    if( (fun->y0 < 1) || (fun->y0 > tval) ) fun->y0 = 1;
    if( (fun->y1 < 1) || (fun->y1 > tval) ) fun->y1 = tval;
    /* make sure the block factor divides the dimension evenly */
    if( (fun->x1 - fun->x0 + 1)%fun->block ){
      gwarning(stderr,
	       "block factor does not divide dim1 evenly; decreasing dim1\n");
      while( (fun->x1 - fun->x0 + 1)%fun->block ) fun->x1--;
    }
    if( fun->dims > 1 ){
      if( (fun->y1 - fun->y0 + 1)%fun->block ){
	gwarning(stderr,
		"block factor does not divide dim2 evenly; decreasing dim2\n");
	while( (fun->y1 - fun->y0 + 1)%fun->block ) fun->y1--;
      }
    }
    /* initialize output binning parameters */
    /* fun->dims is set based on input data and bincol (cf. _FunFITSOpen) */
    if( fun->dims == 1 ){
      fun->odims = 1;
      fun->odim1 = (fun->x1 - fun->x0 + 1) / fun->block;
      fun->odim2 = 1;
    }
    else{
      fun->odims = 2;
      fun->odim1 = (fun->x1 - fun->x0 + 1) / fun->block;
      fun->odim2 = (fun->y1 - fun->y0 + 1) / fun->block;
    }
    fun->obitpix = fun->bitpix;
    fun->odtype = fun->dtype;
    /* initialize WCS -- this is the proper WCS, converted to image coords */
    fun->wcs = _FunWCS(fun, 1);
    /* initialize WCS -- not converted to image coords */
    fun->wcs0 = _FunWCS(fun, 0);
    return 1;
  }
  else{
    return 0;
  }
}

