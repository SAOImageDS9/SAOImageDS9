%{
%}

#include numeric.tin
#include string.tin

%start command

%token CLEAR_
%token CLOSE_
%token COLOR_
%token MARK_
%token OPEN_
%token TRANSPARENCY_

%%

#include numeric.trl

command : mask 
 | mask {yyclearin; YYACCEPT} STRING_
 ;

mask : {global parse; set parse(result) mask}
 | OPEN_ {MaskDialog}
 | CLOSE_ {MaskDestroyDialog}
 | CLEAR_ {MaskClear}
 | COLOR_ STRING_ {MaskCmdSet color $2 MaskColor}
 | MARK_ INT_ {MaskCmdSet mark $2 MaskMark}
 | TRANSPARENCY_ INT_ {MaskCmdSet transparency $2 MaskTransparency}
 ;

%%

proc mask::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
