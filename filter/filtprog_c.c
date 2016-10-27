/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

/*
 *
 * filtprog_c.c -- support for filters using the C compiler
 *
 */

#include <filter.h>
#include <swap.h>
#include <regions_h.h>
#include <events_c.h>
#include <image_c.h>
#include <evregions_c.h>
#include <imregions_c.h>
#include <xalloc_c.h>
#include <swap_c.h>

/*
 *
 * Private Routines
 *
 */

#ifdef ANSI_FUNC
static char *
GetType(int t)
#else
static char *GetType(t)
     int t;
#endif
{
  switch(t){
  case 'A':
    return("char");
  case 'B':
    return("unsigned char");
  case 'I':
    return("short");
  case 'U':
    return("unsigned short");
  case 'J':
    return("int");
  case 'V':
    return("unsigned int");
  case 'K':
    return("long long");
  case 'E':
    return("float");
  case 'D':
    return("double");
  case 'X':
    return("char");
  case 'L':
    return("char");
  default:
    return("char");
  }
}

#ifdef ANSI_FUNC
static double
GetTloff(int t)
#else
static double GetTloff(t)
     int t;
#endif
{
  switch(t){
  case 'B':
  case 'I':
  case 'U':
  case 'J':
  case 'V':
  case 'K':
  case 'X':
    return 1.0;
  case 'E':
  case 'D':
    return 0.5;
  default:
    return 1.0;
  }
}

#ifdef ANSI_FUNC
static char *
_FilterInitString(char *filtstr)
#else
static char *_FilterInitString(filtstr)
     char *filtstr;
#endif
{
  char *ibuf, *iptr, *fptr;
  char *s, *t;
  int paren=0;

  ibuf = xcalloc(strlen(filtstr)*10, sizeof(char));
  /* make sure we have at least one shape */
  if( !FilterShapeCount() )
    return ibuf;
  iptr = ibuf;
  fptr = filtstr;
  while( *fptr ){
    /* look for beginning of region routine */
    if( !(s=strstr(fptr, "im")) && !(s=strstr(fptr, "ev")) )
      break;
    t = s+2;
    if( !*t )
      break;
    /* which is followed by a region and open paren */
    if( strncmp(t, "annulus(", 8)    &&
	strncmp(t, "box(", 4)        &&
	strncmp(t, "circle(", 7)     && 
	strncmp(t, "ellipse(", 8)    &&
	strncmp(t, "line(", 5)       &&
	strncmp(t, "panda(", 6)      && 
	strncmp(t, "bpanda(", 7)     && 
	strncmp(t, "cpanda(", 7)     && 
	strncmp(t, "epanda(", 7)     && 
	strncmp(t, "pie(", 4)        &&
	strncmp(t, "qtpie(", 6)      &&
	strncmp(t, "point(", 6)      &&
	strncmp(t, "nannulus(", 9)   &&
	strncmp(t, "nbox(", 5)       &&
	strncmp(t, "ncircle(", 8)    &&
	strncmp(t, "nellipse(", 9)   &&
	strncmp(t, "npie(", 5)       &&
	strncmp(t, "vannulus(", 9)   &&
	strncmp(t, "vbox(", 5)       &&
	strncmp(t, "vcircle(", 8)    &&
	strncmp(t, "vellipse(", 9)   &&
	strncmp(t, "vpie(", 5)       &&
	strncmp(t, "vpoint(", 7)     &&
	strncmp(t, "polygon(", 8)    &&
	strncmp(t, "field(", 6)      &&
	strncmp(t, "imagemask(", 10) ){
      fptr = t;
      continue;
    }
    /* copy region name up to open paren */
    for(fptr=s; *fptr && *fptr!='('; fptr++){
      *iptr++ = *fptr;
    }
    /* append init suffix */
    *iptr++ = 'i';
    /* copy the paren */
    if( *fptr == '(' ){
      *iptr++ = *fptr++;
      paren++;
    }
    /* copy til end of region, i.e., when paren goes to 0 */
    while( *fptr && paren ){
      if( *fptr == '(' ) 
	paren++;
      if( *fptr == ')' ) 
	paren--;
      *iptr++ = *fptr++;
    }
    /* copy ';' */
    *iptr++ = ';';
  }
  return(ibuf);
}

/*
 *
 * FilterProgOpen_C -- return filter program as a file for writing
 *
 */
#ifdef ANSI_FUNC
static int
FilterProgOpen_C (Filter filter)
#else
static int FilterProgOpen_C(filter)
     Filter filter;
#endif
{
  int fd;
  char *ccstr=NULL;
  char prefix[SZ_LINE];
  char tbuf[SZ_LINE];
  char *tmpdir=NULL;
#if HAVE_CYGWIN
  char *s;
#endif

  /* make sure we have something to work with */
  if( !filter )
    return(0);

  /* see if the user specified a compiler explicitly */
  if( !(ccstr = getenv("FILTER_CC"))					&&
      !(ccstr = getenv("CC")) 						&&
      !(ccstr = FILTER_CC)						){
    ccstr = "gcc";
  }
  /* make sure we have a compiler */
  if( !(filter->cc = Access(ccstr, "x"))				&&
      !(filter->cc = Find(ccstr, "x", NULL, FilterPath()))		&&
      !(filter->cc = Find("gcc", "x", NULL, FilterPath()))		&&
      !(filter->cc = Find("cc",  "x", NULL, FilterPath()))		&&
      !(filter->cc = Find("cc",  "x", NULL, "."))  			&&
      !(filter->cc = Find("cc",  "x", NULL, CC_PATH))			){
    gerror(stderr, "no compiler found for filter compilation\n");
    return(0);
  }

  /* determine whether communication is via Unix pipes or Win32 pipes */
  filter->pipeos = PIPE_UNIX;
#if HAVE_MINGW32
  filter->pipeos = PIPE_WIN32;
#endif
#if HAVE_CYGWIN
  if( (s=strrchr(filter->cc, '/')) ){
    s++;
  }
  else if( (s=strrchr(filter->cc, '\\')) ){
    s++;
  } else {
    s = filter->cc;
  }
  if( !strcasecmp(s, "tcc") || !strcasecmp(s, "tcc.exe") ||
      !strcasecmp(s, "pcc") || !strcasecmp(s, "pcc.exe") ){
    filter->pipeos = PIPE_WIN32;
  }
#endif
  
  /* final check on ptype: if we wanted dynamic but had no gcc, use process */
  if( (filter->ptype == PTYPE_DYNAMIC) && !strstr(filter->cc, "gcc") )
    filter->ptype = PTYPE_PROCESS;
  /* get default file names */
  snprintf(tbuf, SZ_LINE, "$FILTER_OBJDIR:$FILTER_LIBDIR:%s:$HOME/.funtools:$SAORD_ROOT/lib:/usr/lib:/usr/local/lib:/opt/local/lib", OBJPATH);
  switch( filter->type ){
  case TYPE_EVENTS:
    /* normally, we filter events analytically */
    if( !filter->evsect )
      /* filter->objs = Find("evregions.o", "r", NULL, tbuf); */
      filter->objs = Find("libfuntools.a", "r", NULL, tbuf);
    /* if evsect=xxx is specified, we filter by image pixels */
    else
      /* filter->objs = Find("imregions.o", "r", NULL, tbuf); */
      filter->objs = Find("libfuntools.a", "r", NULL, tbuf);
    break;
  case TYPE_IMAGE:
    /* image are filtered by image pixels */
    /* filter->objs = Find("imregions.o", "r", NULL, tbuf); */
    filter->objs = Find("libfuntools.a", "r", NULL, tbuf);
    break;
  }
  /* if we wanted to a process, but have no objects, use self-contained */
  if( (filter->ptype == PTYPE_PROCESS) && !filter->objs )
    filter->ptype = PTYPE_CONTAINED;
  /* allow extra stuff on the command line */
  if( !(filter->cflags = xstrdup(getenv("FILTER_CFLAGS")))	&&
      !(filter->cflags = xstrdup(FILTER_CFLAGS))		)
    filter->cflags = xstrdup(" ");
  if( !(filter->extra = xstrdup(getenv("FILTER_EXTRA"))) )
    filter->extra = xstrdup(" ");
  /* set shared switches for gcc */
  if( strstr(filter->cc, "gcc") )
    filter->shflags = xstrdup(GCC_SHARED_FLAGS);

  /* get prefix for filter source and program */
  if( !(tmpdir = (char *)getenv("FILTER_TMPDIR")) &&
      !(tmpdir = (char *)getenv("TMPDIR"))        &&
      !(tmpdir = (char *)getenv("TMP"))            )
    tmpdir = DEFAULT_FILTER_TMPDIR;
  if( !*tmpdir )
    tmpdir = ".";
#if HAVE_MINGW32
  snprintf(prefix, SZ_LINE, "%s\\f", tmpdir);
#else
  snprintf(prefix, SZ_LINE, "%s/f", tmpdir);
#endif

  /* make up the routine name when we dynamically load */
  snprintf(tbuf, SZ_LINE, "Filter%d%d", (int)getpid(), FilterNum());
  filter->pname = xstrdup(tbuf);

  /* make up name of C source file we will generate */
  if( filter->debug >= 2 ){
    filter->fp = stdout;
    return(1);
  }
  else{
    if( (fd=mkrtemp(prefix, ".c", tbuf, SZ_LINE, 1)) < 0 ){
      gerror(stderr, "could not generate C filter source name: %s\n",
	      prefix);
      return(0);
    }
    filter->code = xstrdup(tbuf);
    if( !(filter->fp = fdopen(fd, "w+b")) ){
      gerror(stderr, "could not open C filter source file: %s\n",
	      tbuf);
      return(0);
    }
  }

  /* make up the name of the program we will compile into.
     we make this different from the .c file name to make interception
     by an intruder harder */
  if( mkrtemp(prefix, NULL, tbuf, SZ_LINE, 0) < 0 ){
    gerror(stderr, "could not generate C filter program name: %s\n",
	    prefix);
    return(0);
  }
#if HAVE_MINGW32
  strcat(tbuf, ".exe");
#endif
  filter->prog = xstrdup(tbuf);
  return(1);
}

/*
 *
 * FilterProgPrepend_C -- prepend the filter code
 *
 */
#ifdef ANSI_FUNC
static int
FilterProgPrepend_C (Filter filter)
#else
static int FilterProgPrepend_C(filter)
     Filter filter;
#endif
{
  char *s=NULL;
  char *contents=NULL;
  FILE *fd;

  /* make sure we have something to work with */
  if( !filter )
    return(0);

  /* make sure we are not in debug mode */
  if( filter->debug >= 2 )
    return(1);

  /* init temps */
  fd = filter->fp;

  /* initialize with process type */
  switch(filter->ptype){
  case PTYPE_CONTAINED:
    fprintf(fd, "#define FILTER_PTYPE c\n");
    break;
  case PTYPE_DYNAMIC:
    fprintf(fd, "#define FILTER_PTYPE d\n");
    break;
  case PTYPE_PROCESS:
    fprintf(fd, "#define FILTER_PTYPE p\n");
    break;
  }

  /*  we want the byte order up at the top */
  if( is_bigendian() ){
    fprintf(fd, "#define MYBYTE_ORDER 4321\n");
  }
  else{
    fprintf(fd, "#define MYBYTE_ORDER 1234\n");
  }

  /* for some compilers (e.g. pcc), we need to minimize use of #include */
  if( (s=strrchr(filter->cc, '/')) ){
    s++;
  } else {
    s = filter->cc;
  }
  if( !strcasecmp(s, "pcc") || !strcasecmp(s, "pcc.exe") ){
    fprintf(fd, "#define MINIMIZE_INCLUDES 1\n");
  }

  /* do we need windows pipes? */
  if( filter->pipeos == PIPE_WIN32 ){
    fprintf(fd, "#define USE_WIN32 1\n");
    fprintf(fd, "#include <windows.h>\n");
  }


  /* prepend the filter header */
  contents = REGIONS_H;
  if( (contents != NULL) && (*contents != '\0') ){
    fprintf(fd, "%s\n", contents);
  }

  /* these are implemented as aliases */
  fprintf(fd, "#define evvcircle evvannulus\n");
  fprintf(fd, "#define evncircle evnannulus\n");
  fprintf(fd, "#define imvcirclei imvannulusi\n");
  fprintf(fd, "#define imncirclei imnannulusi\n");
  fprintf(fd, "#define imvcircle imvannulus\n");
  fprintf(fd, "#define imncircle imnannulus\n");
  fprintf(fd, "#define evcpanda evpanda\n");
  fprintf(fd, "#define imcpandai impandai\n");
  fprintf(fd, "#define imcpanda impanda\n");
  fprintf(fd, "\n");

  /* add some math support */
  if( is_bigendian() ){
    fprintf(fd, "static unsigned char _nan[8]={0x7F,0xF0,1,1,1,1,1,1};\n");
  }
  else{
    fprintf(fd, "static unsigned char _nan[8]={1,1,1,1,1,1,0xF0,0x7F};\n");
  }
  fprintf(fd, "#define NaN *((double *)_nan)\n");
  fprintf(fd, "#define div(a,b) (feq(b,0)?(NaN):(a/b))\n");
  fprintf(fd, "\n");
  return(1);
}

/*
 *
 * FilterProgWrite_C -- write the symbols for filtering
 *
 */
#ifdef ANSI_FUNC
static int
FilterProgWrite_C(Filter filter)
#else
static int FilterProgWrite_C(filter)
     Filter filter;
#endif
{
  int i;
  int offset;
  int pad;
  int dsize;
  int evsize;
  int tltyps[2];
  double tlmins[2];
  double binsizs[2];
  char vbuf[1024];
  char *s, *t;
  char *v;
  char *ibuf;
  char *filtstr;
  char *contents=NULL;
  char tbuf[SZ_LINE];
  FILE *fd;
  FilterSymbols sp;
  FITSHead fhd;

  /* make sure we have something to work with */
  if( !filter )
    return(0);

  /* make sure we are init'ed */
  if( filter->fhd == NULL ){
    gerror(stderr, "symbol table not initialized\n");
    return(0);
  }

  /* make sure we are init'ed */
  if( filter->fp == NULL ){
    gerror(stderr, "no output file for parser\n");
    return(0);
  }

  /* get the filter string */
  if( !(filtstr = (char *)_FilterString()) || !strcmp(filtstr, "()") ){
    return(0);
  }

  /* init temps */
  fhd = filter->fhd;
  fd= filter->fp;
  offset = 0;
  evsize = 0;

  /* ptype-specific processing */
  switch(filter->ptype){
  case PTYPE_CONTAINED:
    /* Write code to output file -- must be done BEFORE we write the
       region symbols, to avoid unintentional redefinitions */
    if( filter->debug < 2 ){
      /* we need the xalloc routines */
      contents = XALLOC_C;
      if( (contents != NULL) && (*contents != '\0') ){
	fprintf(fd, "%s\n", contents);
      }
      /* region routines if not linking against previously compiled code */
      switch( filter->type ){
      case TYPE_EVENTS:
	/* normally, we filter events analytically using evregions.o */
	if( !filter->evsect )
	  contents = EVREGIONS_C;
	/* if evsect=xxx is specified, we filter by image pixels */
	else
	  contents = IMREGIONS_C;
	break;
      case TYPE_IMAGE:
	/* image are filtered by image pixels */
	contents = IMREGIONS_C;
	break;
      default:
	break;
      }
      if( (contents != NULL) && (*contents != '\0') ){
	/* use fprintf so that we handle \n correctly in TEMPLATE */
	fprintf(fd, "%s\n", contents);
      }
      else{
	gerror(stderr, "could not write filter subroutines\n");
	return(0);
      }
    }
    break;
  }

  /* always need the swap routines (they're part of the filter) */
  contents = SWAP_C;
  if( (contents != NULL) && (*contents != '\0') ){
    fprintf(fd, "%s\n", contents);
  }

  /* output counts of shapes */
  fprintf(fd, "#define NSHAPE %d\n",
	  FilterShapeCount());
  fprintf(fd, "#define NREGION %d\n",
	  FilterRegionCount(TOK_IREG|TOK_EREG|TOK_NREG));
  /* output the filter itself */
  fprintf(fd, "#define FILTER %s\n", filtstr);
  if( filter->debug < 2 ){
    /* string version of the filter -- used to check for FIELD optimization */
    fprintf(fd, "#define FILTSTR \"%s\"\n", filtstr);
    /* output the initialization string */
    ibuf = _FilterInitString(filtstr);
    fprintf(fd, "#define FINIT %s\n", (ibuf && *ibuf)?ibuf:"");
    if( ibuf ) xfree(ibuf);
  }

  /* for type image, we generate an initialization string */
  switch(filter->type){
  case TYPE_IMAGE:
    fprintf(fd, "#define IMFILTRTN %s\n", filter->pname);
    break;
  case TYPE_EVENTS:
    fprintf(fd, "#define EVFILTRTN %s\n", filter->pname);
    /* output the event section and tlmin values, if necessary */
    if( filter->evsect && FilterTlInfo(tlmins,binsizs,tltyps) ){
      if( *filter->evsect == '"' )
	fprintf(fd, "#define EVSECT %s\n", filter->evsect);
      else
	fprintf(fd, "#define EVSECT \"%s\"\n", filter->evsect);
      fprintf(fd, "#define TLMINX %f\n", tlmins[0]);
      fprintf(fd, "#define TLMINY %f\n", tlmins[1]);
      for(i=0; i<2; i++)
	if( binsizs[i] <= 0.0 ) binsizs[i] = 1.0;
      if( (binsizs[0] == 1.0) && (binsizs[1] == 1.0) )
	fprintf(fd, "#define USEBINSIZ 0\n");
      else
	fprintf(fd, "#define USEBINSIZ 1\n");
      fprintf(fd, "#define BINSIZX %f\n", binsizs[0]);
      fprintf(fd, "#define BINSIZY %f\n", binsizs[1]);
      fprintf(fd, "#define TLOFF %f\n",  GetTloff(tltyps[0]));
      fprintf(fd, "#define TLOFF %f\n",  GetTloff(tltyps[1]));
    }
    /* loop through the symbol table and process #defines */
    for(i=0; i<filter->nsyms; i++){
      sp = &(filter->symtab[i]);
      /* skip accidentally empty ones */
      if( (sp->name == NULL) || (*sp->name == '\0') )
	continue;
      /* process this type of symbol */
      switch(sp->type){
      case SYM_COL:
	/* make sure we are aligned */
	if( fhd->table->col[sp->idx].type == 'X' ){
	  switch(fhd->table->col[sp->idx].n){
	  case 8:
	    dsize = 1;
	    break;
	  case 16:
	    dsize = 2;
	    break;
	  case 32:
	    dsize = 4;
	    break;
	  default:
	    dsize = ft_sizeof(filter->fhd->table->col[sp->idx].type);
	  }
	}
	else{
	  dsize = ft_sizeof(filter->fhd->table->col[sp->idx].type);
	}
	pad =  dsize - (offset % dsize);
	if( pad == dsize ) pad = 0;
	offset += pad;
	evsize += pad;
	sp->offset = offset;
	if( fhd->table->col[sp->idx].scaled ){
	  snprintf(tbuf, SZ_LINE, "(%f+%f*(",
		   fhd->table->col[sp->idx].zero,
		   fhd->table->col[sp->idx].scale); 
	  s = tbuf;
	  t = "))";
	}
	else{
	  s = "";
	  t = "";
	}
	if( fhd->table->col[sp->idx].n == 1 ){
	  fprintf(fd, "#define %s %s*((%s *)(SW%d(eptr+%d,%d,_swf,%d)))%s\n",
		  sp->name,
		  s,
		  GetType((int)fhd->table->col[sp->idx].type),
		  dsize,
		  offset,
		  dsize,
		  offset,
		  t);
	}
	else{
	  if( fhd->table->col[sp->idx].type == 'X' ){
	    switch(fhd->table->col[sp->idx].n){
	    case 8:
	      fprintf(fd, "#define %s %s*((%s *)(eptr+%d))%s\n",
		      sp->name, s, "unsigned char", offset, t);
	      break;
	    case 16:
	      fprintf(fd, "#define %s %s*((%s *)(SW2(eptr+%d,%d,_swf,%d)))%s\n",
		      sp->name, s, "unsigned short", offset, 2, offset, t);
	      break;
	    case 32:
	      fprintf(fd, "#define %s %s*((%s *)(SW4(eptr+%d,%d,_swf,%d)))%s\n",
		      sp->name, s, "unsigned int", offset, 4, offset, t);
	      break;
	    default:
	      fprintf(fd, "#define %s %s((%s *)(SW%d(eptr+%d,%d,_swf,%d)))%s\n",
		      sp->name,
		      s,
		      GetType((int)fhd->table->col[sp->idx].type),
		      dsize,
		      offset,
		      dsize,
		      offset,
		      t);
	    }
	  }
	  else if( fhd->table->col[sp->idx].type == 'A' ){
	    fprintf(fd, "#define %s acopy(eptr+%d,%d)\n",
		    sp->name,
		    offset,
		    fhd->table->col[sp->idx].n);
	  }
	  else{
	    fprintf(fd, "#define %s %s((%s *)(SW%d(eptr+%d,%d,_swf,%d)))%s\n",
		    sp->name,
		    s,
		    GetType((int)fhd->table->col[sp->idx].type),
		    dsize,
		    offset,
		    dsize,
		    offset,
		    t);
	  }
	}
	/* lower and upper case are both acceptable */
	strcpy(vbuf, sp->name);
	cluc(vbuf);
	if( strcmp(vbuf, sp->name) ){
	  fprintf(fd, "#define %s %s\n", vbuf, sp->name);
	}
	culc(vbuf);
	if( strcmp(vbuf, sp->name) ){
	  fprintf(fd, "#define %s %s\n", vbuf, sp->name);
	}
	/* bump pointers */
	if( fhd->table->col[sp->idx].type == 'X' ){
	  offset += 
	    ((fhd->table->col[sp->idx].size*fhd->table->col[sp->idx].n)+7)/8;
	  evsize += 
	    ((fhd->table->col[sp->idx].size*fhd->table->col[sp->idx].n)+7)/8;
	}
	else{
	  offset += fhd->table->col[sp->idx].size*fhd->table->col[sp->idx].n;
	  evsize += fhd->table->col[sp->idx].size*fhd->table->col[sp->idx].n;
	}
	break;
      case SYM_PAR:
	/* we have to distinguish between numbers and strings here */
	/* strip off enclosing white space */
	(void)nowhite(sp->value, vbuf);
	/* check for all white space */
	if( *vbuf == '\0' ){
	  fprintf(fd, "#define %s \"\"\n", sp->name);
	}
	else{
	  /* see if its a pure number */
	  (void)strtod(vbuf, &v);
	  if( (v == NULL) || (*v == '\0') )
	    fprintf(fd, "#define %s %s\n", sp->name, vbuf);
	  else
	    fprintf(fd, "#define %s \"%s\"\n", sp->name, vbuf);
	}
	break;
      }
    }
    /* make sure each record is aligned */
    pad =  8 - (evsize % 8);
    if( pad == 8 ) pad = 0;
    evsize += pad;
    /* make sure we have at least one byte to send to co-process */
    if( evsize <=0 ) evsize = 1;
    /* output the size of the filter record */
    fprintf(fd, "#define EVSIZE %d\n", evsize);
    fprintf(fd, "static char _swf[%d];\n", evsize);
    /* save for later use */
    filter->evsize = evsize;
    break;
  default:
    break;
  }

  /* write out the mask structure */
  if( filter->nmask && filter->masks && 
      (filter->type == TYPE_EVENTS)  && filter->evsect ){
    fprintf(fd, "#define NMASK %d\n", filter->nmask);
    fprintf(fd, "#define MASKDIM %d;\n", ft_naxis(filter->maskhd, 1));
    fprintf(fd, "static FilterMaskRec _masks[]={\n");
    /* copy all masks and translate x,y positions as needed */
    for(i=0; i<filter->nmask; i++){
      fprintf(fd, "{%d,%d,%d,%d}", 
	      filter->masks[i].region,
	      filter->masks[i].y,
	      filter->masks[i].xstart,
	      filter->masks[i].xstop);
      if( i != (filter->nmask -1) )
	fprintf(fd, ",");
      fprintf(fd, "\n");
    }
    fprintf(fd, "};\n");
  }
  else{
    fprintf(fd, "#define NMASK 0\n");
    fprintf(fd, "#define MASKDIM 0;\n");
    fprintf(fd, "static FilterMask _masks=NULL;\n");
  }

  /* write it now */
  fflush(fd);
  return(1);
}

/*
 *
 * FilterProgAppend_C -- append the filter program body
 *
 */
#ifdef ANSI_FUNC
static int
FilterProgAppend_C (Filter filter)
#else
static int FilterProgAppend_C(filter)
     Filter filter;
#endif
{
  char *contents=NULL;

  /* make sure we have something to work with */
  if( !filter )
    return(0);

  /* make sure we are not in debug mode */
  if( filter->debug >= 2 )
    return(1);

  /* get body of filter program */
  switch( filter->type ){
  case TYPE_EVENTS:
    contents = EVENTS_C;
    break;
  case TYPE_IMAGE:
    contents = IMAGE_C;
    break;
  }
  if( (contents != NULL) && (*contents != '\0') ){
    /* use fprintf so that we handle \n correctly in TEMPLATE */
    fprintf(filter->fp, "%s\n", contents);
    return(1);
  }
  else{
    gerror(stderr, "could not write body of filter program\n");
    return(0);
  }
}

/*
 *
 * FilterProgClose_C -- close the filter program file
 *
 */
#ifdef ANSI_FUNC
static int 
FilterProgClose_C (Filter filter)
#else
static int FilterProgClose_C(filter)
     Filter filter;
#endif
{
  /* make sure we have something to work with */
  if( !filter )
    return(0);

  /* close file if we are not in debug mode */
  if( (filter->debug < 2) && filter->fp ){
    fclose(filter->fp);
    filter->fp = NULL;
  }
  return(1);
}

/*
 *
 * FilterProgCompile_C -- compile the filter program
 *
 */
#ifdef ANSI_FUNC
static int
FilterProgCompile_C (Filter filter)
#else
static int FilterProgCompile_C(filter)
     Filter filter;
#endif
{
  char *s;
  char *math;
  char tbuf[SZ_LINE];
  char pmode[SZ_LINE];
  char log[SZ_LINE];
  char *devnull;
#ifdef USE_LAUNCH
  char *stdfiles[3];
#else
  char tbuf2[SZ_LINE];
#endif
  int len;
  int got;
  int keep=0;

  /* make sure we have something to work with */
  if( !filter )
    return(0);

  /* make sure we are not in debug mode */
  if( !filter->cc || (filter->debug >= 2) )
    return(1);

  /* flag whether to keep compiler files around */
  if( !(s=getenv("FILTER_KEEP")) || !istrue(s) )
    keep = 0;
  else
    keep = 1;

  /* add math library, if necessary */
  switch(filter->pipeos){
  case PIPE_WIN32:
    math = "";
    break;
  default:
    math = "-lm";
    break;
  }

  /* set up /dev/null */
#if HAVE_MINGW32
  devnull = "nul";
#else
  devnull = "/dev/null";
#endif

  /* get log file name */
  snprintf(log, SZ_LINE, "%s.log", filter->prog);

  /* delete old version */
  unlink(filter->prog);

  switch(filter->ptype){
  case PTYPE_PROCESS:
    /* make up the compile command */
    snprintf(tbuf, SZ_LINE, "%s %s -o %s %s %s %s %s", 
	     filter->cc, filter->cflags, filter->prog, filter->code, 
	     filter->objs ? filter->objs : " ",
	     filter->extra, math);
#ifndef USE_LAUNCH
    snprintf(tbuf2, SZ_LINE, " 1>%s 2>%s", devnull, log);
    strcat(tbuf, tbuf2);
#endif
    strcpy(pmode, "x");
    break;
  case PTYPE_CONTAINED:
    /* make up the compile command */
    snprintf(tbuf, SZ_LINE, "%s %s -o %s %s %s %s", 
	     filter->cc, filter->cflags, filter->prog, filter->code,
	     filter->extra, math);
#ifndef USE_LAUNCH
    snprintf(tbuf2, SZ_LINE, " 1>%s 2>%s", devnull, log);
    strcat(tbuf, tbuf2);
#endif
    strcpy(pmode, "x");
    break;
#ifdef USE_DL
  case PTYPE_DYNAMIC:
    snprintf(tbuf, SZ_LINE, "%s %s %s %s -o %s %s %s", 
	     filter->cc, filter->cflags, filter->shflags, 
	     filter->objs ? filter->objs : " ", 
	     filter->prog, filter->code, filter->extra);
#ifndef USE_LAUNCH
    snprintf(tbuf2, SZ_LINE, " 1>%s 2>%s", devnull, log);
    strcat(tbuf, tbuf2);
#endif
    strcpy(pmode, "r");
    break;
#endif
  default:
    return(0);
  }
  
  /* issue the shell command to compile the program */
#ifdef USE_LAUNCH
  stdfiles[0] = NULL;
  stdfiles[1] = devnull;
  stdfiles[2] = log;
  got = Launch(tbuf, 1, stdfiles, NULL);
#else
  got = system(tbuf);
#endif
	       
  /* delete the filter program body in any case */
  if( !keep )
    unlink(filter->code);

  /* Sun cc can leave an extraneous .o around, which we don't want */
  strcpy(tbuf, filter->code);
  /* change .c to .o */
  tbuf[strlen(tbuf)-1] = 'o';
  unlink(tbuf);
  /* ... actually its usually left in the current directory */
  if( (s = strrchr(tbuf, '/')) )
    unlink(s+1);

  /* now we can see if we succeeded in issuing the command */
  if( got < 0 ){
    gerror(stderr, "could not run filter compilation\n");
    return(0);
  }

  /* if we have an executable program, we succeeded */
  if( (s=Find(filter->prog, pmode, NULL, NULL)) != NULL ){
    unlink(log);
    if( s ) xfree(s);
  }
  else{
    s = FileContents(log, 0, &len);
    if( s && *s && len ){
      fprintf(stderr, "Compilation error message:\n%s\n", s);
    }
    if( !keep ){
      unlink(log);
    }
    if( s ) xfree(s);
    gerror(stderr, "filter compilation failed\n");
    return(0);
  }
  
  /* good news */
  return(1);
}


/*
 *
 * FilterProgEnd_C -- end the filtering process
 *
 */
#ifdef ANSI_FUNC
static int
FilterProgEnd_C (Filter filter)
#else
int FilterProgEnd_C(filter)
     Filter filter;
#endif
{
  char *s;
  int status=0;

  /* make sure we have something to play with */
  if( filter == NULL)
    return(0);

  /* delete the filter program */
  unlink(filter->prog);
  /* delete the filter program body, if necessary */
  if( !(s=getenv("FILTER_KEEP")) || !istrue(s) )
     unlink(filter->code);
  return(status);
}

/*
 *
 * Public Routines
 *
 */

/*
 *
 * FilterProgLoad_C -- load the routines needed to support C filtering
 *
 */
#ifdef ANSI_FUNC
int
FilterProgLoad_C (Filter filter)
#else
int FilterProgLoad_C(filter)
     Filter filter;
#endif
{
  /* make sure we have something to work with */
  if( !filter )
    return(0);

  filter->filt_open = FilterProgOpen_C;
  filter->filt_prepend = FilterProgPrepend_C;
  filter->filt_write = FilterProgWrite_C;
  filter->filt_append = FilterProgAppend_C;
  filter->filt_close = FilterProgClose_C;
  filter->filt_compile = FilterProgCompile_C;
  filter->filt_end = FilterProgEnd_C;
  return(1);
}
