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

photo : opts {PhotoCmdLoad {} $1}
 | opts STRING_ {PhotoCmdLoad $2 $1}
 ;

opts :
 | NEW_ {CreateFrame; set _ {}}
 | SLICE_ {set _ slice}
 ;

%%

proc photo::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
