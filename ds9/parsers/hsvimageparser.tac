%{
%}
#include def.tin

#include string.tin


%start command

%token NEW_

%%

# XPA/SAMP only
command : hsvimage 
 ;

hsvimage : opts {HSVImageCmdLoad {}}
 | opts STRING_ {HSVImageCmdLoad $2}
 ;

opts :
 | NEW_ {CreateHSVFrame}
 ;

%%

proc hsvimage::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
