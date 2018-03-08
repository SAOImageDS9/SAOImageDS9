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

command : vlss
 | vlss {yyclearin; YYACCEPT} CMD_
 ;

vlss : {IMGSVRApply dvlss 1}
 | OPEN_ {}
 | CLOSE_ {ARDestroy dvlss}
 | STRING_ {IMGSVRCmdName dvlss $1}
 | numeric numeric coordOpt {IMGSVRCmdCoord dvlss $1 $2 degrees}
 | SEXSTR_ SEXSTR_ coordOpt {IMGSVRCmdCoord dvlss $1 $2 sexagesimal}
 | SIZE_ numeric numeric sizeOpt {IMGSVRCmdSize dvlss $2 $3 $4}
 | SAVE_ yesno {IMGSVRCmdSave dvlss $2}
 | FRAME_ frame {IMGSVRCmdMode dvlss $2}
 | UPDATE_ update

 | COORD_ numeric numeric deg {IMGSVRCmdCoord dvlss $2 $3 $4}
 | COORD_ SEXSTR_ SEXSTR_ sex {IMGSVRCmdCoord dvlss $2 $3 $4}
 | NAME_ STRING_ {IMGSVRCmdName dvlss $2}
 ;

update : FRAME_ {IMGSVRCmdUpdateFrame dvlss}
 | CROSSHAIR_ {IMGSVRCmdUpdateCrosshair dvlss}
 ;

%%

proc vlss::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_
     
     ParserError $msg $yycnt $yy_current_buffer $index_
}
