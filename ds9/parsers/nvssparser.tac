%{
%}

#include yesno.tin
#include coords.tin
#include skyframe.tin
#include imgsvr.tin
#include numeric.tin
#include string.tin

%start command

%%

#include yesno.trl
#include coords.trl
#include skyframe.trl
#include imgsvr.trl
#include numeric.trl

command : nvss
 | nvss {yyclearin; YYACCEPT} STRING_
 ;

nvss : {IMGSVRApply dnvss 1}
 | OPEN_ {}
 | CLOSE_ {ARDestroy dnvss}
 | STRING_ {IMGSVRCmdName dnvss $1}
 | NAME_ STRING_ {IMGSVRCmdName dnvss $2}
 | SIZE_ numeric numeric sizeOpt {IMGSVRCmdSize dnvss $2 $3 $4}
 | SAVE_ yesno {IMGSVRCmd dnvss save $2}
 | FRAME_ frame {IMGSVRCmd dnvss mode $2}
 | UPDATE_ update

 | numeric numeric coordOpt {IMGSVRCmdCoord dnvss $1 $2 degrees}
 | SEXSTR_ SEXSTR_ coordOpt {IMGSVRCmdCoord dnvss $1 $2 sexagesimal}
 | COORD_ numeric numeric deg {IMGSVRCmdCoord dnvss $2 $3 $4}
 | COORD_ SEXSTR_ SEXSTR_ sex {IMGSVRCmdCoord dnvss $2 $3 $4}
 ;

update : FRAME_ {IMGSVRCmdUpdate dnvss}
 | CROSSHAIR_ {IMGSVRCmdCrosshair dnvss}
 ;

%%

proc nvss::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_
     
     ParserError $msg $yycnt $yy_current_buffer $index_
}
