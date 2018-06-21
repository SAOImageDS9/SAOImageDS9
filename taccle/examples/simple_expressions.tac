# $Id: simple_expressions.tac,v 1.1 2004/08/18 23:53:43 tang Exp $

# This examples takes simple_grammar and adds actions to each rule.

%{
#!/usr/bin/tclsh

%}

%token ID
%start E

%%

E: E '+' T    { puts "E + T" }
 | T          { puts "T" }
 ;

T: T '*' F    { puts "T * F" }
 | F          { puts "F" }
 ;
 
F: '(' E ')'  { puts "(E)" }
 | ID         { puts "id" }
 ;
 
%%

source simple_scanner.tcl
yyparse
