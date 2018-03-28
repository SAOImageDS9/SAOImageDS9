%{
%}

#include yesno.tin
#include numeric.tin
#include string.tin

%start command

%token A4_
%token ALIGNED_
%token ARROW_
%token AXIS_
%token BAR_
%token BARMODE_
%token BOTTOM_
%token CATROM_
%token CIRCLE_
%token CLEAR_
%token CLOSE_
%token COLOR_
%token COMMAND_
%token CUBIC_
%token DASH_
%token DATA_
%token DESTINATION_
%token DIAMOND_
%token DUPLICATE_
%token ERROR_
%token FILE_
%token FILENAME_
%token FILL_
%token FONT_
%token GRAY_
%token LANDSCAPE_
%token LEFT_
%token LEGAL_
%token LEGEND_
%token LETTER_
%token LINE_
%token LINEAR_
%token LIST_
%token LOAD_
%token LOADCONFIG_
%token MODE_
%token NAME_
%token NEW_
%token NORMAL_
%token ORIENT_
%token OVERLAP_
%token PAGESETUP_
%token PLUS_
%token POINTER_
%token PORTRAIT_
%token POSITION_
%token POSTER_
%token PRINT_
%token PRINTER_
%token QUADRATIC_
%token RGB_
%token RIGHT_
%token SAVE_
%token SAVECONFIG_
%token SCATTER_
%token SCROSS_
%token SELECT_
%token SHAPE_
%token SHOW_
%token SIZE_
%token SMOOTH_
%token SPLUS_
%token SQUARE_
%token STACKED_
%token STATS_
%token STEP_
%token TABLOID_
%token TITLE_
%token TOP_
%token TRIANGLE_
%token WIDTH_
%token ZOOM_

%token XY_
%token XYEX_
%token XYEY_
%token XYEXEY_

%%

#include yesno.trl
#include numeric.trl

command : plot
 | plot {yyclearin; YYACCEPT} STRING_
 ;

plot : new
 | NEW_ new
 | {PlotCmdCheck} plotCmd
 | STRING_ {PlotCmdRef $1}
 | STRING_ {PlotCmdRef $1} plotCmd
 ;

plotCmd : DATA_ dim

 | LOAD_ load
 | SAVE_ STRING_
 | CLEAR_
 | DUPLICATE_
 | STATS_
 | LIST_
 | LOADCONFIG_ STRING_
 | SAVECONFIG_ STRING_
 | PAGESETUP_ pagesetup
 | PRINT_ print
 | CLOSE_

 | MODE_ mode

 | AXIS_ axis
 | LEGEND_ legend
 | FONT_ fontt
 | TITLE_ title
 | BARMODE_ barmode

 | SHOW_ yesno
 | SHAPE_ shape
 | SMOOTH_ smooth
 | COLOR_ STRING_
 | WIDTH_ INT_
 | DASH_ yesno
 | ERROR_ errorr
 | NAME_ STRING_

 | SELECT_ INT_
 ;

new : line
 | LINE_ line
 | BAR_ bar
 | SCATTER_ scatter
 ;
 
line : {PlotCmdLine {} {} {} {} xy}
 ;

bar : {PlotCmdBar {} {} {} {} xy}
 ;

scatter : {PlotCmdScatter {} {} {} {} xy}
 ;

dim : XY_ {set _ xy}
 | XYEX_ {set _ xyex}
 | XYEY_ {set _ xyey}
 | XYEXEY_ {set _ xyexey}
 ;

load : STRING_
 | STRING_ dim
 ;
 
pagesetup : ORIENT_ pageOrient
 | SIZE_ pageSize
 ;

pageOrient : PORTRAIT_ {set _ portrait}
 | LANDSCAPE_ {set _ landscape}
 ;
 
pageSize : LETTER_ {set _ letter}
 | LEGAL_ {set _ legal}
 | TABLOID_ {set _ tabloid}
 | POSTER_ {set _ poster}
 | A4_ {set _ a4}
 ;
 
print : DESTINATION_ printDest
 | COMMAND_ STRING_
 | FILENAME_ STRING_
 | COLOR_ printColor
 ;

printDest : PRINTER_ {set _ printer}
 | FILE_ {set _ file}
 ;

printColor : RGB_ {set _ rgb}
 | GRAY_ {set _ gray}
 ;
 
mode : POINTER_ {set _ pointer}
 | ZOOM_ {set _ zoom}
 ;

axis :
 ;

legend : yesno
 | POSITION_ legendPos
 ;
 
legendPos : RIGHT_ {set _ right}
 | LEFT_ {set _ left}
 | TOP_ {set _ top}
 | BOTTOM_ {set _ bottom}
 ;

fontt :
 ;

title : STRING_
 | 'x' STRING_
 | 'X' STRING_
 | 'y' STRING_
 | 'Y' STRING_
 ;

barmode : NORMAL_ {set _ normal}
 | STACKED_ {set _ stacked}
 | ALIGNED_ {set _ aligned}
 | OVERLAP_ {set _ overlap}
 ;

shape : shapeShape
 | FILL_ yesno
 | COLOR_ STRING_
 ;

shapeShape : CIRCLE_ {set _ circle}
 | SQUARE_ {set _ square}
 | DIAMOND_ {set _ diamond}
 | PLUS_ {set _ plus}
 | SPLUS_ {set _ splus}
 | SCROSS_ {set _ scross}
 | TRIANGLE_ {set _ triangle}
 | ARROW_ {set _ arrow}
 ;

smooth : STEP_ {set _ step}
 | LINEAR_ {set _ linear}
 | CUBIC_ {set _ cubic}
 | QUADRATIC_ {set _ quadratic}
 | CATROM_ {set _ catrom}
 ;

errorr : yesno
 | COLOR_ STRING_
 | WIDTH_ INT_
 ;

%%

proc plot::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
