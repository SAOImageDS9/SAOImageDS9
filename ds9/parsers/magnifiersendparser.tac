%{
%}
#include def.tin

%start magnifiersend

%token COLOR_
%token CURSOR_
%token REGION_
%token ZOOM_

%%

magnifiersend : COLOR_ {ProcessSendCmdGet pmagnifier color}
 | ZOOM_ {ProcessSendCmdGet pmagnifier zoom}
 | CURSOR_ {ProcessSendCmdYesNo pmagnifier cursor}
 | REGION_ {ProcessSendCmdYesNo pmagnifier region}
# backward compatibility
 | {ProcessSendCmdYesNo view magnifier}
 ;

%%

proc magnifiersend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
