%{
%}

%token INT_
%token REAL_
%token STRING_

%token FOOCMD_
%token BARCMD_

%token TO_

%%

commands : commands command
 | command
 ;

command : FOOCMD_ foo
 | BARCMD_ bar	
 ;

int : INT_ {set _ $1}
 ;

numeric	: int {set _ $1}
 | REAL_ {set _ $1}
 ;

foo : STRING_ {puts "FOO STRING $1"}
 | INT_ {puts "FOO INT $1"}
 | REAL_ {puts "FOO REAL $1"}
 | TO_ fooTo
 ;

fooTo: STRING_ {puts "FOO TO STRING $1"}
 | numeric {puts "FOO TO NUMERIC $1"}
 ;

bar : #ANY_ {puts "BAR ANY $1}
 | INT_ {puts "BAR INT $1"}
 ;

%%

proc yy::yyerror {s} {
     puts stderr "parse error:"
     puts stderr "$yy::yy_buffer"
     puts stderr [format "%*s" $yy::yy_index ^]
}
