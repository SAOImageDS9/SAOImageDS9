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
     ANGDEGREE = 260,
     ARCMINUTE = 261,
     ARCSECOND = 262,
     SEXSTR = 263,
     HMSSTR = 264,
     DMSSTR = 265,
     EOF_ = 266,
     ANNULUS_ = 267,
     BOX_ = 268,
     CIRCLE_ = 269,
     DEBUG_ = 270,
     ELLIPSE_ = 271,
     FIELD_ = 272,
     OFF_ = 273,
     ON_ = 274,
     PIE_ = 275,
     POINT_ = 276,
     POLYGON_ = 277,
     RECTANGLE_ = 278,
     REGION_ = 279,
     ROTBOX_ = 280,
     SECTOR_ = 281,
     VERSION_ = 282
   };
#endif
/* Tokens.  */
#define INT 258
#define REAL 259
#define ANGDEGREE 260
#define ARCMINUTE 261
#define ARCSECOND 262
#define SEXSTR 263
#define HMSSTR 264
#define DMSSTR 265
#define EOF_ 266
#define ANNULUS_ 267
#define BOX_ 268
#define CIRCLE_ 269
#define DEBUG_ 270
#define ELLIPSE_ 271
#define FIELD_ 272
#define OFF_ 273
#define ON_ 274
#define PIE_ 275
#define POINT_ 276
#define POLYGON_ 277
#define RECTANGLE_ 278
#define REGION_ 279
#define ROTBOX_ 280
#define SECTOR_ 281
#define VERSION_ 282




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 44 "frame/ciaoparser.Y"
{
#define CIAOBUFSIZE 2048
  double real;
  int integer;
  char str[CIAOBUFSIZE];
  double vector[3];
}
/* Line 1529 of yacc.c.  */
#line 111 "frame/ciaoparser.H"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



