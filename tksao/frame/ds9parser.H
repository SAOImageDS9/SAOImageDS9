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
     BAR_ = 277,
     BACKGROUND_ = 278,
     BEGIN_ = 279,
     BOX_ = 280,
     BOXCIRCLE_ = 281,
     BPANDA_ = 282,
     CALLBACK_ = 283,
     CHEVRON_ = 284,
     CIRCLE_ = 285,
     CIRCLE3D_ = 286,
     COLOR_ = 287,
     COMPASS_ = 288,
     COMPOSITE_ = 289,
     CPANDA_ = 290,
     CROSS_ = 291,
     DASH_ = 292,
     DASHLIST_ = 293,
     DEBUG_ = 294,
     DEGREES_ = 295,
     DELETE_ = 296,
     DETECTOR_ = 297,
     DIAMOND_ = 298,
     ECLIPTIC_ = 299,
     EDIT_ = 300,
     ELLIPSE_ = 301,
     END_ = 302,
     EPANDA_ = 303,
     FALSE_ = 304,
     FIELD_ = 305,
     FILL_ = 306,
     FIXED_ = 307,
     FK4_ = 308,
     FK5_ = 309,
     FORMAT_ = 310,
     FONT_ = 311,
     GALACTIC_ = 312,
     GLOBAL_ = 313,
     GLYPH_ = 314,
     HIGHLITE_ = 315,
     ICRS_ = 316,
     IGNORE_ = 317,
     IMAGE_ = 318,
     INCLUDE_ = 319,
     J2000_ = 320,
     KEY_ = 321,
     LINE_ = 322,
     LINEAR_ = 323,
     MOVE_ = 324,
     N_ = 325,
     NO_ = 326,
     NONE_ = 327,
     OFF_ = 328,
     ON_ = 329,
     OPENARROW_ = 330,
     OPENBOX_ = 331,
     OPENCIRCLE_ = 332,
     OPENTRIANGLE_ = 333,
     PHYSICAL_ = 334,
     PIE_ = 335,
     PIXELS_ = 336,
     POINT_ = 337,
     POLYGON_ = 338,
     PROJECTION_ = 339,
     PROPERTY_ = 340,
     ROTATE_ = 341,
     ROTBOX_ = 342,
     RULER_ = 343,
     SEGMENT_ = 344,
     SELECT_ = 345,
     SOURCE_ = 346,
     TAG_ = 347,
     TEXT_ = 348,
     TEXTANGLE_ = 349,
     TEXTROTATE_ = 350,
     TILE_ = 351,
     TRIANGLE_ = 352,
     TRUE_ = 353,
     VECTOR_ = 354,
     VERSION_ = 355,
     UNHIGHLITE_ = 356,
     UNSELECT_ = 357,
     UPDATE_ = 358,
     WCS_ = 359,
     WCSA_ = 360,
     WCSB_ = 361,
     WCSC_ = 362,
     WCSD_ = 363,
     WCSE_ = 364,
     WCSF_ = 365,
     WCSG_ = 366,
     WCSH_ = 367,
     WCSI_ = 368,
     WCSJ_ = 369,
     WCSK_ = 370,
     WCSL_ = 371,
     WCSM_ = 372,
     WCSN_ = 373,
     WCSO_ = 374,
     WCSP_ = 375,
     WCSQ_ = 376,
     WCSR_ = 377,
     WCSS_ = 378,
     WCST_ = 379,
     WCSU_ = 380,
     WCSV_ = 381,
     WCSW_ = 382,
     WCSX_ = 383,
     WCSY_ = 384,
     WCSZ_ = 385,
     WCS0_ = 386,
     WIDTH_ = 387,
     X_ = 388,
     Y_ = 389,
     YES_ = 390
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
#define BAR_ 277
#define BACKGROUND_ 278
#define BEGIN_ 279
#define BOX_ 280
#define BOXCIRCLE_ 281
#define BPANDA_ 282
#define CALLBACK_ 283
#define CHEVRON_ 284
#define CIRCLE_ 285
#define CIRCLE3D_ 286
#define COLOR_ 287
#define COMPASS_ 288
#define COMPOSITE_ 289
#define CPANDA_ 290
#define CROSS_ 291
#define DASH_ 292
#define DASHLIST_ 293
#define DEBUG_ 294
#define DEGREES_ 295
#define DELETE_ 296
#define DETECTOR_ 297
#define DIAMOND_ 298
#define ECLIPTIC_ 299
#define EDIT_ 300
#define ELLIPSE_ 301
#define END_ 302
#define EPANDA_ 303
#define FALSE_ 304
#define FIELD_ 305
#define FILL_ 306
#define FIXED_ 307
#define FK4_ 308
#define FK5_ 309
#define FORMAT_ 310
#define FONT_ 311
#define GALACTIC_ 312
#define GLOBAL_ 313
#define GLYPH_ 314
#define HIGHLITE_ 315
#define ICRS_ 316
#define IGNORE_ 317
#define IMAGE_ 318
#define INCLUDE_ 319
#define J2000_ 320
#define KEY_ 321
#define LINE_ 322
#define LINEAR_ 323
#define MOVE_ 324
#define N_ 325
#define NO_ 326
#define NONE_ 327
#define OFF_ 328
#define ON_ 329
#define OPENARROW_ 330
#define OPENBOX_ 331
#define OPENCIRCLE_ 332
#define OPENTRIANGLE_ 333
#define PHYSICAL_ 334
#define PIE_ 335
#define PIXELS_ 336
#define POINT_ 337
#define POLYGON_ 338
#define PROJECTION_ 339
#define PROPERTY_ 340
#define ROTATE_ 341
#define ROTBOX_ 342
#define RULER_ 343
#define SEGMENT_ 344
#define SELECT_ 345
#define SOURCE_ 346
#define TAG_ 347
#define TEXT_ 348
#define TEXTANGLE_ 349
#define TEXTROTATE_ 350
#define TILE_ 351
#define TRIANGLE_ 352
#define TRUE_ 353
#define VECTOR_ 354
#define VERSION_ 355
#define UNHIGHLITE_ 356
#define UNSELECT_ 357
#define UPDATE_ 358
#define WCS_ 359
#define WCSA_ 360
#define WCSB_ 361
#define WCSC_ 362
#define WCSD_ 363
#define WCSE_ 364
#define WCSF_ 365
#define WCSG_ 366
#define WCSH_ 367
#define WCSI_ 368
#define WCSJ_ 369
#define WCSK_ 370
#define WCSL_ 371
#define WCSM_ 372
#define WCSN_ 373
#define WCSO_ 374
#define WCSP_ 375
#define WCSQ_ 376
#define WCSR_ 377
#define WCSS_ 378
#define WCST_ 379
#define WCSU_ 380
#define WCSV_ 381
#define WCSW_ 382
#define WCSX_ 383
#define WCSY_ 384
#define WCSZ_ 385
#define WCS0_ 386
#define WIDTH_ 387
#define X_ 388
#define Y_ 389
#define YES_ 390




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 139 "frame/ds9parser.Y"
{
#define MKBUFSIZE 2048
  double real;
  int integer;
  char str[MKBUFSIZE];
  double vector[3];
}
/* Line 1529 of yacc.c.  */
#line 327 "frame/ds9parser.H"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



