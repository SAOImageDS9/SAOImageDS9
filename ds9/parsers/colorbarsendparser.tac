%{
%}
#include def.tin

#include font.tin

%start colorbarsend

%token LOCK_
%token NUMERICS_
%token ORIENTATION_
%token SIZE_
%token SPACE_
%token TICKS_
%token VALUE_

%%

colorbarsend : {ProcessSendCmdYesNo view colorbar}
 | LOCK_ {ProcessSendCmdYesNo colorbar lock}
 | ORIENTATION_ {ColorbarSendCmdOrientation}
 | NUMERICS_ {ProcessSendCmdYesNo colorbar numerics}
 | SPACE_ {ColorbarSendCmdSpace}
 | FONT_ {ProcessSendCmdGet colorbar font}
 | FONTSIZE_ {ProcessSendCmdGet colorbar font,size}
 | FONTWEIGHT_ {ProcessSendCmdGet colorbar font,weight}
 | FONTSLANT_ {ProcessSendCmdGet colorbar font,slant}
# backward compatibility
 | FONTSTYLE_ {ProcessSendCmdGet colorbar font,weight}
 | SIZE_ {ProcessSendCmdGet colorbar size}
 | TICKS_ {ProcessSendCmdGet colorbar ticks}
 ;
 
%%

proc colorbarsend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
