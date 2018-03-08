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
 | STRING_ {IMGSVRCmdName dvla $1}
 | numeric numeric coordOpt {IMGSVRCmdCoord dvla $1 $2 degrees}
 | SEXSTR_ SEXSTR_ coordOpt {IMGSVRCmdCoord dvla $1 $2 sexagesimal}
 | SIZE_ numeric numeric sizeOpt {IMGSVRCmdSize dvla $2 $3 $4}
 | SAVE_ yesno {IMGSVRCmdSave dvla $2}
 | FRAME_ frame {IMGSVRCmdMode dvla $2}
 | SURVEY_ survey {IMGSVRCmdSurvey dvla $2}
 | UPDATE_ update

 | COORD_ numeric numeric deg {IMGSVRCmdCoord dvla $2 $3 $4}
 | COORD_ SEXSTR_ SEXSTR_ sex {IMGSVRCmdCoord dvla $2 $3 $4}
 | NAME_ STRING_ {IMGSVRCmdName dvla $2}
 ;

update : FRAME_ {IMGSVRCmdUpdateFrame dvla}
 | CROSSHAIR_ {IMGSVRCmdUpdateCrosshair dvla}
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
