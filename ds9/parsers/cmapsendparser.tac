%{
%}
#include def.tin

%start cmapsend

%token FAVORITE_
%token FILE_
%token INVERT_
%token LOCK_
%token VALUE_

%%

cmapsend : {ColorbarSendCmdCurrent "get name"}
 | FILE_ {ColorbarSendCmdCurrent "get file name"}
 | FAVORITE_ {ProcessSendCmdTxt [FavoritesNames]}
 | INVERT_ {ProcessSendCmdYesNo colorbar invert}
# backward compatibility
 | VALUE_ {ColorbarSendCmdContrastBias}
# backward compatibility
 | LOCK_ {ProcessSendCmdYesNo colorbar lock}
 ;

%%

proc cmapsend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
