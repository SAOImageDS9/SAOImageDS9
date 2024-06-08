%{
%}
#include def.tin

#include string.tin

%start command

%token NEW_

%%

# XPA/SAMP only
command : hsvarray 
 ;

hsvarray : opts {HSVArrayCmdLoad {}}
 | opts STRING_ {HSVArrayCmdLoad $2}
 ;

opts :
 | NEW_ {CreateHSVFrame}
 ;

%%

proc hsvarray::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
