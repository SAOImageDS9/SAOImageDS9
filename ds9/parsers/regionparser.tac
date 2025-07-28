%{
%}
#include def.tin

#include fonts.tin
#include cutpaste.tin
#include yesno.tin
#include coordsys.tin
#include wcssys.tin
#include skyframe.tin
#include skyformat.tin
#include numeric.tin
#include string.tin

%start command

%token ALL_
%token ANALYSIS_
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
%token DASH_
%token DELETE_
%token DELETEALL_
%token DELIM_
%token DISSOLVE_
%token EDIT_
%token EPSILON_
%token EXCLUDE_
%token FILE_
%token FILL_
%token FIRST_
%token FIXED_
%token FORMAT_
%token FRONT_
%token GETINFO_
%token GROUP_
%token GROUPS_
%token INCLUDE_
%token INVERT_
%token ITERATION_
%token LAST_
%token LIST_
%token LOAD_
%token MOVE_
%token MOVEBACK_
%token MOVEFRONT_
%token NEW_
%token NL_
%token NONE_
%token OPEN_
%token PROPERTY_
%token RADIUS_
%token ROTATE_
%token SAVE_
%token SAVETEMPLATE_
%token SEGMENT_
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
%token TEMPLATE_
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
%token ELLIPSEANNULUS_
%token BOXANNULUS_
%token PANDA_
%token EPANDA_
%token BPANDA_
%token COMPOSITE_
%token DIAMOND_
%token CROSS_
%token ARROW_
%token BOXCIRCLE_

%token HISTOGRAM_
%token PLOT2D_
%token PLOT3D_
%token RADIAL_
%token STATS_

%token MFORMAT_
%token MSYSTEM_
%token MSKY_

%%

#include fonts.trl
#include yesno.trl
#include coordsys.trl
#include wcssys.trl
#include skyframe.trl
#include skyformat.trl
#include numeric.trl

command : region 
 | region {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

region : {RegionCmdLoad}
 | props {RegionCmdLoad}
 | open {RegionCmdOpen}
 | CLOSE_ {RegionCmdClose}
 | ANALYSIS_ analysisTask {RegionCmdAnalysis $2 open}
 | ANALYSIS_ analysisTask analysisAction {RegionCmdAnalysis $2 $3}
 | STRING_ {RegionCmdLoadFn $1}
 | STRING_ props {RegionCmdLoadFn $1}
 | LOAD_ loadall STRING_ {RegionCmdLoadFn $3 $2}
# backward compatibility
 | FILE_ loadall STRING_ {RegionCmdLoadFn $3 $2}
 | SAVE_ save
 | LIST_ list
 | EPSILON_ INT_ {ProcessCmdSet pmarker epsilon $2 MarkerEpsilon}
 | SHOW_ yesno {ProcessCmdSet marker show $2 MarkerShow}
 | SHOWTEXT_ yesno {ProcessCmdSet marker show,text $2 MarkerShowText}
 | CENTROID_ centroid
# backward compatibility
 | AUTOCENTROID_ yesno {ProcessCmdSet marker centroid,auto $2 MarkerCentroidAuto}
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
 | FORMAT_ format {ProcessCmdSet marker format $2}
 | SYSTEM_ coordsys {ProcessCmdSet marker system $2}
 | SYSTEM_ wcssys {ProcessCmdSet marker system $2}
# backward compatibility
 | SYSTEM_ skyframe {ProcessCmdSet marker system wcs; ProcessCmdSet marker sky $2}
 | SKY_ skyframe {ProcessCmdSet marker sky $2}
 | SKYFORMAT_ skyformat {ProcessCmdSet marker skyformat $2}
 | STRIP_ yesno {ProcessCmdSet marker strip $2}
# backward compatibility
 | DELIM_ delim {ProcessCmdSet marker strip $2}

 | SHAPE_ shape {ProcessCmdSet marker shape $2}
 | COLOR_ STRING_ {ProcessCmdSet marker color $2 MarkerColor}
 | FILL_ yesno {ProcessCmdSet marker fill $2 MarkerColor}
 | WIDTH_ INT_ {ProcessCmdSet marker width $2 MarkerWidth}
 | DASH_ yesno {ProcessCmdSet marker dash $2 MarkerWidth}

 | FONT_ font {ProcessCmdSet marker font $2 MarkerFont}
 | FONTSIZE_ INT_ {ProcessCmdSet marker font,size $2 MarkerFont}
 | FONTWEIGHT_ fontWeight {ProcessCmdSet marker font,weight $2 MarkerFont}
 | FONTSLANT_ fontSlant {ProcessCmdSet marker font,slant $2 MarkerFont}

 | FIXED_ yesno {ProcessCmdSet marker fixed $2 [list MarkerProp fixed]}
 | EDIT_ yesno {ProcessCmdSet marker edit $2 [list MarkerProp edit]}
 | ROTATE_ yesno {ProcessCmdSet marker rotate $2 [list MarkerProp rotate]}
 | DELETE_ yesno {ProcessCmdSet marker delete $2 [list MarkerProp delete]}
 | INCLUDE_ {ProcessCmdSet marker include 1 [list MarkerProp include]}
 | EXCLUDE_ {ProcessCmdSet marker include 0 [list MarkerProp include]}
 | SOURCE_ {ProcessCmdSet marker source 1 [list MarkerProp source]}
 | BACKGROUND_ {ProcessCmdSet marker source 0 [list MarkerProp source]}

 | GROUPS_ group
 | GROUP_ group

 | COMPOSITE_ {CompositeCreate}
 | DISSOLVE_ {CompositeDelete}

 | TEMPLATE_ template
 | SAVETEMPLATE_ STRING_ {RegionCmdTemplateSave $2}
 | COMMAND_ STRING_ {RegionCmdCommand $2}

 | UNDO_ {MarkerUndo}
 | CUT_ {MarkerCut}
 | COPY_ {MarkerCopy}
 | PASTE_ paste
 ;

paste : {ProcessCmdSet marker paste,system wcs MarkerPaste}
 | coordsys {ProcessCmdSet marker paste,system $1 MarkerPaste}
 | wcssys {ProcessCmdSet marker paste,system $1 MarkerPaste}
# backward compatibility
 | skyframe {ProcessCmdSet marker paste,system wcs MarkerPaste}
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
 ;

open :  OPEN_
# backward compatibility
 | GETINFO_
 ;

analysisTask : HISTOGRAM_ {set _ histogram}
 | PANDA_ {set _ panda}
 | PLOT2D_ {set _ plot2d}
 | PLOT3D_ {set _ plot3d}
 | RADIAL_ {set _ radial}
 | STATS_ {set _ stats}
 ;

analysisAction : open {set _ open}
 | CLOSE_ {set _ close}
 | SAVE_ {set _ save}
 ;

loadall : {set _ 0}
 | ALL_ {set _ 1}
 ;

save : STRING_ {RegionCmdSaveAll $1}
 | ALL_ STRING_ {RegionCmdSaveAll $2}
 | SELECT_ STRING_ {RegionCmdSaveSelect $2}
 ;

list : {RegionCmdListAll}
 | ALL_ {RegionCmdListAll}
 | SELECT_ {RegionCmdListSelect}
 | CLOSE_ {SimpleTextDestroy markertxt}
 ;

delete : {MarkerDeleteAll}
 | ALL_ {MarkerDeleteAll}
 | SELECT_ {MarkerDeleteSelect}
 | LOAD_ STRING_ {MarkerDeleteAll; RegionCmdLoadFn $2}
 ;

centroid : {MarkerCentroid}
 | AUTO_ yesno {ProcessCmdSet marker centroid,auto $2 MarkerCentroidAuto}
 | RADIUS_ numeric {ProcessCmdSet marker centroid,radius $2 MarkerCentroidRadius}
 | ITERATION_ INT_ {ProcessCmdSet marker centroid,iteration $2 MarkerCentroidIteration}
 ;

move : FRONT_ {MarkerFront}
 | BACK_ {MarkerBack}
 ;
 
select : ALL_ {MarkerSelectAll}
 | NONE_ {MarkerSelectNone}
 | INVERT_ {MarkerSelectInvert}
 | FRONT_ {MarkerSelectFront}
 | BACK_ {MarkerSelectBack}
# backward compatibility
 | LAST_ {MarkerSelectBack}
# backward compatibility
 | FIRST_ {MarkerSelectFront}
# backward compatibility
 | GROUP_ STRING_ {ProcessCmdSet marker tag $2; RegionCmdGroup select}
 ;
 
format : DS9_ {set _ ds9}
 | XML_ {set _ xml}
 | CIAO_ {set _ ciao}
 | SAOTNG_ {set _ saotng}
 | PROS_ {set _ pros}
 | SAOIMAGE_ {set _ saoimage}
 | XY_ {set _ xy}
 ;

shape : CIRCLE_ {set _ circle}
 | ELLIPSE_ {set _ ellipse}
 | BOX_ {set _ box}
 | POLYGON_ {set _ polygon}
 | LINE_ {set _ line}
 | VECTOR_ {set _ vector}
 | PROJECTION_ {set _ projection}
 | SEGMENT_ {set _ segment}
 | TEXT_ {set _ text}
 | point POINT_ {set _ "$1 point"}
 | RULER_ {set _ ruler}
 | COMPASS_ {set _ compass}
 | ANNULUS_ {set _ annulus}
 | ELLIPSEANNULUS_ {set _ ellipseannulus}
 | BOXANNULUS_ {set _ boxannulus}
 | PANDA_ {set _ panda}
 | EPANDA_ {set _ epanda}
 | BPANDA_ {set _ bpanda}
 | COMPOSITE_ {set _ composite}
 ;

point : {set _ boxcircle}
 | CIRCLE_ {set _ circle}
 | BOX_ {set _ box}
 | DIAMOND_ {set _ diamond}
 | CROSS_ {set _ cross}
 | 'X' {set _ x}
 | 'x' {set _ x}
 | ARROW_ {set _ arrow}
 | BOXCIRCLE_ {set _ boxcircle}
 ;
 
delim : NL_ {set _ 0}
 | STRING_ {set _ 1}
 ;
 
template : STRING_ {RegionCmdTemplate $1}
 | STRING_ AT_ numeric numeric {RegionCmdTemplateAt $1 $3 $4 wcs fk5}
 | STRING_ AT_ numeric numeric wcssys {RegionCmdTemplateAt $1 $3 $4 $5 fk5}
 | STRING_ AT_ numeric numeric skyframe {RegionCmdTemplateAt $1 $3 $4 wcs $5}
 | STRING_ AT_ numeric numeric wcssys skyframe {RegionCmdTemplateAt $1 $3 $4 $5 $6}
 ;
 
group : NEW_ {RegionCmdGroupNew}
 | STRING_ {ProcessCmdSet marker tag $1} groupTag
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
