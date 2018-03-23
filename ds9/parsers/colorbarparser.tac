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

 | NUMERICS_ yesno {global colorbar; set colorbar(numerics) $2; UpdateView}
 | SPACE_ space {global colorbar; set colorbar(space) $2; UpdateView}
 | FONT_ font {global colorbar; set colorbar(font) $2; UpdateView}
 | FONTSIZE_ INT_ {global colorbar; set colorbar(font,size) $2; UpdateView}
 | FONTWEIGHT_ fontweight {global colorbar; set colorbar(font,weight) $2; UpdateView}
 | FONTSLANT_ fontslant {global colorbar; set colorbar(font,slant) $2; UpdateView}
# backward compatibility
 | FONTSTYLE_ fontstyle

 | orientation {global colorbar; set colorbar(orientation) $1; UpdateView}
# backward compatibility
 | ORIENTATION_ orientation {global colorbar; set colorbar(orientation) $2; UpdateView}

 | SIZE_ INT_ {global colorbar; set colorbar(size) $2; UpdateView}
 | TICKS_ INT_ {global colorbar; set colorbar(ticks) $2; UpdateView}
 ;
 
fontstyle : NORMAL_  {global colorbar; set colorbar(font,weight) normal; set colorbar(font,slant) roman; UpdateView}
 | BOLD_ {global colorbar; set colorbar(font,weight) bold; set colorbar(font,slant) roman; UpdateView}
 | ITALIC_ {global colorbar; set colorbar(font,weight) normal; set colorbar(font,slant) italic; UpdateView}
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
