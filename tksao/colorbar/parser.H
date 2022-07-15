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
     ADJUST_ = 261,
     BEGIN_ = 262,
     BIAS_ = 263,
     BW_ = 264,
     CHANNEL_ = 265,
     CMYK_ = 266,
     COLORMAP_ = 267,
     COLORBAR_ = 268,
     COLORSPACE_ = 269,
     CONTRAST_ = 270,
     CURSOR_ = 271,
     DEBUG_ = 272,
     DELETE_ = 273,
     EDIT_ = 274,
     END_ = 275,
     GET_ = 276,
     GRAY_ = 277,
     FALSE_ = 278,
     FILE_ = 279,
     HEIGHT_ = 280,
     HIDE_ = 281,
     ID_ = 282,
     INVERT_ = 283,
     ITT_ = 284,
     LEVEL_ = 285,
     LIST_ = 286,
     LOAD_ = 287,
     MACOSX_ = 288,
     MAP_ = 289,
     MOTION_ = 290,
     N_ = 291,
     NAME_ = 292,
     NO_ = 293,
     OFF_ = 294,
     ON_ = 295,
     POSTSCRIPT_ = 296,
     PRINT_ = 297,
     QUERY_ = 298,
     RESET_ = 299,
     RESOLUTION_ = 300,
     RGB_ = 301,
     SAVE_ = 302,
     SHOW_ = 303,
     TAG_ = 304,
     TRUE_ = 305,
     TYPE_ = 306,
     VALUE_ = 307,
     VAR_ = 308,
     VERSION_ = 309,
     WIDTH_ = 310,
     WIN32_ = 311,
     WINDOW_ = 312,
     Y_ = 313,
     YES_ = 314
   };
#endif
/* Tokens.  */
#define INT 258
#define REAL 259
#define STRING 260
#define ADJUST_ 261
#define BEGIN_ 262
#define BIAS_ 263
#define BW_ 264
#define CHANNEL_ 265
#define CMYK_ 266
#define COLORMAP_ 267
#define COLORBAR_ 268
#define COLORSPACE_ 269
#define CONTRAST_ 270
#define CURSOR_ 271
#define DEBUG_ 272
#define DELETE_ 273
#define EDIT_ 274
#define END_ 275
#define GET_ 276
#define GRAY_ 277
#define FALSE_ 278
#define FILE_ 279
#define HEIGHT_ 280
#define HIDE_ 281
#define ID_ 282
#define INVERT_ 283
#define ITT_ 284
#define LEVEL_ 285
#define LIST_ 286
#define LOAD_ 287
#define MACOSX_ 288
#define MAP_ 289
#define MOTION_ 290
#define N_ 291
#define NAME_ 292
#define NO_ 293
#define OFF_ 294
#define ON_ 295
#define POSTSCRIPT_ 296
#define PRINT_ 297
#define QUERY_ 298
#define RESET_ 299
#define RESOLUTION_ 300
#define RGB_ 301
#define SAVE_ 302
#define SHOW_ 303
#define TAG_ 304
#define TRUE_ 305
#define TYPE_ 306
#define VALUE_ 307
#define VAR_ 308
#define VERSION_ 309
#define WIDTH_ 310
#define WIN32_ 311
#define WINDOW_ 312
#define Y_ 313
#define YES_ 314




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 25 "colorbar/parser.Y"
{
#define CBBUFSIZE 1024
  float real;
  int integer;
  char str[CBBUFSIZE];
  unsigned long ptr;
}
/* Line 1529 of yacc.c.  */
#line 175 "colorbar/parser.H"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



