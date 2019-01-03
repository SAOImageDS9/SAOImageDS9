%{
%}
#include def.tin

%start scalesend

%token DATASEC_
%token EXP_
%token LIMITS_
%token LOCK_
%token LOG_
%token MODE_
%token SCALELIMITS_
%token SCOPE_

%%

scalesend : {ProcessSendCmdGet scale type}
 | LOCK_ {ProcessSendCmdYesNo scale lock}
 | LOCK_ LIMITS_ {ProcessSendCmdYesNo scale lock,limits}
 | DATASEC_ {ProcessSendCmdGet scale datasec}
 | LIMITS_ {ProcessSendCmdCurrent "get clip"}
# backward compatibility
 | SCALELIMITS_ {ProcessSendCmdCurrent "get clip"}
 | MODE_ {ProcessSendCmdGet scale mode}
 | SCOPE_ {ProcessSendCmdGet scale scope}
 | LOG_ EXP_ {ProcessSendCmdGet scale log}
# backward compatibility
 | LOG_ {ProcessSendCmdGet scale log}
 ;

%%

proc scalesend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
