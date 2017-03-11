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
     EOF_ = 261,
     ANNULUS_ = 262,
     BOX_ = 263,
     CIRCLE_ = 264,
     DEBUG_ = 265,
     ELLIPSE_ = 266,
     N_ = 267,
     OFF_ = 268,
     ON_ = 269,
     POINT_ = 270,
     POLYGON_ = 271,
     ROTBOX_ = 272,
     VERSION_ = 273
   };
#endif
/* Tokens.  */
#define INT 258
#define REAL 259
#define STRING 260
#define EOF_ 261
#define ANNULUS_ 262
#define BOX_ 263
#define CIRCLE_ 264
#define DEBUG_ 265
#define ELLIPSE_ 266
#define N_ 267
#define OFF_ 268
#define ON_ 269
#define POINT_ 270
#define POLYGON_ 271
#define ROTBOX_ 272
#define VERSION_ 273




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 60 "frame/saoparser.Y"
{
#define SAOBUFSIZE 2048
  double real;
  int integer;
  char str[SAOBUFSIZE];
  double vector[3];
}
/* Line 1529 of yacc.c.  */
#line 93 "frame/saoparser.H"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



