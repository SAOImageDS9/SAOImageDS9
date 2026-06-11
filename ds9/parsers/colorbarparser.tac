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
%token LOCK_
%token MATCH_
%token NUMERICS_
%token ORIENTATION_
%token SIZE_
%token SPACE_
%token TICKS_
%token VALUE_
%token VERTICAL_
%token WIDTH_

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

 | orientation {ProcessCmdSet colorbar orientation $1 ColorbarUpdateView}
# backward compatibility
 | ORIENTATION_ orientation {ProcessCmdSet colorbar orientation $2 ColorbarUpdateView}

 | SIZE_ INT_ {ProcessCmdSet colorbar size $2 ColorbarUpdateView}
 | TICKS_ INT_ {ProcessCmdSet colorbar ticks $2 ColorbarUpdateView}
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
