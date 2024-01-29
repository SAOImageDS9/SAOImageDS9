// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

%pure-parser
%parse-param {TclXMLRPC* xmlrpc}
%lex-param {xmlrpcFlexLexer* ll}
%parse-param {xmlrpcFlexLexer* ll}

%{
#define YYDEBUG 1

#include <stdlib.h>
#include "tclxmlrpc.h"

#undef yyFlexLexer
#define yyFlexLexer xmlrpcFlexLexer
#include <FlexLexer.h>

  extern int xmlrpclex(void*, xmlrpcFlexLexer*);
  extern void xmlrpcerror(TclXMLRPC*, xmlrpcFlexLexer*, const char*);
%}

%union {
  int integer;
  char str[8192];
}

%token <str> STRING
%token <str> HEADER

%token DEBUG_
%token ON_
%token OFF_

%token METHODCALL_
%token _METHODCALL_

%token METHODRESPONSE_
%token _METHODRESPONSE_

%token METHODNAME_
%token _METHODNAME_

%token FAULT_
%token _FAULT_

%token PARAMS_
%token _PARAMS_

%token PARAM_
%token _PARAM_

%token VALUE_
%token _VALUE_

%token INTEGER_
%token _INTEGER_

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

%%

commands : commands command
| command
;

command : DEBUG_ debug
| HEADER
| method
;

method : methodCall
| methodResponse
;

methodCall : METHODCALL_ methodName params _METHODCALL_
| METHODCALL_ methodName _METHODCALL_
;

methodResponse : METHODRESPONSE_ params _METHODRESPONSE_
| METHODRESPONSE_ fault _METHODRESPONSE_
;

methodName : METHODNAME_ STRING _METHODNAME_
;

fault : FAULT_ value _FAULT_
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

value : STRING
| VALUE_ type _VALUE_
| VALUE_ _VALUE_
| _VALUE_
;

type : STRING
| INTEGER_ STRING _INTEGER_

| STRUCT_ members _STRUCT_
| STRUCT_ _STRUCT_
| _STRUCT_

| ARRAY_ DATA_ values _DATA_ _ARRAY_
| ARRAY_ DATA_ _DATA_ _ARRAY_
| _DATA_ _ARRAY_
;

members : members member
| member
;

member : MEMBER_ name value _MEMBER_
| MEMBER_ _MEMBER_
| _MEMBER_
;

name : NAME_ STRING _NAME_
| NAME_ _NAME_
| _NAME_
;

values: values value
| value


debug : ON_ {yydebug=1;}
| OFF_ {yydebug=0;}
;

%%


