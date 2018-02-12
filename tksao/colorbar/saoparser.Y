// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

%pure-parser
%parse-param {SAOColorMap* cm}
%lex-param {liFlexLexer* ll}
%parse-param {liFlexLexer* ll}

%{
#define YYDEBUG 1

#define DISCARD_(x) {yyclearin; liDiscard(x);}

#include <string.h>
#include <iostream>

#include "sao.h"

#undef yyFlexLexer
#define yyFlexLexer liFlexLexer
#include <FlexLexer.h>

extern int lilex(void*, liFlexLexer*);
extern void lierror(SAOColorMap*, liFlexLexer*, const char*);
extern void liDiscard(int);
%}

%union {
#define SAOBUFSIZE 4096
  char str[SAOBUFSIZE];
  int integer;
  float real;
}

%type <real> numeric

%token <real> REAL
%token <integer> INT
%token <str> STRING

%token EOF_

%token BLUE_
%token DEBUG_
%token GAMMA_
%token GREEN_
%token FALSE_
%token NO_
%token OFF_
%token ON_
%token PSEUDOCOLOR_
%token RED_
%token TRUE_
%token YES_

%%

commands: commands command terminator
	| command terminator
	;

command : DEBUG_ debug
        | color
	| PSEUDOCOLOR_
	| '#' {DISCARD_(1)} STRING
	| lis
	;

color   : RED_ ':' gamma {cm->setChannel(SAOColorMap::RED);}
	| GREEN_ ':' gamma {cm->setChannel(SAOColorMap::GREEN);}
	| BLUE_ ':' gamma {cm->setChannel(SAOColorMap::BLUE);}
        ;

gamma   : /* empty */
        | GAMMA_ numeric
        ;

lis	: lis li
	| li
	;

li	: '(' numeric ',' numeric ')' {cm->newLIColor($2,$4);}
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
