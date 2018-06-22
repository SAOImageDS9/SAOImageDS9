%{
%}
#include def.tin

#include imgsvrsend.tin

%start vlsssend

%%

vlsssend : {ProcessSendCmdGet dvlss name}
 | NAME_ {ProcessSendCmdGet dvlss name}
 | SAVE_ {ProcessSendCmdYesNo dvlss save}
 | FRAME_ {ProcessSendCmdGet dvlss mode}
 | SIZE_ {ProcessSendCmdGet3 dvlss width height rformat}
 | COORD_ {ProcessSendCmdGet3 dvlss x y skyformat}
 ;
 
%%

proc vlsssend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_
     
     ParserError $msg $yycnt $yy_current_buffer $index_
}
