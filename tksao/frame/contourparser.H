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
     FK4_NO_E_ = 278,
     FK5_ = 279,
     GALACTIC_ = 280,
     GLOBAL_ = 281,
     HELIOECLIPTIC_ = 282,
     ICRS_ = 283,
     IMAGE_ = 284,
     J2000_ = 285,
     LEVEL_ = 286,
     LEVELS_ = 287,
     LINEAR_ = 288,
     N_ = 289,
     NO_ = 290,
     OFF_ = 291,
     ON_ = 292,
     PHYSICAL_ = 293,
     SUPERGALACTIC_ = 294,
     TRUE_ = 295,
     VERSION_ = 296,
     WCS_ = 297,
     WCSA_ = 298,
     WCSB_ = 299,
     WCSC_ = 300,
     WCSD_ = 301,
     WCSE_ = 302,
     WCSF_ = 303,
     WCSG_ = 304,
     WCSH_ = 305,
     WCSI_ = 306,
     WCSJ_ = 307,
     WCSK_ = 308,
     WCSL_ = 309,
     WCSM_ = 310,
     WCSN_ = 311,
     WCSO_ = 312,
     WCSP_ = 313,
     WCSQ_ = 314,
     WCSR_ = 315,
     WCSS_ = 316,
     WCST_ = 317,
     WCSU_ = 318,
     WCSV_ = 319,
     WCSW_ = 320,
     WCSX_ = 321,
     WCSY_ = 322,
     WCSZ_ = 323,
     WIDTH_ = 324,
     Y_ = 325,
     YES_ = 326
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
#define FK4_NO_E_ 278
#define FK5_ 279
#define GALACTIC_ 280
#define GLOBAL_ 281
#define HELIOECLIPTIC_ 282
#define ICRS_ 283
#define IMAGE_ 284
#define J2000_ 285
#define LEVEL_ 286
#define LEVELS_ 287
#define LINEAR_ 288
#define N_ 289
#define NO_ 290
#define OFF_ 291
#define ON_ 292
#define PHYSICAL_ 293
#define SUPERGALACTIC_ 294
#define TRUE_ 295
#define VERSION_ 296
#define WCS_ 297
#define WCSA_ 298
#define WCSB_ 299
#define WCSC_ 300
#define WCSD_ 301
#define WCSE_ 302
#define WCSF_ 303
#define WCSG_ 304
#define WCSH_ 305
#define WCSI_ 306
#define WCSJ_ 307
#define WCSK_ 308
#define WCSL_ 309
#define WCSM_ 310
#define WCSN_ 311
#define WCSO_ 312
#define WCSP_ 313
#define WCSQ_ 314
#define WCSR_ 315
#define WCSS_ 316
#define WCST_ 317
#define WCSU_ 318
#define WCSV_ 319
#define WCSW_ 320
#define WCSX_ 321
#define WCSY_ 322
#define WCSZ_ 323
#define WIDTH_ 324
#define Y_ 325
#define YES_ 326




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 54 "frame/contourparser.Y"
{
#define CTBUFSIZE 2048
  double real;
  int integer;
  char str[CTBUFSIZE];
  double vector[3];
}
/* Line 1529 of yacc.c.  */
#line 199 "frame/contourparser.H"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



