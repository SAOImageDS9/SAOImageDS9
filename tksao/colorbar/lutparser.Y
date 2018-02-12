// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

%pure-parser
%parse-param {LUTColorMap* cm}
%lex-param {rgbFlexLexer* ll}
%parse-param {rgbFlexLexer* ll}

%{
#define YYDEBUG 1

#define DISCARD_(x) {yyclearin; rgbDiscard(x);}

#include <string.h>
#include <iostream>

#include "lut.h"

#undef yyFlexLexer
#define yyFlexLexer rgbFlexLexer
#include <FlexLexer.h>

extern int rgblex(void*, rgbFlexLexer*);
extern void rgberror(LUTColorMap*, rgbFlexLexer*, const char*);
extern void rgbDiscard(int);
%}

%union {
#define LUTBUFSIZE 4096
  char str[LUTBUFSIZE];
  int integer;
  float real;
}

%type <real> numeric

%token <real> REAL
%token <integer> INT
%token <str> STRING

%token EOF_

%token DEBUG_
%token FALSE_
%token NO_
%token OFF_
%token ON_
%token TRUE_
%token YES_

%%

commands: commands command terminator
	| command terminator
	;

command : DEBUG_ debug
	| numeric numeric numeric {cm->newRGBColor($1,$2,$3);}
	| '#' {DISCARD_(1)} STRING
	;

terminator: '\n'
	| ';'
	| EOF_ {YYACCEPT;}
	;

numeric	: REAL {$$=$1;}
	| INT {$$=$1;}
	;

debug	: ON_ {yydebug=1;}
	| OFF_ {yydebug=0;}
	;
%%
