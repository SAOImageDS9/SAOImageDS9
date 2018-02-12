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
  #include "enviparser.H"

  extern YYSTYPE* envilval;
  extern enviFlexLexer* envilexx;
%}

%x DISCARD
%x BRACKET

D   [0-9]
E   [Ee][+-]?{D}+

/* rules */

%%

<DISCARD>[\n]	{ // special case-- #\n
		  BEGIN INITIAL;
		  yyless(0);             // put back the terminator
		  strcpy(envilval->str,""); // feed a blank string
		  return STRING;
		}

<DISCARD>[^\n]* {  // Discard reset of line
		  BEGIN INITIAL;
		  int ll = yyleng <(ENVIPARSERSIZE-1) ? yyleng:(ENVIPARSERSIZE-1);
		  strncpy(envilval->str,yytext,ll);
	          envilval->str[ll] = '\0';
		  return STRING;
		}

\{               {
                  BEGIN BRACKET;
                  return '{';
                }

<BRACKET>\}      {
		  BEGIN INITIAL;
                  return '}';
                }

debug           {return DEBUG_;}
on              {return ON_;}
off             {return OFF_;}

average         {return AVERAGE_;}
band            {return BAND_;}
bands           {return BANDS_;}
bbl             {return BBL_;}
bil             {return BIL_;}
bip             {return BIP_;}
bsq             {return BSQ_;}
byte            {return BYTE_;}
envi            {return ENVI_;}
data            {return DATA_;}
default         {return DEFAULT_;}
description     {return DESCRIPTION_;}
factor          {return FACTOR_;}
frame           {return FRAME_;}
file            {return FILE_;}
fwhm            {return FWHM_;}
gain            {return GAIN_;}
header          {return HEADER_;}
info            {return INFO_;}
ignore          {return IGNORE_;}
interleave      {return INTERLEAVE_;}
limits          {return LIMITS_;}
lines           {return LINES_;}
major           {return MAJOR_;}
map             {return MAP_;}
minor           {return MINOR_;}
names           {return NAMES_;}
offset          {return OFFSET_;}
offsets         {return OFFSETS_;}
order           {return ORDER_;}
pixel           {return PIXEL_;}
pixels          {return PIXELS_;}
plot            {return PLOT_;}
projection      {return PROJECTION_;}
range           {return RANGE_;}
reflectance     {return REFLECTANCE_;}
samples         {return SAMPLES_;}
scale           {return SCALE_;}
scanner         {return SCANNER_;}
sensor          {return SENSOR_;}
size            {return SIZE_;}
stretch         {return STRETCH_;}
titles          {return TITLES_;}
type            {return TYPE_;}
units           {return UNITS_;}
value           {return VALUE_;}
values          {return VALUES_;}
wavelength      {return WAVELENGTH_;}


<BRACKET>[+-]?{D}+ { // Integer
		  envilval->integer = atoi(yytext);
		  return INT;
		}

<BRACKET>[+-]?{D}+"."?({E})? |
<BRACKET>[+-]?{D}*"."{D}+({E})? { // Real Number
		  envilval->real = atof(yytext);
		  return REAL;
		}


<BRACKET>[0-9A-Za-z\-]+	{ // General String
		  int ll = yyleng <(ENVIPARSERSIZE-1) ? yyleng:(ENVIPARSERSIZE-1);
		  strncpy(envilval->str,yytext,ll);
	          envilval->str[ll] = '\0';
		  return STRING;
		}

<BRACKET>,      {
                  return ',';
                }

<BRACKET>[ \t]+	{ // White Spaces
		} 

<BRACKET>\n	{ // linefeed
		}

<BRACKET>.      { // other chars, eat it
                }

[+-]?{D}+	{ // Integer
		  envilval->integer = atoi(yytext);
		  return INT;
		}

[+-]?{D}+"."?({E})? |
[+-]?{D}*"."{D}+({E})? { // Real Number
		  envilval->real = atof(yytext);
		  return REAL;
		}


[0-9A-Za-z]+	{ // General String
		  int ll = yyleng <(ENVIPARSERSIZE-1) ? yyleng:(ENVIPARSERSIZE-1);
		  strncpy(envilval->str,yytext,ll);
	          envilval->str[ll] = '\0';
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
		  return yytext[0];
		}

%%

void enviDiscard(int doit)
{
  if (envilexx)
    envilexx->begin(DISCARD, doit);
}

void enviFlexLexer::begin(int which, int doit)
{
  BEGIN which;
  if (doit)
    yyless(0);
}
