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
     BBOX_ = 259,
     CLEAR_ = 260,
     DEBUG_ = 261,
     FALSE_ = 262,
     GET_ = 263,
     HEIGHT_ = 264,
     HIDE_ = 265,
     OFF_ = 266,
     ON_ = 267,
     N_ = 268,
     NO_ = 269,
     RESET_ = 270,
     SHOW_ = 271,
     TRUE_ = 272,
     UPDATE_ = 273,
     VERSION_ = 274,
     WIDTH_ = 275,
     Y_ = 276,
     YES_ = 277
   };
#endif
/* Tokens.  */
#define INT 258
#define BBOX_ 259
#define CLEAR_ 260
#define DEBUG_ 261
#define FALSE_ 262
#define GET_ 263
#define HEIGHT_ 264
#define HIDE_ 265
#define OFF_ 266
#define ON_ 267
#define N_ 268
#define NO_ 269
#define RESET_ 270
#define SHOW_ 271
#define TRUE_ 272
#define UPDATE_ 273
#define VERSION_ 274
#define WIDTH_ 275
#define Y_ 276
#define YES_ 277




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 24 "magnifier/parser.Y"
{
  float real;
  int integer;
  unsigned long ptr;
  char str[1024];
}
/* Line 1529 of yacc.c.  */
#line 100 "magnifier/parser.H"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



