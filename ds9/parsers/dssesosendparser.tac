%{
%}
#include def.tin

#include imgsvrsend.tin

%start dssesosend

%%

dssesosend : {ProcessSendCmdGet deso name}
 | NAME_ {ProcessSendCmdGet deso name}
 | SAVE_ {ProcessSendCmdYesNo deso save}
 | FRAME_ {ProcessSendCmdGet deso mode}
 | SURVEY_ {ProcessSendCmdGet deso survey}
 | SIZE_ {ProcessSendCmdGet3 deso width height rformat}
 | COORD_ {ProcessSendCmdGet3 deso x y skyformat}
 ;
 
%%

proc dssesosend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_
     
     ParserError $msg $yycnt $yy_current_buffer $index_
}
