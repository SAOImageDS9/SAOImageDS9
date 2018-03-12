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
 | dssstsci {yyclearin; YYACCEPT} STRING_
 ;

dssstsci : {IMGSVRApply dstsci 1}
 | OPEN_ {}
 | CLOSE_ {ARDestroy dstsci}
 | STRING_ {IMGSVRCmdName dstsci $1}
 | numeric numeric coordOpt {IMGSVRCmdCoord dstsci $1 $2 degrees}
 | SEXSTR_ SEXSTR_ coordOpt {IMGSVRCmdCoord dstsci $1 $2 sexagesimal}
 | SIZE_ numeric numeric sizeOpt {IMGSVRCmdSize dstsci $2 $3 $4}
 | SAVE_ yesno {IMGSVRCmdSave dstsci $2}
 | FRAME_ frame {IMGSVRCmdMode dstsci $2}
 | SURVEY_ survey {IMGSVRCmdSurvey dstsci $2}
 | UPDATE_ update

 | COORD_ numeric numeric deg {IMGSVRCmdCoord dstsci $2 $3 $4}
 | COORD_ SEXSTR_ SEXSTR_ sex {IMGSVRCmdCoord dstsci $2 $3 $4}
 | NAME_ STRING_ {IMGSVRCmdName dstsci $2}
 ;

update : FRAME_ {IMGSVRCmdUpdateFrame dstsci}
 | CROSSHAIR_ {IMGSVRCmdUpdateCrosshair dstsci}
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
