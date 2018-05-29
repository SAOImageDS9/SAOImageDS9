%{
%}

#include yesno.tin
#include numeric.tin
#include string.tin

%start command

%token BGCOLOR_
%token CLEAR_
%token IRAFALIGN_
%token NANCOLOR_
%token PRECISION_
%token THREADS_

%%

#include yesno.trl
#include numeric.trl

command : prefs 
 | prefs {yyclearin; YYACCEPT} STRING_
 ;

prefs : CLEAR_ {ClearPrefs}
 | PRECISION_ INT_ INT_ INT_ INT_ INT_ INT_ {pds9CmdSet prec,linear $2; pds9CmdSet prec,deg $3; pds9CmdSet prec,hms $4;pds9CmdSet prec,dms $5; pds9CmdSet prec,arcmin $6; pds9CmdSet prec,arcsec $7 PrefsPrecision}
 | BGCOLOR_ STRING_ {pds9CmdSet bg $2 PrefsBgColor}
 | NANCOLOR_ STRING_ {pds9CmdSet nan $2 PrefsNanColor}
 | THREADS_ INT_ {ds9CmdSet threads $2 ChangeThreads}
 | IRAFALIGN_ yesno {pds9CmdSet iraf $2 PrefsIRAFAlign}
 ;

%%

proc prefs::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
