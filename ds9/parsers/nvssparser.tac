%{
%}
#include def.tin

#include yesno.tin
#include imgsvr.tin
#include numeric.tin
#include string.tin

%start command

%%

#include yesno.trl
#include imgsvr.trl
#include numeric.trl

command : nvss
 | nvss {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

nvss : {IMGSVRApply dnvss 1}
 | OPEN_ {}
 | CLOSE_ {ARDestroy dnvss}
 | STRING_ {ProcessCmdSet dnvss name $1 "IMGSVRApply dnvss 1"}
 | NAME_ CLEAR_ {ProcessCmdSet dnvss name {}}
 | NAME_ STRING_ {ProcessCmdSet dnvss name $2 "IMGSVRApply dnvss 1"}
 | SIZE_ numeric numeric sizeOpt
   {ProcessCmdSet4 dnvss width $2 height $3 rformat $4 rformat,msg $4}
 | SAVE_ yesno {ProcessCmdSet dnvss save $2}
 | FRAME_ frame {ProcessCmdSet dnvss mode $2}
 | UPDATE_ update

 | numeric numeric deg {ProcessCmdSet4 dnvss x $1 y $2 skyformat $3 skyformat,msg $3 "IMGSVRApply dnvss 1"}
 | SEXSTR_ SEXSTR_ sex {ProcessCmdSet4 dnvss x $1 y $2 skyformat $3 skyformat,msg $3 "IMGSVRApply dnvss 1"}
 # backward compatibility
 | COORD_ numeric numeric deg {ProcessCmdSet4 dnvss x $2 y $3 skyformat $4 skyformat,msg $4 "IMGSVRApply dnvss 1"}
 | COORD_ SEXSTR_ SEXSTR_ sex {ProcessCmdSet4 dnvss x $2 y $3 skyformat $4 skyformat,msg $4 "IMGSVRApply dnvss 1"}
 ;

update : FRAME_ {IMGSVRUpdate dnvss; IMGSVRApply dnvss 1}
 | CROSSHAIR_ {IMGSVRCrosshair dnvss; IMGSVRApply dnvss 1}
 ;

%%

proc nvss::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_
     
     ParserError $msg $yycnt $yy_current_buffer $index_
}
