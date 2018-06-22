%{
%}
#include def.tin

#include coordsys.tin
#include wcssys.tin
#include skyframe.tin

%start contoursend

%token COLOR_
%token DASH_
%token EXP_
%token LEVELS_
%token LIMITS_
%token LOG_
%token METHOD_
%token MODE_
%token NLEVELS_
%token SCALE_
%token SCOPE_
%token SMOOTH_
%token WIDTH_

%%

#include coordsys.trl
#include wcssys.trl
#include skyframe.trl

contoursend : {ProcessSendCmdYesNo contour view}
 | COLOR_ {ProcessSendCmdGet contour color}
 | WIDTH_ {ProcessSendCmdGet contour width}
 | DASH_ {ProcessSendCmdYesNo contour dash}
 | SMOOTH_ {ProcessSendCmdGet contour smooth}
 | METHOD_ {ProcessSendCmdGet contour method}
 | NLEVELS_ {ProcessSendCmdGet contour numlevel}
 | SCALE_ {ProcessSendCmdGet contour scale}
 | LOG_ EXP_ {ProcessSendCmdGet contour log}
# backward compatibility
 | LOG_ {ProcessSendCmdGet contour log}
 | MODE_ {ProcessSendCmdGet contour mode}
 | SCOPE_ {ProcessSendCmdGet contour scope}
 | LIMITS_ {ContourSendCmdLimits}
 | LEVELS_ {ContourSendCmdLevels}
 
 | coordsys {ProcessSendCmdSend {.ctr} "get contour $1 fk5"}
 | wcssys {ProcessSendCmdSend {.ctr} "get contour $1 fk5"}
 | skyframe {ProcessSendCmdSend {.ctr} "get contour wcs $1"}
 | wcssys skyframe {ProcessSendCmdSend {.ctr} "get contour $1 $2"}
 ;

%%

proc contoursend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
