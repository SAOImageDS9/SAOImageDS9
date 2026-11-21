%{
%}
#include def.tin

#include string.tin

%start command

%token MASK_
%token NEW_

%%

# XPA/SAMP only. The file may carry an image selector, file.xisf:image,
# where image is an XISF image id or index (see XisfLoadImage). No quote
# characters in comments here: taccle reads each line as a Tcl list.
command : xisf 
 ;

xisf: opts filename {XisfCmdLoad $2 $1}
;

filename : {set _ {}}
 | STRING_ {set _ $1}
 ;

# mask loads the image into the mask layer instead, as asdf mask,
# nrrd mask and array mask do.
opts : {set _ {}}
 | NEW_ {CreateFrame; set _ {}}
 | MASK_ {set _ mask}
 ;
 
%%

proc xisf::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
