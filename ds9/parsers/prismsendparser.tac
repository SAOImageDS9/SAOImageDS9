%{
%}
#include def.tin

%start prismsend

%token ABOUT_

%%

prismsend : ABOUT_
 ;

%%

proc prismsend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
