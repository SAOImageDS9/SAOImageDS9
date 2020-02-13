%{
%}
#include def.tin

#include string.tin

%start command

%token NONE_
%token POINTER_
%token REGION_
%token CROSSHAIR_
%token COLORBAR_
%token PAN_
%token ZOOM_
%token ROTATE_
%token CROP_
%token CATALOG_
%token FOOTPRINT_
%token EXAMINE_
%token 3D_

%%

command : mode 
 | mode {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

mode : item {ProcessCmdSet current mode $1 ChangeMode}
 ;

item : NONE_ {set _ none}
 | REGION_ {set _ region}
 | CROSSHAIR_ {set _ crosshair}
 | COLORBAR_ {set _ colorbar}
 | PAN_ {set _ pan}
 | ZOOM_ {set _ zoom}
 | ROTATE_ {set _ rotate}
 | CROP_ {set _ crop}
 | CATALOG_ {set _ catalog}
 | FOOTPRINT_ {set _ footprint}
 | EXAMINE_ {set _ examine}
 | 3D_ {set _ 3d}
# backward compatibilty
 | POINTER_ {set _ region}
 ;

%%

proc mode::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
