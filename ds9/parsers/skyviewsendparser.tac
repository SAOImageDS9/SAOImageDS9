%{
%}
#include def.tin

#include imgsvrsend.tin

%start skyviewsend

%token PIXELS_

%%

skyviewsend : {ProcessSendCmdGet dskyview name}
 | NAME_ {ProcessSendCmdGet dskyview name}
 | SAVE_ {ProcessSendCmdYesNo dskyview save}
 | FRAME_ {ProcessSendCmdGet dskyview mode}
 | SURVEY_ {ProcessSendCmdGet dskyview survey}
 | SIZE_ {ProcessSendCmdGet3 dskyview width height rformat}
 | PIXELS_ {ProcessSendCmdGet2 dskyview width,pixels height,pixels}
 | COORD_ {ProcessSendCmdGet3 dskyview x y skyformat}
 ;
 
%%

proc skyviewsend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_
     
     ParserError $msg $yycnt $yy_current_buffer $index_
}
