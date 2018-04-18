%{
%}

#include string.tin

%start command

%%

command : nan 
 | nan {yyclearin; YYACCEPT} STRING_
 ;

nan : STRING_ {ds9CmdSet nan $1 PrefsNanColor}
 ;

%%

proc nan::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
