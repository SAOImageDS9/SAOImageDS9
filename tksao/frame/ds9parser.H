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
     COLOR = 261,
     ANGDEGREE = 262,
     ANGRADIAN = 263,
     ARCMINUTE = 264,
     ARCSECOND = 265,
     PHYCOORD = 266,
     IMGCOORD = 267,
     SEXSTR = 268,
     HMSSTR = 269,
     DMSSTR = 270,
     EOF_ = 271,
     AMPLIFIER_ = 272,
     ANNULUS_ = 273,
     ARCMIN_ = 274,
     ARCSEC_ = 275,
     ARROW_ = 276,
     B1950_ = 277,
     BACKGROUND_ = 278,
     BEGIN_ = 279,
     BOX_ = 280,
     BOXCIRCLE_ = 281,
     BPANDA_ = 282,
     CALLBACK_ = 283,
     CIRCLE_ = 284,
     CIRCLE3D_ = 285,
     COLOR_ = 286,
     COMPASS_ = 287,
     COMPOSITE_ = 288,
     CPANDA_ = 289,
     CROSS_ = 290,
     DASH_ = 291,
     DASHLIST_ = 292,
     DEBUG_ = 293,
     DEGREES_ = 294,
     DELETE_ = 295,
     DETECTOR_ = 296,
     DIAMOND_ = 297,
     ECLIPTIC_ = 298,
     EDIT_ = 299,
     ELLIPSE_ = 300,
     END_ = 301,
     EPANDA_ = 302,
     FALSE_ = 303,
     FIELD_ = 304,
     FIXED_ = 305,
     FK4_ = 306,
     FK4_NO_E_ = 307,
     FK5_ = 308,
     FONT_ = 309,
     GALACTIC_ = 310,
     GLOBAL_ = 311,
     HELIOECLIPTIC_ = 312,
     HIGHLITE_ = 313,
     ICRS_ = 314,
     IGNORE_ = 315,
     IMAGE_ = 316,
     INCLUDE_ = 317,
     J2000_ = 318,
     KEY_ = 319,
     LINE_ = 320,
     LINEAR_ = 321,
     MOVE_ = 322,
     N_ = 323,
     NO_ = 324,
     OFF_ = 325,
     ON_ = 326,
     PHYSICAL_ = 327,
     PIE_ = 328,
     PIXELS_ = 329,
     POINT_ = 330,
     POLYGON_ = 331,
     PROJECTION_ = 332,
     PROPERTY_ = 333,
     ROTATE_ = 334,
     ROTBOX_ = 335,
     RULER_ = 336,
     SEGMENT_ = 337,
     SELECT_ = 338,
     SOURCE_ = 339,
     SUPERGALACTIC_ = 340,
     TAG_ = 341,
     TEXT_ = 342,
     TEXTANGLE_ = 343,
     TEXTROTATE_ = 344,
     TILE_ = 345,
     TRUE_ = 346,
     VECTOR_ = 347,
     VERSION_ = 348,
     UNHIGHLITE_ = 349,
     UNSELECT_ = 350,
     UPDATE_ = 351,
     WCS_ = 352,
     WCSA_ = 353,
     WCSB_ = 354,
     WCSC_ = 355,
     WCSD_ = 356,
     WCSE_ = 357,
     WCSF_ = 358,
     WCSG_ = 359,
     WCSH_ = 360,
     WCSI_ = 361,
     WCSJ_ = 362,
     WCSK_ = 363,
     WCSL_ = 364,
     WCSM_ = 365,
     WCSN_ = 366,
     WCSO_ = 367,
     WCSP_ = 368,
     WCSQ_ = 369,
     WCSR_ = 370,
     WCSS_ = 371,
     WCST_ = 372,
     WCSU_ = 373,
     WCSV_ = 374,
     WCSW_ = 375,
     WCSX_ = 376,
     WCSY_ = 377,
     WCSZ_ = 378,
     WCS0_ = 379,
     WIDTH_ = 380,
     X_ = 381,
     Y_ = 382,
     YES_ = 383
   };
#endif
/* Tokens.  */
#define INT 258
#define REAL 259
#define STRING 260
#define COLOR 261
#define ANGDEGREE 262
#define ANGRADIAN 263
#define ARCMINUTE 264
#define ARCSECOND 265
#define PHYCOORD 266
#define IMGCOORD 267
#define SEXSTR 268
#define HMSSTR 269
#define DMSSTR 270
#define EOF_ 271
#define AMPLIFIER_ 272
#define ANNULUS_ 273
#define ARCMIN_ 274
#define ARCSEC_ 275
#define ARROW_ 276
#define B1950_ 277
#define BACKGROUND_ 278
#define BEGIN_ 279
#define BOX_ 280
#define BOXCIRCLE_ 281
#define BPANDA_ 282
#define CALLBACK_ 283
#define CIRCLE_ 284
#define CIRCLE3D_ 285
#define COLOR_ 286
#define COMPASS_ 287
#define COMPOSITE_ 288
#define CPANDA_ 289
#define CROSS_ 290
#define DASH_ 291
#define DASHLIST_ 292
#define DEBUG_ 293
#define DEGREES_ 294
#define DELETE_ 295
#define DETECTOR_ 296
#define DIAMOND_ 297
#define ECLIPTIC_ 298
#define EDIT_ 299
#define ELLIPSE_ 300
#define END_ 301
#define EPANDA_ 302
#define FALSE_ 303
#define FIELD_ 304
#define FIXED_ 305
#define FK4_ 306
#define FK4_NO_E_ 307
#define FK5_ 308
#define FONT_ 309
#define GALACTIC_ 310
#define GLOBAL_ 311
#define HELIOECLIPTIC_ 312
#define HIGHLITE_ 313
#define ICRS_ 314
#define IGNORE_ 315
#define IMAGE_ 316
#define INCLUDE_ 317
#define J2000_ 318
#define KEY_ 319
#define LINE_ 320
#define LINEAR_ 321
#define MOVE_ 322
#define N_ 323
#define NO_ 324
#define OFF_ 325
#define ON_ 326
#define PHYSICAL_ 327
#define PIE_ 328
#define PIXELS_ 329
#define POINT_ 330
#define POLYGON_ 331
#define PROJECTION_ 332
#define PROPERTY_ 333
#define ROTATE_ 334
#define ROTBOX_ 335
#define RULER_ 336
#define SEGMENT_ 337
#define SELECT_ 338
#define SOURCE_ 339
#define SUPERGALACTIC_ 340
#define TAG_ 341
#define TEXT_ 342
#define TEXTANGLE_ 343
#define TEXTROTATE_ 344
#define TILE_ 345
#define TRUE_ 346
#define VECTOR_ 347
#define VERSION_ 348
#define UNHIGHLITE_ 349
#define UNSELECT_ 350
#define UPDATE_ 351
#define WCS_ 352
#define WCSA_ 353
#define WCSB_ 354
#define WCSC_ 355
#define WCSD_ 356
#define WCSE_ 357
#define WCSF_ 358
#define WCSG_ 359
#define WCSH_ 360
#define WCSI_ 361
#define WCSJ_ 362
#define WCSK_ 363
#define WCSL_ 364
#define WCSM_ 365
#define WCSN_ 366
#define WCSO_ 367
#define WCSP_ 368
#define WCSQ_ 369
#define WCSR_ 370
#define WCSS_ 371
#define WCST_ 372
#define WCSU_ 373
#define WCSV_ 374
#define WCSW_ 375
#define WCSX_ 376
#define WCSY_ 377
#define WCSZ_ 378
#define WCS0_ 379
#define WIDTH_ 380
#define X_ 381
#define Y_ 382
#define YES_ 383




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 136 "frame/ds9parser.Y"
{
#define MKBUFSIZE 2048
  double real;
  int integer;
  char str[MKBUFSIZE];
  double vector[3];
}
/* Line 1529 of yacc.c.  */
#line 313 "frame/ds9parser.H"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



