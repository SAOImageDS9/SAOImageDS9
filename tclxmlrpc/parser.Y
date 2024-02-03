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
#include <string.h>
#include "tclxmlrpc.h"

#undef yyFlexLexer
#define yyFlexLexer xmlrpcFlexLexer
#include <FlexLexer.h>
  char* xmlrpcbuf;
  char* xmlrpcstrcat(char*, char*);
  char* xmlrpcstrcat1(const char*);
  char* xmlrpcstrcat3(const char*, char*, const char*);
  char* xmlrpcstrcat4(const char*, char*, char*, const char*);
  char* xmlrpcunquote(char*);
  
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

methodCall : METHODCALL_ methodName params _METHODCALL_
{$$=xmlrpcstrcat4("[list methodcall [list ",$2,$3,"]]");}
| METHODCALL_ methodName _METHODCALL_
{$$=xmlrpcstrcat3("[list methodcall [list ",$2,"]]");}
;

methodResponse : METHODRESPONSE_ params _METHODRESPONSE_
{$$=xmlrpcstrcat3("[list methodresponse ",$2,"]");}
| METHODRESPONSE_ fault _METHODRESPONSE_
{$$=xmlrpcstrcat3("[list methodresponse ",$2,"]");}
;

methodName : METHODNAME_ STRING _METHODNAME_
{$$=xmlrpcstrcat3("[list methodname ",$2,"]");}
;

fault : FAULT_ value _FAULT_ {$$=xmlrpcstrcat3("list fault ",$2,"]");}
;

params : PARAMS_ xparam _PARAMS_ {$$=xmlrpcstrcat3("[list params [list ",$2,"]]");}
| PARAMS_ _PARAMS_ {$$=xmlrpcstrcat1("[list params {}]");}
| _PARAMS_ {$$=xmlrpcstrcat1("[list params {}]");}
;

xparam : xparam param {$$=xmlrpcstrcat($1,$2);}
| param {$$=$1;}
;

param : PARAM_ value _PARAM_ {$$=xmlrpcstrcat3("[list param ",$2,"]");}
| PARAM_ _PARAM_ {$$=xmlrpcstrcat1("[list param {}]");}
| _PARAM_ {$$=xmlrpcstrcat1("[list param {}]");}
;

value : STRING {$$=xmlrpcstrcat3("[list value [list string {",xmlrpcunquote($1),"}]]");}
| VALUE_ type _VALUE_ {$$=xmlrpcstrcat3("[list value ",$2,"]");}
| VALUE_ _VALUE_ {$$=xmlrpcstrcat1("[list value {}]");}
| _VALUE_ {$$=xmlrpcstrcat1("[list value {}]");}
;

type : STRING {$$=xmlrpcstrcat3("[list string {",xmlrpcunquote($1),"}]");}

| INTEGER_ STRING _INTEGER_ {$$=xmlrpcstrcat3("[list integer ",$2,"]");}

| STRUCT_ members _STRUCT_ {$$=xmlrpcstrcat3("[list struct [list ",$2,"]]");}
| STRUCT_ _STRUCT_ {$$=xmlrpcstrcat1("[list struct {}]");}
| _STRUCT_ {$$=xmlrpcstrcat1("[list struct {}]");}

| ARRAY_ DATA_ values _DATA_ _ARRAY_ {$$=xmlrpcstrcat3("[list array [list data [list ",$3,"]]]");}
| ARRAY_ DATA_ _DATA_ _ARRAY_ {$$=xmlrpcstrcat1("[list array [list data {}]]");}
| _DATA_ _ARRAY_ {$$=xmlrpcstrcat1("[list array [list data {}]]");}
;

members : members member {$$=xmlrpcstrcat($1,$2);}
| member {$$=$1;}
;

member : MEMBER_ name value _MEMBER_ {$$=xmlrpcstrcat4("[list member [list ",$2,$3,"]]");}
| MEMBER_ _MEMBER_ {$$=xmlrpcstrcat1("[list member {}]");}
| _MEMBER_ {$$=xmlrpcstrcat1("[list member {}]");}
;

name : NAME_ STRING _NAME_ {$$=xmlrpcstrcat3("[list name ",$2,"]");}
| NAME_ _NAME_ {$$=xmlrpcstrcat1("[list name {}]");}
| _NAME_ {$$=xmlrpcstrcat1("[list name {}]");}
;

values : values value {$$=xmlrpcstrcat($1,$2);}
| value {$$=$1;}
;

debug : ON_ {yydebug=1;}
| OFF_ {yydebug=0;}
;

%%

char* xmlrpcstrcat(char* str1, char* str2) {
  int ll = strlen(str1)+1+strlen(str2);
  char* ptr = (char*)malloc(ll+1);
  strncpy(ptr,str1,ll);
  strncat(ptr," ",1);
  strncat(ptr,str2,strlen(str2));
  free(str1);
  free(str2);

  return ptr;
}

char* xmlrpcstrcat1(const char* pre) {
  int ll = strlen(pre);
  char* ptr = (char*)malloc(ll+1);
  strncpy(ptr,pre,ll);
  ptr[ll] = '\0';

  return ptr;
}

char* xmlrpcstrcat3(const char* pre, char* str, const char* post) {
  int ll = strlen(pre)+strlen(str)+strlen(post);
  char* ptr = (char*)malloc(ll+1);
  strncpy(ptr,pre,ll);
  strncat(ptr,str,strlen(str));
  strncat(ptr,post,strlen(post));
  free(str);

  return ptr;
}

char* xmlrpcstrcat4(const char* pre, char* str1, char* str2, const char* post) {
  int ll = strlen(pre)+strlen(str1)+1+strlen(str2)+strlen(post);
  char* ptr = (char*)malloc(ll+1);
  strncpy(ptr,pre,ll);
  strncat(ptr,str1,strlen(str1));
  strncat(ptr," ",1);
  strncat(ptr,str2,strlen(str2));
  strncat(ptr,post,strlen(post));
  free(str1);
  free(str2);

  return ptr;
}

char* xmlrpcunquote(char* str) {
  int ll = strlen(str);
  char* ptr = (char*)malloc(ll+1);
  char* sptr = str;
  char* dptr = ptr;
  while (*sptr) {
    if (*sptr == '&') {
      char amp[] = "&amp;";
      char lt[] = "&lt;";
      char gt[] = "&gt;";
      char apos[] = "&apos;";
      char quot[] = "&quot;";
      if (!strncmp(sptr,amp,5)) {
	*dptr++ = '&';
	sptr += 5;
      }
      else if (!strncmp(sptr,lt,4)) {
	*dptr++ = '<';
	sptr += 4;
      }
      else if (!strncmp(sptr,gt,4)) {
	*dptr++ = '>';
	sptr += 4;
      }
      else if (!strncmp(sptr,apos,6)) {
	*dptr++ = '\'';
	sptr += 6;
      }
      else if (!strncmp(sptr,quot,6)) {
	*dptr++ = '"';
	sptr += 6;
      }
      else
	*dptr++ = *sptr++;
    }
    else
      *dptr++ = *sptr++;
  }
  *dptr++ = '\0';
  free(str);

  return ptr;
}
