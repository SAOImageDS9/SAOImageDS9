%{
%}
#include def.tin

%start scalesend

%token DATASEC_
%token EXP_
%token GHS_
%token HP_
%token INTENSITY_
%token LIMITS_
%token LOCK_
%token LOG_
%token LP_
%token MODE_
%token SCALELIMITS_
%token SCOPE_
%token SP_
%token STRETCH_

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
 | GHS_ ghs
 ;

ghs : {ProcessSendCmdTxt [ScaleGhsList]}
 | STRETCH_ {ProcessSendCmdGet scale ghs,stretch}
 | INTENSITY_ {ProcessSendCmdGet scale ghs,intensity}
 | SP_ {ProcessSendCmdGet scale ghs,sp}
 | LP_ {ProcessSendCmdGet scale ghs,lp}
 | HP_ {ProcessSendCmdGet scale ghs,hp}
 ;

%%

proc scalesend::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
