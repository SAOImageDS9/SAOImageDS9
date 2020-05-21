/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

#include <funtoolsP.h>

#define SLEN 32

/*
 *
 * _FunKeyword -- look for a keyword=value string, or an environment variable
 *
 */
#ifdef ANSI_FUNC
int _FunKeyword(char *buf, char *key, char *env, char *vbuf, int vlen)
#else
int _FunKeyword(buf, key, env, vbuf, vlen)
     char *buf;
     char *key;
     char *env;
     char *vbuf;
     int vlen;
#endif
{
  char *eptr;
  /* look for the keyword in the input string */
  if( keyword(buf, key, vbuf, vlen) )
    return 1;
  else{
    /* look for an environment variable, if necessary */
    if( env && (eptr = (char *)getenv(env)) ){
      strncpy(vbuf, eptr, vlen);
      return 1;
    }
    else
      return 0;
  }
}

/*
 *
 * _FunParseSection -- parse section information
 * The possibilities are:
 *
 * name[xy0:xy1,block]
 * name[x0:x1,y0:y1,block]
 * name[x0:x1,*,block]
 * name[*,y0:y1,block]
 * name[*,block]
 *
 * where the min and max values can be ints or "*" for default. A single
 * "*" can be used instead of val:val, as shown.
 *
 * name[dim@cen1@cen2,block]
 * name[dim1@cen1,dim2@cen2,block]
 *
 * The values for dim, dim1, dim2, cen1, cen2 must be specified or else
 * the expression does not make sense!
 *
 * In all cases, block is optional and defaults to 1. An 's' or 'a' can be
 * appended to signify "sum" or "average" blocking
 *
 *
 */
#ifdef ANSI_FUNC
void
_FunParseSection(Fun fun, char *section,
		 int *x0, int *x1, int *y0, int *y1,
		 int *block, int *btype, char *tail, int maxlen)
#else
void _FunParseSection(fun, section, x0, x1, y0, y1, block, btype, tail, maxlen)
     Fun fun;
     char *section;
     int *x0;
     int *x1;
     int *y0;
     int *y1;
     int *block;
     int *btype;
     char *tail;
     int maxlen;
#endif
{
  char *f;
  char *tbuf;
  char *s;
  char s1[SLEN], s2[SLEN], s3[SLEN], s4[SLEN], s5[SLEN];
  int i;
  int n;
  int got;
  int len;
  int itype;
  int type1, type2;
  double dim1=0.0, dim2=0.0;
  double tx0, tx1, ty0, ty1;
  double t0, t1;
  double cen1=0.0, cen2=0.0;
  double nan;

  /* start out impossible */
  *x0 = *y0 = MININT;
  *x1 = *y1 = MAXINT;
  *block = 1;
  *btype = FUN_SUM;
  /* 0 means section, 1 means dim@cen */
  itype = 0;
  /* get NaN value */
  nan = getnand();
  tx0 = tx1 = ty0 = ty1 = nan;
  /* flag no conversion */
  n = 0;

  /* make sure we have something to work with */
  if( (section == NULL) || (*section == '\0') )
    return;

  /* basic work buffers */
  tbuf = (char *)xmalloc(strlen(section)+1);

  /* this will be our pointer into the section buffer */
  f = section;

  /* maxlen generally is 1 more than we can handle */
  maxlen--;

  /* skip past the open bracket, but save it in the tail */
  if( *f == '[' ){
    f++;
    strcpy(tbuf, "[");
  }

  /* look for different ways of specifying the section -- order counts! */
  if(sscanf(f, "%[-0-9.*] : %[-0-9.*] , %[-0-9.*] : %[-0-9.*] , %[0-9as]%n", 
	    s1, s2, s3, s4, s5, &n) == 5){
    /* sanity check */
    if( fun->dims == 1 ){
      gerror(stderr, "can't specify a 2D section with a 1D image\n");
    }
    tx0 = (*s1 == '*') ? nan : atof(s1);
    tx1 = (*s2 == '*') ? nan : atof(s2);
    ty0 = (*s3 == '*') ? nan : atof(s3);
    ty1 = (*s4 == '*') ? nan : atof(s4);
    *block = MAX(1, strtol(s5, &s, 0));
    if( s && *s && (tolower(*s) == 'a') )
      *btype = FUN_AVG;
    f += n;
  }
  else if(sscanf(f, "%[-0-9.*] : %[-0-9.*] , %[-0-9.*] : %[-0-9.*]%n", 
		 s1, s2, s3, s4, &n) == 4){
    /* sanity check */
    if( fun->dims == 1 ){
      gerror(stderr, "can't specify a 2D section with a 1D image\n");
    }
    tx0 = (*s1 == '*') ? nan : atof(s1);
    tx1 = (*s2 == '*') ? nan : atof(s2);
    ty0 = (*s3 == '*') ? nan : atof(s3);
    ty1 = (*s4 == '*') ? nan : atof(s4);
    f += n;
  }
  else if(sscanf(f, "%[-0-9.*] : %[-0-9.*] , %[*] , %[0-9as]%n",
		 s1, s2, s3, s4, &n) == 4){
    /* sanity check */
    if( fun->dims == 1 ){
      gerror(stderr, "can't specify a 2D section with a 1D image\n");
    }
    tx0 = (*s1 == '*') ? nan : atof(s1);
    tx1 = (*s2 == '*') ? nan : atof(s2);
    *block = MAX(1, strtol(s4, &s, 0));
    if( s && *s && (tolower(*s) == 'a') )
      *btype = FUN_AVG;
    f += n;
  }
  else if(sscanf(f, "%[-0-9.*] : %[-0-9.*] , %[*]%n",
		 s1, s2, s3, &n) == 3){
    /* sanity check */
    if( fun->dims == 1 ){
      gerror(stderr, "can't specify a 2D section with a 1D image\n");
    }
    tx0 = (*s1 == '*') ? nan : atof(s1);
    tx1 = (*s2 == '*') ? nan : atof(s2);
    f += n;
  }
  else if(sscanf(f, "%[*] , %[-0-9.*] : %[-0-9.*] , %[0-9as]%n",
		 s1, s2, s3, s4, &n) == 4){
    /* sanity check */
    if( fun->dims == 1 ){
      gerror(stderr, "can't specify a 2D section with a 1D image\n");
    }
    ty0 = (*s3 == '*') ? nan : atof(s2);
    ty1 = (*s4 == '*') ? nan : atof(s3);
    *block = MAX(1, strtol(s4, &s, 0));
    if( s && *s && (tolower(*s) == 'a') )
      *btype = FUN_AVG;
    f += n;
  }
  else if(sscanf(f, "%[*] , %[-0-9.*] : %[-0-9.*]%n",
		 s1, s2, s3, &n) == 3){
    /* sanity check */
    if( fun->dims == 1 ){
      gerror(stderr, "can't specify a 2D section with a 1D image\n");
    }
    ty0 = (*s3 == '*') ? nan : atof(s3);
    ty1 = (*s4 == '*') ? nan : atof(s4);
    f += n;
  }
  else if(sscanf(f, "%[-0-9.*] : %[-0-9.*] , %[0-9as]%n",
		 s1, s2, s3, &n) == 3){
    tx0 = (*s1 == '*') ? nan : atof(s1);
    tx1 = (*s2 == '*') ? nan : atof(s2);
    ty0 = tx0;
    ty1 = tx1;
    *block = MAX(1, strtol(s3, &s, 0));
    if( s && *s && (tolower(*s) == 'a') )
      *btype = FUN_AVG;
    f += n;
  }
  else if(sscanf(f, "%[-0-9.*] : %[-0-9.*]%n",
		 s1, s2, &n) == 2){
    tx0 = (*s1 == '*') ? nan : atof(s1);
    tx1 = (*s2 == '*') ? nan : atof(s2);
    ty0 = tx0;
    ty1 = tx1;
    f += n;
  }
  else if(sscanf(f, "%[*] , %[*] , %[0-9as]%n",
		 s1, s2, s3, &n) == 3){
    /* sanity check */
    if( fun->dims == 1 ){
      gerror(stderr, "can't specify a 2D section with a 1D image\n");
    }
    *block = MAX(1, strtol(s3, &s, 0));
    if( s && *s && (tolower(*s) == 'a') )
      *btype = FUN_AVG;
    f += n;
  }
  else if(sscanf(f, "%[*] , %[0-9as]%n",
		 s1, s2, &n) == 2){
    *block = MAX(1, strtol(s2, &s, 0));
    if( s && *s && (tolower(*s) == 'a') )
      *btype = FUN_AVG;
    f += n;
  }
  else if(sscanf(f, "%[*] , %[*]%n",
		 s1, s2, &n) == 2){
    /* sanity check */
    if( fun->dims == 1 ){
      gerror(stderr, "can't specify a 2D section with a 1D image\n");
    }
    f += n;
  }
#ifdef BREAKS_STRING_FILTERING
  else if(sscanf(f, "%[*]%n",
		 s1, &n) == 1){
    f += n;
  }
#endif

  /* process dimension@center specifications */
  else if(sscanf(f, "%[0-9.*] @ %[-0-9.*] , %[0-9.*] @ %[-0-9.*] , %[0-9as]%n", 
	    s1, s2, s3, s4, s5, &n) == 5){
    /* sanity check */
    if( fun->dims == 1 ){
      gerror(stderr, "can't specify a 2D section with a 1D image\n");
    }
    dim1 = atof(s1);
    cen1 = atof(s2);
    dim2 = atof(s3);
    cen2 = atof(s4);
    *block = MAX(1, strtol(s5, &s, 0));
    if( s && *s && (tolower(*s) == 'a') )
      *btype = FUN_AVG;
    f += n;
    itype++;
  }
  else if(sscanf(f, "%[0-9.*] @ %[-0-9.*] , %[0-9.*] @ %[-0-9.*]%n", 
		 s1, s2, s3, s4, &n) == 4){
    /* sanity check */
    if( fun->dims == 1 ){
      gerror(stderr, "can't specify a 2D section with a 1D image\n");
    }
    dim1 = atof(s1);
    cen1 = atof(s2);
    dim2 = atof(s3);
    cen2 = atof(s4);
    f += n;
    itype++;
  }
  else if(sscanf(f, "%[0-9.*] @ %[-0-9.*] @ %[-0-9.*] , %[0-9as]%n", 
	    s1, s2, s3, s4, &n) == 4){
    /* sanity check */
    if( fun->dims == 1 ){
      gerror(stderr, "can't specify 2D section with a 1D image\n");
    }
    dim1 = atof(s1);
    cen1 = atof(s2);
    dim2 = dim1;
    cen2 = atof(s3);
    *block = MAX(1, strtol(s4, &s, 0));
    if( s && *s && (tolower(*s) == 'a') )
      *btype = FUN_AVG;
    f += n;
    itype++;
  }
  else if(sscanf(f, "%[0-9.*] @ %[-0-9.*] @ %[-0-9.*]%n", 
		 s1, s2, s3, &n) == 3){
    /* sanity check */
    if( fun->dims == 1 ){
      gerror(stderr, "can't specify 2D section with a 1D image\n");
    }
    dim1 = atof(s1);
    cen1 = atof(s2);
    dim2 = dim1;
    cen2 = atof(s3);
    f += n;
    itype++;
  }
  else if(sscanf(f, "%[0-9.*] @ %[-0-9.*]%n", 
		 s1, s2, &n) == 2){
    dim1 = atof(s1);
    cen1 = atof(s2);
    dim2 = dim1;
    cen2 = cen1;
    f += n;
    itype++;
  }

  /* if we are processing dim@center, we need to calculate section values */
  if( itype ){
    tx0 = cen1 - ((dim1+1)/2) + 1;
    ty0 = cen2 - ((dim2+1)/2) + 1;
    /* this method maintains the center and changes the dimensions */
    /* Frank, Eric, and John all prefer this method, so that the user
       gets the center he asked for, even if the image is reduced */
    tx1 = cen1 + (dim1/2);
    ty1 = cen2 + (dim2/2);
  }

  /* if we converted, then a 'p' => physical, 'i' => image coords
     (image is the default) -- we need image */
  if( n && (*f == 'p') ){
    f++;
    if( fun ){
      switch(fun->type){
      case FUN_IMAGE:
	if( !isnand(tx0) && !isnand(ty0) ){
	  ft_phy2img(fun->header, tx0, ty0, &t0, &t1);
	  tx0 = t0;
	  ty0 = t1;
	}
	if( !isnand(tx1) && !isnand(ty1) ){
	  ft_phy2img(fun->header, tx1, ty1, &t0, &t1);
	  tx1 = t0;
	  ty1 = t1;
	}
	break;
      case FUN_TABLE:
      case FUN_EVENTS:
	type1 = MAX(0,fun->header->table->col[fun->bin[0]].type);
	type2 = MAX(0,fun->header->table->col[fun->bin[1]].type);
	if( !isnand(tx0) ) tx0 = tlp2i(tx0, fun->min1, fun->binsiz1, type1);
	if( !isnand(tx1) ) tx1 = tlp2i(tx1, fun->min1, fun->binsiz1, type1);
	if( !isnand(ty0) ) ty0 = tlp2i(ty0, fun->min2, fun->binsiz2, type2);
	if( !isnand(ty1) ) ty1 = tlp2i(ty1, fun->min2, fun->binsiz2, type2);
	break;
      case FUN_ARRAY:
	break;
      }
    }
  }

  /* now we can integerize and set the output values in image coords */
  if( !isnand(tx0) )
    *x0 = (int)tx0;
  else
    *x0 = -1;
  if( !isnand(tx1) )
    *x1 = (int)tx1;
  else
    *x1 = -1;
  if( !isnand(ty0) )
    *y0 = (int)ty0;
  else
    *y0 = -1;
  if( !isnand(ty1) )
    *y1 = (int)ty1;
  else
    *y1 = -1;

  /* at this point, we are processing tail */
  if( *f == ',' )
    f++;
  if( *f != '\0' ){
    strcat(tbuf, f);

  }
  strncpy(tail, tbuf, maxlen);
  tail[maxlen] = '\0';
  /* get rid of any empty brackets */
  len = strlen(tail);
  for(i=0; i<len; i++){
    if( (tail[i] == '[') && (i+2 < len) && (tail[i+1] == ']') ){
      strcpy(tbuf, &(tail[i+2]));
      strcpy(&(tail[i]), tbuf);
    }
  }
  /* but don't bother passing back completely null brackets */
  len = strlen(tail);
  for(got=0, i=0; i<len; i++){
    if( (tail[i] != '[') && (tail[i] != ']') && (tail[i] != ' ') ){
      got = 1;
      break;
    }
  }
  if( !got ) *tail = '\0';

  /* clean up */
  if( tbuf != NULL )
    xfree(tbuf);
}

/*
 *
 * FunPrimaryExtension -- write a dummy primary header for a FITS extension
 *
 */
#ifdef ANSI_FUNC
int
_FunPrimaryExtension(Fun fun)
#else
int _FunPrimaryExtension(fun)
     Fun fun;
#endif
{
  FITSHead header, merge;

  /* exit if we already have written the header (or if we have no funtools) */
  if( !_FunValid(fun) || fun->primio || (gtell(fun->gio)>0) )
    return 0;

  /* create a temp fitsy header */
  if( !(header = ft_headinit(NULL, 0)) )
      return 0;

  /* add the essential cards to indicate a FITS file with extensions */
  ft_headsetl(header, "SIMPLE", 0, 1, "FITS STANDARD", 1);
  ft_headseti(header, "BITPIX", 0, 8, "Binary data", 1);
  ft_headseti(header, "NAXIS",  0, 0, "No image array present", 1);
  ft_headsetl(header, "EXTEND", 0, 1, "Standard extensions might follow", 1);
  ft_syncdata(header);

  /* merge these new params in with any we added earlier using FunParamPut */
  if( fun->primary ){
    merge = ft_headmerge(header, fun->primary, 0);
    ft_syncdata(merge);
    ft_headwrite(fun->gio, merge);
    ft_headfree(merge, 1);
  }
  /* should not happen, but ... */
  else{
    ft_headwrite(fun->gio, header);
  }

  /* free up space */
  ft_headfree(header, 1);

  /* wrote the primary header */
  fun->primio++;

  return 1;
}

/*
 *
 * _FunColumnDims -- read a string that details the tlmin, tlmax, binsiz, and
 * tscale, tzero for a column; string is of the form:
 *
 * [:tlmin[:tmlax[:binsiz]]][;tscal:tzero]
 *
 * If only one arg is given, its assumed to be the overall image dimension,
 * and tlmin, tlmax defaults are calculated based on data type.
 *
 * We allow binsiz to be 0 as a flag that it was not set. The software that
 * uses binsize (filter/tl.c) will use 1.0 instead of 0.0.
 *
 *
 */
#ifdef ANSI_FUNC
int
_FunColumnDims(char *s, int type, double *tlmin, double *tlmax,
	       double *binsiz, int *dims,
	       double *tscale, double *tzero, int *scaled)
#else
int _FunColumnDims(s, type, tlmin, tlmax, binsiz, dims, tscale, tzero, scaled)
     char *s;
     int type;
     double *tlmin;
     double *tlmax;
     double *binsiz;
     int *dims;
     double *tscale;
     double *tzero;
     int *scaled;
#endif
{
  int i, got, got2;
  char *v;
  char vbuf[SZ_LINE];
  double val[3];

  /* intiialize */
  *tlmin = 0.0;
  *tlmax = 0.0;
  *binsiz = 1.0;
  *dims = 0;
  *tscale = 1.0;
  *tzero = 0.0;
  *scaled = 0;

  /* make sure we have something to do */
  if( !s || !*s )
    return 0;

  /* get image dimensions and bin size */
  for(i=0, got=0; i<3; i++, got++){
    if( *s != ':' )
      break;
    /* skip past ':' */
    s++;
    /* fill buffer with next value */
    *vbuf = '\0';
    for(v=vbuf; *s && (*s != ',') && (*s != ':') && (*s != ';'); )
      *v++ = *s++;
    *v = '\0';
    /* convert string to double */
    val[i] = atof(vbuf);
  }
  switch(got){
  case 0:
    break;
  case 1:
    switch(type){
    case 'B':
    case 'I':
    case 'U':
    case 'J':
    case 'K':
    case 'V':
      *tlmin = 1.0;
      *tlmax = val[0];
      *dims = 1;
      break;
    case 'E':
    case 'D':
      *tlmin = 0.5;
      *tlmax = val[0]+0.5;
      *dims = 1;
      break;
    default:
      *tlmin = 1.0;
      *tlmax = val[0];
      *dims = 1;
      break;
    }
    break;
  case 2:
    *tlmin = val[0];
    *tlmax = val[1];
    *dims = 1;
    break;
  case 3:
  default:
    *tlmin = val[0];
    *tlmax = val[1];
    *binsiz = val[2];
    *dims = 1;
    break;
  }
  /* check for next section: tscale, tzero */
  if( *s == ';' ){
    *s = ':';
    for(i=0, got2=0; i<3; i++, got2++){
      if( *s != ':' )
	break;
      /* skip past ':' */
      s++;
      /* fill buffer with next value */
      *vbuf = '\0';
      for(v=vbuf; *s && (*s != ',') && (*s != ':') && (*s != ';'); )
	*v++ = *s++;
      *v = '\0';
      /* convert string to double */
      val[i] = atof(vbuf);
    }
    switch(got2){
    case 0:
      break;
    case 1:
      *tscale = val[0];
      *tzero = 0.0;
      *scaled = 1;
      break;
    case 2:
      *tscale = val[0];
      *tzero = val[1];
      *scaled = 1;
      break;
    }
  }
  return got;
}

/*
 *
 * _FunColumnType -- read a string that details the type for a column
 * string is of the form:
 *
 * [@][<n>]<type>[[poff]][:[tlmin[:tmlax[:binsiz]]]]
 *
 * where @ means ptype (pointer type) is true
 *
 */
#ifdef ANSI_FUNC
void
_FunColumnType(char *s, int *type, int *n, 
	       double *tlmin, double *tlmax, double *binsiz, int *dims,
	       double *tscale, double *tzero, int *scaled, 
	       int *ptype, int *poff)
#else
void _FunColumnType(s, type, n, tlmin, tlmax, binsiz, dims,
		    tscale, tzero, scaled, ptype, poff)
     char *s;
     int *type;
     int *n;
     double *tlmin;
     double *tlmax;
     double *binsiz;
     int *dims,
     double *tscale;
     double *tzero;
     int *scaled;
     int *ptype;
     int *poff;
#endif
{
  int ival;
  int boff=0;
  char *t;

  /* initialize values */
  *n = 1;
  *ptype = 0;
  *poff = 0;
  *type = '?';
  *tlmin = 0.0;
  *tlmax = 0.0;
  *binsiz = 1.0;
  *dims = 0;
  *tscale = 1.0;
  *tzero = 0.0;
  *scaled = 0;

  /* make sure we have something to do */
  if( !s || !*s )
    return;

  /* look for indication that this is a pointer */
  if( *s == '@' ){
    *ptype = COL_PTR;
    s++;
  }
  /* get optional count */
  ival = strtol(s, &t, 10);
  if( s != t ){
    *n = ival;
    s = t;
  }
  /* type character comes next */
  *type = *s;
  if( *type ){
    if( islower(*type) )
      *type = toupper(*type);
    s++;
  }

  /* we might have an offset specified as well */
  if( *s == '[' ){
    s++;
    /* 'B' means its a byte offset */
    if( (*s == 'B') || (*s == 'b') ){
      boff = 1;
      s++;
    }
    ival = strtol(s, &t, 10);
    if( s != t ){
      /* negative offset flags byte offset (not great, but ...) */
      if( boff )
	*poff = -ival;
      /* positive offset flags data-type offset */
      else
	*poff = ival;
      s = t;
    }
    if( *s == ']' )
      s++;
  }

  /* parse the rest of the string into tlmin, tlmax, binsiz, etc. */
  (void)_FunColumnDims(s, *type, tlmin, tlmax, binsiz, dims, 
		       tscale, tzero, scaled);
}

/*
 *
 * _FunFile -- parse next filename from a string
 *
 */
#ifdef ANSI_FUNC
int 
_FunFile (char *lbuf, char *tbuf, int len, int *lptr)
#else
int _FunFile(lbuf, tbuf, len, lptr)
     char *lbuf;
     char *tbuf;
     int len;
     int *lptr;
#endif
{
  int ip;
  int i;
  int bracklev=0;
  int atstart=0;
  char quotes;

  /* null out the output string */
  *tbuf = '\0';

  /* if no string was specified, just return */
  if( lbuf == NULL )
    return(0);

  /* just a more convenient pointer ... */
  ip = *lptr;

  /* if we are at the end of string, just return */
  if( lbuf[ip] == '\0' )
    return(0);

  /* start of the string can be "list:" for a list of files, else its a
     single file; we'll do the actual check after the whitespace */
  if( ip == 0 )
    atstart=1;

  /* skip over white space */
  while( isspace((int)lbuf[ip]) ){
    if( lbuf[ip] == '\0' ){
      *lptr = ip;
      return(0);
    }
    else
      ip++;
  }

  /* now check for list, but only at the start */
  if( atstart ){
    if( strncasecmp(&lbuf[ip], "list:", 5) ){
      /* not a list, return full string */
      i = strlen(&lbuf[ip]);
      if( i < len ){
	strncpy(tbuf, &lbuf[ip], i);
	ip += i;
	goto done;
      }
      else{
	ip += i;
	goto error;
      }
    }
    else{
      /* its a list, skip prefix */
      ip += 5;
      /* skip over white space ... again */
      while( isspace((int)lbuf[ip]) ){
	if( lbuf[ip] == '\0' ){
	  *lptr = ip;
	  return(0);
	}
	else
	  ip++;
      }
    }
  }

  /* check for an explicit quote */
  quotes = '\0';
  if( lbuf[ip] == '"' ){
    quotes = '"';
  }
  if( lbuf[ip] == '\'' ){
    quotes = '\'';
  }

  /* grab next token */
  if( quotes  != '\0' ){
    /* bump past quotes */
    ip++;
    /* grab up to next quotes -- but skip escaped quotes */
    for(i=0; lbuf[ip] != '\0'; i++, ip++){
      if( (lbuf[ip] == quotes) && (lbuf[ip-1] != '\\') )
	break;
      else{
	if( i >= len ) goto error;
	tbuf[i] = lbuf[ip];
      }
    }
  }
  else{
    /* grab up to next whitespace */
    i = 0;
again:
    for(; lbuf[ip] && (!isspace((int)lbuf[ip]) || (bracklev>0)); i++, ip++){
      if( i >= len ) goto error;
      tbuf[i] = lbuf[ip];
      if( lbuf[ip] == '[' )
	bracklev++;
      else if( lbuf[ip] == ']' )
	bracklev--;
    }
    /* skip white space */
    while( lbuf[ip] && isspace((int)lbuf[ip]) )
      ip++;
    /* if the next char is '[', we are not done with this filename */
    if( lbuf[ip] == '[' )
      goto again;
    /* back up so we process this character next time */
    else
      ip--;
  }

done:
  /* bump past delimiter (but not null terminator) */
  if( lbuf[ip] )
    ip++;

  /* null terminate */
  tbuf[i] = '\0';
  
  /* got something */
  *lptr = ip;
  return(1);

/* file name is too long */
error:
  gerror(stderr, "filename is larger than max allowable (%d)\n", len);
  *lptr = ip;
  return(0);
}

