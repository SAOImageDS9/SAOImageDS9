%{
%}

#include yesno.tin
#include font.tin
#include coords.tin
#include skyframe.tin
#include skyformat.tin
#include numeric.tin
#include string.tin

%start command

%token ALL_
%token AT_
%token AUTO_
%token AUTOCENTROID_
%token BACK_
%token BACKGROUND_
%token CENTROID_
%token CLOSE_
%token COLOR_
%token COMMAND_
%token COMPOSITE_
%token COORD_
%token COORDFORMAT_
%token COPY_
%token CUT_
%token DELETE_
%token DELETEALL_
%token DELIM_
%token DISSOLVE_
%token EDIT_
%token EPSILON_
%token EXCLUDE_
%token FILE_
%token FIXED_
%token FORMAT_
%token FRONT_
%token GETINFO_
%token GROUP_
%token GROUPS_
%token INTERATION_
%token INCLUDE_
%token INVERT_
%token LIST_
%token LOAD_
%token MOVE_
%token MOVEBACK_
%token MOVEFRONT_
%token NEW_
%token NL_
%token NONE_
%token PASTE_
%token PROPERTY_
%token RADIUS_
%token ROTATE_
%token SAVE_
%token SAVETEMPLATE_
%token SELECT_
%token SELECTALL_
%token SELECTNONE_
%token SHAPE_
%token SHOW_
%token SHOWTEXT_
%token SKY_
%token SKYFORMAT_
%token SOURCE_
%token STRIP_
%token SYSTEM_
%token TAG_
%token TEMPLATE_
%token UNDO_
%token UPDATE_
%token WIDTH_

%token DS9_
%token XML_
%token CIAO_
%token SAOTNG_
%token PROS_
%token SAOIMAGE_
%token XY_

%token CIRCLE_
%token ELLIPSE_
%token BOX_
%token POLYGON_
%token POINT_
%token LINE_
%token VECTOR_
%token TEXT_
%token RULER_
%token COMPASS_
%token PROJECTION_
%token ANNULUS_
%token PANDA_
%token EPANDA_
%token BPANDA_
%token COMPOSITE_
%token DIAMOND_
%token CROSS_
%token ARROW_
%token BOXCIRCLE_

%token -FORMAT_
%token -SYSTEM_
%token -SKY_

%%

#include yesno.trl
#include font.trl
#include coords.trl
#include skyframe.trl
#include skyformat.trl
#include numeric.trl

command : region 
 | region {yyclearin; YYACCEPT} STRING_
 ;

region : props {RegionCmdLoad}
 | LOAD_ loadall props STRING_ {RegionCmdLoadFn $4 $2}
# backward compatibility
 | FILE_ loadall STRING_ {RegionCmdLoadFn $3 $2}
 | SAVE_ STRING_ {RegionCmdSaveFn $2}
 | LIST_ list
 | EPSILON_ INT_ {PRegionCmdSet epsilon $2 MarkerEpsilon}
 | SHOW_ yesno {RegionCmdSet show $2 MarkerShow}
 | SHOWTEXT_ yesno {RegionCmdSet show,text $2 MarkerShowText}
 | CENTROID_ centroid
# backward compatibility
 | AUTOCENTROID_ yesno {RegionCmdSet centroid,auto $2 MarkerCentroidAuto}
 | GETINFO_ {MarkerInfo}
 | MOVE_ move
# backward compatibility
 | MOVEFRONT_ {MarkerFront}
# backward compatibility
 | MOVEBACK_ {MarkerBack}
 | SELECT_ select
# backward compatibility
 | SELECTALL_ {MarkerSelectAll}
# backward compatibility
 | SELECTNONE_ {MarkerSelectNone}
 | DELETE_ delete
# backward compatibility
 | DELETEALL_ {MarkerDeleteAll}
 | FORMAT_ format {RegionCmdSet format $2}
 | SYSTEM_ coordsys {RegionCmdSet system $2}
 | SYSTEM_ wcssys {RegionCmdSet system $2}
# backward compatibility
 | SYSTEM_ skyframe {RegionCmdSet system wcs; RegionCmdSet sky $2}
 | SKY_ skyframe {RegionCmdSet sky $2}
 | SKYFORMAT_ skyformat {RegionCmdSet skyformate $2}
 | STRIP_ yesno {RegionCmdSet strip $2}
 | DELIM_ delim {RegionCmdSet strip $2}
 | SHAPE_ shape {RegionCmdSet shape $2}
 | COLOR_ STRING_ {RegionCmdSet color $2 MarkerColor}
 | WIDTH_ INT_ {RegionCmdSet width $2 MarkerWidth}
 | FIXED_ yesno {RegionCmdSet fixed $2 [list MarkerProp fixed]}
 | EDIT_ yesno {RegionCmdSet edit $2 [list MarkerProp edit]}
 | ROTATE_ yesno {RegionCmdSet rotate $2 [list MarkerProp rotate]}
 | DELETE_ yesno {RegionCmdSet delete $2 [list MarkerProp delete]}
 | INCLUDE_ {RegionCmdSet include 1 [list MarkerProp include]}
 | EXCLUDE_ {RegionCmdSet include 0 [list MarkerProp include]}
 | SOURCE_ {RegionCmdSet source 1 [list MarkerProp source]}
 | BACKGROUND_ {RegionCmdSet source 0 [list MarkerProp source]}
 | GROUPS_ group # waj
 | GROUP_ group # waj
 | COPY_ {MarkerCopy}
 | CUT_ {MarkerCut}
 | PASTE_ coordsys {RegionCmdSet paste,system $2 MarkerPaste}
 | PASTE_ wcssys {RegionCmdSet paste,system $2 MarkerPaste}
# backward compatibility
 | PASTE_ skyframe {RegionCmdSet paste,system wcs MarkerPaste}
 | UNDO_ {MarkerUndo}
 | COMPOSITE_ {CompositeCreate}
 | DISSOLVE_ {CompositeDelete}
 | TEMPLATE_ template  # waj
 | SAVETEMPLATE_ STRING_  # waj
 | COMMAND_ STRING_  # waj
 ;

props : props prop
 | prop
 ;
 
prop : -FORMAT_ format {RegionCmdSet load,format $2}
 | -SYSTEM_ coordsys {RegionCmdSet load,system $2}
 | -SYSTEM_ wcssys {RegionCmdSet load,system $2}
# backward compatibility
 | -SYSTEM_ skyframe {RegionCmdSet load,system wcs; RegionCmdSet load,sky $2}
 | -SKY_ skyframe {RegionCmdSet load,sky $2}
 ;

loadall : {set _ 0}
 | ALL_ {set _ 1}
 ;

list : {RegionCmdList}
 | CLOSE_ {SimpleTextDestroy markertxt}
 ;

centroid : {MarkerCentroid}
 | AUTO_ yesno {RegionCmdSet centroid,auto $2 MarkerCentroidAuto}
 | RADIUS_ numeric {RegionCmdSet centroid,radius $2 MarkerCentroidRadius}
 | INTERATION_ INT_ {RegionCmdSet centroid,iteration $2 MarkerCentroidInteration}
 ;

move : FRONT_ {MarkerFront}
 | BACK_ {MarkerBack}
 ;
 
select : ALL_ {MarkerSelectAll}
 | NONE_ {MarkerSelectNone}
 | INVERT_ {MarkerSelectInvert}
# backward compatibility
 | GROUP_ STRING_ # waj
;
 
delete : ALL_ {MarkerDeleteAll}
 | SELECT_ {MarkerDeleteSelect}
 ;

format : DS9_ {set _ ds9}
 | XML_ {set _ xml}
 | CIAO_ {set _ ciao}
 | SAOTNG_ {set _ saotng}
 | PROS_ {set _ pros}
 | SAOIMAGE_ {set _ saoimage}
 | XY_ {set _ xy}
 ;

shape : CIRCLE_
 | ELLIPSE_
 | BOX_
 | POLYGON_
 | point POINT_
 | LINE_
 | VECTOR_
 | TEXT_
 | RULER_
 | COMPASS_
 | PROJECTION_
 | ANNULUS_
 | ELLIPSE_ ANNULUS_
 | BOX_ ANNULUS_
 | PANDA_
 | EPANDA_
 | BPANDA_
 | COMPOSITE_
 ;

point :
 | CIRCLE_
 | BOX_
 | DIAMOND_
 | CROSS_
 | 'X'
 | 'x'
 | ARROW_
 | BOXCIRCLE_
 ;
 
delim : NL_ {set _ 0}
 | STRING_ {set _ 1}
 | yesno {set _ $1}
 ;
 
template : STRING_
 | STRING_ AT_ numeric numeric coordsys
 | STRING_ AT_ numeric numeric wcssys
 | STRING_ AT_ numeric numeric wcssys skyframe
 ;
 
group : NEW_
 | STRING_ NEW_
 | STRING_ UPDATE_
 | STRING_ SELECT_
 | STRING_ COLOR_ STRING_
 | STRING_ COPY_
 | STRING_ CUT_
 | STRING_ DELETE_
 | STRING_ FONT_
 | STRING_ MOVE_ INT_ INT_
 | STRING_ MOVEFRONT_
 | STRING_ MOVEBACK_
 | STRING_ PROPERTY_ property yesno
 ; 

property : SELECT_ {set _ select}
 | EDIT_ {set _ edit}
 | MOVE_ {set _ move}
 | ROTATE_ {set _ rotate}
 | DELETE_ {set _ delete}
 | FIXED_ {set _ fixed}
 | INCLUDE_ {set _ include}
 | SOURCE_ {set _ source}
 ;

%%

proc region::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
