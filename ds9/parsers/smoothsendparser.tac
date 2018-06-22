%{
%}
#include def.tin

%start smoothsend

%token ANGLE_
%token FUNCTION_
%token LOCK_
%token RADIUS_
%token RADIUSMINOR_
%token SIGMA_
%token SIGMAMINOR_

%%

smoothsend : {ProcessSendCmdYesNo smooth view}
 | LOCK_ {ProcessSendCmdYesNo smooth lock}
 | FUNCTION_ {ProcessSendCmdGet smooth function}
 | RADIUS_ {ProcessSendCmdGet smooth radius}
 | RADIUSMINOR_ {ProcessSendCmdGet smooth radius,minor}
 | SIGMA_ {ProcessSendCmdGet smooth sigma}
 | SIGMAMINOR_ {ProcessSendCmdGet smooth sigma,minor}
 | ANGLE_ {ProcessSendCmdGet smooth angle}
 ;

%%

proc smoothsend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
