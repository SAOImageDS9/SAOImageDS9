%{
%}
#include def.tin

#include string.tin

%start command

%token MASK_
%token NEW_

%%

# XPA/SAMP only
command : asdf 
 ;

asdf: opts filename {AsdfCmdLoad $2 $1}
;

filename : {set _ {}}
 | STRING_ {set _ $1}
 ;

# "mask" loads the array into the mask layer instead of as the image,
# matching `nrrd mask' and `array mask'. The layer rides through
# AsdfCmdLoad to LoadAsdfFile, which already takes one.
opts : {set _ {}}
 | NEW_ {CreateFrame; set _ {}}
 | MASK_ {set _ mask}
 ;
 
%%

proc asdf::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
