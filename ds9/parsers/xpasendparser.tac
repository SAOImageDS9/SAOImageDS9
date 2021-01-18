%{
%}
#include def.tin

%start xpasend

%token INFO_

%%

xpasend : {ProcessSendCmd XPAInfoResult}
# backward compatibility	
 | INFO_ {ProcessSendCmd XPAInfoResult}
 ;

%%

proc xpasend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
