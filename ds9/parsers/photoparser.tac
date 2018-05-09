%{
%}

#include string.tin

%start command

%token NEW_
%token SLICE_

%%

command : photo 
 | photo {yyclearin; YYACCEPT} STRING_
 ;

photo : opts {PhotoCmdLoad {}}
 | opts STRING_ {PhotoCmdLoad $2}
 ;

opts :
 | NEW_ {CreateFrame}
 | SLICE_ {PhotoCmdSet load,mode slice}
 ;

%%

proc photo::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
