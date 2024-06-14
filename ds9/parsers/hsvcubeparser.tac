%{
%}
#include def.tin

#include string.tin

%start command

%token NEW_

%%

# XPA/SAMP only
command : hsvcube 
 ;

hsvcube : opts {HSVCubeCmdLoad {}}
 | opts STRING_ {HSVCubeCmdLoad $2}
 ;

opts :
 | NEW_ {CreateHSVFrame}
 ;

%%

proc hsvcube::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
