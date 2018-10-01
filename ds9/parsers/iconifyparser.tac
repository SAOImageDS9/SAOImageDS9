%{
%}
#include def.tin

#include yesno.tin
#include string.tin

%start command

%%

#include yesno.trl

command : iconify 
 | iconify {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

iconify : yesno {IconifyCmd $1}
 ;

%%

proc iconify::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
