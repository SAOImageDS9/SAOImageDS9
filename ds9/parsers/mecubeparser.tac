%{
%}

#include string.tin

%start command

%token MASK_
%token NEW_
%token SLICE_

%%

command : mecube 
 | mecube {yyclearin; YYACCEPT} STRING_
 ;

mecube : opts {MECubeCmdLoad {}}
 | opts STRING_ {MECubeCmdLoad $2}
 ;

opts :
 | NEW_ {CreateFrame}
 | MASK_
 | SLICE_
 ;

%%

proc mecube::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
