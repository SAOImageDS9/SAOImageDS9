%{
%}
#include def.tin

#include yesno.tin
#include fonts.tin
#include numeric.tin
#include string.tin

%start command

%token DISTANCE_
%token CENTER_
%token HORIZONTAL_
%token LABEL_
%token LOCK_
%token MATCH_
%token NATURAL_
%token NUMERICS_
%token ORIENTATION_
%token OPPOSITE_
%token POSITION_
%token SIZE_
%token SPACE_
%token TICKS_
%token VALUE_
%token VERTICAL_
%token WIDTH_
%token TOP_
%token BOTTOM_
%token LEFT_
%token RIGHT_
%token SHOW_

%%

#include yesno.trl
#include fonts.trl
#include numeric.trl

command : colorbar
 | colorbar {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

colorbar : yesno {ProcessCmdSet view colorbar $1 ColorbarUpdateView}
 | MATCH_ {MatchColorCurrent}
 | LOCK_ yesno {ProcessCmdSet colorbar lock $2 LockColorCurrent}
 | SHOW_ yesno {ProcessCmdSet colorbar show $2 ColorbarUpdateView}

 | NUMERICS_ yesno {ProcessCmdSet colorbar numerics $2 ColorbarUpdateView}
 | SPACE_ space {ProcessCmdSet colorbar space $2 ColorbarUpdateView}
 | FONT_ font {ProcessCmdSet colorbar font $2 ColorbarUpdateView}
 | FONTSIZE_ INT_ {ProcessCmdSet colorbar font,size $2 ColorbarUpdateView}
 | FONTWEIGHT_ fontWeight {ProcessCmdSet colorbar font,weight $2 ColorbarUpdateView}
 | FONTSLANT_ fontSlant {ProcessCmdSet colorbar font,slant $2 ColorbarUpdateView}
# backward compatibility
 | FONTSTYLE_ fontStyle {ProcessCmdFontStyle colorbar font $2 ColorbarUpdateView}

 | CENTER_ numeric {ProcessCmdSet colorbar center $2 ColorbarUpdateView}
 | WIDTH_ numeric {ProcessCmdSet colorbar width $2 ColorbarUpdateView}

 | orientation {ColorbarCmdOrientation $1}
# backward compatibility
 | ORIENTATION_ orientation {ColorbarCmdOrientation $2}
 | POSITION_ position {ColorbarCmdPosition $2}
 | LABEL_ POSITION_ labelPosition {ProcessCmdSet colorbar label,position $3 ColorbarUpdateView}

 | SIZE_ INT_ {ProcessCmdSet colorbar size $2 ColorbarUpdateView}
 | TICKS_ INT_ {ProcessCmdSet colorbar ticks $2 ColorbarUpdateView}
 ;
 
space : VALUE_ {set _ 1}
 | DISTANCE_ {set _ 0}
 ;

orientation : VERTICAL_ {set _ 1}
 | HORIZONTAL_ {set _ 0}
 ;

position : TOP_ {set _ top}
 | BOTTOM_ {set _ bottom}
 | LEFT_ {set _ left}
 | RIGHT_ {set _ right}
 ;

labelPosition : NATURAL_ {set _ natural}
 | OPPOSITE_ {set _ opposite}
 ;

%%

proc colorbar::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
