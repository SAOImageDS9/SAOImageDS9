%{
%}
#include def.tin

#include int.tin
#include string.tin

%start command

%token BACK_
%token CLEAR_
%token CLICK_
%token CLOSE_
%token FORWARD_
%token NEW_
%token RELOAD_
%token STOP_

%%

command : web 
 | web {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

web : {WebCmdNew {}}
 | STRING_ {WebCmdNew $1}
 | NEW_ STRING_ STRING_ {WebCmdNew $3 $2}

 | {if {![WebCmdCheck]} {web::YYABORT}} webCmd
 | STRING_ {if {![WebCmdRef $1]} {web::YYABORT}} webCmd
 ;

webCmd : CLICK_ click
 | CLEAR_ {ProcessCmdCVAR0 HVClearCmd}
 | CLOSE_ {ProcessCmdCVAR0 HVDestroy}
 ;

click : BACK_ {ProcessCmdCVAR0 HVBackCmd}
 | FORWARD_ {ProcessCmdCVAR0 HVForwardCmd}
 | STOP_ {ProcessCmdCVAR0 HVStopCmd}
 | RELOAD_ {ProcessCmdCVAR0 HVReloadCmd}
 | INT_ {WebCmdClick $1}
 ;
 
%%

proc web::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
