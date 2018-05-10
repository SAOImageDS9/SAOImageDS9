%{
%}

#include string.tin

%start command

%token MASK_
%token NEW_

%%

command : nrrd 
 | nrrd {yyclearin; YYACCEPT} STRING_
 ;

nrrd : opts {NRRDCmdLoad {}}
 | opts STRING_ {NRRDCmdLoad $2}
 ;

opts :
 | NEW_ {CreateFrame}
 | MASK_ {NRRDCmdSet load,layer mask}
 ;

%%

proc nrrd::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
