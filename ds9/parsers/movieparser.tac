%{
%}
#include def.tin

#include numeric.tin
#include string.tin

%start command

%token 3D_
%token AZ_
%token AZFROM_
%token AZTO_
%token EL_
%token ELFROM_
%token ELTO_
%token FRAME_
%token FROM_
%token GIF_
%token MPEG_
%token NUMBER_
%token OSCILLATE_
%token REPEAT_
%token SLICE_
%token SLFROM_
%token SLTO_
%token TO_
%token ZOOM_
%token ZMFROM_
%token ZMTO_

%%

#include numeric.trl

command : movie 
 | movie {global ds9; if {!$ds9(init)} {YYERROR} else {yyclearin; YYACCEPT}} STRING_
 ;

movie : STRING_
   {ProcessCmdSet2 movie action slice type [ExtToFormat $1]; MovieCreate $1}
 | action STRING_
   {ProcessCmdSet2 movie action $1 type [ExtToFormat $2]; MovieCreate $2}
 | action type STRING_ {ProcessCmdSet2 movie action $1 type $2; MovieCreate $3}
 | action type INT_ STRING_ {ProcessCmdSet3 movie action $1 type $2 delay $3; MovieCreate $4}

 | 3D_ STRING_
   {ProcessCmdSet2 movie action 3d type [ExtToFormat $2]; MovieCreate $2}
 | 3D_ type STRING_ {ProcessCmdSet2 movie action 3d type $2; MovieCreate $3}
 | 3D_ type INT_ STRING_ {ProcessCmdSet3 movie action 3d type $2 delay $3; MovieCreate $4}

 | 3D_ STRING_ opts
   {ProcessCmdSet2 movie action 3d type [ExtToFormat $2]; MovieCreate $2}
 | 3D_ type STRING_ opts
   {ProcessCmdSet2 movie action 3d type $2; MovieCreate $3}
 | 3D_ type INT_ STRING_ opts
   {ProcessCmdSet3 movie action 3d type $2 delay $3; MovieCreate $4}
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

opt : NUMBER_ INT_ {ProcessCmdSet movie num $2}
 | AZ_ FROM_ numeric {ProcessCmdSet movie az,from $3}
 | AZ_ TO_ numeric {ProcessCmdSet movie az,to $3}
 | EL_ FROM_ numeric {ProcessCmdSet movie el,from $3}
 | EL_ TO_ numeric {ProcessCmdSet movie el,to $3}
 | SLICE_ FROM_ INT_ {ProcessCmdSet movie sl,from $3}
 | SLICE_ TO_ INT_ {ProcessCmdSet movie sl,to $3}
 | ZOOM_ FROM_ INT_ {ProcessCmdSet movie zm,from $3}
 | ZOOM_ TO_ INT_ {ProcessCmdSet movie zm,to $3}
 | OSCILLATE_ INT_
   {ProcessCmdSet movie repeat oscillate; ProcessCmdSet movie repeat,num $2}
 | REPEAT_ INT_
   {ProcessCmdSet movie repeat repeat; ProcessCmdSet movie repeat,num $2}
# backward compatibility
 | AZFROM_ numeric {ProcessCmdSet movie az,from $2}
 | AZTO_ numeric {ProcessCmdSet movie az,to $2}
 | ELFROM_ numeric {ProcessCmdSet movie el,from $2}
 | ELTO_ numeric {ProcessCmdSet movie el,to $2}
 | SLFROM_ INT_ {ProcessCmdSet movie sl,from $2}
 | SLTO_ INT_ {ProcessCmdSet movie sl,to $2}
 | ZMFROM_ INT_ {ProcessCmdSet movie zm,from $2}
 | ZMTO_ INT_ {ProcessCmdSet movie zm,to $2}
 ;

%%

proc movie::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
