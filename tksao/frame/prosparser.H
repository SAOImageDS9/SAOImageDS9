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
     ARCMINUTE = 262,
     ARCSECOND = 263,
     ANGRADIAN = 264,
     SEXSTR = 265,
     HMSSTR = 266,
     DMSSTR = 267,
     EOF_ = 268,
     ANNULUS_ = 269,
     B1950_ = 270,
     BOX_ = 271,
     CIRCLE_ = 272,
     DEBUG_ = 273,
     ECLIPTIC_ = 274,
     ELLIPSE_ = 275,
     EQUATORIAL_ = 276,
     GALACTIC_ = 277,
     J2000_ = 278,
     LOGICAL_ = 279,
     N_ = 280,
     OFF_ = 281,
     ON_ = 282,
     PHYSICAL_ = 283,
     POINT_ = 284,
     POLYGON_ = 285,
     ROTBOX_ = 286,
     VERSION_ = 287
   };
#endif
/* Tokens.  */
#define INT 258
#define REAL 259
#define STRING 260
#define ANGDEGREE 261
#define ARCMINUTE 262
#define ARCSECOND 263
#define ANGRADIAN 264
#define SEXSTR 265
#define HMSSTR 266
#define DMSSTR 267
#define EOF_ 268
#define ANNULUS_ 269
#define B1950_ 270
#define BOX_ 271
#define CIRCLE_ 272
#define DEBUG_ 273
#define ECLIPTIC_ 274
#define ELLIPSE_ 275
#define EQUATORIAL_ 276
#define GALACTIC_ 277
#define J2000_ 278
#define LOGICAL_ 279
#define N_ 280
#define OFF_ 281
#define ON_ 282
#define PHYSICAL_ 283
#define POINT_ 284
#define POLYGON_ 285
#define ROTBOX_ 286
#define VERSION_ 287




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 66 "frame/prosparser.Y"
{
#define PROSBUFSIZE 2048
  double real;
  int integer;
  char str[PROSBUFSIZE];
  double vector[3];
}
/* Line 1529 of yacc.c.  */
#line 121 "frame/prosparser.H"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



