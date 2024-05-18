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
     BLUE_ = 264,
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
     GREEN_ = 279,
     FALSE_ = 280,
     FILE_ = 281,
     HEIGHT_ = 282,
     HIDE_ = 283,
     HSV_ = 284,
     HLS_ = 285,
     HUE_ = 286,
     ID_ = 287,
     INVERT_ = 288,
     ITT_ = 289,
     LEVEL_ = 290,
     LIGHTNESS_ = 291,
     LIST_ = 292,
     LOAD_ = 293,
     MACOSX_ = 294,
     MAP_ = 295,
     MOTION_ = 296,
     N_ = 297,
     NAME_ = 298,
     NO_ = 299,
     OFF_ = 300,
     ON_ = 301,
     POSTSCRIPT_ = 302,
     PRINT_ = 303,
     QUERY_ = 304,
     RED_ = 305,
     RESET_ = 306,
     RESOLUTION_ = 307,
     RGB_ = 308,
     SATURATION_ = 309,
     SAVE_ = 310,
     SHOW_ = 311,
     TAG_ = 312,
     TRUE_ = 313,
     TYPE_ = 314,
     VALUE_ = 315,
     VAR_ = 316,
     VERSION_ = 317,
     WIDTH_ = 318,
     WIN32_ = 319,
     WINDOW_ = 320,
     Y_ = 321,
     YES_ = 322
   };
#endif
/* Tokens.  */
#define INT 258
#define REAL 259
#define STRING 260
#define ADJUST_ 261
#define BEGIN_ 262
#define BIAS_ 263
#define BLUE_ 264
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
#define GREEN_ 279
#define FALSE_ 280
#define FILE_ 281
#define HEIGHT_ 282
#define HIDE_ 283
#define HSV_ 284
#define HLS_ 285
#define HUE_ 286
#define ID_ 287
#define INVERT_ 288
#define ITT_ 289
#define LEVEL_ 290
#define LIGHTNESS_ 291
#define LIST_ 292
#define LOAD_ 293
#define MACOSX_ 294
#define MAP_ 295
#define MOTION_ 296
#define N_ 297
#define NAME_ 298
#define NO_ 299
#define OFF_ 300
#define ON_ 301
#define POSTSCRIPT_ 302
#define PRINT_ 303
#define QUERY_ 304
#define RED_ 305
#define RESET_ 306
#define RESOLUTION_ 307
#define RGB_ 308
#define SATURATION_ 309
#define SAVE_ 310
#define SHOW_ 311
#define TAG_ 312
#define TRUE_ 313
#define TYPE_ 314
#define VALUE_ 315
#define VAR_ 316
#define VERSION_ 317
#define WIDTH_ 318
#define WIN32_ 319
#define WINDOW_ 320
#define Y_ 321
#define YES_ 322




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
#line 190 "colorbar/parser.H"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



