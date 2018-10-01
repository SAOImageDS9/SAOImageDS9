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

command : vlss
 | vlss {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

vlss : {IMGSVRApply dvlss 1}
 | OPEN_ {}
 | CLOSE_ {ARDestroy dvlss}
 | STRING_ {ProcessCmdSet dvlss name $1 "IMGSVRApply dvlss 1"}
 | NAME_ CLEAR_ {ProcessCmdSet dvlss name {}}
 | NAME_ STRING_ {ProcessCmdSet dvlss name $2 "IMGSVRApply dvlss 1"}
 | SIZE_ numeric numeric sizeOpt
   {ProcessCmdSet4 dvlss width $2 height $3 rformat $4 rformat,msg $4}
 | SAVE_ yesno {ProcessCmdSet dvlss save $2}
 | FRAME_ frame {ProcessCmdSet dvlss mode $2}
 | UPDATE_ update

 | numeric numeric deg {ProcessCmdSet4 dvlss x $1 y $2 skyformat $3 skyformat,msg $3 "IMGSVRApply dvlss 1"}
 | SEXSTR_ SEXSTR_ sex {ProcessCmdSet4 dvlss x $1 y $2 skyformat $3 skyformat,msg $3 "IMGSVRApply dvlss 1"}
 # backward compatibility
 | COORD_ numeric numeric deg {ProcessCmdSet4 dvlss x $2 y $3 skyformat $4 skyformat,msg $4 "IMGSVRApply dvlss 1"}
 | COORD_ SEXSTR_ SEXSTR_ sex {ProcessCmdSet4 dvlss x $2 y $3 skyformat $4 skyformat,msg $4 "IMGSVRApply dvlss 1"}
 ;

update : FRAME_ {IMGSVRUpdate dvlss; IMGSVRApply dvlss 1}
 | CROSSHAIR_ {IMGSVRCrosshair dvlss; IMGSVRApply dvlss 1}
 ;

%%

proc vlss::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_
     
     ParserError $msg $yycnt $yy_current_buffer $index_
}
