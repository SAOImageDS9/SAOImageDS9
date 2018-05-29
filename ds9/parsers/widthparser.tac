%{
%}

#include numeric.tin
#include string.tin

%start command

%%

#include numeric.trl

command : width 
 | width {yyclearin; YYACCEPT} STRING_
 ;

width : INT_ {CanvasCmdSet width $1 UpdateView}
 ;

%%

proc width::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
