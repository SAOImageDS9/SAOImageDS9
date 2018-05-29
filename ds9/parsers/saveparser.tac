%{
%}

#include numeric.tin
#include string.tin

%start command

%token FITS_
%token RGBIMAGE_
%token RGBCUBE_
%token MECUBE_
%token MOSAIC_
%token MOSAICWCS_
%token MOSAICIMAGE_
%token MOSAICIMAGEWCS_
%token WCS_

%token IMAGE_
%token TABLE_
%token SLICE_

%%

#include numeric.trl

command : save 
 | save {yyclearin; YYACCEPT} STRING_
 ;

save : STRING_ opts {SaveCmdLoad [ExtToFormat $1] $1}
 | format STRING_ opts {SaveCmdLoad $1 $2}
 ;

format : FITS_ {set _ fits}
 | RGBIMAGE_ {set _ rgbimage}
 | RGBCUBE_ {set _ rgbcube}
 | MECUBE_ {set _ mecube}
 | mosaic {set _ $1}
 | mosaicimage {set _ $1}
 ;
 
mosaic : MOSAIC_ {set _ mosaic}
 | MOSAIC_ WCS_ {set _ mosaic}
 | MOSAICWCS_ {set _ mosaic}
 ;
 
mosaicimage : MOSAICIMAGE_ {set _ mosaicimage}
 | MOSAICIMAGE_ WCS_ {set _ mosaicimage}
 | MOSAICIMAGEWCS_ {set _ mosaicimage}
 ;

opts : {SavefitsCmdSet type image; SavefitsCmdSet mosaic 1}
 | IMAGE_ {SavefitsCmdSet type image}
 | TABLE_ {SavefitsCmdSet type table}
 | SLICE_ {SavefitsCmdSet type slice}
 | INT_ {SavefitsCmdSet mosaic $1}
 ;

%%

proc save::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
