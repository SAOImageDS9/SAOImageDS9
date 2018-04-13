%{
%}

#include yesno.tin
#include font.tin
#include coords.tin
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
%token INCLUDE_
%token INVERT_
%token ITERATION_
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
#include numeric.trl

command : region 
 | region {yyclearin; YYACCEPT} STRING_
 ;

region : {RegionCmdLoad}
 | props {RegionCmdLoad}
 | STRING_ {RegionCmdLoadFn $1}
 | STRING_ props {RegionCmdLoadFn $1}
 | LOAD_ loadall STRING_ {RegionCmdLoadFn $3 $2}
# backward compatibility
 | FILE_ loadall STRING_ {RegionCmdLoadFn $3 $2}
 | SAVE_ STRING_ {RegionCmdSave $2}
 | LIST_ list
 | EPSILON_ INT_ {PmarkerCmdSet epsilon $2 MarkerEpsilon}
 | SHOW_ yesno {MarkerCmdSet show $2 MarkerShow}
 | SHOWTEXT_ yesno {MarkerCmdSet show,text $2 MarkerShowText}
 | CENTROID_ centroid
# backward compatibility
 | AUTOCENTROID_ yesno {MarkerCmdSet centroid,auto $2 MarkerCentroidAuto}
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
 | SELECTNONE_ {MarkerUnSelectAll}
 | DELETE_ delete
# backward compatibility
 | DELETEALL_ {MarkerDeleteAll}
 | FORMAT_ format {MarkerCmdSet format $2}
 | SYSTEM_ coordsys {MarkerCmdSet system $2}
 | SYSTEM_ wcssys {MarkerCmdSet system $2}
# backward compatibility
 | SYSTEM_ skyframe {MarkerCmdSet system wcs; MarkerCmdSet sky $2}
 | SKY_ skyframe {MarkerCmdSet sky $2}
 | SKYFORMAT_ skyformat {MarkerCmdSet skyformat $2}
 | STRIP_ yesno {MarkerCmdSet strip $2}
 | DELIM_ delim {MarkerCmdSet strip $2}
 | SHAPE_ shape {MarkerCmdSet shape $2}
 | COLOR_ STRING_ {MarkerCmdSet color $2 MarkerColor}
 | WIDTH_ INT_ {MarkerCmdSet width $2 MarkerWidth}
 | FIXED_ yesno {MarkerCmdSet fixed $2 [list MarkerProp fixed]}
 | EDIT_ yesno {MarkerCmdSet edit $2 [list MarkerProp edit]}
 | ROTATE_ yesno {MarkerCmdSet rotate $2 [list MarkerProp rotate]}
 | DELETE_ yesno {MarkerCmdSet delete $2 [list MarkerProp delete]}
 | INCLUDE_ {MarkerCmdSet include 1 [list MarkerProp include]}
 | EXCLUDE_ {MarkerCmdSet include 0 [list MarkerProp include]}
 | SOURCE_ {MarkerCmdSet source 1 [list MarkerProp source]}
 | BACKGROUND_ {MarkerCmdSet source 0 [list MarkerProp source]}
 | GROUPS_ group
 | GROUP_ group
 | COPY_ {MarkerCopy}
 | CUT_ {MarkerCut}
 | PASTE_ {MarkerCmdSet paste,system wcs MarkerPaste}
 | PASTE_ coordsys {MarkerCmdSet paste,system $2 MarkerPaste}
 | PASTE_ wcssys {MarkerCmdSet paste,system $2 MarkerPaste}
# backward compatibility
 | PASTE_ skyframe {MarkerCmdSet paste,system wcs MarkerPaste}
 | UNDO_ {MarkerUndo}
 | COMPOSITE_ {CompositeCreate}
 | DISSOLVE_ {CompositeDelete}
 | TEMPLATE_ template
 | SAVETEMPLATE_ STRING_ {RegionCmdTemplateSave $2}
 | COMMAND_ STRING_ {RegionCmdCommand $2}
 ;

props : props prop
 | prop
 ;
 
prop : -FORMAT_ format {MarkerCmdSet load,format $2}
 | -SYSTEM_ coordsys {MarkerCmdSet load,system $2}
 | -SYSTEM_ wcssys {MarkerCmdSet load,system $2}
# backward compatibility
 | -SYSTEM_ skyframe {MarkerCmdSet load,system wcs; MarkerCmdSet load,sky $2}
 | -SKY_ skyframe {MarkerCmdSet load,sky $2}
 ;

loadall : {set _ 0}
 | ALL_ {set _ 1}
 ;

list : {RegionCmdList}
 | CLOSE_ {SimpleTextDestroy markertxt}
 ;

centroid : {MarkerCentroid}
 | AUTO_ yesno {MarkerCmdSet centroid,auto $2 MarkerCentroidAuto}
 | RADIUS_ numeric {MarkerCmdSet centroid,radius $2 MarkerCentroidRadius}
 | ITERATION_ INT_ {MarkerCmdSet centroid,iteration $2 MarkerCentroidIteration}
 ;

move : FRONT_ {MarkerFront}
 | BACK_ {MarkerBack}
 ;
 
select : ALL_ {MarkerSelectAll}
 | NONE_ {MarkerUnselectAll}
 | INVERT_ {MarkerSelectInvert}
# backward compatibility
 | GROUP_ STRING_ {RegionCmdGroupTag $2; RegionCmdGroup select}
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
 
template : STRING_ {RegionCmdTemplate $1}
 | STRING_ AT_ numeric numeric {RegionCmdTemplateAt $1 $3 $4 wcs fk5}
 | STRING_ AT_ numeric numeric wcssys {RegionCmdTemplateAt $1 $3 $4 $5 fk5}
 | STRING_ AT_ numeric numeric skyframe {RegionCmdTemplateAt $1 $3 $4 wcs $5}
 | STRING_ AT_ numeric numeric wcssys skyframe {RegionCmdTemplateAt $1 $3 $4 $5 $6}
 ;
 
group : NEW_ {RegionCmdGroupNew}
 | STRING_ {RegionCmdGroupTag $1} groupTag
 ;

groupTag : NEW_ {RegionCmdGroupNew}
 | UPDATE_ {RegionCmdGroupUpdate}
 | DELETE_ {RegionCmdGroup delete}
 | SELECT_ {RegionCmdGroup select}
 | COLOR_ STRING_ {RegionCmdGroup color $2}
 | COPY_ {RegionCmdGroup copy}
 | CUT_ {RegionCmdGroup cut}
 | FONT_ STRING_ {RegionCmdGroupFont $2}
 | MOVE_ INT_ INT_ {RegionCmdGroup move $2 $3}
 | MOVEFRONT_ {RegionCmdGroup {move front}}
 | MOVEBACK_ {RegionCmdGroup {move back}}
 | PROPERTY_ property yesno {RegionCmdGroup property $2 $3}
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
