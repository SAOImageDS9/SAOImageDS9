%{
%}

#include int.tin
#include string.tin

%start command

%%

command : precision 
 | precision {yyclearin; YYACCEPT} STRING_
 ;

precision :  INT_ INT_ INT_ INT_ INT_ INT_ {ProcessCmdSet pds9 prec,linear $1; ProcessCmdSet pds9 prec,deg $2; ProcessCmdSet pds9 prec,hms $3;ProcessCmdSet pds9 prec,dms $4; ProcessCmdSet pds9 prec,arcmin $5; ProcessCmdSet pds9 prec,arcsec $6 PrefsPrecision}
 ;

%%

proc precision::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
