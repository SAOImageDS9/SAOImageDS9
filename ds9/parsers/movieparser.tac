%{
%}
#include def.tin

#include numeric.tin
#include string.tin

%start command

%token 3D_
%token AZFROM_
%token AZTO_
%token ELFROM_
%token ELTO_
%token FRAME_
%token GIF_
%token MPEG_
%token NUMBER_
%token OSCILLATE_
%token REPEAT_
%token SLICE_
%token SLFROM_
%token SLTO_

%%

#include numeric.trl

command : movie 
 | movie {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

movie : STRING_ {ProcessCmdSet2 movie action slice type mpeg; MovieCreate $1}
 | action STRING_ {ProcessCmdSet2 movie action $1 type mpeg; MovieCreate $2}
 | type STRING_ {ProcessCmdSet2 movie action slice type $1; MovieCreate $2}
 | action type STRING_ {ProcessCmdSet2 movie action $1 type $2; MovieCreate $3}

 | 3D_ STRING_ {ProcessCmdSet2 movie action 3d type mpeg; MovieCreate $2}
 | 3D_ type STRING_ {ProcessCmdSet2 movie action 3d type $2; MovieCreate $3}
 | 3D_ STRING_ opts {ProcessCmdSet2 movie action 3d type mpeg; MovieCreate $2}
 | 3D_ type STRING_ opts {ProcessCmdSet2 movie action 3d type $1; MovieCreate $2}
 ;

action : FRAME_ {set _ frame}
 | SLICE_ {set _ slice}
 ;

type : MPEG_ {set _ mpeg}
 | GIF_ {set _ gif}
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
