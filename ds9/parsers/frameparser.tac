%{
%}

#include coords.tin
#include numeric.tin
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
%token PREV_
%token REFRESH_
%token RESET_
%token RGB_
%token SHOW_

%%

#include coords.trl
#include numeric.trl

command : frame 
 | frame {yyclearin; YYACCEPT} STRING_
 ;

frame : MATCH_ coordnone {MatchFrameCurrent $2}
 | LOCK_ coordnone {PanZoomCmdSet lock $2; LockFrameCurrent}
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

hide : {FrameCmdHideCurrent}
 | INT_ {FrameCmdHide $1}
 | ALL_ {ActiveFrameNone}
 ;
 
show :
 | INT_ {FrameCmdShow $1}
 | ALL_ {ActiveFrameAll}
 ;

move : FIRST_ {FirstFrame}
 | LAST_ {LastFrame}
 | BACK_ {PrevFrame}
 | FORWARD_ {NextFrame}
 ;

%%

proc frame::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
