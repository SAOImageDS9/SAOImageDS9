%{
%}
#include def.tin

#include yesno.tin
#include string.tin

%start command

%token BROADCAST_
%token CONNECT_
%token DISCONNECT_
%token IMAGE_
%token SEND_
%token TABLE_

%%

#include yesno.trl

command : samp 
 | samp {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

samp : yesno {if {$1} {SAMPConnect} else {SAMPDisconnect}}
 | CONNECT_ {SAMPConnect}
 | DISCONNECT_ {SAMPDisconnect}
 | BROADCAST_ broadcast
 | SEND_ send
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
