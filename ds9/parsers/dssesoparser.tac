%{
%}

#include yesno.tin
#include coords.tin
#include base.tin

%start command

%token CLOSE_
%token COORD_
%token CROSSHAIR_
%token CURRENT_
%token FRAME_
%token NAME_
%token NEW_
%token OPEN_
%token UPDATE_
%token SAVE_
%token SIZE_
%token SURVEY_
%token DSS1_
%token DSS2RED_
%token DSS2BLUE_
%token DSS2INFRARED_

%%

#include yesno.trl
#include coords.trl
#include base.trl

command : dsseso
 | dsseso {yyclearin; YYACCEPT} CMD_
 ;

deg : {set _ degrees}
 | DEGREES_ {set _ degrees}
 ;

sex : {set _ sexagesimal}
 | SEXAGESIMAL_ {set _ sexagesimal}
 ;

coordOpt :
 | WCS_
 | FK5_
 | WCS_ FK5_
 ;

sizeOpt : {set _ degrees}
 | skyformat {set _ $1}
 ;

# COORD_ is depricated
# NAME_ is depricated
# new optional WCS_ FK5_, does nothing
# SIZE_ default is DEGREES_

dsseso : {IMGSVRApply deso 1}
 | OPEN_ {}
 | CLOSE_ {ARDestroy deso}
 | STRING_ {global deso; set deso(name) $1; IMGSVRApply deso 1}
 | numeric numeric coordOpt {global deso; set deso(x) $1; set deso(y) $2; set deso(skyformat) degrees; set deso(skyformat,msg) degress; IMGSVRApply deso 1}
 | SEXSTR_ SEXSTR_ coordOpt {global deso; set deso(x) $1; set deso(y) $2; set deso(skyformat) sexagesimal; set deso(skyformat,msg) sexagesimal; IMGSVRApply deso 1}
 | SIZE_ numeric numeric sizeOpt {global deso; set deso(width) $2; set deso(height) $3; set deso(rformat) $4; set deso(rformat,msg) $4}
 | SAVE_ yesno {global deso; set deso(save) $2}
 | FRAME_ frame {global deso; set deso(mode) $2}
 | UPDATE_ update
 | SURVEY_ survey {global deso; set deso(survey) $2}

 | COORD_ numeric numeric deg {global deso; set deso(x) $2; set deso(y) $3; set deso(skyformat) $4; set deso(skyformat,msg) $4; IMGSVRApply deso 1}
 | COORD_ SEXSTR_ SEXSTR_ sex {global deso; set deso(x) $2; set deso(y) $3; set deso(skyformat) $4; set deso(skyformat,msg) $4; IMGSVRApply deso 1}
 | NAME_ STRING_ {global deso; set deso(name) $2; IMGSVRApply deso 1}
 ;

update : FRAME_ {IMGSVRUpdate deso; IMGSVRApply deso 1}
 | CROSSHAIR_ {IMGSVRCrosshair deso; IMGSVRApply deso 1}
 ;

frame : NEW_ {set _ new}
 | CURRENT_ {set _ current}
 ;

survey : DSS1_ {set _ DSS1}
 | DSS2RED_ {set _ DSS2-red}
 | DSS2BLUE_ {set _ DSS2-blue}
 | DSS2INFRARED_ {set _ DSS2-infrared}
 ;

%%

proc dsseso::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_
     
     ParserError $msg $yycnt $yy_current_buffer $index_
}
