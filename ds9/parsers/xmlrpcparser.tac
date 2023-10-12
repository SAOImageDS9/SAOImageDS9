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

value : VALUE_ type _VALUE_
 | VALUE_ _VALUE_
 | _VALUE_
 ;

type : INTEGER_ INT_ _INTEGER_ {puts -nonewline "\{int $2\}"}
 | DOUBLE_ numeric _DOUBLE_ {puts -nonewline "\{double $2\}"}
 | TRUE_ {puts -nonewline "\{boolean 1\}"}
 | FALSE_ {puts -nonewline "\{boolean 0\}"}
 | STRING_ {puts -nonewline "\{string \{$1\}\}"}
 | BASE64_ _BASE64_
 | DATETIME_ _DATETIME_

 | STRUCT_ {puts -nonewline "\{struct "} struct _STRUCT_ {puts -nonewline "\}"}
 | STRUCT_ _STRUCT_ {puts -nonewline "\{struct \{\}\}"}
 | _STRUCT_ {puts -nonewline "\{struct \{\}\}"}

 | ARRAY_ {puts -nonewline "\{array "} array _ARRAY_ {puts -nonewline "\}"}
 | ARRAY_ _ARRAY_ {puts -nonewline "\{array \{\}\}"}
 | _ARRAY_ {puts -nonewline "\{array \{\}\}"}
 ;

struct : struct member
 | member
 ;

member : MEMBER_ {puts -nonewline "\{"} name value _MEMBER_ {puts -nonewline "\}"}
 | MEMBER_ _MEMBER_ {puts -nonewline "\{\}"}
 | _MEMBER_ {puts -nonewline "\{\}"}
 ;

name : NAME_ STRING_ _NAME_ {puts -nonewline "$2 "}
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
