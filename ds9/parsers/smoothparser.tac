%{
%}
#include def.tin

#include yesno.tin
#include numeric.tin
#include string.tin

%start command

%token ANGLE_
%token BOXCAR_
%token CLOSE_
%token ELLIPTIC_
%token FUNCTION_
%token GAUSSIAN_
%token LOCK_
%token MATCH_
%token OPEN_
%token RADIUS_
%token RADIUSMINOR_
%token SIGMA_
%token SIGMAMINOR_
%token TOPHAT_

%%

#include yesno.trl
#include numeric.trl

command : smooth 
 | smooth {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;


smooth : yesno {ProcessCmdSet smooth view $1 SmoothUpdate}
 | OPEN_ {SmoothDialog}
 | CLOSE_ {SmoothDestroyDialog}
 | MATCH_ {MatchSmoothCurrent}
 | LOCK_ yesno {ProcessCmdSet smooth lock $2 LockSmoothCurrent}
 | FUNCTION_ function {ProcessCmdSet smooth function $2 SmoothUpdate}
 | RADIUS_ INT_ {ProcessCmdSet smooth radius $2 SmoothUpdate}
 | RADIUSMINOR_ INT_ {ProcessCmdSet smooth radius,minor $2 SmoothUpdate}
 | SIGMA_ numeric {ProcessCmdSet smooth sigma $2 SmoothUpdate}
 | SIGMAMINOR_ numeric {ProcessCmdSet smooth sigma,minor $2 SmoothUpdate}
 | ANGLE_ numeric {ProcessCmdSet smooth angle $2 SmoothUpdate}
 ;

function : BOXCAR_ {set _ boxcar}
 | ELLIPTIC_ {set _ elliptic}
 | TOPHAT_ {set _ tophat}
 | GAUSSIAN_ {set _ gaussian}
 ;
 
%%

proc smooth::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
