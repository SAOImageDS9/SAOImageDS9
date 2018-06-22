%{
%}
#include def.tin

%start prefssend

%token BGCOLOR_
%token IRAFALIGN_
%token NANCOLOR_
%token PRECISION_
%token THREADS_

%%

prefssend : PRECISION_ {ProcessSendCmdGet6 pds9 prec,linear prec,deg prec,hms prec,dms prec,arcmin prec,arcsec}
 | BGCOLOR_ {ProcessSendCmdGet pds9 bg}
 | NANCOLOR_ {ProcessSendCmdGet pds9 nan}
 | THREADS_ {ProcessSendCmdGet ds9 threads}
 | IRAFALIGN_ {ProcessSendCmdYesNo pds9 iraf}
 ;

%%

proc prefssend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
