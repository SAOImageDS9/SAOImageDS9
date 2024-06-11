%{
%}
#include def.tin

#include numeric.tin
#include string.tin

%start command

%token ARRAY_
%token RGBARRAY_
%token HLSARRAY_
%token HSVARRAY_
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

export : GIF_ STRING_ {ExportCmdSave gif $2}
 | TIFF_ STRING_ tiffopts {ExportCmdSave tiff $2}
 | JPEG_ STRING_ jpegopts {ExportCmdSave jpeg $2}
 | PNG_ STRING_ {ExportCmdSave png $2}

 | ARRAY_ STRING_ endian {ExportCmdSave array $2}
 | RGBARRAY_ STRING_ endian {ExportCmdSave rgbarray $2}
 | HLSARRAY_ STRING_ endian {ExportCmdSave hlsarray $2}
 | HSVARRAY_ STRING_ endian {ExportCmdSave hsvarray $2}
 | NRRD_ STRING_ endian {ExportCmdSave nrrd $2}
 | ENVI_ STRING_ STRING_ endian {ExportCmdSave envi $2 $3}

 # backward compatibility
 | STRING_ {ExportCmdSave [ExtToFormat $1] $1}
;

tiffopts : {ProcessCmdSet export tiff,compress none}
 | NONE_ {ProcessCmdSet export tiff,compress none}
 | JPEG_ {ProcessCmdSet export tiff,compress jpeg}
 | PACKBITS_ {ProcessCmdSet export tiff,compress packbits}
 | DEFLATE_ {ProcessCmdSet export tiff,compress deflate}
 ;

jpegopts : {ProcessCmdSet export jpeg,quality 100}
 | INT_ {ProcessCmdSet export jpeg,quality $1}
 ;

endian : {ProcessCmdSet export endian native}
 | BIG_ {ProcessCmdSet export endian big}
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
