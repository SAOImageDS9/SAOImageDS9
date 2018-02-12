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
  #include "prosparser.H"

  extern YYSTYPE* proslval;
  extern prosFlexLexer* proslexx;
%}

%x DISCARD

D   [0-9]
E   [Ee][+-]?{D}+

/* rules */

%%

<DISCARD>[\n]	{ // special case-- #\n
		  BEGIN INITIAL;
		  yyless(0);             // put back the terminator
		  strcpy(proslval->str,""); // feed a blank string
		  return STRING;
		}

<DISCARD>[^\n]* {  // Discard reset of line
		  BEGIN INITIAL;
		  int ll = yyleng <(PROSBUFSIZE-1) ? yyleng:(PROSBUFSIZE-1);
		  strncpy(proslval->str,yytext,ll);
	          proslval->str[ll] = '\0';
		  return STRING;
		}

annulus			{return ANNULUS_;}
b1950			{return B1950_;}
box			{return BOX_;}
circle			{return CIRCLE_;}
debug			{return DEBUG_;}
ellipse			{return ELLIPSE_;}
ecliptic		{return ECLIPTIC_;}
equatorial		{return EQUATORIAL_;}
galactic		{return GALACTIC_;}
j2000			{return J2000_;}
logical			{return LOGICAL_;}
n			{return N_;}
off			{return OFF_;}
on			{return ON_;}
physical		{return PHYSICAL_;}
point			{return POINT_;}
polygon			{return POLYGON_;}
rotbox			{return ROTBOX_;}
version			{return VERSION_;}

[+-]?{D}+	{ // Integer
		  proslval->integer = atoi(yytext);
		  return INT;
		}

[+-]?{D}+"."?({E})? |
[+-]?{D}*"."{D}+({E})? { // Real Number
		  proslval->real = atof(yytext);
		  return REAL;
		}

[+-]?{D}+"."?d |
[+-]?{D}*"."{D}+d { // degrees
		  yytext[yyleng-1] = '\0';
		  proslval->real = atof(yytext);
		  return ANGDEGREE;
		}	

[+-]?{D}+"."?r |
[+-]?{D}*"."{D}+r { // radians
		  yytext[yyleng-1] = '\0';
		  proslval->real = atof(yytext);
		  return ANGRADIAN;
		}

{D}+"."?' |
{D}*"."{D}+' |
[+-]?{D}+"."?({E})?' |
[+-]?{D}*"."{D}+({E})?' { // minutes of arc
		  yytext[yyleng-1] = '\0';
		  proslval->real = atof(yytext);
		  return ARCMINUTE;
		}	

{D}+"."?\" |
{D}*"."{D}+\" |
[+-]?{D}+"."?({E})?\" |
[+-]?{D}*"."{D}+({E})?\" { // seconds of arc
		  yytext[yyleng-1] = '\0';
		  proslval->real = atof(yytext);
		  return ARCSECOND;
		}

[+-]?{D}+:{D}+:{D}+"."? |
[+-]?{D}+:{D}+:{D}*"."{D}+ { // Sexagesimal
		  int ll = yyleng <(PROSBUFSIZE-1) ? yyleng:(PROSBUFSIZE-1);
		  strncpy(proslval->str,yytext,ll);
	          proslval->str[ll] = '\0';
		  return SEXSTR;
		}	

[+-]?{D}+h{D}+m{D}+"."?s |
[+-]?{D}+h{D}+m{D}*"."{D}+s { // HMS
		  int ll = yyleng <(PROSBUFSIZE-1) ? yyleng:(PROSBUFSIZE-1);
		  strncpy(proslval->str,yytext,ll);
	          proslval->str[ll] = '\0';
		  return HMSSTR;
		}	

[+-]?{D}+d{D}+m{D}+"."?s |
[+-]?{D}+d{D}+m{D}*"."{D}+s { // DMS
		  int ll = yyleng <(PROSBUFSIZE-1) ? yyleng:(PROSBUFSIZE-1);
		  strncpy(proslval->str,yytext,ll);
	          proslval->str[ll] = '\0';
		  return DMSSTR;
		}	

\"[^\"\n]*\" | 
\'[^\'\n]*\'	{ // Quoted String
		  int ll=(yyleng-2)<(PROSBUFSIZE-1)?(yyleng-2):(PROSBUFSIZE-1);
		  strncpy(proslval->str,yytext+1,ll); // skip the " " 
	          proslval->str[ll] = '\0'; // Remove the '"' 
		  return STRING;
		}

\{[^\}\n]*\} 	{ // Quoted String
		  int ll=(yyleng-2)<(PROSBUFSIZE-1)?(yyleng-2):(PROSBUFSIZE-1);
		  strncpy(proslval->str,yytext+1,ll); // skip the '{'
	          proslval->str[ll] = '\0'; // Remove the '}'
		  return STRING;
		}

[0-9A-Za-z]+	{ // General String
		  int ll = yyleng <(PROSBUFSIZE-1) ? yyleng:(PROSBUFSIZE-1);
		  strncpy(proslval->str,yytext,ll);
	          proslval->str[ll] = '\0';
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

void prosDiscard(int doit)
{
  if (proslexx)
    proslexx->begin(DISCARD, doit);
}

void prosFlexLexer::begin(int which, int doit)
{
  BEGIN which;
  if (doit)
    yyless(0);
}
