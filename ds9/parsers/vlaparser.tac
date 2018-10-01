%{
%}
#include def.tin

#include yesno.tin
#include imgsvr.tin
#include numeric.tin
#include string.tin

%start command

%token STRIPE82_
%token FIRST_

%%

#include yesno.trl
#include imgsvr.trl
#include numeric.trl

command : vla
 | vla {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

vla : {IMGSVRApply dvla 1}
 | OPEN_ {}
 | CLOSE_ {ARDestroy dvla}
 | STRING_ {ProcessCmdSet dvla name $1 "IMGSVRApply dvla 1"}
 | NAME_ CLEAR_ {ProcessCmdSet dvla name {}}
 | NAME_ STRING_ {ProcessCmdSet dvla name $2 "IMGSVRApply dvla 1"}
 | SIZE_ numeric numeric sizeOpt
   {ProcessCmdSet4 dvla width $2 height $3 rformat $4 rformat,msg $4}
 | SAVE_ yesno {ProcessCmdSet dvla save $2}
 | FRAME_ frame {ProcessCmdSet dvla mode $2}
 | SURVEY_ survey {ProcessCmdSet dvla survey $2}
 | UPDATE_ update

 | numeric numeric deg {ProcessCmdSet4 dvla x $1 y $2 skyformat $3 skyformat,msg $3 "IMGSVRApply dvla 1"}
 | SEXSTR_ SEXSTR_ sex {ProcessCmdSet4 dvla x $1 y $2 skyformat $3 skyformat,msg $3 "IMGSVRApply dvla 1"}
 # backward compatibility
 | COORD_ numeric numeric deg {ProcessCmdSet4 dvla x $2 y $3 skyformat $4 skyformat,msg $4 "IMGSVRApply dvla 1"}
 | COORD_ SEXSTR_ SEXSTR_ sex {ProcessCmdSet4 dvla x $2 y $3 skyformat $4 skyformat,msg $4 "IMGSVRApply dvla 1"}
 ;

update : FRAME_ {IMGSVRUpdate dvla; IMGSVRApply dvla 1}
 | CROSSHAIR_ {IMGSVRCrosshair dvla; IMGSVRApply dvla 1}
 ;

survey : STRIPE82_ {set _ stripe82}
 | FIRST_ {set _ first}
 ;

%%

proc vla::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_
     
     ParserError $msg $yycnt $yy_current_buffer $index_
}
