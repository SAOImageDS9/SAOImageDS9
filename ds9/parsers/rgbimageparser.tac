%{
%}
#include def.tin

#include string.tin


%start command

%token NEW_

%%

# XPA/SAMP only
command : rgbimage 
 ;

rgbimage : opts {RGBImageCmdLoad {}}
 | opts STRING_ {RGBImageCmdLoad $2}
 ;

opts :
 | NEW_ {CreateRGBFrame}
 ;

%%

proc rgbimage::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
