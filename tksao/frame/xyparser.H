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
     FK4_NO_E_ = 272,
     FK5_ = 273,
     GALACTIC_ = 274,
     HELIOECLIPTIC_ = 275,
     ICRS_ = 276,
     IMAGE_ = 277,
     J2000_ = 278,
     LOGICAL_ = 279,
     OFF_ = 280,
     ON_ = 281,
     PHYSICAL_ = 282,
     SUPERGALACTIC_ = 283,
     VERSION_ = 284,
     WCS_ = 285,
     WCSA_ = 286,
     WCSB_ = 287,
     WCSC_ = 288,
     WCSD_ = 289,
     WCSE_ = 290,
     WCSF_ = 291,
     WCSG_ = 292,
     WCSH_ = 293,
     WCSI_ = 294,
     WCSJ_ = 295,
     WCSK_ = 296,
     WCSL_ = 297,
     WCSM_ = 298,
     WCSN_ = 299,
     WCSO_ = 300,
     WCSP_ = 301,
     WCSQ_ = 302,
     WCSR_ = 303,
     WCSS_ = 304,
     WCST_ = 305,
     WCSU_ = 306,
     WCSV_ = 307,
     WCSW_ = 308,
     WCSX_ = 309,
     WCSY_ = 310,
     WCSZ_ = 311
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
#define FK4_NO_E_ 272
#define FK5_ 273
#define GALACTIC_ 274
#define HELIOECLIPTIC_ 275
#define ICRS_ 276
#define IMAGE_ 277
#define J2000_ 278
#define LOGICAL_ 279
#define OFF_ 280
#define ON_ 281
#define PHYSICAL_ 282
#define SUPERGALACTIC_ 283
#define VERSION_ 284
#define WCS_ 285
#define WCSA_ 286
#define WCSB_ 287
#define WCSC_ 288
#define WCSD_ 289
#define WCSE_ 290
#define WCSF_ 291
#define WCSG_ 292
#define WCSH_ 293
#define WCSI_ 294
#define WCSJ_ 295
#define WCSK_ 296
#define WCSL_ 297
#define WCSM_ 298
#define WCSN_ 299
#define WCSO_ 300
#define WCSP_ 301
#define WCSQ_ 302
#define WCSR_ 303
#define WCSS_ 304
#define WCST_ 305
#define WCSU_ 306
#define WCSV_ 307
#define WCSW_ 308
#define WCSX_ 309
#define WCSY_ 310
#define WCSZ_ 311




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
#line 169 "frame/xyparser.H"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



