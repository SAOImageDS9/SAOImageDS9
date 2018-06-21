# $Id: simple_grammar.tac,v 1.1 2004/08/18 23:53:43 tang Exp $

%{

source simple_scanner.tcl

%}

%token ID

%%

E: E '+' T
 | T
 ;

T: T '*' F 
 | F
 ;
 
F: '(' E ')'
 | ID
 ;
 
%%

yyparse
