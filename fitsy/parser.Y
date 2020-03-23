// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

%pure-parser
%parse-param {FitsFile* ff}
%lex-param {ffFlexLexer* ll}
%parse-param {ffFlexLexer* ll}

%{
#define YYDEBUG 1

#define GOTOFILT(x) {yyclearin; ffFilter(x);}
#define GOTOARR(x) {yyclearin; ffArray(x);}

#include "file.h"
#include "hpx.h"

#undef yyFlexLexer
#define yyFlexLexer ffFlexLexer
#include <FlexLexer.h>

extern int fflex(void*, ffFlexLexer*);
extern void fferror(FitsFile*, ffFlexLexer*, const char*);

char ff_filter[512];
extern void ffFilter(int);
extern void ffArray(int);

%}

%union {
  float real;
  int integer;
  char str[256];
  void* ptr;
}

%type <integer> endian

%token <integer> INT
%token <str> STRING

%token ARCH_
%token ARRAY_
%token BIG_
%token BIGENDIAN_
%token BIN_
%token BINKEY_
%token BINCOL_
%token BITPIX_
%token COL_
%token DIM_
%token DIMS_
%token ECLIPTIC_
%token ENDIAN_
%token EQUATORIAL_
%token GALACTIC_
%token KEY_
%token LAYOUT_
%token LITTLE_
%token LITTLEENDIAN_
%token NESTED_
%token NORTH_
%token ORDER_
%token QUAD_
%token RING_
%token SKIP_
%token SOUTH_
%token SYSTEM_
%token UNKNOWN_
%token XDIM_
%token YDIM_
%token ZDIM_

%%

 //start: {yydebug=1;} command

// assume any error is the start of a filter
command	: filename
	| filename ext
 	| filename ext sect
 	| filename sect
 	| filename '[' extb sectb ']'

	| filename ext bin
 	| filename ext bin sect
 	| filename ext sect bin
	| filename bin
	| filename bin sect
	| filename sect bin
 	| filename '[' extb binb ']'

	| filename ext hpxs
	| filename ext hpxs sect
	| filename ext sect hpxs
	| filename hpxs
	| filename hpxs sect
	| filename sect hpxs
	| filename '[' extb hpxs ']'

        | filename arrs
        | filename arrs sect
        | filename sect arrs
	| filename '[' ARRAY_ {GOTOARR(0)} '(' array ')' ']'

	| error {GOTOFILT(0)} STRING 
	  {ff->setValid(1);ff->setpFilter(ff_filter);}
	;

filename : /* empty */
        |  STRING {ff->setpName($1);}
	;

// we must do it this way so that a bare filter will be accepted
//ext	: '[' extb ']'
//      ;
//extb	: STRING {ff->setpExt($1);}
//	| INT {ff->setpIndex($1);}
//	;

ext	: '[' STRING ']' {ff->setpExt($2);}
        | '[' INT ']' {ff->setpIndex($2);}
        ;

extb	: STRING ',' {ff->setpExt($1);}
        | INT ',' {ff->setpIndex($1);}
	;

sect	: '[' sectb physical ']'

sectb	: rangex ',' rangey
        | rangex ',' rangey ',' block
        | rangex ',' rangey ',' rangez
        | rangex ',' rangey ',' block ',' rangez
        | rangex ',' block
        | rangexy
        | rangexy ',' block
        | rangexy ',' rangez
        | rangexy ',' block ',' rangez
	;

physical : /* empty */ {ff->setpcoord(0);}
        | 'p' {ff->setpcoord(1);}
        | 'P' {ff->setpcoord(1);}
        ;

rangex	: INT ':' INT 
	{
	  // this is not a mistake
	  // need to fool parser into processing "xy0:xy1,block"
	  ff->setpxmin($1); ff->setpxmax($3); ff->setpxvalid(1);
	  ff->setpymin($1); ff->setpymax($3); ff->setpyvalid(1);
	}
	| INT '@' INT 
	  {ff->setpxmin($3-$1/2); ff->setpxmax($3+$1/2); ff->setpxvalid(1);}
	| '*'
	{
	  // this is not a mistake
	  // need to fool parser into processing "*,block"
	  ff->setpxvalid(0); ff->setpyvalid(0);
	}
	;

rangey	: INT ':' INT
	  {ff->setpymin($1); ff->setpymax($3); ff->setpyvalid(1);}
	| INT '@' INT
	  {ff->setpymin($3-$1/2); ff->setpymax($3+$1/2); ff->setpyvalid(1);}
	| '*' {ff->setpyvalid(0);}
	;

rangexy : INT '@' INT '@' INT
	{
	  ff->setpxmin($3-$1/2); ff->setpxmax($3+$1/2); ff->setpxvalid(1);
	  ff->setpymin($5-$1/2); ff->setpymax($5+$1/2); ff->setpyvalid(1);
 	}
        ;

rangez	: INT ':' INT
	  {ff->setpzmin($1); ff->setpzmax($3); ff->setpzvalid(1);}
	| INT '@' INT
	  {ff->setpzmin($3-$1/2); ff->setpzmax($3+$1/2); ff->setpzvalid(1);}
	| '*' {ff->setpzvalid(0);}
	;

block   : INT {ff->setpblock($1); ff->setpbvalid(1);}
        ;

bin	: '[' binb ']'

binb	: binword '=' binkey
	| binword binkey
	;

binword	: BIN_
	| BINKEY_
	| BINCOL_
	| KEY_
	;

binkey	: '(' STRING ',' STRING ')' {ff->setpBinXY($2,$4);}
	| STRING ',' STRING {ff->setpBinXY($1,$3);}
	| '(' STRING ',' STRING ',' STRING ')' {ff->setpBinXYZ($2,$4,$6);}
	| STRING ',' STRING ',' STRING {ff->setpBinXYZ($1,$3,$5);}
	| '(' STRING ')' {ff->setpBinZ($2);}
	| STRING {ff->setpBinZ($1);}
	;

arrs    : '[' arrsb ']'
        ;

arrsb	: arrsb ',' arr
	| arr
	;

arr	: XDIM_ '=' INT {ff->setpWidth($3);}
	| YDIM_ '=' INT {ff->setpHeight($3);}
	| ZDIM_ '=' INT {ff->setpDepth($3);}
	| DIM_ '=' INT {ff->setpWidth($3);ff->setpHeight($3);}
	| DIMS_ '=' INT {ff->setpWidth($3);ff->setpHeight($3);}
	| BITPIX_ '=' INT {ff->setpBitpix($3);}
	| SKIP_ '=' INT {ff->setpSkip($3);}
        | ARCH_ '=' endian {ff->setpArch((FitsFile::ArchType)$3);} 
	| ENDIAN_ '=' endian {ff->setpArch((FitsFile::ArchType)$3);} 
	| endian {ff->setpArch((FitsFile::ArchType)$1);} 
	;

endian	: BIG_ {$$ = FitsFile::BIG;}
	| BIGENDIAN_ {$$ = FitsFile::BIG;}
	| LITTLE_ {$$ = FitsFile::LITTLE;}
	| LITTLEENDIAN_ {$$ = FitsFile::LITTLE;}
        ;

array	: atype adims askip aendian
	;

atype	: 'b' {ff->setpBitpix(8);}
	| 's' {ff->setpBitpix(16);}
	| 'u' {ff->setpBitpix(-16);}
	| 'i' {ff->setpBitpix(32);}
	| 'l' {ff->setpBitpix(64);}
	| 'r' {ff->setpBitpix(-32);}
	| 'f' {ff->setpBitpix(-32);}
	| 'd' {ff->setpBitpix(-64);}
	;

adims	: INT {ff->setpWidth($1);ff->setpHeight($1);}
	| INT '.' INT {ff->setpWidth($1);ff->setpHeight($3);}
	| INT '.' INT '.' INT 
	  {ff->setpWidth($1);ff->setpHeight($3);ff->setpDepth($5);}
	;

askip	: /* empty */
	| ':' INT {ff->setpSkip($2);}
	;

aendian	: /* empty */
	| 'l' {ff->setpArch(FitsFile::LITTLE);}
	| 'b' {ff->setpArch(FitsFile::BIG);}
	;

hpxs    : '[' hpxsb ']'
        ;

hpxsb	: hpxsb ',' hpx
	| hpx
	;

hpx	: SYSTEM_ '=' hpxSystem
	| ORDER_ '=' hpxOrder
	| LAYOUT_ '=' hpxLayout
	| COL_ '=' INT {ff->setpHPXColumn($3);}
	| QUAD_ '=' INT {ff->setpHPXQuad($3);}
	;

hpxSystem : EQUATORIAL_ {ff->setpHPXSystem(FitsHPX::EQU);}
	  | GALACTIC_ {ff->setpHPXSystem(FitsHPX::GAL);}
	  | ECLIPTIC_ {ff->setpHPXSystem(FitsHPX::ECL);}
	  | UNKNOWN_ {ff->setpHPXSystem(FitsHPX::UNKNOWN);}
	  ;

hpxOrder : RING_ {ff->setpHPXOrder(FitsHPX::RING);}
	 | NESTED_ {ff->setpHPXOrder(FitsHPX::NESTED);}
	 ;

hpxLayout : EQUATORIAL_ {ff->setpHPXLayout(FitsHPX::EQUATOR);}
	  | NORTH_ {ff->setpHPXLayout(FitsHPX::NORTH);}
	  | SOUTH_ {ff->setpHPXLayout(FitsHPX::SOUTH);}
	  ;

%%
