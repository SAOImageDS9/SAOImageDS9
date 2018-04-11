%{
%}

#include yesno.tin
#include numeric.tin
#include string.tin

%start command

%token CONNECT_
%token DISCONNECT_
%token INET_
%token INFO_
%token LOCAL_
%token LOCALHOST_
%token NOXPANS_
%token TCL_
%token UNIX_

%%

#include yesno.trl
#include numeric.trl

command : xpa 
 | xpa {yyclearin; YYACCEPT} STRING_
 ;

xpa : yesno 
 | method 
 | NOXPANS_ 

| CONNECT_ {XPAConnect}
 | DISCONNECT_ {XPADisconnect}
 | INFO_ {XPAInfo}
# backward compatibility
 | TCL_ # do nothing
 ;

method : UNIX_ {set _ unix}
 | INET_ {set _ inet}
 | LOCAL_ {set _ local}
 | LOCALHOST_ {set _ localhost}
 ;

%%

proc xpa::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
