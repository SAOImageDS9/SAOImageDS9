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
  #include "xyparser.H"

  extern YYSTYPE* xylval;
%}

D   [0-9]
E   [Ee][+-]?{D}+

/* rules */

%%

amplifier	{return AMPLIFIER_;}
b1950		{return B1950_;}
ccd		{return CCD_;}
debug		{return DEBUG_;}
detector	{return DETECTOR_;}
ecliptic	{return ECLIPTIC_;}
fk4		{return FK4_;}
fk5		{return FK5_;}
galactic	{return GALACTIC_;}
icrs		{return ICRS_;}
image		{return IMAGE_;}
j2000		{return J2000_;}
logical		{return LOGICAL_;}
off		{return OFF_;}
on		{return ON_;}
physical	{return PHYSICAL_;}
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

[+-]?{D}+	{ // Integer
		  xylval->integer = atoi(yytext);
		  return INT;
		}

[+-]?{D}+"."?({E})? |
[+-]?{D}*"."{D}+({E})? { // Real Number
		  xylval->real = atof(yytext);
		  return REAL;
		}

[+-]?{D}+:{D}+:{D}+"."? |
[+-]?{D}+:{D}+:{D}*"."{D}+ { // Sexagesimal
		  int ll = yyleng <(XYBUFSIZE-1) ? yyleng:(XYBUFSIZE-1);
		  strncpy(xylval->str,yytext,ll);
	          xylval->str[ll] = '\0';
		  return SEXSTR;
		}	

[+-]?{D}+h{D}+m{D}+"."?s |
[+-]?{D}+h{D}+m{D}*"."{D}+s { // HMS
		  int ll = yyleng <(XYBUFSIZE-1) ? yyleng:(XYBUFSIZE-1);
		  strncpy(xylval->str,yytext,ll);
	          xylval->str[ll] = '\0';
		  return HMSSTR;
		}	

[+-]?{D}+d{D}+m{D}+"."?s |
[+-]?{D}+d{D}+m{D}*"."{D}+s { // DMS
		  int ll = yyleng <(XYBUFSIZE-1) ? yyleng:(XYBUFSIZE-1);
		  strncpy(xylval->str,yytext,ll);
	          xylval->str[ll] = '\0';
		  return DMSSTR;
		}	

#.*		{ // comment, eat it
		}

\r\n		{ // windows line feed
		  return '\n';
		}

[\n;,]		{ // special chars
		  return yytext[0];
		}

<<EOF>>		{ // eof
		  return EOF_;
		}

.		{ // Else, eat it
		}

%%
