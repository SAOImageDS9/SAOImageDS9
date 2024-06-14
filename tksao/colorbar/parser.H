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
     HSV_ = 282,
     HLS_ = 283,
     ID_ = 284,
     INVERT_ = 285,
     ITT_ = 286,
     LEVEL_ = 287,
     LIST_ = 288,
     LOAD_ = 289,
     MACOSX_ = 290,
     MAP_ = 291,
     MOTION_ = 292,
     N_ = 293,
     NAME_ = 294,
     NO_ = 295,
     OFF_ = 296,
     ON_ = 297,
     POSTSCRIPT_ = 298,
     PRINT_ = 299,
     QUERY_ = 300,
     RESET_ = 301,
     RESOLUTION_ = 302,
     RGB_ = 303,
     SAVE_ = 304,
     SHOW_ = 305,
     TAG_ = 306,
     TRUE_ = 307,
     TYPE_ = 308,
     VALUE_ = 309,
     VAR_ = 310,
     VERSION_ = 311,
     WIDTH_ = 312,
     WIN32_ = 313,
     WINDOW_ = 314,
     Y_ = 315,
     YES_ = 316
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
#define HSV_ 282
#define HLS_ 283
#define ID_ 284
#define INVERT_ 285
#define ITT_ 286
#define LEVEL_ 287
#define LIST_ 288
#define LOAD_ 289
#define MACOSX_ 290
#define MAP_ 291
#define MOTION_ 292
#define N_ 293
#define NAME_ 294
#define NO_ 295
#define OFF_ 296
#define ON_ 297
#define POSTSCRIPT_ 298
#define PRINT_ 299
#define QUERY_ 300
#define RESET_ 301
#define RESOLUTION_ 302
#define RGB_ 303
#define SAVE_ 304
#define SHOW_ 305
#define TAG_ 306
#define TRUE_ 307
#define TYPE_ 308
#define VALUE_ 309
#define VAR_ 310
#define VERSION_ 311
#define WIDTH_ 312
#define WIN32_ 313
#define WINDOW_ 314
#define Y_ 315
#define YES_ 316




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 25 "colorbar/parser.Y"
{
#define CBBUFSIZE 1024
  float real;
  int integer;
  char str[CBBUFSIZE];
}
/* Line 1529 of yacc.c.  */
#line 178 "colorbar/parser.H"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



