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

command : HEADER_ methodCall
 | HEADER_ methodResponse
 | HEADER_ fault
 ;

methodCall : METHODCALL_ methodName params _METHODCALL_
 | METHODCALL_ _METHODCALL_
 | _METHODCALL_
 ;

methodResponse : METHODRESPONSE_ params _METHODRESPONSE_
 | METHODRESPONSE_ _METHODRESPONSE_
 | _METHODRESPONSE_
 ;

fault : FAULT_ value _FAULT_
 | FAULT_ _FAULT_
 | _FAULT_
 ;

methodName : METHODNAME_ STRING_ _METHODNAME_
 | METHODNAME_ _METHODNAME_
 | _METHODNAME_
 ;

params : PARAMS_ xparam _PARAMS_
 | PARAMS_ _PARAMS_
 | _PARAMS_
 ;

xparam : xparam param
 | param
 ;

param : PARAM_ value _PARAM_
 | PARAM_ _PARAM_
 | _PARAM_
 ;

value : VALUE_ type _VALUE_ {puts "\}"}
 | VALUE_ _VALUE_
 | _VALUE_
 ;

type : INTEGER_ INT_ _INTEGER_ {puts $2}
 | DOUBLE_ numeric _DOUBLE_ {puts $2}
 | TRUE_ {puts 1}
 | FALSE_ {puts 0}
 | STRING_ {puts $1}
 | BASE64_ _BASE64_
 | DATETIME_ _DATETIME_

 | STRUCT_ struct _STRUCT_
 | STRUCT_ _STRUCT_
 | _STRUCT_

 | ARRAY_ array _ARRAY_
 | ARRAY_  _ARRAY_
 | _ARRAY_
 ;

struct : struct member
 | member
 ;

member : MEMBER_ name value _MEMBER_
 | MEMBER_ _MEMBER_
 | _MEMBER_
 ;

name : NAME_ STRING_ _NAME_ {puts "\{$2"}
 | NAME_ _NAME_
 | _NAME_
 ;

array : DATA_ data _DATA_
 | DATA_ _DATA_
 | _DATA_
 ;
 
data : data value
 | value
 ;

%%

proc xmlrpc::yyerror {msg} {
     variable yycnt
     variable yy_current_buffer
     variable index_

     ParserError $msg $yycnt $yy_current_buffer $index_
}
