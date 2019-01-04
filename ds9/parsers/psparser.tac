%{
%}
#include def.tin

#include string.tin

%start command

%token COLOR_
%token COMMAND_
%token DESTINATION_
%token FILE_
%token FILENAME_
%token INTERPOLATE_
%token LEVEL_
%token PALETTE_
%token PRINTER_
%token RESOLUTION_

%token RGB_
%token CMYK_ 
%token GRAY_

%token 72_
%token SCREEN_
%token 96_
%token 144_
%token 150_
%token 225_
%token 300_
%token 600_
%token 1200_

%token 53_
%token 75_

%%

command : ps 
 | ps {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

ps : {PostScript}
 | DESTINATION_ dest {ProcessCmdSet ps dest $2}
 | COMMAND_ STRING_ {ProcessCmdSet ps cmd $2}
 | FILENAME_ STRING_ {ProcessCmdSet ps filename $2}
 | COLOR_ color {ProcessCmdSet ps color $2}
 | LEVEL_ level {ProcessCmdSet ps level $2}
 | RESOLUTION_ resolution {ProcessCmdSet ps resolution $2}
#backward compatibility
 | INTERPOLATE_
 | PALETTE_ color {ProcessCmdSet ps color $2}
 ;

dest : PRINTER_ {set _ printer}
 | FILE_ {set _ file}
 ;

color : RGB_ {set _ rgb}
 | CMYK_ {set _ cmyk}
 | GRAY_ {set _ gray}
 ;

level : '1' {set _ 1}
 | '2' {set _ 2}
 | '3' {set _ 3}
 ;

resolution : 72_ {set _ 72}
 | SCREEN_ {set _ Screen}
 | 96_ {set _ 96}
 | 144_ {set _ 144}
 | 150_ {set _ 150}
 | 225_ {set _ 225}
 | 300_ {set _ 300}
 | 600_ {set _ 600}
 | 1200_ {set _ 1200}
#backward compatibility
 | 53_ {set _ 53}
 | 75_ {set _ 75}
 ;

%%

proc ps::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
