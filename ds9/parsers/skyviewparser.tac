%{
%}

#include yesno.tin
#include imgsvr.tin
#include numeric.tin
#include string.tin

%start command

%token PIXELS_

%%

#include yesno.trl
#include imgsvr.trl
#include numeric.trl

command : skyview
 | skyview {yyclearin; YYACCEPT} STRING_
 ;

skyview : {IMGSVRApply dskyview 1}
 | OPEN_ {}
 | CLOSE_ {ARDestroy dskyview}
 | STRING_ {IMGSVRCmdName dskyview $1}
 | numeric numeric coordOpt {IMGSVRCmdCoord dskyview $1 $2 degrees}
 | SEXSTR_ SEXSTR_ coordOpt {IMGSVRCmdCoord dskyview $1 $2 sexagesimal}
 | SIZE_ numeric numeric sizeOpt {IMGSVRCmdSize dskyview $2 $3 $4}
 | PIXELS_ numeric numeric {IMGSVRCmdPixels dskyview $2 $3}
 | SAVE_ yesno {IMGSVRCmdSave dskyview $2}
 | FRAME_ frame {IMGSVRCmdMode dskyview $2}
 | SURVEY_ STRING_ {IMGSVRCmdSurvey dskyview $2}
 | UPDATE_ update

 | COORD_ numeric numeric deg {IMGSVRCmdCoord dskyview $2 $3 $4}
 | COORD_ SEXSTR_ SEXSTR_ sex {IMGSVRCmdCoord dskyview $2 $3 $4}
 | NAME_ STRING_ {IMGSVRCmdName dskyview $2}
 ;

update : FRAME_ {IMGSVRCmdUpdateFrame dskyview}
 | CROSSHAIR_ {IMGSVRCmdUpdateCrosshair dskyview}
 ;

%%

proc skyview::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_
     
     ParserError $msg $yycnt $yy_current_buffer $index_
}
