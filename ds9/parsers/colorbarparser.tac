%{
%}
#include def.tin

#include yesno.tin
#include fonts.tin
#include int.tin
#include string.tin

%start command

%token DISTANCE_
%token HORIZONTAL_
%token LOCK_
%token MATCH_
%token NUMERICS_
%token ORIENTATION_
%token SIZE_
%token SPACE_
%token TICKS_
%token VALUE_
%token VERTICAL_

%%

#include yesno.trl
#include fonts.trl

command : colorbar
 | colorbar {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

colorbar : yesno {ProcessCmdSet view colorbar $1 LayoutView}
 | MATCH_ {MatchColorCurrent}
 | LOCK_ yesno {ProcessCmdSet colorbar lock $2 LockColorCurrent}

 | NUMERICS_ yesno {ProcessCmdSet colorbar numerics $2 LayoutView}
 | SPACE_ space {ProcessCmdSet colorbar space $2 LayoutView}
 | FONT_ font {ProcessCmdSet colorbar font $2 LayoutView}
 | FONTSIZE_ INT_ {ProcessCmdSet colorbar font,size $2 LayoutView}
 | FONTWEIGHT_ fontWeight {ProcessCmdSet colorbar font,weight $2 LayoutView}
 | FONTSLANT_ fontSlant {ProcessCmdSet colorbar font,slant $2 LayoutView}
# backward compatibility
 | FONTSTYLE_ fontStyle {ProcessCmdFontStyle colorbar font $2 LayoutView}

 | orientation {ProcessCmdSet colorbar orientation $1 LayoutView}
# backward compatibility
 | ORIENTATION_ orientation {ProcessCmdSet colorbar orientation $2 LayoutView}

 | SIZE_ INT_ {ProcessCmdSet colorbar size $2 LayoutView}
 | TICKS_ INT_ {ProcessCmdSet colorbar ticks $2 LayoutView}
 ;
 
space : VALUE_ {set _ 1}
 | DISTANCE_ {set _ 0}
 ;

orientation : VERTICAL_ {set _ 1}
 | HORIZONTAL_ {set _ 0}
 ;

%%

proc colorbar::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
