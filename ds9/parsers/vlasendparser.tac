%{
%}
#include def.tin

#include imgsvrsend.tin

%start vlasend

%%

vlasend : {ProcessSendCmdGet dvla name}
 | NAME_ {ProcessSendCmdGet dvla name}
 | SAVE_ {ProcessSendCmdYesNo dvla save}
 | FRAME_ {ProcessSendCmdGet dvla mode}
 | SURVEY_ {ProcessSendCmdGet dvla survey}
 | SIZE_ {ProcessSendCmdGet3 dvla width height rformat}
 | COORD_ {ProcessSendCmdGet3 dvla x y skyformat}
 ;
 
%%

proc vlasend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_
     
     ParserError $msg $yycnt $yy_current_buffer $index_
}
