%{
%}

#include yesno.tin
#include base.tin

%start command

%token AIP_
%token AZ_
%token BG_
%token BORDER_
%token CLOSE_
%token COLOR_
%token COMPASS_
%token EL_
%token HIGHLITE_
%token LOCK_
%token MATCH_
%token METHOD_
%token MIP_
%token NONE_
%token OPEN_
%token SCALE_
%token VIEW_

%%

#include yesno.trl
#include base.trl

command : 3d
 | 3d {yyclearin; YYACCEPT} STRING_
 ;

3d : {Create3DFrame}
 | OPEN_
 | CLOSE_ {3DDestroyDialog}
 | AZ_ numeric {global threed; set threed(az) $2; 3DViewPoint}
 | EL_ numeric {global threed; set threed(el) $2; 3DViewPoint}
 | VIEW_ numeric numeric {global threed; set threed(az) $2; set threed(el) $3; 3DViewPoint}
 | SCALE_ numeric {global threed; set threed(scale) $2; 3DScale}
 | METHOD_ method {global threed; set threed(method) $2; 3DRenderMethod}
 | BG_ bg {global threed; set threed(background) $2; 3DBackground}
 | HIGHLITE_ highlite
 | BORDER_ border
 | COMPASS_ compass
 | MATCH_ {Match3DCurrent}
 | LOCK_ yesno {global threed; set threed(lock) $2; Lock3DCurrent}
 ;

method : AIP_ {set _ aip}
 | MIP_ {set _ mip}
 ;
 
bg : NONE_ {set _ none}
 | AZ_ {set _ azimuth}
 | EL_ {set _ elevation}
 ;

highlite : COLOR_ STRING_ {global threed; set threed(highlite,color) $2; 3DHighliteColor}
 | yesno {global threed; set threed(highlite) $1; 3DHighlite}
 ;
 
border : COLOR_ STRING_ {global threed; set threed(border,color) $2; 3DBorderColor}
 | yesno {global threed; set threed(border) $1; 3DBorder}
 ;
 
compass : COLOR_ STRING_ {global threed; set threed(compass,color) $2; 3DCompassColor}
 | yesno {global threed; set threed(compass) $1; 3DCompass}
 ;
 
%%

proc threed::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
