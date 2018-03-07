%{
%}

#include yesno.tin
#include imgsvr.tin
#include base.tin

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
#include base.trl

command : dssstsci
 | dssstsci {yyclearin; YYACCEPT} CMD_
 ;

# COORD_ is depricated
# NAME_ is depricated
# new optional WCS_ FK5_, does nothing
# SIZE_ default is DEGREES_

dssstsci : {IMGSVRApply dstscii 1}
 | OPEN_ {}
 | CLOSE_ {ARDestroy dstscii}
 | STRING_ {global dstscii; set dstscii(name) $1; IMGSVRApply dstscii 1}
 | numeric numeric coordOpt {global dstscii; set dstscii(x) $1; set dstscii(y) $2; set dstscii(skyformat) degrees; set dstscii(skyformat,msg) degrees; IMGSVRApply dstscii 1}
 | SEXSTR_ SEXSTR_ coordOpt {global dstscii; set dstscii(x) $1; set dstscii(y) $2; set dstscii(skyformat) sexagesimal; set dstscii(skyformat,msg) sexagesimal; IMGSVRApply dstscii 1}
 | SIZE_ numeric numeric sizeOpt {global dstscii; set dstscii(width) $2; set dstscii(height) $3; set dstscii(rformat) $4; set dstscii(rformat,msg) $4}
 | SAVE_ yesno {global dstscii; set dstscii(save) $2}
 | FRAME_ frame {global dstscii; set dstscii(mode) $2}
 | UPDATE_ update
 | SURVEY_ survey {global dstscii; set dstscii(survey) $2}

 | COORD_ numeric numeric deg {global dstscii; set dstscii(x) $2; set dstscii(y) $3; set dstscii(skyformat) $4; set dstscii(skyformat,msg) $4; IMGSVRApply dstscii 1}
 | COORD_ SEXSTR_ SEXSTR_ sex {global dstscii; set dstscii(x) $2; set dstscii(y) $3; set dstscii(skyformat) $4; set dstscii(skyformat,msg) $4; IMGSVRApply dstscii 1}
 | NAME_ STRING_ {global dstscii; set dstscii(name) $2; IMGSVRApply dstscii 1}
 ;

update : FRAME_ {IMGSVRUpdate dstscii; IMGSVRApply dstscii 1}
 | CROSSHAIR_ {IMGSVRCrosshair dstscii; IMGSVRApply dstscii 1}
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
