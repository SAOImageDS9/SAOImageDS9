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
 | STRING_ {global dvlss; set dvlss(name) $1; IMGSVRApply dvlss 1}
 | numeric numeric coordOpt {global dvlss; set dvlss(x) $1; set dvlss(y) $2; set dvlss(skyformat) degrees; set dvlss(skyformat,msg) degrees; IMGSVRApply dvlss 1}
 | SEXSTR_ SEXSTR_ coordOpt {global dvlss; set dvlss(x) $1; set dvlss(y) $2; set dvlss(skyformat) sexagesimal; set dvlss(skyformat,msg) sexagesimal; IMGSVRApply dvlss 1}
 | SIZE_ numeric numeric sizeOpt {global dvlss; set dvlss(width) $2; set dvlss(height) $3; set dvlss(rformat) $4; set dvlss(rformat,msg) $4}
 | SAVE_ yesno {global dvlss; set dvlss(save) $2}
 | FRAME_ frame {global dvlss; set dvlss(mode) $2}
 | UPDATE_ update

 | COORD_ numeric numeric deg {global dvlss; set dvlss(x) $2; set dvlss(y) $3; set dvlss(skyformat) $4; set dvlss(skyformat,msg) $4; IMGSVRApply dvlss 1}
 | COORD_ SEXSTR_ SEXSTR_ sex {global dvlss; set dvlss(x) $2; set dvlss(y) $3; set dvlss(skyformat) $4; set dvlss(skyformat,msg) $4; IMGSVRApply dvlss 1}
 | NAME_ STRING_ {global dvlss; set dvlss(name) $2; IMGSVRApply dvlss 1}
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
