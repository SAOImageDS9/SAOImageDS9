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

command : nvss
 | nvss {yyclearin; YYACCEPT} STRING_
 ;

nvss : {IMGSVRApply dnvss 1}
 | OPEN_ {}
 | CLOSE_ {ARDestroy dnvss}
 | STRING_ {IMGSVRCmdName dnvss $1}
 | numeric numeric coordOpt {IMGSVRCmdCoord dnvss $1 $2 degrees}
 | SEXSTR_ SEXSTR_ coordOpt {IMGSVRCmdCoord dnvss $1 $2 sexagesimal}
 | SIZE_ numeric numeric sizeOpt {IMGSVRCmdSize dnvss $2 $3 $4}
 | SAVE_ yesno {IMGSVRCmdSave dnvss $2}
 | FRAME_ frame {IMGSVRCmdMode dnvss $2}
 | UPDATE_ update

 | COORD_ numeric numeric deg {IMGSVRCmdCoord dnvss $2 $3 $4}
 | COORD_ SEXSTR_ SEXSTR_ sex {IMGSVRCmdCoord dnvss $2 $3 $4}
 | NAME_ STRING_ {IMGSVRCmdName dnvss $2}
 ;

update : FRAME_ {IMGSVRCmdUpdateFrame dnvss}
 | CROSSHAIR_ {IMGSVRCmdUpdateCrosshair dnvss}
 ;

%%

proc nvss::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_
     
     ParserError $msg $yycnt $yy_current_buffer $index_
}
