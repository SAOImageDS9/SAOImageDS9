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
     POINTER = 261,
     ADJUST_ = 262,
     BEGIN_ = 263,
     BIAS_ = 264,
     BW_ = 265,
     CHANNEL_ = 266,
     CMYK_ = 267,
     COLORMAP_ = 268,
     COLORBAR_ = 269,
     COLORSPACE_ = 270,
     CONTRAST_ = 271,
     CURSOR_ = 272,
     DEBUG_ = 273,
     DELETE_ = 274,
     EDIT_ = 275,
     END_ = 276,
     GET_ = 277,
     GRAY_ = 278,
     FALSE_ = 279,
     FILE_ = 280,
     HEIGHT_ = 281,
     HIDE_ = 282,
     ID_ = 283,
     INVERT_ = 284,
     ITT_ = 285,
     LEVEL_ = 286,
     LIST_ = 287,
     LOAD_ = 288,
     MACOSX_ = 289,
     MAP_ = 290,
     MOTION_ = 291,
     N_ = 292,
     NAME_ = 293,
     NO_ = 294,
     OFF_ = 295,
     ON_ = 296,
     POSTSCRIPT_ = 297,
     PRINT_ = 298,
     QUERY_ = 299,
     RESET_ = 300,
     RESOLUTION_ = 301,
     RGB_ = 302,
     SAVE_ = 303,
     SHOW_ = 304,
     TAG_ = 305,
     TRUE_ = 306,
     TYPE_ = 307,
     VALUE_ = 308,
     VAR_ = 309,
     VERSION_ = 310,
     WIDTH_ = 311,
     WIN32_ = 312,
     WINDOW_ = 313,
     Y_ = 314,
     YES_ = 315
   };
#endif
/* Tokens.  */
#define INT 258
#define REAL 259
#define STRING 260
#define POINTER 261
#define ADJUST_ 262
#define BEGIN_ 263
#define BIAS_ 264
#define BW_ 265
#define CHANNEL_ 266
#define CMYK_ 267
#define COLORMAP_ 268
#define COLORBAR_ 269
#define COLORSPACE_ 270
#define CONTRAST_ 271
#define CURSOR_ 272
#define DEBUG_ 273
#define DELETE_ 274
#define EDIT_ 275
#define END_ 276
#define GET_ 277
#define GRAY_ 278
#define FALSE_ 279
#define FILE_ 280
#define HEIGHT_ 281
#define HIDE_ 282
#define ID_ 283
#define INVERT_ 284
#define ITT_ 285
#define LEVEL_ 286
#define LIST_ 287
#define LOAD_ 288
#define MACOSX_ 289
#define MAP_ 290
#define MOTION_ 291
#define N_ 292
#define NAME_ 293
#define NO_ 294
#define OFF_ 295
#define ON_ 296
#define POSTSCRIPT_ 297
#define PRINT_ 298
#define QUERY_ 299
#define RESET_ 300
#define RESOLUTION_ 301
#define RGB_ 302
#define SAVE_ 303
#define SHOW_ 304
#define TAG_ 305
#define TRUE_ 306
#define TYPE_ 307
#define VALUE_ 308
#define VAR_ 309
#define VERSION_ 310
#define WIDTH_ 311
#define WIN32_ 312
#define WINDOW_ 313
#define Y_ 314
#define YES_ 315




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 25 "colorbar/parser.Y"
{
#define CBBUFSIZE 1024
  float real;
  int integer;
  char str[CBBUFSIZE];
  void* ptr;
}
/* Line 1529 of yacc.c.  */
#line 177 "colorbar/parser.H"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



