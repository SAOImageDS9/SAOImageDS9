%{
%}
#include def.tin

#include string.tin

%start command

%token NEW_

%%

# XPA/SAMP only
command : hlsarray 
 ;

hlsarray : opts {HLSArrayCmdLoad {}}
 | opts STRING_ {HLSArrayCmdLoad $2}
 ;

opts :
 | NEW_ {CreateHLSFrame}
 ;

%%

proc hlsarray::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
