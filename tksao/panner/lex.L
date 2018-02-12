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

  #include "parser.H"

  extern YYSTYPE* pnlval;
%}

D   [0-9]
E   [Ee][+-]?{D}+

/* rules */

%%

bbox		{return BBOX_;}
begin		{return BEGIN_;}
clear		{return CLEAR_;}
compass		{return COMPASS_;}
debug		{return DEBUG_;}
end		{return END_;}
false		{return FALSE_;}
get		{return GET_;}
height		{return HEIGHT_;}
hide		{return HIDE_;}
highlite	{return HIGHLITE_;}
image		{return IMAGE_;}
invalid		{return INVALID_;}
motion		{return MOTION_;}
n		{return N_;}
no		{return NO_;}
off		{return OFF_;}
on		{return ON_;}
pan		{return PAN_;}
reset		{return RESET_;}
show		{return SHOW_;}
size		{return SIZE_;}
true		{return TRUE_;}
to		{return TO_;}
update		{return UPDATE_;}
version		{return VERSION_;}
warp		{return WARP_;}
wcs		{return WCS_;}
width		{return WIDTH_;}
y		{return Y_;}
yes		{return YES_;}


[+-]?{D}+	{ // Integer
		  pnlval->integer = atoi(yytext);
		  return INT;
		}

[+-]?{D}+"."?({E})? |
[+-]?{D}*"."{D}+({E})? { // Real Number
		  pnlval->real = atof(yytext);
		  return REAL;
		}

0[xX][0-9a-fA-F]+ { // Pointer
		  pnlval->ptr = (void*)strtoul(yytext,NULL,16);
		  return POINTER;
		}

[ \t]+		{ // White Spaces
		} 

.		{ // Else, return the char
		  return yytext[0];
		}

%%
