%{
%}
#include def.tin

#include yesno.tin
#include int.tin
#include string.tin

%start command

%token BACKGROUND_
%token BGCOLOR_
%token COLOR_
%token NAN_
%token NANCOLOR_

%token CLEAR_
%token CLOSE_
%token IRAFALIGN_
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
# process in prefsfirstparser.tac
 | yesno

 | OPEN_ {PrefsDialog}
 | CLEAR_ {ClearPrefs}
 | CLOSE_ {PrefsDialogClose}
 | SAVE_ {PrefsDialogSave}

 | BACKGROUND_ bg
 | BACKGROUND_ COLOR_ bg
 | BGCOLOR_ bg
 | NAN_ nan
 | NAN_ COLOR_ nan
 | NANCOLOR_ nan

 | PRECISION_ INT_ INT_ INT_ INT_ INT_ INT_ INT_ INT_ INT_ {ProcessCmdSet pds9 prec,linear $2; ProcessCmdSet pds9 prec,deg $3; ProcessCmdSet pds9 prec,hms $4; ProcessCmdSet pds9 prec,dms $5; ProcessCmdSet pds9 prec,len,linear $6; ProcessCmdSet pds9 prec,len,deg $7; ProcessCmdSet pds9 prec,len,arcmin $8; ProcessCmdSet pds9 prec,len,arcsec $9; ProcessCmdSet pds9 prec,angle $10; PrefsPrecision}

 | THEME_ STRING_ {ProcessCmdSet pds9 theme $2 ThemeChange}
 | THREADS_ INT_ {ProcessCmdSet ds9 threads $2 ChangeThreads}
 | IRAFALIGN_ yesno {ProcessCmdSet pds9 iraf $2 PrefsIRAFAlign}
 ;

bg : yesno {ProcessCmdSet pds9 bg,use $1 PrefsBgColor}
 | STRING_ {ProcessCmdSet pds9 bg $1 PrefsBgColor}
 ;
 
nan : STRING_ {ProcessCmdSet pds9 nan $1 PrefsNanColor}
 ;

%%

proc prefs::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
