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
 | CLOSE_ {ARDestroy dnres}
 | SERVER_ server {ProcessCmdSet pnres server $2}
 | PAN_ {NRESPan dnres}
 | CROSSHAIR_ {NRESCrosshair dnres}
 | SKYFORMAT_ skyformat {ProcessCmdSet2 dnres skyformat $2 format,msg $2}
 | NAME_ STRING_ {ProcessCmdSet dnres name $2 "NRESApply dnres 1"}
 | STRING_ {ProcessCmdSet dnres name $1 "NRESApply dnres 1"}
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
