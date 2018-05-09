%{
%}

#include string.tin

%start command

%token MASK_
%token NEW_
%token SLICE_

%%

command : envi 
 | envi {yyclearin; YYACCEPT} STRING_
 ;

envi : opts STRING_ {ImportENVIFile $2 [FindENVIDataFile $2]; FinishLoad}
 | opts STRING_ STRING_ {ImportENVIFile $2 $3; FinishLoad}
 ;

opts :
 | MASK_
 | NEW_ {CreateFrame}
 | SLICE_
 ;

%%

proc envi::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
