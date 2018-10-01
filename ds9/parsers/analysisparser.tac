%{
%}
#include def.tin

#include int.tin
#include string.tin

%start command

%token CLEAR_
%token LOAD_
%token MESSAGE_
%token PLOT_
%token STDIN_
%token TASK_
%token TEXT_

%token OK_
%token OKCANCEL_
%token RETRYCANCEL_
%token YESNO_
%token YESNOCANCEL_

%token XY_
%token XYEX_
%token XYEY_
%token XYEXEY_

%%

command : analysis 
 | analysis {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

analysis : INT_ {AnalysisTask $1 menu}
 | TASK_ task
 | LOAD_ load
 | CLEAR_ clear
 | TEXT_ text
 | PLOT_ plot
 | STRING_ {ProcessAnalysisFile $1}
 | MESSAGE_ message STRING_ {AnalysisMessage $2 $3}
 ;

load : {AnalysisCmdLoad}
 | STRING_ {ProcessAnalysisFile $1}
 ;

task : INT_ {AnalysisTask $1 menu}
 | STRING_ {AnalysisCmdTask $1}
 ;

clear : {ClearAnalysis}
 | LOAD_ clearLoad
 ;
 
clearLoad : {ClearAnalysis; AnalysisCmdLoad}
 | STRING_ {ClearAnalysis; ProcessAnalysisFile $1}
 ;

message : {set _ ok}
 | OK_ {set _ ok}
 | OKCANCEL_ {set _ okcancel}
 | RETRYCANCEL_ {set _ retrycancel}
 | YESNO_ {set _ yesno}
 | YESNOCANCEL_ {set _ yesnocancel}
 ;

text : {AnalysisCmdText}
 | STRING_ {AnalysisText apXPA Analysis $1 append}
 ;
 
plot : STDIN_ {AnalysisCmdPlotStdin}
 | STRING_ STRING_ STRING_ dim {AnalysisCmdPlotLine $1 $2 $3 $4}
 ;

dim : XY_ {set _ xy}
 | XYEX_ {set _ xyex}
 | XYEY_ {set _ xyey}
 | XYEXEY_ {set _ xyexey}
 | INT_ {set _ $1}
 ;

%%

proc analysis::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
