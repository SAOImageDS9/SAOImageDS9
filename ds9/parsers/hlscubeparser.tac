%{
%}
#include def.tin

#include string.tin

%start command

%token NEW_

%%

# XPA/SAMP only
command : hlscube 
 ;

hlscube : opts {HLSCubeCmdLoad {}}
 | opts STRING_ {HLSCubeCmdLoad $2}
 ;

opts :
 | NEW_ {CreateHLSFrame}
 ;

%%

proc hlscube::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
