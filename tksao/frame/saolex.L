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

  #include "util.h"
  #include "saoparser.H"

  extern YYSTYPE* saolval;
  extern saoFlexLexer* saolexx;
%}

%x DISCARD

D   [0-9]
E   [Ee][+-]?{D}+

/* rules */

%%

<DISCARD>[\n]	{ // special case-- #\n
		  BEGIN INITIAL;
		  yyless(0);             // put back the terminator
		  strcpy(saolval->str,""); // feed a blank string
		  return STRING;
		}

<DISCARD>[^\n]* {  // Discard reset of line
		  BEGIN INITIAL;
		  int ll = yyleng <(SAOBUFSIZE-1) ? yyleng:(SAOBUFSIZE-1);
		  strncpy(saolval->str,yytext,ll);
	          saolval->str[ll] = '\0';
		  return STRING;
		}

annulus			{return ANNULUS_;}
box			{return BOX_;}
circle			{return CIRCLE_;}
debug			{return DEBUG_;}
ellipse			{return ELLIPSE_;}
n			{return N_;}
off			{return OFF_;}
on			{return ON_;}
point			{return POINT_;}
polygon			{return POLYGON_;}
rotbox			{return ROTBOX_;}
version			{return VERSION_;}

[+-]?{D}+	{ // Integer
		  saolval->integer = atoi(yytext);
		  return INT;
		}

[+-]?{D}+"."?({E})? |
[+-]?{D}*"."{D}+({E})? { // Real Number
		  saolval->real = atof(yytext);
		  return REAL;
		}

\"[^\"\n]*\" | 
\'[^\'\n]*\'	{ // Quoted String
		  int ll = (yyleng-2)<(SAOBUFSIZE-1)?(yyleng-2):(SAOBUFSIZE-1);
		  strncpy(saolval->str,yytext+1,ll); // skip the " " 
	          saolval->str[ll] = '\0'; // Remove the '"' 
		  return STRING;
		}

\{[^\}\n]*\} 	{ // Quoted String
		  int ll = (yyleng-2)<(SAOBUFSIZE-1)?(yyleng-2):(SAOBUFSIZE-1);
		  strncpy(saolval->str,yytext+1,ll); // skip the '{'
	          saolval->str[ll] = '\0'; // Remove the '}'
		  return STRING;
		}

[0-9A-Za-z]+	{ // General String
		  int ll = yyleng <(SAOBUFSIZE-1) ? yyleng:(SAOBUFSIZE-1);
		  strncpy(saolval->str,yytext,ll);
	          saolval->str[ll] = '\0';
		  return STRING;
		}

[ \t]+		{ // White Spaces
		} 

\r\n		{ // windows line feed
		  return '\n';
		}

\\n		{ // fake line feed
		  return '\n';
		}

\n		{ // linefeed
		  return '\n';
		}

<<EOF>>		{ // eof
		  return EOF_;
		}

.		{ // Else, return the char
		  return yytext[0];
		}

%%

void saoDiscard(int doit)
{
  if (saolexx)
    saolexx->begin(DISCARD, doit);
}

void saoFlexLexer::begin(int which, int doit)
{
  BEGIN which;
  if (doit)
    yyless(0);
}
