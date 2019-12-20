# $Id: interactive_calculator.tac,v 1.2 2004/09/08 21:38:44 tang Exp $

# This example expands the simple calculator to be interactive from
# the command line.  Note the use of an empty rule (i.e., epsilon
# transition).  Also featured are the error token and error recovery.

%{
#!/usr/bin/tclsh

%}

%token ID NEWLINE

%%

start: line NEWLINE start
 | line
 ;

line: E       { puts " = $1" }
 | error      { puts " -- error" }
 |   # empty
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
