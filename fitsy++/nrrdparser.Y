// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

%pure-parser
%parse-param {FitsFile* nrrd}
%lex-param {nrrdFlexLexer* ll}
%parse-param {nrrdFlexLexer* ll}

%{
#define YYDEBUG 1

#define DISCARD_(x) {yyclearin; nrrdDiscard(x);}

#include "file.h"

#undef yyFlexLexer
#define yyFlexLexer nrrdFlexLexer
#include <FlexLexer.h>

extern int nrrdlex(void*, nrrdFlexLexer*);
extern void nrrderror(FitsFile*, nrrdFlexLexer*, const char*);
extern void nrrdDiscard(int);

int dim;

%}

%union {
#define NRRDPARSERSIZE 256
  float real;
  int integer;
  char str[NRRDPARSERSIZE];
}

%type <real> numeric

 // Basic
%token EOF_
%token <integer> INT
%token <real> REAL
%token <str> STRING

%token DEBUG_
%token ON_
%token OFF_

 // Magic
%token NRRD0001_
%token NRRD0002_
%token NRRD0003_
%token NRRD0004_
%token NRRD0005_

 // 3. Headers
%token DATA_
%token FILE_

 // 4. Space
%token SPACE_
%token UNITS_
%token DIMENSIONS_
%token ORIGIN_
%token DIRECTIONS_

 // 5.1 Dimension
%token DIMENSION_

 // 5.2 Type
%token TYPE_
%token SIGNED_
%token UNSIGNED_
%token CHAR_
%token INT8_
%token INT8_T_
%token UCHAR_
%token UINT8_
%token UINT8_T_
%token SHORT_
%token INT_
%token INT16_
%token INT16_T_
%token USHORT_
%token UINT16_
%token UINT16_T_
%token INT32_
%token INT32_T_
%token UINT_
%token UINT32_
%token UINT32_T_
%token LONG_
%token LONGLONG_
%token INT64_
%token INT64_T_
%token ULONGLONG_
%token UINT64_
%token UINT64_T_
%token FLOAT_
%token DOUBLE_

 // 5.3 Block
%token BLOCK_
%token SIZE_
%token BLOCKSIZE_

 // 5.4 ENCODING
%token ENCODING_
%token RAW_
%token TXT_
%token TEXT_
%token ASCII_
%token HEX_
%token GZ_
%token GZIP_
%token BZ2_
%token BZIP2_

 // 5.5 Endian
%token ENDIAN_
%token BIG_
%token LITTLE_

 // 5.6 Content
%token CONTENT_

 // 5.7 MinMax
%token OLD_
%token MIN_
%token OLDMIN_
%token MAX_
%token OLDMAX_

 // 5.8 Skip
%token SKIP_
%token LINE_
%token LINESKIP_
%token BYTE_
%token BYTESKIP_

 // 5.9 Number
%token NUMBER_

 // 5.10 Sample
%token SAMPLE_
%token SAMPLEUNITS_

 // 6 Per Axis

%token SIZES_
%token SPACINGS_
%token THICKNESSES_
%token AXIS_
%token MINS_
%token AXISMINS_
%token MAXS_
%token AXISMAXS_
%token CENTERS_
%token CENTERINGS_
%token CELL_
%token NODE_
%token NONE_
%token LABELS_
%token KINDS_
%token DOMAINS_

%%

start   : {dim=0; nrrd->setpArch(FitsFile::BIG);} commands
        ;

commands: commands command terminator
	| command terminator
	;

command : /* empty */
	| DEBUG_ debug
        | magic
	| comment
	| DATA_ FILE_ ':' STRING
        | SPACE_ space
        | DIMENSION_ ':' INT
        | TYPE_ ':' type
        | block
        | ENCODING_ ':' encoding
        | ENDIAN_ ':' endian
        | CONTENT_ ':' {DISCARD_(1)} STRING
        | MIN_ ':' numeric
        | MAX_ ':' numeric
        | oldmin
        | oldmax
        | lineskip
        | byteskip
	| NUMBER_ ':' STRING
        | SIZES_ ':' sizes
	| SPACINGS_ ':' spacings
	| THICKNESSES_ ':' thicknesses
        | AXIS_ MINS_ ':' axismins
        | AXISMINS_ ':' axismins
        | AXIS_ MAXS_ ':' axismaxs
        | AXISMAXS_ ':' axismaxs
        | CENTERS_ ':' centers
        | CENTERINGS_ ':' centers
        | LABELS_ ':' labels
        | UNITS_ ':' units
        | KINDS_ ':' kinds
	;

magic   : NRRD0001_
        | NRRD0002_
        | NRRD0003_
        | NRRD0004_
        | NRRD0005_
        ;

comment : '#' {DISCARD_(1)} STRING
	;

terminator: '\n'
	| EOF_ {YYACCEPT;}
	;

numeric	: REAL {$$=$1;}
	| INT {$$=$1;}
	;

debug	: ON_ {yydebug=1;}
	| OFF_ {yydebug=0;}
	;

space   : ':' {DISCARD_(1)} STRING
        | DIMENSION_ ':' INT
        | UNITS_ ':' {DISCARD_(1)} STRING
        | ORIGIN_ ':' {DISCARD_(1)} STRING
        | DIRECTIONS_ ':' {DISCARD_(1)} STRING
        ;

type    : char {nrrd->setpBitpix(8);}
        | uchar {nrrd->setpBitpix(8);}
        | short {nrrd->setpBitpix(16);}
        | ushort {nrrd->setpBitpix(16);}
        | int {nrrd->setpBitpix(32);}
        | uint {nrrd->setpBitpix(32);}
        | long {nrrd->setpBitpix(64);}
        | ulong {nrrd->setpBitpix(64);}
        | FLOAT_ {nrrd->setpBitpix(-32);}
        | DOUBLE_ {nrrd->setpBitpix(-64);}
        | BLOCK_
        ;

char    : CHAR_
        | SIGNED_ CHAR_
        | INT8_
        | INT8_T_
        ;

uchar   : UCHAR_
        | UNSIGNED_ CHAR_
        | UINT8_
        | UINT8_T_
        ;

short   : SHORT_
        | SHORT_ INT_
        | SIGNED_ SHORT_
        | SIGNED_ SHORT_ INT_
        | INT16_
        | INT16_T_
        ;

ushort  : USHORT_
        | UNSIGNED_ SHORT_
        | UNSIGNED_ SHORT_ INT_
        | UINT16_
        | UINT16_T_
        ;

int     : INT_
        | SIGNED_ INT_
        | INT32_
        | INT32_T_
        ;

uint    : UINT_
        | UNSIGNED_ INT_
        | UINT32_
        | UINT32_T_
        ;

long    : LONGLONG_
        | LONG_ LONG_
        | LONG_ LONG_ INT_
        | SIGNED_ LONG_ LONG_
        | SIGNED_ LONG_ LONG_ INT_
        | INT64_
        | INT64_T_
        ;

ulong   : ULONGLONG_
        | UNSIGNED_ LONG_ LONG_
        | UNSIGNED_ LONG_ LONG_ INT_
        | UINT64_
        | UINT64_T_
        ;

block   : BLOCK_ SIZE_ ':' INT
        | BLOCKSIZE_ ':' INT
        ;

encoding : RAW_ {nrrd->setpEncoding(FitsFile::RAW);}
        | TXT_ {nrrd->setpEncoding(FitsFile::ASCII);}
        | TEXT_ {nrrd->setpEncoding(FitsFile::ASCII);}
        | ASCII_ {nrrd->setpEncoding(FitsFile::ASCII);}
        | HEX_ {nrrd->setpEncoding(FitsFile::HEX);}
        | GZ_ {nrrd->setpEncoding(FitsFile::GZIP);}
        | GZIP_ {nrrd->setpEncoding(FitsFile::GZIP);}
        | BZ2_ {nrrd->setpEncoding(FitsFile::BZ2);}
        | BZIP2_ {nrrd->setpEncoding(FitsFile::BZ2);}
        ;

endian  : BIG_ {nrrd->setpArch(FitsFile::BIG);}
        | LITTLE_ {nrrd->setpArch(FitsFile::LITTLE);}
        ;

oldmin  : OLD_ MIN_ ':' numeric
        | OLDMIN_ ':' numeric
        ;

oldmax  : OLD_ MAX_ ':' numeric
        | OLDMAX_ ':' numeric
        ;

lineskip : LINE_ SKIP_ ':' INT
        | LINESKIP_ ':' INT
        ;

byteskip : BYTE_ SKIP_ ':' INT
        | BYTESKIP_ ':' INT
        ;

sizes   : sizes size
        | size
        ;

size    : INT
        {
	  switch (dim) {
	  case 0:
	    nrrd->setpWidth($1);
	    break;
	  case 1:
	    nrrd->setpHeight($1);
	    break;
	  case 2:
	    nrrd->setpDepth($1);
	    break;
	  }
	  dim++;
	}
        ;

spacings : spacings numeric
        | numeric
        ;

thicknesses : thicknesses numeric
        | numeric
        ;

axismins : axismins numeric
        | numeric
        ;

axismaxs : axismaxs numeric
        | numeric
        ;

centers : centers center
        | center
        ;

center  : CELL_
        | NODE_
        | NONE_
        ;

labels  : labels STRING
        | STRING
        ;

units   : units STRING
        | STRING
        ;

kinds   : kinds STRING
        | STRING
        ;

%%
