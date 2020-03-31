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
     ANGDEGREE = 260,
     SEXSTR = 261,
     HMSSTR = 262,
     DMSSTR = 263,
     EOF_ = 264,
     AMPLIFIER_ = 265,
     B1950_ = 266,
     CCD_ = 267,
     DEBUG_ = 268,
     DETECTOR_ = 269,
     ECLIPTIC_ = 270,
     FK4_ = 271,
     FK5_ = 272,
     GALACTIC_ = 273,
     ICRS_ = 274,
     IMAGE_ = 275,
     J2000_ = 276,
     LOGICAL_ = 277,
     OFF_ = 278,
     ON_ = 279,
     PHYSICAL_ = 280,
     VERSION_ = 281,
     WCS_ = 282,
     WCSA_ = 283,
     WCSB_ = 284,
     WCSC_ = 285,
     WCSD_ = 286,
     WCSE_ = 287,
     WCSF_ = 288,
     WCSG_ = 289,
     WCSH_ = 290,
     WCSI_ = 291,
     WCSJ_ = 292,
     WCSK_ = 293,
     WCSL_ = 294,
     WCSM_ = 295,
     WCSN_ = 296,
     WCSO_ = 297,
     WCSP_ = 298,
     WCSQ_ = 299,
     WCSR_ = 300,
     WCSS_ = 301,
     WCST_ = 302,
     WCSU_ = 303,
     WCSV_ = 304,
     WCSW_ = 305,
     WCSX_ = 306,
     WCSY_ = 307,
     WCSZ_ = 308
   };
#endif
/* Tokens.  */
#define INT 258
#define REAL 259
#define ANGDEGREE 260
#define SEXSTR 261
#define HMSSTR 262
#define DMSSTR 263
#define EOF_ 264
#define AMPLIFIER_ 265
#define B1950_ 266
#define CCD_ 267
#define DEBUG_ 268
#define DETECTOR_ 269
#define ECLIPTIC_ 270
#define FK4_ 271
#define FK5_ 272
#define GALACTIC_ 273
#define ICRS_ 274
#define IMAGE_ 275
#define J2000_ 276
#define LOGICAL_ 277
#define OFF_ 278
#define ON_ 279
#define PHYSICAL_ 280
#define VERSION_ 281
#define WCS_ 282
#define WCSA_ 283
#define WCSB_ 284
#define WCSC_ 285
#define WCSD_ 286
#define WCSE_ 287
#define WCSF_ 288
#define WCSG_ 289
#define WCSH_ 290
#define WCSI_ 291
#define WCSJ_ 292
#define WCSK_ 293
#define WCSL_ 294
#define WCSM_ 295
#define WCSN_ 296
#define WCSO_ 297
#define WCSP_ 298
#define WCSQ_ 299
#define WCSR_ 300
#define WCSS_ 301
#define WCST_ 302
#define WCSU_ 303
#define WCSV_ 304
#define WCSW_ 305
#define WCSX_ 306
#define WCSY_ 307
#define WCSZ_ 308




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 45 "frame/xyparser.Y"
{
#define XYBUFSIZE 2048
  double real;
  int integer;
  char str[XYBUFSIZE];
  double vector[3];
}
/* Line 1529 of yacc.c.  */
#line 163 "frame/xyparser.H"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



