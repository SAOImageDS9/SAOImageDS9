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
     STRING = 258,
     HEADER = 259,
     DEBUG_ = 260,
     ON_ = 261,
     OFF_ = 262,
     METHODCALL_ = 263,
     _METHODCALL_ = 264,
     METHODRESPONSE_ = 265,
     _METHODRESPONSE_ = 266,
     METHODNAME_ = 267,
     _METHODNAME_ = 268,
     FAULT_ = 269,
     _FAULT_ = 270,
     PARAMS_ = 271,
     _PARAMS_ = 272,
     PARAM_ = 273,
     _PARAM_ = 274,
     VALUE_ = 275,
     _VALUE_ = 276,
     INTEGER_ = 277,
     _INTEGER_ = 278,
     STRUCT_ = 279,
     _STRUCT_ = 280,
     MEMBERS_ = 281,
     _MEMBERS_ = 282,
     MEMBER_ = 283,
     _MEMBER_ = 284,
     NAME_ = 285,
     _NAME_ = 286,
     ARRAY_ = 287,
     _ARRAY_ = 288,
     DATA_ = 289,
     _DATA_ = 290
   };
#endif
/* Tokens.  */
#define STRING 258
#define HEADER 259
#define DEBUG_ 260
#define ON_ 261
#define OFF_ 262
#define METHODCALL_ 263
#define _METHODCALL_ 264
#define METHODRESPONSE_ 265
#define _METHODRESPONSE_ 266
#define METHODNAME_ 267
#define _METHODNAME_ 268
#define FAULT_ 269
#define _FAULT_ 270
#define PARAMS_ 271
#define _PARAMS_ 272
#define PARAM_ 273
#define _PARAM_ 274
#define VALUE_ 275
#define _VALUE_ 276
#define INTEGER_ 277
#define _INTEGER_ 278
#define STRUCT_ 279
#define _STRUCT_ 280
#define MEMBERS_ 281
#define _MEMBERS_ 282
#define MEMBER_ 283
#define _MEMBER_ 284
#define NAME_ 285
#define _NAME_ 286
#define ARRAY_ 287
#define _ARRAY_ 288
#define DATA_ 289
#define _DATA_ 290




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 30 "parser.Y"
{
  char* str;
}
/* Line 1529 of yacc.c.  */
#line 123 "parser.H"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



