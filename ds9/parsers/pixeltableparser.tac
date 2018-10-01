%{
%}
#include def.tin

#include yesno.tin
#include string.tin

%start command

%token CLOSE_
%token OPEN_

%%

#include yesno.trl

command : pixeltable 
 | pixeltable {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

pixeltable : {PixelTableDialog}
 | OPEN_ {PixelTableDialog}
 | CLOSE_ {PixelTableDestroyDialog}
 | yesno {PixelTableCmd $1}
 ;

%%

proc pixeltable::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
