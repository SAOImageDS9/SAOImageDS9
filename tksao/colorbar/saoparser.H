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
     REAL = 258,
     INT = 259,
     STRING = 260,
     EOF_ = 261,
     BLUE_ = 262,
     DEBUG_ = 263,
     GAMMA_ = 264,
     GREEN_ = 265,
     FALSE_ = 266,
     NO_ = 267,
     OFF_ = 268,
     ON_ = 269,
     PSEUDOCOLOR_ = 270,
     RED_ = 271,
     TRUE_ = 272,
     YES_ = 273
   };
#endif
/* Tokens.  */
#define REAL 258
#define INT 259
#define STRING 260
#define EOF_ 261
#define BLUE_ 262
#define DEBUG_ 263
#define GAMMA_ 264
#define GREEN_ 265
#define FALSE_ 266
#define NO_ 267
#define OFF_ 268
#define ON_ 269
#define PSEUDOCOLOR_ 270
#define RED_ 271
#define TRUE_ 272
#define YES_ 273




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 29 "colorbar/saoparser.Y"
{
#define SAOBUFSIZE 4096
  char str[SAOBUFSIZE];
  int integer;
  float real;
}
/* Line 1529 of yacc.c.  */
#line 92 "colorbar/saoparser.H"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



