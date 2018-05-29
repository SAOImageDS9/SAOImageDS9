%{
%}

#include yesno.tin
#include font.tin
#include numeric.tin
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
#include font.trl
#include numeric.trl

command : colorbar
 | colorbar {yyclearin; YYACCEPT} STRING_
 ;

colorbar : yesno {ViewCmdSet colorbar $1 UpdateView}
 | MATCH_ {MatchColorCurrent}
 | LOCK_ yesno {ColorbarCmdSet lock $2 LockColorCurrent}

 | NUMERICS_ yesno {ColorbarCmdSet numerics $2 UpdateView}
 | SPACE_ space {ColorbarCmdSet space $2 UpdateView}
 | FONT_ font {ColorbarCmdSet font $2 UpdateView}
 | FONTSIZE_ INT_ {ColorbarCmdSet font,size $2 UpdateView}
 | FONTWEIGHT_ fontWeight {ColorbarCmdSet font,weight $2 UpdateView}
 | FONTSLANT_ fontSlant {ColorbarCmdSet font,slant $2 UpdateView}
# backward compatibility
 | FONTSTYLE_ fontStyle {ColorbarCmdFontStyle $2 UpdateView}

 | orientation {ColorbarCmdSet orientation $1 UpdateView}
# backward compatibility
 | ORIENTATION_ orientation {ColorbarCmdSet orientation $2 UpdateView}

 | SIZE_ INT_ {ColorbarCmdSet size $2 UpdateView}
 | TICKS_ INT_ {ColorbarCmdSet ticks $2 UpdateView}
 ;
 
space : VALUE_ {set _ 1}
 | DISTANCE_ {set _ 0}
 ;

orientation : VERTICAL_ {set _ vertical}
 | HORIZONTAL_ {set _ horizontal}
 ;

%%

proc colorbar::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
