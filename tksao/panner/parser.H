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
     BBOX_ = 260,
     BEGIN_ = 261,
     CLEAR_ = 262,
     COMPASS_ = 263,
     DEBUG_ = 264,
     END_ = 265,
     FALSE_ = 266,
     GET_ = 267,
     HEIGHT_ = 268,
     HIDE_ = 269,
     HIGHLITE_ = 270,
     IMAGE_ = 271,
     INVALID_ = 272,
     MOTION_ = 273,
     N_ = 274,
     NO_ = 275,
     OFF_ = 276,
     ON_ = 277,
     PAN_ = 278,
     RESET_ = 279,
     SHOW_ = 280,
     SIZE_ = 281,
     TRUE_ = 282,
     TO_ = 283,
     UPDATE_ = 284,
     VERSION_ = 285,
     WARP_ = 286,
     WCS_ = 287,
     WIDTH_ = 288,
     Y_ = 289,
     YES_ = 290
   };
#endif
/* Tokens.  */
#define INT 258
#define REAL 259
#define BBOX_ 260
#define BEGIN_ 261
#define CLEAR_ 262
#define COMPASS_ 263
#define DEBUG_ 264
#define END_ 265
#define FALSE_ 266
#define GET_ 267
#define HEIGHT_ 268
#define HIDE_ 269
#define HIGHLITE_ 270
#define IMAGE_ 271
#define INVALID_ 272
#define MOTION_ 273
#define N_ 274
#define NO_ 275
#define OFF_ 276
#define ON_ 277
#define PAN_ 278
#define RESET_ 279
#define SHOW_ 280
#define SIZE_ 281
#define TRUE_ 282
#define TO_ 283
#define UPDATE_ 284
#define VERSION_ 285
#define WARP_ 286
#define WCS_ 287
#define WIDTH_ 288
#define Y_ 289
#define YES_ 290




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 24 "panner/parser.Y"
{
  float real;
  int integer;
  unsigned long ptr;
  char str[1024];
}
/* Line 1529 of yacc.c.  */
#line 126 "panner/parser.H"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



