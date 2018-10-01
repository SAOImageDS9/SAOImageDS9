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

command : twomass
 | twomass {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

twomass : {IMGSVRApply dtwomass 1}
 | OPEN_ {}
 | CLOSE_ {ARDestroy dtwomass}
 | STRING_ {ProcessCmdSet dtwomass name $1 "IMGSVRApply dtwomass 1"}
 | NAME_ CLEAR_ {ProcessCmdSet dtwomass name {}}
 | NAME_ STRING_ {ProcessCmdSet dtwomass name $2 "IMGSVRApply dtwomass 1"}
 | SIZE_ numeric numeric sizeOpt
   {ProcessCmdSet4 dtwomass width $2 height $3 rformat $4 rformat,msg $4}
 | SAVE_ yesno {ProcessCmdSet dtwomass save $2}
 | FRAME_ frame {ProcessCmdSet dtwomass mode $2}
 | SURVEY_ survey {ProcessCmdSet dtwomass survey $2}
 | UPDATE_ update

 | numeric numeric deg {ProcessCmdSet4 dtwomass x $1 y $2 skyformat $3 skyformat,msg $3 "IMGSVRApply dtwomass 1"}
 | SEXSTR_ SEXSTR_ sex {ProcessCmdSet4 dtwomass x $1 y $2 skyformat $3 skyformat,msg $3 "IMGSVRApply dtwomass 1"}
 # backward compatibility
 | COORD_ numeric numeric deg {ProcessCmdSet4 dtwomass x $2 y $3 skyformat $4 skyformat,msg $4 "IMGSVRApply dtwomass 1"}
 | COORD_ SEXSTR_ SEXSTR_ sex {ProcessCmdSet4 dtwomass x $2 y $3 skyformat $4 skyformat,msg $4 "IMGSVRApply dtwomass 1"}
 ;

update : FRAME_ {IMGSVRUpdate dtwomass; IMGSVRApply dtwomass 1}
 | CROSSHAIR_ {IMGSVRCrosshair dtwomass; IMGSVRApply dtwomass 1}
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
