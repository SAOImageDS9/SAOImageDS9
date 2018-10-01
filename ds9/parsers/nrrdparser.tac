%{
%}
#include def.tin

#include string.tin

%start command

%token MASK_
%token NEW_

%%

command : nrrd 
 | nrrd {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

nrrd : opts {NRRDCmdLoad {} $1}
 | opts STRING_ {NRRDCmdLoad $2 $1}
 ;

opts :
 | NEW_ {CreateFrame; set _ {}}
 | MASK_ {set _ mask}
 ;

%%

proc nrrd::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
