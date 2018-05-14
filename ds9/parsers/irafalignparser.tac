%{
%}

#include yesno.tin
#include string.tin

%start command

%%

#include yesno.trl

command : irafalign 
 | irafalign {yyclearin; YYACCEPT} STRING_
 ;

irafalign : yesno {Pds9CmdSet irafalign $1}
 ;

%%

proc irafalign::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
