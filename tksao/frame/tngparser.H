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
     SEXSTR = 262,
     EOF_ = 263,
     B1950_ = 264,
     BACKGROUND_ = 265,
     BOX_ = 266,
     BLACK_ = 267,
     BLUE_ = 268,
     CIRCLE_ = 269,
     CYAN_ = 270,
     DATE_ = 271,
     DEBUG_ = 272,
     DEGREES_ = 273,
     ECLIPTIC_ = 274,
     ELLIPSE_ = 275,
     FILENAME_ = 276,
     FK4_ = 277,
     FK4_NO_E_ = 278,
     FK5_ = 279,
     FORMAT_ = 280,
     GALACTIC_ = 281,
     GREEN_ = 282,
     HELIOECLIPTIC_ = 283,
     HMS_ = 284,
     ICRS_ = 285,
     J2000_ = 286,
     LINE_ = 287,
     MAGENTA_ = 288,
     OFF_ = 289,
     ON_ = 290,
     PHYSICAL_ = 291,
     PIXELS_ = 292,
     POINT_ = 293,
     POLYGON_ = 294,
     RED_ = 295,
     SOURCE_ = 296,
     SUPERGALACTIC_ = 297,
     TEXT_ = 298,
     VERSION_ = 299,
     WHITE_ = 300,
     YELLOW_ = 301
   };
#endif
/* Tokens.  */
#define INT 258
#define REAL 259
#define STRING 260
#define ANGDEGREE 261
#define SEXSTR 262
#define EOF_ 263
#define B1950_ 264
#define BACKGROUND_ 265
#define BOX_ 266
#define BLACK_ 267
#define BLUE_ 268
#define CIRCLE_ 269
#define CYAN_ 270
#define DATE_ 271
#define DEBUG_ 272
#define DEGREES_ 273
#define ECLIPTIC_ 274
#define ELLIPSE_ 275
#define FILENAME_ 276
#define FK4_ 277
#define FK4_NO_E_ 278
#define FK5_ 279
#define FORMAT_ 280
#define GALACTIC_ 281
#define GREEN_ 282
#define HELIOECLIPTIC_ 283
#define HMS_ 284
#define ICRS_ 285
#define J2000_ 286
#define LINE_ 287
#define MAGENTA_ 288
#define OFF_ 289
#define ON_ 290
#define PHYSICAL_ 291
#define PIXELS_ 292
#define POINT_ 293
#define POLYGON_ 294
#define RED_ 295
#define SOURCE_ 296
#define SUPERGALACTIC_ 297
#define TEXT_ 298
#define VERSION_ 299
#define WHITE_ 300
#define YELLOW_ 301




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 62 "frame/tngparser.Y"
{
#define TNGBUFSIZE 2048
  double real;
  int integer;
  char str[TNGBUFSIZE];
  double vector[3];
}
/* Line 1529 of yacc.c.  */
#line 149 "frame/tngparser.H"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



