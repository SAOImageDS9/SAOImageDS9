%{
%}

#include yesno.tin
#include imgsvr.tin
#include numeric.tin
#include string.tin

%start command

%%

#include yesno.trl
#include imgsvr.trl
#include numeric.trl

command : dsssao
 | dsssao {yyclearin; YYACCEPT} STRING_
 ;

dsssao : {IMGSVRApply dsao 1}
 | OPEN_ {}
 | CLOSE_ {ARDestroy dsao}
 | STRING_ {IMGSVRCmdName dsao $1}
 | NAME_ STRING_ {IMGSVRCmdName dsao $2}
 | SIZE_ numeric numeric sizeOpt {IMGSVRCmdSize dsao $2 $3 $4}
 | SAVE_ yesno {IMGSVRCmd dsao save $2}
 | FRAME_ frame {IMGSVRCmd dsao mode $2}
 | UPDATE_ update

 | numeric numeric coordOpt {IMGSVRCmdCoord dsao $1 $2 degrees}
 | SEXSTR_ SEXSTR_ coordOpt {IMGSVRCmdCoord dsao $1 $2 sexagesimal}
 | COORD_ numeric numeric deg {IMGSVRCmdCoord dsao $2 $3 $4}
 | COORD_ SEXSTR_ SEXSTR_ sex {IMGSVRCmdCoord dsao $2 $3 $4}
 ;

update : FRAME_ {IMGSVRCmdUpdate dsao}
 | CROSSHAIR_ {IMGSVRCmdCrosshair dsao}
 ;

%%

proc dsssao::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_
     
     ParserError $msg $yycnt $yy_current_buffer $index_
}
