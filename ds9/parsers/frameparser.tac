%{
%}
#include def.tin

#include coordsys.tin
#include wcssys.tin
#include int.tin
#include string.tin

%start command

%token 3D_
%token ALL_
%token BACK_
%token CENTER_
%token CLEAR_
%token DELETE_
%token FIRST_
%token FORWARD_
%token FRAMENO_
%token HIDE_
%token LAST_
%token LOCK_
%token MATCH_
%token MOVE_
%token NEW_
%token NEXT_
%token NONE_
%token PREV_
%token REFRESH_
%token RESET_
%token RGB_
%token SHOW_

%%

#include coordsys.trl
#include wcssys.trl

command : frame 
 | frame {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

frame : MATCH_ match {MatchFrameCurrent $2}
 | LOCK_ lock {ProcessCmdSet panzoom lock $2; LockFrameCurrent}
 | CENTER_ center
 | CLEAR_ clear
 | DELETE_ delete
 | NEW_ new
 | RESET_ reset
 | REFRESH_ refresh
 | HIDE_ hide
 | SHOW_ show
 | MOVE_ move
 | FIRST_ {FirstFrame}
 | LAST_ {LastFrame}
 | PREV_ {PrevFrame}
 | NEXT_ {NextFrame}
 | INT_ {CreateGotoFrame $1 base}
 | FRAMENO_ INT_ {CreateGotoFrame $2 base}
 ;

center : {CenterCurrentFrame}
 | INT_ {CenterFrame "Frame$1"}
 | ALL_ {CenterAllFrame}
 ;

clear : {ClearCurrentFrame}
 | INT_ {ClearFrame "Frame$1"}
 | ALL_ {ClearAllFrame}
 ;

delete : {DeleteCurrentFrame}
 | INT_ {DeleteSingleFrame "Frame$1"}
 | ALL_ {DeleteAllFrames}
 ;
 
new : {CreateFrame}
 | RGB_ {CreateRGBFrame}
 | 3D_ {Create3DFrame}
 ;
 
reset : {ResetCurrentFrame}
 | INT_ {ResetFrame "Frame$1"}
 | ALL_ {ResetAllFrame}
 ;

refresh : {UpdateCurrentFrame}
 | INT_ {UpdateFrame "Frame$1"}
 | ALL_ {UpdateAllFrame}
 ;

hide : {global current; ProcessCmdSet active $current(frame) 0 UpdateActiveFrames}
 | INT_ {ProcessCmdSet active "Frame$1" 0 UpdateActiveFrames}
 | ALL_ {ActiveFrameNone}
 ;
 
show :
 | INT_ {ProcessCmdSet active "Frame$1" 1 UpdateActiveFrames}
 | ALL_ {ActiveFrameAll}
 ;

move : FIRST_ {FirstFrame}
 | LAST_ {LastFrame}
 | BACK_ {PrevFrame}
 | FORWARD_ {NextFrame}
 ;

lock : coordsys {set _ $1}
 | wcssys {set _ $1}
 | NONE_  {set _ none}
 ;

match : coordsys {set _ $1}
 | wcssys {set _ $1}
 ;

%%

proc frame::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
