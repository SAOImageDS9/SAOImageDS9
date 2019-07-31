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
  #include "ds9parser.H"

  extern YYSTYPE* mklval;
  extern mkFlexLexer* mklexx;
%}

%x DISCARD

D   [0-9]
E   [Ee][+-]?{D}+
H   [0-9a-fA-F]

/* rules */

%%

<DISCARD>[\n]	{ // special case-- #\n
		  BEGIN INITIAL;
		  yyless(0);             // put back the terminator
		  strcpy(mklval->str,""); // feed a blank string
		  return STRING;
		}

<DISCARD>[^\n]* {  // Discard reset of line
		  BEGIN INITIAL;
		  int ll = yyleng <(MKBUFSIZE-1) ? yyleng:(MKBUFSIZE-1);
		  strncpy(mklval->str,yytext,ll);
	          mklval->str[ll] = '\0';
		  return STRING;
		}

amplifier	{return AMPLIFIER_;}
ann[u][l][u][s]	{return ANNULUS_;}
arcmin		{return ARCMIN_;}
arcsec		{return ARCSEC_;}
arrow		{return ARROW_;}
b1950		{return B1950_;}
background	{return BACKGROUND_;}
begin		{return BEGIN_;}
box		{return BOX_;}
boxcircle	{return BOXCIRCLE_;}
bpanda		{return BPANDA_;}
callback	{return CALLBACK_;}
cir[c][l][e]	{return CIRCLE_;}
circle3d	{return CIRCLE3D_;}
color		{return COLOR_;}
colour		{return COLOR_;}
compass		{return COMPASS_;}
composite	{return COMPOSITE_;}
cpanda		{return CPANDA_;}
cross		{return CROSS_;}
dash		{return DASH_;}
dashlist	{return DASHLIST_;}
debug		{return DEBUG_;}
degrees		{return DEGREES_;}
delete		{return DELETE_;}
detector	{return DETECTOR_;}
diamond		{return DIAMOND_;}
edit		{return EDIT_;}
ell[i][p][s][e]	{return ELLIPSE_;}
ecliptic	{return ECLIPTIC_;}
epanda		{return EPANDA_;}
end		{return END_;}
false		{return FALSE_;}
fie[l][d]	{return FIELD_;}
fill            {return FILL_;}
fixed		{return FIXED_;}
fk4		{return FK4_;}
fk5		{return FK5_;}
format          {return FORMAT_;}
font		{return FONT_;}
galactic	{return GALACTIC_;}
global		{return GLOBAL_;}
highlite	{return HIGHLITE_;}
icrs		{return ICRS_;}
ignore		{return IGNORE_;}
include		{return INCLUDE_;}
image		{return IMAGE_;}
key		{return KEY_;}
j2000		{return J2000_;}
lin[e]		{return LINE_;}
linear		{return LINEAR_;}
move		{return MOVE_;}
n		{return N_;}
no		{return NO_;}
off		{return OFF_;}
on		{return ON_;}
panda		{return CPANDA_;}
physical	{return PHYSICAL_;}
pie		{return PIE_;}
pixels		{return PIXELS_;}
poi[n][t]	{return POINT_;}
pol[y][g][o][n]	{return POLYGON_;}
projection	{return PROJECTION_;}
property	{return PROPERTY_;}
rotate		{return ROTATE_;}
rotbox		{return ROTBOX_;}
ruler		{return RULER_;}
select		{return SELECT_;}
segment         {return SEGMENT_;}
source		{return SOURCE_;}
tag		{return TAG_;}
text		{return TEXT_;}
textangle	{return TEXTANGLE_;}
textrotate	{return TEXTROTATE_;}
tile		{return TILE_;}
true		{return TRUE_;}
vector		{return VECTOR_;}
version		{return VERSION_;}
update		{return UPDATE_;}
unhighlite	{return UNHIGHLITE_;}
unselect	{return UNSELECT_;}
wcs		{return WCS_;}
wcsa		{return WCSA_;}
wcsb		{return WCSB_;}
wcsc		{return WCSC_;}
wcsd		{return WCSD_;}
wcse		{return WCSE_;}
wcsf		{return WCSF_;}
wcsg		{return WCSG_;}
wcsh		{return WCSH_;}
wcsi		{return WCSI_;}
wcsj		{return WCSJ_;}
wcsk		{return WCSK_;}
wcsl		{return WCSL_;}
wcsm		{return WCSM_;}
wcsn		{return WCSN_;}
wcso		{return WCSO_;}
wcsp		{return WCSP_;}
wcsq		{return WCSQ_;}
wcsr		{return WCSR_;}
wcss		{return WCSS_;}
wcst		{return WCST_;}
wcsu		{return WCSU_;}
wcsv		{return WCSV_;}
wcsw		{return WCSW_;}
wcsx		{return WCSX_;}
wcsy		{return WCSY_;}
wcsz		{return WCSZ_;}
wcs0		{return WCS0_;}
width		{return WIDTH_;}
x		{return X_;}
y		{return Y_;}
yes		{return YES_;}


[+-]?{D}+	{ // Integer
		  mklval->integer = atoi(yytext);
		  return INT;
		}

[+-]?{D}+"."?({E})? |
[+-]?{D}*"."{D}+({E})? { // Real Number
		  mklval->real = atof(yytext);
		  return REAL;
		}

[+-]?{D}+"."?d |
[+-]?{D}*"."{D}+d { // degrees
		  yytext[yyleng-1] = '\0';
		  mklval->real = atof(yytext);
		  return ANGDEGREE;
		}	

[+-]?{D}+"."?r |
[+-]?{D}*"."{D}+r { // radians
		  yytext[yyleng-1] = '\0';
		  mklval->real = atof(yytext);
		  return ANGRADIAN;
		}

[+-]?{D}+"."?p |
[+-]?{D}*"."{D}+p { // physical coords
		  yytext[yyleng-1] = '\0';
		  mklval->real = atof(yytext);
		  return PHYCOORD;
		}

[+-]?{D}+"."?i |
[+-]?{D}*"."{D}+i { // image coords
		  yytext[yyleng-1] = '\0';
		  mklval->real = atof(yytext);
		  return IMGCOORD;
		}

{D}+"."?' |
{D}*"."{D}+' |
[+-]?{D}+"."?({E})?' |
[+-]?{D}*"."{D}+({E})?' { // minutes of arc
		  yytext[yyleng-1] = '\0';
		  mklval->real = atof(yytext);
		  return ARCMINUTE;
		}	

{D}+"."?\" |
{D}*"."{D}+\" |
[+-]?{D}+"."?({E})?\" |
[+-]?{D}*"."{D}+({E})?\" { // seconds of arc
		  yytext[yyleng-1] = '\0';
		  mklval->real = atof(yytext);
		  return ARCSECOND;
		}

[+-]?{D}+:{D}+:{D}+"."? |
[+-]?{D}+:{D}+:{D}*"."{D}+ { // Sexagesimal
		  int ll = yyleng <(MKBUFSIZE-1) ? yyleng:(MKBUFSIZE-1);
		  strncpy(mklval->str,yytext,ll);
	          mklval->str[ll] = '\0';
		  return SEXSTR;
		}	

[+-]?{D}+h{D}+m{D}+"."?s |
[+-]?{D}+h{D}+m{D}*"."{D}+s { // HMS
		  int ll = yyleng <(MKBUFSIZE-1) ? yyleng:(MKBUFSIZE-1);
		  strncpy(mklval->str,yytext,ll);
	          mklval->str[ll] = '\0';
		  return HMSSTR;
		}	

[+-]?{D}+d{D}+m{D}+"."?s |
[+-]?{D}+d{D}+m{D}*"."{D}+s { // DMS
		  int ll = yyleng <(MKBUFSIZE-1) ? yyleng:(MKBUFSIZE-1);
		  strncpy(mklval->str,yytext,ll);
	          mklval->str[ll] = '\0';
		  return DMSSTR;
		}	

#({H}){3}       { // 8 bit Hex Color
		  int ll = yyleng <(MKBUFSIZE-1) ? yyleng:(MKBUFSIZE-1);
		  strncpy(mklval->str,yytext,ll);
	          mklval->str[ll] = '\0';
		  return STRING;
                }

#({H}){6}       { // 16 bit Hex Color
		  int ll = yyleng <(MKBUFSIZE-1) ? yyleng:(MKBUFSIZE-1);
		  strncpy(mklval->str,yytext,ll);
	          mklval->str[ll] = '\0';
		  return STRING;
                }

#({H}){12}      { // 32 bit Hex Color
		  int ll = yyleng <(MKBUFSIZE-1) ? yyleng:(MKBUFSIZE-1);
		  strncpy(mklval->str,yytext,ll);
	          mklval->str[ll] = '\0';
		  return STRING;
                }

\"[^\"\n]*\" | 
\'[^\'\n]*\'	{ // Quoted String
		  int ll = (yyleng-2)<(MKBUFSIZE-1) ? (yyleng-2):(MKBUFSIZE-1);
		  strncpy(mklval->str,yytext+1,ll); // skip the " " 
	          mklval->str[ll] = '\0'; // Remove the '"' 
		  return STRING;
		}

\{[^\}\n]*\} 	{ // Quoted String
		  int ll = (yyleng-2)<(MKBUFSIZE-1) ? (yyleng-2):(MKBUFSIZE-1);
		  strncpy(mklval->str,yytext+1,ll); // skip the '{'
	          mklval->str[ll] = '\0'; // Remove the '}'
		  return STRING;
		}

[0-9A-Za-z]+	{ // General String
		  int ll = yyleng <(MKBUFSIZE-1) ? yyleng:(MKBUFSIZE-1);
		  strncpy(mklval->str,yytext,ll);
	          mklval->str[ll] = '\0';
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

void mkDiscard(int doit)
{
  if (mklexx)
    mklexx->begin(DISCARD, doit);
}

void mkFlexLexer::begin(int which, int doit)
{
  BEGIN which;
  if (doit)
    yyless(0);
}
