%{
%}

#include coords.tin
#include numeric.tin
#include string.tin

%start command

%token CANCEL_
%token CLEAR_
%token CLOSE_
%token COORDINATE_
%token CROSSHAIR_
%token EXPORT_
%token NAME_
%token PRINT_
%token RETRIEVE_
%token SAVE_
%token SIZE_
%token SKY_
%token SKYFORMAT_
%token SYSTEM_
%token UPDATE_

%token 2MASS_
%token AKARI_
%token ASTROWISE_
%token CADC_
%token CXC_
%token MAST_
%token SDSS_
%token SKYVIEW_
%token TGSSADR_

%%

#include coords.trl
#include numeric.trl

command : sia 
 | sia {yyclearin; YYACCEPT} STRING_
 ;

sia : CANCEL_ {global cvarname; ARCancel $cvarname}
 | CLOSE_ {global cvarname; SIADestroy $cvarname}
 | CLEAR_ {global cvarname; SIAOff $cvarname}
 | COORDINATE_
 | CROSSHAIR_ {global cvarname; IMGSVRCrosshair $cvarname}
 | EXPORT_
 | SAVE_
 | NAME_
 | PRINT_ {global cvarname; CATPrint $cvarname}
 | RETRIEVE_ {global cvarname; SIAApply $cvarname 1}
 | SIZE_
 | SKY_
 | SKYFORMAT_
 | SYSTEM_
 | UPDATE_ {global cvarname; IMGSVRUpdate $cvarname}
 ;

%%

proc sia::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
