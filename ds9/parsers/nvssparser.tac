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

command : nvss
 | nvss {yyclearin; YYACCEPT} CMD_
 ;

nvss : {IMGSVRApply dnvss 1}
 | OPEN_ {}
 | CLOSE_ {ARDestroy dnvss}
 | STRING_ {global dnvss; set dnvss(name) $1; IMGSVRApply dnvss 1}
 | numeric numeric coordOpt {global dnvss; set dnvss(x) $1; set dnvss(y) $2; set dnvss(skyformat) degrees; set dnvss(skyformat,msg) degrees; IMGSVRApply dnvss 1}
 | SEXSTR_ SEXSTR_ coordOpt {global dnvss; set dnvss(x) $1; set dnvss(y) $2; set dnvss(skyformat) sexagesimal; set dnvss(skyformat,msg) sexagesimal; IMGSVRApply dnvss 1}
 | SIZE_ numeric numeric sizeOpt {global dnvss; set dnvss(width) $2; set dnvss(height) $3; set dnvss(rformat) $4; set dnvss(rformat,msg) $4}
 | SAVE_ yesno {global dnvss; set dnvss(save) $2}
 | FRAME_ frame {global dnvss; set dnvss(mode) $2}
 | UPDATE_ update

 | COORD_ numeric numeric deg {global dnvss; set dnvss(x) $2; set dnvss(y) $3; set dnvss(skyformat) $4; set dnvss(skyformat,msg) $4; IMGSVRApply dnvss 1}
 | COORD_ SEXSTR_ SEXSTR_ sex {global dnvss; set dnvss(x) $2; set dnvss(y) $3; set dnvss(skyformat) $4; set dnvss(skyformat,msg) $4; IMGSVRApply dnvss 1}
 | NAME_ STRING_ {global dnvss; set dnvss(name) $2; IMGSVRApply dnvss 1}
 ;

update : FRAME_ {IMGSVRUpdate dnvss; IMGSVRApply dnvss 1}
 | CROSSHAIR_ {IMGSVRCrosshair dnvss; IMGSVRApply dnvss 1}
 ;

%%

proc nvss::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_
     
     ParserError $msg $yycnt $yy_current_buffer $index_
}
