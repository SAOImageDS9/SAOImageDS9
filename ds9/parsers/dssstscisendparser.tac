%{
%}
#include def.tin

#include imgsvrsend.tin

%start dssstscisend

%%

dssstscisend : {ProcessSendCmdGet dstsci name}
 | NAME_ {ProcessSendCmdGet dstsci name}
 | SAVE_ {ProcessSendCmdYesNo dstsci save}
 | FRAME_ {ProcessSendCmdGet dstsci mode}
 | SURVEY_ {ProcessSendCmdGet dstsci survey}
 | SIZE_ {ProcessSendCmdGet3 dstsci width height rformat}
 | COORD_ {ProcessSendCmdGet3 dstsci x y skyformat}
 ;
 
%%

proc dssstscisend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_
     
     ParserError $msg $yycnt $yy_current_buffer $index_
}
