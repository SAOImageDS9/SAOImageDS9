// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

%pure-parser
%parse-param {Panner* pn}
%lex-param {pnFlexLexer* ll}
%parse-param {pnFlexLexer* ll}

%{
#define YYDEBUG 1

#include <stdlib.h>
#include "panner.h"

#undef yyFlexLexer
#define yyFlexLexer pnFlexLexer
#include <FlexLexer.h>

extern int pnlex(void*, pnFlexLexer*);
extern void pnerror(Panner*, pnFlexLexer*, const char*);
%}

%union {
  float real;
  int integer;
  void* ptr;
  char str[1024];
}

%type <real> numeric
%type <integer> yesno

%token <integer> INT
%token <real> REAL
%token <ptr> POINTER

%token BBOX_
%token BEGIN_
%token CLEAR_
%token COMPASS_
%token DEBUG_
%token END_
%token FALSE_
%token GET_
%token HEIGHT_
%token HIDE_
%token HIGHLITE_
%token IMAGE_
%token INVALID_
%token MOTION_
%token N_
%token NO_
%token OFF_
%token ON_
%token PAN_
%token RESET_
%token SHOW_
%token SIZE_
%token TRUE_
%token TO_
%token UPDATE_
%token VERSION_
%token WARP_
%token WCS_
%token WIDTH_
%token Y_
%token YES_

%%

command : DEBUG_ debug
	| BBOX_ bbox
	| CLEAR_ {pn->updateCmd(0);}
	| COMPASS_ yesno {pn->setCompassCmd($2);}
	| IMAGE_ COMPASS_ yesno {pn->setCompassCmd($3);}
	| GET_ get
	| HIDE_ {pn->hideCmd();}
	| HIGHLITE_ highLite
	| PAN_ pan
	| RESET_ {pn->resetCmd();}
	| SHOW_ {pn->showCmd();}
	| UPDATE_ update
	| VERSION_ {pn->msg("Panner 1.0");}
	| WARP_ numeric numeric {pn->warpCmd(Vector($2, $3));}
	| WCS_ COMPASS_ yesno {pn->setCompassCmd($3);}
	;

numeric	: REAL {$$=$1;}
	| INT {$$=$1;}
	;

debug	: ON_ {yydebug=1;}
	| OFF_ {yydebug=0;}
	;

yesno	: INT {$$=($1 ? 1 : 0);}

	| YES_ {$$=1;}
	| Y_ {$$=1;}
	| ON_ {$$=1;}
	| TRUE_ {$$=1;}

	| NO_ {$$=0;}
	| N_ {$$=0;}
	| OFF_ {$$=0;}
	| FALSE_ {$$=0;}
	;

bbox	: ON_ {pn->setBBoxCmd(1);}
	| OFF_ {pn->setBBoxCmd(0);}
	;

get	: BBOX_ {pn->getBBoxCmd();}
	| HEIGHT_ {pn->getHeightCmd();}
	| SIZE_ {pn->getSizeCmd();}
	| WIDTH_ {pn->getWidthCmd();}
	;

highLite: numeric numeric {pn->highLiteCmd(Vector($1,$2));}
	| OFF_ {pn->highLiteCmd(0);}
	| ON_ {pn->highLiteCmd(1);}
	;

pan	: BEGIN_ numeric numeric {pn->panBeginCmd(Vector($2,$3));}
	| MOTION_ numeric numeric {pn->panMotionCmd(Vector($2,$3));}
	| END_ numeric numeric {pn->panEndCmd(Vector($2,$3));}
	| TO_ numeric numeric {pn->panToCmd(Vector($2,$3));}
	;

update	: POINTER {pn->updateCmd($1);}
	| BBOX_ numeric numeric numeric numeric 
	    numeric numeric numeric numeric 
	  {pn->updateBBoxCmd(Vector($2,$3),Vector($4,$5),
	    Vector($6,$7),Vector($8,$9));}
	| IMAGE_ COMPASS_ updateImageCompass
	| WCS_ COMPASS_ updateWCSCompass
	;

updateImageCompass : numeric numeric numeric numeric
	  {pn->updateImageCompassCmd(Vector($1,$2),Vector($3,$4));}
	| numeric numeric numeric numeric numeric numeric
	  {pn->updateImageCompassCmd(Vector($1,$2), Vector($3,$4),
	   Vector($5,$6));}
	;

updateWCSCompass : numeric numeric numeric numeric 
	  {pn->updateWCSCompassCmd(Vector($1,$2),Vector($3,$4));}
	| INVALID_ {pn->updateWCSCompassCmd();}
	;

%%


