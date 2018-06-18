%{
%}

%start preservesend

%token PAN_
%token REGIONS_
%token SCALE_

%%

preservesend : SCALE_ {ProcessSendCmdTxt "no"}
 | PAN_ {ProcessSendCmdYesNo panzoom preserve}
 | REGIONS_ {ProcessSendCmdYesNo marker preserve}
 ;

%%

proc preservesend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
