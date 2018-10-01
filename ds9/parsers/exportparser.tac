%{
%}
#include def.tin

#include numeric.tin
#include string.tin

%start command

%token ARRAY_
%token RGBARRAY_
%token NRRD_
%token ENVI_

%token GIF_
%token TIFF_
%token JPEG_
%token PNG_

%token BIG_
%token LITTLE_
%token NATIVE_

%token NONE_
%token PACKBITS_
%token DEFLATE_

%%

#include numeric.trl

command : export 
 | export {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

export : STRING_ {ExportCmdSave [ExtToFormat $1] $1}
 | STRING_ opts {ExportCmdSave [ExtToFormat $1] $1}
 | STRING_ endian {ExportCmdSave [ExtToFormat $1] $1}

 | ext STRING_ {ExportCmdSave $1 $2}
 | ext STRING_ opts {ExportCmdSave $1 $2}

 | ext2 STRING_ {ExportCmdSave $1 $2}
 | ext2 STRING_ endian {ExportCmdSave $1 $2}
 | ENVI_ STRING_ STRING_ {ExportCmdSave envi $2 $3}
 | ENVI_ STRING_ STRING_ endian {ExportCmdSave envi $2 $3}
 ;

ext : GIF_ {set _ gif}
 | TIFF_ {set _ tiff}
 | JPEG_ {set _ jpeg}
 | PNG_ {set _ png}
 ;

ext2 : ARRAY_ {set _ array}
 | RGBARRAY_ {set _ rgbarray}
 | NRRD_ {set _ nrrd}
 | ENVI_ {set _ envi}
 ;

opts : NONE_ {ProcessCmdSet export tiff,compress none}
 | JPEG_ {ProcessCmdSet export tiff,compress jpeg}
 | PACKBITS_ {ProcessCmdSet export tiff,compress packbits}
 | DEFLATE_ {ProcessCmdSet export tiff,compress deflate}
 | numeric {ProcessCmdSet export jpeg,quality $1}
 ;
 
endian : BIG_ {ProcessCmdSet export endian big}
 | LITTLE_ {ProcessCmdSet export endian little}
 | NATIVE_ {ProcessCmdSet export endian native}
 ;

%%

proc export::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
