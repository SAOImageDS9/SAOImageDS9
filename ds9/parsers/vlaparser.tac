%{
%}

#include yesno.tin
#include coords.tin
#include skyframe.tin
#include imgsvr.tin
#include numeric.tin
#include string.tin

%start command

%token STRIPE82_
%token FIRST_

%%

#include yesno.trl
#include coords.trl
#include skyframe.trl
#include imgsvr.trl
#include numeric.trl

command : vla
 | vla {yyclearin; YYACCEPT} STRING_
 ;

vla : {IMGSVRApply dvla 1}
 | OPEN_ {}
 | CLOSE_ {ARDestroy dvla}
 | STRING_ {IMGSVRCmdName dvla $1}
 | NAME_ STRING_ {IMGSVRCmdName dvla $2}
 | SIZE_ numeric numeric sizeOpt {IMGSVRCmdSize dvla $2 $3 $4}
 | SAVE_ yesno {IMGSVRCmd dvla save $2}
 | FRAME_ frame {IMGSVRCmd dvla mode $2}
 | SURVEY_ survey {IMGSVRCmd dvla survey $2}
 | UPDATE_ update

 | numeric numeric coordOpt {IMGSVRCmdCoord dvla $1 $2 degrees}
 | SEXSTR_ SEXSTR_ coordOpt {IMGSVRCmdCoord dvla $1 $2 sexagesimal}
 | COORD_ numeric numeric deg {IMGSVRCmdCoord dvla $2 $3 $4}
 | COORD_ SEXSTR_ SEXSTR_ sex {IMGSVRCmdCoord dvla $2 $3 $4}
 ;

update : FRAME_ {IMGSVRCmdUpdate dvla}
 | CROSSHAIR_ {IMGSVRCmdCrosshair dvla}
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
