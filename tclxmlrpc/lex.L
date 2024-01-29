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

debug               {return DEBUG_;}
on		    {return ON_;}
off		    {return OFF_;}

\<methodcall\>       {return METHODCALL_;}
\<\/methodcall\>     {return _METHODCALL_;}

\<methodresponse\>   {return METHODRESPONSE_;}
\<\/methodresponse\> {return _METHODRESPONSE_;}

\<methodname\>       {return METHODNAME_;}
\<\/methodname\>     {return _METHODNAME_;}

\<fault\>            {return FAULT_;}
\<\/fault\>          {return _FAULT_;}

\<params\>           {return PARAMS_;}
\<\/params\>         {return _PARAMS_;}

\<param\>            {return PARAM_;}
\<\/param\>          {return _PARAM_;}

\<value\>            {return VALUE_;}
\<\/value\>          {return _VALUE_;}

\<integer\>          {return INTEGER_;}
\<\/integer\>        {return _INTEGER_;}

\<struct\>           {return STRUCT_;}
\<\/struct\>         {return _STRUCT_;}

\<member\>           {return MEMBER_;}
\<\/member\>         {return _MEMBER_;}

\<name\>             {return NAME_;}
\<\/name\>           {return _NAME_;}

\<array\>             {return ARRAY_;}
\<\/array\>           {return _ARRAY_;}

\<data\>             {return DATA_;}
\<\/data\>           {return _DATA_;}

\<\?xml[^\?]*\?\> {
cerr << "HEADER FOUND" << endl;
                  int ll = yyleng;
		  strncpy(xmlrpclval->str,yytext,ll);
	          xmlrpclval->str[ll] = '\0'; // terminate
                  return HEADER;
                }

\<string\>[^\<]*\<\/string\> { // Quoted String 8+str+8
cerr << "STRING found: " << yytext << endl;
                  int ll = yyleng-16;
		  strncpy(xmlrpclval->str,yytext+9,ll); // skip the <string>
	          xmlrpclval->str[ll] = '\0'; // terminate
		  return STRING;
		}

\<value\>[^\<]*\<\/value\>  { // Quoted String 7+str+7
cerr << "VALUE found: " << yytext << endl;
                  int ll = yyleng-14;
		  strncpy(xmlrpclval->str,yytext+8,ll); // skip the <value>
	          xmlrpclval->str[ll] = '\0'; // terminate
		  return STRING;
                }

[^[:space:]]+   {
cerr << "SIMPLE STRING found: " << yytext << endl;
		  int ll = yyleng;
		  strncpy(xmlrpclval->str,yytext,ll); // skip the <value>
	          xmlrpclval->str[ll] = '\0'; // terminate
		  return STRING;
                }

[ \t]+		{ // White Spaces
		} 

.		{ // Else, return the char
		  return yytext[0];
		}
%%
