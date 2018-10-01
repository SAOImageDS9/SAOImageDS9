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

command : dsssao
 | dsssao {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

dsssao : {IMGSVRApply dsao 1}
 | OPEN_ {}
 | CLOSE_ {ARDestroy dsao}
 | STRING_ {ProcessCmdSet dsao name $1 "IMGSVRApply dsao 1"}
 | NAME_ CLEAR_ {ProcessCmdSet dsao name {}}
 | NAME_ STRING_ {ProcessCmdSet dsao name $2 "IMGSVRApply dsao 1"}
 | SIZE_ numeric numeric sizeOpt
   {ProcessCmdSet4 dsao width $2 height $3 rformat $4 rformat,msg $4}
 | SAVE_ yesno {ProcessCmdSet dsao save $2}
 | FRAME_ frame {ProcessCmdSet dsao mode $2}
 | UPDATE_ update

 | numeric numeric deg {ProcessCmdSet4 dsao x $1 y $2 skyformat $3 skyformat,msg $3 "IMGSVRApply dsao 1"}
 | SEXSTR_ SEXSTR_ sex {ProcessCmdSet4 dsao x $1 y $2 skyformat $3 skyformat,msg $3 "IMGSVRApply dsao 1"}
 # backward compatibility
 | COORD_ numeric numeric deg {ProcessCmdSet4 dsao x $2 y $3 skyformat $4 skyformat,msg $4 "IMGSVRApply dsao 1"}
 | COORD_ SEXSTR_ SEXSTR_ sex {ProcessCmdSet4 dsao x $2 y $3 skyformat $4 skyformat,msg $4 "IMGSVRApply dsao 1"}
 ;

update : FRAME_ {IMGSVRUpdate dsao; IMGSVRApply dsao 1}
 | CROSSHAIR_ {IMGSVRCrosshair dsao; IMGSVRApply dsao 1}
 ;

%%

proc dsssao::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_
     
     ParserError $msg $yycnt $yy_current_buffer $index_
}
