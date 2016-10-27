%option caseless
%array

%{
#include <ctype.h>
#include <funtoolsP.h>
#include <macro.h>
#include <calc.h>
#include <tabcalc_c.h>

/* define the types of event records we have to handle */
#define REC_CUR		1
#define REC_PREV	2
#define REC_NEXT	4

/* misc */
#define MAX_INCLUDE_DEPTH  100
#define SEGINC            1024
#define MAXCODE 	     4

/* symbols for each column we encounter */
typedef struct calccoltab {
  struct calccoltab *next;
  char *name;
  char *sname;
  char *cname;
  char *tdim;
  int type;
  int n;
  double tlmin;
  double tlmax;
  double binsiz;
  double tscale;
  double tzero;
  int scaled;
  int exists;
  int settype;
} *CalcCols, CalcColRec;

static YY_BUFFER_STATE include_stack[MAX_INCLUDE_DEPTH];
static int include_stack_ptr = 0;
static Fun ifun;
static CalcCols columns;
static int laststart;

static char *prog;
static char *command;
static char *autodeclare;
static char *mbuf;
static int mlen;
static int n;
static int var;
static int rectype;
static int args;
static int doreplace=0;

static char *code[MAXCODE];
static char *expr;
static char **strptr=&expr;
static int ncode[MAXCODE];
static int nexpr;
static int xnl;
static int *lenptr=&nexpr;

static void setn _PRx((int newn));
static char *_CalcMake _PRx((void));
static int _CalcColProc _PRx((char *s, int expl));
static int _CalcColName _PRx((char *sname));
static CalcCols _CalcColNew _PRx((Fun fun, 
                                  char *name, char *sname, char *cname, 
			          int type, int n, 
				  double tlmin, double tlmax, double binsiz,
				  double tscale, double tzero, int scaled,
				  int exists, int settype));
static CalcCols _CalcColLookup _PRx((char *cname));

int _calcerror _PRx((char *msg));
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
NUM	({INT}|{FLOAT})

SNAME	(cur|prev|next)
NAME	[A-Za-z~_][0-9A-Za-z~_]*(\[[0-9]+\])?
TYPE    (\[{INT}\])?(:{NUM}?[a-z]?){1,4}
COL	{SNAME}->{NAME}{TYPE}?
ECOL    explicit
FILE	@[0-9A-Za-z~_/\-\.]*(\[.*\])?
VAR     [ \t]*(char|short|int|float|double)
INCL    ^#[\t ]*include[ \t]*(\".*\"|<.*>)
DEF     ^#[\t ]*define[ \t]+.*
XCOM	#
BCOM    "/*"
ECOM    "*/"

%x INCLUDE
%x VAR
%x COM
%x XCOM
%x ECOL
%%

global		{ setn(0);  var = 0; }
local		{ setn(1);  var = 0; }
before		{ setn(2);  var = 0; }
after		{ setn(3);  var = 0; }
end		{ setn(-1); var = 0; }

{FILE}		{
		char *s;
		if ( include_stack_ptr >= MAX_INCLUDE_DEPTH )
		  _calcerror("include files are nested too deeply");
		if( !(s = (char *)FileContents(yytext+1, 0, NULL)) )
		  _calcerror("can't access include file");
		else {
		  include_stack[include_stack_ptr++] = YY_CURRENT_BUFFER;
		  BEGIN INITIAL; yy_scan_string(s); BEGIN INITIAL;
		  if( s ) xfree(s);
		}
}

{VAR}		{ 
		if( var ){ BEGIN VAR; setn(1); }
		_CalcCat(yytext, strptr, lenptr);
}
<VAR>;		{
		_CalcCat(yytext, strptr, lenptr);
		_CalcCat("\n", strptr, lenptr);
		if( var ){ BEGIN INITIAL; setn(-1); }
}
<VAR>.		{ _CalcCat(yytext, strptr, lenptr); }

{INCL}          { _CalcCat(yytext, strptr, lenptr); }

{DEF}           { _CalcCat(yytext, strptr, lenptr); }

^[ \t]*{XCOM}   { laststart = YY_START; xnl=0; BEGIN XCOM; }
{XCOM}          { laststart = YY_START; xnl=1; BEGIN XCOM; }
<XCOM>\n        { BEGIN laststart; if( xnl ) unput('\n'); }
<XCOM>.         { /* ignore comments up to eol */ ; }

{BCOM}		{
	         _CalcCat(yytext, strptr, lenptr);
		 laststart = YY_START; BEGIN COM;
}
<COM>{ECOM}	{ _CalcCat(yytext, strptr, lenptr); BEGIN laststart; }
<COM>\n	        { _CalcCat(yytext, strptr, lenptr); }
<COM>.	        { _CalcCat(yytext, strptr, lenptr); }

{COL}		{ _CalcColProc(yytext, 0); var=0;}

{ECOL}		{  laststart = YY_START; BEGIN ECOL; }
<ECOL>{NAME}	{ _CalcColProc(yytext, 1); var=0; }
<ECOL>[, \t]	{ ; }
<ECOL>\n	{ BEGIN laststart; }

\n		{ _CalcCat(yytext, strptr, lenptr);}

[ \t]*		{ _CalcCat(yytext, strptr, lenptr);}

.		{ _CalcCat(yytext, strptr, lenptr); var=0;}

<<EOF>>		{
		if ( --include_stack_ptr < 0 ){
		  prog = _CalcMake();
		  yy_delete_buffer( YY_CURRENT_BUFFER );
                  yyterminate();
		} else {
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

/* setn -- set pointer to where expression is stored */
#ifdef YY_USE_PROTOS
static void setn(int newn)
#else
static void setn(newn)
    int newn;
#endif
{
  if( newn >=0 ){
    n = newn;
    strptr = &code[n]; lenptr = &ncode[n];
  }
  else{
    strptr = &expr;    lenptr = &nexpr;
  }
}

/*
 *
 * _CalcDatatype -- return C data type as a string
 *
 */
#ifdef YY_USE_PROTOS
static char *
_CalcDatatype(int type)
#else
static char *_CalcDatatype(type)
	int type;
#endif
{
    switch ( type ) {
     case 'A':		return "char";
     case 'X':		return "char";
     case 'B':		return "unsigned char";
     case 'I':		return "short";
     case 'U':		return "unsigned short";
     case 'J':		return "int";
     case 'K':		return "long long";
     case 'V':		return "unsigned int";
     case 'L':		return "char";
     case 'E':		return "float";
     case 'D':		return "double";
    }
    _calcerror("unknown/illegal data type for new column");
    return "???";
}

/*
 *
 * _CalcColName -- see if sname is a recognized column name
 *
 */
#ifdef YY_USE_PROTOS
static int
_CalcColName(char *sname)
#else
static int _CalcColName(sname)
     char *sname;
#endif
{
  if( !strcasecmp(sname, "prev") ){
    strcpy(sname, "prev");
    rectype |= REC_PREV;
    return REC_PREV;
  }
  if( !strcasecmp(sname, "cur") ){
    strcpy(sname, "cur");
    rectype |= REC_CUR;
    return REC_CUR;
  }
  if( !strcasecmp(sname, "next") ){
    strcpy(sname, "next");
    rectype |= REC_NEXT;
    return REC_NEXT;
  }
  else{
    return 0;
  }
}

/*
 *
 * _CalcCB -- macro expansion callback
 *
 */
#ifdef YY_USE_PROTOS
static char *
_CalcCB(char *name, void *client_data)
#else
static char *_CalcCB(name, client_data)
	char *name;
	void *client_data;
#endif
{
  CalcCols cur;  
  char tbuf[SZ_LINE];
  char tbuf2[SZ_LINE*2];
  char tbuf3[SZ_LINE];
  int i, got, ip;
  
  /* start at beginning of macro buffer */
  /* allocate the macro buffer */
  if( mbuf ) xfree(mbuf);
  mbuf = NULL;
  mlen = SZ_LINE;

  if( !strcmp(name, "MEMBERS") ){
    if( !columns ){
      _CalcCat("int dummy;\n", &mbuf, &mlen);
      return mbuf;
    }    
    for(cur=columns; cur!=NULL; cur=cur->next){
      snprintf(tbuf, SZ_LINE, "%s %s", _CalcDatatype(cur->type), cur->cname);
      _CalcCat(tbuf, &mbuf, &mlen);
      if( cur->n > 1 ){
        /* if there is no tdim, just make it a simple array */
        /* (also, do the simple thing for bit-fields) */
        if( (cur->tdim == NULL) || (cur->type == 'X') ){
          switch(cur->type){
          case 'X':
            i = (cur->n+7)/8;
            break;
          default:
            i = cur->n;
            break;
          }
          snprintf(tbuf, SZ_LINE, "[%d]", i);
        }
        /* tdim exists, so use it to declare a multidimensional array */
        else{
          newdtable(",()");
          /* I hear tdim is in Fortran order, so reverse it for C order */
          for(*tbuf = '\0', ip=0, got=0; word(cur->tdim, tbuf3, &ip); got++){
            snprintf(tbuf2, SZ_LINE, "[%s]", tbuf3);
            if( *tbuf )
              strcat(tbuf2, tbuf);
            strcpy(tbuf, tbuf2);
          }          
          freedtable();
          /* but if we got nothing out of it, go back to simplicity */
          if( !got )
            snprintf(tbuf, SZ_LINE, "[%d]", cur->n);
        }
        _CalcCat(tbuf, &mbuf, &mlen);
      }
      _CalcCat(";", &mbuf, &mlen);
      if( cur->next )
        _CalcCat("\n", &mbuf, &mlen);
    }
    return mbuf;
  }
  else if( !strcmp(name, "SELECT") ){
    if( !columns ){
      return "";
    }    
    for(cur=columns; cur!=NULL; cur=cur->next){
      *tbuf2 = '\0';
      if( (cur->tlmin != 0.0) || (cur->tlmax != 0.0) ){
        snprintf(tbuf2, SZ_LINE, "%f:%f", cur->tlmin, cur->tlmax);
        if( cur->binsiz != 1.0 ){
	  snprintf(tbuf3, SZ_LINE, ":%f", cur->binsiz);
	  strncat(tbuf2, tbuf3, SZ_LINE);
	}
        if( (cur->tscale != 1.0) || (cur->tzero != 0.0) ){
	  snprintf(tbuf3, SZ_LINE, ";%f", cur->tscale);
	  strncat(tbuf2, tbuf3, SZ_LINE);
	  snprintf(tbuf3, SZ_LINE, ":%f", cur->tzero);
	  strncat(tbuf2, tbuf3, SZ_LINE);
	}
      }
      if( *tbuf2 ){
        snprintf(tbuf, SZ_LINE, "\"%s\", \"%d%c:%s\", ",
		       cur->cname, cur->n, cur->type, tbuf2);
      }
      else{
        snprintf(tbuf, SZ_LINE, "\"%s\", \"%d%c\", ",
		       cur->cname, cur->n, cur->type);
      }
      _CalcCat(tbuf, &mbuf, &mlen);
      if( cur->exists )
        _CalcCat("\"rw\", ", &mbuf, &mlen);
      else
        _CalcCat("\"w\", ", &mbuf, &mlen);
      snprintf(tbuf, SZ_LINE, "FUN_OFFSET(Row, %s),", cur->cname);
      _CalcCat(tbuf, &mbuf, &mlen);
      if( cur->next )
        _CalcCat("\n", &mbuf, &mlen);
    }
    return mbuf;
  }
  else if( !strcmp(name, "RECTYPE") ){
    snprintf(tbuf, SZ_LINE, "%d", rectype);
    _CalcCat(tbuf, &mbuf, &mlen);
    return mbuf;
  }
  else if( !strcmp(name, "EXPR") ){
    if( expr && *expr )
      return(expr);
    else
      return "";
  }
  else if( !strcmp(name, "COMMAND") ){
    if( command && *command )
      return(command);
    else
      return "<build command not available>";
  }
  else if( !strcmp(name, "ARGS") ){
    if( args == 1 )
      return "1";
    else
      return "2";
  }
  else if( !strcmp(name, "AUTO") ){
    if( autodeclare && *autodeclare )
      return autodeclare;
    else
      return "";
  }
  else if( !strcmp(name, "GLOBAL") ){
    if( code[0] && *code[0] )
      return(code[0]);
    else
      return "";
  }
  else if( !strcmp(name, "LOCAL") ){
    if( code[1] && *code[1] )
      return(code[1]);
    else
      return "";
  }
  else if( !strcmp(name, "BEFORE") ){
    if( code[2] && *code[2] )
      return(code[2]);
    else
      return "";
  }
  else if( !strcmp(name, "AFTER") ){
    if( code[3] && *code[3] )
      return(code[3]);
    else
      return "";
  }
  else if( !strcmp(name, "MERGE") ){
    if( doreplace )
      strncpy(tbuf, "replace", SZ_LINE);
    else
      strncpy(tbuf, "update", SZ_LINE);
    _CalcCat(tbuf, &mbuf, &mlen);
    return mbuf;
  }
  else{
    _CalcCat("$", &mbuf, &mlen);
    _CalcCat(name, &mbuf, &mlen);
    return mbuf;
  }
}

/*
 *
 * _CalcMake -- create the string containing the program by macro expansion
 *
 */
#ifdef YY_USE_PROTOS
static char *
_CalcMake(void)
#else
static char *_CalcMake()
#endif
{
  char *s;

  /* make sure we have something */
  if( !expr || !*expr )
    expr = xstrdup(";");
  s = xstrdup(expr);
  nowhite(s, expr);
  if( s ) xfree(s);
  /* add final ';' is necessary (but not if there is any compund statement) */
  if( !strchr(expr,';') && !strchr(expr,'{') )
    _CalcCat(";", &expr, &nexpr);  
  /* expand program body to add specifics of the expression */
  s = ExpandMacro(TABCALC_C, NULL, NULL, 0, _CalcCB, NULL);
  return s;
}

/* look up a column entry, add if not present */
#ifdef YY_USE_PROTOS
CalcCols
_CalcColLookup(char *cname)
#else
CalcCols
_CalcColLookup(cname)
	char *cname;
#endif
{
  CalcCols cur;  
  for(cur=columns; cur!=NULL; cur=cur->next){
    if( !strcasecmp(cname, cur->cname) )
      return cur;
  }
  return NULL;
}

/* look up a symbol table entry, add if not present */
#ifdef YY_USE_PROTOS
CalcCols
_CalcColNew(Fun fun, char *name, char *sname, char *cname, int type, int n,
            double tlmin, double tlmax, double binsiz, 
	    double tscale, double tzero, int scaled,
	    int exists, int settype)
#else
CalcCols
_CalcColNew(fun, name, sname,
            cname, type, n, tlmin, tlmax, binsiz, 
	    tscale, tzero, scaled,
	    exists, settype)
        Fun fun;
	char *name, *sname, *cname;
	int type, n;
        double tlmin, tlmax, binsiz;
	double tscale, tzero;
	int scaled, exists, settype;
#endif
{
  CalcCols sym, cur;  
  int got;
  int enter=1;

  if( (sym=_CalcColLookup(cname)) ){
    if( !settype ) return sym;
    enter=0;
  }
  else{
    /* allocate a new symbol record */
    if( !(sym = (CalcCols)xcalloc(1, sizeof(CalcColRec))) )
      return NULL;
  }

  /* fill in the blanks */
  if( sym->name ) xfree(sym->name);
  sym->name = xstrdup(name);
  if( sym->sname ) xfree(sym->sname);
  sym->sname = xstrdup(sname);
  if( sym->cname ) xfree(sym->cname);
  sym->cname = xstrdup(cname);
  sym->type = type;
  sym->n = n;
  sym->tlmin = tlmin;
  sym->tlmax = tlmax;
  sym->binsiz = binsiz;
  sym->tscale = tscale;
  sym->tzero = tzero;
  sym->scaled = scaled;
  sym->exists = exists;
  sym->settype = settype;

  /* get tdim value, if there is one */
  if( sym->exists && (sym->n>1) )
    sym->tdim = FunParamGets(fun, "TDIM", exists, NULL, &got);

  /* add to list, maintaining order */
  if( enter ){
    if( !columns ){
      columns = sym;
    }
    else{
      for(cur=columns; cur->next!=NULL; cur=cur->next)
        ;
      cur->next = sym;
    }
  }
  return sym;
}

/* process a column */
#ifdef YY_USE_PROTOS
static int
_CalcColProc(char *s, int expl)
#else
static int _CalcColProc(s, expl)
     char *s;
     int expl;
#endif
{
  char *e;
  char *t;
  char name[SZ_LINE];
  char sname[SZ_LINE];
  char cname[SZ_LINE];
  char aname[SZ_LINE];
  char fname[SZ_LINE];
  int ptype;
  int poff;
  int exists;
  int dims;
  int settype=0;
  int type=0;
  int n=0;
  int scaled=0;
  double tlmin=0.0, tlmax=0.0, binsiz=1.0;  
  double tscale=1.0, tzero=0.0;

  /* save expression */
  e = s;

  /* gather struct name */
  for(t=sname; *s && (*s != '-');)
    *t++ = *s++;
  *t = '\0';
  /* skip past "->" */
  if( *s && (*s == '-') ) s += 2;

  /* if this is not a special name, just append it and exit */
  if( !_CalcColName(sname) ){
    if( !expl ){
      _CalcCat(e, &expr, &nexpr);
      return 1;
    }
  }

  /* gather column name */
  for(t=cname; *s && (*s != '[') && (*s != ':');)
    *t++ = *s++;
  *t = '\0';

  /* explicit columns don't have the prefix */
  if( expl && *sname && !*cname ){
    strncpy(cname, sname, SZ_LINE);
    strncpy(sname, "cur", SZ_LINE);
  }

  /* gather array part */
  if( *s && (*s == '[') ){
    for(t=aname; *s && (*s != ':');)
      *t++ = *s++;
    *t = '\0';
  }
  else
    *aname = '\0';
  if( *aname )
    snprintf(fname, SZ_LINE, "%s->%s%s", sname, cname, aname);
  else
    snprintf(fname, SZ_LINE, "%s->%s", sname, cname);

  /* the expression name is the combination of sname (which we will set to
     a struct we know about) and cname (which is a struct member name) */
  snprintf(name, SZ_LINE, "%s->%s", sname, cname);

  /* see if this column exists or if its new */
  exists = FunColumnLookup(ifun, cname, 0, NULL, &type, NULL, NULL, &n, NULL);

  /* gather up specifier info */
  for(; *s; s++){
    if( *s == ':' ){
      _FunColumnType(s+1, &type, &n, &tlmin, &tlmax, &binsiz, &dims,
			  &tscale, &tzero, &scaled, &ptype, &poff);
      settype = 1;
      break;
    }
  }
  if( !exists && !settype && !_CalcColLookup(cname) )
    _calcerror("new column requires a type");
  if( exists && settype )
    doreplace=1;

  /* add this column to the list */
  if(_CalcColNew(ifun, name, sname, cname,
                 type, n, tlmin, tlmax, binsiz, 
		 tscale, tzero, scaled,
		 exists, settype)){
    if( !expl ) _CalcCat(fname, &expr, &nexpr);
    return 1;
  }
  else{
    return _calcerror("could not enter new funcalc column");
  }  
}

/*
 *
 * Semi-public Routines 
 *
 *
 */

/*
 *
 * _CalcCat -- add a string to the filter string buffer
 *
 */
#ifdef YY_USE_PROTOS
void
_CalcCat(char *str, char **ostr, int *olen)
#else
void _CalcCat(str, ostr, olen)
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

#ifdef YY_USE_PROTOS
char *
FunCalcParse(char *iname, char *oname,
             char *cmd, char *ex, char *autod, int narg)
#else
char *FunCalcParse(iname, oname, cmd, ex, autod, narg)
    char *iname;
    char *oname;
    char *cmd;
    char *ex;
    char *autod;
    int narg;
#endif
{
  int i;

  /* initialize global variables */
  n = 0;
  rectype = REC_CUR;
  var = 1;
  args = narg;

  /* save command */
  if( command ) xfree(command);
  command = xstrdup(cmd);

  /* save autodeclare */
  if( autodeclare ) xfree(autodeclare);
  autodeclare = xstrdup(autod);

  /* open the input FITS file */
  if( !(ifun = FunOpen(iname, "rc", NULL)) )
    gerror(stderr, "can't FunOpen input file (or find extension): %s\n",
	   iname);

  /* parse expression */
  yy_scan_string(ex);
  yylex();

  /* done with input FITS file */
  FunClose(ifun);
  /* free up space */
  if( expr ){
    xfree(expr);
    expr = NULL;
  }
  nexpr = 0;
  for(i=0; i<MAXCODE; i++){
    if( code[i] ){
      xfree(code[i]);
      code[i] = NULL;
    }
    ncode[i] = 0;
  }
  if( mbuf ){
    xfree(mbuf);
    mbuf = NULL;
    mlen = 0;
  }
  /* return resulting program */
  return prog;
}

#ifdef YY_USE_PROTOS
int
_calcerror(char *msg)
#else
int _calcerror(msg)
     char *msg;
#endif
{
  if( *yytext )
    gerror(stderr,  "%s while processing '%s'\n",
           msg ? msg : "filterr", yytext);
  else
    gerror(stderr,  "%s\n", msg ? msg : "filterr");
  YY_FLUSH_BUFFER;
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
