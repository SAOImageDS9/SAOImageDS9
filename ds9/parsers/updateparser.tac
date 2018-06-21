%{
%}

#include yesno.tin
#include int.tin
#include string.tin
#include def.tin

%start command

%token NOW_

%%

#include yesno.trl

command : update 
 | update {yyclearin; YYACCEPT} STRING_
 ;

update : {UpdateCmd}
 | INT_ INT_ INT_ INT_ INT_ {UpdateCmd $1 $2 $3 $4 $5}
 | NOW_ {UpdateCmdNow}
 | NOW_ INT_ INT_ INT_ INT_ INT_ {UpdateCmdNow $2 $3 $4 $5 $6}
#backward compatibility
 | yesno # do nothing
 ;

%%

proc update::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
