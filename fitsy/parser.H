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
     FORMAT_ = 274,
     FOV_ = 275,
     GALACTIC_ = 276,
     KEY_ = 277,
     LAYOUT_ = 278,
     LITTLE_ = 279,
     LITTLEENDIAN_ = 280,
     LAT0_ = 281,
     LON0_ = 282,
     NESTED_ = 283,
     NORTH_ = 284,
     ORDER_ = 285,
     PROJ_ = 286,
     QUAD_ = 287,
     RING_ = 288,
     SKIP_ = 289,
     SLICE_ = 290,
     SOUTH_ = 291,
     SYSTEM_ = 292,
     UNKNOWN_ = 293,
     XDIM_ = 294,
     YDIM_ = 295,
     ZDIM_ = 296
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
#define FORMAT_ 274
#define FOV_ 275
#define GALACTIC_ 276
#define KEY_ 277
#define LAYOUT_ 278
#define LITTLE_ 279
#define LITTLEENDIAN_ 280
#define LAT0_ 281
#define LON0_ 282
#define NESTED_ 283
#define NORTH_ 284
#define ORDER_ 285
#define PROJ_ 286
#define QUAD_ 287
#define RING_ 288
#define SKIP_ 289
#define SLICE_ 290
#define SOUTH_ 291
#define SYSTEM_ 292
#define UNKNOWN_ 293
#define XDIM_ 294
#define YDIM_ 295
#define ZDIM_ 296




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 34 "parser.Y"
{
  float real;
  double dbl;
  int integer;
  char str[2048];
  void* ptr;
}
/* Line 1529 of yacc.c.  */
#line 139 "parser.H"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



