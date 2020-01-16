%{
%}
#include def.tin

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
%token RADIUS_
%token RETRIEVE_
%token SAVE_
%token SIZE_
%token SKY_
%token SKYFORMAT_
%token SYSTEM_
%token UPDATE_

%token CXC_

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

command : fp 
 | fp {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

fp : {if {![FPCmdCheck]} {fp::YYABORT}} fpCmd
 | site {FPCmdRef $1}
 | site {FPCmdRef $1} fpCmd
 ;

fpCmd : CANCEL_ {ProcessCmdCVAR0 ARCancel}
 | CLOSE_ {ProcessCmdCVAR0 FPDestroy}
 | CLEAR_ {ProcessCmdCVAR0 FPOff}
 | COORDINATE_ coordinate
 | CROSSHAIR_ {ProcessCmdCVAR0 IMGSVRCrosshair}
 | EXPORT_ writer STRING_ {TBLCmdSave $3 $2}
 | SAVE_ STRING_ {TBLCmdSave $2 VOTWrite}
 | NAME_ STRING_ {ProcessCmdCVAR name $2}
 | PRINT_ {ProcessCmdCVAR0 CATPrint}
 | RETRIEVE_ {global cvarname; FPApply $cvarname 1}
 | RADIUS_ numeric rformat {FPCmdSize $2 $3}
# backward compatibily
 | SIZE_ numeric numeric rformat {FPCmdSize [expr ($2+$3)/2.] $4}
 | SKY_ skyframe {FPCmdSkyframe $2}
 | SKYFORMAT_ skyformat {ProcessCmdCVAR skyformat $2}
 | SYSTEM_ wcssys {FPCmdSystem $2}
 | UPDATE_ {ProcessCVAR0 IMGSVRUpdate}
 ;

coordinate : numeric numeric {FPCmdCoord $1 $2 fk5}
 | numeric numeric skyframe {FPCmdCoord $1 $2 $3}
 | SEXSTR_ SEXSTR_ {FPCmdCoord $1 $2 fk5}
 | SEXSTR_ SEXSTR_ skyframe {FPCmdCoord $1 $2 $3}
 ;

site : {} {set _ cxc}
 | CXC_ {set _ cxc}
 ;

writer : XML_ {set _ VOTWrite}
 | VOT_ {set _ VOTWrite}
 | SB_ {set _ starbase_write}
 | STARBASE_ {set _ starbase_write}
 | CSV_ {set _ TSVWrite}
 | TSV_ {set _ TSVWrite}
 ;

%%

proc fp::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
