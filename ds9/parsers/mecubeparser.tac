%{
%}
#include def.tin

#include string.tin

%start command

%token NEW_

%%

# XPA/SAMP only
command : mecube 
 ;

mecube : opts {MECubeCmdLoad {}}
 | opts STRING_ {MECubeCmdLoad $2}
 ;

opts :
 | NEW_ {CreateFrame}
 ;

%%

proc mecube::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
