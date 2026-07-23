%{
%}
#include def.tin

#include int.tin

%start bookmarksend

%%

bookmarksend : {BookmarkSendCmd}
 | INT_ {BookmarkSendCmd $1}
 ;

%%

proc bookmarksend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
#tab bookmarksendparser.tab.tcl
