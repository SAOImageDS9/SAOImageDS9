%{
%}
#include def.tin

#include string.tin

%start command

%token NONE_
%token REGION_
%token CROSSHAIR_
%token COLORBAR_
%token PAN_
%token ZOOM_
%token ROTATE_
%token CROP_
%token CATALOG_
%token EXAMINE_
%token POINTER_

%%

command : mode 
 | mode {yyclearin; YYACCEPT} STRING_
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
 | EXAMINE_ {set _ examine}
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
