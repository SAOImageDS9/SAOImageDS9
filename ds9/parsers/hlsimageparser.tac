%{
%}
#include def.tin

#include string.tin


%start command

%token NEW_

%%

# XPA/SAMP only
command : hlsimage 
 ;

hlsimage : opts {HLSImageCmdLoad {}}
 | opts STRING_ {HLSImageCmdLoad $2}
 ;

opts :
 | NEW_ {CreateHLSFrame}
 ;

%%

proc hlsimage::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
