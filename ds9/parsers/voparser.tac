%{
%}
#include def.tin

#include yesno.tin
#include int.tin
#include string.tin

%start command

%token CLOSE_
%token CONNECT_
%token DELAY_
%token DISCONNECT_
%token INTERNAL_
%token METHOD_
%token MIME_
%token OPEN_
%token SERVER_
%token XPA_

%%

#include yesno.trl

command : vo 
 | vo {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

vo : OPEN_ {VODialog}
 | CLOSE_ {VODestroy voi}
 | METHOD_ method {ProcessCmdSet pvo method $2}
 | SERVER_ STRING_ {ProcessCmdSet pvo server $2}
 | INTERNAL_ yesno {ProcessCmdSet pvo hv $2}
 | DELAY_ INT_ {ProcessCmdSet pvo delay $2}
 | CONNECT_ STRING_ {VOCmdConnect $2}
 | DISCONNECT_ STRING_ {VOCmdDisconnect $2}
 | STRING_ {VOCmdConnect $1}
 ;

method : XPA_ {set _ xpa}
 | MIME_ {set _ mime}
 ;

%%

proc vo::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
