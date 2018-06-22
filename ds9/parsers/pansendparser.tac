%{
%}
#include def.tin

#include coordsys.tin
#include wcssys.tin
#include skyframe.tin
#include skyformat.tin

%start pansend

%%

#include coordsys.trl
#include wcssys.trl
#include skyframe.trl
#include skyformat.trl

pansend : {ProcessSendCmdCurrent "get cursor physical fk5 degrees"}
 | coordsys {ProcessSendCmdCurrent "get cursor $1 fk5 degrees"}
 | wcssys {ProcessSendCmdCurrent "get cursor $1 fk5 degrees"}
 | skyframe {ProcessSendCmdCurrent "get cursor wcs $1 degrees"}
 | wcssys skyframe {ProcessSendCmdCurrent "get cursor $1 $2 degrees"}
 | wcssys skyformat {ProcessSendCmdCurrent "get cursor $1 fk5 $2"}
 | skyframe skyformat {ProcessSendCmdCurrent "get cursor wcs $1 $2"}
 | wcssys skyframe skyformat {ProcessSendCmdCurrent "get cursor $1 $2 $3"}
 ;

%%

proc pansend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_
     
     ParserError $msg $yycnt $yy_current_buffer $index_
}
