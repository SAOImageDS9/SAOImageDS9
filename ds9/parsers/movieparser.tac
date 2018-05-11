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

movie : STRING_ {MovieCmdSet action frame; Movie $1}
 | FRAME_ STRING_ {MovieCmdSet action frame; Movie $2}
 | SLICE_ STRING_ {MovieCmdSet action slice; Movie $2}
 | 3D_ STRING_ {MovieCmdSet action 3d; Movie $2}
 | 3D_ STRING_ opts {MovieCmdSet action 3d; Movie $2}
 ;

opts : opts opt
 | opt
 ;

opt : NUMBER_ INT_ {MovieCmdSet number $2}
 | AZFROM_ numeric {MovieCmdSet azfrom $2}
 | AZTO_ numeric {MovieCmdSet azto $2}
 | ELFROM_ numeric {MovieCmdSet elfrom $2}
 | ELTO_ numeric {MovieCmdSet elto $2}
 | SLFROM_ INT_ {MovieCmdSet slfrom $2}
 | SLTO_ INT_ {MovieCmdSet slto $2}
 | OSCILLATE_ INT_ {MovieCmdSet repeat oscillate; MovieCmdSet repeat,num $2}
 | REPEAT_ INT_ {MovieCmdSet repeat repeat; MovieCmdSet repeat,num $2}
 ;

%%

proc movie::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
