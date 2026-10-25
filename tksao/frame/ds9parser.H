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
     HIGHLITE_ = 314,
     ICRS_ = 315,
     IGNORE_ = 316,
     IMAGE_ = 317,
     INCLUDE_ = 318,
     J2000_ = 319,
     KEY_ = 320,
     LINE_ = 321,
     LINEAR_ = 322,
     MOVE_ = 323,
     N_ = 324,
     NO_ = 325,
     NONE_ = 326,
     OFF_ = 327,
     ON_ = 328,
     OPENARROW_ = 329,
     OPENBOX_ = 330,
     OPENCIRCLE_ = 331,
     OPENTRIANGLE_ = 332,
     PHYSICAL_ = 333,
     PIE_ = 334,
     PIXELS_ = 335,
     POINT_ = 336,
     POLYGON_ = 337,
     PROJECTION_ = 338,
     PROPERTY_ = 339,
     ROTATE_ = 340,
     ROTBOX_ = 341,
     RULER_ = 342,
     SEGMENT_ = 343,
     SELECT_ = 344,
     SOURCE_ = 345,
     TAG_ = 346,
     TEXT_ = 347,
     TEXTANGLE_ = 348,
     TEXTROTATE_ = 349,
     TILE_ = 350,
     TRIANGLE_ = 351,
     TRUE_ = 352,
     VECTOR_ = 353,
     VERSION_ = 354,
     UNHIGHLITE_ = 355,
     UNSELECT_ = 356,
     UPDATE_ = 357,
     WCS_ = 358,
     WCSA_ = 359,
     WCSB_ = 360,
     WCSC_ = 361,
     WCSD_ = 362,
     WCSE_ = 363,
     WCSF_ = 364,
     WCSG_ = 365,
     WCSH_ = 366,
     WCSI_ = 367,
     WCSJ_ = 368,
     WCSK_ = 369,
     WCSL_ = 370,
     WCSM_ = 371,
     WCSN_ = 372,
     WCSO_ = 373,
     WCSP_ = 374,
     WCSQ_ = 375,
     WCSR_ = 376,
     WCSS_ = 377,
     WCST_ = 378,
     WCSU_ = 379,
     WCSV_ = 380,
     WCSW_ = 381,
     WCSX_ = 382,
     WCSY_ = 383,
     WCSZ_ = 384,
     WCS0_ = 385,
     WIDTH_ = 386,
     X_ = 387,
     Y_ = 388,
     YES_ = 389
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
#define HIGHLITE_ 314
#define ICRS_ 315
#define IGNORE_ 316
#define IMAGE_ 317
#define INCLUDE_ 318
#define J2000_ 319
#define KEY_ 320
#define LINE_ 321
#define LINEAR_ 322
#define MOVE_ 323
#define N_ 324
#define NO_ 325
#define NONE_ 326
#define OFF_ 327
#define ON_ 328
#define OPENARROW_ 329
#define OPENBOX_ 330
#define OPENCIRCLE_ 331
#define OPENTRIANGLE_ 332
#define PHYSICAL_ 333
#define PIE_ 334
#define PIXELS_ 335
#define POINT_ 336
#define POLYGON_ 337
#define PROJECTION_ 338
#define PROPERTY_ 339
#define ROTATE_ 340
#define ROTBOX_ 341
#define RULER_ 342
#define SEGMENT_ 343
#define SELECT_ 344
#define SOURCE_ 345
#define TAG_ 346
#define TEXT_ 347
#define TEXTANGLE_ 348
#define TEXTROTATE_ 349
#define TILE_ 350
#define TRIANGLE_ 351
#define TRUE_ 352
#define VECTOR_ 353
#define VERSION_ 354
#define UNHIGHLITE_ 355
#define UNSELECT_ 356
#define UPDATE_ 357
#define WCS_ 358
#define WCSA_ 359
#define WCSB_ 360
#define WCSC_ 361
#define WCSD_ 362
#define WCSE_ 363
#define WCSF_ 364
#define WCSG_ 365
#define WCSH_ 366
#define WCSI_ 367
#define WCSJ_ 368
#define WCSK_ 369
#define WCSL_ 370
#define WCSM_ 371
#define WCSN_ 372
#define WCSO_ 373
#define WCSP_ 374
#define WCSQ_ 375
#define WCSR_ 376
#define WCSS_ 377
#define WCST_ 378
#define WCSU_ 379
#define WCSV_ 380
#define WCSW_ 381
#define WCSX_ 382
#define WCSY_ 383
#define WCSZ_ 384
#define WCS0_ 385
#define WIDTH_ 386
#define X_ 387
#define Y_ 388
#define YES_ 389




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
#line 325 "frame/ds9parser.H"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



