%{
%}
#include def.tin

#include imgsvrsend.tin

%start nvsssend

%%

nvsssend : {ProcessSendCmdGet dnvss name}
 | NAME_ {ProcessSendCmdGet dnvss name}
 | SAVE_ {ProcessSendCmdYesNo dnvss save}
 | FRAME_ {ProcessSendCmdGet dnvss mode}
 | SIZE_ {ProcessSendCmdGet3 dnvss width height rformat}
 | COORD_ {ProcessSendCmdGet3 dnvss x y skyformat}
 ;
 
%%

proc nvsssend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_
     
     ParserError $msg $yycnt $yy_current_buffer $index_
}
