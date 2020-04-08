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
     ARCH_ = 260,
     ARRAY_ = 261,
     BIG_ = 262,
     BIGENDIAN_ = 263,
     BIN_ = 264,
     BINKEY_ = 265,
     BINCOL_ = 266,
     BITPIX_ = 267,
     COL_ = 268,
     DIM_ = 269,
     DIMS_ = 270,
     ECLIPTIC_ = 271,
     ENDIAN_ = 272,
     EQUATORIAL_ = 273,
     GALACTIC_ = 274,
     KEY_ = 275,
     LAYOUT_ = 276,
     LITTLE_ = 277,
     LITTLEENDIAN_ = 278,
     NESTED_ = 279,
     NORTH_ = 280,
     ORDER_ = 281,
     QUAD_ = 282,
     RING_ = 283,
     SKIP_ = 284,
     SOUTH_ = 285,
     SYSTEM_ = 286,
     UNKNOWN_ = 287,
     XDIM_ = 288,
     YDIM_ = 289,
     ZDIM_ = 290
   };
#endif
/* Tokens.  */
#define INT 258
#define STRING 259
#define ARCH_ 260
#define ARRAY_ 261
#define BIG_ 262
#define BIGENDIAN_ 263
#define BIN_ 264
#define BINKEY_ 265
#define BINCOL_ 266
#define BITPIX_ 267
#define COL_ 268
#define DIM_ 269
#define DIMS_ 270
#define ECLIPTIC_ 271
#define ENDIAN_ 272
#define EQUATORIAL_ 273
#define GALACTIC_ 274
#define KEY_ 275
#define LAYOUT_ 276
#define LITTLE_ 277
#define LITTLEENDIAN_ 278
#define NESTED_ 279
#define NORTH_ 280
#define ORDER_ 281
#define QUAD_ 282
#define RING_ 283
#define SKIP_ 284
#define SOUTH_ 285
#define SYSTEM_ 286
#define UNKNOWN_ 287
#define XDIM_ 288
#define YDIM_ 289
#define ZDIM_ 290




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 32 "parser.Y"
{
  float real;
  int integer;
  char str[256];
  void* ptr;
}
/* Line 1529 of yacc.c.  */
#line 126 "parser.H"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



