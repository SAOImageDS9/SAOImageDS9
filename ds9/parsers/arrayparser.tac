%{
%}
#include def.tin

#include string.tin

%start command

%token MASK_
%token NEW_
%token RGB_

%%

# XPA/SAMP only
command : array 
 ;

array : opts {ArrayCmdLoad {} $1}
 | opts STRING_ {ArrayCmdLoad $2 $1}
# backward compatibility
 | RGB_ STRING_ {RGBArrayCmdLoad $2}
 | NEW_ RGB_ STRING_ {CreateRGBFrame; RGBArrayCmdLoad $3}
 ;

opts :
 | NEW_ {CreateFrame; set _ {}}
 | MASK_ {set _ mask}
 ;

%%

proc array::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
