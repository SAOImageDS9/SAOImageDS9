// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

%pure-parser
%parse-param {FitsFile* envi}
%lex-param {enviFlexLexer* ll}
%parse-param {enviFlexLexer* ll}

%{
#define YYDEBUG 1

#define DISCARD_(x) {yyclearin; enviDiscard(x);}

#include "file.h"

#undef yyFlexLexer
#define yyFlexLexer enviFlexLexer
#include <FlexLexer.h>

extern int envilex(void*, enviFlexLexer*);
extern void envierror(FitsFile*, enviFlexLexer*, const char*);
extern void enviDiscard(int);

static int numWave;
static float wave[MAXWAVES];

%}

%union {
#define ENVIPARSERSIZE 1024
  float real;
  int integer;
  char str[ENVIPARSERSIZE];
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

%token AVERAGE_
%token BAND_
%token BANDS_
%token BBL_
%token BIL_
%token BIP_
%token BSQ_
%token BYTE_
%token DATA_
%token DEFAULT_
%token DESCRIPTION_
%token ENVI_
%token FACTOR_
%token FRAME_
%token FILE_
%token FWHM_
%token GAIN_
%token HEADER_
%token INFO_
%token IGNORE_
%token INTERLEAVE_
%token LIMITS_
%token LINES_
%token MAJOR_
%token MAP_
%token MINOR_
%token NAMES_
%token OFFSET_
%token OFFSETS_
%token ORDER_
%token PIXEL_
%token PIXELS_
%token PLOT_
%token PROJECTION_
%token RANGE_
%token REFLECTANCE_
%token SAMPLES_
%token SCALE_
%token SCANNER_
%token SENSOR_
%token SIZE_
%token START_
%token STRETCH_
%token TITLES_
%token TYPE_
%token UNITS_
%token VALUE_
%token VALUES_
%token WAVELENGTH_

%%

 //start	: {yydebug=1;} commands
 start	: {envi->setpArch(FitsFile::BIG)} commands

commands: commands command terminator
	| command terminator
	;

command : /* empty */
	| DEBUG_ debug
	| comment
	| ENVI_
	| DESCRIPTION_ '=' liststr
	| SAMPLES_ '=' INT {envi->setpWidth($3);}
	| LINES_ '=' INT {envi->setpHeight($3);}
	| BANDS_ '=' INT {envi->setpDepth($3);}
        | HEADER_ OFFSET_ '=' INT {envi->setpSkip($4);}
        | MAJOR_ FRAME_ OFFSETS_ '=' listint
        | MINOR_ FRAME_ OFFSETS_ '=' listint
	| FILE_ TYPE_ '=' {DISCARD_(1)} STRING
	| DATA_ TYPE_ '=' bitpix
	| INTERLEAVE_ '=' encoding
	| SENSOR_ TYPE_ '=' {DISCARD_(1)} STRING
	| BYTE_ ORDER_ '=' endian
	| 'X' START_ '=' listint
	| 'Y' START_ '=' listint
	| MAP_ INFO_ '=' listmap
	| PROJECTION_ INFO_ '=' liststr
	| DEFAULT_ BANDS_ '=' listint
	| WAVELENGTH_ UNITS_ '=' STRING
	| REFLECTANCE_ SCALE_ FACTOR_ '=' numeric
	| 'Z' PLOT_ RANGE_ '=' listnum
	| 'Z' PLOT_ AVERAGE_ '=' listnum
	| 'Z' PLOT_ TITLES_ '=' liststr
	| DATA_ IGNORE_ VALUES_ '=' {DISCARD_(1)} STRING
	| PIXEL_ SIZE_ '=' listnum
	| BAND_ NAMES_ '=' liststr
	| WAVELENGTH_ '=' {numWave=0;} listwave
	| FWHM_ '=' liststr
	| BBL_ '=' liststr
	| DATA_ GAIN_ VALUES_ '=' listnum
	| DATA_ OFFSET_ VALUES_ '=' listnum
	| SCANNER_ LIMITS_ '(' PIXELS_ ')' '=' INT INT
	;

comment : ';' {DISCARD_(1)} STRING
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

bitpix  : INT
        {
	  switch($1) {
	  case 1:
	    {envi->setpBitpix(8);}
	    break;
	  case 2:
	    {envi->setpBitpix(16);}
	    break;
	  case 12:
	    {envi->setpBitpix(-16);}
	    break;
	  case 3:
	    {envi->setpBitpix(32);}
	    break;
	  case 14:
	    {envi->setpBitpix(64);}
	    break;
	  case 4:
	    {envi->setpBitpix(-32);}
	    break;
	  case 5:
	    {envi->setpBitpix(-64);}
	    break;
	  default:
	    break;
	  }
	}
        ;

encoding : BSQ_ {envi->setpEncoding(FitsFile::BSQ);}
        | BIP_ {envi->setpEncoding(FitsFile::BIP);}
        | BIL_ {envi->setpEncoding(FitsFile::BIL);}
        ;

endian  : INT
        {
	  switch($1) {
	  case 0:
	    {envi->setpArch(FitsFile::LITTLE);}
	    break;
	  case 1:
	    {envi->setpArch(FitsFile::BIG);}
	    break;
	  }
	}
        ;

liststr : '{' '}'
        | '{' strings '}'
        ;

strings : strings STRING
	| STRING
        ;

listnum : '{' numerics '}'
        ;

numerics: numerics ',' numeric
        | numeric
        ;

listint : '{' ints '}'
        ;

ints    : ints ',' INT
        | INT
        ;

listmap : '{' STRING ',' INT ',' INT ',' numeric ',' numeric ',' numeric ',' numeric ',' INT listmapopt '}'
        ;

listmapopt : /* empty */
        | ',' STRING ',' STRING
        | ',' STRING
        ;

listwave: '{' '}'
        {
	  envi->setpCRPIX3(1);
	  envi->setpCRVAL3(1);
	  envi->setpCDELT3(1);
	}
        | '{' aWaves '}'
        {
	  if (numWave>=2) {
	    envi->setpCRPIX3(1);
	    envi->setpCRVAL3(wave[0]);
	    envi->setpCDELT3((wave[numWave-1]-wave[0])/(numWave-1));
	  }
	  else {
	    envi->setpCRPIX3(1);
	    envi->setpCRVAL3(1);
	    envi->setpCDELT3(1);
	  }
	}
        ;

aWaves  : aWaves ',' aWave
        | aWaves ','
        | aWave
        ;

aWave   : numeric
        {
	  if (numWave < MAXWAVES)
	    wave[numWave++] = $1;
	}
        ;

%%
