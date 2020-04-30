%{
%}
#include def.tin

#include yesno.tin
#include int.tin
#include string.tin

%start command

%token BGCOLOR_
%token CLEAR_
%token CLOSE_
%token IRAFALIGN_
%token NANCOLOR_
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

prefs : {PrefsDialog}
 | OPEN_ {PrefsDialog}
# backward compatability?
 | yesno
 | CLEAR_ {ClearPrefs}
 | CLOSE_ {PrefsDialogClose}
 | PRECISION_ INT_ INT_ INT_ INT_ INT_ INT_ {ProcessCmdSet pds9 prec,linear $2; ProcessCmdSet pds9 prec,deg $3; ProcessCmdSet pds9 prec,hms $4;ProcessCmdSet pds9 prec,dms $5; ProcessCmdSet pds9 prec,arcmin $6; ProcessCmdSet pds9 prec,arcsec $7 PrefsPrecision}
 | BGCOLOR_ STRING_ {ProcessCmdSet pds9 bg $2 PrefsBgColor}
 | BGCOLOR_ yesno {ProcessCmdSet pds9 bg,use $2 PrefsBgColor}
 | NANCOLOR_ STRING_ {ProcessCmdSet pds9 nan $2 PrefsNanColor}
 | THEME_ STRING_ {ProcessCmdSet pds9 theme $2 ThemeChange}
 | THREADS_ INT_ {ProcessCmdSet ds9 threads $2 ChangeThreads}
 | IRAFALIGN_ yesno {ProcessCmdSet pds9 iraf $2 PrefsIRAFAlign}
 | SAVE_ {PrefsDialogSave}
 ;

%%

proc prefs::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
