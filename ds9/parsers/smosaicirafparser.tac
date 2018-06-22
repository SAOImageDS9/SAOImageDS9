%{
%}
#include def.tin

#include string.tin

%start command

%token MASK_
%token NEW_

%%

# XPA/SAMP only
command : smosaiciraf 
 ;

smosaiciraf : opts STRING_ STRING_ {LoadSMosaicIRAFFile $2 $3 $1}
 ;

opts :
 | NEW_ {CreateFrame; set _ {}}
 | MASK_ {set _ mask}
 ;

%%

proc smosaiciraf::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
