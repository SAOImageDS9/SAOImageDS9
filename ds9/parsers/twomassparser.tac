%{
%}

#include yesno.tin
#include imgsvr.tin
#include base.tin

%start command

%%

#include yesno.trl
#include imgsvr.trl
#include base.trl

command : 2mass
 | 2mass {yyclearin; YYACCEPT} CMD_
 ;

2mass : {IMGSVRApply dtwomass 1}
 | OPEN_ {}
 | CLOSE_ {ARDestroy dtwomass}
 | STRING_ {IMGSVRCmdName dtwomass $1}
 | numeric numeric coordOpt {IMGSVRCmdCoord dtwomass $1 $2 degrees}
 | SEXSTR_ SEXSTR_ coordOpt {IMGSVRCmdCoord dtwomass $1 $2 sexagesimal}
 | SIZE_ numeric numeric sizeOpt {IMGSVRCmdSize dtwomass $2 $3 $4}
 | SAVE_ yesno {IMGSVRCmdSave dtwomass $2}
 | FRAME_ frame {IMGSVRCmdMode dtwomass $2}
 | SURVEY_ survey {IMGSVRCmdSurvey dtwomass $2}
 | UPDATE_ update

 | COORD_ numeric numeric deg {IMGSVRCmdCoord dtwomass $2 $3 $4}
 | COORD_ SEXSTR_ SEXSTR_ sex {IMGSVRCmdCoord dtwomass $2 $3 $4}
 | NAME_ STRING_ {IMGSVRCmdName dtwomass $2}
 ;

update : FRAME_ {IMGSVRCmdUpdateFrame dtwomass}
 | CROSSHAIR_ {IMGSVRCmdUpdateCrosshair dtwomass}
 ;

survey : 'j' {set _ $1}
 | 'h' {set _ $1}
 | 'k' {set _ $1}
 ;

%%

proc twomass::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_
     
     ParserError $msg $yycnt $yy_current_buffer $index_
}
