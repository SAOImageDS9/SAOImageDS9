%{
%}

%token INT_
%token REAL_
%token STRING_

%token FOOCMD_
%token EXITCMD_

%token CLOSE_
%token FIT_
%token OPEN_
%token TO_

%%

commands : commands command
 | command
 ;

int : INT_ {set _ $1}
 ;

command : FOOCMD_ foo
 | EXITCMD_ exit
 ;

numeric	: int {set _ $1}
 | REAL_ {set _ $1}
 ;

foo : STRING_ {puts "STRING $1"}
 | INT_ {puts "INT $1"}
 | REAL_ {puts "REAL $1"}
 | OPEN_ {puts "OPEN"}
 | CLOSE_ {puts "CLOSE"}
 | TO_ fooTo
 ;

fooTo: FIT_ {puts "TO FIT"}
 | numeric {puts "TO NUMERIC $1"}
 ;

exit: {puts "EXIT"; QuitDS9}
 ;

%%

proc yy::yyerror {s} {
     puts stderr "parse error:"
     puts stderr "$yy::yy_buffer"
     puts stderr [format "%*s" $yy::yy_index ^]
}
