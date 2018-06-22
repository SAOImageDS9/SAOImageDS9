%{
%}
#include def.tin

#include imgsvrsend.tin

%start twomasssend

%%

twomasssend : {ProcessSendCmdGet dtwomass name}
 | NAME_ {ProcessSendCmdGet dtwomass name}
 | SAVE_ {ProcessSendCmdYesNo dtwomass save}
 | FRAME_ {ProcessSendCmdGet dtwomass mode}
 | SURVEY_ {ProcessSendCmdGet dtwomass survey}
 | SIZE_ {ProcessSendCmdGet3 dtwomass width height rformat}
 | COORD_ {ProcessSendCmdGet3 dtwomass x y skyformat}
 ;
 
%%

proc twomasssend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_
     
     ParserError $msg $yycnt $yy_current_buffer $index_
}
