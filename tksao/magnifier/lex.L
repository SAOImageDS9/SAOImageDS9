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

  extern YYSTYPE* mglval;
%}

D   [0-9]
E   [Ee][+-]?{D}+

/* rules */

%%

bbox		{return BBOX_;}
clear		{return CLEAR_;}
debug		{return DEBUG_;}
false		{return FALSE_;}
get		{return GET_;}
height		{return HEIGHT_;}
hide		{return HIDE_;}
off		{return OFF_;}
on		{return ON_;}
n		{return N_;}
no		{return NO_;}
reset		{return RESET_;}
show		{return SHOW_;}
true		{return TRUE_;}
update		{return UPDATE_;}
version		{return VERSION_;}
width		{return WIDTH_;}
y		{return Y_;}
yes		{return YES_;}

[+-]?{D}+	{ // Integer
		  mglval->integer = atoi(yytext);
		  return INT;
		}

0[xX][0-9a-fA-F]+ { // Pointer
		  mglval->ptr = (void*)strtoul(yytext,NULL,16);
		  return POINTER;
		}

[ \t]+		{ // White Spaces
		} 

.		{ // Else, return the char
		  return yytext[0];
		}

%%
