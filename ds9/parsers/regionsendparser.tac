%{
%}
#include def.tin

#include yesno.tin
#include coordsys.tin
#include wcssys.tin
#include skyframe.tin
#include skyformat.tin
#include int.tin
#include string.tin

%start regionsend

%token AUTO_
%token AUTOCENTROID_
%token BACKGROUND_
%token CENTROID_
%token COLOR_
%token DELIM_
%token EPSILON_
%token EXCLUDE_
%token FORMAT_
%token GROUP_
%token GROUPS_
%token INCLUDE_
%token ITERATION_
%token NL_
%token RADIUS_
%token SELECTED_
%token SHAPE_
%token SHOW_
%token SHOWTEXT_
%token SKY_
%token SKYFORMAT_
%token SOURCE_
%token STRIP_
%token SYSTEM_
%token WIDTH_

%token DS9_
%token XML_
%token CIAO_
%token SAOTNG_
%token PROS_
%token SAOIMAGE_
%token XY_

%token MFORMAT_
%token MSYSTEM_
%token MSKY_
%token MSKYFORMAT_
%token MSTRIP_
%token MDELIM_
%token MPROP_
%token MGROUP_

%%

#include yesno.trl
#include coordsys.trl
#include wcssys.trl
#include skyframe.trl
#include skyformat.trl

regionsend : {RegionSendCmd}
 | props {RegionSendCmd}

 | EPSILON_ {ProcessSendCmdGet pmarker epsilon}
 | SHOW_ {ProcessSendCmdYesNo marker show}
 | SHOWTEXT_ {ProcessSendCmdYesNo marker show,text}
 | CENTROID_ centroid
# backword compatibility
 | AUTOCENTROID_ {ProcessSendCmdYesNo marker centroid,auto}
 | FORMAT_ {ProcessSendCmdGet marker format}
 | SYSTEM_ {ProcessSendCmdGet marker system}
 | SKY_ {ProcessSendCmdGet marker sky}
 | SKYFORMAT_ {ProcessSendCmdGet marker skyformat}
 | STRIP_ {ProcessSendCmdYesNo marker strip}
# backward compatibility
 | DELIM_ {}
 | SHAPE_ {ProcessSendCmdGet marker shape}
 | COLOR_ {ProcessSendCmdGet marker color}
 | WIDTH_ {ProcessSendCmdGet marker width}
 | GROUP_ {ProcessSendCmdCurrent "get marker tag all"}
 | GROUPS_ {ProcessSendCmdCurrent "get marker tag all"}
 ;

centroid: AUTO_ {ProcessSendCmdYesNo marker centroid,auto}
 | RADIUS_ {ProcessSendCmdGet marker centroid,radius}
 | ITERATION_ {ProcessSendCmdGet marker centroid,iteration}
 ;
 
format : DS9_ {set _ ds9}
 | XML_ {set _ xml}
 | CIAO_ {set _ ciao}
 | SAOTNG_ {set _ saotng}
 | PROS_ {set _ pros}
 | SAOIMAGE_ {set _ saoimage}
 | XY_ {set _ xy}
 ;

delim : NL_ {set _ 0}
 | STRING_ {set _ 1}
 ;

props : props prop
 | prop
 ;
 
prop : MFORMAT_ format {ProcessCmdSet marker load,format $2}
 | MSYSTEM_ coordsys {ProcessCmdSet marker load,system $2}
 | MSYSTEM_ wcssys {ProcessCmdSet marker load,system $2}
# backward compatibility
 | MSYSTEM_ skyframe {ProcessCmdSet marker load,system wcs; ProcessCmdSet marker load,sky $2}
 | MSKY_ skyframe {ProcessCmdSet marker load,sky $2}
 | MSKYFORMAT_ skyformat {ProcessCmdSet marker load,skyformat $2}
 | MSTRIP_ yesno {ProcessCmdSet marker load,strip $2}
# backward compatibility
 | MDELIM_ delim {ProcessCmdSet marker load,strip $2}
 | MPROP_ STRING_ INT_ {ProcessCmdAppend marker load,props "$2 = $3 "}
 | MPROP_ STRING_ STRING_ {ProcessCmdAppend marker load,props "$2 = $3 "}
 | INCLUDE_ {ProcessCmdAppend marker load,props "include = 1 "}
 | EXCLUDE_ {ProcessCmdAppend marker load,props "include = 0 "}
 | SOURCE_ {ProcessCmdAppend  marker load,props "source = 1 "}
 | BACKGROUND_ {ProcessCmdAppend marker load,props "source = 0 "}
 | MGROUP_ STRING_ {ProcessCmdAppend marker load,tags "tag = $2 "}
 | SELECTED_ {ProcessCmdSet marker load,select select}
 ;

%%

proc regionsend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
