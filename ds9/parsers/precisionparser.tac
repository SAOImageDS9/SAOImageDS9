%{
%}

#include numeric.tin
#include string.tin

%start command

%%

#include numeric.trl

command : precision 
 | precision {yyclearin; YYACCEPT} STRING_
 ;

precision :  INT_ INT_ INT_ INT_ INT_ INT_ {pds9CmdSet prec,linear $1; pds9CmdSet prec,deg $2; pds9CmdSet prec,hms $3;pds9CmdSet prec,dms $4; pds9CmdSet prec,arcmin $5; pds9CmdSet prec,arcsec $6 PrefsPrecision}
 ;

%%

proc precision::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
