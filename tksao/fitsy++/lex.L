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
  #include "parser.H"

  extern YYSTYPE* fflval;
  extern ffFlexLexer* fflexx;

  extern char ff_filter[];
  #define RET(x) {strcat(ff_filter,yytext);return x;}
  #define CLEARFILTER {ff_filter[0]='\0';}
%}

%x EXT
%x FILTER
%x ARRAY

/* rules */

%%

[^[\]\t]+	{ // File
		  strcpy(fflval->str,yytext);
		  return STRING;
		}

\[		{ // first bracket
		  BEGIN EXT;
		  CLEARFILTER
		  return yytext[0];
		}

[ \t]+		{ // White Spaces
		} 

.		{ // Else, return the char
		  return yytext[0];
		}

<EXT>{

arch		{RET(ARCH_)}
array		{RET(ARRAY_)}
big	        {RET(BIG_)}
bigendian	{RET(BIGENDIAN_)}
bin		{RET(BIN_)}
binkey		{RET(BINKEY_)}
bincol		{RET(BINCOL_)}
bitpix		{RET(BITPIX_)}
col		{RET(COL_)}
dim		{RET(DIM_)}
dims		{RET(DIMS_)}
ecliptic	{RET(ECLIPTIC_)}
endian          {RET(ENDIAN_)}
equatorial	{RET(EQUATORIAL_)}
galactic	{RET(GALACTIC_)}
key		{RET(KEY_)}
layout		{RET(LAYOUT_)}
little   	{RET(LITTLE_)}
littleendian	{RET(LITTLEENDIAN_)}
nested		{RET(NESTED_)}
north		{RET(NORTH_)}
order		{RET(ORDER_)}
quad		{RET(QUAD_)}
ring		{RET(RING_)}
skip		{RET(SKIP_)}
south		{RET(SOUTH_)}
system		{RET(SYSTEM_)}
unknown		{RET(UNKNOWN_)}
xdim		{RET(XDIM_)}
ydim		{RET(YDIM_)}
zdim		{RET(ZDIM_)}

[-+]?[0-9]+	{ // Integer
		  fflval->integer = atoi(yytext);
		  RET(INT)
		}

[0-9A-Za-z_.-]+	{ // Extn/Col Name
		  strcpy(fflval->str,yytext);
		  RET(STRING)
		}

\[		{ // bracket
		  CLEARFILTER
		  return yytext[0];
		}

,		{ // comma
		  CLEARFILTER
		  return yytext[0];
		}

[ \t]+		{ // White Spaces
		  strcat(ff_filter,yytext); 
		} 

.		{ // Else, return the char
		  strcat(ff_filter,yytext); 
		  return yytext[0];
		}

}

<FILTER>.*	{  // rest of Filter
		  strcpy(fflval->str,yytext);
	          fflval->str[yyleng-1] = '\0'; // Remove the ']'
		  strcat(ff_filter,fflval->str);
		  return STRING;
		}

<ARRAY>{

[-+]?[0-9]+	{ // Integer
		  fflval->integer = atoi(yytext);
		  return INT;
		}

.		{ // Else, return the char
		  return yytext[0];
		}

}

%%

void ffFilter(int doit)
{
  if (fflexx)
    fflexx->begin(FILTER, doit);
}

void ffArray(int doit)
{
  if (fflexx)
    fflexx->begin(ARRAY, doit);
}

void ffFlexLexer::begin(int which, int doit)
{
  BEGIN which;
  if (doit)
    yyless(0);
}
