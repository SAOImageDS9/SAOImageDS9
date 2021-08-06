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

  extern YYSTYPE* cblval;
%}

D   [0-9]
E   [Ee][+-]?{D}+

/* rules */

%%

adjust		{return ADJUST_;}
begin		{return BEGIN_;}
bias		{return BIAS_;}
bw		{return BW_;}
channel		{return CHANNEL_;}
cmyk		{return CMYK_;}
colormap	{return COLORMAP_;}
colourmap	{return COLORMAP_;}
colorbar	{return COLORBAR_;}
colourbar	{return COLORBAR_;}
colorspace	{return COLORSPACE_;}
colourspace	{return COLORSPACE_;}
contrast	{return CONTRAST_;}
cursor          {return CURSOR_;}
debug		{return DEBUG_;}
delete		{return DELETE_;}
edit		{return EDIT_;}
end		{return END_;}
get		{return GET_;}
gray		{return GRAY_;}
false		{return FALSE_;}
file		{return FILE_;}
height		{return HEIGHT_;}
hide		{return HIDE_;}
id		{return ID_;}
invert		{return INVERT_;}
itt		{return ITT_;}
level		{return LEVEL_;}
list		{return LIST_;}
load		{return LOAD_;}
macosx		{return MACOSX_;}
map		{return MAP_;}
motion		{return MOTION_;}
n		{return N_;}
name		{return NAME_;}
no		{return NO_;}
off		{return OFF_;}
on		{return ON_;}
postscript	{return POSTSCRIPT_;}
print		{return PRINT_;}
query           {return QUERY_;}
reset		{return RESET_;}
resolution	{return RESOLUTION_;}
rgb		{return RGB_;}
save		{return SAVE_;}
show		{return SHOW_;}
tag		{return TAG_;}
true		{return TRUE_;}
type		{return TYPE_;}
value		{return VALUE_;}
var		{return VAR_;}
version		{return VERSION_;}
width		{return WIDTH_;}
win32		{return WIN32_;}
window		{return WINDOW_;}
y		{return Y_;}
yes		{return YES_;}

[+-]?{D}+	{ // Integer
		  cblval->integer = atoi(yytext);
		  return INT;
		}

[+-]?{D}+"."?({E})? |
[+-]?{D}*"."{D}+({E})? { // Real Number
		  cblval->real = atof(yytext);
		  return REAL;
		}

0[xX][0-9a-fA-F]+ { // Pointer
		  cblval->ptr = (void*)strtoul(yytext,NULL,16);
		  return POINTER;
		}

\"[^\"\n]*\" | 
\'[^\'\n]*\'	{ // Quoted String
		  int ll = (yyleng-2)<(CBBUFSIZE-1) ? (yyleng-2):(CBBUFSIZE-1);
		  strncpy(cblval->str,yytext+1,ll); // skip the " " 
	          cblval->str[ll] = '\0'; // Remove the '"' 
		  return STRING;
		}

\{[^\}\n]*\} 	{ // Quoted String
		  int ll = (yyleng-2)<(CBBUFSIZE-1) ? (yyleng-2):(CBBUFSIZE-1);
		  strncpy(cblval->str,yytext+1,ll); // skip the '{'
	          cblval->str[ll] = '\0'; // Remove the '}'
		  return STRING;
		}

[!-~][!-~]+	{ // General String-- at least 2 printable chars
		  int ll = yyleng <(CBBUFSIZE-1) ? yyleng:(CBBUFSIZE-1);
		  strncpy(cblval->str,yytext,ll);
	          cblval->str[ll] = '\0';
		  return STRING;
		}

[ \t]+		{ // White Spaces
		} 

.		{ // Else, return the char
		  return yytext[0];
		}

%%
