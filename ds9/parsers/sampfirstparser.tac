%{
%}
#include def.tin

#include yesno.tin
#include string.tin

%start command

%%

#include yesno.trl

command : samp 
 | samp {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

samp : yesno {ProcessCmdSet pds9 samp $1}
 ;

%%

proc sampfirst::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
