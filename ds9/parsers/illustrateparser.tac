%{
%}
#include def.tin

#include cutpaste.tin
#include yesno.tin
#include numeric.tin
#include string.tin

%start command

%token ALL_
%token BACK_
%token CLOSE_
%token COLOR_
%token COMMAND_
%token DASH_
%token DELETE_
%token FILL_
%token FRONT_
%token INVERT_
%token LIST_
%token LOAD_
%token MOVE_
%token NONE_
%token OPEN_
%token SAVE_
%token SELECT_
%token SHAPE_
%token SHOW_
%token WIDTH_

%token CIRCLE_
%token ELLIPSE_
%token BOX_
%token POLYGON_
%token LINE_
%token TEXT_
%token IMAGE_

%%

#include yesno.trl
#include numeric.trl

command : illustrate
 | illustrate {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

illustrate : {IllustrateCmdLoad}
 | OPEN_ {IllustrateCmdOpen}
 | CLOSE_ {IllustrateCmdClose}

 | SHAPE_ shape {ProcessCmdSet illustrate shape $2 {}}
 | COLOR_ STRING_ {ProcessCmdSet illustrate color $2 IllustrateColor}
 | FILL_ yesno {ProcessCmdSet illustrate fill $2 IllustrateColor}
 | WIDTH_ INT_ {ProcessCmdSet illustrate width $2 IllustrateWidth}
 | DASH_ yesno {ProcessCmdSet illustrate dash $2 IllustrateWidth}

 | MOVE_ move
 | SELECT_ select
 | SAVE_ save
 | LIST_ list
 | DELETE_ delete
 | STRING_ {IllustrateLoadFn $1}
 | LOAD_ STRING_ {IllustrateLoadFn $2}
 | SHOW_ yesno {ProcessCmdSet illustrate show $2 IllustrateShow}
 | COMMAND_ STRING_ {IllustrateCmdCommand $2}

 | UNDO_ {IllustrateUndo}
 | CUT_ {IllustrateCut}
 | COPY_ {IllustrateMenuCopy}
 | PASTE_ {IllustratePaste}
 ;

shape : CIRCLE_ {set _ circle}
 | ELLIPSE_ {set _ ellipse}
 | BOX_ {set _ box}
 | POLYGON_ {set _ polygon}
 | LINE_ {set _ line}
 | TEXT_ {set _ text}
 | IMAGE_ {set _ image}
 ;

move : FRONT_ {IllustrateMoveFront}
 | BACK_ {IllustrateMoveBack}
 ;

select : ALL_ {IllustrateSelectAll}
 | NONE_ {IllustrateSelectNone}
 | INVERT_ {IllustrateInvertSelect}
 | FRONT_ {IllustrateSelectFront}
 | BACK_ {IllustrateSelectBack}
 ;
 
save : STRING_ {IllustrateSaveAllFn $1}
 | SELECT_ STRING_ {IllustrateSaveSelectFn $2}
 | ALL_ STRING_ {IllustrateSaveAll $2}
 ;

list : {IllustrateListAll}
 | SELECT_ {IllustrateListSelect}
 | ALL_ {IllustrateListAll}
 | CLOSE_ {SimpleTextDestroy illustratetxt}
 ;

delete : {IllustrateDeleteAll}
 | ALL_ {IllustrateDeleteAll}
 | SELECT_ {IllustrateDeleteSelect}
 ;

%%

proc illustrate::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
