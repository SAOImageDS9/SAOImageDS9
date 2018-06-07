%{
%}

#include coords.tin
#include string.tin

%start crosshairsend

%token LOCK_

%%

#include coords.trl

crosshairsend : {ProcessSendCmdCurrent frame "get crosshair physical fk5 degrees"}
 | coordsys {ProcessSendCmdCurrent frame "get crosshair $1 fk5 degrees"}
 | wcssys {ProcessSendCmdCurrent frame "get crosshair $1 fk5 degrees"}
 | skyframe {ProcessSendCmdCurrent frame "get crosshair wcs $1 degrees"}
 | wcssys skyframe {ProcessSendCmdCurrent frame "get crosshair $1 $2 degrees"}
 | wcssys skyformat {ProcessSendCmdCurrent frame "get crosshair $1 fk5 $2"}
 | skyframe skyformat {ProcessSendCmdCurrent frame "get crosshair wcs $1 $2"}
 | wcssys skyframe skyformat {ProcessSendCmdCurrent frame "get crosshair $1 $2 $3"}
 | LOCK_ {ProcessSendCmdGet crosshair lock}
 ;

%%

proc crosshairsend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_
     
     ParserError $msg $yycnt $yy_current_buffer $index_
}
