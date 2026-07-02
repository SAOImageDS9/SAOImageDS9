%{
%}
#include def.tin

#include int.tin
#include string.tin

%start command

%token ADD_
%token CLEAR_
%token DELETE_
%token GOTO_
%token LOAD_
%token SAVE_

%%

command : bookmark
 | bookmark {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

bookmark : ADD_ {BookmarkCurrentAdd}
 | ADD_ STRING_ {BookmarkCurrentAdd $2}
 | DELETE_ INT_ {BookmarkCurrentDelete $2}
 | CLEAR_ {BookmarkCurrentClear}
 | GOTO_ INT_ {BookmarkCurrentGoto $2}
 | SAVE_ STRING_ {BookmarkCurrentSave $2}
 | LOAD_ STRING_ {BookmarkCurrentLoad $2}
 ;

%%

proc bookmark::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
#tab bookmarkparser.tab.tcl
