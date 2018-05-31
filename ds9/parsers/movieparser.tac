%{
%}

#include numeric.tin
#include string.tin

%start command

%token 3D_
%token AZFROM_
%token AZTO_
%token ELFROM_
%token ELTO_
%token FRAME_
%token NUMBER_
%token OSCILLATE_
%token REPEAT_
%token SLICE_
%token SLFROM_
%token SLTO_

%%

#include numeric.trl

command : movie 
 | movie {yyclearin; YYACCEPT} STRING_
 ;

movie : STRING_ {ProcessCmdSet movie action frame; Movie $1}
 | FRAME_ STRING_ {ProcessCmdSet movie action frame; Movie $2}
 | SLICE_ STRING_ {ProcessCmdSet movie action slice; Movie $2}
 | 3D_ STRING_ {ProcessCmdSet movie action 3d; Movie $2}
 | 3D_ STRING_ opts {ProcessCmdSet movie action 3d; Movie $2}
 ;

opts : opts opt
 | opt
 ;

opt : NUMBER_ INT_ {ProcessCmdSet movie number $2}
 | AZFROM_ numeric {ProcessCmdSet movie azfrom $2}
 | AZTO_ numeric {ProcessCmdSet movie azto $2}
 | ELFROM_ numeric {ProcessCmdSet movie elfrom $2}
 | ELTO_ numeric {ProcessCmdSet movie elto $2}
 | SLFROM_ INT_ {ProcessCmdSet movie slfrom $2}
 | SLTO_ INT_ {ProcessCmdSet movie slto $2}
 | OSCILLATE_ INT_ {ProcessCmdSet movie repeat oscillate; ProcessCmdSet movie repeat,num $2}
 | REPEAT_ INT_ {ProcessCmdSet movie repeat repeat; ProcessCmdSet movie repeat,num $2}
 ;

%%

proc movie::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
