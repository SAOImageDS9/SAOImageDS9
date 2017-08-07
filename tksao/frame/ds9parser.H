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
     FK4_NO_E_ = 307,
     FK5_ = 308,
     FORMAT_ = 309,
     FONT_ = 310,
     GALACTIC_ = 311,
     GLOBAL_ = 312,
     HELIOECLIPTIC_ = 313,
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
     OFF_ = 326,
     ON_ = 327,
     PHYSICAL_ = 328,
     PIE_ = 329,
     PIXELS_ = 330,
     POINT_ = 331,
     POLYGON_ = 332,
     PROJECTION_ = 333,
     PROPERTY_ = 334,
     ROTATE_ = 335,
     ROTBOX_ = 336,
     RULER_ = 337,
     SEGMENT_ = 338,
     SELECT_ = 339,
     SOURCE_ = 340,
     SUPERGALACTIC_ = 341,
     TAG_ = 342,
     TEXT_ = 343,
     TEXTANGLE_ = 344,
     TEXTROTATE_ = 345,
     TILE_ = 346,
     TRUE_ = 347,
     VECTOR_ = 348,
     VERSION_ = 349,
     UNHIGHLITE_ = 350,
     UNSELECT_ = 351,
     UPDATE_ = 352,
     WCS_ = 353,
     WCSA_ = 354,
     WCSB_ = 355,
     WCSC_ = 356,
     WCSD_ = 357,
     WCSE_ = 358,
     WCSF_ = 359,
     WCSG_ = 360,
     WCSH_ = 361,
     WCSI_ = 362,
     WCSJ_ = 363,
     WCSK_ = 364,
     WCSL_ = 365,
     WCSM_ = 366,
     WCSN_ = 367,
     WCSO_ = 368,
     WCSP_ = 369,
     WCSQ_ = 370,
     WCSR_ = 371,
     WCSS_ = 372,
     WCST_ = 373,
     WCSU_ = 374,
     WCSV_ = 375,
     WCSW_ = 376,
     WCSX_ = 377,
     WCSY_ = 378,
     WCSZ_ = 379,
     WCS0_ = 380,
     WIDTH_ = 381,
     X_ = 382,
     Y_ = 383,
     YES_ = 384
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
#define FK4_NO_E_ 307
#define FK5_ 308
#define FORMAT_ 309
#define FONT_ 310
#define GALACTIC_ 311
#define GLOBAL_ 312
#define HELIOECLIPTIC_ 313
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
#define OFF_ 326
#define ON_ 327
#define PHYSICAL_ 328
#define PIE_ 329
#define PIXELS_ 330
#define POINT_ 331
#define POLYGON_ 332
#define PROJECTION_ 333
#define PROPERTY_ 334
#define ROTATE_ 335
#define ROTBOX_ 336
#define RULER_ 337
#define SEGMENT_ 338
#define SELECT_ 339
#define SOURCE_ 340
#define SUPERGALACTIC_ 341
#define TAG_ 342
#define TEXT_ 343
#define TEXTANGLE_ 344
#define TEXTROTATE_ 345
#define TILE_ 346
#define TRUE_ 347
#define VECTOR_ 348
#define VERSION_ 349
#define UNHIGHLITE_ 350
#define UNSELECT_ 351
#define UPDATE_ 352
#define WCS_ 353
#define WCSA_ 354
#define WCSB_ 355
#define WCSC_ 356
#define WCSD_ 357
#define WCSE_ 358
#define WCSF_ 359
#define WCSG_ 360
#define WCSH_ 361
#define WCSI_ 362
#define WCSJ_ 363
#define WCSK_ 364
#define WCSL_ 365
#define WCSM_ 366
#define WCSN_ 367
#define WCSO_ 368
#define WCSP_ 369
#define WCSQ_ 370
#define WCSR_ 371
#define WCSS_ 372
#define WCST_ 373
#define WCSU_ 374
#define WCSV_ 375
#define WCSW_ 376
#define WCSX_ 377
#define WCSY_ 378
#define WCSZ_ 379
#define WCS0_ 380
#define WIDTH_ 381
#define X_ 382
#define Y_ 383
#define YES_ 384




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
#line 315 "frame/ds9parser.H"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



