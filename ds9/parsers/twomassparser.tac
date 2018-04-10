%{
%}

#include yesno.tin
#include imgsvr.tin
#include numeric.tin
#include string.tin

%start command

%%

#include yesno.trl
#include imgsvr.trl
#include numeric.trl

command : 2mass
 | 2mass {yyclearin; YYACCEPT} STRING_
 ;

2mass : {IMGSVRApply dtwomass 1}
 | OPEN_ {}
 | CLOSE_ {ARDestroy dtwomass}
 | STRING_ {IMGSVRCmd dtwomass name $1}
 | NAME_ STRING_ {IMGSVRCmd dtwomass name $2}
 | SIZE_ numeric numeric sizeOpt {IMGSVRCmdSize dtwomass $2 $3 $4}
 | SAVE_ yesno {IMGSVRCmd dtwomass save $2}
 | FRAME_ frame {IMGSVRCmd dtwomass mode $2}
 | SURVEY_ survey {IMGSVRCmd dtwomass survey $2}
 | UPDATE_ update

 | numeric numeric coordOpt {IMGSVRCmdCoord dtwomass $1 $2 degrees}
 | SEXSTR_ SEXSTR_ coordOpt {IMGSVRCmdCoord dtwomass $1 $2 sexagesimal}
 | COORD_ numeric numeric deg {IMGSVRCmdCoord dtwomass $2 $3 $4}
 | COORD_ SEXSTR_ SEXSTR_ sex {IMGSVRCmdCoord dtwomass $2 $3 $4}
 ;

update : FRAME_ {IMGSVRCmdUpdate dtwomass}
 | CROSSHAIR_ {IMGSVRCmdCrosshair dtwomass}
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
