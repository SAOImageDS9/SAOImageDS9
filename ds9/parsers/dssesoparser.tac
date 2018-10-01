%{
%}
#include def.tin

#include yesno.tin
#include imgsvr.tin
#include numeric.tin
#include string.tin

%start command

%token DSS1_
%token DSS2RED_
%token DSS2BLUE_
%token DSS2INFRARED_

%%

#include yesno.trl
#include imgsvr.trl
#include numeric.trl

command : dsseso
 | dsseso {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

dsseso : {IMGSVRApply deso 1}
 | OPEN_ {}
 | CLOSE_ {ARDestroy deso}
 | STRING_ {ProcessCmdSet deso name $1 "IMGSVRApply deso 1"}
 | NAME_ CLEAR_ {ProcessCmdSet deso name {}}
 | NAME_ STRING_ {ProcessCmdSet deso name $2 "IMGSVRApply deso 1"}
 | SIZE_ numeric numeric sizeOpt
   {ProcessCmdSet4 deso width $2 height $3 rformat $4 rformat,msg $4}
 | SAVE_ yesno {ProcessCmdSet deso save $2}
 | FRAME_ frame {ProcessCmdSet deso mode $2}
 | SURVEY_ survey {ProcessCmdSet deso survey $2}
 | UPDATE_ update

 | numeric numeric deg {ProcessCmdSet4 deso x $1 y $2 skyformat $3 skyformat,msg $3 "IMGSVRApply deso 1"}
 | SEXSTR_ SEXSTR_ sex {ProcessCmdSet4 deso x $1 y $2 skyformat $3 skyformat,msg $3 "IMGSVRApply deso 1"}
 # backward compatibility
 | COORD_ numeric numeric deg {ProcessCmdSet4 deso x $2 y $3 skyformat $4 skyformat,msg $4 "IMGSVRApply deso 1"}
 | COORD_ SEXSTR_ SEXSTR_ sex {ProcessCmdSet4 deso x $2 y $3 skyformat $4 skyformat,msg $4 "IMGSVRApply deso 1"}
 ;

update : FRAME_ {IMGSVRUpdate deso; IMGSVRApply deso 1}
 | CROSSHAIR_ {IMGSVRCrosshair deso; IMGSVRApply deso 1}
 ;

survey : DSS1_ {set _ DSS1}
 | DSS2RED_ {set _ DSS2-red}
 | DSS2BLUE_ {set _ DSS2-blue}
 | DSS2INFRARED_ {set _ DSS2-infrared}
 ;

%%

proc dsseso::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_
     
     ParserError $msg $yycnt $yy_current_buffer $index_
}
