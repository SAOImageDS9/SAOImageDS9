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
  char* xmlrpcbuf;
  char* xmlrpcstrcat(char*, char*, int);
  char* xmlrpcstrcat1(const char*);
  char* xmlrpcstrcat3(const char*, char*, const char*, int);
  char* xmlrpcstrcat4(const char*, char*, char*, const char*, int);
  
  extern int xmlrpclex(void*, xmlrpcFlexLexer*);
  extern void xmlrpcerror(TclXMLRPC*, xmlrpcFlexLexer*, const char*);
%}

%union {
  char* str;
}

%type <str> method
%type <str> methodCall
%type <str> methodResponse
%type <str> methodName
%type <str> fault
%type <str> params
%type <str> xparam
%type <str> param
%type <str> value
%type <str> type
%type <str> members
%type <str> member
%type <str> name
%type <str> values

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

%token MEMBERS_
%token _MEMBERS_

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
| {xmlrpcbuf=0;} method {xmlrpcbuf=$2;}
;

method : methodCall {$$=$1;}
| methodResponse {$$=$1;}
;

methodCall : METHODCALL_ methodName params _METHODCALL_ {
  $$=xmlrpcstrcat4("[list methodcall [list ",$2,$3,"]]",1);
}
;

methodResponse : METHODRESPONSE_ params _METHODRESPONSE_ {
  $$=xmlrpcstrcat3("[list methodresponse ",$2,"]",1);
}
| METHODRESPONSE_ fault _METHODRESPONSE_ {
  $$=xmlrpcstrcat3("[list methodresponse ",$2,"]",1);
};

methodName : METHODNAME_ STRING _METHODNAME_ {
  $$=xmlrpcstrcat3("[list methodname ",$2,"]",0);
}
;

fault : FAULT_ value _FAULT_ {$$=xmlrpcstrcat3("list fault ",$2,"]",1);}
;

params : PARAMS_ xparam _PARAMS_ {$$=xmlrpcstrcat3("[list params ",$2,"]",1);}
| PARAMS_ _PARAMS_ {$$=xmlrpcstrcat1("[list params {}]");}
| _PARAMS_ {$$=xmlrpcstrcat1("[list params {}]");}
;

xparam : xparam param {$$=xmlrpcstrcat($1,$2,1);}
| param {$$=xmlrpcstrcat3("[list ",$1,"]",1);}
;

param : PARAM_ STRING _PARAM_ {$$=xmlrpcstrcat3("[list param ",$2,"]",0);}
| PARAM_ _PARAM_ {$$=xmlrpcstrcat1("[list param {}]");}
| _PARAM_ {$$=xmlrpcstrcat1("[list param {}]");}
;

value : STRING {$$=xmlrpcstrcat3("[list value [list string ",$1,"]]",0);}
| VALUE_ type _VALUE_ {$$=xmlrpcstrcat3("[list value ",$2,"]",1);}
| VALUE_ _VALUE_ {$$=xmlrpcstrcat1("[list value {}]");}
| _VALUE_ {$$=xmlrpcstrcat1("[list value {}]");}
;

type : STRING {$$=xmlrpcstrcat3("[list string ",$1,"]",0);}

| INTEGER_ STRING _INTEGER_ {$$=xmlrpcstrcat3("[list integer ",$2,"]",0);}

| STRUCT_ members _STRUCT_ {$$=xmlrpcstrcat3("[list struct ",$2,"]",0);}
| STRUCT_ _STRUCT_ {$$=xmlrpcstrcat1("[list struct {}]");}
| _STRUCT_ {$$=xmlrpcstrcat1("[list struct {}]");}

| ARRAY_ DATA_ values _DATA_ _ARRAY_ {
  $$=xmlrpcstrcat3("[list array [list data  ",$3,"]]",1);
}
| ARRAY_ DATA_ _DATA_ _ARRAY_ {$$=xmlrpcstrcat1("[list array [list data {}]]");}
| _DATA_ _ARRAY_ {$$=xmlrpcstrcat1("[list array [list data {}]]");}
;

members : members member {$$=xmlrpcstrcat($1,$2,1);}
| member {$$=xmlrpcstrcat3("[list ",$1,"]",1);}
;

member : MEMBER_ name value _MEMBER_ {
  $$=xmlrpcstrcat4("[list member [list ",$2,$3,"]]",1);
}
| MEMBER_ _MEMBER_ {$$=xmlrpcstrcat1("[list member {}]");}
| _MEMBER_ {$$=xmlrpcstrcat1("[list member {}]");}
;

name : NAME_ STRING _NAME_ {$$=xmlrpcstrcat3("[list name ",$2,"]",0);}
| NAME_ _NAME_ {$$=xmlrpcstrcat1("[list name {}");}
| _NAME_ {$$=xmlrpcstrcat1("[list name {}");}
;

values : values value {$$=xmlrpcstrcat($1,$2,1);}
| value {$$=xmlrpcstrcat3("[list ",$1,"]",1);}
;

debug : ON_ {yydebug=1;}
| OFF_ {yydebug=0;}
;

%%

char* xmlrpcstrcat(char* str1, char* str2, int flag) {
  int ll = strlen(str1)+strlen(str2)+1;
  char* ptr = (char*)malloc(ll);
  strcpy(ptr,str1);
  strcat(ptr,str2);
  if (flag) {
    free(str1);
    free(str2);
  }
  return ptr;
}

char* xmlrpcstrcat1(const char* pre) {
  int ll = strlen(pre)+1;
  char* ptr = (char*)malloc(ll);
  strcpy(ptr,pre);
  return ptr;
}

char* xmlrpcstrcat3(const char* pre, char* str, const char* post, int flag) {
  int ll = strlen(pre)+strlen(str)+strlen(post)+1;
  char* ptr = (char*)malloc(ll);
  strcpy(ptr,pre);
  strcat(ptr,str);
  strcat(ptr,post);
  if (flag)
    free(str);
  return ptr;
}

char* xmlrpcstrcat4(const char* pre, char* str1, char* str2,
		    const char* post, int flag) {
  int ll = strlen(pre)+strlen(str1)+strlen(str2)+strlen(post)+1;
  char* ptr = (char*)malloc(ll);
  strcpy(ptr,pre);
  strcat(ptr,str1);
  strcat(ptr," ");
  strcat(ptr,str2);
  strcat(ptr,post);
  if (flag) {
    free(str1);
    free(str2);
  }
  return ptr;
}
