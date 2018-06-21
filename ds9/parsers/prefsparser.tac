%{
%}

#include yesno.tin
#include int.tin
#include string.tin
#include def.tin

%start command

%token BGCOLOR_
%token CLEAR_
%token IRAFALIGN_
%token NANCOLOR_
%token PRECISION_
%token THREADS_

%%

#include yesno.trl

command : prefs 
 | prefs {yyclearin; YYACCEPT} STRING_
 ;

prefs : CLEAR_ {ClearPrefs}
 | PRECISION_ INT_ INT_ INT_ INT_ INT_ INT_ {ProcessCmdSet pds9 prec,linear $2; ProcessCmdSet pds9 prec,deg $3; ProcessCmdSet pds9 prec,hms $4;ProcessCmdSet pds9 prec,dms $5; ProcessCmdSet pds9 prec,arcmin $6; ProcessCmdSet pds9 prec,arcsec $7 PrefsPrecision}
 | BGCOLOR_ STRING_ {ProcessCmdSet pds9 bg $2 PrefsBgColor}
 | NANCOLOR_ STRING_ {ProcessCmdSet pds9 nan $2 PrefsNanColor}
 | THREADS_ INT_ {ProcessCmdSet ds9 threads $2 ChangeThreads}
 | IRAFALIGN_ yesno {ProcessCmdSet pds9 iraf $2 PrefsIRAFAlign}
 ;

%%

proc prefs::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
