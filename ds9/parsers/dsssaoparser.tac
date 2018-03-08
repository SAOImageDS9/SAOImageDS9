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

command : dsssao
 | dsssao {yyclearin; YYACCEPT} CMD_
 ;

dsssao : {IMGSVRApply dsao 1}
 | OPEN_ {}
 | CLOSE_ {ARDestroy dsao}
 | STRING_ {global dsao; set dsao(name) $1; IMGSVRApply dsao 1}
 | numeric numeric coordOpt {global dsao; set dsao(x) $1; set dsao(y) $2; set dsao(skyformat) degrees; set dsao(skyformat,msg) degrees; IMGSVRApply dsao 1}
 | SEXSTR_ SEXSTR_ coordOpt {global dsao; set dsao(x) $1; set dsao(y) $2; set dsao(skyformat) sexagesimal; set dsao(skyformat,msg) sexagesimal; IMGSVRApply dsao 1}
 | SIZE_ numeric numeric sizeOpt {global dsao; set dsao(width) $2; set dsao(height) $3; set dsao(rformat) $4; set dsao(rformat,msg) $4}
 | SAVE_ yesno {global dsao; set dsao(save) $2}
 | FRAME_ frame {global dsao; set dsao(mode) $2}
 | UPDATE_ update

 | COORD_ numeric numeric deg {global dsao; set dsao(x) $2; set dsao(y) $3; set dsao(skyformat) $4; set dsao(skyformat,msg) $4; IMGSVRApply dsao 1}
 | COORD_ SEXSTR_ SEXSTR_ sex {global dsao; set dsao(x) $2; set dsao(y) $3; set dsao(skyformat) $4; set dsao(skyformat,msg) $4; IMGSVRApply dsao 1}
 | NAME_ STRING_ {global dsao; set dsao(name) $2; IMGSVRApply dsao 1}
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
