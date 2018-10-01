%{
%}
#include def.tin

#include yesno.tin
#include numeric.tin
#include string.tin

%start command

%token COLOR_
%token CURSOR_
%token REGION_
%token ZOOM_

%%

#include yesno.trl
#include numeric.trl

command : magnifier 
 | magnifier {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

magnifier : COLOR_ STRING_ {ProcessCmdSet pmagnifier color $2 MagnifierColor}
 | ZOOM_ numeric {ProcessCmdSet pmagnifier zoom $2 MagnifierZoom}
 | CURSOR_ yesno {ProcessCmdSet pmagnifier cursor $2 MagnifierCursor}
 | REGION_ yesno {ProcessCmdSet pmagnifier region $2 MagnifierRegion}
# backward compatibility
 | yesno {ProcessCmdSet view magnifier $1 UpdateView}
 ;

%%

proc magnifier::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
