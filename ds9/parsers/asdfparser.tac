%{
%}
#include def.tin

#include string.tin

%start command

%token NEW_

%%

# XPA/SAMP only
command : asdf 
 ;

asdf: new filename {AsdfCmdLoad $2 {}}
;

filename : {set _ {}}
 | STRING_ {set _ $1}
 ;

new :
 | NEW_ {CreateFrame}
 ;
 
%%

proc asdf::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
