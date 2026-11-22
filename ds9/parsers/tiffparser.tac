%{
%}
#include def.tin

#include string.tin

%start command

%token AUTO_
%token MASK_
%token NATIVE_
%token NEW_
%token PHOTO_
%token SLICE_

%%

# XPA/SAMP only. Options in any order before the file name: new, slice
# and mask as for the other image commands, and native, photo or auto to
# choose the reader for this load (see tiff.tcl, TIFFChoose). No quote
# characters in comments here: taccle reads each line as a Tcl list.
command : tiff 
 ;

tiff : opts {TIFFCmdLoad {} $1}
 | opts STRING_ {TIFFCmdLoad $2 $1}
 ;

opts : {set _ {}}
 | opts opt {set _ [concat $1 $2]}
 ;

opt : NEW_ {CreateFrame; set _ {}}
 | SLICE_ {set _ slice}
 | MASK_ {set _ mask}
 | NATIVE_ {set _ native}
 | PHOTO_ {set _ photo}
 | AUTO_ {set _ auto}
 ;

%%

proc tiff::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
