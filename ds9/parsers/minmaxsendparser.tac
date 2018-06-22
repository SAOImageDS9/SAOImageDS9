%{
%}
#include def.tin

%start minmaxsend

%token INTERVAL_
%token MODE_

%%

minmaxsend : {ProcessSendCmdGet minmax mode}
 | MODE_ {ProcessSendCmdGet minmax mode}
 | INTERVAL_ {ProcessSendCmdGet minmax sample}
 ;

%%

proc minmaxsend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
