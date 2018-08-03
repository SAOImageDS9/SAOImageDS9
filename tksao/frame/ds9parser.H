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
     ANGDEGREE = 261,
     ANGRADIAN = 262,
     ARCMINUTE = 263,
     ARCSECOND = 264,
     PHYCOORD = 265,
     IMGCOORD = 266,
     SEXSTR = 267,
     HMSSTR = 268,
     DMSSTR = 269,
     EOF_ = 270,
     AMPLIFIER_ = 271,
     ANNULUS_ = 272,
     ARCMIN_ = 273,
     ARCSEC_ = 274,
     ARROW_ = 275,
     B1950_ = 276,
     BACKGROUND_ = 277,
     BEGIN_ = 278,
     BOX_ = 279,
     BOXCIRCLE_ = 280,
     BPANDA_ = 281,
     CALLBACK_ = 282,
     CIRCLE_ = 283,
     CIRCLE3D_ = 284,
     COLOR_ = 285,
     COMPASS_ = 286,
     COMPOSITE_ = 287,
     CPANDA_ = 288,
     CROSS_ = 289,
     DASH_ = 290,
     DASHLIST_ = 291,
     DEBUG_ = 292,
     DEGREES_ = 293,
     DELETE_ = 294,
     DETECTOR_ = 295,
     DIAMOND_ = 296,
     ECLIPTIC_ = 297,
     EDIT_ = 298,
     ELLIPSE_ = 299,
     END_ = 300,
     EPANDA_ = 301,
     FALSE_ = 302,
     FIELD_ = 303,
     FILL_ = 304,
     FIXED_ = 305,
     FK4_ = 306,
     FK5_ = 307,
     FORMAT_ = 308,
     FONT_ = 309,
     GALACTIC_ = 310,
     GLOBAL_ = 311,
     HIGHLITE_ = 312,
     ICRS_ = 313,
     IGNORE_ = 314,
     IMAGE_ = 315,
     INCLUDE_ = 316,
     J2000_ = 317,
     KEY_ = 318,
     LINE_ = 319,
     LINEAR_ = 320,
     MOVE_ = 321,
     N_ = 322,
     NO_ = 323,
     OFF_ = 324,
     ON_ = 325,
     PHYSICAL_ = 326,
     PIE_ = 327,
     PIXELS_ = 328,
     POINT_ = 329,
     POLYGON_ = 330,
     PROJECTION_ = 331,
     PROPERTY_ = 332,
     ROTATE_ = 333,
     ROTBOX_ = 334,
     RULER_ = 335,
     SEGMENT_ = 336,
     SELECT_ = 337,
     SOURCE_ = 338,
     TAG_ = 339,
     TEXT_ = 340,
     TEXTANGLE_ = 341,
     TEXTROTATE_ = 342,
     TILE_ = 343,
     TRUE_ = 344,
     VECTOR_ = 345,
     VERSION_ = 346,
     UNHIGHLITE_ = 347,
     UNSELECT_ = 348,
     UPDATE_ = 349,
     WCS_ = 350,
     WCSA_ = 351,
     WCSB_ = 352,
     WCSC_ = 353,
     WCSD_ = 354,
     WCSE_ = 355,
     WCSF_ = 356,
     WCSG_ = 357,
     WCSH_ = 358,
     WCSI_ = 359,
     WCSJ_ = 360,
     WCSK_ = 361,
     WCSL_ = 362,
     WCSM_ = 363,
     WCSN_ = 364,
     WCSO_ = 365,
     WCSP_ = 366,
     WCSQ_ = 367,
     WCSR_ = 368,
     WCSS_ = 369,
     WCST_ = 370,
     WCSU_ = 371,
     WCSV_ = 372,
     WCSW_ = 373,
     WCSX_ = 374,
     WCSY_ = 375,
     WCSZ_ = 376,
     WCS0_ = 377,
     WIDTH_ = 378,
     X_ = 379,
     Y_ = 380,
     YES_ = 381
   };
#endif
/* Tokens.  */
#define INT 258
#define REAL 259
#define STRING 260
#define ANGDEGREE 261
#define ANGRADIAN 262
#define ARCMINUTE 263
#define ARCSECOND 264
#define PHYCOORD 265
#define IMGCOORD 266
#define SEXSTR 267
#define HMSSTR 268
#define DMSSTR 269
#define EOF_ 270
#define AMPLIFIER_ 271
#define ANNULUS_ 272
#define ARCMIN_ 273
#define ARCSEC_ 274
#define ARROW_ 275
#define B1950_ 276
#define BACKGROUND_ 277
#define BEGIN_ 278
#define BOX_ 279
#define BOXCIRCLE_ 280
#define BPANDA_ 281
#define CALLBACK_ 282
#define CIRCLE_ 283
#define CIRCLE3D_ 284
#define COLOR_ 285
#define COMPASS_ 286
#define COMPOSITE_ 287
#define CPANDA_ 288
#define CROSS_ 289
#define DASH_ 290
#define DASHLIST_ 291
#define DEBUG_ 292
#define DEGREES_ 293
#define DELETE_ 294
#define DETECTOR_ 295
#define DIAMOND_ 296
#define ECLIPTIC_ 297
#define EDIT_ 298
#define ELLIPSE_ 299
#define END_ 300
#define EPANDA_ 301
#define FALSE_ 302
#define FIELD_ 303
#define FILL_ 304
#define FIXED_ 305
#define FK4_ 306
#define FK5_ 307
#define FORMAT_ 308
#define FONT_ 309
#define GALACTIC_ 310
#define GLOBAL_ 311
#define HIGHLITE_ 312
#define ICRS_ 313
#define IGNORE_ 314
#define IMAGE_ 315
#define INCLUDE_ 316
#define J2000_ 317
#define KEY_ 318
#define LINE_ 319
#define LINEAR_ 320
#define MOVE_ 321
#define N_ 322
#define NO_ 323
#define OFF_ 324
#define ON_ 325
#define PHYSICAL_ 326
#define PIE_ 327
#define PIXELS_ 328
#define POINT_ 329
#define POLYGON_ 330
#define PROJECTION_ 331
#define PROPERTY_ 332
#define ROTATE_ 333
#define ROTBOX_ 334
#define RULER_ 335
#define SEGMENT_ 336
#define SELECT_ 337
#define SOURCE_ 338
#define TAG_ 339
#define TEXT_ 340
#define TEXTANGLE_ 341
#define TEXTROTATE_ 342
#define TILE_ 343
#define TRUE_ 344
#define VECTOR_ 345
#define VERSION_ 346
#define UNHIGHLITE_ 347
#define UNSELECT_ 348
#define UPDATE_ 349
#define WCS_ 350
#define WCSA_ 351
#define WCSB_ 352
#define WCSC_ 353
#define WCSD_ 354
#define WCSE_ 355
#define WCSF_ 356
#define WCSG_ 357
#define WCSH_ 358
#define WCSI_ 359
#define WCSJ_ 360
#define WCSK_ 361
#define WCSL_ 362
#define WCSM_ 363
#define WCSN_ 364
#define WCSO_ 365
#define WCSP_ 366
#define WCSQ_ 367
#define WCSR_ 368
#define WCSS_ 369
#define WCST_ 370
#define WCSU_ 371
#define WCSV_ 372
#define WCSW_ 373
#define WCSX_ 374
#define WCSY_ 375
#define WCSZ_ 376
#define WCS0_ 377
#define WIDTH_ 378
#define X_ 379
#define Y_ 380
#define YES_ 381




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 141 "frame/ds9parser.Y"
{
#define MKBUFSIZE 2048
  double real;
  int integer;
  char str[MKBUFSIZE];
  double vector[3];
}
/* Line 1529 of yacc.c.  */
#line 309 "frame/ds9parser.H"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



