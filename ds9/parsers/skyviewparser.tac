%{
%}
#include def.tin

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
 | skyview {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

skyview : {IMGSVRApply dskyview 1}
 | OPEN_ {}
 | CLOSE_ {ARDestroy dskyview}
 | STRING_ {ProcessCmdSet dskyview name $1 "IMGSVRApply dskyview 1"}
 | NAME_ CLEAR_ {ProcessCmdSet dskyview name {}}
 | NAME_ STRING_ {ProcessCmdSet dskyview name $2 "IMGSVRApply dskyview 1"}
 | SIZE_ numeric numeric sizeOpt
   {ProcessCmdSet4 dskyview width $2 height $3 rformat $4 rformat,msg $4}
 | PIXELS_ numeric numeric {ProcessCmdSet2 dskyview width,pixels $2 height,pixels $3}
 | SAVE_ yesno {ProcessCmdSet dskyview save $2}
 | FRAME_ frame {ProcessCmdSet dskyview mode $2}
 | SURVEY_ STRING_ {ProcessCmdSet dskyview survey $2}
 | UPDATE_ update

 | numeric numeric deg {ProcessCmdSet4 dskyview x $1 y $2 skyformat $3 skyformat,msg $3 "IMGSVRApply dskyview 1"}
 | SEXSTR_ SEXSTR_ sex {ProcessCmdSet4 dskyview x $1 y $2 skyformat $3 skyformat,msg $3 "IMGSVRApply dskyview 1"}
 # backward compatibility
 | COORD_ numeric numeric deg {ProcessCmdSet4 dskyview x $2 y $3 skyformat $4 skyformat,msg $4 "IMGSVRApply dskyview 1"}
 | COORD_ SEXSTR_ SEXSTR_ sex {ProcessCmdSet4 dskyview x $2 y $3 skyformat $4 skyformat,msg $4 "IMGSVRApply dskyview 1"}
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
