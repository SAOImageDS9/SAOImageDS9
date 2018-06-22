%{
%}
#include def.tin

#include coordsys.tin
#include wcssys.tin
#include skyframe.tin
#include skyformat.tin

%start crosshairsend

%token LOCK_

%%

#include coordsys.trl
#include wcssys.trl
#include skyframe.trl
#include skyformat.trl

crosshairsend : {ProcessSendCmdCurrent "get crosshair physical fk5 degrees"}
 | coordsys {ProcessSendCmdCurrent "get crosshair $1 fk5 degrees"}
 | wcssys {ProcessSendCmdCurrent "get crosshair $1 fk5 degrees"}
 | skyframe {ProcessSendCmdCurrent "get crosshair wcs $1 degrees"}
 | wcssys skyframe {ProcessSendCmdCurrent "get crosshair $1 $2 degrees"}
 | wcssys skyformat {ProcessSendCmdCurrent "get crosshair $1 fk5 $2"}
 | skyframe skyformat {ProcessSendCmdCurrent "get crosshair wcs $1 $2"}
 | wcssys skyframe skyformat {ProcessSendCmdCurrent "get crosshair $1 $2 $3"}
 | LOCK_ {ProcessSendCmdGet crosshair lock}
 ;

%%

proc crosshairsend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_
     
     ParserError $msg $yycnt $yy_current_buffer $index_
}
