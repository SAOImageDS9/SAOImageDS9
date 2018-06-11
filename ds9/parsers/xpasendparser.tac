%{
%}

%start xpasend

%token INFO_

%%

xpasend : {global parse; $parse(proc) $parse(id) [XPAInfoResult]}
 | INFO_ {global parse; $parse(proc) $parse(id) [XPAInfoResult]}
 ;

%%

proc xpasend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
