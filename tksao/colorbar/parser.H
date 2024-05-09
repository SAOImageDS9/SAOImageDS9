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
     HUE_ = 284,
     ID_ = 285,
     INVERT_ = 286,
     ITT_ = 287,
     LEVEL_ = 288,
     LIGHTNESS_ = 289,
     LIST_ = 290,
     LOAD_ = 291,
     MACOSX_ = 292,
     MAP_ = 293,
     MOTION_ = 294,
     N_ = 295,
     NAME_ = 296,
     NO_ = 297,
     OFF_ = 298,
     ON_ = 299,
     POSTSCRIPT_ = 300,
     PRINT_ = 301,
     QUERY_ = 302,
     RESET_ = 303,
     RESOLUTION_ = 304,
     RGB_ = 305,
     SATURATION_ = 306,
     SAVE_ = 307,
     SHOW_ = 308,
     TAG_ = 309,
     TRUE_ = 310,
     TYPE_ = 311,
     VALUE_ = 312,
     VAR_ = 313,
     VERSION_ = 314,
     WIDTH_ = 315,
     WIN32_ = 316,
     WINDOW_ = 317,
     Y_ = 318,
     YES_ = 319
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
#define HUE_ 284
#define ID_ 285
#define INVERT_ 286
#define ITT_ 287
#define LEVEL_ 288
#define LIGHTNESS_ 289
#define LIST_ 290
#define LOAD_ 291
#define MACOSX_ 292
#define MAP_ 293
#define MOTION_ 294
#define N_ 295
#define NAME_ 296
#define NO_ 297
#define OFF_ 298
#define ON_ 299
#define POSTSCRIPT_ 300
#define PRINT_ 301
#define QUERY_ 302
#define RESET_ 303
#define RESOLUTION_ 304
#define RGB_ 305
#define SATURATION_ 306
#define SAVE_ 307
#define SHOW_ 308
#define TAG_ 309
#define TRUE_ 310
#define TYPE_ 311
#define VALUE_ 312
#define VAR_ 313
#define VERSION_ 314
#define WIDTH_ 315
#define WIN32_ 316
#define WINDOW_ 317
#define Y_ 318
#define YES_ 319




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
#line 184 "colorbar/parser.H"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



