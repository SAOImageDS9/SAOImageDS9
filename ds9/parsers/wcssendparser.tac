%{
%}
#include def.tin

%start wcssend

%token ALIGN_
%token SKY_
%token SKYFORMAT_
%token SYSTEM_

%%

wcssend : {ProcessSendCmdGet wcs system}
 | ALIGN_  {ProcessSendCmdYesNo current align}
 | SYSTEM_ {ProcessSendCmdGet wcs system}
 | SKY_ {ProcessSendCmdGet wcs sky}
 | SKYFORMAT_ {ProcessSendCmdGet wcs skyformat}
 ;

%%

package provide DS9 1.0

proc wcssend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
