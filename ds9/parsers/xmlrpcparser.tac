%{
%}
#include def.tin

%start command

%token METHODCALL_
%token _METHODCALL_
%token METHODNAME_
%token _METHODNAME_

%token METHODRESPONSE_
%token _METHODRESPONSE_

%token FAULT_
%token _FAULT_

%token PARAMS_
%token _PARAMS_

%token PARAM_
%token _PARAM_

%token VALUE_
%token _VALUE_

%token STRUCT_
%token _STRUCT_

%token MEMBER_
%token _MEMBER_
%token NAME_
%token _NAME_

%token ARRAY_
%token _ARRAY_
%token DATA_
%token _DATA_

%token HEADER_ string
%token STRING_ string

%%

command : HEADER_ which {global parse; set parse(result) $2}
 ;

which : methodCall {set _ $1}
 | methodResponse {set _ $1}
 | fault {set _ $1}
 ;

methodCall : METHODCALL_ methodName params _METHODCALL_ {set _ [list methodcall [list $2 $3]]}
 | METHODCALL_ methodName _METHODCALL_ {set _ [list methodcall [list $2]]} 
 ;

methodResponse : METHODRESPONSE_ params _METHODRESPONSE_ {set _ [list methodresponse $2]} 
 ;

fault : FAULT_ value _FAULT_ {set _ [list fault $2]}
 ;

methodName : METHODNAME_ STRING_ _METHODNAME_ {set _ [list methodname $2]}
 ;

params : PARAMS_ xparam _PARAMS_ {set _ [list params $2]}
 | PARAMS_ _PARAMS_ {set _ [list params {}]}
 | _PARAMS_ {set _ [list params {}]}
 ;

xparam : xparam param {lappend _ $2}
 | param {set _ [list $1]}
 ;

param : PARAM_ value _PARAM_ {set _ [list param $2]}
 | PARAM_ _PARAM_ {set _ [list param {}]}
 | _PARAM_ {set _ [list param {}]}
 ;

value : STRING_ {set _ [list value [list string [XMLUnQuote $1]]]}
 | VALUE_ type _VALUE_ {set _ [list value $2]}
 | VALUE_ _VALUE_ {set _ [list value {}]}
 | _VALUE_ {set _ [list value {}]}
 ;

type : STRING_ {set _ [list string [XMLUnQuote $1]]}

 | STRUCT_ members _STRUCT_ {set _ [list struct $2]}
 | STRUCT_ _STRUCT_ {set _ [list struct {}]}
 | _STRUCT_ {set _ [list struct {}]}

 | ARRAY_ DATA_ values _DATA_ _ARRAY_ {set _ [list array [list data $3]]}
 | ARRAY_ _ARRAY_ {set _ [list array {}]}
 | _ARRAY_ {set _ [list array {}]}
 ;

members : members member {lappend _ $2}
 | member {set _ [list $1]}
 ;

member : MEMBER_ name value _MEMBER_ {set _ [list member [list $2 $3]]}
 | MEMBER_ _MEMBER_ {set _ [list member {}]}
 | _MEMBER_ {set _ [list member {}]}
 ;

name : NAME_ STRING_ _NAME_ {set _ [list name $2]}
 | NAME_ _NAME_ {set _ [list name {}]}
 | _NAME_ {set _ [list name {}]}
 ;

values : values value {lappend _ $2}
 | value {set _ [list $1]}
 ;

%%

proc xmlrpc::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
