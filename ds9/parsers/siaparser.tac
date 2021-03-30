%{
%}
#include def.tin

#include reader.tin
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
%token CURRENT_
%token EXPORT_
%token NAME_
%token PRINT_
%token RADIUS_
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
%token HLA_
%token MAST_
%token SDSS_
%token SKYVIEW_
%token TGSSADR_

%%

#include writer.trl
#include wcssys.trl
#include skyframe.trl
#include wcsformat.trl
#include numeric.trl

command : sia 
 | sia {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

sia : site {SIACmdRetrieve $1}
 | CANCEL_ {ProcessCmdCVAR0 ARCancel}
 | CLEAR_ {ProcessCmdCVAR0 SIAOff}
 | CLOSE_ {ProcessCmdCVAR0 SIADestroy}

 | SAVE_ STRING_ {TBLCmdSave $2 VOTWrite}
 | EXPORT_ writer STRING_ {TBLCmdSave $3 $2}

 | COORDINATE_ coordinate
 | CROSSHAIR_ {ProcessCmdCVAR0 SIACrosshair}
 | CURRENT_ site {SIACmdRef $2}
 | NAME_ STRING_ {ProcessCmdCVAR name $2}
 | PRINT_ {ProcessCmdCVAR0 TBLCmdPrint}
 | RETRIEVE_ {global cvarname; SIAApply $cvarname 1}
 | RADIUS_ numeric rformat {TBLCmdSize $2 $3}
# backward compatibily
 | SIZE_ numeric numeric rformat {TBLCmdSize [expr ($2+$3)/2.] $4}
 | SKY_ skyframe {TBLCmdSkyframe $2}
 | SKYFORMAT_ skyformat {ProcessCmdCVAR skyformat $2}
 | SYSTEM_ wcssys {TBLCmdSystem $2}
 | UPDATE_ {ProcessCVAR0 TBLUpdate}
 ;

coordinate : numeric numeric {TBLCmdCoord $1 $2 fk5}
 | numeric numeric skyframe {TBLCmdCoord $1 $2 $3}
 | SEXSTR_ SEXSTR_ {TBLCmdCoord $1 $2 fk5}
 | SEXSTR_ SEXSTR_ skyframe {TBLCmdCoord $1 $2 $3}
 ;

site : 2MASS_ {set _ 2mass}
 | AKARI_ {set _ akari}
 | ASTROWISE_ {set _ astrowise}
 | CADC_ {set _ cadc}
 | CXC_ {set _ cxc}
 | HLA_ {set _ hla}
 | MAST_ {set _ mast}
 | SDSS_ {set _ sdss}
 | SKYVIEW_ {set _ skyview}
 | TGSSADR_ {set _ tgssadr}
 ;

%%

proc sia::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
