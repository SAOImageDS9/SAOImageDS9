%{
%}

#include yesno.tin
#include imgsvr.tin
#include base.tin

%start command

%token DSS1_
%token DSS2RED_
%token DSS2BLUE_
%token DSS2INFRARED_

%%

#include yesno.trl
#include imgsvr.trl
#include base.trl

command : dsseso
 | dsseso {yyclearin; YYACCEPT} CMD_
 ;

dsseso : {IMGSVRApply deso 1}
 | OPEN_ {}
 | CLOSE_ {ARDestroy deso}
 | STRING_ {IMGSVRCmdName deso $1}
 | numeric numeric coordOpt {IMGSVRCmdCoord deso $1 $2 degrees}
 | SEXSTR_ SEXSTR_ coordOpt {IMGSVRCmdCoord deso $1 $2 sexagesimal}
 | SIZE_ numeric numeric sizeOpt {IMGSVRCmdSize deso $2 $3 $4}
 | SAVE_ yesno {IMGSVRCmdSave deso $2}
 | FRAME_ frame {IMGSVRCmdMode deso $2}
 | SURVEY_ survey {IMGSVRCmdSurvey deso $2}
 | UPDATE_ update

 | COORD_ numeric numeric deg {IMGSVRCmdCoord deso $2 $3 $4}
 | COORD_ SEXSTR_ SEXSTR_ sex {IMGSVRCmdCoord deso $2 $3 $4}
 | NAME_ STRING_ {IMGSVRCmdName deso $2}
 ;

update : FRAME_ {IMGSVRCmdUpdateFrame deso}
 | CROSSHAIR_ {IMGSVRCmdUpdateCrosshair deso}
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
