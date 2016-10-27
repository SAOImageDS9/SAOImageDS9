%{
#include <idx.h>
#include <idx.tab.h>
%}

%union{
  idxrowrec  *row;
  idxvalrec  *val;
}

%token <val>	NUM
%token <val>	COL
%token <val>	FUNC
%token <val>	REG
%token <val>	INDEF

%left		OR
%left 		AND
%left		'|'
%left		'^'
%left 		'&'
%nonassoc	EQ NE 
%nonassoc	'<' LE '>' GE
%left		'+' '-'
%left		'*' '/' '%'
%right		'!' '~' UMINUS

%type <row>	idx
%type <row>	expr
%type <row>	rowlist
%type <val>	value

%glr-parser
%expect-rr 1

%%

/* combines lists of row numbers */
idx:	expr		 	{ idxall($1); }
;

expr:	rowlist
|	expr OR  expr		{ $$ = idxor($1,$3); }
|	expr AND expr	 	{ $$ = idxand($1,$3); }
|	'(' expr ')'	 	{ $$ = $2; }
;

/* generates lists of row numbers */
rowlist:REG			{ $$ = idxrowreg($1); }
|	FUNC			{ $$ = idxrowfun($1); }
|	value EQ value 		{ $$ = idxroweq($1,$3); }
|	value NE value 		{ $$ = idxrowne($1,$3); }
|	value '<' value 	{ $$ = idxrowlt($1,$3); }
|	value LE value 		{ $$ = idxrowle($1,$3); }
|	value '>' value 	{ $$ = idxrowgt($1,$3); }
|	value GE value 		{ $$ = idxrowge($1,$3); }
;

value:	NUM
|	COL
|	INDEF
|	FUNC
|	value '+' value 	{ $$ = idxvaladd($1,$3); }
|	value '-' value 	{ $$ = idxvalsub($1,$3); }
|	value '*' value 	{ $$ = idxvalmul($1,$3); }
|	value '/' value 	{ $$ = idxvaldiv($1,$3); }
|	value '%' value 	{ $$ = idxvalmod($1,$3); }
|	value '&' value 	{ $$ = idxvaland($1,$3); }
|	value '|' value 	{ $$ = idxvalor($1,$3); }
|	value '^' value 	{ $$ = idxvalxor($1,$3); }
|	'!' value 		{ $$ = idxvalnot($2); }
|	'~' value		{ $$ = idxvalcom($2); }
|	'-' value %prec UMINUS 	{ $$ = idxvalmin($2); }
|	'(' value ')' 		{ $$ = $2; }
;

%%
