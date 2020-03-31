/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     REAL = 259,
     STRING = 260,
     ANGDEGREE = 261,
     PHYCOORD = 262,
     IMGCOORD = 263,
     SEXSTR = 264,
     HMSSTR = 265,
     DMSSTR = 266,
     EOF_ = 267,
     AMPLIFIER_ = 268,
     B1950_ = 269,
     COLOR_ = 270,
     DASH_ = 271,
     DASHLIST_ = 272,
     DEBUG_ = 273,
     DETECTOR_ = 274,
     ECLIPTIC_ = 275,
     FALSE_ = 276,
     FK4_ = 277,
     FK5_ = 278,
     GALACTIC_ = 279,
     GLOBAL_ = 280,
     ICRS_ = 281,
     IMAGE_ = 282,
     J2000_ = 283,
     LEVEL_ = 284,
     LEVELS_ = 285,
     LINEAR_ = 286,
     N_ = 287,
     NO_ = 288,
     OFF_ = 289,
     ON_ = 290,
     PHYSICAL_ = 291,
     TRUE_ = 292,
     VERSION_ = 293,
     WCS_ = 294,
     WCSA_ = 295,
     WCSB_ = 296,
     WCSC_ = 297,
     WCSD_ = 298,
     WCSE_ = 299,
     WCSF_ = 300,
     WCSG_ = 301,
     WCSH_ = 302,
     WCSI_ = 303,
     WCSJ_ = 304,
     WCSK_ = 305,
     WCSL_ = 306,
     WCSM_ = 307,
     WCSN_ = 308,
     WCSO_ = 309,
     WCSP_ = 310,
     WCSQ_ = 311,
     WCSR_ = 312,
     WCSS_ = 313,
     WCST_ = 314,
     WCSU_ = 315,
     WCSV_ = 316,
     WCSW_ = 317,
     WCSX_ = 318,
     WCSY_ = 319,
     WCSZ_ = 320,
     WIDTH_ = 321,
     Y_ = 322,
     YES_ = 323
   };
#endif
/* Tokens.  */
#define INT 258
#define REAL 259
#define STRING 260
#define ANGDEGREE 261
#define PHYCOORD 262
#define IMGCOORD 263
#define SEXSTR 264
#define HMSSTR 265
#define DMSSTR 266
#define EOF_ 267
#define AMPLIFIER_ 268
#define B1950_ 269
#define COLOR_ 270
#define DASH_ 271
#define DASHLIST_ 272
#define DEBUG_ 273
#define DETECTOR_ 274
#define ECLIPTIC_ 275
#define FALSE_ 276
#define FK4_ 277
#define FK5_ 278
#define GALACTIC_ 279
#define GLOBAL_ 280
#define ICRS_ 281
#define IMAGE_ 282
#define J2000_ 283
#define LEVEL_ 284
#define LEVELS_ 285
#define LINEAR_ 286
#define N_ 287
#define NO_ 288
#define OFF_ 289
#define ON_ 290
#define PHYSICAL_ 291
#define TRUE_ 292
#define VERSION_ 293
#define WCS_ 294
#define WCSA_ 295
#define WCSB_ 296
#define WCSC_ 297
#define WCSD_ 298
#define WCSE_ 299
#define WCSF_ 300
#define WCSG_ 301
#define WCSH_ 302
#define WCSI_ 303
#define WCSJ_ 304
#define WCSK_ 305
#define WCSL_ 306
#define WCSM_ 307
#define WCSN_ 308
#define WCSO_ 309
#define WCSP_ 310
#define WCSQ_ 311
#define WCSR_ 312
#define WCSS_ 313
#define WCST_ 314
#define WCSU_ 315
#define WCSV_ 316
#define WCSW_ 317
#define WCSX_ 318
#define WCSY_ 319
#define WCSZ_ 320
#define WIDTH_ 321
#define Y_ 322
#define YES_ 323




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 56 "frame/contourparser.Y"
{
#define CTBUFSIZE 2048
  double real;
  int integer;
  char str[CTBUFSIZE];
  double vector[3];
}
/* Line 1529 of yacc.c.  */
#line 193 "frame/contourparser.H"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



