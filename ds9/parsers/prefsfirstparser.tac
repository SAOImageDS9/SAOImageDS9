%{
%}
#include def.tin

#include yesno.tin
#include int.tin
#include string.tin

%start command

%token BACKGROUND_
%token BGCOLOR_
%token COLOR_
%token NAN_
%token NANCOLOR_

%token CLEAR_
%token CLOSE_
%token IRAFALIGN_
%token OPEN_
%token PRECISION_
%token SAVE_
%token THEME_
%token THREADS_

%%

#include yesno.trl

command : prefs 
 | prefs {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

prefs : yesno {ProcessCmdSet ds9 prefs $1}

 | OPEN_
 | CLEAR_
 | CLOSE_
 | SAVE_

 | BACKGROUND_ bg
 | BACKGROUND_ COLOR_ bg
 | BGCOLOR_ bg
 | NAN_ nan
 | NAN_ COLOR_ nan
 | NANCOLOR_ nan

 | PRECISION_ INT_ INT_ INT_ INT_ INT_ INT_
 | THEME_ STRING_
 | THREADS_ INT_
 | IRAFALIGN_ yesno
 ;

bg : yesno
 | STRING_
 ;
 
nan : STRING_
 ;

%%

proc prefsfirst::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
