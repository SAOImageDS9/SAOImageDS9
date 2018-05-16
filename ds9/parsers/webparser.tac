%{
%}

#include numeric.tin
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

#include numeric.trl

command : web 
 | web {yyclearin; YYACCEPT} STRING_
 ;

web : {WebCmdNew {}}
 | STRING_ {WebCmdNew $1}
 | NEW_ STRING_ STRING_ {WebCmdNew $3 $2}

 | {WebCmdCheck} webCmd
 | STRING_ {WebCmdRef $1} webCmd
 ;

webCmd : CLICK_ click
 | CLEAR_ {global cvarname; HVClearCmd $cvarname}
 | CLOSE_ {global cvarname; HVDestroy $cvarname}
 ;

click : BACK_ {global cvarname; HVBackCmd $cvarname}
 | FORWARD_ {global cvarname; HVForwardCmd $cvarname}
 | STOP_ {global cvarname; HVStopCmd $cvarname}
 | RELOAD_ {global cvarname; HVReloadCmd $cvarname}
 | INT_ {WebCmdClick $1}
 ;
 
%%

proc web::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
