%{
%}
#include def.tin

#include yesno.tin
#include numeric.tin
#include string.tin

%start command

%token ASINH_
%token CLOSE_
%token DATASEC_
%token EXP_
%token GLOBAL_
%token HISTEQU_
%token LIMITS_
%token LINEAR_
%token LOCAL_
%token LOCK_
%token LOG_
%token MATCH_
%token MINMAX_
%token MODE_
%token OPEN_
%token POW_
%token SCALELIMITS_
%token SCOPE_
%token SINH_
%token SQRT_
%token SQUARED_
%token USER_
%token ZMAX_
%token ZSCALE_

%%

#include yesno.trl
#include numeric.trl

command : scale 
 | scale {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

scale : OPEN_ {ScaleDialog}
 | CLOSE_ {ScaleDestroyDialog}
 | MATCH_ match
 | LOCK_ lock
 | scales {ProcessCmdSet scale type $1 ChangeScale}
 | LOG_ EXP_ numeric {ProcessCmdSet scale log $3 ChangeScale}
 | DATASEC_ yesno {ProcessCmdSet scale datasec $2 ChangeDATASEC}
 | LIMITS_ numeric numeric {ProcessCmdSet scale min $2 {}; ProcessCmdSet scale max $3 ChangeScaleLimit}
# backward compatibility
 | SCALELIMITS_ numeric numeric {ProcessCmdSet scale min $2 {}; ProcessCmdSet scale max $3 ChangeScaleLimit}
 | mode {ProcessCmdSet scale mode $1 ChangeScaleMode}
 | MODE_ mode {ProcessCmdSet scale mode $2 ChangeScaleMode}
 | scope {ProcessCmdSet scale scope $1 ChangeScaleScope}
 | SCOPE_ scope {ProcessCmdSet scale scope $2 ChangeScaleScope}
 ;

scales : LINEAR_ {set _ linear}
 | LOG_ {set _ log}
 | POW_ {set _ pow}
 | SQRT_ {set _ sqrt}
 | SQUARED_ {set _ squared}
 | ASINH_ {set _ asinh}
 | SINH_ {set _ sinh}
 | HISTEQU_ {set _ histequ}
 ;
 
match : {MatchScaleCurrent}
 | LIMITS_ {MatchScaleLimitsCurrent}
 | SCALELIMITS_ {MatchScaleLimitsCurrent}
 ;

lock : yesno {ProcessCmdSet scale lock $1 LockScaleCurrent}
 | LIMITS_ yesno {ProcessCmdSet scale lock,limits $2 LockScaleLimitsCurrent}
 | SCALELIMITS_ yesno {ProcessCmdSet scale lock,limits $2 LockScaleLimitsCurrent}
 ;
 
mode : numeric {set _ $1}
 | MINMAX_ {set _ minmax}
 | ZSCALE_ {set _ zscale}
 | ZMAX_ {set _ zmax}
 | USER_ {set _ user}
 ;
 
scope : LOCAL_ {set _ local}
 | GLOBAL_ {set _ global}
 ;

%%

proc scale::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
