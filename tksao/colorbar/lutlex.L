/* Copyright (C) 1999-2018
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
  #include <ctype.h>

  #include "util.h"
  #include "lutparser.H"

  extern YYSTYPE* rgblval;
  extern rgbFlexLexer* rgblexx;
%}

%x DISCARD

D   [0-9]
E   [Ee][+-]?{D}+

/* rules */

%%

<DISCARD>[\n]	{ // special case-- #\n
		  BEGIN INITIAL;
		  yyless(0);             // put back the terminator
		  strcpy(rgblval->str,""); // feed a blank string
		  return STRING;
		}

<DISCARD>[^\n]* {  // Discard reset of line
		  BEGIN INITIAL;
		  int ll = yyleng <(LUTBUFSIZE-1) ? yyleng:(LUTBUFSIZE-1);
		  strncpy(rgblval->str,yytext,ll);
	          rgblval->str[ll] = '\0';
		  return STRING;
		}

debug		{return DEBUG_;}
false		{return FALSE_;}
no		{return NO_;}
off		{return OFF_;}
on		{return ON_;}
true		{return TRUE_;}
yes		{return YES_;}

[+-]?{D}+	{ // Integer
		  rgblval->integer = atoi(yytext);
		  return INT;
		}

[+-]?{D}+"."?({E})? |
[+-]?{D}*"."{D}+({E})? { // Real Number
		  rgblval->real = atof(yytext);
		  return REAL;
		}

[0-9A-Za-z]+	{ // General String
		  int ll = yyleng <(LUTBUFSIZE-1) ? yyleng:(LUTBUFSIZE-1);
		  strncpy(rgblval->str,yytext,ll);
	          rgblval->str[ll] = '\0';
		  return STRING;
		}

[ \t]+		{ // White Spaces
		} 

\r\n		{ // windows line feed
		  return '\n';
		}

\n		{ // linefeed
		  return '\n';
		}

<<EOF>>		{ // eof
		  return EOF_;
		}

.		{ // Else, return the char
		  return toupper(yytext[0]);
		}

%%

void rgbDiscard(int doit)
{
  if (rgblexx)
    rgblexx->begin(DISCARD, doit);
}

void rgbFlexLexer::begin(int which, int doit)
{
  BEGIN which;
  if (doit)
    yyless(0);
}
