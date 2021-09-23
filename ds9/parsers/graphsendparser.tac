%{
%}
#include def.tin

#include font.tin

%start graphsend

%token GRID_
%token HORIZONTAL_
%token SIZE_
%token VERTICAL_

%%

graphsend : type SIZE_
 | type GRID_ {ProcessSendCmdYesNo graph $1,grid}
 ;

type : HORIZONTAL_ {set _ horz}
 | VERTICAL_ {set _ vert}
 ;

%%

proc graphsend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
