%{
%}
#include def.tin

%start prefssend

%token BACKGROUND_
%token BGCOLOR_
%token COLOR_
%token NAN_
%token NANCOLOR_

%token HAS_
%token IRAFALIGN_
%token PRECISION_
%token THEME_
%token THREADS_

%%

prefssend : HAS_ has
 | BGCOLOR_ bg
 | BACKGROUND_ bg
 | BACKGROUND_ COLOR_ bg
 | NANCOLOR_ nan
 | NAN_ nan
 | NAN_ COLOR_ nan

 | PRECISION_ {PrefsSendCmdPrecision}
 | THEME_ {ProcessSendCmdGet pds9 theme}
 | THREADS_ {ProcessSendCmdGet ds9 threads}
 | IRAFALIGN_ {ProcessSendCmdYesNo pds9 iraf}
 ;

has : BGCOLOR_ hasbg
 | BACKGROUND_ hasbg
 | BACKGROUND_ COLOR_ hasbg
 ;

hasbg : {ProcessSendCmdYesNo pds9 bg,use}
 ;

bg : {ProcessSendCmdGet pds9 bg}
 ;

nan : {ProcessSendCmdGet pds9 nan}
 ;
 
%%

proc prefssend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
