%{
%}

#include yesno.tin
#include coords.tin
#include skyframe.tin
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
#include coords.trl
#include skyframe.trl
#include imgsvr.trl
#include numeric.trl

command : dsseso
 | dsseso {yyclearin; YYACCEPT} STRING_
 ;

dsseso : {IMGSVRApply deso 1}
 | OPEN_ {}
 | CLOSE_ {ARDestroy deso}
 | STRING_ {IMGSVRCmdName deso $1}
 | NAME_ STRING_ {IMGSVRCmdName deso $2}
 | SIZE_ numeric numeric sizeOpt {IMGSVRCmdSize deso $2 $3 $4}
 | SAVE_ yesno {IMGSVRCmd deso save $2}
 | FRAME_ frame {IMGSVRCmd deso mode $2}
 | SURVEY_ survey {IMGSVRCmd deso survey $2}
 | UPDATE_ update

 | numeric numeric coordOpt {IMGSVRCmdCoord deso $1 $2 degrees}
 | SEXSTR_ SEXSTR_ coordOpt {IMGSVRCmdCoord deso $1 $2 sexagesimal}
 | COORD_ numeric numeric deg {IMGSVRCmdCoord deso $2 $3 $4}
 | COORD_ SEXSTR_ SEXSTR_ sex {IMGSVRCmdCoord deso $2 $3 $4}
 ;

update : FRAME_ {IMGSVRCmdUpdate deso}
 | CROSSHAIR_ {IMGSVRCmdCrosshair deso}
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
