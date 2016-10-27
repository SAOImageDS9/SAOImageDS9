option caseless
%array

%{

#include <stdio.h>
#ifdef HAVE_MALLOC_H
#include <malloc.h>
#endif
#ifdef HAVE_STDLIB_H
#include <stdlib.h>
#endif
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <filter.h>

#define MAX_INCLUDE_DEPTH 100
#define SEGINC 1024
#define MASKINC 1024

#define LARGE_NUMBER 65536

/* must match regions.h */
#define PSTOP	-142857.142857

/* stolen from fitsy/xos.h */
#define X__PI	3.14159265358979323846
#define X_2PI	( 2 * X__PI )
#define X_R2D	(X_2PI / 360.0)
#define X_R2H	(X_2PI /  24.0)
#define X_H2D	(360.0 /  24.0)

#define r2h(r)	( (r) / X_R2H )
#define h2r(d)	( (d) * X_R2H )
#define r2d(r)	( (r) / X_R2D )
#define d2r(d)	( (d) * X_R2D )
#define h2d(r)	( (r) * X_H2D )
#define d2h(d)	( (d) / X_H2D )

/* region types */
#define TY_ANNULUS   1
#define TY_BOX       2
#define TY_CIRCLE    3
#define TY_ELLIPSE   4
#define TY_FIELD     5
#define TY_LINE      6
#define TY_PANDA     7
#define TY_BPANDA    8
#define TY_CPANDA    9
#define TY_EPANDA    10
#define TY_PIE       11
#define TY_QTPIE     11
#define TY_POINT     12
#define TY_POLYGON   13
#define TY_IMAGEMASK 14

/* oft-used checks on argument and coord types */
#define XARG    ((narg % 2) == 1)
#define YARG    ((narg % 2) == 0)
#define POSARG  ((regid == TY_POLYGON) || (regid == TY_LINE) || (narg<=2))
#define ANGARG (((regid == TY_PANDA)   && (narg==3)) || \
                ((regid == TY_PANDA)   && (narg==4)) || \
                ((regid == TY_BPANDA)  && (narg==3)) || \
                ((regid == TY_BPANDA)  && (narg==4)) || \
                ((regid == TY_CPANDA)  && (narg==3)) || \
                ((regid == TY_CPANDA)  && (narg==4)) || \
                ((regid == TY_EPANDA)  && (narg==3)) || \
                ((regid == TY_EPANDA)  && (narg==4)) || \
                ((regid == TY_PIE)     && (narg>=3)) )

#define NUMARG (((regid == TY_PANDA)   && (narg==5))  || \
                ((regid == TY_PANDA)   && (narg==8))  || \
		((regid == TY_BPANDA)  && (narg==5))  || \
                ((regid == TY_BPANDA)  && (narg==10)) || \
		((regid == TY_CPANDA)  && (narg==5))  || \
                ((regid == TY_CPANDA)  && (narg==8))  || \
		((regid == TY_EPANDA)  && (narg==5))  || \
                ((regid == TY_EPANDA)  && (narg==10)) )

#define SAVEANG ((regid == TY_BOX) || (regid == TY_ELLIPSE))
                
#define USEPHYS (filt->fhd->table && \
                (filt->type == TYPE_EVENTS) && !filt->evsect)

#define USEWCS  (gcoordsys && \
		 strcmp(gcoordsys, "image") && strcmp(gcoordsys, "physical"))

#define IMFLIP	(USEWCS && wcs->imflip)

#define WCSSIZE (iswcs(wcs) && (cdelt1!=0) && (cdelt2!=0))

/* format statements */
#define DFMT1 ",%f"
#define DFMT2 ",%f,%f"
#define DFMT4 ",%f,%f,%f,%f"
#define SFMT1 ",%s"
#define IFMT1 ",%d"

/* flex is not thread-safe, so we did not put any effort into avoiding
   globals, i.e. by putting read-write variables below into a struct */

static YY_BUFFER_STATE include_stack[MAX_INCLUDE_DEPTH];
static int include_stack_ptr = 0;
static int parse_error = 0;

static int colargs;
static int filtlen;
static int radanglen;
static int initbindefs;
static int regtype;
static int regid;
static int laststart;
static int maxfiltseg;
static int setargs;
static int inexpr;
static int macropass;
static int narg;
static int nparen;
static int nsparen;
static int nrparen;
static int nfiltseg;
static int nrange;
static int nroutine;
static int nshape;
static int nregion;
static int nmask;
static int got;
static int offscl;
static int xtype, ytype;
static int tltyp[2];

static double lastd1;
static double lastd2;
static double xpos, ypos;
static double xpix, ypix;
static double cdelt1, cdelt2, crot;
static double dval, dval2;
static double tlmin[2];
static double tlmax[2];
static double binsiz[2];

static char lastarg[SZ_LINE];
static char regname[SZ_LINE];
static char colnames[2][SZ_LINE];
static char wcsnames[2][SZ_LINE];
static char macrobuf[SZ_LINE];
static char rangename[SZ_LINE];
static char sbuf[SZ_LINE];
static char saveang[SZ_LINE];

static char *fcoordsys=NULL;
static char *gcoordsys=NULL;
static char *filter=NULL;
static char *radang=NULL;

static struct WorldCoor *wcs=NULL;
static FiltSeg *filtseg=NULL;
static Filter filt=NULL;

/* these are read-only */
static char *rnames[] = {"annulus", "box", "circle", "ellipse", 
                         "line", "panda", "pie", "qtpie", "point",
			 "polygon", "field", "bpanda", "cpanda", "epanda", 
			 "imagemask", NULL};
static int rargs[] =     {4, 5, 3, 5,
                          4, 8, 4, 4, 2,
                          6, 0, 11, 8, 11,
                          0, 0};
static int vargs[] =     {'y', 'o', 'y', 'o', 
                          'n', 'n', 'y', 'n', 'e',
                          'e', 'n',  'n',  'n',  'n', 
                          'n', '\0'};

static int _FiltLexTypeCmp(const void *s1, const void *s2);
static int _FiltLexTypeMatch(int ftype, int ttype);
static int _FiltLexAccel _PRx((int n));
static int _FiltLexRegionPanda _PRx((void));
static int _FiltLexLcx _PRx((void));
static int _FiltLexArgCheck _PRx((char *name, int args));
static int _FiltLexNeedOp _PRx((int i, char *s));
static void _FiltLexOp _PRx((char *s));
static void _FiltLexTypeSet _PRx((int type));
static void _FiltLexNew _PRx((void));
static void _FiltLexParen _PRx((char *s));
static void _FiltLexCat _PRx((char *s));
static void _FiltLexRegionStart _PRx((int docols));
static void _FiltLexRegionVal _PRx((char *s));
static void _FiltLexRegionEnd _PRx((void));
static void _FiltLexRangeAdd _PRx((char *xname, char *str, int type, int n, int maxlen));
static void _FiltLexArgSave _PRx((double dval));
static void _FiltLexSetWcs _PRx((char *s));
static void _FiltLexWcsCols _PRx((FITSHead header, char *name1, char *name2));
static void _FiltLexNum _PRx((int lcx));
static void _FiltLexEnd _PRx((void));
static void _FiltLexMake _PRx((void));
static char *_FiltLexGetWcs _PRx((void));
static int _FiltIncMask(FilterMask masks, int maxmask, int nmask);
static int _FiltFitsMask(char *filename, FilterMask *rmasks, FITSHead *rhead, int *nreg);
static void bin2num(char *d, char *s, int maxlen);

int _filterror _PRx((char *msg));
%}

DIG	[0-9]
DIG2	[0-9a-fA-F]
BINARY  0[bB][01]+
INT1	[-+]?{DIG}+L?
INT2	[-+]?0[xX]{DIG2}+L?
INT	({INT1}|{INT2})
FLOAT1  [-+]?{DIG}+\.?([eE][-+]?{DIG}+)?
FLOAT2  [-+]?{DIG}*\.{DIG}+([eE][-+]?{DIG}+)?
FLOAT   ({FLOAT1}|{FLOAT2})
NUM	({INT}|{FLOAT}|{BINARY})
HMS	{INT}{SP}[:hH]{SP}{INT}{SP}[:mM]{SP}{NUM}{SP}[s]?
DMS	{INT}{SP}[:dD]{SP}{INT}{SP}[:mM]{SP}{NUM}{SP}[s]?
WCS	{HMS}|{DMS}
DEG	{NUM}d
RAD	{NUM}r
IPIX	{NUM}i
PPIX	{NUM}p
ASEC	{NUM}\"
AMIN	{NUM}'
COORSYS	(j2000|fk5|icrs|b1950|fk4|galactic|ecliptic|linear|image|physical|amplifier|detector)
NAME	[A-Za-z_][0-9A-Za-z~_]*(\[[^\[]*\])?
FILE	@[0-9A-Za-z~_/\-\.]*(\[.*\])?
REGION	[\!+-]?(ann|annulus|box|cir|circle|ell|ellipse|lin|line|pan|panda|pie|poi|qtpie|qtp|point|pol|polygon|fie|field|bpanda|bpa|cpanda|cpa|epanda|epa)
REGVAL	{SP}\{{INT}\}
LOP	(&&|\|\||[&\|])
OP	(&&|\|\||==|!=|<=|>=|<<|>>|[&\|~=<>+\-*/%^])
STR	(\"[^\"]*\"|'[^']*')
SP	[ \t]*
EOL	([;\n]|\\n)
SEP	(,|{EOL})
COM	#
US	(unsigned{SP})?
II	(int{SP})?
DTYPE	(\({US}char\)|\({US}short{II}\)|\({US}int\)|\({US}long{II}\)|\(float\)|\(double\))

%s RLIST
%s RTINE
%s REG
%x AREG
%x INCLUDE
%x COMM

%%

{DTYPE}	    { _FiltLexCat(yytext); }

{COORSYS}[\n;,]*   { _FiltLexSetWcs(yytext); }

global      { BEGIN COMM; }
tile        { BEGIN COMM; }
compass     { BEGIN COMM; }
{COM}       { 
	      /* comment acts like EOL */
	      if( YY_START == REG ){
		_FiltLexRegionEnd();
	        _FiltLexNew(); 
	      }
	      else if( YY_START == RLIST ){
		_FiltLexParen(")");
                _FiltLexNew();
	      }
	      else{
	        _FiltLexNew(); 
	      }
              BEGIN COMM;
}
<COMM>\n    { BEGIN INITIAL; }
<COMM>\\n   { BEGIN INITIAL; }
<COMM>.     { /* ignore comments up to eol */ ; }

[+-]?text([ \t]+|{SP}\({SP})[^;\n]*{EOL}  	{ ; /* ignore */ }
[+-]?vector([ \t]+|{SP}\({SP})[^;\n]*{EOL}  	{ ; /* ignore */ }
[+-]?ruler([ \t]+|{SP}\({SP})[^;\n]*{EOL} 	{ ; /* ignore */ }
[+-]?projection([ \t]+|{SP}\({SP})[^;\n]*{EOL}	{ ; /* ignore */ }

\(/{NAME},{NAME}\){SP}={SP}{REGION} {
		if( YY_START == REG ){
		  _FiltLexRegionEnd();
		  _FiltLexNew();
		}
		/* Found an asc-style region */
		colargs = 0;
		laststart = YY_START;
		BEGIN AREG;
}
<AREG>{NAME}	{
		if( colargs > 2 )
		  _filterror("illegal Chandra region (too many column args)");
		if( !FilterSymbolEnter(filt, yytext, &got) ){
                  switch(got){
                    case -1:
		      _filterror("missing column or header parameter");
                      break;
                    case -2:
		      _filterror("column is not an array");
                      break;
                    case -3:
		      _filterror("internal error while processing column");
                      break;
                  }
                }
		strcpy(colnames[colargs],yytext);
		colargs++;
}
<AREG>,		{ ; }
<AREG>\(	{ ; }
<AREG>\)	{ ; }
<AREG>= 	{	
		/* end of asc part of region */
		if( colargs != 2 )
		  _filterror("illegal Chandra region (wrong number of cols)");
		BEGIN INITIAL;
}

[+-]?field([ \t]+|{SP}\({SP})?      |
{REGION}([ \t]+|{SP}\({SP})/{NUM}   {
		/* finish off previous */
		if( YY_START == REG ){
		  _FiltLexRegionEnd();
		  _FiltLexNew();
		}
		/* Found a region */
		BEGIN REG;
                if( filt->type == TYPE_EVENTS ){
		  /* if asc-style, re-do wcs for specified columns */
		  if( colargs == 2 ){
		    _FiltLexRegionStart(2);
                    _FiltLexWcsCols(filt->fhd, colnames[0], colnames[1]);
                  }
		  /* set up default columns */
                  else{
		    _FiltLexRegionStart(1);
                  }
                }
                /* its an image */
                else{
		  _FiltLexRegionStart(0);
                }
}
{REGION}([ \t]+|{SP}\({SP})/{NAME}  {
                /* can't happen */
		_filterror("invalid characters following the region name");
}
<REG>{NUM}	{
                narg++;
                /* process this pure number in the current coord system */
                _FiltLexNum(_FiltLexLcx());
}
<REG>{IPIX}	{
                narg++;
                /* remove trailing unit character */
                yytext[strlen(yytext)-1] = '\0';
                /* process this  as a pure number in image coord sys */
                _FiltLexNum(LCX_IMAGE);
}
<REG>{PPIX}	{
                narg++;
                /* remove trailing unit character */
                yytext[strlen(yytext)-1] = '\0';
                /* process this  as a pure number in physical coord sys */
                _FiltLexNum(LCX_PHYS);
}
<REG>{WCS}	{
		char *coordsys;
		if( nowcs(wcs) )
		  _filterror("no WCS information in file");
                narg++;
		/* save x value for processing with y next time */
		if( XARG ){
		  xpos = SAOstrtod(yytext,NULL);
		  xtype = SAOdtype;
		  if( (xtype !=0) && (xtype != '.') && (xtype != 'd') ){
		    coordsys = _FiltLexGetWcs();
		    /* arg1 coords are hms, but ecliptic, galactic are deg */
		    if( !coordsys                             ||
		        (strncasecmp(coordsys, "ecl", 3)     &&
			 strncasecmp(coordsys, "gal", 3))    ){
		      xpos = h2d(xpos);
		    }
		  }
		}
		else{
		  ypos = SAOstrtod(yytext,NULL);
		  ytype = SAOdtype;
                  /* convert wcs to image pixels */
		  wcsc2pix(wcs, xpos,ypos, _FiltLexGetWcs(), &xpix,&ypix,
			   &offscl);
                  /* convert to physical for single event filtering */
                  if( USEPHYS ){
		    xpix = tli2p(xpix, tlmin[0], binsiz[0], tltyp[0]);
		    ypix = tli2p(ypix, tlmin[1], binsiz[1], tltyp[1]);
                  }
		  snprintf(sbuf, SZ_LINE, DFMT2, xpix, ypix);
		  _FiltLexCat(sbuf);
		}
}
<REG>{DEG}	{
                narg++;
		/* handle position arguments */
		if( POSARG ){
		  if( nowcs(wcs) )
		    _filterror("no WCS information in file");
		  /* save x value for processing with y next time */
		  if( XARG ){
		    xpos = strtod(yytext,NULL);
		  }
		  else{
		    ypos = strtod(yytext,NULL);
                    /* convert wcs to image pixels */
		    wcsc2pix(wcs, xpos, ypos, _FiltLexGetWcs(),
				  &xpix, &ypix, &offscl);
                    /* convert to physical for single event filtering */
                    if( USEPHYS ){
	  	      xpix = tli2p(xpix, tlmin[0], binsiz[0], tltyp[0]);
		      ypix = tli2p(ypix, tlmin[1], binsiz[1], tltyp[1]);
                    }
		    snprintf(sbuf, SZ_LINE, DFMT2, xpix, ypix);
		    _FiltLexCat(sbuf);
		  }
		}
                /* angle arguments are just passed along, with updated crot */
		else if( ANGARG ){
		  dval = strtod(yytext,NULL);
                  if( USEWCS ) dval += crot;
                  if( IMFLIP ) dval = -dval;
		  snprintf(sbuf, SZ_LINE, DFMT1, dval);
		  _FiltLexCat(sbuf);
                }
                /* panda numeric args are just passed along */
                else if( NUMARG ){
                  dval = strtod(yytext,NULL);
                  snprintf(sbuf, SZ_LINE, DFMT1, dval);
                  _FiltLexCat(sbuf);
                }
		/* handle size arguments */
		else{
		  if( !WCSSIZE )
		    _filterror("no WCS (or CDELT) information in file");
                  if( SAVEANG ){
		    dval = strtod(yytext,NULL);
                    if( USEWCS ) dval += crot;
                    if( IMFLIP ) dval = -dval;
		    snprintf(saveang, SZ_LINE, DFMT1, dval);
                  }
		  /* arg 1 is ra, arg2 is dec */
		  if( XARG )
		    dval = ABS(strtod(yytext,NULL)/cdelt1);
		  else
		    dval = ABS(strtod(yytext,NULL)/cdelt2);
		  snprintf(sbuf, SZ_LINE, DFMT1, dval);
		  _FiltLexCat(sbuf);
		  _FiltLexArgSave(dval);
		}
}
<REG>{RAD}	{
                narg++;
		/* handle position arguments */
		if( POSARG ){
		  if( nowcs(wcs) )
		    _filterror("no WCS information in file");
		  /* save x value for processing with y next time */
		  if( XARG ){
		    xpos = r2d(strtod(yytext,NULL));
		  }
		  else{
		    ypos = r2d(strtod(yytext,NULL));
                    /* convert wcs to image pixels */
		    wcsc2pix(wcs, xpos, ypos, _FiltLexGetWcs(),
				  &xpix, &ypix, &offscl);
                    /* convert to physical for single event filtering */
                    if( USEPHYS ){
	  	      xpix = tli2p(xpix, tlmin[0], binsiz[0], tltyp[0]);
		      ypix = tli2p(ypix, tlmin[1], binsiz[1], tltyp[1]);
                    }
		    snprintf(sbuf, SZ_LINE, DFMT2, xpix, ypix);
		    _FiltLexCat(sbuf);
		  }
		}
                /* angle arguments are just passed along, with updated crot */
		else if( ANGARG ){
		  dval = r2d(strtod(yytext,NULL));
                  if( USEWCS ) dval += crot;
                  if( IMFLIP ) dval = -dval;
		  snprintf(sbuf, SZ_LINE, DFMT1, dval);
		  _FiltLexCat(sbuf);
                }
                /* panda numeric args are just passed along */
                else if( NUMARG ){
                  dval = strtod(yytext,NULL);
                  snprintf(sbuf, SZ_LINE, DFMT1, dval);
                  _FiltLexCat(sbuf);
                }
		/* handle size arguments */
		else{
		  if( !WCSSIZE )
		    _filterror("no WCS (or CDELT) information in file");
                  if( SAVEANG ){
		    dval = r2d(strtod(yytext,NULL));
                    if( USEWCS ) dval += crot;
                    if( IMFLIP ) dval = -dval;
		    snprintf(saveang, SZ_LINE, DFMT1, dval);
                  }
		  /* arg 1 is ra, arg2 is dec */
		  if( XARG )
		    dval = r2d(ABS(strtod(yytext,NULL)/cdelt1));
		  else
		    dval = r2d(ABS(strtod(yytext,NULL)/cdelt2));
		  snprintf(sbuf, SZ_LINE, DFMT1, dval);
		  _FiltLexCat(sbuf);
		  _FiltLexArgSave(dval);
		}
}
<REG>{AMIN}	{
		if( !WCSSIZE )
		  _filterror("no WCS (or CDELT) information in file");
                narg++;
		/* arg 1 is ra, arg2 is dec */
		if( XARG )
		  dval = ABS(strtod(yytext,NULL)/(cdelt1*60.0));
		else
		  dval = ABS(strtod(yytext,NULL)/(cdelt2*60.0));
		snprintf(sbuf, SZ_LINE, DFMT1, dval);
		_FiltLexCat(sbuf);
                _FiltLexArgSave(dval);
}
<REG>{ASEC}	{
		if( !WCSSIZE )
		  _filterror("no WCS (or CDELT) information in file");
                narg++;
		/* arg 1 is ra, arg2 is dec */
		if( XARG )
		  dval = ABS(strtod(yytext,NULL)/(cdelt1*3600.0));
		else
		  dval = ABS(strtod(yytext,NULL)/(cdelt2*3600.0));
		snprintf(sbuf, SZ_LINE, DFMT1, dval);
		_FiltLexCat(sbuf);
                _FiltLexArgSave(dval);
}
<REG>[a-z]{SP}={SP}{NUM}{SP} {
		int n;
		n = strtol(strchr(yytext, '=')+1, NULL, 10);
		if( n <=0 ){
		  _filterror("invalid region accelerator");
		}
		else{
		  if( !_FiltLexAccel(n) ){
		    _filterror("invalid region accelerator");
		  }
		}
}
<REG>{NUM}/{OP} {
                if( _FiltLexArgCheck(regname, narg) == 0 ){
		  /* new expression without an expression separator ... sigh */
		  _FiltLexRegionEnd();
		  _FiltLexNew();
		  BEGIN INITIAL;
		  yyless(0);
                } else {
                  narg++;
                  /* process this pure number in the current coord system */
                  _FiltLexNum(_FiltLexLcx());
                }
}
<REG>({NAME}{OP}|{FILE}) {
		/* new expression without an expression separator ... sigh */
		_FiltLexRegionEnd();
		_FiltLexNew();
		BEGIN INITIAL;
		yyless(0);
}
<REG>,		{
		/* explicit rule avoids the _FiltLexNew of general rule */
		;
}
<REG>{REGVAL}	{
		_FiltLexRegionVal(yytext);
		if( !nsparen ){
		  _FiltLexRegionEnd();
		  BEGIN INITIAL;
                }
}
<REG>\(  	{ 
		nsparen++;
}
<REG>\){REGVAL}	{
		_FiltLexRegionVal(yytext+1);
		if( nsparen ){
		  nsparen--;
                  if( !nsparen ){
		    _FiltLexRegionEnd();
		    BEGIN INITIAL;
                  }
		} else {
		  _FiltLexRegionEnd();
		  BEGIN INITIAL;
		  /* REJECT; */
		  /* explicit execution of general rule instead of REJECT */
		  nparen--;
		  _FiltLexNew();
		  _FiltLexCat(")");
		  _FiltLexNew();
		}
}
<REG>\)		{
		if( nsparen ){
		  nsparen--;
                  if( !nsparen ){
		    _FiltLexRegionEnd();
		    BEGIN INITIAL;
                  }
		} else {
		  _FiltLexRegionEnd();
		  BEGIN INITIAL;
		  /* REJECT; */
		  /* explicit execution of general rule instead of REJECT */
		  nparen--;
		  _FiltLexNew();
		  _FiltLexCat(")");
		  _FiltLexNew();
		}
}
<REG>{OP}	{ 
		_FiltLexRegionEnd();
		_FiltLexOp(yytext);
		BEGIN INITIAL;
}
<REG>{EOL}	{ 
		_FiltLexRegionEnd();
		_FiltLexNew();
		BEGIN INITIAL;
}

{NAME}{SP}/={SP}\(?({NAME}|:{NAME}) {
  _filterror("you must use == to compare two columns,");
}

{NAME}{SP}/={SP}\(?({NUM}|:{NUM}) {
		if( YY_START == REG ){
		  _FiltLexRegionEnd();
		}
		_FiltLexParen("(");
		BEGIN RLIST;
		narg = 0;
		_FiltLexTypeSet(TOK_RLIST);
		nrange = 0;
		if( !FilterSymbolEnter(filt, yytext, &got) ){
                  switch(got){
                    case -1:
		      _filterror("missing column or header parameter");
                      break;
                    case -2:
		      _filterror("column is not an array");
                      break;
                    case -3:
		      _filterror("internal error while processing column");
                      break;
                  }
                }
                strncpy(rangename, yytext, SZ_LINE-1);
}
<RLIST>{NUM}{SP}:{SP}{NUM} {
  _FiltLexRangeAdd(rangename, yytext, 3, nrange++, SZ_LINE);
}
<RLIST>:{SP}{NUM}          {
  _FiltLexRangeAdd(rangename, yytext, 1, nrange++, SZ_LINE);
}
<RLIST>{NUM}{SP}:	   {
  _FiltLexRangeAdd(rangename, yytext, 4, nrange++, SZ_LINE);
}
<RLIST>{NUM} 	           {
  _FiltLexRangeAdd(rangename, yytext, 2, nrange++, SZ_LINE);
}
<RLIST>=	    { ; }
<RLIST>,	    { ; }
<RLIST>{SEP}{SP}/{NUM}\)*{LOP} { ; }
<RLIST>{SEP}{SP}/\(*({NAME}|{NUM}{SP}{OP}|{FILE}|{REGION}) {
		_FiltLexParen(")");
                _FiltLexNew();
		BEGIN INITIAL;
}
<RLIST>\)	{
		_FiltLexParen(")");
                _FiltLexNew();
		_FiltLexParen(")");
                _FiltLexNew();
		BEGIN INITIAL;
}		
<RLIST>{OP}	{
		_FiltLexParen(")");
		_FiltLexOp(yytext);
		BEGIN INITIAL;
}		
<RLIST>{EOL}	{ 
		_FiltLexParen(")");
                _FiltLexNew();
		BEGIN INITIAL;
}

{NAME}{SP}/\(	{ 
		/* Found a routine */
		laststart = YY_START;
		BEGIN RTINE;
		narg = 0;
		nrparen = 0;
		_FiltLexTypeSet(TOK_RTINE);
		_FiltLexCat(FilterLexRoutine1(filt, yytext));
		nroutine++;
}
<RTINE>,	{
		/* explicit rule avoids the _FiltLexNew of general rule */
		_FiltLexCat(",");
}
<RTINE>\(	{
		nrparen++;
		_FiltLexCat("(");
}
<RTINE>\)	{
		nrparen--;
		if( nrparen ){
  		  _FiltLexCat(")");
		}
		else{
		  /* end of routine */
		  BEGIN laststart;
		  _FiltLexCat(FilterLexRoutine2(filt, ")"));
		}
}

{FILE}	       {
		/* Found an include file */
		char *s, *t;
		if( YY_START == REG ){
		  _FiltLexRegionEnd();
		  _FiltLexNew();
		}
                /* handle FITS mask file specially */
                filt->nmask = _FiltFitsMask(yytext+1,
                                            &(filt->masks),
                                            &(filt->maskhd),
                                            &(filt->nmaskreg));
                /* filt->nmask == -1 => its not a FITS file */
                if( filt->nmask != -1 ){
                  switch(filt->nmask){
                  case -2:
                    _filterror("FITS image mask must be image data -");
                    break;
                  case -3:
                    _filterror("Invalid dimensions for FITS image mask -");
                    break;
                  case -4:
                    _filterror("FITS image mask cannot contain negative values -");
                    break;
                  default:
                    if( (filt->type != TYPE_IMAGE) && !filt->evsect ){
                      _filterror("FITS image mask is valid for image filtering only -");
                    }
                    else{
                      if( nmask )
                        _filterror("only one FITS image mask allowed at a time -");
                      else
                        nmask++;
                    }
                    break;
                  }
                }
                else{
		  if ( include_stack_ptr >= MAX_INCLUDE_DEPTH ) {
		    _filterror("include files are nested too deeply");
		  }
		  if( (s = (char *)FileContents(yytext+1, 0, NULL)) == NULL ){
		    _filterror("can't access include file");
		  }
		  /* ignore empty include file */
		  else if( *s == '\0' ){
		    ;
		  }
		  else {
		    t = FilterClip(s);
		    xfree(s);
		    if( t && *t ){
  		      include_stack[include_stack_ptr++] = YY_CURRENT_BUFFER;
                      _FiltLexNew();
		      _FiltLexParen("(");
		      FiltScanString(t);
		      xfree(t);
		    }
                  }
		}
}

{NAME}		{
		if( !FilterSymbolEnter(filt, yytext, &got) ){
                  switch(got){
                    case -1:
		      _filterror("missing column or header parameter");
                      break;
                    case -2:
		      _filterror("column is not an array");
                      break;
                    case -3:
		      _filterror("internal error while processing column");
                      break;
                  }
                }
		else{
		  narg++;
		  /* add if initial condition (not region, routine, etc.) */
		  if( YY_START == INITIAL ) _FiltLexTypeSet(TOK_NAME);
		  _FiltLexCat(FilterLexName(filt,yytext));
		}
}

{SP} 		{ ; /* ignore white space */ }

{STR}		{ narg++; _FiltLexCat(yytext); }

{NUM}	        {
		  char tbuf[SZ_LINE];
                  bin2num(tbuf, yytext, SZ_LINE-1);
                  narg++;
                  _FiltLexCat(tbuf);
                }

{OP}    	{
		_FiltLexOp(yytext);
		if( YY_START != RTINE ) BEGIN INITIAL;
}

\(		{
		nparen++;
		_FiltLexNew();
		_FiltLexCat(yytext);
		_FiltLexNew();
}
\)		{
		nparen--;
		_FiltLexNew();
		_FiltLexCat(yytext);
		_FiltLexNew();
}
{SEP}		{       
		_FiltLexNew();
		BEGIN INITIAL;
}

.		{ _FiltLexCat(yytext); }

<<EOF>>		{
		if ( --include_stack_ptr < 0 ){
		  _FiltLexMake();
		  yy_delete_buffer( YY_CURRENT_BUFFER );
                  yyterminate();
		} else {
		  _FiltLexParen(")");
                  _FiltLexNew();
		  yy_delete_buffer( YY_CURRENT_BUFFER );
		  yy_switch_to_buffer(include_stack[include_stack_ptr] );
		}
}

%%

/*
 *
 * Private Routines 
 *
 *
 */


#ifdef YY_USE_PROTOS
static void floatprefix(void)
#else
static void floatprefix()
#endif
{
  if( filt->method == METHOD_C )
    _FiltLexCat("(double)");
}

#ifdef YY_USE_PROTOS
static void floatsuffix(void)
#else
static void floatsuffix()
#endif
{
  return;
}

#ifdef YY_USE_PROTOS
static void
bin2num(char *d, char *s, int maxlen)
#else
static void
bin2num(d, s, maxlen)
  char *d;
  char *s;
  int maxlen;
#endif
{
  unsigned long bits;
  char *p=NULL;

  if( strlen(s) < 2 ){
    if( d != s ) strncpy(d, s, maxlen-1);
  }
  else{
    if( (*s=='0') && (*(s+1)=='b') ){
      bits = strtoul(s+2, &p, 2);
      if( *p != '\0' ) _filterror("invalid binary value");
      snprintf(d, maxlen, "%lx", bits);
      if( (strlen(d) <2) || (*d!='0') || ((*(d+1)!='x')&&((*(d+1)!='X'))) ){
        snprintf(d, maxlen, "0x%lx", bits);
      }
    }
    else{
      if( d != s ) strncpy(d, s, maxlen-1);
    }
  }
}

/*
 *
 * _FiltLexNew -- finish last start and set up new filter segment
 *
 */
#ifdef YY_USE_PROTOS
static void
_FiltLexNew(void)
#else
static void _FiltLexNew()
#endif
{
  int i;
  int last;
  
  if( nfiltseg >= maxfiltseg ){
    last = maxfiltseg;
    if( maxfiltseg == 0 ){
      maxfiltseg = SEGINC;
      filtseg = (FiltSeg *)xmalloc(maxfiltseg * sizeof(FiltSeg));
    }
    else{
      maxfiltseg += SEGINC;
      filtseg = (FiltSeg *)xrealloc(filtseg, maxfiltseg * sizeof(FiltSeg));
    }
    /* clear the unused records */ 
    for(i=last; i<maxfiltseg; i++){
      filtseg[i] = NULL;
    }
  }
  if( !nfiltseg || (filtseg[nfiltseg-1] && filtseg[nfiltseg-1]->s) ){
    filtseg[nfiltseg] = (FiltSeg)xcalloc(1, sizeof(FiltSegRec));
    nfiltseg++;
  }
  filtseg[nfiltseg-1]->n = nfiltseg-1;
  filtseg[nfiltseg-1]->nregion = 0;
}

/*
 *
 * _FiltLexParen -- add a paren to the filter string buffer
 *
 */
#ifdef YY_USE_PROTOS
static void
_FiltLexParen(char *str)
#else
static void _FiltLexParen(str)
     char *str;
#endif
{
  /* _FiltLexNew(); */
  _FiltLexCat(str);
  /* _FiltLexNew(); */
}

/*
 *
 * __FiltLexCat -- add a string to the filter string buffer
 *
 */
#ifdef YY_USE_PROTOS
static void
__FiltLexCat(char *str, char **ostr, int *olen)
#else
static void __FiltLexCat(str, ostr, olen)
     char *str;
     char **ostr;
     int *olen;
#endif
{
  int blen;
  int slen;
  
  if( (str == NULL) || (*str == '\0') )
    return;
  else
    slen = strlen(str) + 1;
  
  if( (*ostr == NULL) || (**ostr == '\0') )
    blen = 0;
  else
    blen = strlen(*ostr);
  
  while( (blen + slen) >= *olen ){
    *olen += SEGINC;
  }
  if( blen == 0 )
    *ostr = (char *)xcalloc(*olen, sizeof(char));
  else
    *ostr = (char *)xrealloc(*ostr, *olen);
  strcat(*ostr, str);
}

/*
 *
 * _FiltLexCat -- add a string to the filter string buffer
 *
 */
#ifdef YY_USE_PROTOS
static void
_FiltLexCat(char *str)
#else
static void _FiltLexCat(str)
     char *str;
#endif
{
  char *s;
  if( !str || !*str )
    return;
  if( nfiltseg ==0 )
    _FiltLexNew();
  s = xmalloc(strlen(str)+1);
  nowhite(str, s);
  __FiltLexCat(s, &(filtseg[nfiltseg-1]->s), &(filtseg[nfiltseg-1]->len));
  if( s ) xfree(s);
}

/*
 *
 * _FiltLexArgSave -- save a radius or angle value to the temp string:
 * this is a special hack for funcnts
 *
 */
#ifdef YY_USE_PROTOS
static void
_FiltLexArgSave(double dval)
#else
static void _FiltLexArgSave(dval)
        double dval;
#endif
{
  char tbuf[SZ_LINE];

  if( narg < 3 )
    return;
  snprintf(tbuf, SZ_LINE, DFMT1, dval);
  if( narg == 3 ){ 
    *lastarg = '\0';
    lastd1 = 0.0;
    lastd2 = 0.0;
    if( filtseg[nfiltseg-1]->radang ){
      xfree(filtseg[nfiltseg-1]->radang);
      filtseg[nfiltseg-1]->radang = NULL;
      filtseg[nfiltseg-1]->ralen = 0;
    }
  }
  switch(regid){
  case TY_ANNULUS:
  case TY_CIRCLE:
    if( *lastarg ){
      __FiltLexCat(lastarg, &(filtseg[nfiltseg-1]->radang),
                         &(filtseg[nfiltseg-1]->ralen));
    }
    __FiltLexCat(tbuf, &(filtseg[nfiltseg-1]->radang),
                       &(filtseg[nfiltseg-1]->ralen));
    if( narg > 3 ){
      __FiltLexCat(",NA,NA\n", &(filtseg[nfiltseg-1]->radang),
                               &(filtseg[nfiltseg-1]->ralen));
      strcpy(lastarg, tbuf);
    }
    lastd1 = lastd2;
    lastd2 = dval;
    break;

  case TY_BOX:
  case TY_ELLIPSE:
    if( (narg%2) == 1 ){
      if( *lastarg ){
        __FiltLexCat(lastarg, &(filtseg[nfiltseg-1]->radang),
                              &(filtseg[nfiltseg-1]->ralen));
      }
      __FiltLexCat(tbuf, &(filtseg[nfiltseg-1]->radang),
                         &(filtseg[nfiltseg-1]->ralen));
      if( narg > 3 ){
        __FiltLexCat(",NA,NA\n", &(filtseg[nfiltseg-1]->radang),
                                 &(filtseg[nfiltseg-1]->ralen));
        strcpy(lastarg, tbuf);
      }
      lastd1 = lastd2;
      lastd2 = dval;
    }
    break;

  case TY_PIE:
    if( narg == 3 ){
      __FiltLexCat("NA,NA", &(filtseg[nfiltseg-1]->radang),
                            &(filtseg[nfiltseg-1]->ralen));
    }
    else if( *lastarg ){
      __FiltLexCat("NA,NA,", &(filtseg[nfiltseg-1]->radang),
                             &(filtseg[nfiltseg-1]->ralen));
      __FiltLexCat(lastarg, &(filtseg[nfiltseg-1]->radang),
                            &(filtseg[nfiltseg-1]->ralen));
    }
    __FiltLexCat(tbuf, &(filtseg[nfiltseg-1]->radang),
                       &(filtseg[nfiltseg-1]->ralen));
    if( narg > 3 ){
      __FiltLexCat("\n", &(filtseg[nfiltseg-1]->radang),
                         &(filtseg[nfiltseg-1]->ralen));
      strcpy(lastarg, tbuf);
    }
    lastd1 = lastd2;
    lastd2 = dval;
    break;

  case TY_POINT:
    /* we have to process this here if its is a varargs */
    /* so, for the 3rd arg, we add a line for initial x, y pair */
    if( narg == 3 ){ 
      __FiltLexCat("NA,NA,NA,NA\n", &(filtseg[nfiltseg-1]->radang),
                                    &(filtseg[nfiltseg-1]->ralen));
    }
    /* and for every even arg, add a line for the preceeding x,y pair */
    else if( (narg % 2) == 0 ){ 
      __FiltLexCat("NA,NA,NA,NA\n", &(filtseg[nfiltseg-1]->radang),
                                    &(filtseg[nfiltseg-1]->ralen));
    }
    break;
  default:
    return;
  }      
}

/*
 *
 * _FiltLexAccel -- appply acceleration to a segment
 *
 */
#ifdef YY_USE_PROTOS
static int
_FiltLexAccel(int n)
#else
static int _FiltLexAccel(n)
     int n;
#endif
{
  int i;
  char tbuf[SZ_LINE];
  char *s;
  double dinc;

  /* check region type */
  switch(regid){
    case TY_ANNULUS:
      break;
    case TY_BOX:
      narg -= 2;
      break;
    case TY_CIRCLE:
      narg -= 1;
      break;
    case TY_ELLIPSE:
      narg -= 2;
      break;
    case TY_PIE:
      break;
    default:
      _filterror("annulus, box, circle, ellipse, pie accelerators only - ");
      break;
  }
  /* add the argument */
  snprintf(tbuf, SZ_LINE, IFMT1, n);
  _FiltLexCat(tbuf);
  /* change the name of the routine we will call */
  if( filtseg[nfiltseg-1]->s0 ){
    if( (s = xstrdup(&filtseg[nfiltseg-1]->s[filtseg[nfiltseg-1]->s0])) ){
      filtseg[nfiltseg-1]->s[filtseg[nfiltseg-1]->s0] = '\0';
      _FiltLexCat("n");
      _FiltLexCat(s);
      snprintf(tbuf, SZ_LINE, "%d ", n);
      __FiltLexCat(tbuf, &(filtseg[nfiltseg-1]->regions),
		         &(filtseg[nfiltseg-1]->nr));
      __FiltLexCat(tbuf, &(filtseg[nfiltseg-1]->shapes),
		         &(filtseg[nfiltseg-1]->ns));
      setargs = 1;
      free (s);
    }
    if( filtseg[nfiltseg-1]->radang ){
      xfree(filtseg[nfiltseg-1]->radang);
      filtseg[nfiltseg-1]->radang = NULL;
      filtseg[nfiltseg-1]->ralen = 0;
    }
    switch(regid){
      case TY_ANNULUS:
      case TY_BOX:
      case TY_CIRCLE:
      case TY_ELLIPSE:
        dinc = (lastd2 - lastd1)/n;
        for(i=1; i<=n; i++){
          snprintf(tbuf, SZ_LINE, DFMT2, lastd1+((i-1)*dinc), lastd1+(i*dinc));
          __FiltLexCat(tbuf, &(filtseg[nfiltseg-1]->radang),
                             &(filtseg[nfiltseg-1]->ralen));
          __FiltLexCat(",NA,NA", &(filtseg[nfiltseg-1]->radang),
                             &(filtseg[nfiltseg-1]->ralen));
	  __FiltLexCat("\n", &(filtseg[nfiltseg-1]->radang),
		       	     &(filtseg[nfiltseg-1]->ralen));
        }
        break;
      case TY_PIE:
        dinc = (lastd2 - lastd1)/n;
        for(i=1; i<=n; i++){
          snprintf(tbuf, SZ_LINE, DFMT2, lastd1+((i-1)*dinc), lastd1+(i*dinc));
          __FiltLexCat("NA,NA", &(filtseg[nfiltseg-1]->radang),
                             &(filtseg[nfiltseg-1]->ralen));
          __FiltLexCat(tbuf, &(filtseg[nfiltseg-1]->radang),
                             &(filtseg[nfiltseg-1]->ralen));
	  __FiltLexCat("\n", &(filtseg[nfiltseg-1]->radang),
		             &(filtseg[nfiltseg-1]->ralen));
        }
        break;
      default:
        _filterror("annulus, box, circle, ellipse, pie accelerators only - ");
        break;
    }
    _FiltLexTypeSet(TOK_ACCEL);
  }
  else{
    _filterror("misplaced accelerator");
  }
  return(n);
}

/*
 *
 * _FiltLexTypeSet -- add type info to the filter segment record
 *
 */
#ifdef YY_USE_PROTOS
static void
_FiltLexTypeSet(int type)
#else
static void _FiltLexTypeSet(type)
     int type;
#endif
{
  if( nfiltseg ==0 )
    _FiltLexNew();
  filtseg[nfiltseg-1]->type |= type;
}

/*
 *
 * _FiltLexOp -- add an operator to the filter segment record
 *
 */
#ifdef YY_USE_PROTOS
static void
_FiltLexOp(char *op)
#else
static void _FiltLexOp(op)
     char *op;
#endif
{
  _FiltLexCat(op);
  filtseg[nfiltseg-1]->ops += 1;
}

#ifdef YY_USE_PROTOS
static void
_FiltLexRegionStart(int docols)
#else
static void _FiltLexRegionStart(docols)
	int docols;
#endif
{
  char *s, *t;
  char tbuf[SZ_LINE];

  /* sanity check -- 1D images do not support regions */
  if( (filt->type == TYPE_IMAGE) && (ft_naxes(filt->fhd)==1) ){
    _filterror("2D region filters invalid for 1D images");
  }
  narg = 0;
  setargs=0;
  s = xmalloc(strlen(yytext)+1);
  nowhite(yytext, s);
  if( *s == '+' ){
    regtype = TOK_IREG;
    strcpy(regname, s+1);
  }
  else if( *s == '-' ){
    regtype = TOK_EREG;
    strcpy(regname, s+1);
  }
  else if( *s == '!' ){
    regtype = TOK_NREG;
    strcpy(regname, s+1);
  }
  else{
    regtype = TOK_IREG;
    strcpy(regname, s);
  }
  _FiltLexTypeSet(regtype);
  if( !(t=strchr(regname, '(')) ){
    nsparen=0;
  }
  /* remove the paren from the regname string -- we will explicitly add it */
  else{
    *t = '\0';
    nsparen=1;
  }  
  /* convert to lower case, remove white space */
  culc(regname);
  nowhite(regname, s);
  strcpy(regname, s);
  /* convert abbrev to region */
  if( !strncmp(regname, "ann", 3) ){
    strcpy(regname, "annulus");
    regid = TY_ANNULUS;
  }
  else if( !strncmp(regname, "box", 3) ){
    strcpy(regname, "box");
    regid = TY_BOX;
  }
  else if( !strncmp(regname, "cir", 3) ){
    strcpy(regname, "circle");
    regid = TY_CIRCLE;
  }
  else if( !strncmp(regname, "ell", 3) ){
    strcpy(regname, "ellipse");
    regid = TY_ELLIPSE;
  }
  else if( !strncmp(regname, "fie", 3) ){
    strcpy(regname, "field");
    regid = TY_FIELD;
  }
  else if( !strncmp(regname, "lin", 3) ){
    strcpy(regname, "line");
    regid = TY_LINE;
  }
  else if( !strncmp(regname, "pan", 3) ){
    strcpy(regname, "panda");
    regid = TY_PANDA;
  }
  else if( !strncmp(regname, "bpa", 3) ){
    strcpy(regname, "bpanda");
    regid = TY_BPANDA;
  }
  else if( !strncmp(regname, "cpa", 3) ){
    strcpy(regname, "cpanda");
    regid = TY_CPANDA;
  }
  else if( !strncmp(regname, "epa", 3) ){
    strcpy(regname, "epanda");
    regid = TY_EPANDA;
  }
  else if( !strncmp(regname, "pie", 3) ){
    strcpy(regname, "pie");
    regid = TY_PIE;
  }
  else if( !strncmp(regname, "qtp", 3) ){
    strcpy(regname, "qtpie");
    regid = TY_PIE;
  }
  else if( !strncmp(regname, "poi", 3) ){
    strcpy(regname, "point");
    regid = TY_POINT;
  }
  else if( !strncmp(regname, "pol", 3) ){
    strcpy(regname, "polygon");
    regid = TY_POLYGON;
  }
  else if( !strcmp(regname, "imagemask") ){
    regid = TY_IMAGEMASK;
  }
  /* append filter-type prefix */
  switch( filt->type ){
  case TYPE_EVENTS:
    /* normally, we filter rows analytically using evregions.o */
    if( !filt->evsect )
      _FiltLexCat("ev");
    /* if evsect=xxx is specified, we filter by image pixels */
    else
      _FiltLexCat("im");
    break;
  case TYPE_IMAGE:
    /* image are filtered by image pixels */
    _FiltLexCat("im");
    break;
  }
  /* no region value to start */
  filtseg[nfiltseg-1]->regval = 0;
  /* save size of current string so we can get back to the region string */
  filtseg[nfiltseg-1]->s0 = strlen(filtseg[nfiltseg-1]->s);
  /* append region */
  _FiltLexCat(FilterLexRegion1(filt,regname));
  /* append standard args */
  _FiltLexCat("(g,$RS,");
  /* add include/exclude and whether we mark y lines for this region
     (we don't mark y on excludes as an optimization) */
  switch(regtype){
  case TOK_IREG:
    snprintf(tbuf, SZ_LINE, "1,%d", TOK_IREG);
    _FiltLexCat(tbuf);
    break;
  case TOK_NREG:
    snprintf(tbuf, SZ_LINE, "0,%d", TOK_NREG);
    _FiltLexCat(tbuf);
    break;
  case TOK_EREG:
    snprintf(tbuf, SZ_LINE, "0,%d", TOK_EREG);
    _FiltLexCat(tbuf);
    break;
  }
  switch(docols){
  case 0:
    /* initialize default columns for tables -- but don't enter symbols yet */
    FilterSymbolDefaults(filt, 0);
    /* initialize wcs for default image case */
    _FiltLexWcsCols(filt->fhd, filt->xbin, filt->ybin);
    _FiltLexCat(",");
    floatprefix();
    _FiltLexCat("x");
    floatsuffix();
    _FiltLexCat(",");
    floatprefix();
    _FiltLexCat("y");
    floatsuffix();
    break;
  case 1:
    if( !initbindefs ){
      /* initialize default columns for tables and enter symbols */
      FilterSymbolDefaults(filt, 1);
      /* initialize wcs for default table case */
      _FiltLexWcsCols(filt->fhd, filt->xbin, filt->ybin);
      initbindefs++;
    }
    if( !filt->xbin || !filt->ybin ){
      _filterror("two binning columns are required for regions");
    }
    _FiltLexCat(",");
    floatprefix();
    _FiltLexCat(filt->xbin);
    floatsuffix();
    _FiltLexCat(",");
    floatprefix();
    _FiltLexCat(filt->ybin);
    floatsuffix();
    break;
  case 2:
    _FiltLexCat(",");
    floatprefix();
    _FiltLexCat(colnames[0]);
    floatsuffix();
    _FiltLexCat(",");
    floatprefix();
    _FiltLexCat(colnames[1]);
    floatsuffix();
    break;
  }
  if( s ) xfree(s);
}

#ifdef YY_USE_PROTOS
static void
_FiltLexRegionVal(char *s)
#else
static void
_FiltLexRegionVal(s)
  char *s;
#endif
{
  char *t=NULL;
  if( (t=strchr(s, '{')) ){
    t++;
  }
  else{
    t = s;
  }
  filtseg[nfiltseg-1]->regval = atoi(t);
}

#ifdef YY_USE_PROTOS
static void
_FiltLexRegionEnd(void)
#else
static void
_FiltLexRegionEnd()
#endif
{
  int n;
  char *s;
  char ebuf[SZ_LINE];
  char tbuf[SZ_LINE];

  /* add final arguments as required */
  switch( regid ){
  case TY_BOX:
    if( (narg%2) == 0 ){
      _FiltLexCat(",0.0"); narg++;
    }
    else{
      /* if we saved an angle arg, we need to replace the last position arg */
      if( *saveang ){
        if( (s=strrchr(filtseg[nfiltseg-1]->s, ',')) ){
          *s = '\0';
          _FiltLexCat(saveang);
        }
      }
    }
    break;
  case TY_ELLIPSE:
    if( (narg%2) == 0 ){
      _FiltLexCat(",0.0"); narg++;
    }
    else{
      /* if we saved an angle arg, we need to replace the last position arg */
      if( *saveang ){
        if( (s=strrchr(filtseg[nfiltseg-1]->s, ',')) ){
          *s = '\0';
          _FiltLexCat(saveang);
        }
      }
    }
    break;
  case TY_BPANDA:
  case TY_EPANDA:
    if( (narg%2) == 0 ){
      _FiltLexCat(",0.0"); narg++;
    }
    /* drop through here to process panda */
  case TY_PANDA:
  case TY_CPANDA:
    _FiltLexRegionPanda();
    setargs = 1;
    break;
  default:
    break;
  }

  /* argument check */
  if( (n=_FiltLexArgCheck(regname, narg)) > 0 ){
    /* don't bother printing where we are in region */
    *yytext = '\0';
    switch( vargs[n-1] ){
    case 'n':
      snprintf(ebuf, SZ_LINE, "'%s' requires %d args (%d found)", 
	      rnames[n-1], rargs[n-1], narg);
      break;
    case 'e':
      snprintf(ebuf, SZ_LINE,
 	       "'%s' requires at least %d (even) args (%d found)", 
 	       rnames[n-1], rargs[n-1], narg);
      break;
    case 'o':
      snprintf(ebuf, SZ_LINE,
               "'%s' requires at least %d (odd) args (%d found)", 
 	       rnames[n-1], rargs[n-1], narg);
      break;
    case 'y':
    default:
      snprintf(ebuf, SZ_LINE, "'%s' requires %d args (%d found)", 
	      rnames[n-1], rargs[n-1], narg);
      break;
    }
    _filterror(ebuf);
  }

  /* process varargs */
  if( (n < 0) || (regid == TY_POLYGON) ){
    if( filtseg[nfiltseg-1]->type & TOK_ACCEL ){
      _filterror("n= and variable arglist cannot be combined -");
    }
    /* if its a varargs, we need to end with PSTOP values */
    snprintf(sbuf, SZ_LINE, DFMT2, PSTOP, PSTOP);
    _FiltLexCat(sbuf);
    /* change the name of the routine we will call */
    if( regid != TY_POLYGON ){
      if( filtseg[nfiltseg-1]->s0 ){
        if((s = xstrdup(&filtseg[nfiltseg-1]->s[filtseg[nfiltseg-1]->s0]))){
          filtseg[nfiltseg-1]->s[filtseg[nfiltseg-1]->s0] = '\0';
          _FiltLexCat("v");
          _FiltLexCat(s);
          switch(regid){
          case TY_ANNULUS:
            n = narg - 3;
            break;
          case TY_BOX:
            n = (narg - 5)/2;
            break;
          case TY_CIRCLE:
            n = narg - 3;
            break;
          case TY_ELLIPSE:
            n = (narg - 5)/2;
            break;
          case TY_PIE:
            n = narg - 3;
            break;
          case TY_POINT:
            n = narg/2;
            break;
          default:
            _filterror("varargs: annulus, box, circle, ellipse, pie, point;");
            break;
          }
          snprintf(tbuf, SZ_LINE, "%d ", n);
          __FiltLexCat(tbuf, &(filtseg[nfiltseg-1]->regions),
 		             &(filtseg[nfiltseg-1]->nr));
          __FiltLexCat(tbuf, &(filtseg[nfiltseg-1]->shapes),
		             &(filtseg[nfiltseg-1]->ns));
          setargs = 1;
          free (s);
        }
        _FiltLexTypeSet(TOK_VARARGS);
      }
      else{
        _filterror("invalid varargs");
      }
    }
  }


  /* set number of regions and shapes, if not already done */
  if( !setargs ){
    snprintf(tbuf, SZ_LINE, "%d ", 1);
    __FiltLexCat(tbuf, &(filtseg[nfiltseg-1]->regions),
 	               &(filtseg[nfiltseg-1]->nr));
    __FiltLexCat(tbuf, &(filtseg[nfiltseg-1]->shapes),
		       &(filtseg[nfiltseg-1]->ns));
  }

  /* finish off region string */
  _FiltLexCat(FilterLexRegion2(filt,")"));

  /* no column arguments */
  colargs = 0;
  /* arguments are not set */
  setargs = 0;
  /* save angle not set */
  *saveang = 0;
}

#ifdef YY_USE_PROTOS
static int
_FiltLexRegionPanda(void)
#else
static int
_FiltLexRegionPanda()
#endif
{
  int i;
  int n=0;
  int got=0;
  int a, r;
  int ahi=0, rhi=0;
  int hi=0;
  double d[11];
  double ainc=0.0, rinc=0.0;
  char tbuf[SZ_LINE];
  char *s=NULL;
  char *t, *u;

  switch(regid){
  case TY_PANDA:
  case TY_CPANDA:
    hi = 7;
    break;
  case TY_BPANDA:
  case TY_EPANDA:
    hi = 10;
    break;
  default:
    _filterror("unknown panda type -- contact saord@cfa.harvard.edu");
    break;
  }
  s = xstrdup(filtseg[nfiltseg-1]->s);
  for(i=hi; i>=0; i--){
    /* look for last comma */
    t = strrchr(s, ',');
    if( !t ) goto done;
    /* null it out from base string */
    *t = '\0';
    /* point past comma and get double value */
    t++;
    d[i] = strtod(t, &u);
    if( t == u ) goto done;
  }

  switch(regid){
  case TY_PANDA:
  case TY_CPANDA:
    ainc = (d[3] - d[2])/d[4];
    ahi = (int)d[4];
    rinc = (d[6] - d[5])/d[7];
    rhi = (int)d[7];
    break;
  case TY_BPANDA:
  case TY_EPANDA:
    ainc = (d[3] - d[2])/d[4];
    ahi = (int)d[4];
    rinc = (d[7] - d[5])/d[9];
    rhi = (int)d[9];
    break;
  default:
    _filterror("unknown panda type -- contact saord@cfa.harvard.edu");
    break;
  }
  /* process limits arguments */
  for(a=1; a<=ahi; a++){
    for(r=1; r<=rhi; r++){
      snprintf(tbuf, SZ_LINE, DFMT4, 
               d[5]+((r-1)*rinc), d[5]+(r*rinc),
               d[2]+((a-1)*ainc), d[2]+(a*ainc));
      __FiltLexCat(tbuf, &(filtseg[nfiltseg-1]->radang),
                         &(filtseg[nfiltseg-1]->ralen));
      __FiltLexCat("\n", &(filtseg[nfiltseg-1]->radang),
                         &(filtseg[nfiltseg-1]->ralen));
      n++;
    }
  }

  /* adjust region and shape count */
  snprintf(tbuf, SZ_LINE, "%d ", n);
  __FiltLexCat(tbuf, &(filtseg[nfiltseg-1]->regions),
	             &(filtseg[nfiltseg-1]->nr));
  snprintf(tbuf, SZ_LINE, "%d ", 2*n);
  __FiltLexCat(tbuf, &(filtseg[nfiltseg-1]->shapes),
		     &(filtseg[nfiltseg-1]->ns));
  _FiltLexTypeSet(TOK_ACCEL);
  /* success */
  got = 1;

done:
  if( s ) xfree(s);
  return got;
}

/*
 *
 * _FiltLexRangeAdd -- add a rangelist string to the filter string buffer
 *
 */
#ifdef YY_USE_PROTOS
static void
_FiltLexRangeAdd(char *xname, char *str, int type, int n, int maxlen)
#else
static void _FiltLexRangeAdd(xname, str, type, n, maxlen)
     char *xname;
     char *str;
     int type;
     int n;
     int maxlen;
#endif
{
  char tbuf[SZ_LINE];
  char tbuf2[SZ_LINE];
  char *s;
  char *t;
  char *t2;
  char *name;
  
  /* get "in-expression" name for current technique */
  name = FilterLexName(filt, xname);

  /* initialize pointers */
  s = str;
  t = tbuf;

  /* clear working buffer */
  memset(t, 0, SZ_LINE);

  /* if this is not the beginning, we first need to OR with prev */
  if( n != 0 ) strncat(t, "||", maxlen-1);
  
  /* put in parens for safety */
  strncat(t, "(", maxlen-1);
  
  /* add the name */
  strncat(t, name, maxlen-1);
  
  /* add the rangelist */
  switch(type){
  case 1:
    strncat(t, "<=", maxlen-1);
    /* skip past : */
    s++;
    /* append value */
    t2 = tbuf2;
    while( *s ){
      *t2++ = *s++;
    }
    *t2 = '\0';
    bin2num(tbuf2, tbuf2, maxlen-1);
    strncat(t, tbuf2, maxlen-1);
    break;
  case 2:
    strncat(t, "==", maxlen-1);
    /* append upper value */
    t2 = tbuf2;
    while( *s ){
      *t2++ = *s++;
    }
    *t2 = '\0';
    bin2num(tbuf2, tbuf2, maxlen-1);
    strncat(t, tbuf2, maxlen-1);
    break;
  case 3:
    strncat(t, ">=", maxlen-1);
    /* append lower value */
    t2 = tbuf2;
    while( *s && (*s != ':') ){
      *t2++ = *s++;
    }
    *t2 = '\0';
    bin2num(tbuf2, tbuf2, maxlen-1);
    strncat(t, tbuf2, maxlen-1);
    /* skip past : */
    s++;
    strncat(t, "&&", maxlen-1);
    strncat(t, name, maxlen-1);
    strncat(t, "<=", maxlen-1);
    /* append upper value */
    t2 = tbuf2;
    while( *s ){
      *t2++ = *s++;
    }
    *t2 = '\0';
    bin2num(tbuf2, tbuf2, maxlen-1);
    strncat(t, tbuf2, maxlen-1);
    break;
  case 4:
    strncat(t, ">=", maxlen-1);
    /* append lower value */
    t2 = tbuf2;
    while( *s && (*s != ':') ){
      *t2++ = *s++;
    }
    *t2 = '\0';
    bin2num(tbuf2, tbuf2, maxlen-1);
    strncat(t, tbuf2, maxlen-1);
    break;
  }
  strncat(t, ")", maxlen-1);
  _FiltLexCat(tbuf);
}

/*
 *
 * _FiltLexTypeCmp -- compare routine for qsort
 *
 */
#ifdef YY_USE_PROTOS
static int
_FiltLexTypeCmp(const void *s1, const void *s2)
#else
static int _FiltLexTypeCmp(s1, s2)
     const void *s1;
     const void *s2;
#endif
{
  FiltSeg *f1 = (FiltSeg *)s1;
  FiltSeg *f2 = (FiltSeg *)s2;
  
  /* check for broken qsort */
  if( !*f1 || !*f2 ){
    _filterror("qsort is broken -- contact saord@cfa.harvard.edu");
    /* will not happen */
    return 0;
  }

  /* make sure null string is at the end */
  if( !(*f1)->s && !(*f2)->s ) return 0;
  else if( !(*f1)->s ) return 1;
  else if( !(*f2)->s ) return -1;

  /* paint: reverse order and make excludes local */
  if( filt->paint ){
    /* if both are regions, reverse order */
    if( ((*f1)->type & TOK_REG) && ((*f2)->type & TOK_REG) ){
      if( (*f1)->n < (*f2)->n )           return 1;
      else if( (*f1)->n > (*f2)->n )      return -1;
      else                                return 0;
    }
    /* keep same order */
    else{
      if( (*f1)->n < (*f2)->n )           return -1;
      else if( (*f1)->n > (*f2)->n )      return 1;
      else                                return 0;
    }
  }
  else{
    /* if both or neither are eregions, keep them in the same order */
    if( ((*f1)->type & TOK_EREG) == ((*f2)->type & TOK_EREG) ){
      if( (*f1)->n < (*f2)->n )           return -1;
      else if( (*f1)->n > (*f2)->n )      return 1;
      else                                return 0;
    }
    /* exactly one is an eregion -- and we want eregions last */
    else{
       if( (*f1)->type & TOK_EREG )       return 1;
       else if( (*f2)->type & TOK_EREG )  return -1;
       /* should not happen */
       else                               return 0;
    }
  }
}

/*
 *
 * _FiltLexTypeMatch -- see if the type of filtering we are doing
 * matches the type of token we have
 *
 */
#ifdef YY_USE_PROTOS
int
_FiltLexTypeMatch(int ftype, int ttype)
#else
int _FiltLexTypeMatch(ftype, ttype)
     int ftype;
     int ttype;
#endif
{
  switch(ftype){
  case TYPE_IMAGE:
    /* we don't allow range list and col names in image filters */
    if( (ttype & TOK_RLIST) || (ttype & TOK_NAME) )
      return 0;
    /* everything else is fine */
    else
      return 1;
  case TYPE_EVENTS:
    return 1;
  default:
    return 1;
  }
}

#ifdef YY_USE_PROTOS
static int
_FiltLexArgCheck(char *name, int args)
#else
static int _FiltLexArgCheck(name, args)
	char *name;
        int args;
#endif
{
  int i;

  for(i=0; rnames[i]; i++){
    if( !strcmp(name, rnames[i]) ){
      if( args == rargs[i] ){
        return(0);
      }
      else{
        /* less than required min */
        if( args < rargs[i] )
          return(i+1);
        /* more than min args -- could be varargs */
        else{
          /* check args allowed in varargs */
          switch(vargs[i]){
          case 'e':
            if( (args%2) == 0 )
              return(-1);
            else
              return(i+1);
          case 'o':
            if( (args%2) == 1 )
              return(-1);
            else
              return(i+1);
	  case 'y':
	    return(-1);
          default:
            return(i+1);
          }
        }
      }
    }
  }
  return(0);
}

#ifdef YY_USE_PROTOS
static void
_FiltLexSetWcs(char *s)
#else
static void _FiltLexSetWcs(s)
	char *s;
#endif
{
  char name[SZ_LINE];
  int ip=0;

  newdtable(",=;");
  /* get name of global coordsys */
  if( word(s, name, &ip) ){
    if( gcoordsys ) xfree(gcoordsys);
    gcoordsys = xstrdup(name);
    culc(gcoordsys);
  }
  /* restore old delim table */
  freedtable();
}

#ifdef YY_USE_PROTOS
static char *
_FiltLexCB(char *name, void *client_data)
#else
static char *_FiltLexCB(name, client_data)
	char *name;
	void *client_data;
#endif
{
  FiltSeg f=(FiltSeg)client_data;
  int ip=0;
  int nr=0;
  int ns=0;
  char *s;
  char tbuf[SZ_LINE];

  if( !strcmp(name, "RS") ){
    /* exclude regions get no region value first time around */
    if( (macropass==0) && (f->type & TOK_EREG) ){
      return NULL;
    }
    /* get next region value and remove from string */
    if( word(f->regions, tbuf, &ip) ){
      nr = atoi(tbuf);
      s = xstrdup(&(f->regions[ip]));
      xfree(f->regions);
      f->regions = s;    
    }
    else{
      _filterror("internal error: no region string specified");
      return(NULL);
    }
    if( !inexpr || (f->type & (TOK_ACCEL|TOK_VARARGS)) ){
      if( f->regval ){
        snprintf(macrobuf, SZ_LINE, "%d,", f->regval);
      } 
      else{
        snprintf(macrobuf, SZ_LINE, "%d,", nregion+1);
      }
      nregion += nr;
      f->nregion += nr;
      inexpr = 1;
    }
    else{
      if( f->regval ){
        snprintf(macrobuf, SZ_LINE, "%d,", f->regval);
      } 
      else{
        snprintf(macrobuf, SZ_LINE, "%d,", nregion);
      }
    }

    /* get next shape value and remove from string */
    ip = 0;
    if( word(f->shapes, tbuf, &ip) ){
      ns = atoi(tbuf);
      s = xstrdup(&(f->shapes[ip]));
      xfree(f->shapes);
      f->shapes = s;    
    }
    else{
      _filterror("internal error: no shape string specified");
      return(NULL);
    }
    /* concat shape value */
    nshape++;
    snprintf(tbuf, SZ_LINE, "%d", nshape);
    strcat(macrobuf, tbuf);
    /* set new shape value */
    nshape += (ns-1);

    /* return macro value */
    return(macrobuf);
  }
  else{
    return NULL;
  }
}

/*
 *
 * _FiltLexNeedOp -- determine if we add a connecting operator for this segment
 *
 */
#ifdef YY_USE_PROTOS
static int
_FiltLexNeedOp(int i, char *s)
#else
static int _FiltLexNeedOp(i, s)
	int i;
	char *s;
#endif
{
  int c;
  /* check for operator in current string */
  if( s && *s ){
    c = *s;
    switch(c){
    case '&':
    case '|':
    case '=':
    case '!':
    case '<':
    case '>':
      return 0;
    default:
      break;
    }
  }
  /* not in this string check for operator in previous */
  for(i=i-1; i>=0; i--){
    if( !filtseg[i] || !filtseg[i]->s ) continue;
    if( strcmp(filtseg[i]->s, "(") && strcmp(filtseg[i]->s, ")") )
      break;
  }
  if( i >= 0 ){
    c = filtseg[i]->s[strlen(filtseg[i]->s)-1];
    switch(c){
    case '&':
    case '|':
    case '=':
    case '!':
    case '<':
    case '>':
      return 0;
    default:
      return 1;
    }
  }
  else{
    return 0;
  }
}

/*
 *
 * _FiltLexMake -- generate filter from filter segments
 *
 */
#ifdef YY_USE_PROTOS
static void
_FiltLexMake(void)
#else
static void _FiltLexMake()
#endif
{
  int i, j, k, l;
  int x, xtot;
  int type=0;
  int ltype=0;
  int opar=0;
  char *s;

  /* debugging */
  if( filt->debug ){
    for(i=0; i<nfiltseg; i++){
      if( filtseg[i]->s )
        fprintf(stderr, "unsorted #%d %s\n", filtseg[i]->n, filtseg[i]->s);
      else
        fprintf(stderr, "unsorted #%d %d is empty\n", i, filtseg[i]->n);
    }
  }
  /* look for bad region expressions and determine how many regions we have */
  for(i=0, j=0, k=0, l=0; i<nfiltseg; i++){
    if( !filtseg[i] || !filtseg[i]->s ) continue;
    type = filtseg[i]->type;
    /* make sure we want the type being offered */
    if( !_FiltLexTypeMatch(filt->type, type) ){
      _filterror("column filters not permitted in an image filter expression");
    }
    /* look for bad combinations */
    if( (type & TOK_NREG) && !(type & TOK_IREG) )
      _filterror("!region must be combined with another region (e.g., field()&&!region)");
    if( (type & TOK_EREG) && (type & TOK_IREG) )
      _filterror("-region must not be combined with another region (use !region instead)");
    if( (type & TOK_EREG) && (type & TOK_NAME) )
      _filterror("-region must not be combined with filters (use !region instead)");
    if( (type & TOK_EREG) && (type & TOK_RLIST) )
      _filterror("-region must not be combined with range lists (use !region instead)");
    if( (type & TOK_EREG) && (type & TOK_RTINE) )
      _filterror("-region must not be combined with routines (use !region instead)");
    /* count region types */
    if( filtseg[i]->type & TOK_IREG ) j++;
    if( filtseg[i]->type & TOK_NREG ) k++;
    if( filtseg[i]->type & TOK_EREG ) l++;
  }
  /* check for fits image mask and process specially */
  if( filt->masks ){
    /* can't have fits mask and ascii regions */
    if( j || k || l ){
      _filterror("FITS image masks cannot be combined with ASCII regions");
    }
    /* image filtering of events uses a imagemask special routine */
    if( (filt->type == TYPE_EVENTS) && filt->evsect ){
      strcpy(yytext, "imagemask");
      _FiltLexRegionStart(1);
      _FiltLexRegionEnd();
    }
    else{
      __FiltLexCat("imagemask", &filter, &filtlen);
      nregion = filt->nmaskreg;
      return;
    }
  }
  /* if we have only exclude regions, add field */
  if( !j && !k && l ){
    strcpy(yytext, "field");
    if( filt->type == TYPE_EVENTS )
      _FiltLexRegionStart(1);
    else
      _FiltLexRegionStart(0);
    _FiltLexRegionEnd();
  }

  /* reset region and shape counts */
  nregion=0;
  nshape=0;

  /* expand macro before reordering, to maintain region numbers in sequence */
  for(i=0; i<nfiltseg; i++){
    if( filtseg[i] && filtseg[i]->s ){
      if( _FiltLexNeedOp(i, NULL) ) inexpr=0;
      macropass=0;
      s = ExpandMacro(filtseg[i]->s, NULL, NULL, 0, _FiltLexCB, filtseg[i]);
      xfree(filtseg[i]->s);
      filtseg[i]->s = s;
    }
  }

  /* we want descending order so that eregions are last in the expression */
  qsort(filtseg, nfiltseg, sizeof(FiltSeg), _FiltLexTypeCmp);

  if( filt->debug ){
    for(i=0; i<nfiltseg; i++){
      if( filtseg[i]->s )
        fprintf(stderr, "sorted #%d %s\n", filtseg[i]->n, filtseg[i]->s);
      else
        fprintf(stderr, "sorted #%d %d is empty\n", i, filtseg[i]->n);
    }
  }

  /* add open paren and mark that we did it */
  __FiltLexCat("(", &filter, &filtlen);
  opar = 1;

  /* run through segments, inserting proper boolean connectors */
  ltype = 0;
  for(i=0; i<nfiltseg; ){
    if( filtseg[i] && filtseg[i]->s ){
      /* no type probably means its a paren, so just add it and jump out */
      if( !filtseg[i]->type ){
        __FiltLexCat(filtseg[i]->s, &filter, &filtlen);
	/* remove empty parens, if we just make them */
	x = strlen(filter);
	if( (filter[x-2] == '(') && (filter[x-1] == ')') )
	  filter[x-2] = '\0';
	i++;
	continue;
      }
      type = filtseg[i]->type;
      if( _FiltLexNeedOp(i, NULL) ) inexpr=0;
      macropass=1;
      s = ExpandMacro(filtseg[i]->s, NULL, NULL, 0, _FiltLexCB, filtseg[i]);
      if( _FiltLexNeedOp(i, s) ){
        /* remove trailing open parens from prev. segment (add back later) */
	for(xtot=0, x=strlen(filter)-1; x>=0; x--){
	  if( filter[x] != '(' ) break;
	  filter[x] = '\0';
	  xtot++;
        }
        if( (ltype & TOK_IREG) && (type & TOK_IREG) ){
          __FiltLexCat("||", &filter, &filtlen);
        }
        else if( (ltype & TOK_IREG) && (type & TOK_EREG) ){
          if( opar > 0 ){
            __FiltLexCat(")", &filter, &filtlen);
            opar--;
          }
	  if( filt->paint ){ 
            if( opar > 0 ){
              __FiltLexCat(")", &filter, &filtlen);
              opar --;
            }
            __FiltLexCat("||", &filter, &filtlen);
	  }
	  else{
            __FiltLexCat("&&", &filter, &filtlen);
	  }
          __FiltLexCat("(", &filter, &filtlen);
          opar++;
        }
        else if( (ltype & TOK_EREG) && (type & TOK_EREG) ){
          __FiltLexCat("&&", &filter, &filtlen);
        }
        else if( (ltype & TOK_EREG) && (type & TOK_IREG) ){
          if( filt->paint && (opar > 0) ){
            __FiltLexCat(")", &filter, &filtlen);
            opar --;
          }
          __FiltLexCat("&&", &filter, &filtlen);
          __FiltLexCat("(", &filter, &filtlen);
          opar ++;
          if( filt->paint ){
            __FiltLexCat("(", &filter, &filtlen);
            opar++;
          }
        }
        /* otherwise implied operator is AND */
        else{
          __FiltLexCat("&&", &filter, &filtlen);
        }
	/* add back parens */
	for(x=0; x<xtot; x++){
	  __FiltLexCat("(", &filter, &filtlen);
        }
      }
      else{
        if( filt->paint && (i==0) ){
	  __FiltLexCat("((", &filter, &filtlen);
	  opar +=2;
	}
      }
      __FiltLexCat(s, &filter, &filtlen);
      if( s ) xfree(s);
      if( filtseg[i]->radang ){
        if( *filtseg[i]->radang == ',' )
          __FiltLexCat(filtseg[i]->radang+1, &radang, &radanglen);
        else
          __FiltLexCat(filtseg[i]->radang, &radang, &radanglen);
      }
      else{
        __FiltLexCat("NA,NA,NA,NA\n", &radang, &radanglen);
      }
      i++;
      for(; (i<nfiltseg) && (filtseg[i]->type==type); ){
        if( _FiltLexNeedOp(i, NULL) ) inexpr=0;
        s = ExpandMacro(filtseg[i]->s, NULL, NULL, 0, _FiltLexCB, filtseg[i]);
	if( _FiltLexNeedOp(i, s) ){
	  for(xtot=0, x=strlen(filter)-1; x>=0; x--){
	    if( filter[x] != '(' ) break;
	    filter[x] = '\0';
	    xtot++;
          }
          /* if lhs and rhs are regions, implied operator is OR */
	  if( type & TOK_IREG )
	    __FiltLexCat("||", &filter, &filtlen);
          /* otherwise implied operator is AND */
	  else
	    __FiltLexCat("&&", &filter, &filtlen);
	  for(x=0; x<xtot; x++){
	    __FiltLexCat("(", &filter, &filtlen);
          }
        }
        __FiltLexCat(s, &filter, &filtlen);
        if( s ) xfree(s);
        if( filtseg[i]->radang ){
          if( *filtseg[i]->radang == ',' )
            __FiltLexCat(filtseg[i]->radang+1, &radang, &radanglen);
          else
            __FiltLexCat(filtseg[i]->radang, &radang, &radanglen);
        }
        else{
          __FiltLexCat("NA,NA,NA,NA\n", &radang, &radanglen);
        }
	i++;
      }
    }
    /* ignore invalid arguments */
    else{
      i++;
    }
    /* save last type */
    ltype = type;
  }

  /* if last segment was an exclude and we are in paint mode, ignore it */
  if( filt->paint && (ltype & TOK_EREG) ){
    __FiltLexCat("&&0", &filter, &filtlen);
  }

  /* close off open parens (lots could be needed in paint mode) */
  while( opar-- ){
    __FiltLexCat(")", &filter, &filtlen);
  }

  /* check for even number of parens */
  l = strlen(filter);
  for(i=0, j=0; i<l; i++){
    if( filter[i] == '(' ) j++;
    if( filter[i] == ')' ) j--;
  }
  if( j != 0 ){
    if( filt->debug ) fprintf(stderr, "paren error %d: %s\n", j, filter);
    _filterror("unbalanced parentheses");
  }
  if( filt->debug ) fprintf(stderr, "filter: %s\n", filter);
}

/*
 *
 * _FiltLexEnd -- cleanup from parsing regions
 *
 */
#ifdef YY_USE_PROTOS
static void
_FiltLexEnd(void)
#else
static void _FiltLexEnd()
#endif
{
  int i;

  /* reset state variables */
  colargs = 0;
  initbindefs = 0;
  include_stack_ptr = 0;
  nroutine = 0;
  nshape = 0;
  nmask = 0;
  nparen = 0;
  parse_error = 0;
  filtlen = 0;
  radanglen = 0;
  regid = 0;
  regtype = 0;
  inexpr = 0;
  *regname = '\0';
  *saveang = 0;
  *(wcsnames[0]) = '\0';
  *(wcsnames[1]) = '\0';
  binsiz[0] = 1;
  binsiz[1] = 1;
  /* free up previous filter */
  if( filter ){
    xfree(filter);
    filter = NULL;
  }
  /* free up previous radang string */
  if( radang ){
    xfree(radang);
    radang = NULL;
  }
  /* free up wcs */
  if( wcs ){
    wcsfree (wcs);
    wcs = NULL;   
  }
  /* no segments */
  if( filtseg ){
    for(i=0; i<nfiltseg; i++){
      if( filtseg[i] ){
        if( filtseg[i]->s )         xfree(filtseg[i]->s);
        if( filtseg[i]->regions )   xfree(filtseg[i]->regions);
        if( filtseg[i]->shapes )    xfree(filtseg[i]->shapes);
        if( filtseg[i]->radang )     xfree(filtseg[i]->radang);
        xfree(filtseg[i]);
      }
    }
    xfree(filtseg);
    filtseg = NULL;
  }
  maxfiltseg = 0;
  nfiltseg = 0;
  if( gcoordsys ){
    xfree(gcoordsys);
    gcoordsys = NULL;
  }
  if( fcoordsys ){
    xfree(fcoordsys);
    fcoordsys = NULL;
  }
  cdelt1 = 0.0;
  cdelt2 = 0.0;
  crot   = 0.0;
}

/*
 *
 * _FiltLexGetWcs -- determine the WCS coord system to use for wcsc translation
 *
 */
#ifdef YY_USE_PROTOS
static char *
_FiltLexGetWcs(void)
#else
static char *_FiltLexGetWcs()
#endif
{
  if( gcoordsys &&
	strcmp(gcoordsys, "image") && strcmp(gcoordsys, "physical") )
    return gcoordsys;
  if( fcoordsys &&
	strcmp(fcoordsys, "image") && strcmp(fcoordsys, "physical") )
    return fcoordsys;
  return NULL;
}

/*
 *
 * _FiltLexWcsCols -- reset WCS for these columns
 *
 */
#ifdef YY_USE_PROTOS
static void
_FiltLexWcsCols(FITSHead iheader, char *name0, char *name1)
#else
static void _FiltLexWcsCols(iheader, name0, name1)
	FITSHead iheader;
	char *name0;
	char *name1;
#endif
{
  int i, which, ival;
  int simple=1;
  double dval, dval2;
  char *s;
  FITSHead oheader;    
  FITSCard card;
  
  /* make sure we have something to process */
  if( !iheader )
    return;

  if( filt->fhd->image ){
    /* free up old wcs */
    if( wcs ) wcsfree (wcs);
    /* init new wcs */
    hlength(ft_cards(filt->fhd),0);
    wcs = wcsinit(ft_cards(filt->fhd));
    tltyp[0] = 0;
    tltyp[1] = 0;
  }
  /* for tables, we can init wcs only the specified columns */
  else if( name0 && *name0 && name1 && *name1 ){
    /* see if these are the same as the last set of columns */
    if( (*(wcsnames[0]) && !strcasecmp(name0,wcsnames[0])) && 
        (*(wcsnames[1]) && !strcasecmp(name1,wcsnames[1])) && wcs ){
      return;
    }

    /* gather up important tl info about the binning columns */
    for(i=1; i<=iheader->table->tfields; i++){
      /* determine which bincol we are processing */
      if( !strcasecmp(iheader->table->col[i-1].name, name0) )
        which = 0;
      else if( !strcasecmp(iheader->table->col[i-1].name, name1) )
        which = 1;
      else
        continue;
      /* set tlinfo values for this column */
      tlmin[which] = ft_headgetr(iheader, "TLMIN", i, 1.0, &card);
      tlmax[which] = ft_headgetr(iheader, "TLMAX", i, 1.0, &card);
      binsiz[which] = ft_headgetr(iheader, "TDBIN", i, 1.0, &card);
      tltyp[which] = iheader->table->col[i-1].type;
    }

    /* free up old wcs */
    if( wcs ) wcsfree (wcs);
    /* make a copy of the header */
    oheader = ft_headcopy(iheader);

    /* make sure this is a primary FITS file */
    ft_cardfmt((FITSCard)oheader->cards, 
	       "SIMPLE", 0, FT_LOGICAL, &simple, 0, "Standard FITS");
    /* set dimension info, used by wcs code */
    ft_headseti(oheader, "NAXIS", 0, 2, "number of axes", 1);
    /* set dimension info */
    for(i=0; i<=1; i++){
      ival = (int)tldim(tlmin[i], tlmax[i], binsiz[i], tltyp[i]);
      ft_headseti(oheader, "NAXIS", i+1, ival, "axis dimension", 1);
    }
    /* set bitpix */
    ft_headseti(oheader, "BITPIX", 0, 32, "bits/pixel", 1);
    /* synchronize the header and the cards after any changes */
    ft_syncdata(oheader);

    /* transform WCS cards for the specified columns, if we have such */
    for(i=1; i<=iheader->table->tfields; i++){
      /* determine which bincol we are processing */
      if( !strcasecmp(iheader->table->col[i-1].name, name0) )
        which = 0;
      else if( !strcasecmp(iheader->table->col[i-1].name, name1) )
        which = 1;
      else
        continue;
      /* convert event wcs header info image wcs info */
      if( (s=ft_headgets(iheader, "TCTYP", i, NULL, &card)) && card ){
        ft_headapps(oheader, "CTYPE", which+1, s, NULL);
        xfree(s);
      }
      if( (s=ft_headgets(iheader, "TCRVL", i, NULL, &card)) && card ){
        ft_headappv(oheader, "CRVAL", which+1, s, NULL);
        xfree(s);
      }
      if( (s=ft_headgets(iheader, "TCDLT", i, NULL, &card)) && card ){
        ft_headappv(oheader, "CDELT", which+1, s, NULL);
        xfree(s);
      }
      if( (s=ft_headgets(iheader, "TCROT", i, NULL, &card)) && card ){
        ft_headappv(oheader, "CROTA", which+1, s, NULL);
        xfree(s);
      }
      /* this value gets converted from physical to image */
      if( (dval=ft_headgetr(iheader, "TCRPX", i, 0.0, &card)) && card ){
        dval2 = tlp2i(dval, tlmin[which], binsiz[which], tltyp[which]);
        ft_headsetr(oheader, "CRPIX", which+1, dval2, 7, NULL, 1);
      }
    }

    /* init new wcs */
    hlength(ft_cards(oheader),0);
    wcs = wcsinit(ft_cards(oheader));
    ft_headfree(oheader, 1);
    /* save names for next time */
    strcpy(wcsnames[0], name0);
    strcpy(wcsnames[1], name1);
  }

  /* set some extra wcs parameters */
  if( wcs && iswcs(wcs) ){
    if( fcoordsys ) xfree(fcoordsys);
    fcoordsys = xstrdup(wcs->radecin);
    culc(fcoordsys);
    if( !wcs->coorflip ){
      cdelt1 = wcs->cdelt[0];
      cdelt2 = wcs->cdelt[1];
    }
    else{
      cdelt1 = wcs->cdelt[1];
      cdelt2 = wcs->cdelt[0];
    }
    if ( wcs->imflip ) {
	crot = -wcs->rot;
    } else {
	crot =  wcs->rot;
    }
  }
  else{
    cdelt1 = 0.0;
    cdelt2 = 0.0;
    crot   = 0.0;
  }
  /* set global coord system first time through */
  if( !gcoordsys ){
    if( (gcoordsys=xstrdup(getenv("COORDSYS"))) == NULL )
      gcoordsys = xstrdup(DEFAULT_COORDSYS);
  }
}

/*
 *
 * _FiltLexLcx -- determine if we have a linear-type WCS
 *
 */
#ifdef YY_USE_PROTOS
static int
_FiltLexLcx(void)
#else
static int _FiltLexLcx()
#endif
{
  char *coordsys;
  coordsys = gcoordsys;
  if( !coordsys || !*coordsys )
    return 0;
  if( !strcasecmp(coordsys, "image")     ) return LCX_IMAGE;
  if( !strcasecmp(coordsys, "physical")  ) return LCX_PHYS;
  if( !strcasecmp(coordsys, "amplifier") ) return LCX_AMP;
  if( !strcasecmp(coordsys, "detector")  ) return LCX_DET;
  return 0;
}

#ifdef YY_USE_PROTOS
static void
_FiltLexNum(int lcx)
#else
static void _FiltLexNum(lcx)
	int lcx;
#endif
{
  char tbuf[SZ_LINE];

  /* process binary number, if necessary */
  bin2num(tbuf, yytext, SZ_LINE);

  /* for linear coordinate systems (physical, amps, etc.),
     we have to convert to image coords or physical coords,
     depending on the type of data and type of filtering */
  if( lcx ){
    /* data is in a table: we can use image or physical coords */
    if( filt->fhd->table ){
      /* if we want to use physical coordinates ... */
      if( USEPHYS ){
        /* convert image positions to physical coords */
	if( lcx == LCX_IMAGE ){
	  if(  POSARG ){
	    dval = tli2p(strtod(tbuf,NULL),
	  	 tlmin[(narg+1)%2], binsiz[(narg+1)%2], tltyp[(narg+1)%2]);
	    snprintf(sbuf, SZ_LINE, DFMT1, dval);
  	    _FiltLexCat(sbuf);
            _FiltLexArgSave(dval);
          }
          /* angle arguments are just passed along */
	  else if( ANGARG ){
	    dval = strtod(tbuf,NULL);
	    snprintf(sbuf, SZ_LINE, DFMT1, dval);
	    _FiltLexCat(sbuf);
            _FiltLexArgSave(dval);
          }
          /* panda numeric args are just passed along */
          else if( NUMARG ){
            dval = strtod(tbuf,NULL);
            snprintf(sbuf, SZ_LINE, DFMT1, dval);
            _FiltLexCat(sbuf);
          }
	  /* size arguments have to be converted using the binsize */
	  else{
            if( SAVEANG ){
	      dval = strtod(tbuf,NULL);
	      snprintf(saveang, SZ_LINE, DFMT1, dval);
            }
	    dval = strtod(tbuf,NULL) * binsiz[(narg+1)%2];
	    snprintf(sbuf, SZ_LINE, DFMT1, dval);
	    _FiltLexCat(sbuf);
            _FiltLexArgSave(dval);
          }
        }
        /* already in physical -- just pass along args */
        else{
	  dval = strtod(tbuf,NULL);
	  snprintf(sbuf, SZ_LINE, DFMT1, dval);
	  _FiltLexCat(sbuf);
          _FiltLexArgSave(dval);
        }
      }
      /* we are using image coords (image-style filtering) */
      else{
	/* convert non-image positions to image coords */
	if( lcx != LCX_IMAGE ){
          if( POSARG ){
	    dval = tlp2i(strtod(tbuf,NULL),
	  	 tlmin[(narg+1)%2], binsiz[(narg+1)%2], tltyp[(narg+1)%2]);
	    snprintf(sbuf, SZ_LINE, DFMT1, dval);
	    _FiltLexCat(sbuf);
            _FiltLexArgSave(dval);
          }
          /* angle arguments are just passed along */
	  else if( ANGARG ){
	    dval = strtod(tbuf,NULL);
	    snprintf(sbuf, SZ_LINE, DFMT1, dval);
	    _FiltLexCat(sbuf);
            _FiltLexArgSave(dval);
          }
          /* panda numeric args are just passed along */
          else if( NUMARG ){
            dval = strtod(tbuf,NULL);
            snprintf(sbuf, SZ_LINE, DFMT1, dval);
            _FiltLexCat(sbuf);
          }
	  /* size arguments have to be converted using the binsize */
	  else{
            if( SAVEANG ){
	      dval = strtod(tbuf,NULL);
	      snprintf(saveang, SZ_LINE, DFMT1, dval);
            }
	    dval = strtod(tbuf,NULL) / binsiz[(narg+1)%2];
	    snprintf(sbuf, SZ_LINE, DFMT1, dval);
	    _FiltLexCat(sbuf);
            _FiltLexArgSave(dval);
          }
        }
        /* already in image -- just pass along args */
        else{
	  dval = strtod(tbuf,NULL);
	  snprintf(sbuf, SZ_LINE, DFMT1, dval);
	  _FiltLexCat(sbuf);
          _FiltLexArgSave(dval);
        }
      }
    }
    /* data is in an image: we use image coords */
    else{
      /* convert positional arguments to image */
      if( POSARG ){
	/* save x value for processing with y next time */
	if( XARG ){
	  xpos = SAOstrtod(tbuf,NULL);
	}
	else{
	  ypos = SAOstrtod(tbuf,NULL);
	  switch(lcx){
	  case LCX_IMAGE:
	    xpix = xpos;
            ypix = ypos;
            break;
	  case LCX_PHYS:
	    ft_phy2img(filt->fhd, xpos, ypos, &xpix, &ypix);
	    break;
	  case LCX_AMP:
	    ft_amp2phy(filt->fhd, xpos, ypos, &dval, &dval2);
	    ft_phy2img(filt->fhd, dval, dval2, &xpix, &ypix);
	    break;
	  case LCX_DET:
	    ft_det2phy(filt->fhd, xpos, ypos, &dval, &dval2);
	    ft_phy2img(filt->fhd, dval, dval2, &xpix, &ypix);
	    break;
	  }
	  snprintf(sbuf, SZ_LINE, DFMT2, xpix, ypix);
	  _FiltLexCat(sbuf);
	}
      }
      /* angle arguments are just passed along, with updated crot */
      else if( ANGARG ){
	dval = strtod(tbuf,NULL);
        if( USEWCS ) dval += crot;
	 if( IMFLIP ) dval = -dval;
	snprintf(sbuf, SZ_LINE, DFMT1, dval);
	_FiltLexCat(sbuf);
      }
      /* panda numeric args are just passed along */
      else if( NUMARG ){
        dval = strtod(tbuf,NULL);
        snprintf(sbuf, SZ_LINE, DFMT1, dval);
        _FiltLexCat(sbuf);
      }
      /* convert size args, which may or may not be in pairs */
      else{
        if( SAVEANG ){
	  dval = strtod(tbuf,NULL);
          if( USEWCS ) dval += crot;
	   if( IMFLIP ) dval = -dval;
	  snprintf(saveang, SZ_LINE, DFMT1, dval);
        }
	/* arg 1 is associated with ra, arg2 with dec */
	if( XARG ){
	  xpos = ABS(strtod(tbuf,NULL));
	  ypos = 0.0;
	  switch(lcx){
	  case LCX_IMAGE:
            xpix = xpos;
            break;
	  case LCX_PHYS:
	    ft_phy2img_size(filt->fhd, xpos, ypos, &xpix, &ypix);
	    break;
	  case LCX_AMP:
	    ft_amp2phy_size(filt->fhd, xpos,ypos, &dval,&dval2);
	    ft_phy2img_size(filt->fhd, dval,dval2, &xpix,&ypix);
	    break;
	  case LCX_DET:
	    ft_det2phy_size(filt->fhd, xpos,ypos, &dval,&dval2);
	    ft_phy2img_size(filt->fhd, dval,dval2, &xpix,&ypix);
	    break;
	  }
	  snprintf(sbuf, SZ_LINE, DFMT1, xpix);
          _FiltLexArgSave(xpix);
	}
	else{
	  xpos = 0.0;
	  ypos = ABS(strtod(tbuf,NULL));
	  switch(lcx){
	  case LCX_IMAGE:
            ypix = ypos;
            break;
	  case LCX_PHYS:
	    ft_phy2img_size(filt->fhd, xpos, ypos, &xpix, &ypix);
	    break;
	  case LCX_AMP:
	    ft_amp2phy_size(filt->fhd, xpos,ypos, &dval,&dval2);
	    ft_phy2img_size(filt->fhd, dval,dval2, &xpix,&ypix);
	    break;
	  case LCX_DET:
	    ft_det2phy_size(filt->fhd, xpos,ypos, &dval,&dval2);
	    ft_phy2img_size(filt->fhd, dval,dval2, &xpix,&ypix);
	    break;
	  }
	  snprintf(sbuf, SZ_LINE, DFMT1, ypix);
          _FiltLexArgSave(ypix);
	}
	_FiltLexCat(sbuf);
      }
    }
  }
  /* not lcx -- angle arguments are just passed along with updated crot */
  else if( ANGARG ){
    dval = strtod(tbuf,NULL);
    if( USEWCS ) dval += crot;
    if( IMFLIP ) dval = -dval;
    snprintf(sbuf, SZ_LINE, DFMT1, dval);
    _FiltLexCat(sbuf);
  }
  /* panda numeric args are just passed along */
  else if( NUMARG ){
    dval = strtod(tbuf,NULL);
    snprintf(sbuf, SZ_LINE, DFMT1, dval);
    _FiltLexCat(sbuf);
  }
  /* not lcx -- everything else is assumed to be in units of "degrees"
     in the default system. add 'd' and put back for reparsing */
  else{
    int i;
    char *yycopy = xstrdup(tbuf);
    unput('d');
    for(i=yyleng-1; i>=0; --i)
      unput(yycopy[i]);
    xfree(yycopy);
    narg--;
  }
}

#ifdef YY_USE_PROTOS
static int
_FiltIncMask(FilterMask masks, int maxmask, int nmask)
#else
static int _FiltIncMask(masks, maxmask, nmask)
  FilterMask masks;
  int maxmask;
  int nmask;
#endif
{
  int omax;
  nmask++;
  if( nmask >= maxmask ){
    omax = maxmask;
    maxmask += MASKINC;
    masks = (FilterMask)xrealloc(masks, maxmask*sizeof(FilterMaskRec));
    memset(masks+omax, 0, (maxmask-omax)*sizeof(FilterMaskRec));
  }
  return nmask;
}

#ifdef YY_USE_PROTOS
static int
_FiltFitsMask(char *filename, FilterMask *rmasks, FITSHead *rhead, int *nreg)
#else
static int _FiltFitsMask(filename, rmasks, rhead, nreg)
  char *filename;
  FilterMask *rmasks;
  FITSHead *rhead;
  int *nreg;
#endif
{
  short *dptr;
  short *data=NULL;
  int x, y;
  int maxreg=-1;	
  int maxmask;			/* max masks allocated thus far */
  int nmask=0;			/* number of mask segments */
  FilterMask masks=NULL;	/* array valid region masks for one row */
  FITSHead  head=NULL;
  
  /* read fits image */
  if( !ft_simpleimageread(filename, &head, (void *)&data, NULL, 16) ){
    return(-1);
  }
  if( !head->image ){
    if( data ) xfree(data);
    if( head ) ft_headfree(head, 1);
    return(-2);
  }
  if( !ft_naxes(head) || !ft_naxis(head, 1) || !ft_naxis(head, 2) ){
    if( data ) xfree(data);
    if( head ) ft_headfree(head, 1);
    return(-3);
  }

  /* allocate an array of masks, which will be returned to caller */
  maxmask = MASKINC;
  masks = (FilterMask)xcalloc(maxmask, sizeof(FilterMaskRec));
  /* seed the first region mask value */
  masks[nmask].region = 0;
  /* loop through y rows */
  for(y=1; y<=ft_naxis(head, 2); y++){
    dptr = data + ((y-1) * ft_naxis(head, 1));
    /* to start this line, we make a seed mask with no region */
    if( masks[nmask].region ){
      nmask = _FiltIncMask(masks, maxmask, nmask);
      masks[nmask].region = 0;
    }
    /* process each pixel in the row */
    for(x=1; x<=ft_naxis(head, 1); x++, dptr++){
      /* we do not allow negative values */
      if( *dptr < 0 ){
        if( data ) xfree(data);
        if( head )  ft_headfree(head, 1);
        if( masks ) xfree(masks);
        return(-4);
      }
      /* set max region as needed */
      if( *dptr > maxreg )
        maxreg = *dptr;
      /* look for a change in the mask */
      if( *dptr != masks[nmask].region ){
	/* if previous was non-zero region, finish it and bump to next */
	if( masks[nmask].region ){
	  masks[nmask].xstop = x - 1;
	  nmask = _FiltIncMask(masks, maxmask, nmask);
	}
	masks[nmask].y = y;
	masks[nmask].region = *dptr;
	masks[nmask].xstart = x;
      }
    }
    /* finish last non-zero segment, inc number of mask segs */
    if( masks[nmask].region ){
      masks[nmask].xstop = x;
      nmask = _FiltIncMask(masks, maxmask, nmask);
    }
  }

  /* free up data space */
  if( data ) xfree(data);
  /* allocate just enough mask space */
  masks = (FilterMask)xrealloc(masks, nmask*sizeof(FilterMaskRec));
  if( rmasks )
    *rmasks = masks;
  else
    xfree(masks);
  if( rhead )
    *rhead = head;
  else
    ft_headfree(head, 1);
  if( nreg )
    *nreg = maxreg;

  return(nmask);
}

/*
 *
 * Semi-public Routines 
 *
 *
 */

/*
 *
 * _FilterString -- return output filter from lexer
 *
 */
#ifdef YY_USE_PROTOS
char *
_FilterString(void)
#else
char *_FilterString()
#endif
{
  if( filtlen <= 0 )
    _FiltLexMake();
  return(filter);
}

#ifdef YY_USE_PROTOS
int
FilterRoutineCount(void)
#else
int FilterRoutineCount()
#endif
{
  return(nroutine);
}

#ifdef YY_USE_PROTOS
int
FilterShapeCount(void)
#else
int FilterShapeCount()
#endif
{
  return(nshape);
}

#ifdef YY_USE_PROTOS
int
FilterRegionCount(int type)
#else
int FilterRegionCount(type)
	int type;
#endif
{
  int i, j;

  /* handle fits image masks specially */
  if( nmask ){
    if( type & TOK_IREG )
      return(nregion);
    else
      return(0);    
  }

  /* normal regions */
  for(i=0, j=0; i<nfiltseg; i++){
    if( filtseg[i]->type & type ){
      j += filtseg[i]->nregion;
    }
  }
  return(j);
}

#ifdef YY_USE_PROTOS
char *
FilterRadAng(void)
#else
char *FilterRadAng()
#endif
{
  return(radang);
}

#ifdef YY_USE_PROTOS
int
FilterParseError(void)
#else
int FilterParseError()
#endif
{
  return(parse_error);
}

#ifdef YY_USE_PROTOS
int
FilterTlInfo(double *tlmins, double *binsizs, int *tltyps)
#else
int FilterTlInfo(tlmins, binsizs, tltyps)
	double *tlmins;
	double *binsizs;
	int *tltyps;
#endif
{
  tlmins[0] = tlmin[0];
  tlmins[1] = tlmin[1];
  binsizs[0] = binsiz[0];
  binsizs[1] = binsiz[1];
  tltyps[0] = tltyp[0];
  tltyps[1] = tltyp[1];
  return 1;
}

#ifdef YY_USE_PROTOS
void
FiltInitParser(void)
#else
void FiltInitParser()
#endif
{
  static int parser = 0;
  /* make sure we free'd up all space from last time */
  _FiltLexEnd();
  /* set up some convenience variables */
  filt = FilterDefault();
/*
  if( parser )
    yyrestart(NULL);
*/
  BEGIN INITIAL;
  parser++;
  laststart=INITIAL;
}

#ifdef YY_USE_PROTOS
void
FiltScanString(char *s)
#else
void FiltScanString(s)
     char *s;
#endif
{
  int i;
  char *t;
  /* make sure there is an explicit delim at end so we are done before
     lex finds EOF -- otherwise panda shapes don't get processed */
  i = strlen(s);
  t = xmalloc(i+2);
  strcpy(t, s);
  if( (t[i-1] != ';') && (t[i-1] != '\n') )
    strcat(t, "\n");
  yy_scan_string(t);
  if( t ) xfree(t);
}

/* yyerror -- renamed to _filterror because flex -P does not change this */
#ifdef YY_USE_PROTOS
int
_filterror(char *msg)
#else
int _filterror(msg)
     char *msg;
#endif
{
  if( *yytext )
    gerror(stderr,  "%s while parsing filter at: %s\n",
           msg ? msg : "filterr", yytext);
  else
    gerror(stderr,  "%s\n", msg ? msg : "filterr");
  YY_FLUSH_BUFFER;
  parse_error = 1;  
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
