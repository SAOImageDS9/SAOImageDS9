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

\<data\>             {return DATA_;}
\<\/data\>           {return _DATA_;}

\<string\>[^\<]*\</string\> { // Quoted String 8+str+8
                  int ll = yyleng-16;
		  strncpy(xmlrpclval->str,yytext+9,ll); // skip the <string>
	          xmlrpclval->str[ll] = '\0'; // terminate
		  return STRING;
		}

\<value\>[^\<]*\</value\>  { // Quoted String 7+str+7
                  int ll = yyleng-14;
		  strncpy(xmlrpclval->str,yytext+8,ll); // skip the <value>
	          xmlrpclval->str[ll] = '\0'; // terminate
		  return STRING;
                }

\<\?xml[^\?]*\?\> {
                  int ll = yyleng;
		  strncpy(xmlrpclval->header,yytext,ll); // skip the <value>
	          xmlrpclval->str[ll] = '\0'; // terminate
                  return HEADER;
                }

[+-]?{D}+	{ // Integer
		  xmlrpclval->integer = atoi(yytext);
		  return INT;
		}

[^[:space:]]+   {
		  int ll = yyleng;
		  strncpy(xmlrpclval->str,yytext,ll); // skip the <value>
	          xmlrpclval->str[ll] = '\0'; // terminate
		  return STRING;
                }
%%
