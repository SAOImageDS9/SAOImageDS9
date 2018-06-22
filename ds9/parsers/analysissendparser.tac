%{
%}
#include def.tin

#include string.tin

%start analysissend

%token ENTRY_
%token MESSAGE_
%token MODE_
%token TASK_
%token LOCK_

%token OK_
%token OKCANCEL_
%token YESNO_

%%

analysissend : {AnalysisSendCmd}
 | ENTRY_ STRING_ {AnalysisSendCmdEntry $2}
 | MESSAGE_ type STRING_ {AnalysisSendCmdMessage $2 $3}
 | MODE_ {ProcessSendCmdGet ime task}
 | TASK_ {AnalysisSendCmdTask}
 | LOCK_ {ProcessSendCmdGet ime lock}
 ;

type : {set _ ok}
 | OK_ {set _ ok}
 | OKCANCEL_ {set _ okcancel}
 | YESNO_ {set _ yesno}
 ;

%%

proc analysissend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
