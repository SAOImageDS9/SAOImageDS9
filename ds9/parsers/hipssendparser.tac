%{
%}
#include def.tin

#include string.tin

%start hipssend

%token COVERAGE_
%token LIST_
%token STATUS_
%token UPDATE_

%%

hipssend : {HiPSSendCmdName}
 | COVERAGE_ {HiPSSendCmdCoverage}
 | STATUS_ {HiPSSendCmdStatus}
 | LIST_ list
 ;

list : {HiPSSendCmdList 0 {}}
 | STRING_ {HiPSSendCmdList 0 $1}
 | UPDATE_ {HiPSSendCmdList 1 {}}
 | UPDATE_ STRING_ {HiPSSendCmdList 1 $2}
 ;

%%

proc hipssend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
