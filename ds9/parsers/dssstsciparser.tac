%{
%}
#include def.tin

#include yesno.tin
#include imgsvr.tin
#include numeric.tin
#include string.tin

%start command

%token POSS2RED_
%token POSS2INFRARED_
%token POSS2BLUE_
%token POSS1BLUE_
%token POSS1RED_
%token ALL_
%token QUICKV_
%token GSC2_
%token GSC1_

%%

#include yesno.trl
#include imgsvr.trl
#include numeric.trl

command : dssstsci
 | dssstsci {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

dssstsci : {IMGSVRApply dstsci 1}
 | OPEN_ {}
 | CLOSE_ {ARDestroy dstsci}
 | STRING_ {ProcessCmdSet dstsci name $1 "IMGSVRApply dstsci 1"}
 | NAME_ CLEAR_ {ProcessCmdSet dstsci name {}}
 | NAME_ STRING_ {ProcessCmdSet dstsci name $2 "IMGSVRApply dstsci 1"}
 | SIZE_ numeric numeric sizeOpt
   {ProcessCmdSet4 dstsci width $2 height $3 rformat $4 rformat,msg $4}
 | SAVE_ yesno {ProcessCmdSet dstsci save $2}
 | FRAME_ frame {ProcessCmdSet dstsci mode $2}
 | SURVEY_ survey {ProcessCmdSet dstsci survey $2}
 | UPDATE_ update

 | numeric numeric deg {ProcessCmdSet4 dstsci x $1 y $2 skyformat $3 skyformat,msg $3 "IMGSVRApply dstsci 1"}
 | SEXSTR_ SEXSTR_ sex {ProcessCmdSet4 dstsci x $1 y $2 skyformat $3 skyformat,msg $3 "IMGSVRApply dstsci 1"}
 # backward compatibility
 | COORD_ numeric numeric deg {ProcessCmdSet4 dstsci x $2 y $3 skyformat $4 skyformat,msg $4 "IMGSVRApply dstsci 1"}
 | COORD_ SEXSTR_ SEXSTR_ sex {ProcessCmdSet4 dstsci x $2 y $3 skyformat $4 skyformat,msg $4 "IMGSVRApply dstsci 1"}
 ;

update : FRAME_ {IMGSVRUpdate dstsci; IMGSVRApply dstsci 1}
 | CROSSHAIR_ {IMGSVRCrosshair dstsci; IMGSVRApply dstsci 1}
 ;

survey : POSS2RED_ {set _ poss2ukstu_red}
 | POSS2INFRARED_ {set _ poss2ukstu_ir}
 | POSS2BLUE_ {set _ poss2ukstu_blue}
 | POSS1BLUE_ {set _ poss1_blue}
 | POSS1RED_ {set _ poss1_red}
 | ALL_ {set _ all}
 | QUICKV_ {set _ quickv}
 | GSC2_ {set _ phase2_gsc2}
 | GSC1_ {set _ phase2_gsc1}
 ;

%%

proc dssstsci::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_
     
     ParserError $msg $yycnt $yy_current_buffer $index_
}
