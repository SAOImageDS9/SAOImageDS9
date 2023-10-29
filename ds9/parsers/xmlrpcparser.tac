%{
%}
#include def.tin

#include numeric.tin
#include string.tin

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

%token VALUE_
%token _VALUE_

%token INTEGER_
%token DOUBLE_
%token BASE64_
%token DATETIME_

%token _INTEGER_
%token _DOUBLE_
%token _BASE64_
%token _DATETIME_

%token TRUE_
%token FALSE_

%token HEADER_ string

%%

#include numeric.trl

command : HEADER_ methodCall {global parse; set parse(result) $2}
 | HEADER_ methodResponse {global parse; set parse(result) $2}
 | HEADER_ fault {global parse; set parse(result) $2}
 ;

methodCall : METHODCALL_ methodName params _METHODCALL_  {set _ "\{methodcall $2 $3\}"} 
 | METHODCALL_ _METHODCALL_ {set _ "\{methodcall \{\}\}"}
 | _METHODCALL_ {set _ "\{methodcall \{\}\}"}
 ;

methodResponse : METHODRESPONSE_ params _METHODRESPONSE_
 | METHODRESPONSE_ _METHODRESPONSE_
 | _METHODRESPONSE_
 ;

fault : FAULT_ value _FAULT_
 | FAULT_ _FAULT_
 | _FAULT_
 ;

methodName : METHODNAME_ STRING_ _METHODNAME_ {set _ "\{methodname $2\}"} 
 | METHODNAME_ _METHODNAME_ {set _ "\{methodname \{\}\}"}
 | _METHODNAME_ {set _ "\{methodname \{\}\}"}
 ;

params : PARAMS_ xparam _PARAMS_ {set _ "\{params $2\}"}
 | PARAMS_ _PARAMS_ {set _ "\{params \{\}\}"}
 | _PARAMS_ {set _ "\{params \{\}\}"}
 ;

xparam : xparam param {append _ " $2"}
 | param {set _ $1}
 ;

param : PARAM_ value _PARAM_ {set _ "\{param $2\}"} 
 | PARAM_ _PARAM_ {set _ "\{param \{\}\}"}
 | _PARAM_ {set _ "\{param \{\}\}"}
 ;

value : VALUE_ type _VALUE_ {set _ "\{value $2\}"}
 | VALUE_ _VALUE_ {set _ "\{value \{\}\}"}
 | _VALUE_ {set _ "\{value \{\}\}"}
 ;

type : INTEGER_ INT_ _INTEGER_ {set _ $2}
 | DOUBLE_ numeric _DOUBLE_ {set _ $2}
 | true {set _ $1}
 | false {set _ $1}
 | str {set _ $1}
 | BASE64_ _BASE64_
 | DATETIME_ _DATETIME_

 | STRUCT_ members _STRUCT_ {set _ "\{struct $2\}"} 
 | STRUCT_ _STRUCT_ {set _ "\{struct \{\}\}"}
 | _STRUCT_ {set _ "\{struct \{\}\}"}

 | ARRAY_ values _ARRAY_ {set _ "\{array \{data $2\}\}"} 
 | ARRAY_ _ARRAY_ {set _ "\{array \{\}\}"}
 | _ARRAY_ {set _ "\{array \{\}\}"}
 ;

int : INT_ {set _ "\{int $2\}"}
 ;

double : numeric {set _ "\{double $2\}"}
 ;

true : TRUE_ {set _ "\{boolean 1\}"}
 ;

false : FALSE_ {set _ "\{boolean 0\}"}
 ;

str : STRING_ {set _ "\{string \{$1\}\}"}
 ;

members : members member {append _ " $2"}
 | member {set _ $1}
 ;

member : MEMBER_ name value _MEMBER_ {set _ "\{member $2 $3\}"} 
 | MEMBER_ _MEMBER_ {set _ "\{member \{\}\}"}
 | _MEMBER_ {set _ "\{member \{\}\}"}
 ;

name : NAME_ STRING_ _NAME_ {set _ "\{name $2\}"}
 | NAME_ _NAME_ {set _ "\{name \{\}\}"}
 | _NAME_ {set _ "\{name \{\}\}"}
 ;

values : values value
 | value
 ;

%%

proc xmlrpc::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
