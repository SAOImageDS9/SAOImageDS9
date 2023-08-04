%{
%}
#include def.tin

#include yesno.tin
#include int.tin
#include string.tin

%start command

%token NOW_

%%

#include yesno.trl

command : update 
 | update {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

update : {UpdateCmd}
 | INT_ INT_ INT_ INT_ INT_ {UpdateCmd $1 $2 $3 $4 $5}
#backward compatibility
 | NOW_ {UpdateCmd}
#backward compatibility
 | NOW_ INT_ INT_ INT_ INT_ INT_ {UpdateCmd $2 $3 $4 $5 $6}
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
