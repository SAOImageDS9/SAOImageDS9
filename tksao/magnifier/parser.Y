// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

%pure-parser
%parse-param {Magnifier* mg}
%lex-param {mgFlexLexer* ll}
%parse-param {mgFlexLexer* ll}

%{
#define YYDEBUG 1

#include <stdlib.h>
#include "magnifier.h"

#undef yyFlexLexer
#define yyFlexLexer mgFlexLexer
#include <FlexLexer.h>

extern int mglex(void*, mgFlexLexer*);
extern void mgerror(Magnifier*, mgFlexLexer*, const char*);
%}

%union {
  float real;
  int integer;
  void* ptr;
  char str[1024];
}

%token <integer> INT
%token <ptr> POINTER

%token BBOX_
%token CLEAR_
%token DEBUG_
%token FALSE_
%token GET_
%token HEIGHT_
%token HIDE_
%token OFF_
%token ON_
%token N_
%token NO_
%token RESET_
%token SHOW_
%token TRUE_
%token UPDATE_
%token VERSION_
%token WIDTH_
%token Y_
%token YES_

%%

command : DEBUG_ debug
	| CLEAR_ {mg->updateCmd(0);}
	| GET_ get
	| HIDE_ {mg->hideCmd();}
	| RESET_ {mg->resetCmd();}
	| SHOW_ {mg->showCmd();}
	| UPDATE_ POINTER {mg->updateCmd($2);}
	| VERSION_ {mg->msg("Magnifier 1.0");}
	;

debug	: ON_ {yydebug=1;}
	| OFF_ {yydebug=0;}
	;

get	: BBOX_ {mg->getBBoxCmd();}
	| HEIGHT_ {mg->getHeightCmd();}
	| WIDTH_ {mg->getWidthCmd();}
	;

%%




