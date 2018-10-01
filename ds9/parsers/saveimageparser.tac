%{
%}
#include def.tin

#include numeric.tin
#include string.tin

%start command

%token FITS_
%token EPS_
%token GIF_
%token TIFF_
%token JPEG_
%token PNG_
%token MPEG_

%token NONE_
%token PACKBITS_
%token DEFLATE_

%%

#include numeric.trl

command : saveimage 
 | saveimage {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

saveimage : STRING_ opts {SaveImageCmdLoad [ExtToFormat $1] $1}
 | ext STRING_ opts {SaveImageCmdLoad $1 $2}
# backward compatibilty
 | ext opts STRING_ {SaveImageCmdLoad $1 $3}
# backward compatibilty
 | MPEG_ mpeg
 ;
 
mpeg : STRING_ {SaveImageCmdMPEG $1 1}
 | STRING_ INT_ {SaveImageCmdMPEG $1 $2}
 ;

ext : FITS_ {set _ fits}
 | EPS_ {set _ eps}
 | GIF_ {set _ gif}
 | TIFF_ {set _ tiff}
 | JPEG_ {set _ jpeg}
 | PNG_ {set _ png}
 ;

# opts sets a var that will be used later
opts :
 | NONE_ {ProcessCmdSet saveimage tiff,compress none}
 | JPEG_ {ProcessCmdSet saveimage tiff,compress jpeg}
 | PACKBITS_ {ProcessCmdSet saveimage tiff,compress packbits}
 | DEFLATE_ {ProcessCmdSet saveimage tiff,compress deflate}
 | numeric {ProcessCmdSet saveimage jpeg,quality $1}
 ;
 
%%

proc saveimage::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
