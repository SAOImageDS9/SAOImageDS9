%{
%}
#include def.tin

#include yesno.tin
#include string.tin

%start command

%token BROADCAST_
%token CLIENT_
%token CONNECT_
%token DISCONNECT_
%token HUB_
%token IMAGE_
%token INFO_
%token SEND_
%token START_
%token STOP_
%token TABLE_

%%

#include yesno.trl

command : samp 
 | samp {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

samp : CLIENT_ yesno {ProcessCmdSet pds9 samp $2}
 | HUB_ yesno {ProcessCmdSet pds9 samphub $2}

 | yesno
 | CONNECT_
 | DISCONNECT_
 | BROADCAST_ broadcast
 | SEND_ send
 | HUB_ hub
 ;

hub : | START_ {}
 | STOP_ {}
 | INFO_ {SAMPHubDialog}
 ;

broadcast :
 | IMAGE_
 | TABLE_
 ;

send : STRING_
 | IMAGE_ STRING_
 | TABLE_ STRING_
 ;

%%

proc sampfirst::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
