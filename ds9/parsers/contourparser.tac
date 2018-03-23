%{
%}

#include yesno.tin
#include coords.tin
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
#include coords.trl
#include skyframe.trl
#include numeric.trl

command : contour 
 | contour {yyclearin; YYACCEPT} STRING_
 ;

contour : yesno {global contour; set contour(view) $1; UpdateContour}
 | OPEN_ {ContourDialog}
 | CLOSE_ {ContourDestroyDialog}
 | CLEAR_ {ContourOffDialog}
 | LOAD_ load
 | SAVE_ save
 | CONVERT_ {Contour2Polygons}

 | LOAD_ LEVELS_ STRING_ {ContourCmdLoadLevels $3}
 | SAVE_ LEVELS_ STRING_ {ContourCmdSaveLevels $3}
# backward compatibility
 | LOADLEVELS_ STRING_ {ContourCmdLoadLevels $2}
 | SAVELEVELS_ STRING_ {ContourCmdSaveLevels $2}

 | COPY_ {ContourCCopyDialog}
 | PASTE_ paste
 | COLOR_ STRING_ {ContourCmdColor $2}
 | WIDTH_ INT_ {ContourCmdWidth $2}
 | DASH_ yesno {ContourCmdDash $2}
 | SMOOTH_ INT_ {ContourCmdSmooth $2}
 | METHOD_ method {ContourCmdMethod $2}
 | NLEVELS_ INT_ {ContourCmdNLevels $2}
 | SCALE_ scale {ContourCmdScale $2}
 | LOG_ log
 | MODE_ modes
 | SCOPE_ scope {ContourCmdScope $2}
 | LIMITS_ numeric numeric {ContourCmdLimits $2 $3}
 | LEVELS_ STRING_ {ContourCmdLevels $2}
 | GENERATE_ {ContourCmdGenerate}
 ;

load : STRING_ {ContourCmdLoad $1}
 | STRING_ STRING_ INT_ yesno {ContourCmdLoadParam $1 $2 $3 $4}
# backward compatibility
 | STRING_ coordsys STRING_ INT_ yesno {ContourCmdLoadOrg $1 $2 fk5 $3 $4 $5}
 | STRING_ wcssys STRING_ INT_ yesno {ContourCmdLoadOrg $1 $2 fk5 $3 $4 $5}
 | STRING_ skyframe STRING_ INT_ yesno {ContourCmdLoadOrg $1 wcs $2 $3 $4 $5}
 | STRING_ wcssys skyframe STRING_ INT_ yesno {ContourCmdLoadOrg $1 $2 $3 $4 $5 $6}
 ;

save : STRING_ {ContourCmdSave $1 physical fk5}
 | STRING_ coordsys {ContourCmdSave $1 $2 fk5}
 | STRING_ wcssys {ContourCmdSave $1 $2 fk5}
 | STRING_ skyframe {ContourCmdSave $1 wcs $2}
 | STRING_ wcssys skyframe {ContourCmdSave $1 $2 $3}
 ;

paste : {ContourCmdPaste wcs fk5 green 1 no}
 | coordsys STRING_ INT_ yesno {ContourCmdPaste $1 fk5 $2 $3 $4}
 | wcssys STRING_ INT_ yesno {ContourCmdPaste $1 fk5 $2 $3 $4}
 | skyframe STRING_ INT_ yesno {ContourCmdPaste wcs $1 $2 $3 $4}
 | wcssys skyframe STRING_ INT_ yesno {ContourCmdPaste $1 $2 $3 $4 $5}
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

log : numeric {ContourCmdLog $1}
 | EXP_ numeric {ContourCmdLog $2}
 ;

modes : numeric {ContourCmdMode $1}
 | mode {ContourCmdMode $1}
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
