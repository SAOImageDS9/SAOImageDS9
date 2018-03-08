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

command : 2mass
 | 2mass {yyclearin; YYACCEPT} CMD_
 ;

2mass : {IMGSVRApply dtwomass 1}
 | OPEN_ {}
 | CLOSE_ {ARDestroy dtwomass}
 | STRING_ {global dtwomass; set dtwomass(name) $1; IMGSVRApply dtwomass 1}
 | numeric numeric coordOpt {global dtwomass; set dtwomass(x) $1; set dtwomass(y) $2; set dtwomass(skyformat) degrees; set dtwomass(skyformat,msg) degrees; IMGSVRApply dtwomass 1}
 | SEXSTR_ SEXSTR_ coordOpt {global dtwomass; set dtwomass(x) $1; set dtwomass(y) $2; set dtwomass(skyformat) sexagesimal; set dtwomass(skyformat,msg) sexagesimal; IMGSVRApply dtwomass 1}
 | SIZE_ numeric numeric sizeOpt {global dtwomass; set dtwomass(width) $2; set dtwomass(height) $3; set dtwomass(rformat) $4; set dtwomass(rformat,msg) $4}
 | SAVE_ yesno {global dtwomass; set dtwomass(save) $2}
 | FRAME_ frame {global dtwomass; set dtwomass(mode) $2}
 | UPDATE_ update
 | SURVEY_ survey {global dtwomass; set dtwomass(survey) $2}

 | COORD_ numeric numeric deg {global dtwomass; set dtwomass(x) $2; set dtwomass(y) $3; set dtwomass(skyformat) $4; set dtwomass(skyformat,msg) $4; IMGSVRApply dtwomass 1}
 | COORD_ SEXSTR_ SEXSTR_ sex {global dtwomass; set dtwomass(x) $2; set dtwomass(y) $3; set dtwomass(skyformat) $4; set dtwomass(skyformat,msg) $4; IMGSVRApply dtwomass 1}
 | NAME_ STRING_ {global dtwomass; set dtwomass(name) $2; IMGSVRApply dtwomass 1}
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
