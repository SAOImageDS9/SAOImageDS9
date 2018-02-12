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
  #include "nrrdparser.H"

  extern YYSTYPE* nrrdlval;
  extern nrrdFlexLexer* nrrdlexx;
%}

%x DISCARD

D   [0-9]
E   [Ee][+-]?{D}+

/* rules */

%%

<DISCARD>[\n]	{ // special case-- #\n
		  BEGIN INITIAL;
		  yyless(0);             // put back the terminator
		  strcpy(nrrdlval->str,""); // feed a blank string
		  return STRING;
		}

<DISCARD>[^\n]* {  // Discard reset of line
		  BEGIN INITIAL;
		  int ll = yyleng <(NRRDPARSERSIZE-1) ? yyleng:(NRRDPARSERSIZE-1);
		  strncpy(nrrdlval->str,yytext,ll);
	          nrrdlval->str[ll] = '\0';
		  return STRING;
		}

debug           {return DEBUG_;}
on              {return ON_;}
off             {return OFF_;}

NRRD0001         {return NRRD0001_;}
NRRD0002         {return NRRD0002_;}
NRRD0003         {return NRRD0003_;}
NRRD0004         {return NRRD0004_;}
NRRD0005         {return NRRD0005_;}

data            {return DATA_;}
file            {return FILE_;}

space           {return SPACE_;}
units           {return UNITS_;}
dimentions      {return DIMENSIONS_;}
origin          {return ORIGIN_;}
directions      {return DIRECTIONS_;}

dimension       {return DIMENSION_;}

type            {return TYPE_;}
signed          {return SIGNED_;}
unsigned        {return UNSIGNED_;}
char            {return CHAR_;}
int8            {return INT8_;}
int8_t          {return INT8_T_;}
uchar           {return UCHAR_;}
uint8           {return UINT8_;}
uint8_t         {return UINT8_T_;}
short           {return SHORT_;}
int             {return INT_;}
int16           {return INT16_;}
int16_t         {return INT16_T_;}
ushort          {return USHORT_;}
unint16         {return UINT16_;}
unint16_t       {return UINT16_T_;}
int32           {return INT32_;}
int32_t         {return INT32_T_;}
uint            {return UINT_;}
uint32          {return UINT32_;}
uint32_t        {return UINT32_T_;}
long            {return LONG_;}
longlong        {return LONGLONG_;}
int64           {return INT64_;}
int64_t         {return INT64_T_;}
unlonglong      {return ULONGLONG_;}
unint64         {return UINT64_;}
unint64_t       {return UINT64_T_;}
float           {return FLOAT_;}
double          {return DOUBLE_;}

block           {return BLOCK_;}
size            {return SIZE_;}
blocksize       {return BLOCKSIZE_;}

encoding        {return ENCODING_;}
raw             {return RAW_;}
txt             {return TXT_;}
text            {return TEXT_;}
ascii           {return ASCII_;}
hex             {return HEX_;}
gz              {return GZ_;}
gzip            {return GZIP_;}
bz2             {return BZ2_;}
bzip2           {return BZIP2_;}

endian          {return ENDIAN_;}
big             {return BIG_;}
little          {return LITTLE_;}

content         {return CONTENT_;}

old             {return OLD_;}
min             {return MIN_;}
oldmin          {return OLDMIN_;}
max             {return MAX_;}
oldmax          {return OLDMAX_;}

skip            {return SKIP_;}
line            {return LINE_;}
lineskip        {return LINESKIP_;}
byte            {return BYTE_;}
byteskip        {return BYTESKIP_;}

number          {return NUMBER_;}

sample          {return SAMPLE_;}
sampleunits     {return SAMPLEUNITS_;}

sizes           {return SIZES_;}
spacings        {return SPACINGS_;}
thickness       {return THICKNESSES_;}
axis            {return AXIS_;}
mins            {return MINS_;}
axismins        {return AXISMINS_;}
maxs            {return MAXS_;}
axismaxs        {return AXISMAXS_;}
centers         {return CENTERS_;}
centerings      {return CENTERINGS_;}
cell            {return CELL_;}
node            {return NODE_;}
none            {return NONE_;}
labels          {return LABELS_;}
kinds           {return KINDS_;}
domains         {return DOMAINS_;}

[+-]?{D}+	{ // Integer
		  nrrdlval->integer = atoi(yytext);
		  return INT;
		}

[+-]?{D}+"."?({E})? |
[+-]?{D}*"."{D}+({E})? { // Real Number
		  nrrdlval->real = atof(yytext);
		  return REAL;
		}


\{[^\}\n]*\} 	{ // Quoted String
		  int ll = (yyleng-2)<(NRRDPARSERSIZE-1) ? (yyleng-2):(NRRDPARSERSIZE-1);
		  strncpy(nrrdlval->str,yytext+1,ll); // skip the '{'
	          nrrdlval->str[ll] = '\0'; // Remove the '}'
		  return STRING;
		}

[0-9A-Za-z]+	{ // General String
		  int ll = yyleng <(NRRDPARSERSIZE-1) ? yyleng:(NRRDPARSERSIZE-1);
		  strncpy(nrrdlval->str,yytext,ll);
	          nrrdlval->str[ll] = '\0';
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

void nrrdDiscard(int doit)
{
  if (nrrdlexx)
    nrrdlexx->begin(DISCARD, doit);
}

void nrrdFlexLexer::begin(int which, int doit)
{
  BEGIN which;
  if (doit)
    yyless(0);
}
