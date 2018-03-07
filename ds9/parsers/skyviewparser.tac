%{
%}

#include yesno.tin
#include imgsvr.tin
#include base.tin

%start command

%token PIXELS_

%%

#include yesno.trl
#include imgsvr.trl
#include base.trl

command : skyview
 | skyview {yyclearin; YYACCEPT} CMD_
 ;

# COORD_ is depricated
# NAME_ is depricated
# new optional WCS_ FK5_, does nothing
# SIZE_ default is DEGREES_

skyview : {IMGSVRApply dskyview 1}
 | OPEN_ {}
 | CLOSE_ {ARDestroy dskyview}
 | STRING_ {global dskyview; set dskyview(name) $1; IMGSVRApply dskyview 1}
 | numeric numeric coordOpt {global dskyview; set dskyview(x) $1; set dskyview(y) $2; set dskyview(skyformat) degrees; set dskyview(skyformat,msg) degrees; IMGSVRApply dskyview 1}
 | SEXSTR_ SEXSTR_ coordOpt {global dskyview; set dskyview(x) $1; set dskyview(y) $2; set dskyview(skyformat) sexagesimal; set dskyview(skyformat,msg) sexagesimal; IMGSVRApply dskyview 1}
 | SIZE_ numeric numeric sizeOpt {global dskyview; set dskyview(width) $2; set dskyview(height) $3; set dskyview(rformat) $4; set dskyview(rformat,msg) $4}
 | PIXELS_ numeric numeric {global dskyview; set dskyview(width,pixels) $2; set dskyview(height,pixels) $3}
 | SAVE_ yesno {global dskyview; set dskyview(save) $2}
 | FRAME_ frame {global dskyview; set dskyview(mode) $2}
 | UPDATE_ update
 | SURVEY_ STRING_ {global dskyview; set dskyview(survey) $2}

 | COORD_ numeric numeric deg {global dskyview; set dskyview(x) $2; set dskyview(y) $3; set dskyview(skyformat) $4; set dskyview(skyformat,msg) $4; IMGSVRApply dskyview 1}
 | COORD_ SEXSTR_ SEXSTR_ sex {global dskyview; set dskyview(x) $2; set dskyview(y) $3; set dskyview(skyformat) $4; set dskyview(skyformat,msg) $4; IMGSVRApply dskyview 1}
 | NAME_ STRING_ {global dskyview; set dskyview(name) $2; IMGSVRApply dskyview 1}
 ;

update : FRAME_ {IMGSVRUpdate dskyview; IMGSVRApply dskyview 1}
 | CROSSHAIR_ {IMGSVRCrosshair dskyview; IMGSVRApply dskyview 1}
 ;

%%

proc skyview::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_
     
     ParserError $msg $yycnt $yy_current_buffer $index_
}
