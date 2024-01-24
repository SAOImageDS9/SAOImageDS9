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
     STRING = 259,
     HEADER = 260,
     DEBUG_ = 261,
     ON_ = 262,
     OFF_ = 263,
     METHODCALL_ = 264,
     _METHODCALL_ = 265,
     METHODRESPONSE_ = 266,
     _METHODRESPONSE_ = 267,
     METHODNAME_ = 268,
     _METHODNAME_ = 269,
     FAULT_ = 270,
     _FAULT_ = 271,
     PARAMS_ = 272,
     _PARAMS_ = 273,
     PARAM_ = 274,
     _PARAM_ = 275,
     VALUE_ = 276,
     _VALUE_ = 277,
     INTEGER_ = 278,
     _INTEGER_ = 279,
     STRUCT_ = 280,
     _STRUCT_ = 281,
     MEMBER_ = 282,
     _MEMBER_ = 283,
     NAME_ = 284,
     _NAME_ = 285,
     ARRAY_ = 286,
     _ARRAY_ = 287,
     DATA_ = 288,
     _DATA_ = 289
   };
#endif
/* Tokens.  */
#define INT 258
#define STRING 259
#define HEADER 260
#define DEBUG_ 261
#define ON_ 262
#define OFF_ 263
#define METHODCALL_ 264
#define _METHODCALL_ 265
#define METHODRESPONSE_ 266
#define _METHODRESPONSE_ 267
#define METHODNAME_ 268
#define _METHODNAME_ 269
#define FAULT_ 270
#define _FAULT_ 271
#define PARAMS_ 272
#define _PARAMS_ 273
#define PARAM_ 274
#define _PARAM_ 275
#define VALUE_ 276
#define _VALUE_ 277
#define INTEGER_ 278
#define _INTEGER_ 279
#define STRUCT_ 280
#define _STRUCT_ 281
#define MEMBER_ 282
#define _MEMBER_ 283
#define NAME_ 284
#define _NAME_ 285
#define ARRAY_ 286
#define _ARRAY_ 287
#define DATA_ 288
#define _DATA_ 289




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 24 "parser.Y"
{
  int integer;
  char header[1024];
  char str[8192];
}
/* Line 1529 of yacc.c.  */
#line 123 "parser.H"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



