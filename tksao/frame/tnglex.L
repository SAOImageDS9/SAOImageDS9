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
  #include "tngparser.H"

  extern YYSTYPE* tnglval;
  extern tngFlexLexer* tnglexx;
%}

%x DISCARD

D   [0-9]
E   [Ee][+-]?{D}+

/* rules */

%%

<DISCARD>[\n]	{ // special case-- #\n
		  BEGIN INITIAL;
		  yyless(0);             // put back the terminator
		  strcpy(tnglval->str,""); // feed a blank string
		  return STRING;
		}

<DISCARD>[^\n]* {  // Discard reset of line
		  BEGIN INITIAL;
		  int ll = yyleng <(TNGBUFSIZE-1) ? yyleng:(TNGBUFSIZE-1);
		  strncpy(tnglval->str,yytext,ll);
	          tnglval->str[ll] = '\0';
		  return STRING;
		}

b1950		{return B1950_;}
background	{return BACKGROUND_;}
box		{return BOX_;}
black		{return BLACK_;}
blue		{return BLUE_;}
circle		{return CIRCLE_;}
cyan		{return CYAN_;}
date		{return DATE_;}
debug		{return DEBUG_;}
degrees		{return DEGREES_;}
ellipse		{return ELLIPSE_;}
ecliptic	{return ECLIPTIC_;}
filename	{return FILENAME_;}
fk4		{return FK4_;}
fk5		{return FK5_;}
format		{return FORMAT_;}
galactic	{return GALACTIC_;}
green		{return GREEN_;}
hms		{return HMS_;}
icrs		{return ICRS_;}
j2000		{return J2000_;}
lin[e]		{return LINE_;}
magenta		{return MAGENTA_;}
off		{return OFF_;}
on		{return ON_;}
physical	{return PHYSICAL_;}
pixels		{return PIXELS_;}
point		{return POINT_;}
polygon		{return POLYGON_;}
red		{return RED_;}
source		{return SOURCE_;}
text		{return TEXT_;}
version		{return VERSION_;}
white		{return WHITE_;}
yellow		{return YELLOW_;}

[+-]?{D}+	{ // Integer
		  tnglval->integer = atoi(yytext);
		  return INT;
		}

[+-]?{D}+"."?({E})? |
[+-]?{D}*"."{D}+({E})? { // Real Number
		  tnglval->real = atof(yytext);
		  return REAL;
		}

[+-]?{D}+"."?d |
[+-]?{D}*"."{D}+d { // degrees
		  yytext[yyleng-1] = '\0';
		  tnglval->real = atof(yytext);
		  return ANGDEGREE;
		}	

[+-]?{D}+:{D}+:{D}+"."? |
[+-]?{D}+:{D}+:{D}*"."{D}+ { // Sexagesimal
		  int ll = yyleng <(TNGBUFSIZE-1)?yyleng:(TNGBUFSIZE-1);
		  strncpy(tnglval->str,yytext,ll);
	          tnglval->str[ll] = '\0';
		  return SEXSTR;
		}

\"[^\"\n]*\" | 
\'[^\'\n]*\'	{ // Quoted String
		  int ll = (yyleng-2)<(TNGBUFSIZE-1)?(yyleng-2):(TNGBUFSIZE-1);
		  strncpy(tnglval->str,yytext+1,yyleng-2); // skip the " " 
	          tnglval->str[ll] = '\0'; // Remove the '"' 
		  return STRING;
		}

\{[^\}\n]*\} 	{ // Quoted String
		  int ll = (yyleng-2)<(TNGBUFSIZE-1)?(yyleng-2):(TNGBUFSIZE-1);
		  strncpy(tnglval->str,yytext+1,yyleng-2); // skip the '{'
	          tnglval->str[ll] = '\0'; // Remove the '}'
		  return STRING;
		}

[0-9A-Za-z]+	{ // General String
		  int ll = yyleng <(TNGBUFSIZE-1) ? yyleng:(TNGBUFSIZE-1);
		  strncpy(tnglval->str,yytext,ll);
	          tnglval->str[ll] = '\0';
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

void tngDiscard(int doit)
{
  if (tnglexx)
    tnglexx->begin(DISCARD, doit);
}

void tngFlexLexer::begin(int which, int doit)
{
  BEGIN which;
  if (doit)
    yyless(0);
}
