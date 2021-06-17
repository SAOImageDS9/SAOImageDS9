%{
%}
#include def.tin

#include string.tin

%start command

%token APPEND_
%token CLEAR_
%token CLOSE_
%token INSERT_
%token OPEN_
%token LOAD_
%token SAVE_

%%

command : notes
 | notes {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

notes : {DisplayNotes}
 | STRING_ {NotesCmdAppend $1}
 | APPEND_ STRING_ {NotesCmdAppend $2}
 | INSERT_ STRING_ {NotesCmdInsert $2}
 | CLEAR_ {NotesCmdClear}

 | OPEN_ {DisplayNotes}
 | CLOSE_ {EditTextDestroy notes}
 | LOAD_ STRING_ {NotesCmdLoad $2}
 | SAVE_ STRING_ {NotesCmdSave $2}
 ;

%%

proc notes::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
