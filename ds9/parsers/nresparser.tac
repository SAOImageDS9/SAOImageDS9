%{
%}

#include coords.tin
#include numeric.tin
#include string.tin

%start command

%token CLOSE_
%token CROSSHAIR_
%token NAME_
%token OPEN_
%token PAN_
%token SERVER_
%token SKYFORMAT_

%token NEDSAO_
%token NEDCDS_
%token SIMBADSAO_
%token SIMBADCDS_
%token VIZIERSAO_
%token VIZIERCDS_

%%

#include coords.trl
#include numeric.trl

command : nres 
 | nres {yyclearin; YYACCEPT} STRING_
 ;

nres : OPEN_
 | CLOSE_ {global cvarname; ARDestroy $cvarname}
 | SERVER_ server {global pnres; set pnres(server) $2}
 | PAN_ {global cvarname; NRESPan $cvarname}
 | CROSSHAIR_ {global cvarname; NRESCrosshair $cvarname}
 | SKYFORMAT_ skyformat {NRESCmdSet skyformat $2; NRESCmdSet skyformat,msg $2}
 | NAME_ STRING_ {NRESCmdName $2}
 | STRING_ {NRESCmdName $1}
 ;

server : NEDSAO_ {set _ ned-sao}
 | NEDCDS_ {set _ ned-cds}
 | SIMBADSAO_ {set _ simbad-sao}
 | SIMBADCDS_ {set _ simbad-cds}
 | VIZIERSAO_ {set _ vizier-sao}
 | VIZIERCDS_ {set _ vizier-cds}
 ;

%%

proc nres::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
