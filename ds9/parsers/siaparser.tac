%{
%}

#include wcssys.tin
#include skyframe.tin
#include wcsformat.tin
#include numeric.tin
#include sexstr.tin
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

%token XML_
%token VOT_
%token SB_
%token STARBASE_
%token CSV_
%token TSV_

%%

#include wcssys.trl
#include skyframe.trl
#include wcsformat.trl
#include numeric.trl

command : sia 
 | sia {yyclearin; YYACCEPT} STRING_
 ;

sia : {if {![SIACmdCheck]} {sia::YYABORT}} siaCmd
 | site {SIACmdRef $1}
 | site {SIACmdRef $1} siaCmd
 ;

siaCmd : CANCEL_ {global cvarname; ARCancel $cvarname}
 | CLOSE_ {global cvarname; SIADestroy $cvarname}
 | CLEAR_ {global cvarname; SIAOff $cvarname}
 | COORDINATE_ coordinate
 | CROSSHAIR_ {global cvarname; IMGSVRCrosshair $cvarname}
 | EXPORT_ writer STRING_ {SIACmdSave $3 $2}
 | SAVE_ STRING_ {SIACmdSave $2 VOTWrite}
 | NAME_ STRING_ {ProcessCmdCVAR name $2}
 | PRINT_ {global cvarname; CATPrint $cvarname}
 | RETRIEVE_ {global cvarname; SIAApply $cvarname 1}
 | SIZE_ numeric numeric rformat {SIACmdSize $2 $3 $4}
 | SKY_ skyframe {SIACmdSkyframe $2}
 | SKYFORMAT_ skyformat {ProcessCmdCVAR skyformat $2}
 | SYSTEM_ wcssys {SIACmdSystem $2}
 | UPDATE_ {global cvarname; IMGSVRUpdate $cvarname}
 ;

coordinate : numeric numeric {SIACmdCoord $1 $2 fk5}
 | numeric numeric skyframe {SIACmdCoord $1 $2 $3}
 | SEXSTR_ SEXSTR_ {SIACmdCoord $1 $2 fk5}
 | SEXSTR_ SEXSTR_ skyframe {SIACmdCoord $1 $2 $3}
 ;

site : 2MASS_ {set _ 2mass}
 | AKARI_ {set _ akari}
 | ASTROWISE_ {set _ astrowise}
 | CADC_ {set _ cadc}
 | CXC_ {set _ cxc}
 | MAST_ {set _ mast}
 | SDSS_ {set _ sdss}
 | SKYVIEW_ {set _ skyview}
 | TGSSADR_ {set _ tgssadr}
 ;

writer : XML_ {set _ VOTWrite}
 | VOT_ {set _ VOTWrite}
 | SB_ {set _ starbase_write}
 | STARBASE_ {set _ starbase_write}
 | CSV_ {set _ TSVWrite}
 | TSV_ {set _ TSVWrite}
 ;

%%

proc sia::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
