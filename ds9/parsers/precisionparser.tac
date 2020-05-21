%{
%}
#include def.tin

#include int.tin
#include string.tin

%start command

%%

command : precision 
 | precision {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

precision :  INT_ INT_ INT_ INT_ INT_ INT_ INT_ INT_ INT_ {ProcessCmdSet pds9 prec,linear $1; ProcessCmdSet pds9 prec,deg $2; ProcessCmdSet pds9 prec,hms $3;ProcessCmdSet pds9 prec,dms $4; ProcessCmdSet pds9 prec,len,linear $5; ProcessCmdSet pds9 prec,len,deg $6; ProcessCmdSet pds9 prec,len,arcmin $7; ProcessCmdSet pds9 prec,len,arcsec $8; ProcessCmdSet pds9 prec,angle $9; PrefsPrecision}
 ;

%%

proc precision::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
