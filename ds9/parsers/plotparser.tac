%{
%}

#include numeric.tin
#include string.tin

%start command

%token A4_
%token AXIS_
%token BAR_
%token BARMODE_
%token CLEAR_
%token CLOSE_
%token COLOR_
%token COMMAND_
%token DASH_
%token DATA_
%token DESTINATION_
%token DUPLICATE_
%token ERROR_
%token FILE_
%token FILENAME_
%token FONT_
%token GRAY_
%token LANDSCAPE_
%token LEGAL_
%token LEGEND_
%token LETTER_
%token LINE_
%token LIST_
%token LOAD_
%token LOADCONFIG_
%token MODE_
%token NAME_
%token NEW_
%token ORIENT_
%token PAGESETUP_
%token PORTRAIT_
%token POSTER_
%token PRINT_
%token PRINTER_
%token RGB_
%token SAVE_
%token SAVECONFIG_
%token SCATTER_
%token SELECT_
%token SHAPE_
%token SHOW_
%token SIZE_
%token SMOOTH_
%token STATS_
%token TABLOID_
%token TITLE_
%token WIDTH_

%token XY_
%token XYEX_
%token XYEY_
%token XYEXEY_

%%

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

 | MODE_

 | AXIS_
 | LEGEND_
 | FONT_
 | TITLE_
 | BARMODE_

 | SHOW_
 | SHAPE_
 | SMOOTH_
 | COLOR_
 | WIDTH_
 | DASH_
 | ERROR_
 | NAME_

 | SELECT_
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

pageOrient : PORTRAIT_
 | LANDSCAPE_
 ;
 
pageSize : LETTER_
 | LEGAL_
 | TABLOID_
 | POSTER_
 | A4_
 ;
 
print : DESTINATION_ printDest
 | COMMAND_ STRING_
 | FILENAME_ STRING_
 | COLOR_ printColor
 ;

printDest : PRINTER_
 | FILE_
 ;

printColor : RGB_
 | GRAY_
 ;
 
%%

proc plot::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
