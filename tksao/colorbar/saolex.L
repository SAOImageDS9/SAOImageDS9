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
  #include "saoparser.H"

  extern YYSTYPE* lilval;
  extern liFlexLexer* lilexx;
%}

%x DISCARD

D   [0-9]
E   [Ee][+-]?{D}+

/* rules */

%%

<DISCARD>[\n]	{ // special case-- #\n
		  BEGIN INITIAL;
		  yyless(0);             // put back the terminator
		  strcpy(lilval->str,""); // feed a blank string
		  return STRING;
		}

<DISCARD>[^\n]* {  // Discard reset of line
		  BEGIN INITIAL;
		  int ll = yyleng <(SAOBUFSIZE-1) ? yyleng:(SAOBUFSIZE-1);
		  strncpy(lilval->str,yytext,ll);
	          lilval->str[ll] = '\0';
		  return STRING;
		}

blue		{return BLUE_;}
debug		{return DEBUG_;}
gamma           {return GAMMA_;}
green		{return GREEN_;}
false		{return FALSE_;}
no		{return NO_;}
off		{return OFF_;}
on		{return ON_;}
pseudocolor	{return PSEUDOCOLOR_;}
pseudocolour    {return PSEUDOCOLOR_;}
red		{return RED_;}
true		{return TRUE_;}
yes		{return YES_;}

[+-]?{D}+	{ // Integer
		  lilval->integer = atoi(yytext);
		  return INT;
		}

[+-]?{D}+"."?({E})? |
[+-]?{D}*"."{D}+({E})? { // Real Number
		  lilval->real = atof(yytext);
		  return REAL;
		}

[0-9A-Za-z]+	{ // General String
		  int ll = yyleng <(SAOBUFSIZE-1) ? yyleng:(SAOBUFSIZE-1);
		  strncpy(lilval->str,yytext,ll);
	          lilval->str[ll] = '\0';
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

void liDiscard(int doit)
{
  if (lilexx)
    lilexx->begin(DISCARD, doit);
}

void liFlexLexer::begin(int which, int doit)
{
  BEGIN which;
  if (doit)
    yyless(0);
}
