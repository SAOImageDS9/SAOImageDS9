%{
%}
#include def.tin

#include string.tin

%start command

%%

# XPA/SAMP only
command : multiframe 
 ;

multiframe : {MultiframeCmdLoad {}}
 | STRING_ {MultiframeCmdLoad $1}
 ;

%%

proc multiframe::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
