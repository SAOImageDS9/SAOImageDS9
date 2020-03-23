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
     EOF_ = 258,
     INT = 259,
     REAL = 260,
     STRING = 261,
     DEBUG_ = 262,
     ON_ = 263,
     OFF_ = 264,
     AVERAGE_ = 265,
     BAND_ = 266,
     BANDS_ = 267,
     BBL_ = 268,
     BIL_ = 269,
     BIP_ = 270,
     BSQ_ = 271,
     BYTE_ = 272,
     DATA_ = 273,
     DEFAULT_ = 274,
     DESCRIPTION_ = 275,
     ENVI_ = 276,
     FACTOR_ = 277,
     FRAME_ = 278,
     FILE_ = 279,
     FWHM_ = 280,
     GAIN_ = 281,
     HEADER_ = 282,
     INFO_ = 283,
     IGNORE_ = 284,
     INTERLEAVE_ = 285,
     LIMITS_ = 286,
     LINES_ = 287,
     MAJOR_ = 288,
     MAP_ = 289,
     MINOR_ = 290,
     NAMES_ = 291,
     OFFSET_ = 292,
     OFFSETS_ = 293,
     ORDER_ = 294,
     PIXEL_ = 295,
     PIXELS_ = 296,
     PLOT_ = 297,
     PROJECTION_ = 298,
     RANGE_ = 299,
     REFLECTANCE_ = 300,
     SAMPLES_ = 301,
     SCALE_ = 302,
     SCANNER_ = 303,
     SENSOR_ = 304,
     SIZE_ = 305,
     START_ = 306,
     STRETCH_ = 307,
     TITLES_ = 308,
     TYPE_ = 309,
     UNITS_ = 310,
     VALUE_ = 311,
     VALUES_ = 312,
     WAVELENGTH_ = 313
   };
#endif
/* Tokens.  */
#define EOF_ 258
#define INT 259
#define REAL 260
#define STRING 261
#define DEBUG_ 262
#define ON_ 263
#define OFF_ 264
#define AVERAGE_ 265
#define BAND_ 266
#define BANDS_ 267
#define BBL_ 268
#define BIL_ 269
#define BIP_ 270
#define BSQ_ 271
#define BYTE_ 272
#define DATA_ 273
#define DEFAULT_ 274
#define DESCRIPTION_ 275
#define ENVI_ 276
#define FACTOR_ 277
#define FRAME_ 278
#define FILE_ 279
#define FWHM_ 280
#define GAIN_ 281
#define HEADER_ 282
#define INFO_ 283
#define IGNORE_ 284
#define INTERLEAVE_ 285
#define LIMITS_ 286
#define LINES_ 287
#define MAJOR_ 288
#define MAP_ 289
#define MINOR_ 290
#define NAMES_ 291
#define OFFSET_ 292
#define OFFSETS_ 293
#define ORDER_ 294
#define PIXEL_ 295
#define PIXELS_ 296
#define PLOT_ 297
#define PROJECTION_ 298
#define RANGE_ 299
#define REFLECTANCE_ 300
#define SAMPLES_ 301
#define SCALE_ 302
#define SCANNER_ 303
#define SENSOR_ 304
#define SIZE_ 305
#define START_ 306
#define STRETCH_ 307
#define TITLES_ 308
#define TYPE_ 309
#define UNITS_ 310
#define VALUE_ 311
#define VALUES_ 312
#define WAVELENGTH_ 313




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 30 "enviparser.Y"
{
#define ENVIPARSERSIZE 1024
  float real;
  int integer;
  char str[ENVIPARSERSIZE];
}
/* Line 1529 of yacc.c.  */
#line 172 "enviparser.H"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



