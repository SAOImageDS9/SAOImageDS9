%{
%}
#include def.tin

#include string.tin

%start command

%token MASK_
%token NEW_
%token SLICE_

%%

# XPA/SAMP only
command : fits 
 ;

fits: new filename {FitsCmdLoad $2 {} {}}
 | new MASK_ filename {FitsCmdLoad $3 mask {}}
 | new SLICE_ filename {FitsCmdLoad $3 {} slice}
 | new MASK_ SLICE_ filename {FitsCmdLoad $4 mask slice}
;

filename : {set _ {}}
 | STRING_ {set _ $1}
 ;

new :
 | NEW_ {CreateFrame}
 ;
 
%%

proc fits::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
