/* Copyright (C) 1999-2024
 * Smithsonian Astrophysical Observatory, Cambridge, MA, USA
 * For conditions of distribution and use, see copyright notice in "copyright"
 */

%option noyywrap
%option caseless
%option never-interactive
%option c++

%{
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>

  #include <iostream>
  #include <sstream>
  #include <iomanip>
  using namespace std;

  #include "parser.H"

  extern YYSTYPE* xmlrpclval;
%}

D   [0-9]
E   [Ee][+-]?{D}+

/* rules */

%%

debug              {return DEBUG_;}
on		   {return ON_;}
off		   {return OFF_;}

\<methodcall\>     {return METHODCALL_;}
\<\/methodcall\>   {return _METHODCALL_;}

\<methodresponse\>  {return METHODRESPONSE_;}
\<\/methodresponse\> {return _METHODRESPONSE_;}

\<methodname\>     {return METHODNAME_;}
\<\/methodname\>   {return _METHODNAME_;}

\<fault\>          {return FAULT_;}
\<\/fault\>        {return _FAULT_;}

\<params\>         {return PARAMS_;}
\<\/params\>       {return _PARAMS_;}

\<param\>          {return PARAM_;}
\<\/param\>        {return _PARAM_;}

\<value\>          {return VALUE_;}
\<\/value\>        {return _VALUE_;}

\<integer\>        {return INTEGER_;}
\<\/integer\>      {return _INTEGER_;}

\<struct\>         {return STRUCT_;}
\<\/struct\>       {return _STRUCT_;}

\<members\>        {return MEMBERS_;}
\<\/members\>      {return _MEMBERS_;}

\<member\>         {return MEMBER_;}
\<\/member\>       {return _MEMBER_;}

\<name\>           {return NAME_;}
\<\/name\>         {return _NAME_;}

\<array\>          {return ARRAY_;}
\<\/array\>        {return _ARRAY_;}

\<data\>           {return DATA_;}
\<\/data\>         {return _DATA_;}

\<\?xml[^\?]*\?\>  {
                     int ll = strlen(yytext);
                     char* ptr = (char*)malloc(ll+1);
                     strncpy(ptr,yytext,ll);
                     ptr[ll] = '\0';
                     xmlrpclval->str = ptr;
                     return HEADER;
                   }

\<string\>[^\<]*\<\/string\> { // Quoted String 8+1+str+1+9
                     int ll = strlen(yytext)-19;
                     char* ptr = (char*)malloc(ll+1);
                     strncpy(ptr,yytext+9,ll);
                     ptr[ll] = '\0';
                     xmlrpclval->str = ptr;
                     return STRING;
                   }

\<value\>[^\<]*\<\/value\>  { // Quoted String 7+1+str+1+8
                     int ll = strlen(yytext)-17;
                     char* ptr = (char*)malloc(ll+1);
                     strncpy(ptr,yytext+8,ll);
                     ptr[ll] = '\0';
                     xmlrpclval->str = ptr;
                     return STRING;
                   }

[^ \t\r\n]+      {
                     int ll = strlen(yytext);
                     char* ptr = (char*)malloc(ll+1);
                     strncpy(ptr,yytext,ll);
                     ptr[ll] = '\0';
                     xmlrpclval->str = ptr;
		     return STRING;
                   }

[ \t]+		   { // White Spaces
		   } 

[\n]+		   { // returns
		   } 

%%
