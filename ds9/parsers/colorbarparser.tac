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

colorbar : yesno {global view; set view(colorbar) $1; UpdateView}
# backward compatibility
 | MATCH_ {MatchColorCurrent}
 | LOCK_ yesno {global colorbar; set colorbar(lock) $2; LockColorCurrent}

 | NUMERICS_ yesno {ColorbarCmdView numerics $2}
 | SPACE_ space {ColorbarCmdView space $2}
 | FONT_ font {ColorbarCmdView font $2}
 | FONTSIZE_ INT_ {ColorbarCmdView font,size $2}
 | FONTWEIGHT_ fontWeight {ColorbarCmdView font,weight $2}
 | FONTSLANT_ fontSlant {ColorbarCmdView font,slant $2}
 | FONTSTYLE_ fontStyle {ColorbarCmdFontStyle $2}

 | orientation {ColorbarCmdView orientation $1}
# backward compatibility
 | ORIENTATION_ orientation {ColorbarCmdView orientation $2}

 | SIZE_ INT_ {ColorbarCmdView size $2}
 | TICKS_ INT_ {ColorbarCmdView ticks $2}
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
