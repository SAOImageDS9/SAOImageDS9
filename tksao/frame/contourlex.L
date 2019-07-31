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
  #include "contourparser.H"

  extern YYSTYPE* ctlval;
  extern ctFlexLexer* ctlexx;
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
		  strcpy(ctlval->str,""); // feed a blank string
		  return STRING;
		}

<DISCARD>[^\n]* {  // Discard reset of line
		  BEGIN INITIAL;
		  int ll = yyleng <(CTBUFSIZE-1) ? yyleng:(CTBUFSIZE-1);
		  strncpy(ctlval->str,yytext,ll);
	          ctlval->str[ll] = '\0';
		  return STRING;
		}

amplifier	{return AMPLIFIER_;}
b1950		{return B1950_;}
color		{return COLOR_;}
colour		{return COLOR_;}
dash		{return DASH_;}
dashlist	{return DASHLIST_;}
debug		{return DEBUG_;}
detector	{return DETECTOR_;}
ecliptic	{return ECLIPTIC_;}
false		{return FALSE_;}
fk4		{return FK4_;}
fk5		{return FK5_;}
galactic	{return GALACTIC_;}
global		{return GLOBAL_;}
icrs		{return ICRS_;}
image		{return IMAGE_;}
j2000		{return J2000_;}
level           {return LEVEL_;}
levels          {return LEVELS_;}
linear		{return LINEAR_;}
n		{return N_;}
no		{return NO_;}
off		{return OFF_;}
on		{return ON_;}
physical	{return PHYSICAL_;}
true		{return TRUE_;}
version		{return VERSION_;}
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
width		{return WIDTH_;}
y		{return Y_;}
yes		{return YES_;}


[+-]?{D}+	{ // Integer
		  ctlval->integer = atoi(yytext);
		  return INT;
		}

[+-]?{D}+"."?({E})? |
[+-]?{D}*"."{D}+({E})? { // Real Number
		  ctlval->real = atof(yytext);
		  return REAL;
		}

[+-]?{D}+"."?d |
[+-]?{D}*"."{D}+d { // degrees
		  yytext[yyleng-1] = '\0';
		  ctlval->real = atof(yytext);
		  return ANGDEGREE;
		}	

[+-]?{D}+"."?p |
[+-]?{D}*"."{D}+p { // physical coords
		  yytext[yyleng-1] = '\0';
		  ctlval->real = atof(yytext);
		  return PHYCOORD;
		}

[+-]?{D}+"."?i |
[+-]?{D}*"."{D}+i { // image coords
		  yytext[yyleng-1] = '\0';
		  ctlval->real = atof(yytext);
		  return IMGCOORD;
		}

[+-]?{D}+:{D}+:{D}+"."? |
[+-]?{D}+:{D}+:{D}*"."{D}+ { // Sexagesimal
		  int ll = yyleng <(CTBUFSIZE-1) ? yyleng:(CTBUFSIZE-1);
		  strncpy(ctlval->str,yytext,ll);
	          ctlval->str[ll] = '\0';
		  return SEXSTR;
		}	

[+-]?{D}+h{D}+m{D}+"."?s |
[+-]?{D}+h{D}+m{D}*"."{D}+s { // HMS
		  int ll = yyleng <(CTBUFSIZE-1) ? yyleng:(CTBUFSIZE-1);
		  strncpy(ctlval->str,yytext,ll);
	          ctlval->str[ll] = '\0';
		  return HMSSTR;
		}	

[+-]?{D}+d{D}+m{D}+"."?s |
[+-]?{D}+d{D}+m{D}*"."{D}+s { // DMS
		  int ll = yyleng <(CTBUFSIZE-1) ? yyleng:(CTBUFSIZE-1);
		  strncpy(ctlval->str,yytext,ll);
	          ctlval->str[ll] = '\0';
		  return DMSSTR;
		}	

#({H}){3}       { // 8 bit Hex Color
		  int ll = yyleng <(CTBUFSIZE-1) ? yyleng:(CTBUFSIZE-1);
		  strncpy(ctlval->str,yytext,ll);
	          ctlval->str[ll] = '\0';
		  return STRING;
                }

#({H}){6}       { // 16 bit Hex Color
		  int ll = yyleng <(CTBUFSIZE-1) ? yyleng:(CTBUFSIZE-1);
		  strncpy(ctlval->str,yytext,ll);
	          ctlval->str[ll] = '\0';
		  return STRING;
                }

#({H}){12}      { // 32 bit Hex Color
		  int ll = yyleng <(CTBUFSIZE-1) ? yyleng:(CTBUFSIZE-1);
		  strncpy(ctlval->str,yytext,ll);
	          ctlval->str[ll] = '\0';
		  return STRING;
                }

\"[^\"\n]*\" | 
\'[^\'\n]*\'	{ // Quoted String
		  int ll = (yyleng-2)<(CTBUFSIZE-1) ? (yyleng-2):(CTBUFSIZE-1);
		  strncpy(ctlval->str,yytext+1,ll); // skip the " " 
	          ctlval->str[ll] = '\0'; // Remove the '"' 
		  return STRING;
		}

\{[^\}\n]*\} 	{ // Quoted String
		  int ll = (yyleng-2)<(CTBUFSIZE-1) ? (yyleng-2):(CTBUFSIZE-1);
		  strncpy(ctlval->str,yytext+1,ll); // skip the '{'
	          ctlval->str[ll] = '\0'; // Remove the '}'
		  return STRING;
		}

[0-9A-Za-z]+	{ // General String
		  int ll = yyleng <(CTBUFSIZE-1) ? yyleng:(CTBUFSIZE-1);
		  strncpy(ctlval->str,yytext,ll);
	          ctlval->str[ll] = '\0';
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

void ctDiscard(int doit)
{
  if (ctlexx)
    ctlexx->begin(DISCARD, doit);
}

void ctFlexLexer::begin(int which, int doit)
{
  BEGIN which;
  if (doit)
    yyless(0);
}
