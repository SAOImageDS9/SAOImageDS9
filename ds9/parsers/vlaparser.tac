%{
%}

#include yesno.tin
#include imgsvr.tin
#include base.tin

%start command

%token STRIPE82_
%token FIRST_

%%

#include yesno.trl
#include imgsvr.trl
#include base.trl

command : vla
 | vla {yyclearin; YYACCEPT} CMD_
 ;

vla : {IMGSVRApply dvla 1}
 | OPEN_ {}
 | CLOSE_ {ARDestroy dvla}
 | STRING_ {global dvla; set dvla(name) $1; IMGSVRApply dvla 1}
 | numeric numeric coordOpt {global dvla; set dvla(x) $1; set dvla(y) $2; set dvla(skyformat) degrees; set dvla(skyformat,msg) degrees; IMGSVRApply dvla 1}
 | SEXSTR_ SEXSTR_ coordOpt {global dvla; set dvla(x) $1; set dvla(y) $2; set dvla(skyformat) sexagesimal; set dvla(skyformat,msg) sexagesimal; IMGSVRApply dvla 1}
 | SIZE_ numeric numeric sizeOpt {global dvla; set dvla(width) $2; set dvla(height) $3; set dvla(rformat) $4; set dvla(rformat,msg) $4}
 | SAVE_ yesno {global dvla; set dvla(save) $2}
 | FRAME_ frame {global dvla; set dvla(mode) $2}
 | UPDATE_ update
 | SURVEY_ survey {global dvla; set dvla(survey) $2}

 | COORD_ numeric numeric deg {global dvla; set dvla(x) $2; set dvla(y) $3; set dvla(skyformat) $4; set dvla(skyformat,msg) $4; IMGSVRApply dvla 1}
 | COORD_ SEXSTR_ SEXSTR_ sex {global dvla; set dvla(x) $2; set dvla(y) $3; set dvla(skyformat) $4; set dvla(skyformat,msg) $4; IMGSVRApply dvla 1}
 | NAME_ STRING_ {global dvla; set dvla(name) $2; IMGSVRApply dvla 1}
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
