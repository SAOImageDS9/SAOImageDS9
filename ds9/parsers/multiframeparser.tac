%{
%}

#include string.tin

%start command

%%

command : multiframe 
 | multiframe {yyclearin; YYACCEPT} STRING_
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
