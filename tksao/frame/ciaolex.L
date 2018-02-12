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
  #include "ciaoparser.H"

  extern YYSTYPE* ciaolval;
%}

D   [0-9]
E   [Ee][+-]?{D}+

/* rules */

%%

annulus			{return ANNULUS_;}
box			{return BOX_;}
cir			{return CIRCLE_;}
circle			{return CIRCLE_;}
debug			{return DEBUG_;}
ell			{return ELLIPSE_;}
ellipse			{return ELLIPSE_;}
field                   {return FIELD_;}
off			{return OFF_;}
on			{return ON_;}
pie			{return PIE_;}
poi			{return POINT_;}
point			{return POINT_;}
poly			{return POLYGON_;}
polygon			{return POLYGON_;}
rect                    {return RECTANGLE_;}
rectangle               {return RECTANGLE_;}
region                  {return REGION_;}
rotbox			{return ROTBOX_;}
sector                  {return SECTOR_;}
version			{return VERSION_;}

[+-]?{D}+	{ // Integer
		  ciaolval->integer = atoi(yytext);
		  return INT;
		}

[+-]?{D}+"."?({E})? |
[+-]?{D}*"."{D}+({E})? { // Real Number
		  ciaolval->real = atof(yytext);
		  return REAL;
		}

[+-]?{D}+"."?d |
[+-]?{D}*"."{D}+d { // degrees
		  yytext[yyleng-1] = '\0';
		  ciaolval->real = atof(yytext);
		  return ANGDEGREE;
		}	

{D}+"."?' |
{D}*"."{D}+' |
[+-]?{D}+"."?({E})?' |
[+-]?{D}*"."{D}+({E})?' { // minutes of arc
		  yytext[yyleng-1] = '\0';
		  ciaolval->real = atof(yytext);
		  return ARCMINUTE;
		}	

{D}+"."?\" |
{D}*"."{D}+\" |
[+-]?{D}+"."?({E})?\" |
[+-]?{D}*"."{D}+({E})?\" { // seconds of arc
		  yytext[yyleng-1] = '\0';
		  ciaolval->real = atof(yytext);
		  return ARCSECOND;
		}

{D}+"."?\'\' |
{D}*"."{D}+\'\'	|
[+-]?{D}+"."?({E})?\'\' |
[+-]?{D}*"."{D}+({E})?\'\' { // seconds of arc
		  yytext[yyleng-1] = '\0';
		  ciaolval->real = atof(yytext);
		  return ARCSECOND;
		}

[+-]?{D}+:{D}+:{D}+"."? |
[+-]?{D}+:{D}+:{D}*"."{D}+ { // Sexagesimal
		  int ll = yyleng <(CIAOBUFSIZE-1) ? yyleng:(CIAOBUFSIZE-1);
		  strncpy(ciaolval->str,yytext,ll);
	          ciaolval->str[ll] = '\0';
		  return SEXSTR;
		}	

[+-]?{D}+h{D}+m{D}+"."?s |
[+-]?{D}+h{D}+m{D}*"."{D}+s { // HMS
		  int ll = yyleng <(CIAOBUFSIZE-1) ? yyleng:(CIAOBUFSIZE-1);
		  strncpy(ciaolval->str,yytext,ll);
	          ciaolval->str[ll] = '\0';
		  return HMSSTR;
		}	

[+-]?{D}+d{D}+m{D}+"."?s |
[+-]?{D}+d{D}+m{D}*"."{D}+s { // DMS
		  int ll = yyleng <(CIAOBUFSIZE-1) ? yyleng:(CIAOBUFSIZE-1);
		  strncpy(ciaolval->str,yytext,ll);
	          ciaolval->str[ll] = '\0';
		  return DMSSTR;
		}	

#.*		{ // comment, eat it
		}

[ \t]+		{ // White Spaces
		} 

\\n		{ // fake line feed
		  return '\n';
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
