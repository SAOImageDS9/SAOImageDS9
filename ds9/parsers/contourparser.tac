%{
%}
#include def.tin

#include yesno.tin
#include coordsys.tin
#include wcssys.tin
#include skyframe.tin
#include numeric.tin
#include string.tin

%start command

%token ASINH_
%token BLOCK_
%token CLEAR_
%token CLOSE_
%token COLOR_
%token CONVERT_
%token COPY_
%token DASH_
%token EXP_
%token GENERATE_
%token GLOBAL_
%token HISTEQU_
%token LEVELS_
%token LIMITS_
%token LINEAR_
%token LOAD_
%token LOADLEVELS_
%token LOCAL_
%token LOG_
%token METHOD_
%token MINMAX_
%token MODE_
%token NLEVELS_
%token OPEN_
%token PASTE_
%token POW_
%token SAVE_
%token SAVELEVELS_
%token SCALE_
%token SCOPE_
%token SINH_
%token SMOOTH_
%token SQRT_
%token SQUARED_
%token WIDTH_
%token ZMAX_
%token ZSCALE_

%%

#include yesno.trl
#include coordsys.trl
#include wcssys.trl
#include skyframe.trl
#include numeric.trl

command : contour 
 | contour {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

contour : yesno {ProcessCmdSet contour view $1 UpdateContour}
 | OPEN_ {ContourDialog}
 | CLOSE_ {ContourDestroyDialog}
 | CLEAR_ {ContourOffDialog}
 | LOAD_ load
 | SAVE_ save
 | CONVERT_ {Contour2Polygons}

# backward compatibility
 | LOADLEVELS_ STRING_ {ContourCmdLoadLevels $2}
# backward compatibility
 | SAVELEVELS_ STRING_ {ContourCmdSaveLevels $2}

 | COPY_ {ContourCCopyDialog}
 | PASTE_ paste
 | COLOR_ STRING_ {ContourDialog; ProcessCmdSet contour color $2 UpdateContour}
 | WIDTH_ INT_ {ContourDialog; ProcessCmdSet contour width $2 UpdateContour}
 | DASH_ yesno {ContourDialog; ProcessCmdSet contour dash $2 UpdateContour}
 | SMOOTH_ INT_ {ContourCmdGenerateDialog smooth $2}
 | METHOD_ method {ContourCmdGenerateDialog method $2}
 | NLEVELS_ INT_ {ContourCmdGenerateDialog numlevel $2}
 | SCALE_ scale {ContourCmdScale scale $2}
 | LOG_ log
 | MODE_ modes
 | SCOPE_ scope {ContourCmdMode scope $2}
 | LIMITS_ numeric numeric {ContourCmdLimits $2 $3}
 | LEVELS_ levels
 | GENERATE_ {ContourDialog; ContourGenerateDialog; UpdateContour}
 ;

levels : numerics {ContourCmdLevels $1}
# backward compatible
 | STRING_ {ContourCmdLevels $1}
 ;

numerics : numerics numeric {append _ " $2"}
 | numeric
 ;

load : STRING_ {ContourCmdLoad $1}
 | LEVELS_ STRING_ {ContourCmdLoadLevels $2}
# backward compatibility
 | STRING_ coordsys STRING_ INT_ yesno {ContourCmdLoadOrg $1 $2 fk5 $3 $4 $5}
 | STRING_ wcssys STRING_ INT_ yesno {ContourCmdLoadOrg $1 $2 fk5 $3 $4 $5}
 | STRING_ skyframe STRING_ INT_ yesno {ContourCmdLoadOrg $1 wcs $2 $3 $4 $5}
 | STRING_ wcssys skyframe STRING_ INT_ yesno {ContourCmdLoadOrg $1 $2 $3 $4 $5 $6}
# no longer supported
# | STRING_ STRING_ INT_ yesno
 ;

save : STRING_ {ContourCmdSave $1 physical fk5}
 | STRING_ coordsys {ContourCmdSave $1 $2 fk5}
 | STRING_ wcssys {ContourCmdSave $1 $2 fk5}
 | STRING_ skyframe {ContourCmdSave $1 wcs $2}
 | STRING_ wcssys skyframe {ContourCmdSave $1 $2 $3}
 | LEVELS_ STRING_ {ContourCmdSaveLevels $2}
# backward compatibility
# no longer supported
# | STRING_ wcssys skyframe STRING_ INT_ yesno {ContourCmdSave $1 $2 $3}
 ;

paste : {ContourCmdPaste wcs fk5 green 1 no}
 | coordsys STRING_ INT_ yesno {ContourCmdPaste $1 fk5 $2 $3 $4}
 | wcssys STRING_ INT_ yesno {ContourCmdPaste $1 fk5 $2 $3 $4}
 | skyframe STRING_ INT_ yesno {ContourCmdPaste wcs $1 $2 $3 $4}
 | wcssys skyframe STRING_ INT_ yesno {ContourCmdPaste $1 $2 $3 $4 $5}
# no longer supported
# | coordsys
# | wcssys
 ;

method : BLOCK_ {set _ block}
 | SMOOTH_ {set _ smooth}
 ;

scale : LINEAR_ {set _ linear}
 | LOG_ {set _ log}
 | POW_ {set _ pow}
 | SQUARED_ {set _ squared}
 | SQRT_ {set _ sqrt}
 | ASINH_ {set _ asinh}
 | SINH_ {set _ sinh}
 | HISTEQU_ {set _ histequ}
 ;

log : numeric {ContourCmdScale log $1}
 | EXP_ numeric {ContourCmdScale log $2}
 ;

modes : numeric {ContourCmdMode mode $1}
 | mode {ContourCmdMode mode $1}
 ;

mode : MINMAX_ {set _ minmax}
 | ZSCALE_ {set _ zscale}
 | ZMAX_ {set _ zmax}
 ;

scope : LOCAL_ {set _ local}
 | GLOBAL_ {set _ global}
 ;

%%

proc contour::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
