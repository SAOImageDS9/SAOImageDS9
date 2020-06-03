%{
%}
#include def.tin

#include yesno.tin
#include numeric.tin
#include string.tin

%start cmds

%token ENTRY_
%token CHECKBOX_
%token MENU_
%token OPEN_
%token SAVE_

%token PARAM_
%token ENDPARAM_
%token TAB_
%token ENDTAB_

%%

#include yesno.trl
#include numeric.trl

cmds : cmds ans
 | ans
 ;

ans : PARAM_ STRING_ {puts "PARAM $2"} paramx ENDPARAM_ {puts ""}
 ;

paramx : tabs
 | params
 ;
 
tabs : tabs tab
 | tab
 ;

tab : TAB_ STRING_ {puts "TAB $2"} params ENDTAB_ {puts ""}
 ;

params : params param
 | param
 ;
 
param : STRING_ ENTRY_ STRING_ STRING_ STRING_ {puts "entry $1 $3 $4 $5"}
 | STRING_ CHECKBOX_ STRING_ yesno STRING_ {puts "checkbox $1 $3 $4 $5"}
 | STRING_ CHECKBOX_ STRING_ INT_ STRING_ {puts "checkbox $1 $3 $4 $5"}
 | STRING_ MENU_ STRING_ STRING_ STRING_ {puts "menu $1 $3 $4 $5"}
 | STRING_ OPEN_ STRING_ STRING_ STRING_ {puts "open $1 $3 $4 $5"}
 | STRING_ SAVE_ STRING_ STRING_ STRING_ {puts "save $1 $3 $4 $5"}
 ;

%%

proc ans::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
