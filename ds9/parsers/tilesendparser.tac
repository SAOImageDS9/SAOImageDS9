%{
%}
#include def.tin

%start tilesend

%token DIRECTION_
%token GAP_
%token GRID_
%token LAYOUT_
%token MODE_

%%

tilesend: {TileSendCmd}
 | MODE_ {ProcessSendCmdGet tile mode}
 | GRID_ grid
 ;

grid : MODE_ {ProcessSendCmdGet tile grid,mode}
 | DIRECTION_ {ProcessSendCmdGet tile grid,dir}
 | LAYOUT_ {ProcessSendCmdGet tile grid,row}
 | GAP_ {ProcessSendCmdGet tile grid,gap}
 ;

%%

proc tilesend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
