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

samp : yesno # sampfirst
 | CLIENT_ yesno # sampfirst
 | HUB_ yesno # sampfirst

 | CONNECT_ {SAMPConnect 1}
 | DISCONNECT_ {SAMPDisconnect 1}
 | BROADCAST_ broadcast
 | SEND_ send
 | HUB_ hub
 ;

hub : START_ { SAMPHubStart 1}
 | STOP_ {SAMPHubStop 1}
 | INFO_ {SAMPHubDialog}
 ;

broadcast : {SAMPSendImageLoadFits {}}
 | IMAGE_ {SAMPSendImageLoadFits {}}
 | TABLE_ {SAMPSendTableLoadFits {}}
 ;

send : STRING_ {SAMPCmdSendImage $1}
 | IMAGE_ STRING_ {SAMPCmdSendImage $2}
 | TABLE_ STRING_ {SAMPCmdSendTable $2}
 ;

%%

proc samp::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
