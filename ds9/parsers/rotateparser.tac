%{
%}

#include numeric.tin
#include string.tin

%start command

%token CLOSE_
%token OPEN_
%token TO_

%%

#include numeric.trl

command : rotate 
 | rotate {yyclearin; YYACCEPT} STRING_
 ;

rotate : numeric {Rotate $1}
 | TO_ numeric {ProcessCmdSet current rotate $2 ChangeRotate}
 | OPEN_ {PanZoomDialog}
 | CLOSE_ {PanZoomDestroyDialog}
 ;

%%

proc rotate::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
