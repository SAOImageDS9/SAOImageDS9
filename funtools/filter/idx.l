%option caseless
%array

%{
#include <math.h>
#include <filter.h>
#include <idx.h>
#include <idx.tab.h>

extern int idx_debug;

static int _valint(char *s, idxvalrec **v);
static int _valfloat(char *s, idxvalrec **v);
static int _valname(char *s, idxvalrec **v);
static int _valreg(char *s, idxvalrec **v);
static int _valfunc(char *s, idxvalrec **v);
%}

SP	[ \t]
DIG	[0-9]
DIG2	[0-9a-fA-F]
/* note that negative numbers are not defined here, but in the grammar */
INT1	{DIG}+L?
INT2	0[xX]{DIG2}+L?
INT	({INT1}|{INT2})
FLOAT1  {DIG}+\.?([eE][-+]?{DIG}+)?
FLOAT2  {DIG}*\.{DIG}+([eE][-+]?{DIG}+)?
XFLOAT  -142857.142857
FLOAT   ({FLOAT1}|{FLOAT2}|{XFLOAT})
NUM	({INT}|{FLOAT})
NAME	[A-Za-z_][0-9A-Za-z~_]*(\[[^\[]*\])?

/* must match regions in filt.l */
REGION	(ev|im)[vn]?(annulus|box|circle|ellipse|line|panda|pie|qtpie|point|polygon|field|bpanda|cpanda|epanda)
%%

{INT}	{return _valint(yytext, &(idxlval.val));}

{FLOAT}	{return _valfloat(yytext, &(idxlval.val));}


evfield"(g",{INT},{INT},{INT},{INT},"(double)"{NAME},"(double)"{NAME}")" {
	return _valreg(yytext, &(idxlval.val));
}

{REGION}"(g",{INT},{INT},{INT},{INT},"(double)"{NAME},"(double)"{NAME}(,[+-]?{FLOAT})*,[+-]?{FLOAT}")" {
	return _valreg(yytext, &(idxlval.val));
}

{NAME}"("[^()]*("("[^()]*")")*")" {
	/* support functions with one level of nested parens */
	return _valfunc(yytext, &(idxlval.val));
}

{NAME}	{return _valname(yytext, &(idxlval.val));}

"||"	{return OR;}
"&&"	{return AND;}
"=="	{return EQ;}
"!="	{return NE;}
"<="	{return LE;}
">="	{return GE;}

{SP}    {;}

<<EOF>>	{
	  yy_delete_buffer( YY_CURRENT_BUFFER );
          yyterminate();
	}

.	{return yytext[0];}

%%

#ifdef YY_USE_PROTOS
static int _valint(char *s, idxvalrec **v)
#else
static int _valint(s, v)
  char *s;
  idxvalrec **v;
#endif
{
  char *t;
  *v = idxvalnew(s);
  (*v)->ival = strtoll(s, &t, 0);
  if( *t )
    idxerror("bad integer value");
  (*v)->type = NUM;
  (*v)->ntype = PARSE_INTEGER;
  (*v)->dval = (double)(*v)->ival;
  return NUM;
}

#ifdef YY_USE_PROTOS
static int _valfloat(char *s, idxvalrec **v)
#else
static int _valfloat(s, v)
  char *s;
  idxvalrec **v;
#endif
{
  char *t;
  *v = idxvalnew(s);
  (*v)->dval = strtod(s, &t);
  if( *t )
    idxerror("bad float value");
  (*v)->type = NUM;
  (*v)->ntype = PARSE_FLOAT;
  return NUM;
}

#ifdef YY_USE_PROTOS
static int _valname(char *s, idxvalrec **v)
#else
static int _valname(s, v)
  char *s;
  idxvalrec **v;
#endif
{
  int i;
  int got;
  int oflag;
  int isize=0;
  char *iname;
  char *colname;
  char tail[SZ_LINE];
  FilterSymbols sp=NULL;
  idxvalrec *vv;

  *v = idxvalnew(s);
  /* lookup the string */
  if( !(sp=FilterSymbolLookup(FilterDefault(), s)) ){
    idxerror("column name not found in data file");
    (*v)->type = INDEF;
    return INDEF;
  }
  colname = idxinfo(IDX_COLNAME);
  /* see what sort of symbol it is */
  switch(sp->type){
  case SYM_COL:
    if( !(iname=idxindexfilename(s, &isize)) ){
      (*v)->type = INDEF;
      return INDEF;
    }
    /* if we already have opened this index, just use the existing handle */
    if( (vv=idxlookupfilename(iname)) ){
      (*v)->igio = vv->igio;
      (*v)->ifits = vv->ifits;
    }
    /* open index for first time and mark iname */
    else{
      oflag = setgerror(0);
      (*v)->igio = ft_fitsheadopen(iname, &((*v)->ifits), tail, SZ_LINE, "r");
      setgerror(oflag);
      if( !((*v)->igio) ){
        idxerror("existing index file can't be opened");
        (*v)->type = INDEF;
        return INDEF;
      }
      else{
        (*v)->iname = xstrdup(iname);
      }
    }
    xfree(iname);
    if( (*v)->ifits ){
      for(got=0, i=0; i<(*v)->ifits->table->tfields; i++){
        if( !strcasecmp(s, (*v)->ifits->table->col[i].name) ){
          (*v)->vtype = (*v)->ifits->table->col[i].type;
          (*v)->voffset = (*v)->ifits->table->col[i].offset;
          (*v)->vn = (*v)->ifits->table->col[i].n;
          got++;
        }
        if( !strcasecmp(colname, (*v)->ifits->table->col[i].name) ){
          (*v)->itype = (*v)->ifits->table->col[i].type;
          (*v)->ioffset = (*v)->ifits->table->col[i].offset;
          (*v)->in = (*v)->ifits->table->col[i].n;
          got++;
        }
      }
      if( got == 2 ){
#ifdef HAVE_SYS_MMAN_H
        if( !(*v)->igio->gz ){
          if(!((*v)->idata = mmap(NULL, isize, PROT_READ, MAP_PRIVATE,
 			          fileno((*v)->igio->fp), 0)) ){
            idxerror("index file can't be mmap'ed");
            (*v)->type = INDEF;
            return INDEF;
          }
	  (*v)->ilen = isize;
  	}
#endif
        (*v)->nrow = ft_naxis((*v)->ifits,2);
        (*v)->type = COL;
        return COL;
      }
      else{
        idxerror("column name and/or index not found in index file");
      }
    }
    else{
      (*v)->type = INDEF;
      return INDEF;
    }
  case SYM_PAR:
    (*v)->ntype=ParseDataType(sp->value, &(*v)->dval, &(*v)->ival);
    (*v)->type = NUM;
    switch((*v)->ntype){
    case PARSE_INTEGER:
    case PARSE_HEXINT:
      (*v)->dval = (double)(*v)->ival;
      return NUM;
    case PARSE_FLOAT:
      return NUM;
    default:
      idxerror("invalid parameter type in index");
      return 0;
    }
  default:
    idxerror("unknown symbol type in index");
    return 0;
  }
}

#ifdef YY_USE_PROTOS
static int _valreglims(idxvalrec *v, char *s)
#else
static int _valreglims(v, s)
  idxvalrec *v;
  char *s;
#endif
{
  int i;
  int ip=0;
  int nd=0, maxd=0;
  double xcen, ycen;
  double dval;
  double *dvals;
  double pts[8];
  char tbuf[SZ_LINE];
  char tbuf2[SZ_LINE];
  double angle;
  double xwidth, yheight;
  double angl;			 /* l: Cartesian angle in radians */
  double half_width, half_height;/* l: radii (1/2 width and height) */
  double cosangl, sinangl;	 /* l: sine, cosine of the Cartesian angle */
  double hw_cos, hw_sin;	 /* l: products of half_width with sin, cos */
  double hh_cos, hh_sin;	 /* l: products of half_height with sin, cos */

  if( !strcmp(v->s, "circle")  || !strcmp(v->s, "ncircle")   ||
      !strcmp(v->s, "annulus") || !strcmp(v->s, "nannulus")  ){
    if( !word(s, tbuf, &ip)||!word(s, tbuf2, &ip) ) return 0;
    xcen = atof(tbuf);
    ycen = atof(tbuf2);
    dval = -1;
    if( *v->s == 'n' ){
      if( !word(s, tbuf, &ip) || !word(s, tbuf, &ip) ) return 0;
      dval = MAX(atof(tbuf),dval);
    }
    else{
      while( word(s, tbuf, &ip) && strcmp(tbuf, "-142857.142857") ){
        dval = MAX(atof(tbuf),dval);
      }
    }
    v->rlo[0] = xcen - dval - 1;
    v->rhi[0] = xcen + dval + 1;
    v->rlo[1] = ycen - dval - 1;
    v->rhi[1] = ycen + dval + 1;
    return 1;
  }
  else if( !strcmp(v->s, "box")     || !strcmp(v->s, "nbox")     ||
           !strcmp(v->s, "ellipse") || !strcmp(v->s, "nellipse") ){
    if( !word(s, tbuf, &ip)||!word(s, tbuf2, &ip) ) return 0;
    xcen = atof(tbuf);
    ycen = atof(tbuf2);
    maxd = SZ_LINE;
    if( !(dvals=(double *)malloc(maxd*sizeof(double))) ) return 0;
    if( *v->s == 'n' ){
      if( !word(s, tbuf, &ip) || !word(s, tbuf, &ip) ) return 0;
      if( !word(s, tbuf, &ip) || !word(s, tbuf2, &ip) ) return 0;
      dvals[nd++] = atof(tbuf);
      dvals[nd++] = atof(tbuf2);
      if( word(s, tbuf, &ip) && word(s, tbuf, &ip) )
        dvals[nd++] = atof(tbuf);
    }
    else{
      while( word(s, tbuf, &ip) && strcmp(tbuf, "-142857.142857") ){
        dvals[nd++] = atof(tbuf);
        if( nd == maxd ){
          maxd += SZ_LINE;
          if( !(dvals=(double *)realloc(dvals, maxd*sizeof(double))) ) return 0;
        }
      }
    }
ellcom:
    if( nd == 2 ){
      angle = 0.0;
      xwidth = dvals[0];
      yheight = dvals[1];
    }
    else{
      angle = dvals[nd-1];
      xwidth = dvals[nd-3];
      yheight = dvals[nd-2];
    }
    if( dvals ) xfree(dvals);

    /* Why is this done in evfilter.c??? Doesn't seem necessary */
    /* angl = angle + 90.0; */
    angl = angle;
    while (angl >= 360.0) angl = angl - 360.0;
    /* convert to radians */
    angl = (angl / 180.0) * M_PI;
    sinangl = sin (angl);
    cosangl = cos (angl);
    /* Why is this done in evfilter.c??? Doesn't seem necessary */
    /* since we rotate by 90.0 degrees to get from astro angle to cartesian, */
    /* we also need to switch the width and height. we do this secretly so */
    /* that the display will turn out right, by doing it in the half terms */
    if( !strcmp(v->s, "box") ){
      /*
      half_width = yheight / 2.0;
      half_height = xwidth / 2.0;
      */
      half_width = xwidth / 2.0;
      half_height = yheight / 2.0;
    }
    else{
      /* 
      half_width = yheight;
      half_height = xwidth;
      */
      half_width = xwidth;
      half_height = yheight;
    }
    hw_cos = half_width * cosangl;
    hw_sin = half_width * sinangl;
    hh_cos = half_height * cosangl;
    hh_sin = half_height * sinangl;

    pts[0] = xcen - hw_cos - hh_sin;
    pts[1] = ycen - hw_sin + hh_cos;
    pts[2] = xcen + hw_cos - hh_sin;
    pts[3] = ycen + hw_sin + hh_cos;
    pts[4] = xcen + hw_cos + hh_sin;
    pts[5] = ycen + hw_sin - hh_cos;
    pts[6] = xcen - hw_cos + hh_sin;
    pts[7] = ycen - hw_sin - hh_cos;

    v->rlo[0] = pts[0];
    v->rhi[0] = pts[0];
    v->rlo[1] = pts[1];
    v->rhi[1] = pts[1];
    for(i=2; i<8; i+=2){
      v->rlo[0] = MIN(pts[i],v->rlo[0]);
      v->rhi[0] = MAX(pts[i],v->rhi[0]);
      v->rlo[1] = MIN(pts[i+1],v->rlo[1]);
      v->rhi[1] = MAX(pts[i+1],v->rhi[1]);
    }
    return 1;
  }
  else if( !strcmp(v->s, "line") ){
    for(i=0; i<4; i++){
      if( word(s, tbuf, &ip) ){
        pts[i] = atof(tbuf);
      }
    }
    v->rlo[0] = MIN(pts[0],pts[2]);
    v->rhi[0] = MAX(pts[0],pts[2]);
    v->rlo[1] = MIN(pts[1],pts[3]);
    v->rhi[1] = MAX(pts[1],pts[3]);
    return 1;
  }
  else if( !strcmp(v->s, "point") || !strcmp(v->s, "polygon") ){
    if( !word(s, tbuf, &ip)||!word(s, tbuf2, &ip) ) return 0;
    xcen = atof(tbuf);
    ycen = atof(tbuf2);
    v->rlo[0] = xcen-1;
    v->rhi[0] = xcen+1;
    v->rlo[1] = ycen-1;
    v->rhi[1] = ycen+1;
    while( word(s, tbuf, &ip) && strcmp(tbuf, "-142857.142857") &&
           word(s, tbuf2, &ip) ){
      dval = atof(tbuf);
      v->rlo[0] = MIN(dval-1,v->rlo[0]);
      v->rhi[0] = MAX(dval+1,v->rhi[0]);
      dval = atof(tbuf2);
      v->rlo[1] = MIN(dval-1,v->rlo[1]);
      v->rhi[1] = MAX(dval+1,v->rhi[1]);
    }
    return 1;
  }
  else if( !strcmp(v->s, "pie") || !strcmp(v->s, "qtpie") ){
    return 0;
  }
  else if( !strcmp(v->s, "panda") || !strcmp(v->s, "cpanda") ){
    maxd = SZ_LINE;
    if( !(dvals=(double *)malloc(maxd*sizeof(double))) ) return 0;
    while( word(s, tbuf, &ip) && strcmp(tbuf, "-142857.142857") ){
      dvals[nd++] = atof(tbuf);
      if( nd == maxd ){
        maxd += SZ_LINE;
        if( !(dvals=(double *)realloc(dvals, maxd*sizeof(double))) ) return 0;
      }
    }
    v->rlo[0] = dvals[0] - dvals[6] - 1;
    v->rhi[0] = dvals[0] + dvals[6] + 1;
    v->rlo[1] = dvals[1] - dvals[6] - 1;
    v->rhi[1] = dvals[1] + dvals[6] + 1;
    if( dvals ) xfree(dvals);
    return 1;
  }
  else if( !strcmp(v->s, "bpanda") || !strcmp(v->s, "epanda") ){
    maxd = 3;
    if( !(dvals=(double *)malloc(maxd*sizeof(double))) ) return 0;
    /* grab: xcen ycen */
    if( !word(s, tbuf, &ip)||!word(s, tbuf2, &ip) ) return 0;
    xcen = atof(tbuf);
    ycen = atof(tbuf2);
    /* skip: ang1 ang2 nang xwlo yhlo */
    for(i=0; i<5; i++){
      if( !word(s, tbuf, &ip) ) return 0;
    }
    /* grab: xwhi yhhi */
    for(i=0; i<2; i++){
      if( !word(s, tbuf, &ip) ) return 0;
      dvals[nd++] = atof(tbuf);
    }
    /* skip: nrad */
    if( !word(s, tbuf, &ip) ) return 0;
    /* grab: ang */
    if( !word(s, tbuf, &ip) ) return 0;
    dvals[nd++] = atof(tbuf);
    /* we can now handle this with box/ellipse code */
    goto ellcom;
  }
  else if( !strcmp(v->s, "field") ){
    return 0;
  }
  else{
    return 0;
  }
}

#ifdef YY_USE_PROTOS
static int _valreg(char *s, idxvalrec **v)
#else
static int _valreg(s, v)
  char *s;
  idxvalrec **v;
#endif
{
  int ip=0;
  char *t;
  char tbuf[SZ_LINE];
  *v = idxvalnew(NULL);
  newdtable("(),");
  while( *s == '(' ) s++;
  if( !word(s, tbuf, &ip) ){
    (*v)->type = INDEF;
    return REG;
  }
  if( strstr(tbuf, "field") ){
    (*v)->type = INDEF;
    return REG;
  }
  t = tbuf+2;
  if( *t == 'v' ) t++;
  (*v)->s = xstrdup(t);
  if( !word(s, tbuf, &ip) || !word(s, tbuf, &ip) || 
      !word(s, tbuf, &ip) || !word(s, tbuf, &ip) ){
    (*v)->type = INDEF;
    return REG;
  }
  /* include/exclude */
  if( !atoi(tbuf) ){
    (*v)->type = INDEF;
    return REG;
  }
  if( !word(s, tbuf, &ip) || !word(s, tbuf, &ip) || !word(s, tbuf, &ip) ){
    (*v)->type = INDEF;
    return REG;
  }
  culc(tbuf);
  _valname(tbuf, &(*v)->rv[0]);
  if( !word(s, tbuf, &ip) || !word(s, tbuf, &ip)  ){
    (*v)->type = INDEF;
    return REG;
  }
  culc(tbuf);
  _valname(tbuf, &(*v)->rv[1]);
  if( !_valreglims(*v, &s[ip]) ){
    (*v)->type = INDEF;
    return REG;
  }
  freedtable();
  (*v)->type = REG;
  return REG;
}

#ifdef YY_USE_PROTOS
static int _valfunc(char *s, idxvalrec **v)
#else
static int _valfunc(s, v)
  char *s;
  idxvalrec **v;
#endif
{
  *v = idxvalnew(s);
  (*v)->type = FUNC;
  return FUNC;
}


#ifdef YY_USE_PROTOS
void
idxstring(char *s)
#else
void idxstring(s)
     char *s;
#endif
{
  idx_scan_string(s);
}

#ifdef YY_USE_PROTOS
int
idxerror(char *msg)
#else
int idxerror(msg)
     char *msg;
#endif
{
  Filter filter;

  YY_FLUSH_BUFFER;
  /* turn indexing off */
  if( (filter=FilterDefault()) ){
    filter->doidx = -1;
  }
  /* output message, if necessary */
  if( idx_debug ){
    fprintf(stderr, "ERROR: %s", msg);
    if( !strcmp(msg, "syntax error") ){
      fprintf(stderr, " (terminating index processing)");
    }
    fprintf(stderr, "\n");    
  }
  yyterminate();
}

#ifdef YY_USE_PROTOS
int yywrap(void)
#else
int yywrap()
#endif
{
  return 1;
}

