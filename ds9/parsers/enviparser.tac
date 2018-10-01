%{
%}
#include def.tin

#include string.tin

%start command

%token NEW_

%%

command : envi 
 | envi {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

envi : opts STRING_ {ImportENVIFile $2 [FindENVIDataFile $2]; FinishLoad}
 | opts STRING_ STRING_ {ImportENVIFile $2 $3; FinishLoad}
 ;

opts :
 | NEW_ {CreateFrame}
 ;

%%

proc envi::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
