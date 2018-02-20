# $Id: simple_calculator.tac,v 1.1 2004/08/18 23:53:43 tang Exp $

# This example demonstrates symbol and synthesized values.

%{
#!/usr/bin/tclsh

%}

%token ID NEWLINE
%start start

%%

start: E NEWLINE  { puts "Result is $1" }
 | E              { puts "Result is $1" }
 ;

E: E '+' T    { set _ [expr {$1 + $3}] }
 | E '-' T    { set _ [expr {$1 - $3}] }
 | T
 ;

T: T '*' F    { set _ [expr {$1 * $3}] }
 | T '/' F    { set _ [expr {$1 / $3}] }
 | F
 ;
 
F: '(' E ')'  { set _ $2 }
 | ID         { set _ $::yylval }
 ;
 
%%

source simple_scanner.tcl
yyparse
