%{
%}
#include def.tin

%start threedsend

%token AZ_
%token AMBIENT_
%token BG_
%token BORDER_
%token COLOR_
%token COMPASS_
%token EL_
%token HIGHLITE_
%token LOCK_
%token METHOD_
%token NORMAL_
%token SCALE_
%token SHADE_
%token STRENGTH_
%token VIEW_

%%

threedsend : AZ_ {ProcessSendCmdGet threed az}
 | EL_ {ProcessSendCmdGet threed el}
 | VIEW_ {ProcessSendCmdGet2 threed az el}
 | SCALE_ {ProcessSendCmdGet threed scale}
 | METHOD_ {ProcessSendCmdGet threed method}
 | SHADE_ shade
 | BG_ {ProcessSendCmdGet threed background}
 | LOCK_ {ProcessSendCmdYesNo threed lock}
 | HIGHLITE_ highlite
 | BORDER_ border
 | COMPASS_ compass
 ;

shade: {ProcessSendCmdYesNo threed shade}
 | AMBIENT_ {ProcessSendCmdGet threed shade,ambient}
 | STRENGTH_ {ProcessSendCmdGet threed shade,strength}
 | NORMAL_ shadeNormal
 ;

shadeNormal: {ProcessSendCmdYesNo threed shade,normal}
 | STRENGTH_ {ProcessSendCmdGet threed shade,normal,strength}
 ;

highlite: {ProcessSendCmdYesNo threed highlite}
 | COLOR_ {ProcessSendCmdGet threed highlite,color}
 ;

border: {ProcessSendCmdYesNo threed border}
 | COLOR_ {ProcessSendCmdGet threed border,color}
 ;

compass: {ProcessSendCmdYesNo threed compass}
 | COLOR_ {ProcessSendCmdGet threed compass,color}
 ;

%%

proc threedsend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
