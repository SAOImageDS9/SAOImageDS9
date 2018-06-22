%{
%}
#include def.tin

#include string.tin

%start command

%token MASK_
%token NEW_

%%

# XPA/SAMP only
command : mosaiciraf 
 ;

mosaiciraf : opts {MosaicIRAFCmdLoad {} $1}
 | opts STRING_ {MosaicIRAFCmdLoad $2 $1}
 ;

opts :
 | NEW_ {CreateFrame; set _ {}}
 | MASK_ {set _ mask}
 ;

%%

proc mosaiciraf::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
