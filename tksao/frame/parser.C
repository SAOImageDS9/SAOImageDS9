/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse frparse
#define yylex   frlex
#define yyerror frerror
#define yylval  frlval
#define yychar  frchar
#define yydebug frdebug
#define yynerrs frnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     REAL = 258,
     INT = 259,
     STRING = 260,
     POINTER = 261,
     ANGDEGREE = 262,
     ANGRADIAN = 263,
     SEXSTR = 264,
     HMSSTR = 265,
     DMSSTR = 266,
     ABOUT_ = 267,
     AIP_ = 268,
     ALLOC_ = 269,
     ALLOCGZ_ = 270,
     ALIGN_ = 271,
     ALL_ = 272,
     ALT_ = 273,
     AMPLIFIER_ = 274,
     ANALYSIS_ = 275,
     ANGLE_ = 276,
     ANNULUS_ = 277,
     APPEND_ = 278,
     ARCMIN_ = 279,
     ARCSEC_ = 280,
     ARRAY_ = 281,
     ARROW_ = 282,
     ASINH_ = 283,
     AST_ = 284,
     AUTO_ = 285,
     AUX_ = 286,
     AVERAGE_ = 287,
     AXES_ = 288,
     AZIMUTH_ = 289,
     B1950_ = 290,
     BACK_ = 291,
     BACKGROUND_ = 292,
     BASE_ = 293,
     BBOX_ = 294,
     BEGIN_ = 295,
     BG_ = 296,
     BIG_ = 297,
     BIGENDIAN_ = 298,
     BIN_ = 299,
     BITPIX_ = 300,
     BLEND_ = 301,
     BLOCK_ = 302,
     BORDER_ = 303,
     BOX_ = 304,
     BOXANNULUS_ = 305,
     BOXCAR_ = 306,
     BOXCIRCLE_ = 307,
     BPANDA_ = 308,
     BUFFER_ = 309,
     BW_ = 310,
     CALLBACK_ = 311,
     CANVAS_ = 312,
     CATALOG_ = 313,
     CELESTIAL_ = 314,
     CENTER_ = 315,
     CENTROID_ = 316,
     CHANNEL_ = 317,
     CIRCLE_ = 318,
     CIAO_ = 319,
     CLEAR_ = 320,
     CLIP_ = 321,
     COLOR_ = 322,
     COLORBAR_ = 323,
     COLORMAP_ = 324,
     COLORSCALE_ = 325,
     COLORSPACE_ = 326,
     COLS_ = 327,
     COLUMN_ = 328,
     COMMAND_ = 329,
     COMPASS_ = 330,
     COMPOSITE_ = 331,
     COMPRESS_ = 332,
     CONTOUR_ = 333,
     CONTRAST_ = 334,
     COORDINATES_ = 335,
     COPY_ = 336,
     COUNT_ = 337,
     CPANDA_ = 338,
     CREATE_ = 339,
     CROP_ = 340,
     CROSS_ = 341,
     CROSSHAIR_ = 342,
     CUBE_ = 343,
     CURSOR_ = 344,
     CUT_ = 345,
     CMYK_ = 346,
     DARKEN_ = 347,
     DASH_ = 348,
     DASHLIST_ = 349,
     DATA_ = 350,
     DATAMIN_ = 351,
     DATASEC_ = 352,
     DEBUG_ = 353,
     DEGREES_ = 354,
     DEFAULT_ = 355,
     DELETE_ = 356,
     DEPTH_ = 357,
     DETECTOR_ = 358,
     DIAMOND_ = 359,
     DIM_ = 360,
     DS9_ = 361,
     EDIT_ = 362,
     ECLIPTIC_ = 363,
     ELEVATION_ = 364,
     ELLIPTIC_ = 365,
     ELLIPSE_ = 366,
     ELLIPSEANNULUS_ = 367,
     END_ = 368,
     ENVI_ = 369,
     EPANDA_ = 370,
     EPSILON_ = 371,
     EQUATORIAL_ = 372,
     ERASE_ = 373,
     EXT_ = 374,
     FADE_ = 375,
     FACTOR_ = 376,
     FALSE_ = 377,
     FILE_ = 378,
     FILL_ = 379,
     FILTER_ = 380,
     FIRST_ = 381,
     FIT_ = 382,
     FITS_ = 383,
     FITSY_ = 384,
     FIXED_ = 385,
     FK4_ = 386,
     FK5_ = 387,
     FONT_ = 388,
     FORMAT_ = 389,
     FOOTPRINT_ = 390,
     FROM_ = 391,
     FRONT_ = 392,
     FULL_ = 393,
     FUNCTION_ = 394,
     GALACTIC_ = 395,
     GAUSSIAN_ = 396,
     GET_ = 397,
     GLOBAL_ = 398,
     GRAPHICS_ = 399,
     GRAY_ = 400,
     GRID_ = 401,
     GZ_ = 402,
     HANDLE_ = 403,
     HAS_ = 404,
     HEAD_ = 405,
     HEADER_ = 406,
     HEIGHT_ = 407,
     HIDE_ = 408,
     HIGHLITE_ = 409,
     HISTEQU_ = 410,
     HISTOGRAM_ = 411,
     HORIZONTAL_ = 412,
     ICRS_ = 413,
     ID_ = 414,
     IIS_ = 415,
     IMAGE_ = 416,
     INCLUDE_ = 417,
     INCR_ = 418,
     INFO_ = 419,
     ITERATION_ = 420,
     IRAF_ = 421,
     IRAFMIN_ = 422,
     J2000_ = 423,
     KEY_ = 424,
     KEYWORD_ = 425,
     LABEL_ = 426,
     LAST_ = 427,
     LENGTH_ = 428,
     LEVEL_ = 429,
     LIGHTEN_ = 430,
     LITTLE_ = 431,
     LITTLEENDIAN_ = 432,
     LINE_ = 433,
     LINEAR_ = 434,
     LIST_ = 435,
     LOAD_ = 436,
     LOCAL_ = 437,
     LOG_ = 438,
     MACOSX_ = 439,
     MAGNIFIER_ = 440,
     MATCH_ = 441,
     MAP_ = 442,
     MARK_ = 443,
     MARKER_ = 444,
     MASK_ = 445,
     MEDIAN_ = 446,
     MESSAGE_ = 447,
     METHOD_ = 448,
     MINMAX_ = 449,
     MINOR_ = 450,
     MIP_ = 451,
     MMAP_ = 452,
     MMAPINCR_ = 453,
     MOSAIC_ = 454,
     MODE_ = 455,
     MOTION_ = 456,
     MOVE_ = 457,
     NAME_ = 458,
     NAN_ = 459,
     NATIVE_ = 460,
     NAXES_ = 461,
     NEW_ = 462,
     NEXT_ = 463,
     NO_ = 464,
     NONE_ = 465,
     NONNAN_ = 466,
     NONZERO_ = 467,
     NOW_ = 468,
     NRRD_ = 469,
     NUMBER_ = 470,
     OBJECT_ = 471,
     OFF_ = 472,
     ON_ = 473,
     ONLY_ = 474,
     OPTION_ = 475,
     ORIENT_ = 476,
     PAN_ = 477,
     PANNER_ = 478,
     PARSER_ = 479,
     PASTE_ = 480,
     PERF_ = 481,
     PHOTO_ = 482,
     PHYSICAL_ = 483,
     PIXEL_ = 484,
     PLOT2D_ = 485,
     PLOT3D_ = 486,
     POINT_ = 487,
     POINTER_ = 488,
     POLYGON_ = 489,
     POSTSCRIPT_ = 490,
     POW_ = 491,
     PRECISION_ = 492,
     PRINT_ = 493,
     PRESERVE_ = 494,
     PROJECTION_ = 495,
     PROPERTY_ = 496,
     PUBLICATION_ = 497,
     PROS_ = 498,
     QUERY_ = 499,
     RADIAL_ = 500,
     RADIUS_ = 501,
     RANGE_ = 502,
     REGION_ = 503,
     REPLACE_ = 504,
     RESAMPLE_ = 505,
     RESCAN_ = 506,
     RESET_ = 507,
     RESOLUTION_ = 508,
     RGB_ = 509,
     ROOT_ = 510,
     ROTATE_ = 511,
     RULER_ = 512,
     SAMPLE_ = 513,
     SAOIMAGE_ = 514,
     SAOTNG_ = 515,
     SAVE_ = 516,
     SCALE_ = 517,
     SCAN_ = 518,
     SCIENTIFIC_ = 519,
     SCOPE_ = 520,
     SCREEN_ = 521,
     SEGMENT_ = 522,
     SELECT_ = 523,
     SET_ = 524,
     SEXAGESIMAL_ = 525,
     SHAPE_ = 526,
     SHARED_ = 527,
     SHIFT_ = 528,
     SHMID_ = 529,
     SHOW_ = 530,
     SIGMA_ = 531,
     SINH_ = 532,
     SIZE_ = 533,
     SLICE_ = 534,
     SMMAP_ = 535,
     SMOOTH_ = 536,
     SOCKET_ = 537,
     SOCKETGZ_ = 538,
     SOURCE_ = 539,
     SQRT_ = 540,
     SQUARED_ = 541,
     SSHARED_ = 542,
     STATS_ = 543,
     STATUS_ = 544,
     SUM_ = 545,
     SYSTEM_ = 546,
     TABLE_ = 547,
     TAG_ = 548,
     TEMPLATE_ = 549,
     TEXT_ = 550,
     THREADS_ = 551,
     THREED_ = 552,
     THRESHOLD_ = 553,
     THICK_ = 554,
     TRANSPARENCY_ = 555,
     TO_ = 556,
     TOGGLE_ = 557,
     TOPHAT_ = 558,
     TRUE_ = 559,
     TYPE_ = 560,
     UNDO_ = 561,
     UNHIGHLITE_ = 562,
     UNLOAD_ = 563,
     UNSELECT_ = 564,
     UPDATE_ = 565,
     USER_ = 566,
     VALUE_ = 567,
     VAR_ = 568,
     VIEW_ = 569,
     VECTOR_ = 570,
     VERSION_ = 571,
     VERTEX_ = 572,
     VERTICAL_ = 573,
     WARP_ = 574,
     WCS_ = 575,
     WCSA_ = 576,
     WCSB_ = 577,
     WCSC_ = 578,
     WCSD_ = 579,
     WCSE_ = 580,
     WCSF_ = 581,
     WCSG_ = 582,
     WCSH_ = 583,
     WCSI_ = 584,
     WCSJ_ = 585,
     WCSK_ = 586,
     WCSL_ = 587,
     WCSM_ = 588,
     WCSN_ = 589,
     WCSO_ = 590,
     WCSP_ = 591,
     WCSQ_ = 592,
     WCSR_ = 593,
     WCSS_ = 594,
     WCST_ = 595,
     WCSU_ = 596,
     WCSV_ = 597,
     WCSW_ = 598,
     WCSX_ = 599,
     WCSY_ = 600,
     WCSZ_ = 601,
     WCS0_ = 602,
     WFPC2_ = 603,
     WIDTH_ = 604,
     WIN32_ = 605,
     XML_ = 606,
     XY_ = 607,
     YES_ = 608,
     ZERO_ = 609,
     ZMAX_ = 610,
     ZSCALE_ = 611,
     ZOOM_ = 612
   };
#endif
/* Tokens.  */
#define REAL 258
#define INT 259
#define STRING 260
#define POINTER 261
#define ANGDEGREE 262
#define ANGRADIAN 263
#define SEXSTR 264
#define HMSSTR 265
#define DMSSTR 266
#define ABOUT_ 267
#define AIP_ 268
#define ALLOC_ 269
#define ALLOCGZ_ 270
#define ALIGN_ 271
#define ALL_ 272
#define ALT_ 273
#define AMPLIFIER_ 274
#define ANALYSIS_ 275
#define ANGLE_ 276
#define ANNULUS_ 277
#define APPEND_ 278
#define ARCMIN_ 279
#define ARCSEC_ 280
#define ARRAY_ 281
#define ARROW_ 282
#define ASINH_ 283
#define AST_ 284
#define AUTO_ 285
#define AUX_ 286
#define AVERAGE_ 287
#define AXES_ 288
#define AZIMUTH_ 289
#define B1950_ 290
#define BACK_ 291
#define BACKGROUND_ 292
#define BASE_ 293
#define BBOX_ 294
#define BEGIN_ 295
#define BG_ 296
#define BIG_ 297
#define BIGENDIAN_ 298
#define BIN_ 299
#define BITPIX_ 300
#define BLEND_ 301
#define BLOCK_ 302
#define BORDER_ 303
#define BOX_ 304
#define BOXANNULUS_ 305
#define BOXCAR_ 306
#define BOXCIRCLE_ 307
#define BPANDA_ 308
#define BUFFER_ 309
#define BW_ 310
#define CALLBACK_ 311
#define CANVAS_ 312
#define CATALOG_ 313
#define CELESTIAL_ 314
#define CENTER_ 315
#define CENTROID_ 316
#define CHANNEL_ 317
#define CIRCLE_ 318
#define CIAO_ 319
#define CLEAR_ 320
#define CLIP_ 321
#define COLOR_ 322
#define COLORBAR_ 323
#define COLORMAP_ 324
#define COLORSCALE_ 325
#define COLORSPACE_ 326
#define COLS_ 327
#define COLUMN_ 328
#define COMMAND_ 329
#define COMPASS_ 330
#define COMPOSITE_ 331
#define COMPRESS_ 332
#define CONTOUR_ 333
#define CONTRAST_ 334
#define COORDINATES_ 335
#define COPY_ 336
#define COUNT_ 337
#define CPANDA_ 338
#define CREATE_ 339
#define CROP_ 340
#define CROSS_ 341
#define CROSSHAIR_ 342
#define CUBE_ 343
#define CURSOR_ 344
#define CUT_ 345
#define CMYK_ 346
#define DARKEN_ 347
#define DASH_ 348
#define DASHLIST_ 349
#define DATA_ 350
#define DATAMIN_ 351
#define DATASEC_ 352
#define DEBUG_ 353
#define DEGREES_ 354
#define DEFAULT_ 355
#define DELETE_ 356
#define DEPTH_ 357
#define DETECTOR_ 358
#define DIAMOND_ 359
#define DIM_ 360
#define DS9_ 361
#define EDIT_ 362
#define ECLIPTIC_ 363
#define ELEVATION_ 364
#define ELLIPTIC_ 365
#define ELLIPSE_ 366
#define ELLIPSEANNULUS_ 367
#define END_ 368
#define ENVI_ 369
#define EPANDA_ 370
#define EPSILON_ 371
#define EQUATORIAL_ 372
#define ERASE_ 373
#define EXT_ 374
#define FADE_ 375
#define FACTOR_ 376
#define FALSE_ 377
#define FILE_ 378
#define FILL_ 379
#define FILTER_ 380
#define FIRST_ 381
#define FIT_ 382
#define FITS_ 383
#define FITSY_ 384
#define FIXED_ 385
#define FK4_ 386
#define FK5_ 387
#define FONT_ 388
#define FORMAT_ 389
#define FOOTPRINT_ 390
#define FROM_ 391
#define FRONT_ 392
#define FULL_ 393
#define FUNCTION_ 394
#define GALACTIC_ 395
#define GAUSSIAN_ 396
#define GET_ 397
#define GLOBAL_ 398
#define GRAPHICS_ 399
#define GRAY_ 400
#define GRID_ 401
#define GZ_ 402
#define HANDLE_ 403
#define HAS_ 404
#define HEAD_ 405
#define HEADER_ 406
#define HEIGHT_ 407
#define HIDE_ 408
#define HIGHLITE_ 409
#define HISTEQU_ 410
#define HISTOGRAM_ 411
#define HORIZONTAL_ 412
#define ICRS_ 413
#define ID_ 414
#define IIS_ 415
#define IMAGE_ 416
#define INCLUDE_ 417
#define INCR_ 418
#define INFO_ 419
#define ITERATION_ 420
#define IRAF_ 421
#define IRAFMIN_ 422
#define J2000_ 423
#define KEY_ 424
#define KEYWORD_ 425
#define LABEL_ 426
#define LAST_ 427
#define LENGTH_ 428
#define LEVEL_ 429
#define LIGHTEN_ 430
#define LITTLE_ 431
#define LITTLEENDIAN_ 432
#define LINE_ 433
#define LINEAR_ 434
#define LIST_ 435
#define LOAD_ 436
#define LOCAL_ 437
#define LOG_ 438
#define MACOSX_ 439
#define MAGNIFIER_ 440
#define MATCH_ 441
#define MAP_ 442
#define MARK_ 443
#define MARKER_ 444
#define MASK_ 445
#define MEDIAN_ 446
#define MESSAGE_ 447
#define METHOD_ 448
#define MINMAX_ 449
#define MINOR_ 450
#define MIP_ 451
#define MMAP_ 452
#define MMAPINCR_ 453
#define MOSAIC_ 454
#define MODE_ 455
#define MOTION_ 456
#define MOVE_ 457
#define NAME_ 458
#define NAN_ 459
#define NATIVE_ 460
#define NAXES_ 461
#define NEW_ 462
#define NEXT_ 463
#define NO_ 464
#define NONE_ 465
#define NONNAN_ 466
#define NONZERO_ 467
#define NOW_ 468
#define NRRD_ 469
#define NUMBER_ 470
#define OBJECT_ 471
#define OFF_ 472
#define ON_ 473
#define ONLY_ 474
#define OPTION_ 475
#define ORIENT_ 476
#define PAN_ 477
#define PANNER_ 478
#define PARSER_ 479
#define PASTE_ 480
#define PERF_ 481
#define PHOTO_ 482
#define PHYSICAL_ 483
#define PIXEL_ 484
#define PLOT2D_ 485
#define PLOT3D_ 486
#define POINT_ 487
#define POINTER_ 488
#define POLYGON_ 489
#define POSTSCRIPT_ 490
#define POW_ 491
#define PRECISION_ 492
#define PRINT_ 493
#define PRESERVE_ 494
#define PROJECTION_ 495
#define PROPERTY_ 496
#define PUBLICATION_ 497
#define PROS_ 498
#define QUERY_ 499
#define RADIAL_ 500
#define RADIUS_ 501
#define RANGE_ 502
#define REGION_ 503
#define REPLACE_ 504
#define RESAMPLE_ 505
#define RESCAN_ 506
#define RESET_ 507
#define RESOLUTION_ 508
#define RGB_ 509
#define ROOT_ 510
#define ROTATE_ 511
#define RULER_ 512
#define SAMPLE_ 513
#define SAOIMAGE_ 514
#define SAOTNG_ 515
#define SAVE_ 516
#define SCALE_ 517
#define SCAN_ 518
#define SCIENTIFIC_ 519
#define SCOPE_ 520
#define SCREEN_ 521
#define SEGMENT_ 522
#define SELECT_ 523
#define SET_ 524
#define SEXAGESIMAL_ 525
#define SHAPE_ 526
#define SHARED_ 527
#define SHIFT_ 528
#define SHMID_ 529
#define SHOW_ 530
#define SIGMA_ 531
#define SINH_ 532
#define SIZE_ 533
#define SLICE_ 534
#define SMMAP_ 535
#define SMOOTH_ 536
#define SOCKET_ 537
#define SOCKETGZ_ 538
#define SOURCE_ 539
#define SQRT_ 540
#define SQUARED_ 541
#define SSHARED_ 542
#define STATS_ 543
#define STATUS_ 544
#define SUM_ 545
#define SYSTEM_ 546
#define TABLE_ 547
#define TAG_ 548
#define TEMPLATE_ 549
#define TEXT_ 550
#define THREADS_ 551
#define THREED_ 552
#define THRESHOLD_ 553
#define THICK_ 554
#define TRANSPARENCY_ 555
#define TO_ 556
#define TOGGLE_ 557
#define TOPHAT_ 558
#define TRUE_ 559
#define TYPE_ 560
#define UNDO_ 561
#define UNHIGHLITE_ 562
#define UNLOAD_ 563
#define UNSELECT_ 564
#define UPDATE_ 565
#define USER_ 566
#define VALUE_ 567
#define VAR_ 568
#define VIEW_ 569
#define VECTOR_ 570
#define VERSION_ 571
#define VERTEX_ 572
#define VERTICAL_ 573
#define WARP_ 574
#define WCS_ 575
#define WCSA_ 576
#define WCSB_ 577
#define WCSC_ 578
#define WCSD_ 579
#define WCSE_ 580
#define WCSF_ 581
#define WCSG_ 582
#define WCSH_ 583
#define WCSI_ 584
#define WCSJ_ 585
#define WCSK_ 586
#define WCSL_ 587
#define WCSM_ 588
#define WCSN_ 589
#define WCSO_ 590
#define WCSP_ 591
#define WCSQ_ 592
#define WCSR_ 593
#define WCSS_ 594
#define WCST_ 595
#define WCSU_ 596
#define WCSV_ 597
#define WCSW_ 598
#define WCSX_ 599
#define WCSY_ 600
#define WCSZ_ 601
#define WCS0_ 602
#define WFPC2_ 603
#define WIDTH_ 604
#define WIN32_ 605
#define XML_ 606
#define XY_ 607
#define YES_ 608
#define ZERO_ 609
#define ZMAX_ 610
#define ZSCALE_ 611
#define ZOOM_ 612




/* Copy the first part of user declarations.  */
#line 10 "frame/parser.Y"

#define YYDEBUG 1

#include <math.h>
#include <string.h>
#include <iostream>

#include "util.h"
#include "base.h"
#include "frame3d.h"
#include "fitsimage.h"
#include "fitsmask.h"
#include "marker.h"

#undef yyFlexLexer
#define yyFlexLexer frFlexLexer
#include <FlexLexer.h>

extern int frlex(void*, frFlexLexer*);
extern void frerror(Base*, frFlexLexer*, const char*);

static Coord::CoordSystem currentCoord = Coord::IMAGE;
static Coord::SkyFrame currentSky = Coord::FK5;

static unsigned short defaultProps = Marker::SELECT | Marker::HIGHLITE |
		Marker::EDIT | Marker::MOVE | Marker::ROTATE | 
		Marker::DELETE | Marker::INCLUDE | Marker::SOURCE;
static unsigned short currentProps;
static char currentColor[16];
static int currentWidth;
static int currentDash[2];
static char currentFont[32];
static char currentText[80];

static List<Tag> taglist;
static List<CallBack> cblist;

static unsigned short propQMask;
static unsigned short propQValue;

static void setProps(unsigned short* props, unsigned short prop, int value);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 53 "frame/parser.Y"
{
#define FRBUFSIZE 4096
  char chr;
  char str[FRBUFSIZE];
  unsigned long ptr;
  int integer;
  double real;
  double vector[3];
  int dash[2];
}
/* Line 193 of yacc.c.  */
#line 872 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 885 "frame/parser.C"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  362
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5613

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  362
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  222
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1287
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2827

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   612

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   361,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   359,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   360,   358,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    13,    17,    21,    24,    26,
      28,    31,    35,    38,    41,    44,    47,    50,    53,    56,
      59,    62,    65,    68,    71,    73,    76,    80,    83,    87,
      90,    93,    96,    99,   103,   106,   110,   114,   117,   120,
     123,   126,   129,   132,   134,   138,   141,   144,   147,   149,
     152,   155,   158,   160,   163,   165,   168,   171,   174,   177,
     179,   181,   183,   186,   189,   192,   195,   198,   201,   204,
     207,   210,   213,   215,   217,   219,   221,   223,   225,   227,
     229,   231,   232,   235,   238,   240,   242,   243,   245,   247,
     249,   251,   253,   255,   257,   260,   263,   266,   269,   271,
     273,   275,   277,   279,   281,   283,   285,   287,   289,   291,
     293,   295,   297,   299,   301,   303,   305,   307,   309,   311,
     313,   315,   317,   319,   321,   323,   325,   327,   329,   331,
     333,   335,   337,   339,   340,   342,   344,   346,   348,   350,
     351,   353,   355,   357,   359,   361,   363,   365,   367,   369,
     371,   373,   375,   377,   379,   381,   383,   385,   386,   388,
     390,   392,   394,   396,   398,   400,   401,   403,   405,   406,
     408,   410,   412,   413,   415,   417,   418,   420,   422,   423,
     425,   427,   428,   430,   432,   434,   436,   438,   440,   442,
     443,   445,   447,   449,   451,   453,   455,   457,   458,   460,
     462,   464,   465,   467,   469,   471,   473,   475,   478,   481,
     484,   487,   490,   493,   496,   499,   501,   504,   506,   509,
     511,   514,   517,   524,   527,   532,   535,   538,   541,   545,
     548,   551,   553,   556,   558,   561,   566,   572,   575,   579,
     585,   592,   594,   596,   598,   606,   618,   627,   640,   642,
     645,   648,   650,   652,   655,   658,   661,   664,   668,   672,
     675,   678,   680,   682,   684,   686,   688,   690,   692,   695,
     698,   701,   703,   707,   710,   713,   716,   723,   734,   736,
     739,   741,   748,   759,   761,   764,   767,   770,   773,   776,
     779,   793,   807,   820,   833,   835,   836,   838,   840,   845,
     852,   854,   856,   858,   860,   862,   864,   866,   868,   870,
     875,   879,   884,   885,   892,   901,   904,   908,   912,   916,
     917,   922,   927,   932,   937,   941,   945,   947,   951,   957,
     962,   967,   971,   974,   975,   977,   979,   981,   984,   986,
     990,   991,   994,   997,  1000,  1003,  1006,  1009,  1012,  1015,
    1018,  1021,  1024,  1027,  1030,  1033,  1035,  1038,  1041,  1044,
    1049,  1053,  1056,  1059,  1062,  1064,  1068,  1071,  1074,  1076,
    1079,  1088,  1091,  1093,  1096,  1098,  1101,  1103,  1108,  1112,
    1115,  1117,  1125,  1134,  1142,  1151,  1153,  1155,  1157,  1160,
    1162,  1164,  1167,  1169,  1170,  1173,  1176,  1178,  1179,  1182,
    1185,  1187,  1189,  1192,  1195,  1198,  1200,  1202,  1204,  1206,
    1208,  1210,  1211,  1213,  1216,  1218,  1223,  1229,  1230,  1233,
    1235,  1241,  1244,  1247,  1249,  1251,  1253,  1256,  1258,  1261,
    1263,  1265,  1266,  1268,  1270,  1271,  1273,  1279,  1286,  1290,
    1297,  1301,  1303,  1307,  1309,  1311,  1313,  1317,  1324,  1332,
    1338,  1341,  1343,  1349,  1355,  1357,  1361,  1362,  1364,  1367,
    1369,  1374,  1376,  1379,  1381,  1384,  1388,  1391,  1393,  1396,
    1398,  1403,  1406,  1408,  1410,  1414,  1416,  1419,  1423,  1426,
    1427,  1429,  1431,  1436,  1439,  1440,  1442,  1446,  1451,  1456,
    1457,  1459,  1461,  1463,  1465,  1467,  1469,  1471,  1473,  1475,
    1477,  1479,  1481,  1483,  1485,  1487,  1490,  1492,  1495,  1497,
    1500,  1503,  1506,  1509,  1511,  1513,  1515,  1516,  1518,  1519,
    1521,  1522,  1524,  1525,  1527,  1528,  1531,  1534,  1535,  1537,
    1540,  1542,  1549,  1555,  1557,  1559,  1561,  1564,  1567,  1570,
    1572,  1574,  1576,  1578,  1581,  1583,  1585,  1587,  1590,  1592,
    1594,  1596,  1599,  1602,  1605,  1606,  1608,  1609,  1611,  1613,
    1615,  1617,  1619,  1621,  1623,  1625,  1628,  1631,  1634,  1636,
    1639,  1643,  1645,  1648,  1651,  1656,  1663,  1665,  1676,  1678,
    1681,  1685,  1689,  1692,  1695,  1698,  1701,  1704,  1707,  1710,
    1715,  1720,  1725,  1729,  1733,  1739,  1744,  1749,  1754,  1758,
    1762,  1766,  1770,  1773,  1776,  1781,  1785,  1789,  1793,  1797,
    1802,  1807,  1812,  1817,  1823,  1828,  1835,  1843,  1848,  1853,
    1859,  1862,  1866,  1870,  1874,  1877,  1881,  1885,  1889,  1893,
    1898,  1902,  1908,  1915,  1919,  1923,  1928,  1932,  1936,  1940,
    1944,  1948,  1954,  1958,  1962,  1967,  1971,  1974,  1977,  1979,
    1983,  1988,  1993,  1998,  2003,  2008,  2015,  2020,  2025,  2031,
    2036,  2041,  2046,  2051,  2057,  2062,  2069,  2077,  2082,  2087,
    2093,  2099,  2105,  2111,  2117,  2123,  2131,  2137,  2143,  2150,
    2155,  2160,  2165,  2170,  2175,  2182,  2187,  2192,  2198,  2204,
    2210,  2216,  2222,  2229,  2235,  2243,  2252,  2258,  2264,  2271,
    2275,  2279,  2283,  2287,  2292,  2296,  2302,  2309,  2313,  2317,
    2322,  2326,  2330,  2334,  2338,  2342,  2348,  2352,  2356,  2361,
    2366,  2371,  2375,  2381,  2386,  2391,  2394,  2398,  2405,  2412,
    2414,  2416,  2418,  2421,  2424,  2427,  2431,  2435,  2438,  2451,
    2454,  2457,  2459,  2463,  2468,  2471,  2472,  2476,  2478,  2481,
    2484,  2487,  2490,  2493,  2498,  2503,  2508,  2512,  2517,  2523,
    2532,  2539,  2544,  2554,  2561,  2569,  2580,  2592,  2605,  2615,
    2621,  2626,  2633,  2637,  2643,  2649,  2656,  2662,  2667,  2677,
    2688,  2700,  2710,  2717,  2724,  2731,  2738,  2745,  2752,  2759,
    2766,  2773,  2781,  2789,  2792,  2797,  2802,  2807,  2812,  2818,
    2823,  2828,  2834,  2840,  2844,  2849,  2854,  2859,  2864,  2872,
    2882,  2889,  2900,  2912,  2925,  2935,  2939,  2942,  2946,  2952,
    2960,  2965,  2969,  2973,  2980,  2988,  2996,  3001,  3006,  3011,
    3021,  3026,  3030,  3035,  3043,  3051,  3054,  3058,  3062,  3066,
    3071,  3074,  3077,  3082,  3093,  3097,  3099,  3103,  3106,  3109,
    3112,  3115,  3119,  3125,  3130,  3136,  3139,  3142,  3145,  3148,
    3152,  3155,  3158,  3161,  3165,  3168,  3172,  3177,  3181,  3185,
    3192,  3197,  3200,  3204,  3207,  3210,  3215,  3219,  3223,  3226,
    3230,  3232,  3235,  3237,  3240,  3243,  3246,  3248,  3250,  3252,
    3254,  3257,  3259,  3262,  3265,  3267,  3270,  3273,  3275,  3278,
    3280,  3282,  3284,  3286,  3288,  3290,  3292,  3294,  3295,  3297,
    3300,  3303,  3306,  3310,  3316,  3324,  3332,  3339,  3346,  3353,
    3360,  3366,  3373,  3380,  3387,  3394,  3401,  3408,  3415,  3427,
    3435,  3443,  3451,  3461,  3471,  3482,  3495,  3508,  3511,  3514,
    3518,  3523,  3528,  3533,  3534,  3536,  3538,  3543,  3548,  3550,
    3552,  3554,  3556,  3558,  3560,  3562,  3564,  3567,  3569,  3571,
    3573,  3577,  3581,  3590,  3597,  3608,  3616,  3624,  3630,  3633,
    3636,  3640,  3645,  3651,  3655,  3661,  3667,  3671,  3676,  3682,
    3688,  3694,  3698,  3704,  3707,  3711,  3715,  3721,  3725,  3729,
    3733,  3738,  3744,  3750,  3754,  3760,  3766,  3770,  3775,  3781,
    3787,  3790,  3793,  3797,  3803,  3810,  3817,  3821,  3825,  3829,
    3836,  3842,  3848,  3851,  3855,  3859,  3865,  3872,  3876,  3879,
    3882,  3886,  3889,  3893,  3896,  3900,  3906,  3913,  3916,  3919,
    3922,  3924,  3929,  3934,  3936,  3939,  3942,  3945,  3948,  3951,
    3954,  3957,  3961,  3964,  3968,  3971,  3975,  3977,  3979,  3981,
    3983,  3985,  3986,  3989,  3990,  3993,  3994,  3996,  3997,  3998,
    4000,  4002,  4004,  4006,  4008,  4016,  4025,  4028,  4035,  4038,
    4045,  4048,  4052,  4055,  4057,  4059,  4063,  4067,  4069,  4074,
    4077,  4079,  4083,  4087,  4092,  4096,  4100,  4104,  4106,  4108,
    4110,  4112,  4114,  4116,  4118,  4120,  4122,  4124,  4126,  4128,
    4130,  4132,  4135,  4136,  4137,  4140,  4147,  4155,  4158,  4160,
    4164,  4166,  4170,  4172,  4174,  4176,  4179,  4182,  4184,  4188,
    4189,  4190,  4193,  4196,  4198,  4202,  4208,  4210,  4213,  4216,
    4220,  4223,  4226,  4229,  4232,  4234,  4236,  4238,  4240,  4245,
    4248,  4252,  4256,  4259,  4263,  4266,  4269,  4272,  4276,  4280,
    4284,  4287,  4291,  4293,  4297,  4301,  4303,  4306,  4309,  4312,
    4315,  4325,  4332,  4334,  4336,  4338,  4340,  4343,  4346,  4350,
    4354,  4356,  4359,  4363,  4367,  4369,  4372,  4374,  4376,  4378,
    4380,  4382,  4385,  4388,  4393,  4395,  4398,  4401,  4404,  4408,
    4410,  4412,  4414,  4417,  4420,  4423,  4426,  4429,  4433,  4437,
    4441,  4445,  4449,  4453,  4457,  4459,  4462,  4465,  4468,  4472,
    4475,  4479,  4483,  4486,  4489,  4492,  4495,  4498,  4501,  4504,
    4507,  4510,  4513,  4516,  4519,  4522,  4525,  4529,  4533,  4537,
    4540,  4543,  4546,  4549,  4552,  4555,  4558,  4561,  4564,  4567,
    4570,  4573,  4577,  4581,  4585,  4590,  4597,  4600,  4602,  4604,
    4606,  4608,  4610,  4611,  4617,  4619,  4626,  4630,  4632,  4635,
    4638,  4641,  4645,  4649,  4652,  4655,  4658,  4661,  4664,  4667,
    4671,  4674,  4677,  4681,  4683,  4687,  4692,  4694,  4697,  4703,
    4710,  4717,  4720,  4722,  4725,  4728,  4734,  4741
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     363,     0,    -1,    98,   365,    -1,    44,   397,    -1,    41,
      67,     5,    -1,    41,    67,   145,    -1,    41,    67,   366,
      -1,    47,   402,    -1,    60,    -1,    65,    -1,    66,   404,
      -1,    68,   293,     5,    -1,    69,   409,    -1,    70,   411,
      -1,    78,   412,    -1,    85,   421,    -1,    87,   423,    -1,
      88,   424,    -1,    97,   366,    -1,   120,   426,    -1,   129,
     427,    -1,   142,   428,    -1,   146,   472,    -1,   149,   475,
      -1,   153,    -1,   154,   366,    -1,   154,    67,     5,    -1,
     160,   481,    -1,   166,    16,     4,    -1,   181,   484,    -1,
     184,   502,    -1,   185,   503,    -1,   186,   504,    -1,   189,
     520,   505,    -1,   190,   540,    -1,   204,    67,     5,    -1,
     204,    67,   145,    -1,   221,   541,    -1,   222,   542,    -1,
     223,   545,    -1,   244,    89,    -1,   237,   547,    -1,   235,
     546,    -1,   252,    -1,   248,   520,   549,    -1,   254,   554,
      -1,   256,   555,    -1,   261,   557,    -1,   275,    -1,   281,
     572,    -1,   296,     4,    -1,   297,   392,    -1,   308,    -1,
     310,   574,    -1,   316,    -1,   319,   576,    -1,   320,   577,
      -1,   350,   581,    -1,   357,   582,    -1,     3,    -1,     4,
      -1,   366,    -1,   199,   366,    -1,   224,   366,    -1,   226,
     366,    -1,   320,   366,    -1,    44,   366,    -1,    47,   366,
      -1,    77,   366,    -1,    85,   366,    -1,   147,   366,    -1,
     254,   366,    -1,     4,    -1,   353,    -1,   358,    -1,   218,
      -1,   304,    -1,   209,    -1,   359,    -1,   217,    -1,   122,
      -1,    -1,   255,    38,    -1,   138,    38,    -1,   255,    -1,
     138,    -1,    -1,   369,    -1,   364,    -1,     7,    -1,     8,
      -1,     9,    -1,    10,    -1,    11,    -1,   370,   370,    -1,
     371,   372,    -1,   372,   372,    -1,   364,   364,    -1,   161,
      -1,   228,    -1,   103,    -1,    19,    -1,   375,    -1,   320,
      -1,   321,    -1,   322,    -1,   323,    -1,   324,    -1,   325,
      -1,   326,    -1,   327,    -1,   328,    -1,   329,    -1,   330,
      -1,   331,    -1,   332,    -1,   333,    -1,   334,    -1,   335,
      -1,   336,    -1,   337,    -1,   338,    -1,   339,    -1,   340,
      -1,   341,    -1,   342,    -1,   343,    -1,   344,    -1,   345,
      -1,   346,    -1,   347,    -1,    57,    -1,   223,    -1,    -1,
     354,    -1,   212,    -1,   204,    -1,   211,    -1,   247,    -1,
      -1,   284,    -1,   266,    -1,    92,    -1,   175,    -1,   179,
      -1,   183,    -1,   236,    -1,   285,    -1,   286,    -1,    28,
      -1,   277,    -1,   155,    -1,    30,    -1,   263,    -1,   258,
      -1,    96,    -1,   167,    -1,    -1,   131,    -1,    35,    -1,
     132,    -1,   168,    -1,   158,    -1,   140,    -1,   108,    -1,
      -1,    99,    -1,   270,    -1,    -1,    99,    -1,    24,    -1,
      25,    -1,    -1,   274,    -1,   169,    -1,    -1,    17,    -1,
     163,    -1,    -1,   161,    -1,   190,    -1,    -1,    63,    -1,
      49,    -1,   104,    -1,    86,    -1,   360,    -1,    27,    -1,
      52,    -1,    -1,     4,    -1,    83,    -1,   156,    -1,   230,
      -1,   231,    -1,   245,    -1,   288,    -1,    -1,    32,    -1,
     290,    -1,   191,    -1,    -1,   205,    -1,    42,    -1,    43,
      -1,   176,    -1,   177,    -1,   314,   396,    -1,    48,   393,
      -1,    75,   394,    -1,   154,   395,    -1,   193,   552,    -1,
      37,   553,    -1,   262,   364,    -1,   298,   364,    -1,   366,
      -1,    67,     5,    -1,   366,    -1,    67,     5,    -1,   366,
      -1,    67,     5,    -1,   364,   364,    -1,   232,   364,   364,
     364,   364,   364,    -1,    12,   398,    -1,    72,     5,     5,
       5,    -1,   102,     4,    -1,   121,   399,    -1,   139,   400,
      -1,    54,   278,     4,    -1,   301,   401,    -1,   125,     5,
      -1,    60,    -1,   364,   364,    -1,   364,    -1,   364,   364,
      -1,   364,    12,   364,   364,    -1,   364,   364,    12,   364,
     364,    -1,   301,   364,    -1,   301,   364,   364,    -1,   301,
     364,    12,   364,   364,    -1,   301,   364,   364,    12,   364,
     364,    -1,    32,    -1,   290,    -1,   127,    -1,   364,   364,
      12,    60,     5,     5,     5,    -1,   364,   364,     4,   364,
     364,    12,    60,     5,     5,     5,     5,    -1,   364,   364,
      12,   364,   364,     5,     5,     5,    -1,   364,   364,     4,
     364,   364,    12,   364,   364,     5,     5,     5,     5,    -1,
     364,    -1,   364,   364,    -1,   301,   403,    -1,   127,    -1,
     364,    -1,   364,   364,    -1,   265,   405,    -1,   200,   406,
      -1,   194,   407,    -1,   311,   364,   364,    -1,   311,   204,
     204,    -1,   356,   408,    -1,   239,   366,    -1,   143,    -1,
     182,    -1,   364,    -1,   194,    -1,   356,    -1,   355,    -1,
     311,    -1,     4,   380,    -1,   200,   380,    -1,   258,     4,
      -1,   251,    -1,   364,     4,     4,    -1,    79,   364,    -1,
     258,     4,    -1,   178,     4,    -1,     4,   364,   364,     4,
       6,     4,    -1,   254,   364,   364,   364,   364,   364,   364,
       4,     6,     4,    -1,    40,    -1,   201,   410,    -1,   113,
      -1,     4,   364,   364,     4,     6,     4,    -1,   254,   364,
     364,   364,   364,   364,   364,     4,     6,     4,    -1,   379,
      -1,   183,   364,    -1,    84,   413,    -1,   101,   414,    -1,
     181,   415,    -1,   225,   419,    -1,   261,   420,    -1,     5,
       4,     4,   418,     4,     4,   379,   364,   416,   417,   364,
     364,     5,    -1,     5,     4,     4,   418,     4,     4,   379,
     364,   364,   417,   364,   364,     5,    -1,     5,     4,     4,
     418,     4,     4,   379,   364,   416,   364,   364,     5,    -1,
       5,     4,     4,   418,     4,     4,   379,   364,   364,   364,
     364,     5,    -1,   234,    -1,    -1,    31,    -1,     5,    -1,
       5,     5,     4,   366,    -1,     5,     4,   366,     5,   374,
     381,    -1,   194,    -1,   356,    -1,   355,    -1,   311,    -1,
     143,    -1,   182,    -1,   281,    -1,    47,    -1,     5,    -1,
       5,     5,     4,   366,    -1,     5,   374,   381,    -1,    31,
       5,   374,   381,    -1,    -1,   364,   364,   364,   364,   374,
     381,    -1,    60,   373,   374,   381,   364,   364,   374,   383,
      -1,   297,   422,    -1,    40,   364,   364,    -1,   201,   364,
     364,    -1,   113,   364,   364,    -1,    -1,   364,   364,   374,
     381,    -1,    40,   364,   364,     4,    -1,   201,   364,   364,
       4,    -1,   113,   364,   364,     4,    -1,   376,   364,   364,
      -1,   374,   381,   373,    -1,   366,    -1,   319,   364,   364,
      -1,    40,   201,   376,   364,   364,    -1,   201,   376,   364,
     364,    -1,    40,   201,   374,   373,    -1,   201,   374,   373,
      -1,    33,     4,    -1,    -1,    32,    -1,   290,    -1,   191,
      -1,     6,   364,    -1,    65,    -1,   149,   119,     5,    -1,
      -1,    41,    67,    -1,    44,   431,    -1,    47,   433,    -1,
      66,   434,    -1,    69,   438,    -1,    68,   437,    -1,    70,
     440,    -1,    78,   442,    -1,    80,   445,    -1,    85,   446,
      -1,    87,   447,    -1,    89,   449,    -1,    88,   448,    -1,
      95,   450,    -1,    97,    -1,   128,   454,    -1,   146,   460,
      -1,   154,    67,    -1,   156,     5,     5,     4,    -1,   157,
      90,   429,    -1,   160,   452,    -1,   164,   451,    -1,   166,
      16,    -1,   194,    -1,   189,   520,   514,    -1,   190,   461,
      -1,   204,    67,    -1,   221,    -1,   222,   462,    -1,   229,
     292,   376,   364,   364,     4,     4,     5,    -1,   254,   463,
      -1,   256,    -1,   281,   464,    -1,   296,    -1,   297,   465,
      -1,   305,    -1,   312,   376,   364,   364,    -1,   318,    90,
     430,    -1,   320,   470,    -1,   357,    -1,     5,     5,   364,
     364,   376,     4,   425,    -1,     5,     5,   364,   364,   374,
     381,     4,   425,    -1,     5,     5,   364,   364,   376,     4,
     425,    -1,     5,     5,   364,   364,   374,   381,     4,   425,
      -1,   102,    -1,   121,    -1,   139,    -1,    54,   278,    -1,
      89,    -1,   125,    -1,    72,   432,    -1,   180,    -1,    -1,
     194,     5,    -1,   105,     5,    -1,   121,    -1,    -1,   416,
     417,    -1,   364,   417,    -1,   265,    -1,   200,    -1,   194,
     435,    -1,   311,   174,    -1,   356,   436,    -1,   239,    -1,
     200,    -1,   258,    -1,    79,    -1,   258,    -1,   178,    -1,
      -1,   293,    -1,   174,   439,    -1,     4,    -1,     4,   376,
     364,   364,    -1,     4,   364,   364,   379,   364,    -1,    -1,
     174,   441,    -1,   183,    -1,     4,   364,   364,   379,   364,
      -1,   374,   381,    -1,    66,   443,    -1,    67,    -1,    93,
      -1,   174,    -1,   215,   174,    -1,   193,    -1,    70,   444,
      -1,   281,    -1,   349,    -1,    -1,   200,    -1,   265,    -1,
      -1,   183,    -1,   364,   364,   374,   381,   382,    -1,   376,
     364,   364,   374,   381,   382,    -1,   374,   381,   382,    -1,
      60,   374,   381,   382,   374,   383,    -1,   297,   374,   381,
      -1,   376,    -1,   374,   381,   382,    -1,   289,    -1,    33,
      -1,   376,    -1,   374,   381,   382,    -1,   374,   381,   373,
     364,   364,     5,    -1,     4,   374,   381,   373,   364,   364,
       5,    -1,   376,   364,   364,     4,     4,    -1,     5,   367,
      -1,    66,    -1,   376,   364,   364,     5,   367,    -1,     6,
       4,     4,     4,     4,    -1,    89,    -1,   123,   203,   453,
      -1,    -1,     4,    -1,   364,   364,    -1,   206,    -1,    60,
     374,   381,   382,    -1,    82,    -1,   102,   457,    -1,    45,
      -1,   119,   455,    -1,   123,   203,   458,    -1,   151,   456,
      -1,   152,    -1,   216,   203,    -1,   278,    -1,   278,   374,
     381,   383,    -1,   279,   459,    -1,   349,    -1,     4,    -1,
     376,   364,   364,    -1,     4,    -1,   170,     5,    -1,     4,
     170,     5,    -1,   320,     4,    -1,    -1,     4,    -1,   367,
      -1,   367,   376,   364,   364,    -1,   367,     4,    -1,    -1,
       4,    -1,   136,   161,   374,    -1,   136,   161,     4,   374,
      -1,   301,   161,   364,   374,    -1,    -1,   220,    -1,   313,
      -1,    67,    -1,   188,    -1,   247,    -1,   291,    -1,   300,
      -1,    82,    -1,    46,    -1,   239,    -1,    62,    -1,   291,
      -1,   314,    -1,   139,    -1,   246,    -1,   246,   195,    -1,
     276,    -1,   276,   195,    -1,    21,    -1,   314,   469,    -1,
      48,   466,    -1,    75,   467,    -1,   154,   468,    -1,   193,
      -1,    37,    -1,   262,    -1,    -1,    67,    -1,    -1,    67,
      -1,    -1,    67,    -1,    -1,   232,    -1,    -1,    16,   471,
      -1,   203,   375,    -1,    -1,   233,    -1,    84,   473,    -1,
     101,    -1,   374,   381,   382,   474,     5,     5,    -1,   374,
     381,   382,   474,     5,    -1,    20,    -1,   242,    -1,    19,
      -1,    41,    67,    -1,    44,   476,    -1,    78,   477,    -1,
      85,    -1,    96,    -1,    97,    -1,   103,    -1,   128,   478,
      -1,   146,    -1,   160,    -1,   167,    -1,   189,   479,    -1,
     228,    -1,   161,    -1,   281,    -1,   291,   374,    -1,   320,
     480,    -1,    73,     5,    -1,    -1,    31,    -1,    -1,    44,
      -1,    88,    -1,   199,    -1,   154,    -1,   268,    -1,   225,
      -1,   306,    -1,   374,    -1,    59,   374,    -1,   117,   374,
      -1,   179,   374,    -1,    18,    -1,   297,   374,    -1,   207,
       4,     4,    -1,   118,    -1,   192,     5,    -1,    89,   483,
      -1,   269,   123,   203,   482,    -1,   269,     6,     4,     4,
       4,     4,    -1,   310,    -1,   320,   364,   364,   364,   364,
     364,   364,   364,   364,     4,    -1,     5,    -1,     5,     4,
      -1,     4,     4,    57,    -1,     4,     4,   374,    -1,   200,
     366,    -1,    26,   485,    -1,   114,   487,    -1,   128,   488,
      -1,   163,   501,    -1,   214,   499,    -1,   227,   500,    -1,
       5,    14,     5,   386,    -1,     5,    15,     5,   386,    -1,
       5,    62,     5,   386,    -1,     5,   197,   386,    -1,     5,
     198,   386,    -1,     5,   272,   384,     4,   386,    -1,     5,
     282,     4,   386,    -1,     5,   283,     4,   386,    -1,     5,
     313,     5,   386,    -1,   254,    88,   486,    -1,     5,    14,
       5,    -1,     5,    15,     5,    -1,     5,    62,     5,    -1,
       5,   197,    -1,     5,   198,    -1,     5,   272,   384,     4,
      -1,     5,   282,     4,    -1,     5,   283,     4,    -1,     5,
     313,     5,    -1,     5,     5,   280,    -1,     5,    14,     5,
     386,    -1,     5,    15,     5,   386,    -1,     5,    62,     5,
     386,    -1,     5,   197,   385,   386,    -1,     5,     5,   280,
     385,   386,    -1,     5,   198,   385,   386,    -1,     5,   272,
     384,     4,   385,   386,    -1,     5,   287,   384,     4,     4,
     385,   386,    -1,     5,   282,     4,   386,    -1,     5,   283,
       4,   386,    -1,     5,   313,     5,   385,   386,    -1,   279,
     489,    -1,   119,    88,   490,    -1,   254,   161,   498,    -1,
     254,    88,   497,    -1,   199,   491,    -1,     5,    14,     5,
      -1,     5,    15,     5,    -1,     5,    62,     5,    -1,     5,
     197,   385,    -1,     5,     5,   280,   385,    -1,     5,   198,
     385,    -1,     5,   272,   384,     4,   385,    -1,     5,   287,
     384,     4,     4,   385,    -1,     5,   282,     4,    -1,     5,
     283,     4,    -1,     5,   313,     5,   385,    -1,     5,    14,
       5,    -1,     5,    15,     5,    -1,     5,    62,     5,    -1,
       5,   197,   385,    -1,     5,   198,   385,    -1,     5,   272,
     384,     4,   385,    -1,     5,   282,     4,    -1,     5,   283,
       4,    -1,     5,   313,     5,   385,    -1,   161,   166,   492,
      -1,   166,   493,    -1,   161,   494,    -1,   496,    -1,   161,
     348,   495,    -1,     5,    14,     5,   386,    -1,     5,    15,
       5,   386,    -1,     5,    62,     5,   386,    -1,     5,   197,
     385,   386,    -1,     5,   198,   385,   386,    -1,     5,   272,
     384,     4,   385,   386,    -1,     5,   282,     4,   386,    -1,
       5,   283,     4,   386,    -1,     5,   313,     5,   385,   386,
      -1,     5,    14,     5,   386,    -1,     5,    15,     5,   386,
      -1,     5,    62,     5,   386,    -1,     5,   197,   385,   386,
      -1,     5,     5,   280,   385,   386,    -1,     5,   198,   385,
     386,    -1,     5,   272,   384,     4,   385,   386,    -1,     5,
     287,   384,     4,     4,   385,   386,    -1,     5,   282,     4,
     386,    -1,     5,   283,     4,   386,    -1,     5,   313,     5,
     385,   386,    -1,   375,     5,    14,     5,   386,    -1,   375,
       5,    15,     5,   386,    -1,   375,     5,    62,     5,   386,
      -1,   375,     5,   197,   385,   386,    -1,   375,     5,   198,
     385,   386,    -1,   375,     5,   272,   384,     4,   385,   386,
      -1,   375,     5,   282,     4,   386,    -1,   375,     5,   283,
       4,   386,    -1,   375,     5,   313,     5,   385,   386,    -1,
       5,    14,     5,   386,    -1,     5,    15,     5,   386,    -1,
       5,    62,     5,   386,    -1,     5,   197,   385,   386,    -1,
       5,   198,   385,   386,    -1,     5,   272,   384,     4,   385,
     386,    -1,     5,   282,     4,   386,    -1,     5,   283,     4,
     386,    -1,     5,   313,     5,   385,   386,    -1,   375,     5,
      14,     5,   386,    -1,   375,     5,    15,     5,   386,    -1,
     375,     5,    62,     5,   386,    -1,   375,     5,   197,   385,
     386,    -1,   375,     5,     5,   280,   385,   386,    -1,   375,
       5,   198,   385,   386,    -1,   375,     5,   272,   384,     4,
     385,   386,    -1,   375,     5,   287,   384,     4,     4,   385,
     386,    -1,   375,     5,   282,     4,   386,    -1,   375,     5,
     283,     4,   386,    -1,   375,     5,   313,     5,   385,   386,
      -1,     5,    14,     5,    -1,     5,    15,     5,    -1,     5,
      62,     5,    -1,     5,   197,   385,    -1,     5,     5,   280,
     385,    -1,     5,   198,   385,    -1,     5,   272,   384,     4,
     385,    -1,     5,   287,   384,     4,     4,   385,    -1,     5,
     282,     4,    -1,     5,   283,     4,    -1,     5,   313,     5,
     385,    -1,     5,    14,     5,    -1,     5,    15,     5,    -1,
       5,    62,     5,    -1,     5,   197,   385,    -1,     5,   198,
     385,    -1,     5,   272,   384,     4,   385,    -1,     5,   282,
       4,    -1,     5,   283,     4,    -1,     5,   313,     5,   385,
      -1,     5,    14,     5,   386,    -1,     5,    62,     5,   386,
      -1,     5,   197,   386,    -1,     5,   272,   384,     4,   386,
      -1,     5,   282,     4,   386,    -1,     5,   313,     5,   386,
      -1,     5,     5,    -1,   279,     5,     5,    -1,    95,     4,
       4,     4,     4,     4,    -1,   194,     4,     4,     4,     4,
       4,    -1,   113,    -1,   238,    -1,   366,    -1,   144,   366,
      -1,    89,   366,    -1,    67,     5,    -1,     5,     4,     4,
      -1,   310,   364,   364,    -1,   357,   364,    -1,     5,     5,
     375,   381,     5,     5,   375,   381,   364,   375,   383,     5,
      -1,    61,   508,    -1,    67,     5,    -1,    81,    -1,    74,
     513,     5,    -1,    74,   513,   313,     5,    -1,    76,   101,
      -1,    -1,    84,   506,   509,    -1,    90,    -1,   101,   511,
      -1,   107,   512,    -1,   116,     4,    -1,   133,     5,    -1,
     154,    17,    -1,   154,   219,   364,   364,    -1,   154,   302,
     364,   364,    -1,     4,    20,   389,   366,    -1,     4,    21,
     369,    -1,     4,    21,   369,   376,    -1,     4,    21,   369,
     374,   381,    -1,     4,    22,   246,   364,   364,     4,   374,
     383,    -1,     4,    22,   246,     5,   374,   383,    -1,     4,
      49,   124,   366,    -1,     4,    50,   246,   364,   364,   364,
       4,   374,   383,    -1,     4,    50,   246,     5,   374,   383,
      -1,     4,    49,   246,   364,   364,   374,   383,    -1,     4,
      53,   107,   369,   369,     4,   364,   364,   364,     4,    -1,
       4,    53,   107,   369,   369,     4,   364,   364,   364,     4,
     376,    -1,     4,    53,   107,   369,   369,     4,   364,   364,
     364,     4,   374,   381,    -1,     4,    53,   107,     5,     5,
     374,   381,   374,   383,    -1,     4,    56,   507,     5,     5,
      -1,     4,    63,   124,   366,    -1,     4,    63,   246,   364,
     374,   383,    -1,     4,    67,     5,    -1,     4,    75,    27,
     366,   366,    -1,     4,    75,   171,     5,     5,    -1,     4,
      75,   246,   364,   374,   383,    -1,     4,    75,   291,   374,
     381,    -1,     4,    76,   143,   366,    -1,     4,    83,   107,
     369,   369,     4,   364,   364,     4,    -1,     4,    83,   107,
     369,   369,     4,   364,   364,     4,   376,    -1,     4,    83,
     107,   369,   369,     4,   364,   364,     4,   374,   381,    -1,
       4,    83,   107,     5,     5,   374,   381,   374,   383,    -1,
       4,    84,    22,   246,   364,   364,    -1,     4,    84,    50,
     246,   364,   364,    -1,     4,    84,    53,    21,   364,   364,
      -1,     4,    84,    53,   246,   364,   364,    -1,     4,    84,
     112,   246,   364,   364,    -1,     4,    84,   115,    21,   364,
     364,    -1,     4,    84,   115,   246,   364,   364,    -1,     4,
      84,    83,    21,   364,   364,    -1,     4,    84,    83,   246,
     364,   364,    -1,     4,    84,   234,   317,     4,   364,   364,
      -1,     4,    84,   267,   317,     4,   364,   364,    -1,     4,
     101,    -1,     4,   101,    22,     4,    -1,     4,   101,    50,
       4,    -1,     4,   101,    53,     4,    -1,     4,   101,   112,
       4,    -1,     4,   101,    56,   507,     5,    -1,     4,   101,
     115,     4,    -1,     4,   101,    83,     4,    -1,     4,   101,
     234,   317,     4,    -1,     4,   101,   267,   317,     4,    -1,
       4,   101,   293,    -1,     4,   101,   293,     5,    -1,     4,
     101,   293,     4,    -1,     4,   107,    40,     4,    -1,     4,
     111,   124,   366,    -1,     4,   111,   246,   364,   364,   374,
     383,    -1,     4,   112,   246,   364,   364,   364,     4,   374,
     383,    -1,     4,   112,   246,     5,   374,   383,    -1,     4,
     115,   107,   369,   369,     4,   364,   364,   364,     4,    -1,
       4,   115,   107,   369,   369,     4,   364,   364,   364,     4,
     376,    -1,     4,   115,   107,   369,   369,     4,   364,   364,
     364,     4,   374,   381,    -1,     4,   115,   107,     5,     5,
     374,   381,   374,   383,    -1,     4,   133,     5,    -1,     4,
     154,    -1,     4,   154,   219,    -1,     4,   178,    27,   366,
     366,    -1,     4,   178,   232,   374,   381,   373,   373,    -1,
       4,   202,   364,   364,    -1,     4,   202,   137,    -1,     4,
     202,    36,    -1,     4,   202,   301,   374,   381,   373,    -1,
       4,   234,   252,   364,   364,   374,   383,    -1,     4,   267,
     252,   364,   364,   374,   383,    -1,     4,   232,   271,   387,
      -1,     4,   232,   278,     4,    -1,     4,   234,   124,   366,
      -1,     4,   240,   374,   381,   373,   373,   364,   374,   383,
      -1,     4,   241,   526,   366,    -1,     4,   256,    40,    -1,
       4,   257,   134,     5,    -1,     4,   257,   232,   374,   381,
     373,   373,    -1,     4,   257,   291,   374,   381,   374,   383,
      -1,     4,   268,    -1,     4,   268,   219,    -1,     4,   293,
       5,    -1,     4,   295,     5,    -1,     4,   295,   256,   366,
      -1,     4,   307,    -1,     4,   309,    -1,     4,   315,    27,
     366,    -1,     4,   315,   232,   374,   381,   373,   374,   383,
     364,   369,    -1,     4,   349,     4,    -1,   169,    -1,   169,
     364,   364,    -1,   180,   521,    -1,   181,   522,    -1,   202,
     523,    -1,   239,   366,    -1,   241,   526,   366,    -1,   241,
     526,   366,   364,   364,    -1,   256,    40,   364,   364,    -1,
     256,   201,   364,   364,     4,    -1,   256,   113,    -1,   261,
     530,    -1,   268,   531,    -1,   275,   532,    -1,     5,    67,
       5,    -1,     5,    81,    -1,     5,   101,    -1,     5,    90,
      -1,     5,   133,     5,    -1,     5,   154,    -1,     5,   154,
     219,    -1,     5,   202,   364,   364,    -1,     5,   202,   137,
      -1,     5,   202,    36,    -1,     5,   202,   301,   374,   381,
     373,    -1,     5,   241,   526,   366,    -1,     5,   268,    -1,
       5,   268,   219,    -1,     5,   307,    -1,     5,   309,    -1,
     293,   107,     5,     5,    -1,   293,   101,     5,    -1,   293,
     101,    17,    -1,   293,     5,    -1,   293,   310,     5,    -1,
     225,    -1,   225,   374,    -1,   306,    -1,   307,    17,    -1,
     309,    17,    -1,   349,     4,    -1,   268,    -1,   309,    -1,
     154,    -1,   307,    -1,    40,   202,    -1,   202,    -1,   113,
     202,    -1,    40,   107,    -1,   107,    -1,   113,   107,    -1,
      40,   256,    -1,   256,    -1,   113,   256,    -1,   101,    -1,
     295,    -1,    67,    -1,   349,    -1,   241,    -1,   133,    -1,
     169,    -1,   310,    -1,    -1,     4,    -1,    30,   366,    -1,
     246,   364,    -1,   165,     4,    -1,   220,     4,   364,    -1,
      63,   364,   364,   364,   527,    -1,   111,   364,   364,   364,
     364,   368,   527,    -1,    49,   364,   364,   364,   364,   368,
     527,    -1,   234,   364,   364,   364,   364,   527,    -1,   267,
     364,   364,   364,   364,   527,    -1,   178,   364,   364,   364,
     364,   527,    -1,   315,   364,   364,   364,   364,   527,    -1,
     295,   364,   364,   368,   527,    -1,    63,   232,   364,   364,
     388,   527,    -1,    49,   232,   364,   364,   388,   527,    -1,
     104,   232,   364,   364,   388,   527,    -1,    86,   232,   364,
     364,   388,   527,    -1,   360,   232,   364,   364,   388,   527,
      -1,    27,   232,   364,   364,   388,   527,    -1,    52,   232,
     364,   364,   388,   527,    -1,   257,   364,   364,   364,   364,
     374,   381,   374,   383,     5,   527,    -1,    75,   364,   364,
     364,   374,   381,   527,    -1,   240,   364,   364,   364,   364,
     364,   527,    -1,    22,   364,   364,   364,   364,     4,   527,
      -1,   112,   364,   364,   364,   364,   364,     4,   368,   527,
      -1,    50,   364,   364,   364,   364,   364,     4,   368,   527,
      -1,    83,   364,   364,   369,   369,     4,   364,   364,     4,
     527,    -1,   115,   364,   364,   369,   369,     4,   364,   364,
     364,     4,   368,   527,    -1,    53,   364,   364,   369,   369,
       4,   364,   364,   364,     4,   368,   527,    -1,    76,   527,
      -1,   294,   510,    -1,     5,   364,   364,    -1,   313,     5,
     364,   364,    -1,   364,   364,   313,     5,    -1,     5,   374,
     381,   373,    -1,    -1,   268,    -1,    17,    -1,    40,   364,
     364,     4,    -1,   201,   364,   364,     4,    -1,   113,    -1,
     106,    -1,   351,    -1,    64,    -1,   260,    -1,   259,    -1,
     243,    -1,   352,    -1,    61,   515,    -1,    67,    -1,   133,
      -1,   116,    -1,   148,   364,   364,    -1,   159,   364,   364,
      -1,     4,    20,    83,     5,     5,     5,   374,     4,    -1,
       4,    20,   156,     5,     5,     4,    -1,     4,    20,   230,
       5,     5,     5,     5,   374,   381,   390,    -1,     4,    20,
     231,     5,     5,   374,   390,    -1,     4,    20,   245,     5,
       5,     5,   374,    -1,     4,    20,   288,   374,   381,    -1,
     159,    17,    -1,     4,    21,    -1,     4,    21,   376,    -1,
       4,    21,   374,   381,    -1,     4,    22,   246,   374,   383,
      -1,     4,    49,   124,    -1,     4,    50,   246,   374,   383,
      -1,     4,    49,   246,   374,   383,    -1,     4,    53,    21,
      -1,     4,    53,    21,   376,    -1,     4,    53,    21,   374,
     381,    -1,     4,    53,   246,   374,   383,    -1,     4,    60,
     374,   381,   382,    -1,     4,    63,   124,    -1,     4,    63,
     246,   374,   383,    -1,     4,    67,    -1,     4,    75,    27,
      -1,     4,    75,   171,    -1,     4,    75,   246,   374,   383,
      -1,     4,    75,   291,    -1,     4,    76,   143,    -1,     4,
      83,    21,    -1,     4,    83,    21,   376,    -1,     4,    83,
      21,   374,   381,    -1,     4,    83,   246,   374,   383,    -1,
       4,   111,   124,    -1,     4,   111,   246,   374,   383,    -1,
       4,   112,   246,   374,   383,    -1,     4,   115,    21,    -1,
       4,   115,    21,   376,    -1,     4,   115,    21,   374,   381,
      -1,     4,   115,   246,   374,   383,    -1,     4,   133,    -1,
       4,   154,    -1,     4,   178,    27,    -1,     4,   178,   173,
     374,   383,    -1,     4,   178,   232,   374,   381,   382,    -1,
       4,   187,   173,   364,   374,   383,    -1,     4,   234,   124,
      -1,     4,   232,   271,    -1,     4,   232,   278,    -1,     4,
     240,   232,   374,   381,   382,    -1,     4,   240,   173,   374,
     383,    -1,     4,   240,   299,   374,   383,    -1,     4,   241,
      -1,     4,   241,   526,    -1,     4,   257,   134,    -1,     4,
     257,   173,   374,   383,    -1,     4,   257,   232,   374,   381,
     382,    -1,     4,   257,   291,    -1,     4,   268,    -1,     4,
     293,    -1,     4,   293,     4,    -1,     4,   295,    -1,     4,
     295,   256,    -1,     4,   305,    -1,     4,   315,    27,    -1,
       4,   315,   173,   374,   383,    -1,     4,   315,   232,   374,
     381,   382,    -1,     4,   349,    -1,   154,   516,    -1,   154,
     215,    -1,   215,    -1,   234,   267,   364,   364,    -1,   267,
     267,   364,   364,    -1,   239,    -1,   241,   526,    -1,   268,
     517,    -1,   268,   215,    -1,   275,   518,    -1,     5,    67,
      -1,     5,   133,    -1,     5,   159,    -1,     5,   241,   526,
      -1,     5,   293,    -1,     5,   293,   215,    -1,   293,    17,
      -1,   293,   100,   203,    -1,   349,    -1,    30,    -1,   246,
      -1,   165,    -1,   220,    -1,    -1,   364,   364,    -1,    -1,
     364,   364,    -1,    -1,   295,    -1,    -1,    -1,   233,    -1,
     248,    -1,   311,    -1,    58,    -1,   135,    -1,   513,   374,
     381,   382,   366,   528,   535,    -1,   268,   513,   374,   381,
     382,   366,   528,   535,    -1,   513,     5,    -1,   513,     5,
       4,     5,   374,   381,    -1,   513,     4,    -1,   513,     4,
       4,     5,   374,   381,    -1,   128,     5,    -1,   128,     5,
       5,    -1,   364,   364,    -1,   137,    -1,    36,    -1,    40,
     364,   364,    -1,   201,   364,   364,    -1,   113,    -1,   301,
     374,   381,   373,    -1,   524,   525,    -1,   525,    -1,   526,
     361,   366,    -1,    67,   361,     5,    -1,    94,   361,     4,
       4,    -1,   349,   361,     4,    -1,   133,   361,     5,    -1,
     295,   361,     5,    -1,   538,    -1,   539,    -1,   210,    -1,
     268,    -1,   154,    -1,    93,    -1,   130,    -1,   107,    -1,
     202,    -1,   256,    -1,   101,    -1,   162,    -1,   284,    -1,
     519,    -1,   519,   524,    -1,    -1,    -1,   529,   533,    -1,
       5,   513,   374,   381,   382,   366,    -1,   268,     5,   513,
     374,   381,   382,   366,    -1,   294,     5,    -1,    17,    -1,
     219,   364,   364,    -1,   302,    -1,   302,   364,   364,    -1,
     126,    -1,   172,    -1,   366,    -1,   295,   366,    -1,   533,
     534,    -1,   534,    -1,   526,   361,   366,    -1,    -1,    -1,
     536,   537,    -1,   537,   538,    -1,   538,    -1,   293,   361,
       5,    -1,    56,   361,   507,     5,     5,    -1,    65,    -1,
      67,     5,    -1,   188,   377,    -1,   247,   364,   364,    -1,
     291,   374,    -1,   300,   364,    -1,    46,   378,    -1,   188,
       4,    -1,   360,    -1,   358,    -1,   352,    -1,   210,    -1,
     364,   364,   364,   364,    -1,   364,   364,    -1,   376,   364,
     364,    -1,   374,   381,   373,    -1,   301,   543,    -1,    39,
     364,   364,    -1,   201,   544,    -1,   239,   366,    -1,   364,
     364,    -1,   376,   364,   364,    -1,   374,   381,   373,    -1,
      40,   364,   364,    -1,   364,   364,    -1,   113,   364,   364,
      -1,   366,    -1,   320,   375,   381,    -1,     5,     4,     4,
      -1,   310,    -1,    71,   548,    -1,   174,     4,    -1,   253,
       4,    -1,   262,   364,    -1,     4,     4,     4,     4,     4,
       4,     4,     4,     4,    -1,     4,     4,     4,     4,     4,
       4,    -1,    55,    -1,   145,    -1,   254,    -1,    91,    -1,
     154,   550,    -1,   268,   551,    -1,    40,   364,   364,    -1,
     201,   364,   364,    -1,   113,    -1,   273,   113,    -1,    40,
     364,   364,    -1,   201,   364,   364,    -1,   113,    -1,   273,
     113,    -1,   196,    -1,    13,    -1,   210,    -1,    34,    -1,
     109,    -1,    62,     5,    -1,   291,   374,    -1,   314,     4,
       4,     4,    -1,   364,    -1,   364,    99,    -1,   201,   556,
      -1,   301,   364,    -1,   301,   364,    99,    -1,    40,    -1,
     364,    -1,   113,    -1,    26,   558,    -1,   128,   560,    -1,
     214,   570,    -1,   114,   571,    -1,   227,     5,    -1,   123,
       5,   391,    -1,    62,     5,   391,    -1,   282,     4,   391,
      -1,   254,    88,   559,    -1,   123,     5,   391,    -1,    62,
       5,   391,    -1,   282,     4,   391,    -1,   561,    -1,   161,
     561,    -1,   292,   562,    -1,   279,   563,    -1,   119,    88,
     564,    -1,   199,   565,    -1,   254,   161,   567,    -1,   254,
      88,   568,    -1,   250,   569,    -1,   123,     5,    -1,    62,
       5,    -1,   282,     4,    -1,   123,     5,    -1,    62,     5,
      -1,   282,     4,    -1,   123,     5,    -1,    62,     5,    -1,
     282,     4,    -1,   123,     5,    -1,    62,     5,    -1,   282,
       4,    -1,   161,   566,    -1,   123,     5,     4,    -1,    62,
       5,     4,    -1,   282,     4,     4,    -1,   123,     5,    -1,
      62,     5,    -1,   282,     4,    -1,   123,     5,    -1,    62,
       5,    -1,   282,     4,    -1,   123,     5,    -1,    62,     5,
      -1,   282,     4,    -1,   123,     5,    -1,    62,     5,    -1,
     282,     4,    -1,   123,     5,   391,    -1,    62,     5,   391,
      -1,   282,     4,   391,    -1,   123,     5,     5,   391,    -1,
     573,     4,     4,   364,   364,   369,    -1,   573,     4,    -1,
     101,    -1,    51,    -1,   303,    -1,   141,    -1,   110,    -1,
      -1,     4,   364,   364,   364,   364,    -1,   213,    -1,   213,
       4,   364,   364,   364,   364,    -1,   128,   279,   575,    -1,
       4,    -1,     4,     4,    -1,   364,   374,    -1,   364,   364,
      -1,   301,   364,   364,    -1,   375,   381,   382,    -1,    16,
     580,    -1,   252,     4,    -1,   249,   579,    -1,    23,   578,
      -1,     4,     4,    -1,     4,     5,    -1,   295,     4,     5,
      -1,     4,     4,    -1,     4,     5,    -1,   295,     4,     5,
      -1,     4,    -1,     4,   375,   381,    -1,     4,     6,   375,
     381,    -1,   238,    -1,   364,   364,    -1,   364,   364,    12,
     364,   364,    -1,   364,   364,    12,   376,   364,   364,    -1,
     364,   364,    12,   374,   381,   373,    -1,   301,   583,    -1,
     127,    -1,   127,   364,    -1,   364,   364,    -1,   364,   364,
      12,   364,   364,    -1,   364,   364,    12,   376,   364,   364,
      -1,   364,   364,    12,   374,   381,   373,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   467,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   526,
     527,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   543,   545,   546,   547,   548,   550,   551,   552,
     553,   556,   557,   558,   559,   560,   563,   564,   567,   568,
     569,   572,   575,   578,   581,   593,   600,   607,   615,   616,
     617,   618,   619,   622,   623,   624,   625,   626,   627,   628,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,   646,   647,   648,
     649,   652,   653,   656,   657,   658,   659,   660,   661,   664,
     665,   666,   667,   668,   671,   672,   673,   674,   675,   676,
     677,   678,   681,   682,   683,   684,   685,   688,   689,   690,
     691,   692,   693,   694,   695,   698,   699,   700,   703,   704,
     705,   706,   709,   710,   711,   714,   715,   716,   719,   720,
     721,   724,   725,   726,   727,   728,   729,   730,   731,   734,
     735,   738,   739,   740,   741,   742,   743,   746,   747,   748,
     749,   752,   753,   754,   755,   756,   757,   760,   761,   762,
     763,   764,   765,   766,   767,   771,   772,   775,   776,   779,
     780,   783,   784,   788,   789,   790,   791,   792,   793,   794,
     795,   798,   799,   802,   803,   804,   806,   808,   809,   810,
     812,   816,   817,   820,   821,   823,   826,   828,   834,   835,
     836,   839,   840,   841,   844,   845,   846,   847,   848,   849,
     850,   856,   857,   860,   861,   862,   863,   864,   867,   868,
     869,   870,   873,   874,   879,   884,   891,   893,   895,   896,
     897,   900,   902,   905,   906,   909,   910,   911,   912,   913,
     916,   918,   920,   925,   930,   933,   934,   937,   938,   939,
     946,   947,   948,   949,   952,   953,   956,   957,   960,   961,
     964,   966,   970,   971,   974,   976,   977,   978,   979,   982,
     983,   985,   986,   987,   990,   992,   994,   995,   997,   999,
    1001,  1003,  1007,  1010,  1011,  1012,  1013,  1016,  1017,  1020,
    1023,  1024,  1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,
    1033,  1034,  1035,  1036,  1037,  1038,  1039,  1040,  1041,  1042,
    1043,  1044,  1045,  1046,  1047,  1048,  1049,  1050,  1051,  1052,
    1053,  1055,  1056,  1057,  1058,  1059,  1060,  1061,  1063,  1064,
    1065,  1068,  1070,  1074,  1076,  1080,  1081,  1082,  1083,  1084,
    1085,  1086,  1087,  1090,  1091,  1092,  1095,  1098,  1099,  1101,
    1103,  1104,  1105,  1106,  1107,  1108,  1115,  1116,  1119,  1120,
    1121,  1124,  1125,  1128,  1131,  1132,  1134,  1138,  1139,  1140,
    1143,  1147,  1149,  1150,  1151,  1152,  1153,  1154,  1155,  1156,
    1157,  1160,  1161,  1162,  1165,  1166,  1169,  1171,  1179,  1181,
    1183,  1187,  1188,  1190,  1193,  1196,  1197,  1201,  1203,  1206,
    1211,  1212,  1213,  1217,  1218,  1219,  1222,  1223,  1224,  1227,
    1228,  1230,  1231,  1232,  1233,  1234,  1235,  1236,  1237,  1238,
    1239,  1241,  1242,  1245,  1246,  1249,  1250,  1251,  1252,  1255,
    1256,  1259,  1261,  1264,  1268,  1269,  1270,  1272,  1274,  1278,
    1279,  1280,  1283,  1284,  1285,  1286,  1287,  1288,  1289,  1292,
    1295,  1296,  1297,  1300,  1301,  1302,  1303,  1304,  1305,  1308,
    1309,  1310,  1311,  1312,  1313,  1314,  1317,  1318,  1321,  1322,
    1325,  1326,  1329,  1330,  1333,  1334,  1335,  1338,  1339,  1342,
    1343,  1346,  1349,  1357,  1358,  1361,  1362,  1363,  1364,  1365,
    1366,  1367,  1368,  1369,  1370,  1371,  1372,  1373,  1374,  1375,
    1376,  1377,  1378,  1381,  1384,  1385,  1388,  1389,  1390,  1391,
    1394,  1395,  1396,  1397,  1400,  1401,  1402,  1403,  1404,  1405,
    1408,  1409,  1410,  1411,  1412,  1413,  1415,  1416,  1421,  1422,
    1425,  1427,  1429,  1432,  1433,  1434,  1435,  1436,  1437,  1440,
    1442,  1444,  1446,  1447,  1449,  1451,  1453,  1455,  1457,  1460,
    1461,  1462,  1463,  1464,  1465,  1467,  1468,  1469,  1472,  1475,
    1477,  1479,  1481,  1483,  1485,  1487,  1489,  1492,  1494,  1496,
    1498,  1499,  1500,  1501,  1502,  1505,  1506,  1507,  1508,  1509,
    1510,  1511,  1513,  1515,  1516,  1517,  1520,  1521,  1522,  1523,
    1524,  1525,  1527,  1528,  1529,  1532,  1533,  1534,  1535,  1536,
    1539,  1542,  1545,  1548,  1551,  1554,  1557,  1560,  1563,  1568,
    1571,  1574,  1577,  1580,  1583,  1586,  1589,  1592,  1595,  1598,
    1603,  1606,  1609,  1612,  1615,  1618,  1621,  1624,  1627,  1632,
    1634,  1636,  1638,  1640,  1642,  1647,  1649,  1651,  1655,  1658,
    1661,  1664,  1667,  1670,  1673,  1676,  1679,  1682,  1685,  1690,
    1691,  1692,  1693,  1694,  1695,  1696,  1698,  1700,  1701,  1702,
    1705,  1706,  1707,  1708,  1709,  1710,  1712,  1713,  1714,  1717,
    1719,  1721,  1722,  1724,  1726,  1730,  1731,  1734,  1735,  1736,
    1739,  1742,  1743,  1744,  1745,  1746,  1747,  1748,  1751,  1759,
    1760,  1761,  1762,  1764,  1766,  1767,  1767,  1768,  1769,  1770,
    1771,  1772,  1774,  1775,  1777,  1780,  1783,  1784,  1785,  1788,
    1791,  1794,  1795,  1799,  1802,  1805,  1808,  1812,  1817,  1822,
    1824,  1825,  1827,  1828,  1830,  1832,  1834,  1836,  1837,  1839,
    1841,  1845,  1850,  1852,  1854,  1856,  1858,  1860,  1862,  1864,
    1866,  1868,  1870,  1873,  1874,  1876,  1878,  1879,  1881,  1883,
    1884,  1885,  1887,  1889,  1890,  1891,  1893,  1894,  1895,  1898,
    1902,  1905,  1908,  1912,  1917,  1923,  1924,  1925,  1927,  1928,
    1932,  1934,  1935,  1936,  1939,  1942,  1945,  1947,  1949,  1950,
    1955,  1958,  1959,  1960,  1963,  1967,  1968,  1970,  1971,  1972,
    1974,  1975,  1977,  1978,  1983,  1985,  1986,  1988,  1989,  1990,
    1991,  1992,  1993,  1995,  1997,  1999,  2000,  2001,  2003,  2005,
    2006,  2007,  2008,  2009,  2010,  2011,  2012,  2013,  2014,  2015,
    2017,  2019,  2020,  2021,  2022,  2024,  2025,  2026,  2027,  2028,
    2030,  2031,  2032,  2033,  2034,  2035,  2038,  2039,  2040,  2041,
    2042,  2043,  2044,  2045,  2046,  2047,  2048,  2049,  2050,  2051,
    2052,  2053,  2054,  2055,  2056,  2057,  2058,  2061,  2062,  2063,
    2064,  2065,  2066,  2074,  2081,  2090,  2099,  2106,  2113,  2121,
    2129,  2136,  2141,  2146,  2151,  2156,  2161,  2166,  2172,  2182,
    2192,  2202,  2209,  2219,  2229,  2238,  2250,  2263,  2268,  2271,
    2273,  2275,  2280,  2284,  2285,  2286,  2292,  2294,  2296,  2299,
    2300,  2301,  2302,  2303,  2304,  2305,  2308,  2309,  2310,  2311,
    2312,  2313,  2315,  2317,  2319,  2321,  2323,  2325,  2328,  2329,
    2330,  2331,  2333,  2336,  2337,  2339,  2341,  2342,  2343,  2345,
    2348,  2351,  2352,  2354,  2355,  2356,  2357,  2359,  2360,  2361,
    2362,  2363,  2365,  2367,  2368,  2370,  2373,  2374,  2375,  2377,
    2379,  2380,  2381,  2382,  2384,  2387,  2391,  2392,  2393,  2394,
    2397,  2400,  2402,  2403,  2404,  2405,  2407,  2410,  2411,  2413,
    2414,  2415,  2416,  2417,  2419,  2420,  2422,  2425,  2426,  2427,
    2428,  2429,  2431,  2433,  2434,  2435,  2436,  2438,  2440,  2441,
    2442,  2443,  2444,  2445,  2447,  2448,  2450,  2453,  2454,  2455,
    2456,  2459,  2460,  2463,  2464,  2467,  2468,  2471,  2484,  2485,
    2489,  2490,  2494,  2495,  2498,  2502,  2508,  2510,  2513,  2515,
    2518,  2520,  2524,  2525,  2526,  2527,  2528,  2529,  2530,  2534,
    2535,  2538,  2539,  2540,  2541,  2542,  2543,  2544,  2545,  2548,
    2549,  2550,  2551,  2552,  2553,  2554,  2555,  2556,  2557,  2558,
    2561,  2562,  2565,  2566,  2566,  2569,  2571,  2573,  2576,  2577,
    2578,  2579,  2580,  2581,  2584,  2585,  2588,  2589,  2592,  2596,
    2597,  2597,  2600,  2601,  2604,  2607,  2611,  2612,  2613,  2614,
    2615,  2616,  2617,  2618,  2624,  2625,  2626,  2627,  2630,  2632,
    2633,  2638,  2640,  2641,  2642,  2643,  2646,  2647,  2652,  2656,
    2657,  2658,  2661,  2662,  2667,  2668,  2671,  2673,  2674,  2675,
    2680,  2682,  2688,  2689,  2690,  2691,  2694,  2695,  2698,  2700,
    2702,  2703,  2706,  2708,  2709,  2710,  2713,  2714,  2717,  2718,
    2719,  2722,  2723,  2724,  2727,  2728,  2729,  2730,  2731,  2734,
    2735,  2736,  2739,  2740,  2741,  2742,  2743,  2746,  2748,  2750,
    2752,  2755,  2757,  2759,  2762,  2763,  2764,  2765,  2766,  2767,
    2768,  2769,  2770,  2773,  2774,  2775,  2778,  2779,  2780,  2783,
    2784,  2785,  2788,  2789,  2790,  2793,  2794,  2795,  2796,  2799,
    2800,  2801,  2804,  2805,  2806,  2809,  2810,  2811,  2814,  2815,
    2816,  2819,  2821,  2823,  2827,  2831,  2833,  2838,  2841,  2842,
    2843,  2844,  2847,  2848,  2850,  2851,  2853,  2856,  2857,  2858,
    2861,  2862,  2865,  2867,  2868,  2869,  2870,  2873,  2874,  2875,
    2878,  2879,  2880,  2883,  2884,  2889,  2893,  2900,  2901,  2903,
    2908,  2910,  2913,  2914,  2915,  2916,  2918,  2923
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "REAL", "INT", "STRING", "POINTER",
  "ANGDEGREE", "ANGRADIAN", "SEXSTR", "HMSSTR", "DMSSTR", "ABOUT_", "AIP_",
  "ALLOC_", "ALLOCGZ_", "ALIGN_", "ALL_", "ALT_", "AMPLIFIER_",
  "ANALYSIS_", "ANGLE_", "ANNULUS_", "APPEND_", "ARCMIN_", "ARCSEC_",
  "ARRAY_", "ARROW_", "ASINH_", "AST_", "AUTO_", "AUX_", "AVERAGE_",
  "AXES_", "AZIMUTH_", "B1950_", "BACK_", "BACKGROUND_", "BASE_", "BBOX_",
  "BEGIN_", "BG_", "BIG_", "BIGENDIAN_", "BIN_", "BITPIX_", "BLEND_",
  "BLOCK_", "BORDER_", "BOX_", "BOXANNULUS_", "BOXCAR_", "BOXCIRCLE_",
  "BPANDA_", "BUFFER_", "BW_", "CALLBACK_", "CANVAS_", "CATALOG_",
  "CELESTIAL_", "CENTER_", "CENTROID_", "CHANNEL_", "CIRCLE_", "CIAO_",
  "CLEAR_", "CLIP_", "COLOR_", "COLORBAR_", "COLORMAP_", "COLORSCALE_",
  "COLORSPACE_", "COLS_", "COLUMN_", "COMMAND_", "COMPASS_", "COMPOSITE_",
  "COMPRESS_", "CONTOUR_", "CONTRAST_", "COORDINATES_", "COPY_", "COUNT_",
  "CPANDA_", "CREATE_", "CROP_", "CROSS_", "CROSSHAIR_", "CUBE_",
  "CURSOR_", "CUT_", "CMYK_", "DARKEN_", "DASH_", "DASHLIST_", "DATA_",
  "DATAMIN_", "DATASEC_", "DEBUG_", "DEGREES_", "DEFAULT_", "DELETE_",
  "DEPTH_", "DETECTOR_", "DIAMOND_", "DIM_", "DS9_", "EDIT_", "ECLIPTIC_",
  "ELEVATION_", "ELLIPTIC_", "ELLIPSE_", "ELLIPSEANNULUS_", "END_",
  "ENVI_", "EPANDA_", "EPSILON_", "EQUATORIAL_", "ERASE_", "EXT_", "FADE_",
  "FACTOR_", "FALSE_", "FILE_", "FILL_", "FILTER_", "FIRST_", "FIT_",
  "FITS_", "FITSY_", "FIXED_", "FK4_", "FK5_", "FONT_", "FORMAT_",
  "FOOTPRINT_", "FROM_", "FRONT_", "FULL_", "FUNCTION_", "GALACTIC_",
  "GAUSSIAN_", "GET_", "GLOBAL_", "GRAPHICS_", "GRAY_", "GRID_", "GZ_",
  "HANDLE_", "HAS_", "HEAD_", "HEADER_", "HEIGHT_", "HIDE_", "HIGHLITE_",
  "HISTEQU_", "HISTOGRAM_", "HORIZONTAL_", "ICRS_", "ID_", "IIS_",
  "IMAGE_", "INCLUDE_", "INCR_", "INFO_", "ITERATION_", "IRAF_",
  "IRAFMIN_", "J2000_", "KEY_", "KEYWORD_", "LABEL_", "LAST_", "LENGTH_",
  "LEVEL_", "LIGHTEN_", "LITTLE_", "LITTLEENDIAN_", "LINE_", "LINEAR_",
  "LIST_", "LOAD_", "LOCAL_", "LOG_", "MACOSX_", "MAGNIFIER_", "MATCH_",
  "MAP_", "MARK_", "MARKER_", "MASK_", "MEDIAN_", "MESSAGE_", "METHOD_",
  "MINMAX_", "MINOR_", "MIP_", "MMAP_", "MMAPINCR_", "MOSAIC_", "MODE_",
  "MOTION_", "MOVE_", "NAME_", "NAN_", "NATIVE_", "NAXES_", "NEW_",
  "NEXT_", "NO_", "NONE_", "NONNAN_", "NONZERO_", "NOW_", "NRRD_",
  "NUMBER_", "OBJECT_", "OFF_", "ON_", "ONLY_", "OPTION_", "ORIENT_",
  "PAN_", "PANNER_", "PARSER_", "PASTE_", "PERF_", "PHOTO_", "PHYSICAL_",
  "PIXEL_", "PLOT2D_", "PLOT3D_", "POINT_", "POINTER_", "POLYGON_",
  "POSTSCRIPT_", "POW_", "PRECISION_", "PRINT_", "PRESERVE_",
  "PROJECTION_", "PROPERTY_", "PUBLICATION_", "PROS_", "QUERY_", "RADIAL_",
  "RADIUS_", "RANGE_", "REGION_", "REPLACE_", "RESAMPLE_", "RESCAN_",
  "RESET_", "RESOLUTION_", "RGB_", "ROOT_", "ROTATE_", "RULER_", "SAMPLE_",
  "SAOIMAGE_", "SAOTNG_", "SAVE_", "SCALE_", "SCAN_", "SCIENTIFIC_",
  "SCOPE_", "SCREEN_", "SEGMENT_", "SELECT_", "SET_", "SEXAGESIMAL_",
  "SHAPE_", "SHARED_", "SHIFT_", "SHMID_", "SHOW_", "SIGMA_", "SINH_",
  "SIZE_", "SLICE_", "SMMAP_", "SMOOTH_", "SOCKET_", "SOCKETGZ_",
  "SOURCE_", "SQRT_", "SQUARED_", "SSHARED_", "STATS_", "STATUS_", "SUM_",
  "SYSTEM_", "TABLE_", "TAG_", "TEMPLATE_", "TEXT_", "THREADS_", "THREED_",
  "THRESHOLD_", "THICK_", "TRANSPARENCY_", "TO_", "TOGGLE_", "TOPHAT_",
  "TRUE_", "TYPE_", "UNDO_", "UNHIGHLITE_", "UNLOAD_", "UNSELECT_",
  "UPDATE_", "USER_", "VALUE_", "VAR_", "VIEW_", "VECTOR_", "VERSION_",
  "VERTEX_", "VERTICAL_", "WARP_", "WCS_", "WCSA_", "WCSB_", "WCSC_",
  "WCSD_", "WCSE_", "WCSF_", "WCSG_", "WCSH_", "WCSI_", "WCSJ_", "WCSK_",
  "WCSL_", "WCSM_", "WCSN_", "WCSO_", "WCSP_", "WCSQ_", "WCSR_", "WCSS_",
  "WCST_", "WCSU_", "WCSV_", "WCSW_", "WCSX_", "WCSY_", "WCSZ_", "WCS0_",
  "WFPC2_", "WIDTH_", "WIN32_", "XML_", "XY_", "YES_", "ZERO_", "ZMAX_",
  "ZSCALE_", "ZOOM_", "'Y'", "'N'", "'X'", "'='", "$accept", "command",
  "numeric", "debug", "yesno", "fileNameType", "optangle", "angle",
  "sexagesimal", "hms", "dms", "coord", "coordSystem", "wcsSystem",
  "internalSystem", "maskType", "maskBlend", "scaleType", "minmaxMode",
  "skyFrame", "skyFormat", "skyDist", "shmType", "incrLoad", "layerType",
  "pointShape", "pointSize", "analysisTask", "analysisMethod", "endian",
  "threed", "threedBorder", "threedCompass", "threedHighlite",
  "threedView", "bin", "binAbout", "binFactor", "binFunction", "binTo",
  "block", "blockTo", "clip", "clipScope", "clipMode", "clipMinMax",
  "clipZScale", "colormap", "colormapMotion", "colorscale", "contour",
  "contourCreate", "contourDelete", "contourLoad", "contourClipMode",
  "contourClipScope", "contourMethod", "contourPaste", "contourSave",
  "crop", "crop3d", "crosshair", "cube", "cutMethod", "fade", "fitsy",
  "get", "getHorzCut", "getVertCut", "getBin", "getBinCols", "getBlock",
  "getClip", "getClipMinMax", "getClipZScale", "getColorbar",
  "getColorMap", "getColorMapLevel", "getColorScale", "getColorScaleLevel",
  "getContour", "getContourClip", "getContourColorScale", "getCoord",
  "getCrop", "getCrosshair", "getCube", "getCursor", "getData", "getInfo",
  "getiis", "getIISFileName", "getFits", "getFitsExt", "getFitsHeader",
  "getFitsDepth", "getFitsFileName", "getFitsSlice", "getGrid", "getMask",
  "getPan", "getRGB", "getSmooth", "getThreed", "getThreedBorder",
  "getThreedCompass", "getThreedHighlite", "getThreedView", "getWCS",
  "getWCSAlign", "grid", "gridCreate", "gridType", "has", "hasBin",
  "hasContour", "hasFits", "hasMarker", "hasWCS", "iis", "iisSetFileName",
  "iiscursor", "load", "loadArr", "loadArrayRGBCube", "loadENVI",
  "loadFits", "loadFitsSlice", "loadFitsExtCube", "loadFitsMosaic",
  "loadFitsMosaicImageIRAF", "loadFitsMosaicIRAF",
  "loadFitsMosaicImageWCS", "loadFitsMosaicImageWFPC2",
  "loadFitsMosaicWCS", "loadFitsRGBCube", "loadFitsRGBImage", "loadNRRD",
  "loadPhoto", "loadIncr", "macosx", "magnifier", "match", "marker", "@1",
  "markerCallBack", "markerCentroid", "markerCreate",
  "markerCreateTemplate", "markerDelete", "markerEdit", "markerFormat",
  "markerGet", "markerGetCentroid", "markerGetHighlite", "markerGetSelect",
  "markerGetShow", "markerInitProp", "markerLayer", "markerList",
  "markerLoad", "markerMoveSelected", "markerProps", "markerProp",
  "markerProperty", "markerProperties", "markerQuery", "@2", "markerSave",
  "markerSelect", "markerShow", "queries", "query", "markerTags", "@3",
  "tags", "tag", "callback", "mask", "orient", "pan", "panTo", "panMotion",
  "panner", "postscript", "precision", "pscolorspace", "region",
  "regionHighlite", "regionSelect", "renderMethod", "renderBackground",
  "rgb", "rotate", "rotateMotion", "save", "saveArray", "saveArrayRGBCube",
  "saveFits", "saveFitsImage", "saveFitsTable", "saveFitsSlice",
  "saveFitsExtCube", "saveFitsMosaic", "saveFitsMosaicImage",
  "saveFitsRGBImage", "saveFitsRGBCube", "saveFitsResample", "saveNRRD",
  "saveENVI", "smooth", "smoothFunction", "update", "updateFitsSlice",
  "warp", "wcs", "wcsAppend", "wcsReplace", "wcsAlign", "win32", "zoom",
  "zoomTo", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,    89,    78,
      88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   362,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   364,
     364,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   367,   367,   367,   367,   367,   368,   368,   369,   369,
     369,   370,   371,   372,   373,   373,   373,   373,   374,   374,
     374,   374,   374,   375,   375,   375,   375,   375,   375,   375,
     375,   375,   375,   375,   375,   375,   375,   375,   375,   375,
     375,   375,   375,   375,   375,   375,   375,   375,   375,   375,
     375,   376,   376,   377,   377,   377,   377,   377,   377,   378,
     378,   378,   378,   378,   379,   379,   379,   379,   379,   379,
     379,   379,   380,   380,   380,   380,   380,   381,   381,   381,
     381,   381,   381,   381,   381,   382,   382,   382,   383,   383,
     383,   383,   384,   384,   384,   385,   385,   385,   386,   386,
     386,   387,   387,   387,   387,   387,   387,   387,   387,   388,
     388,   389,   389,   389,   389,   389,   389,   390,   390,   390,
     390,   391,   391,   391,   391,   391,   391,   392,   392,   392,
     392,   392,   392,   392,   392,   393,   393,   394,   394,   395,
     395,   396,   396,   397,   397,   397,   397,   397,   397,   397,
     397,   398,   398,   399,   399,   399,   399,   399,   399,   399,
     399,   400,   400,   401,   401,   401,   401,   401,   402,   402,
     402,   403,   403,   403,   404,   404,   404,   404,   404,   404,
     404,   405,   405,   406,   406,   406,   406,   406,   407,   407,
     407,   407,   408,   408,   408,   408,   409,   409,   409,   409,
     409,   410,   410,   411,   411,   412,   412,   412,   412,   412,
     413,   413,   413,   413,   413,   414,   414,   415,   415,   415,
     416,   416,   416,   416,   417,   417,   418,   418,   419,   419,
     420,   420,   421,   421,   421,   421,   421,   421,   421,   422,
     422,   422,   422,   422,   423,   423,   423,   423,   423,   423,
     423,   423,   424,   425,   425,   425,   425,   426,   426,   427,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   429,   429,   430,   430,   431,   431,   431,   431,   431,
     431,   431,   431,   432,   432,   432,   433,   434,   434,   434,
     434,   434,   434,   434,   434,   434,   435,   435,   436,   436,
     436,   437,   437,   438,   439,   439,   439,   440,   440,   440,
     441,   442,   442,   442,   442,   442,   442,   442,   442,   442,
     442,   443,   443,   443,   444,   444,   445,   445,   446,   446,
     446,   447,   447,   447,   448,   449,   449,   450,   450,   450,
     451,   451,   451,   452,   452,   452,   453,   453,   453,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   455,   455,   456,   456,   456,   456,   457,
     457,   458,   458,   458,   459,   459,   459,   459,   459,   460,
     460,   460,   461,   461,   461,   461,   461,   461,   461,   462,
     463,   463,   463,   464,   464,   464,   464,   464,   464,   465,
     465,   465,   465,   465,   465,   465,   466,   466,   467,   467,
     468,   468,   469,   469,   470,   470,   470,   471,   471,   472,
     472,   473,   473,   474,   474,   475,   475,   475,   475,   475,
     475,   475,   475,   475,   475,   475,   475,   475,   475,   475,
     475,   475,   475,   476,   477,   477,   478,   478,   478,   478,
     479,   479,   479,   479,   480,   480,   480,   480,   480,   480,
     481,   481,   481,   481,   481,   481,   481,   481,   482,   482,
     483,   483,   483,   484,   484,   484,   484,   484,   484,   485,
     485,   485,   485,   485,   485,   485,   485,   485,   485,   486,
     486,   486,   486,   486,   486,   486,   486,   486,   487,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   491,   491,   491,   491,   491,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   496,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   499,
     499,   499,   499,   499,   499,   500,   500,   501,   501,   501,
     502,   503,   503,   503,   503,   503,   503,   503,   504,   505,
     505,   505,   505,   505,   505,   506,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   508,   508,   508,
     508,   508,   508,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   510,
     510,   510,   510,   511,   511,   511,   512,   512,   512,   513,
     513,   513,   513,   513,   513,   513,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   515,   515,   515,
     515,   516,   516,   517,   517,   518,   518,   519,   520,   520,
     520,   520,   520,   520,   521,   521,   522,   522,   522,   522,
     522,   522,   523,   523,   523,   523,   523,   523,   523,   524,
     524,   525,   525,   525,   525,   525,   525,   525,   525,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     527,   527,   528,   529,   528,   530,   530,   530,   531,   531,
     531,   531,   531,   531,   532,   532,   533,   533,   534,   535,
     536,   535,   537,   537,   538,   539,   540,   540,   540,   540,
     540,   540,   540,   540,   541,   541,   541,   541,   542,   542,
     542,   542,   542,   542,   542,   542,   543,   543,   543,   544,
     544,   544,   545,   545,   545,   545,   546,   546,   546,   546,
     547,   547,   548,   548,   548,   548,   549,   549,   550,   550,
     550,   550,   551,   551,   551,   551,   552,   552,   553,   553,
     553,   554,   554,   554,   555,   555,   555,   555,   555,   556,
     556,   556,   557,   557,   557,   557,   557,   558,   558,   558,
     558,   559,   559,   559,   560,   560,   560,   560,   560,   560,
     560,   560,   560,   561,   561,   561,   562,   562,   562,   563,
     563,   563,   564,   564,   564,   565,   565,   565,   565,   566,
     566,   566,   567,   567,   567,   568,   568,   568,   569,   569,
     569,   570,   570,   570,   571,   572,   572,   572,   573,   573,
     573,   573,   574,   574,   574,   574,   574,   575,   575,   575,
     576,   576,   577,   577,   577,   577,   577,   578,   578,   578,
     579,   579,   579,   580,   580,   580,   581,   582,   582,   582,
     582,   582,   583,   583,   583,   583,   583,   583
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     3,     3,     2,     1,     1,
       2,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     2,     3,     2,     3,     2,
       2,     2,     2,     3,     2,     3,     3,     2,     2,     2,
       2,     2,     2,     1,     3,     2,     2,     2,     1,     2,
       2,     2,     1,     2,     1,     2,     2,     2,     2,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     2,     1,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     1,     1,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     0,     1,
       1,     1,     0,     1,     1,     0,     1,     1,     0,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       1,     0,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     2,     1,     2,     1,
       2,     2,     6,     2,     4,     2,     2,     2,     3,     2,
       2,     1,     2,     1,     2,     4,     5,     2,     3,     5,
       6,     1,     1,     1,     7,    11,     8,    12,     1,     2,
       2,     1,     1,     2,     2,     2,     2,     3,     3,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     1,     3,     2,     2,     2,     6,    10,     1,     2,
       1,     6,    10,     1,     2,     2,     2,     2,     2,     2,
      13,    13,    12,    12,     1,     0,     1,     1,     4,     6,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       3,     4,     0,     6,     8,     2,     3,     3,     3,     0,
       4,     4,     4,     4,     3,     3,     1,     3,     5,     4,
       4,     3,     2,     0,     1,     1,     1,     2,     1,     3,
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     2,     2,     2,     4,
       3,     2,     2,     2,     1,     3,     2,     2,     1,     2,
       8,     2,     1,     2,     1,     2,     1,     4,     3,     2,
       1,     7,     8,     7,     8,     1,     1,     1,     2,     1,
       1,     2,     1,     0,     2,     2,     1,     0,     2,     2,
       1,     1,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     0,     1,     2,     1,     4,     5,     0,     2,     1,
       5,     2,     2,     1,     1,     1,     2,     1,     2,     1,
       1,     0,     1,     1,     0,     1,     5,     6,     3,     6,
       3,     1,     3,     1,     1,     1,     3,     6,     7,     5,
       2,     1,     5,     5,     1,     3,     0,     1,     2,     1,
       4,     1,     2,     1,     2,     3,     2,     1,     2,     1,
       4,     2,     1,     1,     3,     1,     2,     3,     2,     0,
       1,     1,     4,     2,     0,     1,     3,     4,     4,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     1,     2,
       2,     2,     2,     1,     1,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     2,     2,     0,     1,     2,
       1,     6,     5,     1,     1,     1,     2,     2,     2,     1,
       1,     1,     1,     2,     1,     1,     1,     2,     1,     1,
       1,     2,     2,     2,     0,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     1,     2,
       3,     1,     2,     2,     4,     6,     1,    10,     1,     2,
       3,     3,     2,     2,     2,     2,     2,     2,     2,     4,
       4,     4,     3,     3,     5,     4,     4,     4,     3,     3,
       3,     3,     2,     2,     4,     3,     3,     3,     3,     4,
       4,     4,     4,     5,     4,     6,     7,     4,     4,     5,
       2,     3,     3,     3,     2,     3,     3,     3,     3,     4,
       3,     5,     6,     3,     3,     4,     3,     3,     3,     3,
       3,     5,     3,     3,     4,     3,     2,     2,     1,     3,
       4,     4,     4,     4,     4,     6,     4,     4,     5,     4,
       4,     4,     4,     5,     4,     6,     7,     4,     4,     5,
       5,     5,     5,     5,     5,     7,     5,     5,     6,     4,
       4,     4,     4,     4,     6,     4,     4,     5,     5,     5,
       5,     5,     6,     5,     7,     8,     5,     5,     6,     3,
       3,     3,     3,     4,     3,     5,     6,     3,     3,     4,
       3,     3,     3,     3,     3,     5,     3,     3,     4,     4,
       4,     3,     5,     4,     4,     2,     3,     6,     6,     1,
       1,     1,     2,     2,     2,     3,     3,     2,    12,     2,
       2,     1,     3,     4,     2,     0,     3,     1,     2,     2,
       2,     2,     2,     4,     4,     4,     3,     4,     5,     8,
       6,     4,     9,     6,     7,    10,    11,    12,     9,     5,
       4,     6,     3,     5,     5,     6,     5,     4,     9,    10,
      11,     9,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     7,     7,     2,     4,     4,     4,     4,     5,     4,
       4,     5,     5,     3,     4,     4,     4,     4,     7,     9,
       6,    10,    11,    12,     9,     3,     2,     3,     5,     7,
       4,     3,     3,     6,     7,     7,     4,     4,     4,     9,
       4,     3,     4,     7,     7,     2,     3,     3,     3,     4,
       2,     2,     4,    10,     3,     1,     3,     2,     2,     2,
       2,     3,     5,     4,     5,     2,     2,     2,     2,     3,
       2,     2,     2,     3,     2,     3,     4,     3,     3,     6,
       4,     2,     3,     2,     2,     4,     3,     3,     2,     3,
       1,     2,     1,     2,     2,     2,     1,     1,     1,     1,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     2,
       2,     2,     3,     5,     7,     7,     6,     6,     6,     6,
       5,     6,     6,     6,     6,     6,     6,     6,    11,     7,
       7,     7,     9,     9,    10,    12,    12,     2,     2,     3,
       4,     4,     4,     0,     1,     1,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       3,     3,     8,     6,    10,     7,     7,     5,     2,     2,
       3,     4,     5,     3,     5,     5,     3,     4,     5,     5,
       5,     3,     5,     2,     3,     3,     5,     3,     3,     3,
       4,     5,     5,     3,     5,     5,     3,     4,     5,     5,
       2,     2,     3,     5,     6,     6,     3,     3,     3,     6,
       5,     5,     2,     3,     3,     5,     6,     3,     2,     2,
       3,     2,     3,     2,     3,     5,     6,     2,     2,     2,
       1,     4,     4,     1,     2,     2,     2,     2,     2,     2,
       2,     3,     2,     3,     2,     3,     1,     1,     1,     1,
       1,     0,     2,     0,     2,     0,     1,     0,     0,     1,
       1,     1,     1,     1,     7,     8,     2,     6,     2,     6,
       2,     3,     2,     1,     1,     3,     3,     1,     4,     2,
       1,     3,     3,     4,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     0,     0,     2,     6,     7,     2,     1,     3,
       1,     3,     1,     1,     1,     2,     2,     1,     3,     0,
       0,     2,     2,     1,     3,     5,     1,     2,     2,     3,
       2,     2,     2,     2,     1,     1,     1,     1,     4,     2,
       3,     3,     2,     3,     2,     2,     2,     3,     3,     3,
       2,     3,     1,     3,     3,     1,     2,     2,     2,     2,
       9,     6,     1,     1,     1,     1,     2,     2,     3,     3,
       1,     2,     3,     3,     1,     2,     1,     1,     1,     1,
       1,     2,     2,     4,     1,     2,     2,     2,     3,     1,
       1,     1,     2,     2,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     1,     2,     2,     2,     3,     2,
       3,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     3,     3,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     3,     3,     4,     6,     2,     1,     1,     1,
       1,     1,     0,     5,     1,     6,     3,     1,     2,     2,
       2,     3,     3,     2,     2,     2,     2,     2,     2,     3,
       2,     2,     3,     1,     3,     4,     1,     2,     5,     6,
       6,     2,     1,     2,     2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     8,     9,     0,     0,     0,     0,
       0,   312,     0,     0,     0,     0,     0,     0,   340,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     0,  1058,
       0,     0,     0,     0,     0,     0,     0,     0,  1058,    43,
       0,     0,     0,    48,     0,     0,     0,    52,  1252,    54,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     3,    59,    60,     0,   248,     7,
       0,     0,     0,     0,     0,     0,    10,     0,     0,   278,
     280,     0,     0,    12,   149,   151,   144,   145,   146,   150,
     147,   148,   283,    13,     0,   295,     0,     0,     0,    14,
       0,     0,     0,     0,   319,     0,    15,    72,   101,     0,
     131,   100,    80,    98,     0,    77,    79,    75,   132,    99,
      76,     0,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
      73,    74,    78,   326,   157,   102,     0,    16,     0,    17,
      18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,    61,     0,   338,    19,     0,    20,     0,     0,
       0,   397,   411,     0,   417,     0,     0,     0,     0,     0,
       0,     0,   355,     0,   489,     0,     0,     0,     0,     0,
       0,  1058,     0,   364,     0,   368,     0,     0,     0,   372,
       0,   374,     0,   376,     0,     0,   524,   380,    21,     0,
     530,    22,   535,     0,     0,   554,   539,   540,   541,   542,
     556,   544,   545,   549,   546,     0,   548,   550,     0,     0,
      23,     0,    25,     0,   571,     0,     0,     0,   576,     0,
      27,     0,     0,     0,     0,     0,     0,     0,    29,   730,
      30,     0,     0,     0,     0,     0,     0,   731,    31,     0,
      32,  1062,  1063,  1059,  1060,  1061,     0,   139,  1126,     0,
     133,     0,     0,     0,    34,     0,  1137,  1136,  1135,  1134,
      37,     0,     0,     0,     0,     0,   157,     0,    38,     0,
    1155,     0,  1152,    39,     0,     0,     0,     0,    42,     0,
      41,    40,     0,     0,     0,     0,    45,     0,     0,  1184,
      46,     0,     0,     0,     0,     0,    47,  1248,  1247,  1251,
    1250,  1249,    49,     0,    50,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,  1254,    53,     0,     0,
      55,     0,     0,     0,     0,   157,    56,  1276,    57,     0,
       0,    58,     1,     4,     5,     6,   231,     0,   223,     0,
       0,   225,     0,   233,   226,   230,   241,   242,   227,   243,
       0,   229,   251,   252,   250,   249,     0,     0,   271,     0,
     256,   264,   267,   266,   265,   263,   255,   260,   261,   262,
     254,     0,     0,     0,     0,     0,     0,   259,    11,     0,
       0,     0,   279,     0,   284,     0,   294,   285,   296,   286,
     297,   287,   308,   288,     0,     0,   289,     0,    91,    92,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   315,     0,     0,     0,     0,     0,   159,   164,
     158,   160,   163,   162,   161,     0,     0,   332,    66,    67,
      68,    69,    70,    62,    63,    64,    71,    65,   337,     0,
     341,     0,   393,   389,   385,   386,   390,   387,   392,   342,
     396,   343,   300,   401,   405,   400,   303,   302,   301,     0,
       0,   344,   412,   346,     0,   345,     0,   419,   347,   431,
     423,   434,   424,   425,   427,     0,   429,   430,   157,   348,
       0,     0,   349,     0,     0,   157,   350,   443,   157,   441,
     351,   444,   353,   157,   445,   352,     0,   157,     0,   354,
     463,     0,   461,   479,     0,     0,     0,   467,   459,     0,
     469,   484,   472,   356,   490,   491,   357,   358,     0,     0,
       0,   454,     0,   361,    81,   451,     0,   362,   363,     0,
     498,   492,   497,   493,   494,   495,   496,   366,   367,   499,
     369,     0,   500,   501,   502,   371,   508,   503,   504,   506,
     373,   514,   516,   518,   520,   513,   515,   522,   375,     0,
       0,   527,     0,   379,   157,   529,   536,     0,   537,   555,
     538,   557,   558,   559,   543,   560,   562,   561,   563,   547,
     551,   568,     0,     0,     0,     0,   564,   552,    26,     0,
       0,   573,   572,     0,     0,     0,     0,    28,     0,     0,
     583,     0,   584,     0,     0,     0,     0,     0,   585,     0,
     729,     0,   586,     0,   587,     0,     0,   588,     0,   734,
     733,   732,     0,   737,     0,     0,     0,   907,     0,     0,
       0,   741,   745,   747,   943,     0,     0,     0,     0,   845,
       0,     0,     0,   880,     0,     0,     0,     0,     0,     0,
       0,   882,     0,     0,     0,    33,   142,   143,   141,   140,
    1132,  1127,  1133,   136,   137,   135,   138,   134,  1128,     0,
    1130,  1131,    35,    36,     0,     0,     0,     0,  1144,  1145,
       0,   157,     0,  1142,  1139,     0,     0,     0,   157,  1162,
    1165,  1163,  1164,  1156,  1157,  1158,  1159,     0,     0,     0,
      44,  1181,  1182,     0,  1189,  1191,  1190,  1186,  1187,  1185,
       0,     0,     0,     0,  1192,     0,  1195,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1193,  1204,     0,
       0,     0,  1194,  1196,  1246,  1179,  1180,  1178,   212,     0,
     215,   208,     0,   217,   209,     0,   219,   210,  1177,  1176,
     211,   213,   214,     0,     0,   207,     0,     0,     0,     0,
    1260,  1273,  1263,     0,     0,  1266,     0,     0,  1265,  1264,
     165,  1282,     0,  1281,  1277,   232,   228,     0,   237,     0,
     234,     0,   253,   152,   155,   156,   154,   153,   268,   269,
     270,   258,   257,   273,   275,   274,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   157,     0,   316,    97,    94,
      95,    96,   157,   318,   317,     0,     0,     0,     0,     0,
       0,     0,   331,     0,   327,   325,   324,   339,   388,     0,
       0,   391,   406,   407,   402,   403,   408,   410,   409,   404,
     304,   305,   399,   398,   414,   413,     0,   418,   432,   433,
     422,   435,   428,   426,   421,     0,     0,   157,   157,   165,
     165,   165,   157,     0,     0,   157,   480,   462,   473,     0,
     464,    81,   475,     0,     0,   466,   468,   157,   485,     0,
       0,   471,     0,     0,   360,     0,   456,    85,    84,   450,
       0,     0,     0,     0,   957,   959,   958,     0,  1051,     0,
    1030,     0,  1033,     0,     0,  1053,  1055,     0,  1046,   365,
       0,   505,   507,   517,   510,   519,   511,   521,   512,   523,
     509,     0,     0,   378,   528,   525,   526,   165,   553,   565,
     566,   567,   569,     0,   582,   570,     0,     0,     0,     0,
       0,     0,   178,   178,   172,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   175,   175,   172,     0,     0,   172,
       0,     0,     0,     0,     0,   624,   648,     0,     0,     0,
     620,     0,     0,     0,     0,   178,   172,     0,     0,   725,
       0,   735,   736,   157,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   793,     0,     0,
       0,     0,     0,   816,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   835,     0,     0,   840,   841,     0,     0,
       0,   860,   862,   861,     0,   864,     0,     0,   871,   873,
     874,   908,     0,     0,     0,     0,   739,   740,   951,   949,
     954,   953,   952,   950,   955,     0,   744,     0,   945,   944,
     748,     0,   948,     0,   749,   750,   751,   752,     0,     0,
       0,     0,     0,   847,     0,     0,   848,  1074,     0,  1077,
    1073,     0,     0,     0,   849,   881,   850,  1092,  1097,  1094,
    1093,  1091,  1098,  1095,  1089,  1096,  1090,  1099,     0,     0,
     855,     0,     0,     0,     0,   856,  1108,  1112,  1113,     0,
    1110,   857,     0,  1114,   858,   878,     0,     0,     0,   883,
     884,   885,  1129,  1143,     0,     0,  1150,  1146,     0,     0,
       0,  1141,  1140,  1154,  1153,     0,     0,  1170,     0,     0,
    1166,     0,  1174,     0,     0,  1167,     0,  1188,   201,   201,
       0,   201,     0,  1214,     0,  1213,  1205,     0,     0,     0,
       0,  1209,     0,     0,     0,  1212,     0,     0,     0,     0,
       0,  1207,  1215,     0,     0,     0,  1206,   201,   201,   201,
       0,   216,   218,   220,     0,   221,     0,    60,     0,  1256,
       0,  1261,     0,   157,  1267,  1268,     0,  1270,  1271,     0,
     166,   167,  1262,  1283,  1284,     0,   224,     0,   238,     0,
       0,     0,     0,   272,     0,     0,     0,     0,     0,     0,
       0,     0,   310,   157,     0,     0,     0,     0,   157,     0,
     330,     0,   329,   395,   394,     0,     0,     0,   157,     0,
     165,   440,   438,   442,   446,     0,     0,     0,   165,     0,
     481,   465,     0,   476,   478,   168,     0,     0,   359,     0,
       0,    60,     0,   455,    83,    82,     0,     0,   969,     0,
       0,     0,     0,     0,     0,   983,     0,     0,     0,     0,
       0,     0,  1000,  1001,     0,     0,     0,     0,     0,  1012,
       0,  1018,  1019,  1021,  1023,     0,  1027,  1038,  1039,  1040,
       0,  1042,  1047,  1049,  1050,  1048,   956,     0,  1029,     0,
    1028,   968,     0,     0,  1034,     0,  1036,     0,  1035,  1056,
    1037,  1044,     0,     0,   377,     0,     0,   580,   581,     0,
     578,   574,     0,   178,   178,   178,   179,   180,   592,   593,
     174,   173,     0,   178,   178,   178,     0,   598,   608,   175,
     178,   178,   178,   176,   177,   178,   178,     0,   178,   178,
       0,   175,     0,   621,     0,     0,     0,   647,     0,   646,
       0,     0,   623,     0,   622,     0,     0,     0,     0,   175,
     175,   172,     0,     0,   172,     0,     0,     0,   178,   178,
     721,     0,   178,   178,   726,     0,   191,   192,   193,   194,
     195,   196,     0,    89,    90,    88,   756,     0,     0,     0,
       0,     0,     0,   901,   899,   894,     0,   904,   888,   905,
     891,   903,   897,   886,   900,   889,   887,   906,   902,     0,
       0,     0,   772,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   803,     0,     0,     0,
       0,     0,   815,   817,     0,     0,   822,   821,     0,     0,
     181,     0,     0,     0,   157,     0,   831,     0,     0,     0,
       0,   836,   837,   838,     0,     0,     0,   844,   859,   863,
     865,   868,   867,     0,     0,     0,   872,   909,   911,     0,
     910,   742,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1057,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   746,     0,     0,
       0,     0,   846,     0,   157,  1070,  1068,  1066,     0,     0,
     157,  1072,   851,     0,     0,     0,     0,  1107,     0,     0,
    1115,   876,   877,     0,   879,  1149,  1151,  1148,  1147,  1138,
       0,     0,     0,  1171,     0,     0,  1175,  1183,   203,   204,
     205,   206,   202,  1198,  1197,     0,     0,     0,  1200,  1199,
     201,     0,     0,     0,  1208,     0,     0,     0,     0,     0,
    1225,     0,  1239,  1238,  1240,     0,     0,     0,  1211,     0,
       0,     0,  1210,  1220,  1219,  1221,  1217,  1216,  1218,  1242,
    1241,  1243,     0,     0,     0,  1258,  1259,     0,   157,  1274,
    1269,  1272,     0,     0,   157,     0,     0,     0,   235,     0,
       0,     0,     0,     0,     0,     0,     0,   307,   306,     0,
       0,   298,   309,   311,     0,   321,   323,   322,   320,   157,
     328,     0,     0,     0,   165,   157,     0,     0,     0,     0,
     460,   474,   483,     0,   477,   170,   171,   169,   470,     0,
     486,     0,     0,     0,   458,    81,     0,     0,     0,     0,
       0,     0,   157,   970,     0,   973,     0,     0,   976,     0,
     157,   981,     0,   984,   985,     0,   987,   988,   989,     0,
     993,     0,     0,   996,     0,  1002,     0,     0,     0,  1007,
    1008,  1006,     0,     0,     0,  1013,  1014,     0,     0,  1017,
    1020,  1022,  1024,     0,     0,  1041,  1043,   960,  1052,   961,
       0,     0,  1054,  1045,     0,     0,   533,   534,     0,     0,
     579,     0,   589,   590,   591,   178,   595,   596,   597,     0,
       0,     0,   602,   603,   172,     0,     0,     0,   178,   609,
     610,   611,   612,   614,   175,   617,   618,     0,   178,     0,
       0,     0,   175,   175,   172,     0,     0,     0,     0,   645,
       0,   649,     0,     0,     0,     0,     0,   175,   175,   172,
       0,     0,   172,     0,     0,     0,     0,     0,   175,   175,
     172,     0,     0,   172,     0,     0,     0,     0,     0,   175,
     175,   172,     0,     0,   172,     0,     0,     0,     0,   175,
     175,   172,     0,     0,     0,   175,   625,   626,   627,   628,
     630,     0,   633,   634,     0,   175,     0,     0,   719,   720,
     178,   723,   724,     0,   755,   157,   757,     0,     0,   761,
       0,     0,     0,     0,     0,   893,   890,   896,   895,   892,
     898,     0,   770,     0,     0,     0,     0,   157,   777,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   794,   795,   796,     0,   800,   797,   799,     0,
       0,   805,   804,   806,   807,     0,     0,     0,     0,     0,
       0,   157,   157,   820,   187,   183,   188,   182,   185,   184,
     186,   826,   827,   828,     0,     0,   830,   832,   157,   157,
       0,   839,   842,   157,   157,   866,   870,   912,   743,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1100,
     937,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   938,     0,     0,     0,     0,
       0,   753,   754,   157,   165,  1071,     0,     0,  1075,  1076,
       0,     0,   853,     0,   157,     0,  1109,  1111,   875,     0,
    1168,  1169,  1172,  1173,   201,   201,   201,  1244,  1223,  1222,
    1224,  1227,  1226,  1230,  1229,  1231,  1228,  1236,  1235,  1237,
    1233,  1232,  1234,     0,     0,  1253,     0,  1275,     0,   157,
       0,  1278,     0,     0,   239,     0,   236,     0,     0,     0,
     276,     0,     0,     0,     0,   157,     0,   313,   145,     0,
     415,     0,   436,   165,   168,     0,     0,   449,     0,   487,
     488,     0,   453,   452,     0,     0,     0,     0,     0,   157,
     971,   168,   168,   168,   157,   977,   168,   165,   168,   168,
     157,   990,   168,   168,   168,   157,   997,   168,   168,   157,
       0,   168,   157,   168,   168,   157,   168,   157,  1031,  1032,
       0,     0,   532,   575,     0,   594,   599,   600,   601,     0,
     605,   606,   607,   613,   178,   175,   619,   636,   637,   638,
     639,   640,     0,   642,   643,   175,     0,     0,     0,   175,
     175,   172,     0,     0,     0,     0,     0,     0,   175,   175,
     172,     0,     0,     0,     0,     0,     0,   175,   175,   172,
       0,     0,     0,   175,   178,   178,   178,   178,   178,     0,
     178,   178,     0,   175,   175,   178,   178,   178,   178,   178,
       0,   178,   178,     0,   175,   175,   699,   700,   701,   702,
     704,     0,   707,   708,     0,   175,   710,   711,   712,   713,
     714,     0,   716,   717,   175,   629,   175,     0,   635,     0,
       0,   722,     0,   758,   168,     0,     0,   168,     0,     0,
       0,   769,   168,   773,   774,   168,   776,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     798,   801,   802,     0,   168,     0,     0,     0,   818,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1101,  1080,     0,  1087,  1088,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   157,     0,     0,    86,     0,     0,   946,   947,
     165,     0,     0,     0,  1078,   852,   854,   165,   157,  1161,
    1202,  1201,  1203,  1245,     0,  1255,  1285,     0,     0,  1280,
    1279,   240,     0,     0,     0,   281,     0,     0,     0,   299,
     168,   416,   420,   437,   439,     0,   447,   482,   157,     0,
       0,     0,     0,     0,     0,   967,   972,   975,   974,   978,
     979,   980,   982,   986,   991,   992,   994,   995,   998,   999,
    1003,   165,   168,  1010,   165,  1011,  1015,   165,  1025,   165,
       0,   157,     0,   531,     0,   604,   615,   178,   175,   644,
     178,   178,   178,   178,   178,     0,   178,   178,   175,   178,
     178,   178,   178,   178,     0,   178,   178,   175,   178,   178,
     178,   178,   178,     0,   178,   178,   175,   178,   659,   660,
     661,   662,   664,   175,   667,   668,     0,   178,   178,   688,
     689,   690,   691,   693,   175,   696,   697,     0,   178,   703,
     175,     0,   709,   175,   718,   631,   175,   727,   728,   157,
     760,     0,   168,   763,     0,   157,     0,   771,   775,   157,
       0,   782,   783,   784,   785,   789,   790,   786,   787,   788,
       0,     0,   168,   810,     0,   157,     0,     0,   823,   168,
       0,     0,   168,   168,     0,   869,     0,   189,   189,     0,
       0,   189,     0,   189,  1057,     0,     0,     0,     0,     0,
       0,     0,     0,  1079,     0,     0,   189,   189,     0,     0,
       0,     0,     0,     0,     0,     0,   939,     0,     0,     0,
    1057,    87,     0,   189,     0,  1103,   157,   157,     0,   165,
       0,   222,  1287,  1286,     0,     0,   244,     0,     0,     0,
       0,   314,   448,     0,   333,     0,   963,     0,   197,     0,
    1004,  1005,  1009,  1016,  1026,   370,     0,   333,     0,   616,
     641,   650,   651,   652,   653,   654,   175,   656,   657,   178,
     679,   680,   681,   682,   683,   175,   685,   686,   178,   670,
     671,   672,   673,   674,   175,   676,   677,   178,   663,   178,
     175,   669,   692,   178,   175,   698,   705,   175,   715,   632,
       0,   168,   764,     0,     0,     0,     0,     0,   791,   792,
     808,     0,     0,     0,   819,   824,     0,   833,   834,   825,
     168,     0,   190,  1057,  1057,    86,     0,  1057,     0,  1057,
     913,   157,     0,  1082,     0,  1085,  1124,  1086,  1084,  1081,
       0,  1057,  1057,    86,     0,     0,  1057,  1057,     0,     0,
    1057,   942,   940,   941,   920,  1057,  1057,  1103,  1119,     0,
    1069,  1067,  1105,     0,     0,     0,     0,   246,     0,     0,
       0,   333,   334,   336,   335,   381,     0,     0,   198,   200,
     199,   965,   966,   333,   383,     0,   178,   658,   178,   687,
     178,   678,   665,   178,   694,   178,   706,     0,   759,   168,
     168,     0,   168,     0,   168,   168,     0,   168,     0,  1057,
     926,   922,  1057,     0,   927,     0,   921,  1057,     0,  1083,
       0,   924,   923,  1057,     0,     0,   918,   916,  1057,   157,
     917,   919,   925,  1119,  1064,     0,     0,  1104,  1117,  1106,
    1160,     0,     0,     0,   277,   300,   303,   301,     0,     0,
     382,   962,   157,   384,   577,   655,   684,   675,   666,   695,
     168,   762,   768,     0,   781,   778,   809,   814,     0,   829,
       0,   931,   915,    86,     0,   929,  1125,     0,   914,    86,
       0,   930,     0,  1065,  1121,  1123,     0,  1116,     0,     0,
     282,     0,     0,     0,     0,   197,     0,   765,   157,   779,
     811,   843,  1057,     0,     0,  1057,     0,   168,  1122,  1118,
     245,     0,     0,     0,     0,     0,   964,   738,   157,   766,
     780,   157,   812,   933,     0,  1057,   932,     0,     0,   247,
     293,     0,   292,     0,   767,   813,    86,   934,    86,  1057,
     291,   290,  1057,  1057,   928,   936,   935
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    54,  1425,   171,   153,   919,  2500,  2501,   432,   433,
     434,   435,   154,   155,   156,   698,   690,    92,   818,   455,
    1222,  1688,  1362,  1375,  1358,  1931,  2603,  1422,  2661,  1593,
     343,   771,   774,   777,   785,    64,   368,   374,   378,   381,
      69,   384,    76,   400,   396,   390,   407,    83,   412,    93,
      99,   417,   419,   421,   490,   872,  1659,   423,   426,   106,
     442,   157,   159,  2655,   175,   177,   218,   914,   953,   479,
     861,   481,   491,   864,   869,   493,   495,   875,   498,   877,
     509,   880,   882,   512,   516,   520,   522,   525,   529,   557,
     553,  1283,   543,   900,   905,   897,  1271,   911,   546,   567,
     570,   575,   580,   588,   944,   946,   948,   950,   593,   955,
     221,   595,  1758,   240,   598,   600,   604,   609,   617,   250,
    1351,   621,   258,   630,  1367,   632,   638,  1000,  1383,   995,
    1799,  1389,  1387,  1801,   996,  1392,  1394,   644,   647,   642,
     260,   268,   270,   685,  1077,  1449,  1066,  1547,  1975,  1080,
    1084,  1075,   939,  1326,  1330,  1338,  1340,  1959,   276,  1093,
    1096,  1104,  2265,  2266,  2267,  1960,  2638,  2639,  1125,  1131,
    1134,  2717,  2718,  2714,  2715,  2764,  2268,  2269,   284,   290,
     298,   713,   708,   303,   308,   310,   723,   730,  1160,  1165,
     780,   768,   316,   320,   737,   326,   744,  1598,   757,   758,
    1196,  1191,  1604,  1181,  1610,  1622,  1618,  1185,   762,   746,
     332,   333,   347,  1209,   350,   356,   795,   798,   792,   358,
     361,   803
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2597
static const yytype_int16 yypact[] =
{
    5186,    78,   162,    42, -2597, -2597,  1217,  -189,   587,  1308,
     932,   152,  2639,   161,   111,   275,   131,   331,  5256,    62,
    2316, -2597,   173,   751,   141,  1053,   258,    14,   230,   440,
     887,   447,   666,  3523,   175,    -8,   520,   438,   440, -2597,
      60,   182,  1037, -2597,    63,   526,  1140, -2597,   437, -2597,
     117,  3643,   306,   124,   566,   108,   983,   290,   573,   606,
     138,   650,    19,   992, -2597, -2597, -2597,   994,   156, -2597,
     265,    31,   111,     5,   554,    92, -2597,   653,   156, -2597,
   -2597,    17,   156, -2597, -2597, -2597, -2597,   156, -2597, -2597,
   -2597, -2597, -2597, -2597,    26,   644,   676,   686,   193, -2597,
     156,  1334,   156,   156,   875,   156, -2597, -2597, -2597,   553,
   -2597, -2597, -2597, -2597,  4673, -2597, -2597, -2597, -2597, -2597,
   -2597,   156, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597,
   -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597,
   -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597,
   -2597, -2597, -2597, -2597,  1315, -2597,   156, -2597,   753, -2597,
   -2597,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111, -2597, -2597,   156, -2597, -2597,   675, -2597,   767,  1594,
     761,    20,   611,   773,   715,  4058,   245,  4724,  4634,   881,
    4673,  1495, -2597,  1951,  -151,   874,   945,   866,   949,    73,
     950,   440,   312, -2597,   914, -2597,   750,   700,    90, -2597,
      89, -2597,   506, -2597,    34,   927,    71, -2597, -2597,  4879,
   -2597, -2597, -2597,   964,   962,  1008, -2597, -2597, -2597, -2597,
     768, -2597, -2597, -2597, -2597,   823, -2597, -2597,  4879,  4245,
   -2597,  1054, -2597,    86, -2597,  1059,  1062,   145, -2597,   156,
   -2597,  1066,    22,  1072,   357,    11,  1076,    44, -2597, -2597,
   -2597,  1079,  1084,   111,   111,   156,   156, -2597, -2597,  1092,
   -2597, -2597, -2597, -2597, -2597, -2597,  3109,   622, -2597,  1094,
     101,   156,  4879,   156, -2597,    65, -2597, -2597, -2597, -2597,
   -2597,   156,  1169,   111,  1033,   156,  1315,   156, -2597,  1090,
   -2597,  4788, -2597, -2597,   740,  1113,  1116,   156, -2597,  1120,
   -2597, -2597,   -65,  1117,  4879,  1126, -2597,  1235,   156,  1029,
   -2597,   474,  1017,  1593,   336,  1145, -2597, -2597, -2597, -2597,
   -2597, -2597, -2597,  1148, -2597,   411,   214,   273,   294,    30,
     156,   156,   197, -2597,   156,   880,  1150, -2597,   156,   156,
   -2597,  1157,    16,    21,  1160,  1315, -2597, -2597, -2597,  1042,
     156, -2597, -2597, -2597, -2597, -2597, -2597,   156, -2597,  1162,
    1163, -2597,   156,   673, -2597, -2597, -2597, -2597, -2597, -2597,
     156, -2597, -2597,   156, -2597, -2597,   421,   421, -2597,  1166,
   -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597,
   -2597,   988,   156,   156,  1191,  1204,  1214, -2597, -2597,   156,
     156,   156, -2597,   156, -2597,  1219, -2597, -2597, -2597, -2597,
     863, -2597,  1216, -2597,  4879,  1220, -2597,   156, -2597, -2597,
   -2597,   156,  1221,  1224,  1224,  4879,   156,   156,   156,   156,
     156,   156, -2597,   156,  4673,  1334,   156,   156, -2597, -2597,
   -2597, -2597, -2597, -2597, -2597,  1334,   156, -2597, -2597, -2597,
   -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597,  1237,
   -2597,   977,   -22, -2597, -2597, -2597, -2597, -2597, -2597, -2597,
   -2597, -2597,   482, -2597, -2597, -2597,  1083, -2597,     3,     7,
       7, -2597, -2597, -2597,  1255, -2597,  1265, -2597, -2597,    -7,
   -2597,  1098, -2597, -2597, -2597,  1109, -2597, -2597,  1315, -2597,
     156,   156, -2597,  4879,  4879,  1315, -2597, -2597,  1315, -2597,
   -2597, -2597, -2597,  1315, -2597, -2597,  4879,  1315,   156, -2597,
   -2597,  4879, -2597,  1286,   140,  1093,    12, -2597, -2597,  1095,
    4879,    54, -2597, -2597, -2597, -2597, -2597, -2597,  1288,  1296,
    1304, -2597,  1107, -2597,   -46, -2597,   156, -2597, -2597,   535,
   -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597,
   -2597,    34, -2597, -2597, -2597, -2597, -2597, -2597,  1119,  1122,
   -2597, -2597,  1252,  1253,  1258, -2597, -2597,  1096, -2597,   156,
    1322,  1102,  4788, -2597,  1315, -2597, -2597,  1326, -2597, -2597,
   -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597,
   -2597, -2597,  4879,  4879,  4879,  4879, -2597, -2597, -2597,  1335,
     111, -2597, -2597,  1342,  1343,  1149,   156, -2597,   222,  1293,
   -2597,  1384, -2597,   532,  1303,  3842,    52,  1394, -2597,  1399,
   -2597,  1400, -2597,   292, -2597,  1409,  1413, -2597,  1416, -2597,
   -2597, -2597,   156, -2597,  4788,  4575,  1905,   763,  1429,   484,
    1320, -2597, -2597, -2597,    59,    98,  1431,  1434,    -2,   156,
     341,   382,   129,  4879,   111,  1906,   530,    39,   445,   304,
      24, -2597,  1419,  1423,  1437, -2597, -2597, -2597, -2597, -2597,
   -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597,   156,
   -2597, -2597, -2597, -2597,   156,   156,   156,   156, -2597, -2597,
     156,  1315,   156, -2597,   156,  1334,   156,  1441,  1315, -2597,
   -2597, -2597, -2597, -2597, -2597, -2597, -2597,  1446,   362,   469,
   -2597, -2597, -2597,  1447, -2597, -2597, -2597, -2597,  1354, -2597,
    1454,  1456,  1376,  1461, -2597,  1464, -2597,  1465,  1378,  1466,
     457,   453,   493,   519,   531,  1468,   551, -2597, -2597,  1469,
    1479,  1481, -2597, -2597,  1484, -2597, -2597, -2597, -2597,  1487,
   -2597, -2597,  1488, -2597, -2597,  1489, -2597, -2597, -2597, -2597,
   -2597, -2597, -2597,   156,   156, -2597,   156,   891,   156,   156,
   -2597,  3585, -2597,   930,  1485, -2597,   957,  1491, -2597, -2597,
     -32,   156,   156, -2597,  1492, -2597, -2597,  1496,  1179,   156,
    1493,   195, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597,
   -2597, -2597, -2597, -2597, -2597, -2597,  1499,  1502,   156,   156,
     156,  1503,   111,  1506,  1509,  1315,  4879, -2597, -2597, -2597,
   -2597, -2597,  1315, -2597, -2597,   156,   156,   156,  4879,   156,
    1334,   156, -2597,   156, -2597, -2597, -2597, -2597, -2597,  1513,
    1514, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597,
   -2597, -2597, -2597, -2597,   245, -2597,   156, -2597, -2597, -2597,
   -2597, -2597, -2597, -2597, -2597,  4879,   156,  1315,  1315,   -32,
     -32,   -32,  1315,  1334,   156,  1315, -2597, -2597, -2597,   156,
   -2597,   -46,  1330,  1516,  1520, -2597, -2597,  1315, -2597,  1369,
    1370, -2597,  1539,  1544, -2597,  1546,  1024,  1458,  1515, -2597,
     156,  4635,   577,   794, -2597, -2597, -2597,   156,   548,  1181,
   -2597,  1291, -2597,  1906,  1295,   558,  1256,   489, -2597, -2597,
     156, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597,
   -2597,   156,  1558, -2597, -2597, -2597, -2597,   -32, -2597, -2597,
   -2597, -2597, -2597,  4755, -2597, -2597,  1560,  1562,   156,  1563,
    1565,  1566,   864,   864,   423,  1570,  1572,  1575,  1578,  1309,
    1312,  1579,  1590,  1591,    56,    56,   423,  1628,  1631,   423,
    1592,  1632,  4819,  1633,  1636, -2597, -2597,  1640,  1645,   625,
   -2597,  1650,  1653,  1646,  1655,   864,   423,  1654,  1657, -2597,
    1658, -2597, -2597,  1315,   820,  1390,  1418,   -44,  1421,  1529,
    1002,   459,  1660,   374,  1525,  1564,   929,  1366,  1637,   571,
    1426,  1569,  1668,  1459,   179,    58,   367,   363,  4879,  1906,
    1639,   435,  1430,  1467,  1679,    37, -2597, -2597,   454,  1681,
    1682, -2597, -2597, -2597,  1683,  1471,   113,  1906,  1472, -2597,
   -2597, -2597,   111,  1688,  1689,   156, -2597, -2597, -2597, -2597,
   -2597, -2597, -2597, -2597, -2597,     8, -2597,   696, -2597, -2597,
   -2597,   156, -2597,   156, -2597, -2597, -2597, -2597,   156,   156,
     156,   484,  4879, -2597,  1692,  1139, -2597, -2597,   156, -2597,
   -2597,   156,  4879,   156, -2597, -2597, -2597, -2597, -2597, -2597,
   -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597,   111,   156,
   -2597,   156,   484,  1693,  1694, -2597, -2597, -2597, -2597,   156,
     156, -2597,   111, -2597, -2597, -2597,   130,  1695,  1696, -2597,
   -2597, -2597, -2597, -2597,   156,   156, -2597, -2597,  1334,   156,
     156, -2597, -2597, -2597, -2597,  1690,   156, -2597,   156,  1589,
   -2597,   156, -2597,   156,  1595, -2597,  1699, -2597,   682,   682,
     567,   682,  1701, -2597,   575, -2597, -2597,  1702,  1705,   599,
    1700, -2597,  1706,  1708,  1710, -2597,   693,   698,  1712,  1715,
    1717, -2597, -2597,  1719,  1721,  1718, -2597,   682,   682,   682,
     156, -2597, -2597, -2597,   156, -2597,   156,   787,  4879, -2597,
     156, -2597,  4788,  1315, -2597, -2597,  1723, -2597, -2597,  1724,
   -2597, -2597, -2597, -2597,  1720,  1033, -2597,   156,  1722,   156,
     156,   156,  1089, -2597,  1725,  1726,   156,   156,    87,  1730,
     111,   111, -2597,  1315,   156,  1732,  1733,  1734,  1315,  4879,
   -2597,   156, -2597, -2597, -2597,   156,   156,   156,  1315,  4879,
     -32, -2597, -2597, -2597, -2597,  1334,   156,  1735,   -32,   156,
     399, -2597,  1736, -2597, -2597,  1049,  2548,   156, -2597,   156,
    1738,  1743,   156, -2597, -2597, -2597,  1739,   837,  4673,  1500,
     584,  1504,    27,  4879,   629, -2597,   475,  1602,    64,   677,
    1505,   163, -2597, -2597,   446,  1576,   499,  1629,   619,  1906,
     732, -2597,  1751,  1501, -2597,   533, -2597, -2597, -2597, -2597,
    1906,  1541, -2597, -2597, -2597, -2597, -2597,   156, -2597,   156,
   -2597, -2597,   156,   156, -2597,   156, -2597,   156, -2597, -2597,
   -2597, -2597,  1556,   156, -2597,   156,    13, -2597, -2597,  1759,
    1760, -2597,   156,   864,   864,   864, -2597, -2597, -2597, -2597,
   -2597, -2597,  1761,   864,   864,   864,   657, -2597, -2597,    56,
     864,   864,   864, -2597, -2597,   864,   864,  1762,   864,   864,
    1763,    56,   702, -2597,  1764,  1765,  1767, -2597,   747, -2597,
     824,  1118, -2597,   775, -2597,  1507,  1768,  1770,  1775,    56,
      56,   423,  1777,  1779,   423,  1781,  1787,  1791,   864,   864,
   -2597,  1792,   864,   864, -2597,  1793, -2597, -2597, -2597, -2597,
   -2597, -2597,   111, -2597, -2597, -2597,  4673,  1207,   111,   156,
    1300,  1284,   -48, -2597, -2597, -2597,   -41, -2597, -2597, -2597,
   -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597,  1796,
     111,   156, -2597,   111,  1799,   156,  4879,   111,  1405,  1522,
    1559,   167,   208,  1598,   226,  1528,  1531,  1804,  1842,  1845,
    1002,  1846,  1847,  1848,  1536,  1537,  1201,  1851,   111,   156,
    1382,  1583, -2597, -2597,   111,  4879, -2597, -2597,  4879,   156,
      25,  1852,   111,   156,  1315,   111, -2597,  1853,  4879,  4879,
     156, -2597, -2597, -2597,   111,   111,  4879, -2597, -2597, -2597,
   -2597, -2597, -2597,  4879,   156,   111, -2597, -2597, -2597,   156,
   -2597, -2597,  1854,   156,  1625,   218,   156,  1630,   156,   546,
     156, -2597,   156,  1634,  1638,   156,   156,   156,   156,   156,
     156,   156,   156,    36,   156,   156,  1641, -2597,   156,   156,
     156,   156, -2597,  4879,  1315,  1855,  1857,  1859,   156,   156,
    1315, -2597,   156,   156,   156,  4879,   484, -2597,   156,   156,
   -2597, -2597, -2597,  1863, -2597, -2597, -2597, -2597, -2597, -2597,
    1860,   156,   156, -2597,   156,   156, -2597, -2597, -2597, -2597,
   -2597, -2597, -2597, -2597, -2597,  1866,  1871,  1873, -2597, -2597,
     682,  1874,  1875,  1877, -2597,  1878,  1879,  1881,  1882,  1880,
   -2597,  1893, -2597, -2597, -2597,  1894,  1896,  1898, -2597,  1899,
    1900,  1902, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597,
   -2597, -2597,   156,   156,   156, -2597, -2597,   156,  1315, -2597,
   -2597, -2597,  1033,   156,  1315,   156,   156,   156, -2597,   156,
     156,  1903,   156,  1907,  1872,   156,   156, -2597, -2597,  1911,
    4879, -2597, -2597, -2597,   156, -2597, -2597, -2597, -2597,  1315,
   -2597,  1526,   156,  1526,   -32,  1315,  4879,   156,   156,  1912,
   -2597, -2597, -2597,   156, -2597, -2597, -2597, -2597, -2597,  4879,
   -2597,  4879,   156,  1913, -2597,   -46,  1904,  1914,  1915,  1917,
    1918,  4879,  1315, -2597,  4879, -2597,  4879,  4879,  4673,  4879,
    1315, -2597,  4879, -2597, -2597,  4879, -2597, -2597,  4673,  4879,
   -2597,  4879,  4879,  4673,  4879, -2597,  4879,  4879,   156, -2597,
   -2597, -2597,  4879,  4879,  4879, -2597, -2597,  4879,  4879, -2597,
   -2597, -2597, -2597,  4879,  4879, -2597, -2597, -2597, -2597, -2597,
     156,   156, -2597, -2597,  1920,   156, -2597, -2597,  1921,  1923,
   -2597,   156, -2597, -2597, -2597,   864, -2597, -2597, -2597,  1924,
    1925,  1930, -2597, -2597,   423,  1932,  1934,  1936,   864, -2597,
   -2597, -2597, -2597, -2597,    56, -2597, -2597,  1935,   864,  1937,
    1938,  1939,    56,    56,   423,  1941,  1953,  1971,   907, -2597,
    1124, -2597,  1185,  1618,  1972,  1974,  1975,    56,    56,   423,
    1977,  1978,   423,  1979,  1623,  1980,  1984,  1985,    56,    56,
     423,  1987,  1988,   423,  1989,  1627,  1992,  1993,  1995,    56,
      56,   423,  1997,  1998,   423,  1999,  2000,  2003,  2004,    56,
      56,   423,  2006,  2008,  2009,    56, -2597, -2597, -2597, -2597,
   -2597,  2012, -2597, -2597,  2013,    56,  2014,  2015, -2597, -2597,
     864, -2597, -2597,  2017, -2597,  1315, -2597,  4879,   156, -2597,
     156,  4879,   156,  2026,  1390, -2597, -2597, -2597, -2597, -2597,
   -2597,  2029, -2597,  4879,   111,  2030,  4879,  1315, -2597,  2032,
    1390,   156,   156,   156,   156,   156,   156,   156,   156,   156,
    2037,  2038, -2597, -2597, -2597,  2039, -2597, -2597, -2597,  2041,
    2043, -2597, -2597, -2597, -2597,   156,  4879,   156,  2044,  1390,
     111,  1315,  1315, -2597, -2597, -2597, -2597, -2597, -2597, -2597,
   -2597, -2597, -2597, -2597,   156,  1334, -2597, -2597,  1315,  1315,
     156, -2597, -2597,  1315,  1315, -2597, -2597, -2597, -2597,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,  2349,
   -2597,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,  1281,  2045,   156, -2597,   156,   156,   156,  2047,
    2050, -2597, -2597,  1315,   -32, -2597,  2052,  2056, -2597, -2597,
    1334,   156, -2597,  2058,  1315,  4879, -2597, -2597, -2597,  2059,
   -2597, -2597, -2597, -2597,   682,   682,   682, -2597, -2597, -2597,
   -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597,
   -2597, -2597, -2597,  1390,   156, -2597,   156, -2597,   156,  1315,
     156, -2597,  1334,   156, -2597,   156, -2597,  1916,  2060,  2061,
   -2597,  2063,   156,   156,  2065,  1315,  4879, -2597, -2597,   156,
   -2597,   156, -2597,   -32,  1049,   156,  2066, -2597,   156, -2597,
   -2597,  4673, -2597, -2597,  2067,  2068,  2070,  2071,  2072,  1315,
   -2597,  1049,  1049,  1049,  1315, -2597,  1049,   -32,  1049,  1049,
    1315, -2597,  1049,  1049,  1049,  1315, -2597,  1049,  1049,  1315,
    4879,  1049,  1315,  1049,  1049,  1315,  1049,  1315, -2597, -2597,
    2076,  4673,  2077, -2597,   156, -2597, -2597, -2597, -2597,  2079,
   -2597, -2597, -2597, -2597,   864,    56, -2597, -2597, -2597, -2597,
   -2597, -2597,  2080, -2597, -2597,    56,  2082,  2085,  2088,    56,
      56,   423,  2081,  2090,  2091,  2092,  2093,  2094,    56,    56,
     423,  2096,  2100,  2101,  2104,  2105,  2106,    56,    56,   423,
    2108,  2109,  2110,    56,   864,   864,   864,   864,   864,  2113,
     864,   864,  2114,    56,    56,   864,   864,   864,   864,   864,
    2115,   864,   864,  2117,    56,    56, -2597, -2597, -2597, -2597,
   -2597,  2118, -2597, -2597,  2119,    56, -2597, -2597, -2597, -2597,
   -2597,  2120, -2597, -2597,    56, -2597,    56,  2121, -2597,  2122,
    2123, -2597,  4788, -2597,  1049,  2124,  4879,  1049,   156,  4879,
    2125, -2597,  1049, -2597, -2597,  1049, -2597,  4879,  2126,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
   -2597, -2597, -2597,  4879,  1049,   156,  4879,  2127, -2597,  1334,
    1334,  4879,  1334,  1334,  4879,  4879,  1334,  1334,   156,   156,
     156,   156,   156,   156,  1390,   156,   156,   156,  1622,  1642,
    1659,  1744,  1771,  1772,  1773,  2349, -2597,  1774, -2597, -2597,
    1390,   156,   156,   156,   156,  1390,   156,   156,   156,   156,
     156,   156,  1315,   156,  1612,  1390,   156,   156, -2597, -2597,
     -32,   111,  4879,  4879, -2597, -2597, -2597,   -32,  1315,  2132,
   -2597, -2597, -2597, -2597,   156, -2597, -2597,  1334,   156, -2597,
   -2597, -2597,  1246,  2136,  2137, -2597,   156,  2133,  1526, -2597,
    1049, -2597, -2597, -2597, -2597,  2138, -2597, -2597,  1315,  2140,
    2142,  2141,  2143,  4879,  2144, -2597, -2597, -2597, -2597, -2597,
   -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597,
   -2597,   -32,  1049, -2597,   -32, -2597, -2597,   -32, -2597,   -32,
    2145,  1315,  2147, -2597,   156, -2597, -2597,   864,    56, -2597,
     864,   864,   864,   864,   864,  2149,   864,   864,    56,   864,
     864,   864,   864,   864,  2151,   864,   864,    56,   864,   864,
     864,   864,   864,  2152,   864,   864,    56,   864, -2597, -2597,
   -2597, -2597, -2597,    56, -2597, -2597,  2155,   864,   864, -2597,
   -2597, -2597, -2597, -2597,    56, -2597, -2597,  2156,   864, -2597,
      56,  2157, -2597,    56, -2597, -2597,    56, -2597, -2597,  1315,
   -2597,  4879,  1049, -2597,  2159,  1315,   156, -2597, -2597,  1315,
     156, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597,
     156,   156,  1049, -2597,  2160,  1315,   156,  1334, -2597,  1049,
     156,  1334,  1049,  1049,  4879, -2597,   156,  2162,  2162,   156,
     156,  2162,  1390,  2162, -2597,  4879,  1002,  2165,  2167,  2170,
    2171,  2172,  2168, -2597,   111,  1390,  2162,  2162,   156,   156,
    1390,   156,   156,   156,   156,   156, -2597,  1334,   156,  2173,
   -2597, -2597,   156,  2162,   111,    10,  1315,  1315,   111,   -32,
    2175, -2597, -2597, -2597,  2176,   156, -2597,  2177,  2180,  2075,
     156, -2597, -2597,  2181,   -15,  4879, -2597,  2182,     0,  4879,
   -2597, -2597, -2597, -2597, -2597, -2597,  2184,   -15,   156, -2597,
   -2597, -2597, -2597, -2597, -2597, -2597,    56, -2597, -2597,   864,
   -2597, -2597, -2597, -2597, -2597,    56, -2597, -2597,   864, -2597,
   -2597, -2597, -2597, -2597,    56, -2597, -2597,   864, -2597,   864,
      56, -2597, -2597,   864,    56, -2597, -2597,    56, -2597, -2597,
     156,  1049, -2597,  4879,  4879,   156,  4879,   156, -2597, -2597,
   -2597,  4879,  4879,   156, -2597, -2597,  4879, -2597, -2597, -2597,
    1049,  2185, -2597, -2597, -2597,  1390,   156, -2597,  2187, -2597,
   -2597,  1315,  2188, -2597,  2190, -2597, -2597, -2597, -2597, -2597,
    2192, -2597, -2597,  1390,   156,  2193, -2597, -2597,   156,  4879,
   -2597, -2597, -2597, -2597, -2597, -2597, -2597,    10,  1750,  1906,
   -2597, -2597, -2597,   111,  2194,  2195,  2196, -2597,  2089,  2198,
      33,   -15, -2597, -2597, -2597, -2597,  2199,  4879, -2597, -2597,
   -2597, -2597, -2597,   -15, -2597,  2200,   864, -2597,   864, -2597,
     864, -2597, -2597,   864, -2597,   864, -2597,  4788, -2597,  1049,
    1049,   156,  1049,  2202,  1049,  1049,   156,  1049,   156, -2597,
   -2597, -2597, -2597,  2203, -2597,   156, -2597, -2597,  2204, -2597,
     156, -2597, -2597, -2597,  2206,   156, -2597, -2597, -2597,  1315,
   -2597, -2597, -2597,  1750, -2597,  1887,  1825,  1906, -2597, -2597,
   -2597,  2208,  2222,  2207, -2597, -2597, -2597, -2597,   734,   734,
   -2597, -2597,  1315, -2597, -2597, -2597, -2597, -2597, -2597, -2597,
    1049, -2597, -2597,  2224, -2597,  4673, -2597, -2597,  2227, -2597,
    1390, -2597, -2597,  1390,   156, -2597, -2597,   156, -2597,  1390,
     156, -2597,  4879, -2597,  1887, -2597,   111, -2597,  2228,  2229,
   -2597,   156,   156,   156,   156,     0,  2230,  4673,  1315, -2597,
    4673, -2597, -2597,   156,  2234, -2597,   156,  1049, -2597, -2597,
   -2597,  2246,  2250,   156,  2251,   156, -2597, -2597,  1315, -2597,
   -2597,  1315, -2597, -2597,  2253, -2597, -2597,  2254,  2256, -2597,
   -2597,  2257, -2597,  2258, -2597, -2597,  1390, -2597,  1390, -2597,
   -2597, -2597, -2597, -2597, -2597, -2597, -2597
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2597, -2597,    -3, -2597,   838,  -899, -1704, -1010,  1561, -2597,
     839,  -433,  1901,   -50,    53, -2597, -2597, -1662,  1805,  2016,
    -782,  -294,  -863,   948,  1647, -2597, -1043, -2597,  -576, -1143,
   -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597,
   -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597,
   -2597, -2597, -2597, -2597,  -442,  -487, -2597, -2597, -2597, -2597,
   -2597, -2597, -2597, -1931, -2597, -2597, -2597, -2597, -2597, -2597,
   -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597,
   -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597,
   -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597,
   -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597,
   -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597,
   -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597,
   -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597,
   -2597, -2597, -2597, -2597, -2597, -1466, -2597, -2597, -2597, -2597,
   -2597,  -664, -2597, -2597, -2597, -2597, -2597, -2597,    55, -2597,
   -2597, -2597, -2597,    -6,  -661, -1390,  -373, -2597, -2597, -2597,
   -2597, -2597,  -452,  -446, -2597, -2597, -2596, -2597, -2597, -2597,
   -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597,
   -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597,  1532,
   -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597,
   -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597, -2597,
   -2597, -2597
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1258
static const yytype_int16 yytable[] =
{
      68,   355,  1270,   873,  1905,  1426,  1092,  1095,   105,  2049,
   -1102,  2051,   852,  1521,  1118,  1087,   902,  2652,   107,   261,
     793,   410,   855,    65,    66,   796,  1594,   628,  1599,  1135,
     295,   415,  2658,  1756,    65,    66,    65,    66,   319,    65,
      66,  1972,  1503,   778,  1122,    65,    66,   349,  1708,   645,
     360,   376,  1924,   367,  1629,  1630,  1631,   373,   908,  1875,
     380,    65,    66,   304,   383,   385,  1878,  1220,   395,   544,
     702,   402,   406,  1373,  1925,   409,  1078,  1926,   554,   413,
    1428,   262,   866,   859,   414,  1718,   297,   591,  1927,   728,
     619,   110,   917,   312,  1486,    65,    66,   427,   431,   436,
     437,   441,   443,   263,    77,   692,   639,  1262,  1263,  1264,
     576,  1928,   107,   363,   327,   107,    65,    66,   447,  2765,
      65,    66,   313,  1377,   640,  1136,  1380,    65,    66,  1929,
     110,  1137,    65,    66,  1657,  1571,   112,   173,  1081,   555,
     997,    65,    66,  1411,   898,    55,   219,  1572,   398,  1511,
     870,   624,   572,   456,  1876,    65,    66,   251,   264,    65,
      66,  1879,   545,   220,   328,  1097,   305,   446,  2788,  1098,
     468,   403,   860,   329,    56,  1346,  2653,   107,   489,   107,
     299,   867,   903,   510,  1723,    65,    66,   399,  1893,   871,
     909,  2659,   100,   878,   158,  1487,   174,   110,   424,  1231,
      65,    66,  1429,   729,   330,   641,  1484,  1232,  1877,   918,
     703,  1082,   101,   998,   482,  1880,    57,  1088,   107,  1374,
     483,    65,    66,   115,   425,   391,   779,  2725,   577,  1895,
     112,   116,   117,   112,    58,   269,   969,   970,  1221,   511,
     241,   519,  1099,   524,   528,   306,   626,  1898,    65,    66,
    1512,   718,   556,   364,   307,  1757,   559,   118,   879,   484,
     416,   868,   652,   653,    59,   102,  1100,   589,   625,   386,
     404,   411,  1334,  1709,   592,  2654,   629,   107,   699,   107,
     701,   769,  1151,    60,   971,   485,   620,    61,   704,   707,
    2660,   710,   714,  1504,   716,   112,   118,   112,   107,  1083,
    1089,    62,   110, -1102,   726,   693,  1003,  1123,   107,   377,
    1719,   794,   694,   695,   736,   738,   797,   115,   120,   161,
     115,  1522,   162,   646,   265,   116,   117,  1079,   116,   117,
    1101,   486,   904,  1124,  1138,   578,   112,   781,   782,   784,
     772,   786,   392,    67,  2726,   789,   790,   712,   696,  1973,
     405,   314,   163,   103,  1004,   910,   802,   804,   560,  1488,
     164,   775,   633,   118,   805,   579,   331,   150,  1658,   808,
     810,   266,   151,   152,   315,   487,   488,   811,  1495,   561,
     812,   573,   115,   317,   115,  1930,   393,   394,   487,  2727,
     116,   117,   116,   117,   562,   112,  1515,   112,   759,   822,
     823,  1453,  1156,  1682,   574,  1068,   827,   828,   829,  1724,
     830,  1485,   120,  1894,  1513,   120,   112,  1250,   348,   972,
     973,  1874,   165,   115,   837,   359,   112,  1553,   838,   783,
    1102,   116,   117,   843,   844,   845,   846,   847,   848,   372,
     849,   344,   431,   853,   854,   765,  1068,  1069,  1890,   104,
    1951,   813,   431,   856,  1896,   697,   110,  2007,  1565,   760,
    1266,   150,  1126,    63,   150,   387,   151,   152,   118,   151,
     152,  1919,  1899,  1725,   166,  1157,   634,   120,  1676,   120,
     176,  1505,   115,   318,   115,   300,  1680,  1492,  1069,  1005,
     116,   117,   116,   117,   974,   301,   259,   851,   271,   167,
     563,   168,  1713,   115,   975,   976,  1341,   885,   886,  1161,
    1094,   116,   117,   115,   285,  1177,   388,   814,   120,   747,
     766,   116,   117,   389,   309,   894,   150,   311,   150,   169,
     334,   151,   152,   151,   152,   977,   740,   980,  1851,   921,
     922,  1854,   956,   581,   357,  1454,   981,   982,  1068,    65,
      66,    65,    66,   920,   582,  1182,   635,    65,    66,   564,
    1742,    65,    66,  1158,  1006,   345,   362,   150,   369,  1497,
    1119,  1127,   151,   152,  1007,   272,  1178,   120,   370,   120,
     749,   583,  1162,  1450,  1070,   994,   951,   899,   815,  1342,
    1069,    78,  1360,  1188,   983,   170,   923,   741,   120,  1132,
    1071,  1072,   924,   565,  1013,  1008,  2664,  1186,   120,  1091,
     371,   636,   566,  1193,  1179,  1493,  1183,  1128,   761,  1726,
    1455,   767,   118,   968,   940,  1070,   150,    79,   150,  1595,
    1395,   151,   152,   151,   152,  1159,   637,  1601,  1490,  1396,
    1397,  1071,  1072,  1120,  1317,  1491,  1714,   150,  1735,  1012,
     346,   925,   151,   152,  1189,   375,  2520,   150,   408,  1745,
     584,  1607,   151,   152,  1129,  1456,  1090,  1498,   926,  1103,
    1163,  1769,  1770,   273,  1194,   418,    65,    66,  1727,   816,
    1187,   420,   862,   927,   817,   809,  1506,  1398,   274,   928,
    1596,   422,  1073,  1074,   929,  1478,  1142,  1361,  1602,   585,
      80,  1143,  1144,  1145,  1146,  1451,  1743,  1147,  1705,  1149,
    1318,  1150,   431,  1152,   686,  1577,  1789,  1790,  1523,  1771,
    2730,  1715,  1608,  1524,  1588,  1589,  1499,  1070,   742,   984,
     985,  1121,  2733,  1073,  1074,  1180,  1319,    65,    66,   755,
     863,  1213,  1164,  1071,  1072,  1525,  1526,  1130,  1527,  1528,
     930,   275,  1803,  1711,   444,  1615,   743,   457,   401,  1529,
    1619,  1804,  1805,  1328,  1791,  1744,  1716,  1061,   586,   931,
    1729,  1530,  1531,  1336,   932,  1184,   933,  1730,  1956,  1532,
    1204,  1205,  1533,  1206,  1208,  1210,  1211, -1257,    81,  1836,
    1837,  1635,  1732,  1062,   469,   719,  2063,   687,  1223,  1224,
    1534,  1720,   934,   935,   986,  1228,  1229,  1535,  1536,  1806,
     936,  1537,   601,  1190,   987,   988,  1616,  1479,  1320,   989,
     587,  1620,  1399,  1400,  1322,  1235,  1236,  1237,   937,  1814,
    1706,   720,  1677,  1195,   470,  1073,  1074,  1838,  1815,  1816,
     243,    82,  1245,  1246,  1247,   990,  1249,   431,  1251,  1597,
    1252,  1733,   160,   172,  1772,  1773,   602,  1603,  1590,  1591,
     242,  2300,  2301,  2302,  2210,   267,  1736,   832,   833,   244,
    1321,  1255,   302,  1257,  1538,  1712,   286,   870,    65,    66,
    2218,  1609,   480,  1259,   938,   721,  1817,  1592,   688,   496,
     431,  1267,  2052,   365,    65,  1207,  1269,  1401,   497,  1792,
    1793,  2692,  1995,  1416,   492,  1737,   689,  1402,  1403,  2237,
     397,  2109,  1404,  1282,   521,   438,   871,  1286,  1734,  2703,
    1696,  2126,  2127,  1721,  1327,  1329,  1332,  1256,  1063,  1774,
    1539,  2122,  1337,   277,  1214,  1215,  1540,  1343,  1405,  1775,
    1776,   547,  1386,   245,  1807,  1808,  2159,   494,  1344,  2162,
     548,  1459,   278,  1541,   279,   550,   549,  2170,   246,  1323,
    2173,  1217,  1218,  1542,  1738,  1352,   558,   603,  2181,  2128,
    1777,  2184,  1839,  1840,  1794,  1617,  1417,   605,  2191,  1460,
    1621,   568,  1461,  1064,  1795,  1796,    65,    66,   439,   569,
    1543,  1544,   571,  1697,   722,    65,    66,    65,    66,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,  1065,
    2612,  1545,  1462,  2303,  1324,  1797,    94,   590,   287,  1809,
     247,  1818,  1819,  1739,   288,  1356,   289,    65,  1281,  1810,
    1811,   596,  1489,    95,  1812,   597,    65,    66,   551,   599,
    1325,  1463,  1432,   366,  1464,    65,    66,  1841,   606,  2782,
    1418,  1419,   108,  1514,  1357,  2785,  1546,  1842,  1843,   618,
    1813,   248,  1520,   321,   622,  1420,   623,  1698,  1699,  1433,
     627,   249,   552,  1685,  1686,   280,   440,   631,  1548,   252,
    1549,   643,  1700,   648,  2610,  1550,  1551,  1552,  1844,   649,
     110,   607,    65,    66,   717,  1558,  1820,   654,  1559,   691,
    1561,   650,   651,  1434,  2129,  2130,  1821,  1822,  1421,  1435,
    2634,  1823,  2822,    96,  2823,  1436,  1563,   724,  1564,   379,
     725,   382,   731,  1825,   727,  1701,  1568,  1569,   739,   608,
     733,   709,  1826,  1827,   281,  1437,   111,  1824,  2135,  2136,
     745,  1575,  1576,  1556,  1557,   431,  1578,  1579,  1687,  1651,
     763,   322,   764,  1581,   788,  1582,  1438,    97,  1584,   787,
    1585,   791,  1638,  1465,   799,   323,   806,   253,   807,   801,
     820,  1439,    65,    66,   770,   773,   776,   335,   282,  2131,
    1828,   254,    65,    66,    65,    66,  2137,   283,   336,  2132,
    2133,  1227,   821,    98,   113,   824,  1466,  1632,  1331,  2144,
    2145,  1633,  2291,  1634,  1440,  1911,  1912,  1637,   825,   705,
      65,    66,  1867,  2690,  2691,   337,   255,  2694,   826,  2696,
    2134,   834,  1643,   831,  1646,   836,  1648,  1649,  1650,  1652,
     428,  2701,  2702,  1655,  1656,   430,  2706,  2707,    65,    66,
    2710,  1664,   857,  1441,  2472,  2711,  2712,  2146,  1670,    65,
      66,   324,  1671,  1672,  1673,   858,   118,   865,  1442,   874,
    2485,   119,   431,  1678,   325,  2490,  1681,   256,  2375,   876,
    1443,  2323,   840,   841,  1691,   734,  1692,  2384,  1645,  1694,
     257,   881,   706,   883,    65,    66,  2393,    65,    66,  1873,
     896,  1423,  1424,   912,   338,  2341,   901,  1444,   906,  2751,
     108,   913,  2752,    65,    66,  1871,  2514,  2755,   915,  1445,
     916,  1446,  1447,  2758,   941,  1829,  1830,   942,  2761,   943,
     945,  2138,  2139,  1683,  1747,   947,  1748,   952,   949,  1749,
    1750,   958,  1751,   339,  1752,   954,    84,    65,    66,   963,
    1754,  1703,  1755,   428,   429,   430,   965,   966,   735,  1761,
     448,  1448,   967,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   978,  2147,  2148,   111,    65,    66,  1916,  1467,   979,
    1831,   991,  2803,    65,    66,  2806,  2140,  1423,  1424,   999,
    1832,  1833,   340,  1001,  1002,  1834,  2141,  2142,    65,    66,
    1889,    70,  1423,  1424,  1009,  2817,  1468,    71,  1010,  1469,
    1011,  1076,  1470,   449,  1868,  2604,  1870,  1872,  2607,  2824,
    2609,  1835,  2825,  2826,  1067,  1085,  1139,  2143,   341,  1086,
    1140,  1141,   113,  2621,  2622,  1153,   450,   451,  1883,  1471,
    1155,  1166,  1886,  1167,   342,   452,    72,  2149,   964,  1168,
    2636,  1169,  2608,    85,  1170,  1171,  1174,  2150,  2151,  1172,
    1173,  1175,  1192,   453,  1197,  2620,  1915,  1917,  1472,  1866,
    2625,  1473,    73,   454,  1198,  1199,  1923,    86,  1200,  1216,
    1934,    87,  1201,  1202,  1203,  1219,  1284,  1940,  2152,   526,
    1272,  1226,  2242,  1233,  1225,  1230,  1234,  1238,  2504,   119,
    1240,  1945,  1106,  1241,   108,  2508,  1947,  1133,  1253,  1254,
    1949,  1273,  1952,  1953,  1274,  1955,  1957,  1958,    74,  1961,
    1276,  1277,  1964,  1965,  1966,  1967,  1968,  1969,  1970,  1971,
    1974,  1976,  1977,  1278,    88,  1979,  1980,  1981,  1982,  1279,
    1280,  1339,   110,  1285,    84,  1988,  1989,  2294,  1333,  1991,
    1992,  1993,  1335,  1345,  1349,  1996,  1997,  1350,  1353,  2530,
    1354,  1355,  2532,    75,  1363,  2533,  1364,  2534,  2000,  2001,
    1365,  2002,  2003,  1366,  1370,    89,    65,    66,  1918,  1368,
    1423,  1424,  1369,    90,    91,  1371,  1372,  1381,   111,  2309,
    1474,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,  2023,
    2024,  2025,  1378,  1475,  2026,  1379,  1431,  1382,  1388,  2028,
    2031,  1390,  2033,  2034,  2035,  1391,  2036,  2037,   471,  2039,
    1393,  1408,  2042,  2043,  1406,   747,   113,  1407,  1412,  1476,
    1409,  2046,  1413,  1414,  1427,  1452,   472,  1430,  1457,  2050,
    1239,  1458,  1480,  1482,  2055,  2056,  1481,  1477,  1483,  1496,
    2058,    85,  1500,   473,  1502,  1507,  1501,  1508,  1509,  2061,
    1510,  1516,  1518,  1519,  1580,  2030,   474,  1555,  1566,  1567,
    1573,  1574,  1583,  1587,  1611,    86,  1600,  1605,  1586,  2048,
    1606,  1612,   748,  1613,  1614,   475,   749,  1623,   118,   476,
    1624,  1625,  1628,   119,  1626,  2090,  1627,  2643,  1640,  1641,
    1654,  1653,  1642,   477,  1647,  1660,  1665,  1666,  1667,  1679,
    2781,  1684,  1693,  -457,  1695,  1717,  1704,  2098,  2099,  1728,
    1707,  1722,  2101,  1731,   750,  1740,  1746,  1741,  2104,  1753,
    2324,  2075,    88,  1759,  1760,  1765,  1784,  1787,  1891,  1798,
    1800,  2081,  1802,  1846,   478,  1847,  2086,  2336,  2337,  2338,
    1848,  1852,  2340,  1853,  2342,  2343,  1855,  1845,  2345,  2346,
    2347,  1856,   751,  2349,  2350,  1857,  1860,  2353,  1863,  2355,
    2356,  1881,  2358,    89,  1885,  1892,  2457,  2458,  1902,  2460,
    2461,    90,    91,  2464,  2465,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   752,  1897,  1900,  1903,   753,  1901,  1904,
    1906,  1907,  1908,  1909,  1910,  1913,  1932,  1950,  1937,  1948,
    1985,  1986,  1954,  1987,  1999,  2205,  1962,  2206,  1998,  2208,
    1963,  2004,   754,  1978,  2512,   755,  2005,  2006,  2041,  2008,
    2009,  2010,  2011,  2012,  2015,   756,  2013,  2014,  2219,  2220,
    2221,  2222,  2223,  2224,  2225,  2226,  2227,  2016,  2153,  2017,
    1517,  2018,  2019,  2164,  2020,  2021,  2022,  2175,  2038,  2064,
    2430,  2040,  2233,  2433,  2235,  2044,  2057,  2062,  2437,  2065,
    2066,  2438,  2067,  2068,  2100,  2499,  2102,  2103,  2312,  2106,
    2107,  2241,   431,  1376,   296,  2108,  2110,  2245,  2111,  2115,
    2453,  2112,  2117,  2118,  2119,  2123,  2248,  2249,  2250,  2251,
    2252,  2253,  2254,  2255,  2256,  2257,  1562,  2124,  2270,  2271,
    2272,  2273,  2274,  2275,  2276,  2277,  2278,  2279,  2280,  2281,
    1570,  2284,  1050,  2285,  2286,  2287,  2125,  2154,  2716,  2155,
    2156,  2160,  2161,  2476,  2163,  2165,  1051,   431,  2295,  2166,
    2167,  2171,  2172,   839,  2174,  1052,   530,  2176,  2177,  1107,
    2178,  2182,  2183,  2477,  2185,  2186,  1053,  1108,  2187,  2188,
    2192,   531,  2193,  1109,  2194,   445,  2196,  2197,  2199,  2200,
    2478,  2304,  2202,  2305,  2594,  2306,  2521,  2308,  2597,   431,
    2310,  2209,  2311,   532,  2211,  2214,  1110,  2217,  1054,  2316,
    2317,  2228,  2229, -1120,  2230,  2231,  2321,  2232,  2322,  2236,
    2283,  2288,  2325,   533,  2289,  2327,  2716,  2292,  2531,  1055,
    1111,  2293,  2296,  2299,  2631,  2313,  2314,  2315,  1112,  2318,
     534,  2326,  2330,  2331,   535,  2332,  2333,  2334,  1661,  1662,
    2360,  2649,  2363,  2365,  2368,  2376,   508,  2370,   515,   518,
    2371,   523,   527,  2372,  2377,  2723,  2378,  2379,  2380,  2381,
    2385,  2364,   536,   537,  2386,  2479,  2387,  1056,  1113,  2388,
    2389,  2390,  2394,  2395,  2329,  2396,  1114,  2403,  2406,  2414,
     594,  2417,  2420,  2421,  2423,  2426,  2427,  2428,  2431,  2436,
    2440,  2456,  2480,  2481,  2482,  2484,  2510,  2519,  2582,   610,
     616,  2516,  2517,  2522,  2524,  2526,  1057,  2525,  2527,  2529,
    2535,  2537,  2429,  2546,  2362,  2555,  2564,   538,  2590,  2570,
    2574,  2577,  1115,  2583,  2591,  2595,  2602,   539,  2598,  2599,
    2613,  2614,  2618,  1058,  1116,  2615,  2616,  2617,  2633,  2644,
    2262,  2645,  2647,   700,  2648,  2651,  2766,  2657,  2663,  2689,
    1117,  2695,   819,  2698,  2699,   711,  2700,  2705,  2720,  2796,
    2721,  2722,  2724,  2731,  2734,  2434,  2745,  2753,  2729,  2756,
    2759,  2770,  1059,  2768,  1060,   732,  2441,  2442,  2443,  2444,
    2445,  2446,  2447,  2448,  2449,  2450,  2451,  2769,  2777,   540,
     541,  2780,  2454,  2790,  2791,  2797,   431,   431,  2805,   431,
     431,  2772,  2774,   431,   431,  2466,  2467,  2468,  2469,  2470,
    2471,  2809,  2473,  2474,  2475,  2810,  2812,  2816,  2818,  2483,
    1864,  2819,  2820,  2821,  2713,  2767,  1869,  2763,  2486,  2487,
    2488,  2489,     0,  2491,  2492,  2493,  2494,  2495,  2496,     0,
    2498,     0,  1176,  2502,  2503,     0,     0,  2678,  1882,     0,
       0,  1884,     0,     0,     0,  1888,     0,     0,     0,     0,
     542,  2511,     0,     0,   431,  2513,  2688,     0,     0,  2515,
       0,     0,   715,  2518,     0,     0,  1914,  1778,     0,     0,
       0,     0,  1920,     0,     0,   835,     0,     0,     0,  1788,
    1933,     0,     0,  1936,     0,   222,   842,     0,     0,     0,
       0,     0,  1941,  1942,     0,   850,     0,  1849,  1850,     0,
       0,     0,     0,  1946,     0,     0,     0,   223,     0,     0,
     224,  2538,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   800,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2741,  2742,     0,  2744,     0,
    2746,  2747,     0,  2749,   225,     0,     0,     0,     0,     0,
       0,   226,     0,     0,     0,  2258,     0,     0,     0,     0,
       0,     0,   227,   228,   887,   888,  2259,     0,     0,   229,
       0,     0,     0,     0,     0,     0,     0,   892,     0,     0,
       0,     0,   895,  2585,     0,     0,     0,  2587,     0,     0,
       0,   907,  1107,  2260,   230,     0,  2776,  2588,  2589,     0,
    1108,     0,     0,  2593,   431,     0,  1109,  2596,   431,     0,
       0,     0,   231,  2601,     0,     0,  2605,  2606,     0,     0,
       0,     0,     0,     0,     0,     0,   232,   233,     0,  1110,
       0,     0,  2261,   234,     0,  2623,  2624,     0,  2626,  2627,
    2628,  2629,  2630,  2808,   431,  2632,     0,     0,     0,  2635,
       0,     0,     0,  1111,     0,   235,     0,     0,     0,     0,
       0,  1112,  2646,   959,   960,   961,   962,  2650,     0,     0,
       0,     0,     0,     0,   884,     0,     0,     0,     0,     0,
       0,   889,     0,     0,   890,  2665,     0,     0,     0,   891,
       0,     0,     0,   893,   236,     0,     0,     0,     0,     0,
       0,  1113,  1689,     0,     0,     0,     0,     0,     0,  1114,
       0,     0,     0,     0,     0,     0,     0,   108,     0,     0,
       0,     0,     0,     0,  1105,     0,     0,  2677,     0,     0,
       0,     0,  2681,     0,  2683,     0,     0,     0,     0,     0,
    2686,     0,     0,     0,     0,     0,     0,   237,     0,     0,
       0,     0,     0,  2693,     0,  1115,     0,   238,     0,     0,
     957,     0,     0,     0,     0,     0,     0,  1116,     0,     0,
    1359,  2704,     0,     0,     0,  2708,     0,  2740,     0,     0,
       0,     0,     0,  1117,     0,     0,   239,     0,     0,     0,
       0,     0,  2262,   107,  2263,     0,     0,  2728,     0,     0,
       0,   111,  1410,     0,     0,     0,     0,     0,   108,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2743,   109,
       0,     0,     0,  2748,     0,  2750,     0,     0,     0,     0,
       0,     0,  2754,     0,     0,     0,   110,  2757,  2264,     0,
       0,     0,  2760,     0,     0,     0,     0,     0,     0,   113,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2213,     0,     0,  2771,  2773,  1148,     0,     0,
       0,     0,  2114,     0,  1154,     0,     0,  1243,     0,     0,
    2120,  2121,   111,     0,     0,     0,     0,     0,     0,  1248,
       0,  2783,     0,     0,  2784,  2157,  2158,  2786,  2238,     0,
       0,   112,     0,     0,     0,     0,  2168,  2169,  2792,  2793,
    2794,  2795,     0,     0,     0,     0,   119,  2179,  2180,     0,
    2804,     0,     0,  2807,     0,     0,  1258,  2189,  2190,     0,
    2811,     0,  2813,  2195,     0,     0,     0,     0,  2779,     0,
     113,     0,     0,  2198,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2799,     0,     0,  2802,     0,     0,     0,     0,     0,     0,
     114,     0,     0,     0,     0,     0,     0,     0,   115,     0,
       0,  1242,     0,     0,     0,     0,   116,   117,  1244,     0,
       0,     0,   118,     0,  1348,     0,     0,   119,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,     0,     0,     0,     0,
       0,     0,     0,  1260,  1261,     0,     0,     0,  1265,     0,
       0,  1268,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1275,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1494,
       0,     0,     0,   120,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,     0,     0,     0,
       0,     0,   150,  1554,     0,     0,     0,   151,   152,     0,
    1762,  1763,  1764,  1560,     0,     0,     0,     0,     0,     0,
    1766,  1767,  1768,     0,     0,     0,     0,  1779,  1780,  1781,
       0,     0,  1782,  1783,     0,  1785,  1786,     0,     0,  1415,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1858,  1859,     0,     0,  1861,
    1862,     0,     0,  2367,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2369,     0,     0,     0,  2373,  2374,     0,
       0,     0,     0,     0,     0,     0,  2382,  2383,     0,     0,
       0,     0,     0,     0,     0,  2391,  2392,     0,     0,     0,
       0,  2397,     0,     0,     0,     0,     0,     0,     0,  1636,
       0,  2407,  2408,   655,   656,     0,     0,     0,     0,     0,
       0,     0,  2418,  2419,     0,     0,  1644,     0,     0,  2505,
       0,     0,     0,  2422,     0,     0,     0,     0,     0,     0,
       0,     0,  2424,     0,  2425,     0,     0,     0,     0,     0,
    1669,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1675,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     657,     0,     0,     0,     0,     0,   658,  1690,     0,     0,
       0,     0,     0,   659,     0,   660,     0,     0,     0,  1702,
     661,     0,     0,   662,  1710,     0,     0,     0,     0,   663,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     664,     0,     0,     0,     0,     0,   665,     0,     0,     0,
       0,     0,     0,     0,     0,   666,     0,     0,     0,  1639,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   667,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1663,
       0,     0,     0,   668,  1668,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1674,     0,     0,     0,   669,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   670,
     671,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   672,     0,     0,     0,     0,  2540,     0,     0,     0,
       0,     0,  2619,     0,     0,     0,  2549,  1865,     0,     0,
       0,     0,     0,     0,   673,  2558,     0,     0,     0,     0,
       0,     0,  2637,     0,  2567,     0,  2642,     0,   674,     0,
     675,  2569,     0,     0,     0,     0,     0,  1887,     0,     0,
       0,     0,  2573,     0,     0,   676,     0,     0,  2576,     0,
     677,  2578,     0,     0,  2579,     0,     0,   678,     0,     0,
       0,     0,     0,     0,   679,     0,  1921,     0,     0,  1922,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1938,
    1939,     0,   680,     0,     0,     0,     0,  1943,     0,     0,
       0,     0,  2105,     0,  1944,   681,   682,     0,   683,     0,
       0,     0,     0,     0,     0,  2113,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2116,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1983,     0,     0,     0,   684,     0,
       0,     0,     0,     0,     0,     0,  1994,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2719,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2666,     0,     0,     0,     0,     0,
       0,     0,     0,  2668,     0,     0,     0,  2201,     0,     0,
    1935,     0,  2670,     0,     0,     0,     0,     0,  2673,     0,
       0,     0,  2675,     0,     0,  2676,    65,    66,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   108,  2029,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2045,   291,     0,     0,     0,     0,     0,     0,     0,
    1984,     0,     0,     0,     0,     0,  1990,  2054,     0,     0,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2059,  1212,  2060,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2069,     0,  2789,  2071,     0,  2072,  2073,  2074,
    2076,     0,     0,  2078,     0,     0,  2079,     0,     0,  2080,
    2082,     0,  2083,  2084,  2085,  2087,   111,  2088,  2089,     0,
       0,     0,     0,  2091,  2092,  2093,     0,     0,  2094,  2095,
       0,     0,     0,     0,  2096,  2097,     0,     0,     0,     0,
       0,     0,     0,     0,  2027,     0,     0,     0,     0,   351,
    2032,     0,     0,     0,     0,     0,   352,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,  2047,     0,     0,     0,     0,
       0,  2053,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2070,     0,
       0,     0,     0,     0,   292,     0,  2077,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   118,     0,     0,     0,
       0,   119,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2366,   293,     0,     0,     0,     0,     0,  2204,     0,
       0,     0,  2207,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2212,     0,     0,  2215,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2398,  2399,  2400,  2401,  2402,     0,  2404,  2405,     0,
       0,     0,  2409,  2410,  2411,  2412,  2413,  2234,  2415,  2416,
       0,     0,     0,     0,   294,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,     0,     0,  2282,     0,     0,     0,     0,     0,     0,
       0,  2203,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   353,     0,     0,   354,  2298,     0,     0,     0,
       0,     0,     0,  2216,     0,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,     0,     0,     0,     0,  2239,  2240,     0,
       0,     0,     0,     0,     0,     0,     0,  2320,     0,     0,
       0,     0,     0,     0,  2243,  2244,     0,     0,     0,  2246,
    2247,     0,  2328,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,  2352,     0,     0,     0,     0,     0,     0,     0,  2290,
       0,     0,  2361,   992,     0,     0,     0,     0,   993,     0,
    2297,     0,     0,     0,  2539,     0,     0,  2541,  2542,  2543,
    2544,  2545,     0,  2547,  2548,     0,  2550,  2551,  2552,  2553,
    2554,     0,  2556,  2557,     0,  2559,  2560,  2561,  2562,  2563,
       0,  2565,  2566,     0,  2568,  2307,     0,     0,     0,     0,
       0,     0,     0,     0,  2571,  2572,     0,     0,     0,     0,
       0,  2319,     0,     0,     0,  2575,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   108,     0,     0,
       0,     0,     0,     0,     0,  2335,     0,     0,     0,     0,
    2339,     0,     0,     0,     0,     0,  2344,     0,     0,     0,
       0,  2348,     0,     0,     0,  2351,     0,  2432,  2354,     0,
    2435,  2357,     0,  2359,     0,     0,     0,     0,  2439,     0,
       0,     0,     0,     0,   499,   500,     0,     0,   501,     0,
       0,     0,     0,     0,  2452,     0,     0,  2455,     0,     0,
       0,     0,  2459,     0,     0,  2462,  2463,     0,     0,     0,
       0,   502,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
       0,     0,     0,  2506,  2507,     0,  2667,     0,     0,     0,
       0,     0,     0,     0,     0,  2669,     0,     0,     0,     0,
       0,     0,     0,     0,  2671,     0,  2672,     0,     0,   113,
    2674,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   503,     0,  2528,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   504,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   611,   108,     0,     0,     0,     0,     0,
       0,     0,     0,   505,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2497,     0,
       0,     0,     0,     0,   612,     0,     0,     0,     0,     0,
       0,     0,     0,  2735,  2509,  2736,     0,  2737,     0,     0,
    2738,     0,  2739,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2581,     0,     0,     0,     0,     0,     0,   506,
       0,     0,     0,     0,  2523,     0,     0,     0,   111,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   613,     0,     0,  2600,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2611,  2536,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   113,   507,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   614,     0,  2656,     0,     0,     0,
    2662,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2580,     0,     0,     0,     0,
       0,  2584,     0,     0,     0,  2586,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2592,     0,   119,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2679,  2680,     0,  2682,     0,     0,
       0,     0,  2684,  2685,     0,     0,     0,  2687,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2640,  2641,     0,     0,     0,     0,     0,     0,
    2709,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   615,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2732,     0,
       0,     0,     0,     0,     0,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,     0,     0,  1014,  1015,  1016,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1017,  1018,     0,  2697,  1019,     0,
       0,  1020,     0,     0,     0,     0,     0,     0,  1021,     0,
       0,     0,  1022,     0,     0,     0,  2778,     0,     0,     0,
    1023,  1024,     0,   108,     0,  1287,  1288,  1289,  1025,  1026,
       0,     0,     0,  2787,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1027,     0,  2798,     0,
       0,  2801,  1028,     0,  1290,  1291,  1029,  1030,  1292,     0,
    1031,   110,   108,     0,     0,  1293,     0,     0,  1294,     0,
       0,     0,  1295,     0,     0,     0,     0,     0,  1032,     0,
    1296,  1297,     0,     0,     0,     0,     0,     0,  1298,     0,
       0,     0,     0,     0,     0,  2762,     0,     0,     0,  1033,
     110,     0,     0,     0,     0,     0,     0,   111,     0,     0,
       0,     0,     0,   108,     0,     0,  1299,  1300,  2775,     0,
    1301,     0,     0,  1034,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1302,     0,
       0,     0,     0,     0,   108,     0,   111,  1035,     0,     0,
       0,     0,     0,     0,   513,     0,     0,     0,     0,  1303,
       0,     0,     0,     0,  2800,   113,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1036,     0,  1037,
       0,     0,  1347,  1304,  2814,  1038,  1039,  2815,     0,     0,
       0,     0,  1305,     0,     0,     0,     0,   111,     0,     0,
       0,  1040,  1041,     0,   113,     0,     0,     0,     0,     0,
       0,     0,  1042,  1043,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,   111,     0,
       0,     0,   119,     0,     0,     0,     0,  1306,  1044,  1307,
    1045,     0,     0,     0,     0,  1308,  1309,     0,     0,     0,
       0,     0,  1046,     0,  1047,   113,     0,     0,     0,     0,
    1048,     0,  1310,     0,     0,     0,   118,     0,   108,     0,
       0,   119,     0,  1311,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,     0,     0,     0,
       0,     0,     0,   517,  1049,     0,     0,     0,  1312,     0,
    1313,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1314,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1315,     0,   119,     0,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   111,   119,  1316,  1384,     0,     0,     0,     0,
       0,     0,     0,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   514,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,     0,     0,     0,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,     0,     0,     0,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,     0,     0,     0,     0,   119,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,     0,     0,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,  1385,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,     1,     0,     0,
       2,     0,     0,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     0,     0,     0,
       0,     5,     6,     0,     7,     8,     9,     0,     0,     0,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
       0,    11,     0,    12,    13,     0,     0,     0,     0,     0,
       0,     0,     0,    14,    15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   178,     0,     0,
     179,     0,     0,   180,     0,     0,    16,     0,     0,     0,
       0,     0,     0,     0,     0,    17,     0,     0,     0,     0,
       0,     0,   181,     0,   182,   183,   184,     0,    18,     0,
       0,     0,    19,     0,   185,    20,   186,     0,     0,    21,
      22,   187,     0,   188,   189,   190,    23,     0,     0,     0,
       0,   191,    24,   192,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,     0,     0,
      26,    27,    28,     0,     0,    29,    30,     0,     0,     0,
       0,     0,     0,     0,   193,     0,     0,     0,     0,     0,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   194,     0,     0,     0,     0,    32,    33,    34,
     195,     0,   196,   197,     0,     0,   198,     0,     0,     0,
     199,    35,   200,    36,     0,     0,     0,     0,     0,     0,
      37,     0,     0,     0,    38,     0,     0,     0,    39,     0,
      40,     0,    41,     0,     0,   201,   202,    42,     0,     0,
     203,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     204,    43,     0,     0,     0,     0,     0,    44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   205,   206,     0,
       0,     0,    45,    46,     0,   207,     0,     0,     0,     0,
       0,     0,     0,     0,    47,     0,    48,     0,     0,     0,
       0,     0,    49,     0,     0,    50,    51,     0,     0,     0,
     208,     0,   209,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,   210,     0,     0,
       0,     0,     0,    53,     0,     0,     0,     0,     0,     0,
       0,     0,   211,   212,     0,     0,     0,     0,     0,     0,
       0,   213,     0,     0,     0,     0,     0,     0,   214,     0,
       0,     0,     0,     0,   215,     0,   216,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   217
};

static const yytype_int16 yycheck[] =
{
       3,    51,   901,   490,  1470,  1015,   670,   671,    11,  1671,
       0,  1673,   445,     5,   675,    17,     4,    32,     4,     5,
       4,     4,   455,     3,     4,     4,  1169,     5,  1171,     5,
      33,     5,    32,    20,     3,     4,     3,     4,    41,     3,
       4,     5,     5,    13,     5,     3,     4,    50,    21,     5,
      53,    32,    27,    56,  1197,  1198,  1199,    60,     4,   107,
      63,     3,     4,    71,    67,    68,   107,    99,    71,   220,
       5,    74,    75,    17,    49,    78,    17,    52,     5,    82,
     124,    67,    79,   105,    87,    21,    33,    16,    63,   154,
       4,    57,   138,    38,    36,     3,     4,   100,   101,   102,
     103,   104,   105,    89,   293,     4,    95,   889,   890,   891,
      21,    86,     4,     5,    51,     4,     3,     4,   121,  2715,
       3,     4,    62,   986,   113,   101,   989,     3,     4,   104,
      57,   107,     3,     4,    47,     5,   122,     6,    40,    66,
      88,     3,     4,  1006,     4,    67,    84,    17,   143,    36,
     143,     6,    62,   156,   202,     3,     4,    16,   144,     3,
       4,   202,   313,   101,   101,    36,   174,   114,  2764,    40,
     173,    79,   194,   110,    12,   957,   191,     4,   181,     4,
       5,   178,   170,   186,    21,     3,     4,   182,    21,   182,
     136,   191,    40,   200,    33,   137,    65,    57,     5,     4,
       3,     4,   246,   268,   141,   194,    27,    12,   256,   255,
     145,   113,    60,   161,   194,   256,    54,   219,     4,   163,
     200,     3,     4,   209,    31,   194,   196,   194,   139,    21,
     122,   217,   218,   122,    72,     5,    14,    15,   270,   186,
      67,   188,   113,   190,   191,   253,   249,    21,     3,     4,
     137,   301,   199,   145,   262,   242,   201,   223,   265,   239,
     234,   258,   265,   266,   102,   113,   137,   214,   123,     4,
     178,   254,   933,   246,   203,   290,   254,     4,   281,     4,
     283,    67,   715,   121,    62,   265,   200,   125,   291,   292,
     290,   294,   295,   256,   297,   122,   223,   122,     4,   201,
     302,   139,    57,   293,   307,   204,    14,   268,     4,   290,
     246,   295,   211,   212,   317,   318,   295,   209,   304,    44,
     209,   313,    47,   279,   310,   217,   218,   268,   217,   218,
     201,   311,   320,   294,   310,   246,   122,   340,   341,   342,
      67,   344,   311,   301,   311,   348,   349,   294,   247,   313,
     258,   291,    77,   201,    62,   301,   359,   360,    46,   301,
      85,    67,     5,   223,   367,   276,   303,   353,   281,   372,
     373,   357,   358,   359,   314,   355,   356,   380,  1039,    67,
     383,   291,   209,   201,   209,   360,   355,   356,   355,   356,
     217,   218,   217,   218,    82,   122,  1057,   122,    62,   402,
     403,    27,    40,     4,   314,    64,   409,   410,   411,   246,
     413,   232,   304,   246,   301,   304,   122,   850,   301,   197,
     198,  1431,   147,   209,   427,   301,   122,  1091,   431,   232,
     301,   217,   218,   436,   437,   438,   439,   440,   441,   301,
     443,     4,   445,   446,   447,    34,    64,   106,  1458,   297,
     232,    30,   455,   456,   246,   354,    57,  1600,  1122,   123,
     893,   353,    17,   301,   353,   200,   358,   359,   223,   358,
     359,  1481,   246,    27,   199,   113,   119,   304,  1260,   304,
     149,    27,   209,   301,   209,   310,  1268,   124,   106,   197,
     217,   218,   217,   218,   272,   320,   238,   444,    58,   224,
     188,   226,    27,   209,   282,   283,    17,   510,   511,    40,
     128,   217,   218,   209,    67,    62,   251,    96,   304,    62,
     109,   217,   218,   258,     4,   528,   353,    89,   353,   254,
       4,   358,   359,   358,   359,   313,    62,     5,  1401,     4,
       5,  1404,   592,    37,   238,   171,    14,    15,    64,     3,
       4,     3,     4,   556,    48,    62,   199,     3,     4,   247,
      27,     3,     4,   201,   272,   128,     0,   353,   278,   134,
      40,   126,   358,   359,   282,   135,   123,   304,     5,   304,
     123,    75,   113,   124,   243,   635,   589,   534,   167,   100,
     106,     4,   169,    62,    62,   320,    61,   123,   304,   295,
     259,   260,    67,   291,   654,   313,  2537,    88,   304,   268,
       4,   254,   300,    62,   161,   252,   123,   172,   282,   173,
     246,   210,   223,   626,   571,   243,   353,    40,   353,    62,
       5,   358,   359,   358,   359,   273,   279,    62,   271,    14,
      15,   259,   260,   113,    67,   278,   171,   353,  1309,   652,
     213,   116,   358,   359,   123,     5,  2318,   353,     5,  1320,
     154,    62,   358,   359,   219,   291,   669,   232,   133,   672,
     201,    14,    15,   233,   123,    31,     3,     4,   232,   258,
     161,     5,   200,   148,   263,    12,   232,    62,   248,   154,
     123,     5,   351,   352,   159,   124,   699,   274,   123,   193,
     113,   704,   705,   706,   707,   246,   173,   710,   124,   712,
     133,   714,   715,   716,    92,  1148,    14,    15,    22,    62,
    2651,   246,   123,    27,    42,    43,   291,   243,   254,   197,
     198,   201,  2663,   351,   352,   282,   159,     3,     4,   282,
     258,   791,   273,   259,   260,    49,    50,   302,    52,    53,
     215,   311,     5,   124,   201,    62,   282,     4,   204,    63,
      62,    14,    15,   215,    62,   232,   291,     4,   262,   234,
     271,    75,    76,   215,   239,   282,   241,   278,   232,    83,
     783,   784,    86,   786,   787,   788,   789,     0,   201,    14,
      15,     4,   173,    30,   119,    55,  1695,   175,   801,   802,
     104,   124,   267,   268,   272,   808,   809,   111,   112,    62,
     275,   115,    44,   282,   282,   283,   123,   246,   241,   287,
     314,   123,   197,   198,    30,   828,   829,   830,   293,     5,
     246,    91,  1265,   282,    67,   351,   352,    62,    14,    15,
      89,   254,   845,   846,   847,   313,   849,   850,   851,   282,
     853,   232,    14,    15,   197,   198,    88,   282,   176,   177,
      22,  2004,  2005,  2006,  1874,    27,   134,     4,     5,   118,
     293,   874,    34,   876,   178,   246,   210,   143,     3,     4,
    1890,   282,   121,   886,   349,   145,    62,   205,   266,   174,
     893,   894,  1674,    55,     3,     4,   899,   272,   183,   197,
     198,  2605,  1566,    83,   293,   173,   284,   282,   283,  1919,
      72,  1774,   287,   916,    33,    40,   182,   920,   299,  2623,
      83,    14,    15,   246,   927,   928,   929,   874,   165,   272,
     234,  1794,   935,    46,     4,     5,   240,   940,   313,   282,
     283,    67,   992,   192,   197,   198,  1809,   174,   951,  1812,
       5,    22,    65,   257,    67,     6,    90,  1820,   207,   165,
    1823,     4,     5,   267,   232,   968,    16,   199,  1831,    62,
     313,  1834,   197,   198,   272,   282,   156,   154,  1841,    50,
     282,    67,    53,   220,   282,   283,     3,     4,   113,   239,
     294,   295,   292,   156,   254,     3,     4,     3,     4,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   246,
    2476,   315,    83,  2023,   220,   313,    84,    90,   352,   272,
     269,   197,   198,   291,   358,   161,   360,     3,     4,   282,
     283,    67,  1035,   101,   287,    73,     3,     4,    89,    31,
     246,   112,    40,    60,   115,     3,     4,   272,   225,  2753,
     230,   231,    19,  1056,   190,  2759,   360,   282,   283,     5,
     313,   310,  1065,    26,     5,   245,     4,   230,   231,    67,
       4,   320,   123,    24,    25,   188,   201,     5,  1081,    26,
    1083,     5,   245,     4,  2474,  1088,  1089,  1090,   313,     5,
      57,   268,     3,     4,     4,  1098,   272,     5,  1101,     5,
    1103,   263,   264,   101,   197,   198,   282,   283,   288,   107,
    2500,   287,  2816,   181,  2818,   113,  1119,     4,  1121,   127,
       4,   127,     5,     5,     4,   288,  1129,  1130,    99,   306,
       4,   293,    14,    15,   247,   133,   103,   313,    14,    15,
     123,  1144,  1145,     4,     5,  1148,  1149,  1150,    99,    60,
       5,   114,     4,  1156,     4,  1158,   154,   225,  1161,   279,
    1163,     4,  1212,   234,     4,   128,     4,   114,     5,   127,
       4,   169,     3,     4,   336,   337,   338,    37,   291,   272,
      62,   128,     3,     4,     3,     4,    62,   300,    48,   282,
     283,    12,   204,   261,   161,     4,   267,  1200,    17,    14,
      15,  1204,  1984,  1206,   202,     4,     5,  1210,     4,    40,
       3,     4,     5,  2603,  2604,    75,   163,  2607,     4,  2609,
     313,     5,  1225,     4,  1227,     5,  1229,  1230,  1231,  1232,
       9,  2621,  2622,  1236,  1237,    11,  2626,  2627,     3,     4,
    2630,  1244,     5,   241,  2254,  2635,  2636,    62,  1251,     3,
       4,   214,  1255,  1256,  1257,   278,   223,   174,   256,     4,
    2270,   228,  1265,  1266,   227,  2275,  1269,   214,  2131,     4,
     268,  2053,   433,   434,  1277,    40,  1279,  2140,  1225,  1282,
     227,   183,   113,   174,     3,     4,  2149,     3,     4,     5,
       4,     7,     8,     5,   154,  2077,   203,   295,   203,  2689,
      19,     5,  2692,     3,     4,     5,    60,  2697,     4,   307,
     203,   309,   310,  2703,   195,   197,   198,   195,  2708,    67,
      67,   197,   198,  1270,  1327,    67,  1329,     5,   232,  1332,
    1333,     5,  1335,   193,  1337,   233,    28,     3,     4,     4,
    1343,  1288,  1345,     9,    10,    11,     4,     4,   113,  1352,
      35,   349,   203,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,    88,   197,   198,   103,     3,     4,     5,    22,     5,
     272,    88,  2782,     3,     4,  2785,   272,     7,     8,     5,
     282,   283,   262,     4,     4,   287,   282,   283,     3,     4,
       5,   194,     7,     8,     5,  2805,    50,   200,     5,    53,
       4,   101,    56,   108,  1427,  2468,  1429,  1430,  2471,  2819,
    2473,   313,  2822,  2823,     5,     4,    17,   313,   298,     5,
      17,     4,   161,  2486,  2487,     4,   131,   132,  1451,    83,
       4,     4,  1455,    99,   314,   140,   239,   272,   620,     5,
    2503,     5,  2472,   155,    88,     4,    88,   282,   283,     5,
       5,     5,     4,   158,     5,  2485,  1479,  1480,   112,  1426,
    2490,   115,   265,   168,     5,     4,  1489,   179,     4,     4,
    1493,   183,     5,     5,     5,     4,    38,  1500,   313,     4,
     170,     5,  1935,     4,    12,    12,     4,     4,  2290,   228,
       4,  1514,   674,     4,    19,  2297,  1519,   679,     5,     5,
    1523,     5,  1525,  1526,     4,  1528,  1529,  1530,   311,  1532,
     161,   161,  1535,  1536,  1537,  1538,  1539,  1540,  1541,  1542,
    1543,  1544,  1545,     4,   236,  1548,  1549,  1550,  1551,     5,
       4,   295,    57,    38,    28,  1558,  1559,  1990,   267,  1562,
    1563,  1564,   267,     5,     4,  1568,  1569,     5,     5,  2351,
       5,     5,  2354,   356,     4,  2357,     4,  2359,  1581,  1582,
       5,  1584,  1585,     5,     5,   277,     3,     4,     5,   280,
       7,     8,   280,   285,   286,     5,     5,     5,   103,  2032,
     234,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,  1632,
    1633,  1634,     4,   267,  1637,     4,   107,     5,     5,  1642,
    1643,     5,  1645,  1646,  1647,     5,  1649,  1650,    54,  1652,
       5,     5,  1655,  1656,     4,    62,   161,     4,     4,   293,
       5,  1664,     5,     5,   246,     5,    72,   246,   143,  1672,
     832,   107,   246,     5,  1677,  1678,   107,    40,   219,    40,
    1683,   155,   252,    89,     5,     4,   219,     5,     5,  1692,
     219,   219,     4,     4,     4,  1642,   102,     5,     5,     5,
       5,     5,   113,     4,     4,   179,     5,     5,   113,   183,
       5,     5,   119,     5,     4,   121,   123,     5,   223,   125,
       5,     4,     4,   228,     5,  1728,     5,  2509,     5,     5,
       4,     6,    12,   139,    12,     5,     4,     4,     4,     4,
    2750,     5,     4,     0,     5,   143,   246,  1750,  1751,   173,
     246,   246,  1755,   124,   161,     4,   215,   256,  1761,   203,
    2054,  1708,   236,     4,     4,     4,     4,     4,   246,     5,
       5,  1718,     5,     5,   180,     5,  1723,  2071,  2072,  2073,
       5,     4,  2076,     4,  2078,  2079,     5,   280,  2082,  2083,
    2084,     4,   199,  2087,  2088,     4,     4,  2091,     5,  2093,
    2094,     5,  2096,   277,     5,   246,  2239,  2240,     4,  2242,
    2243,   285,   286,  2246,  2247,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   250,   246,   317,     4,   254,   317,     4,
       4,     4,     4,   317,   317,     4,     4,   232,     5,     5,
       5,     4,   232,     4,     4,  1868,   232,  1870,     5,  1872,
     232,     5,   279,   232,  2307,   282,     5,     4,     6,     5,
       5,     4,     4,     4,     4,   292,     5,     5,  1891,  1892,
    1893,  1894,  1895,  1896,  1897,  1898,  1899,     4,   280,     5,
    1062,     5,     4,   280,     5,     5,     4,   280,     5,     5,
    2204,     4,  1915,  2207,  1917,     4,     4,     4,  2212,     5,
       5,  2215,     5,     5,     4,   313,     5,     4,    12,     5,
       5,  1934,  1935,   985,    33,     5,     4,  1940,     4,     4,
    2234,     5,     5,     5,     5,     4,  1949,  1950,  1951,  1952,
    1953,  1954,  1955,  1956,  1957,  1958,  1118,     4,  1961,  1962,
    1963,  1964,  1965,  1966,  1967,  1968,  1969,  1970,  1971,  1972,
    1132,  1974,    67,  1976,  1977,  1978,     5,     5,  2639,     5,
       5,     4,     4,   361,     5,     5,    81,  1990,  1991,     5,
       5,     4,     4,   432,     5,    90,    45,     5,     5,    93,
       5,     4,     4,   361,     5,     5,   101,   101,     5,     5,
       4,    60,     4,   107,     5,   114,     4,     4,     4,     4,
     361,  2024,     5,  2026,  2457,  2028,  2320,  2030,  2461,  2032,
    2033,     5,  2035,    82,     5,     5,   130,     5,   133,  2042,
    2043,     4,     4,   293,     5,     4,  2049,     4,  2051,     5,
       5,     4,  2055,   102,     4,  2058,  2717,     5,  2352,   154,
     154,     5,     4,     4,  2497,     5,     5,     4,   162,     4,
     119,     5,     5,     5,   123,     5,     5,     5,  1240,  1241,
       4,     6,     5,     4,     4,     4,   185,     5,   187,   188,
       5,   190,   191,     5,     4,     6,     5,     5,     5,     5,
       4,  2104,   151,   152,     4,   361,     5,   202,   202,     5,
       5,     5,     4,     4,  2061,     5,   210,     4,     4,     4,
     219,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,   361,   361,   361,   361,     4,     4,  2432,   238,
     239,     5,     5,     5,     4,     4,   241,     5,     5,     5,
       5,     4,  2202,     4,  2101,     4,     4,   206,  2452,     4,
       4,     4,   256,     4,     4,  2459,     4,   216,  2462,  2463,
       5,     4,     4,   268,   268,     5,     5,     5,     5,     4,
     293,     5,     5,   282,     4,     4,   361,     5,     4,     4,
     284,     4,   387,     5,     4,   294,     4,     4,     4,  2775,
       5,     5,     4,     4,     4,  2208,     4,     4,  2650,     5,
       4,     4,   307,     5,   309,   314,  2219,  2220,  2221,  2222,
    2223,  2224,  2225,  2226,  2227,  2228,  2229,     5,     4,   278,
     279,     4,  2235,     5,     5,     5,  2239,  2240,     4,  2242,
    2243,  2728,  2729,  2246,  2247,  2248,  2249,  2250,  2251,  2252,
    2253,     5,  2255,  2256,  2257,     5,     5,     4,     4,  2265,
    1422,     5,     5,     5,  2637,  2717,  1428,  2713,  2271,  2272,
    2273,  2274,    -1,  2276,  2277,  2278,  2279,  2280,  2281,    -1,
    2283,    -1,   750,  2286,  2287,    -1,    -1,  2581,  1450,    -1,
      -1,  1453,    -1,    -1,    -1,  1457,    -1,    -1,    -1,    -1,
     349,  2304,    -1,    -1,  2307,  2308,  2600,    -1,    -1,  2312,
      -1,    -1,   296,  2316,    -1,    -1,  1478,  1369,    -1,    -1,
      -1,    -1,  1484,    -1,    -1,   424,    -1,    -1,    -1,  1381,
    1492,    -1,    -1,  1495,    -1,    19,   435,    -1,    -1,    -1,
      -1,    -1,  1504,  1505,    -1,   444,    -1,  1399,  1400,    -1,
      -1,    -1,    -1,  1515,    -1,    -1,    -1,    41,    -1,    -1,
      44,  2364,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2679,  2680,    -1,  2682,    -1,
    2684,  2685,    -1,  2687,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    96,    97,   513,   514,    67,    -1,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   526,    -1,    -1,
      -1,    -1,   531,  2436,    -1,    -1,    -1,  2440,    -1,    -1,
      -1,   540,    93,    94,   128,    -1,  2740,  2450,  2451,    -1,
     101,    -1,    -1,  2456,  2457,    -1,   107,  2460,  2461,    -1,
      -1,    -1,   146,  2466,    -1,    -1,  2469,  2470,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   160,   161,    -1,   130,
      -1,    -1,   133,   167,    -1,  2488,  2489,    -1,  2491,  2492,
    2493,  2494,  2495,  2787,  2497,  2498,    -1,    -1,    -1,  2502,
      -1,    -1,    -1,   154,    -1,   189,    -1,    -1,    -1,    -1,
      -1,   162,  2515,   612,   613,   614,   615,  2520,    -1,    -1,
      -1,    -1,    -1,    -1,   508,    -1,    -1,    -1,    -1,    -1,
      -1,   515,    -1,    -1,   518,  2538,    -1,    -1,    -1,   523,
      -1,    -1,    -1,   527,   228,    -1,    -1,    -1,    -1,    -1,
      -1,   202,     4,    -1,    -1,    -1,    -1,    -1,    -1,   210,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,   673,    -1,    -1,  2580,    -1,    -1,
      -1,    -1,  2585,    -1,  2587,    -1,    -1,    -1,    -1,    -1,
    2593,    -1,    -1,    -1,    -1,    -1,    -1,   281,    -1,    -1,
      -1,    -1,    -1,  2606,    -1,   256,    -1,   291,    -1,    -1,
     594,    -1,    -1,    -1,    -1,    -1,    -1,   268,    -1,    -1,
     973,  2624,    -1,    -1,    -1,  2628,    -1,  2677,    -1,    -1,
      -1,    -1,    -1,   284,    -1,    -1,   320,    -1,    -1,    -1,
      -1,    -1,   293,     4,   295,    -1,    -1,  2650,    -1,    -1,
      -1,   103,  1005,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2681,    40,
      -1,    -1,    -1,  2686,    -1,  2688,    -1,    -1,    -1,    -1,
      -1,    -1,  2695,    -1,    -1,    -1,    57,  2700,   349,    -1,
      -1,    -1,  2705,    -1,    -1,    -1,    -1,    -1,    -1,   161,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1884,    -1,    -1,  2728,  2729,   711,    -1,    -1,
      -1,    -1,  1784,    -1,   718,    -1,    -1,   836,    -1,    -1,
    1792,  1793,   103,    -1,    -1,    -1,    -1,    -1,    -1,   848,
      -1,  2754,    -1,    -1,  2757,  1807,  1808,  2760,  1920,    -1,
      -1,   122,    -1,    -1,    -1,    -1,  1818,  1819,  2771,  2772,
    2773,  2774,    -1,    -1,    -1,    -1,   228,  1829,  1830,    -1,
    2783,    -1,    -1,  2786,    -1,    -1,   885,  1839,  1840,    -1,
    2793,    -1,  2795,  1845,    -1,    -1,    -1,    -1,  2745,    -1,
     161,    -1,    -1,  1855,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2777,    -1,    -1,  2780,    -1,    -1,    -1,    -1,    -1,    -1,
     201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,    -1,
      -1,   835,    -1,    -1,    -1,    -1,   217,   218,   842,    -1,
      -1,    -1,   223,    -1,   963,    -1,    -1,   228,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   887,   888,    -1,    -1,    -1,   892,    -1,
      -1,   895,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   907,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1038,
      -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,    -1,    -1,    -1,
      -1,    -1,   353,  1092,    -1,    -1,    -1,   358,   359,    -1,
    1353,  1354,  1355,  1102,    -1,    -1,    -1,    -1,    -1,    -1,
    1363,  1364,  1365,    -1,    -1,    -1,    -1,  1370,  1371,  1372,
      -1,    -1,  1375,  1376,    -1,  1378,  1379,    -1,    -1,  1013,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1408,  1409,    -1,    -1,  1412,
    1413,    -1,    -1,  2115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2125,    -1,    -1,    -1,  2129,  2130,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2138,  2139,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2147,  2148,    -1,    -1,    -1,
      -1,  2153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1208,
      -1,  2163,  2164,     4,     5,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2174,  2175,    -1,    -1,  1225,    -1,    -1,  2291,
      -1,    -1,    -1,  2185,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2194,    -1,  2196,    -1,    -1,    -1,    -1,    -1,
    1249,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1259,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    67,  1276,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    76,    -1,    -1,    -1,  1288,
      81,    -1,    -1,    84,  1293,    -1,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,  1213,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1243,
      -1,    -1,    -1,   154,  1248,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1258,    -1,    -1,    -1,   169,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,
     181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   202,    -1,    -1,    -1,    -1,  2368,    -1,    -1,    -1,
      -1,    -1,  2484,    -1,    -1,    -1,  2378,  1426,    -1,    -1,
      -1,    -1,    -1,    -1,   225,  2387,    -1,    -1,    -1,    -1,
      -1,    -1,  2504,    -1,  2396,    -1,  2508,    -1,   239,    -1,
     241,  2403,    -1,    -1,    -1,    -1,    -1,  1456,    -1,    -1,
      -1,    -1,  2414,    -1,    -1,   256,    -1,    -1,  2420,    -1,
     261,  2423,    -1,    -1,  2426,    -1,    -1,   268,    -1,    -1,
      -1,    -1,    -1,    -1,   275,    -1,  1485,    -1,    -1,  1488,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1498,
    1499,    -1,   293,    -1,    -1,    -1,    -1,  1506,    -1,    -1,
      -1,    -1,  1765,    -1,  1513,   306,   307,    -1,   309,    -1,
      -1,    -1,    -1,    -1,    -1,  1778,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1788,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1553,    -1,    -1,    -1,   349,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1565,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2643,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2546,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2555,    -1,    -1,    -1,  1860,    -1,    -1,
    1494,    -1,  2564,    -1,    -1,    -1,    -1,    -1,  2570,    -1,
      -1,    -1,  2574,    -1,    -1,  2577,     3,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,  1642,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1660,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1554,    -1,    -1,    -1,    -1,    -1,  1560,  1676,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1689,     6,  1691,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1701,    -1,  2766,  1704,    -1,  1706,  1707,  1708,
    1709,    -1,    -1,  1712,    -1,    -1,  1715,    -1,    -1,  1718,
    1719,    -1,  1721,  1722,  1723,  1724,   103,  1726,  1727,    -1,
      -1,    -1,    -1,  1732,  1733,  1734,    -1,    -1,  1737,  1738,
      -1,    -1,    -1,    -1,  1743,  1744,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1638,    -1,    -1,    -1,    -1,    16,
    1644,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   161,  1669,    -1,    -1,    -1,    -1,
      -1,  1675,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1702,    -1,
      -1,    -1,    -1,    -1,   201,    -1,  1710,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,    -1,    -1,
      -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2114,   239,    -1,    -1,    -1,    -1,    -1,  1867,    -1,
      -1,    -1,  1871,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1883,    -1,    -1,  1886,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2154,  2155,  2156,  2157,  2158,    -1,  2160,  2161,    -1,
      -1,    -1,  2165,  2166,  2167,  2168,  2169,  1916,  2171,  2172,
      -1,    -1,    -1,    -1,   301,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,    -1,    -1,  1972,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1865,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   249,    -1,    -1,   252,  1995,    -1,    -1,    -1,
      -1,    -1,    -1,  1887,    -1,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,    -1,    -1,    -1,    -1,  1921,  1922,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2046,    -1,    -1,
      -1,    -1,    -1,    -1,  1938,  1939,    -1,    -1,    -1,  1943,
    1944,    -1,  2061,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,  2090,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1983,
      -1,    -1,  2101,   161,    -1,    -1,    -1,    -1,   166,    -1,
    1994,    -1,    -1,    -1,  2367,    -1,    -1,  2370,  2371,  2372,
    2373,  2374,    -1,  2376,  2377,    -1,  2379,  2380,  2381,  2382,
    2383,    -1,  2385,  2386,    -1,  2388,  2389,  2390,  2391,  2392,
      -1,  2394,  2395,    -1,  2397,  2029,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2407,  2408,    -1,    -1,    -1,    -1,
      -1,  2045,    -1,    -1,    -1,  2418,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2069,    -1,    -1,    -1,    -1,
    2074,    -1,    -1,    -1,    -1,    -1,  2080,    -1,    -1,    -1,
      -1,  2085,    -1,    -1,    -1,  2089,    -1,  2206,  2092,    -1,
    2209,  2095,    -1,  2097,    -1,    -1,    -1,    -1,  2217,    -1,
      -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    70,    -1,
      -1,    -1,    -1,    -1,  2233,    -1,    -1,  2236,    -1,    -1,
      -1,    -1,  2241,    -1,    -1,  2244,  2245,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
      -1,    -1,    -1,  2292,  2293,    -1,  2549,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2558,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2567,    -1,  2569,    -1,    -1,   161,
    2573,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   174,    -1,  2333,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   215,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2282,    -1,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2666,  2298,  2668,    -1,  2670,    -1,    -1,
    2673,    -1,  2675,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2431,    -1,    -1,    -1,    -1,    -1,    -1,   281,
      -1,    -1,    -1,    -1,  2328,    -1,    -1,    -1,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   117,    -1,    -1,  2464,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2475,  2361,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   161,   349,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   179,    -1,  2525,    -1,    -1,    -1,
    2529,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2429,    -1,    -1,    -1,    -1,
      -1,  2435,    -1,    -1,    -1,  2439,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2455,    -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2583,  2584,    -1,  2586,    -1,    -1,
      -1,    -1,  2591,  2592,    -1,    -1,    -1,  2596,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2506,  2507,    -1,    -1,    -1,    -1,    -1,    -1,
    2629,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2657,    -1,
      -1,    -1,    -1,    -1,    -1,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,    -1,    -1,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    -1,  2611,    53,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    67,    -1,    -1,    -1,  2745,    -1,    -1,    -1,
      75,    76,    -1,    19,    -1,    20,    21,    22,    83,    84,
      -1,    -1,    -1,  2762,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,  2777,    -1,
      -1,  2780,   107,    -1,    49,    50,   111,   112,    53,    -1,
     115,    57,    19,    -1,    -1,    60,    -1,    -1,    63,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,   133,    -1,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,  2709,    -1,    -1,    -1,   154,
      57,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,   111,   112,  2732,    -1,
     115,    -1,    -1,   178,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,    -1,
      -1,    -1,    -1,    -1,    19,    -1,   103,   202,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,   154,
      -1,    -1,    -1,    -1,  2778,   161,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   232,    -1,   234,
      -1,    -1,    57,   178,  2798,   240,   241,  2801,    -1,    -1,
      -1,    -1,   187,    -1,    -1,    -1,    -1,   103,    -1,    -1,
      -1,   256,   257,    -1,   161,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   267,   268,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   223,   103,    -1,
      -1,    -1,   228,    -1,    -1,    -1,    -1,   232,   293,   234,
     295,    -1,    -1,    -1,    -1,   240,   241,    -1,    -1,    -1,
      -1,    -1,   307,    -1,   309,   161,    -1,    -1,    -1,    -1,
     315,    -1,   257,    -1,    -1,    -1,   223,    -1,    19,    -1,
      -1,   228,    -1,   268,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,    -1,    -1,
      -1,    -1,    -1,   289,   349,    -1,    -1,    -1,   293,    -1,
     295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     315,    -1,   228,    -1,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   103,   228,   349,   166,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     161,    -1,    -1,    -1,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,    -1,    -1,    -1,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,    -1,    -1,    -1,    -1,   228,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,    -1,    -1,    -1,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,    41,    -1,    -1,
      44,    -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      -1,    65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    87,    88,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      44,    -1,    -1,    47,    -1,    -1,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    68,    69,    70,    -1,   142,    -1,
      -1,    -1,   146,    -1,    78,   149,    80,    -1,    -1,   153,
     154,    85,    -1,    87,    88,    89,   160,    -1,    -1,    -1,
      -1,    95,   166,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,
     184,   185,   186,    -1,    -1,   189,   190,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   128,    -1,    -1,    -1,    -1,    -1,
     204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   146,    -1,    -1,    -1,    -1,   221,   222,   223,
     154,    -1,   156,   157,    -1,    -1,   160,    -1,    -1,    -1,
     164,   235,   166,   237,    -1,    -1,    -1,    -1,    -1,    -1,
     244,    -1,    -1,    -1,   248,    -1,    -1,    -1,   252,    -1,
     254,    -1,   256,    -1,    -1,   189,   190,   261,    -1,    -1,
     194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     204,   275,    -1,    -1,    -1,    -1,    -1,   281,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,   222,    -1,
      -1,    -1,   296,   297,    -1,   229,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   308,    -1,   310,    -1,    -1,    -1,
      -1,    -1,   316,    -1,    -1,   319,   320,    -1,    -1,    -1,
     254,    -1,   256,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   350,   281,    -1,    -1,
      -1,    -1,    -1,   357,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   296,   297,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,
      -1,    -1,    -1,    -1,   318,    -1,   320,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   357
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    41,    44,    47,    60,    65,    66,    68,    69,    70,
      78,    85,    87,    88,    97,    98,   120,   129,   142,   146,
     149,   153,   154,   160,   166,   181,   184,   185,   186,   189,
     190,   204,   221,   222,   223,   235,   237,   244,   248,   252,
     254,   256,   261,   275,   281,   296,   297,   308,   310,   316,
     319,   320,   350,   357,   363,    67,    12,    54,    72,   102,
     121,   125,   139,   301,   397,     3,     4,   301,   364,   402,
     194,   200,   239,   265,   311,   356,   404,   293,     4,    40,
     113,   201,   254,   409,    28,   155,   179,   183,   236,   277,
     285,   286,   379,   411,    84,   101,   181,   225,   261,   412,
      40,    60,   113,   201,   297,   364,   421,     4,    19,    40,
      57,   103,   122,   161,   201,   209,   217,   218,   223,   228,
     304,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     353,   358,   359,   366,   374,   375,   376,   423,    33,   424,
     366,    44,    47,    77,    85,   147,   199,   224,   226,   254,
     320,   365,   366,     6,    65,   426,   149,   427,    41,    44,
      47,    66,    68,    69,    70,    78,    80,    85,    87,    88,
      89,    95,    97,   128,   146,   154,   156,   157,   160,   164,
     166,   189,   190,   194,   204,   221,   222,   229,   254,   256,
     281,   296,   297,   305,   312,   318,   320,   357,   428,    84,
     101,   472,    19,    41,    44,    78,    85,    96,    97,   103,
     128,   146,   160,   161,   167,   189,   228,   281,   291,   320,
     475,    67,   366,    89,   118,   192,   207,   269,   310,   320,
     481,    16,    26,   114,   128,   163,   214,   227,   484,   238,
     502,     5,    67,    89,   144,   310,   357,   366,   503,     5,
     504,    58,   135,   233,   248,   311,   520,    46,    65,    67,
     188,   247,   291,   300,   540,    67,   210,   352,   358,   360,
     541,    39,   201,   239,   301,   364,   374,   376,   542,     5,
     310,   320,   366,   545,    71,   174,   253,   262,   546,     4,
     547,    89,   520,    62,   291,   314,   554,   201,   301,   364,
     555,    26,   114,   128,   214,   227,   557,    51,   101,   110,
     141,   303,   572,   573,     4,    37,    48,    75,   154,   193,
     262,   298,   314,   392,     4,   128,   213,   574,   301,   364,
     576,    16,    23,   249,   252,   375,   577,   238,   581,   301,
     364,   582,     0,     5,   145,   366,    60,   364,   398,   278,
       5,     4,   301,   364,   399,     5,    32,   290,   400,   127,
     364,   401,   127,   364,   403,   364,     4,   200,   251,   258,
     407,   194,   311,   355,   356,   364,   406,   366,   143,   182,
     405,   204,   364,    79,   178,   258,   364,   408,     5,   364,
       4,   254,   410,   364,   364,     5,   234,   413,    31,   414,
       5,   415,     5,   419,     5,    31,   420,   364,     9,    10,
      11,   364,   370,   371,   372,   373,   364,   364,    40,   113,
     201,   364,   422,   364,   201,   374,   376,   364,    35,   108,
     131,   132,   140,   158,   168,   381,   364,     4,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   364,   119,
      67,    54,    72,    89,   102,   121,   125,   139,   180,   431,
     121,   433,   194,   200,   239,   265,   311,   355,   356,   364,
     416,   434,   293,   437,   174,   438,   174,   183,   440,    66,
      67,    70,    93,   174,   193,   215,   281,   349,   374,   442,
     364,   376,   445,    60,   297,   374,   446,   289,   374,   376,
     447,    33,   448,   374,   376,   449,     4,   374,   376,   450,
      45,    60,    82,   102,   119,   123,   151,   152,   206,   216,
     278,   279,   349,   454,   220,   313,   460,    67,     5,    90,
       6,    89,   123,   452,     5,    66,   376,   451,    16,   520,
      46,    67,    82,   188,   247,   291,   300,   461,    67,   239,
     462,   292,    62,   291,   314,   463,    21,   139,   246,   276,
     464,    37,    48,    75,   154,   193,   262,   314,   465,   376,
      90,    16,   203,   470,   374,   473,    67,    73,   476,    31,
     477,    44,    88,   199,   478,   154,   225,   268,   306,   479,
     374,    18,    59,   117,   179,   297,   374,   480,     5,     4,
     200,   483,     5,     4,     6,   123,   364,     4,     5,   254,
     485,     5,   487,     5,   119,   199,   254,   279,   488,    95,
     113,   194,   501,     5,   499,     5,   279,   500,     4,     5,
     366,   366,   364,   364,     5,     4,     5,    61,    67,    74,
      76,    81,    84,    90,   101,   107,   116,   133,   154,   169,
     180,   181,   202,   225,   239,   241,   256,   261,   268,   275,
     293,   306,   307,   309,   349,   505,    92,   175,   266,   284,
     378,     5,     4,   204,   211,   212,   247,   354,   377,   364,
     374,   364,     5,   145,   364,    40,   113,   364,   544,   366,
     364,   374,   376,   543,   364,   381,   364,     4,   375,    55,
      91,   145,   254,   548,     4,     4,   364,     4,   154,   268,
     549,     5,   374,     4,    40,   113,   364,   556,   364,    99,
      62,   123,   254,   282,   558,   123,   571,    62,   119,   123,
     161,   199,   250,   254,   279,   282,   292,   560,   561,    62,
     123,   282,   570,     5,     4,    34,   109,   210,   553,    67,
     366,   393,    67,   366,   394,    67,   366,   395,    13,   196,
     552,   364,   364,   232,   364,   396,   364,   279,     4,   364,
     364,     4,   580,     4,   295,   578,     4,   295,   579,     4,
     381,   127,   364,   583,   364,   364,     4,     5,   364,    12,
     364,   364,   364,    30,    96,   167,   258,   263,   380,   380,
       4,   204,   364,   364,     4,     4,     4,   364,   364,   364,
     364,     4,     4,     5,     5,   374,     5,   364,   364,   370,
     372,   372,   374,   364,   364,   364,   364,   364,   364,   364,
     374,   376,   373,   364,   364,   373,   364,     5,   278,   105,
     194,   432,   200,   258,   435,   174,    79,   178,   258,   436,
     143,   182,   417,   417,     4,   439,     4,   441,   200,   265,
     443,   183,   444,   174,   381,   364,   364,   374,   374,   381,
     381,   381,   374,   381,   364,   374,     4,   457,     4,   376,
     455,   203,     4,   170,   320,   456,   203,   374,     4,   136,
     301,   459,     5,     5,   429,     4,   203,   138,   255,   367,
     364,     4,     5,    61,    67,   116,   133,   148,   154,   159,
     215,   234,   239,   241,   267,   268,   275,   293,   349,   514,
     376,   195,   195,    67,   466,    67,   467,    67,   468,   232,
     469,   364,     5,   430,   233,   471,   375,   381,     5,   374,
     374,   374,   374,     4,   366,     4,     4,   203,   364,    14,
      15,    62,   197,   198,   272,   282,   283,   313,    88,     5,
       5,    14,    15,    62,   197,   198,   272,   282,   283,   287,
     313,    88,   161,   166,   375,   491,   496,    88,   161,     5,
     489,     4,     4,    14,    62,   197,   272,   282,   313,     5,
       5,     4,   364,   375,    20,    21,    22,    49,    50,    53,
      56,    63,    67,    75,    76,    83,    84,   101,   107,   111,
     112,   115,   133,   154,   178,   202,   232,   234,   240,   241,
     256,   257,   267,   268,   293,   295,   307,   309,   315,   349,
      67,    81,    90,   101,   133,   154,   202,   241,   268,   307,
     309,     4,    30,   165,   220,   246,   508,     5,    64,   106,
     243,   259,   260,   351,   352,   513,   101,   506,    17,   268,
     511,    40,   113,   201,   512,     4,     5,    17,   219,   302,
     364,   268,   513,   521,   128,   513,   522,    36,    40,   113,
     137,   201,   301,   364,   523,   374,   366,    93,   101,   107,
     130,   154,   162,   202,   210,   256,   268,   284,   526,    40,
     113,   201,     5,   268,   294,   530,    17,   126,   172,   219,
     302,   531,   295,   366,   532,     5,   101,   107,   310,    17,
      17,     4,   364,   364,   364,   364,   364,   364,   381,   364,
     364,   373,   364,     4,   381,     4,    40,   113,   201,   273,
     550,    40,   113,   201,   273,   551,     4,    99,     5,     5,
      88,     4,     5,     5,    88,     5,   561,    62,   123,   161,
     282,   565,    62,   123,   282,   569,    88,   161,    62,   123,
     282,   563,     4,    62,   123,   282,   562,     5,     5,     4,
       4,     5,     5,     5,   364,   364,   364,     4,   364,   575,
     364,   364,     6,   375,     4,     5,     4,     4,     5,     4,
      99,   270,   382,   364,   364,    12,     5,    12,   364,   364,
      12,     4,    12,     4,     4,   364,   364,   364,     4,   366,
       4,     4,   381,   374,   381,   364,   364,   364,   374,   364,
     373,   364,   364,     5,     5,   364,   376,   364,   374,   364,
     381,   381,   382,   382,   382,   381,   373,   364,   381,   364,
     367,   458,   170,     5,     4,   381,   161,   161,     4,     5,
       4,     4,   364,   453,    38,    38,   364,    20,    21,    22,
      49,    50,    53,    60,    63,    67,    75,    76,    83,   111,
     112,   115,   133,   154,   178,   187,   232,   234,   240,   241,
     257,   268,   293,   295,   305,   315,   349,    67,   133,   159,
     241,   293,    30,   165,   220,   246,   515,   364,   215,   364,
     516,    17,   364,   267,   526,   267,   215,   364,   517,   295,
     518,    17,   100,   364,   364,     5,   382,    57,   374,     4,
       5,   482,   364,     5,     5,     5,   161,   190,   386,   386,
     169,   274,   384,     4,     4,     5,     5,   486,   280,   280,
       5,     5,     5,    17,   163,   385,   385,   384,     4,     4,
     384,     5,     5,   490,   166,   348,   375,   494,     5,   493,
       5,     5,   497,     5,   498,     5,    14,    15,    62,   197,
     198,   272,   282,   283,   287,   313,     4,     4,     5,     5,
     386,   384,     4,     5,     5,   381,    83,   156,   230,   231,
     245,   288,   389,     7,     8,   364,   369,   246,   124,   246,
     246,   107,    40,    67,   101,   107,   113,   133,   154,   169,
     202,   241,   256,   268,   295,   307,   309,   310,   349,   507,
     124,   246,     5,    27,   171,   246,   291,   143,   107,    22,
      50,    53,    83,   112,   115,   234,   267,    22,    50,    53,
      56,    83,   112,   115,   234,   267,   293,    40,   124,   246,
     246,   107,     5,   219,    27,   232,    36,   137,   301,   364,
     271,   278,   124,   252,   374,   526,    40,   134,   232,   291,
     252,   219,     5,     5,   256,    27,   232,     4,     5,     5,
     219,    36,   137,   301,   364,   526,   219,   366,     4,     4,
     364,     5,   313,    22,    27,    49,    50,    52,    53,    63,
      75,    76,    83,    86,   104,   111,   112,   115,   178,   234,
     240,   257,   267,   294,   295,   315,   360,   509,   364,   364,
     364,   364,   364,   513,   374,     5,     4,     5,   364,   364,
     374,   364,   366,   364,   364,   513,     5,     5,   364,   364,
     366,     5,    17,     5,     5,   364,   364,   373,   364,   364,
       4,   364,   364,   113,   364,   364,   113,     4,    42,    43,
     176,   177,   205,   391,   391,    62,   123,   282,   559,   391,
       5,    62,   123,   282,   564,     5,     5,    62,   123,   282,
     566,     4,     5,     5,     4,    62,   123,   282,   568,    62,
     123,   282,   567,     5,     5,     4,     5,     5,     4,   391,
     391,   391,   364,   364,   364,     4,   374,   364,   375,   381,
       5,     5,    12,   364,   374,   376,   364,    12,   364,   364,
     364,    60,   364,     6,     4,   364,   364,    47,   281,   418,
       5,   366,   366,   381,   364,     4,     4,     4,   381,   374,
     364,   364,   364,   364,   381,   374,   382,   373,   364,     4,
     382,   364,     4,   376,     5,    24,    25,    99,   383,     4,
     374,   364,   364,     4,   364,     5,    83,   156,   230,   231,
     245,   288,   374,   376,   246,   124,   246,   246,    21,   246,
     374,   124,   246,    27,   171,   246,   291,   143,    21,   246,
     124,   246,   246,    21,   246,    27,   173,   232,   173,   271,
     278,   124,   173,   232,   299,   526,   134,   173,   232,   291,
       4,   256,    27,   173,   232,   526,   215,   364,   364,   364,
     364,   364,   364,   203,   364,   364,    20,   242,   474,     4,
       4,   364,   386,   386,   386,     4,   386,   386,   386,    14,
      15,    62,   197,   198,   272,   282,   283,   313,   385,   386,
     386,   386,   386,   386,     4,   386,   386,     4,   385,    14,
      15,    62,   197,   198,   272,   282,   283,   313,     5,   492,
       5,   495,     5,     5,    14,    15,    62,   197,   198,   272,
     282,   283,   287,   313,     5,    14,    15,    62,   197,   198,
     272,   282,   283,   287,   313,     5,    14,    15,    62,   197,
     198,   272,   282,   283,   287,   313,    14,    15,    62,   197,
     198,   272,   282,   283,   313,   280,     5,     5,     5,   385,
     385,   384,     4,     4,   384,     5,     4,     4,   386,   386,
       4,   386,   386,     5,   366,   374,   376,     5,   364,   366,
     364,     5,   364,     5,   369,   107,   202,   256,   107,   202,
     256,     5,   366,   364,   366,     5,   364,   374,   366,     5,
     369,   246,   246,    21,   246,    21,   246,   246,    21,   246,
     317,   317,     4,     4,     4,   507,     4,     4,     4,   317,
     317,     4,     5,     4,   366,   364,     5,   364,     5,   369,
     366,   374,   374,   364,    27,    49,    52,    63,    86,   104,
     360,   387,     4,   366,   364,   381,   366,     5,   374,   374,
     364,   366,   366,   374,   374,   364,   366,   364,     5,   364,
     232,   232,   364,   364,   232,   364,   232,   364,   364,   519,
     527,   364,   232,   232,   364,   364,   364,   364,   364,   364,
     364,   364,     5,   313,   364,   510,   364,   364,   232,   364,
     364,   364,   364,   374,   381,     5,     4,     4,   364,   364,
     381,   364,   364,   364,   374,   513,   364,   364,     5,     4,
     364,   364,   364,   364,     5,     5,     4,   391,     5,     5,
       4,     4,     4,     5,     5,     4,     4,     5,     5,     4,
       5,     5,     4,   364,   364,   364,   364,   381,   364,   374,
     376,   364,   381,   364,   364,   364,   364,   364,     5,   364,
       4,     6,   364,   364,     4,   374,   364,   381,   183,   379,
     364,   379,   382,   381,   374,   364,   364,     4,   364,   374,
     374,   364,     4,   367,     5,     5,     5,     5,     5,   374,
     381,   374,   374,   374,   374,   376,   374,   381,   374,   374,
     374,   376,   374,   374,   374,   374,   376,   374,   374,   374,
     364,   374,   374,   374,   374,   374,   374,   374,   364,   364,
       4,   364,     5,     4,   364,   386,     5,     5,     5,   384,
       4,     4,     5,   386,   385,     4,   386,     5,     5,     5,
     385,   385,   384,     4,     4,     5,    14,    15,    62,   197,
     198,   272,   282,   283,   313,    14,    15,    62,   197,   198,
     272,   282,   283,   313,    14,    15,    62,   197,   198,   272,
     282,   283,   313,   280,     5,     5,     5,   385,   385,   384,
       4,     4,   384,     5,   280,     5,     5,     5,   385,   385,
     384,     4,     4,   384,     5,   280,     5,     5,     5,   385,
     385,   384,     4,     4,   384,     5,     5,     5,     5,   385,
     385,   384,     4,     4,     5,   385,     4,     4,   385,     4,
       4,   386,     5,   381,   374,   364,   364,   374,   364,     5,
     369,     5,   374,   366,     5,   374,   381,     5,   369,   364,
     364,   364,   364,   364,   364,   364,   364,   364,     4,     4,
       5,     4,     4,   364,   374,   364,     5,   369,   366,   381,
     381,   364,   373,   381,   381,   364,   381,   381,   364,   364,
     364,   364,   364,   364,   364,   364,   364,   364,    56,    67,
      94,   133,   293,   295,   349,   524,   525,   526,   538,   539,
     364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   364,   374,     5,   364,   364,   364,   364,     4,     4,
     381,   382,     5,     5,   373,   364,     4,   381,   374,     4,
     391,   391,   391,   369,   364,   364,   364,   381,   364,   373,
     364,   364,    12,     5,     5,     4,   364,   364,     4,   381,
     374,   364,   364,   382,   383,   364,     5,   364,   374,   376,
       5,     5,     5,     5,     5,   381,   383,   383,   383,   381,
     383,   382,   383,   383,   381,   383,   383,   383,   381,   383,
     383,   381,   374,   383,   381,   383,   383,   381,   383,   381,
       4,   374,   376,     5,   364,     4,   386,   385,     4,   385,
       5,     5,     5,   385,   385,   384,     4,     4,     5,     5,
       5,     5,   385,   385,   384,     4,     4,     5,     5,     5,
       5,   385,   385,   384,     4,     4,     5,   385,   386,   386,
     386,   386,   386,     4,   386,   386,     4,   385,   385,   386,
     386,   386,   386,   386,     4,   386,   386,     4,   385,   385,
       4,     4,   385,     4,   385,   385,     4,     4,     4,   375,
     383,     4,   374,   383,   364,   374,     4,   383,   383,   374,
       4,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   364,   374,   383,   364,   374,     4,   373,   373,   374,
     373,   373,   374,   374,   373,   373,   364,   364,   364,   364,
     364,   364,   369,   364,   364,   364,   361,   361,   361,   361,
     361,   361,   361,   525,   361,   369,   364,   364,   364,   364,
     369,   364,   364,   364,   364,   364,   364,   381,   364,   313,
     368,   369,   364,   364,   382,   366,   374,   374,   382,   381,
       4,   364,   373,   364,    60,   364,     5,     5,   364,     4,
     379,   383,     5,   381,     4,     5,     4,     5,   374,     5,
     382,   383,   382,   382,   382,     5,   381,     4,   364,   386,
     385,   386,   386,   386,   386,   386,     4,   386,   386,   385,
     386,   386,   386,   386,   386,     4,   386,   386,   385,   386,
     386,   386,   386,   386,     4,   386,   386,   385,   386,   385,
       4,   386,   386,   385,     4,   386,   385,     4,   385,   385,
     381,   374,   383,     4,   381,   364,   381,   364,   364,   364,
     383,     4,   381,   364,   373,   383,   364,   373,   383,   383,
     374,   364,     4,   388,   388,   364,   364,   388,   369,   388,
     527,   374,   507,     5,     4,     5,     5,     5,     4,   366,
     369,   388,   388,   364,   364,   369,   364,   364,   364,   364,
     364,   373,   364,     5,   527,   364,   388,   366,   528,   529,
     381,   381,   366,   382,     4,     5,   364,     5,     4,     6,
     364,     4,    32,   191,   290,   425,   374,     5,    32,   191,
     290,   390,   374,     4,   425,   364,   385,   386,   385,   386,
     385,   386,   386,   385,   386,   385,   385,   364,   383,   374,
     374,   364,   374,   364,   374,   374,   364,   374,   383,     4,
     527,   527,   368,   364,   527,     4,   527,   381,     5,     4,
       4,   527,   527,   368,   364,     4,   527,   527,   364,   374,
     527,   527,   527,   528,   535,   536,   526,   533,   534,   366,
       4,     5,     5,     6,     4,   194,   311,   356,   364,   416,
     425,     4,   374,   425,     4,   386,   386,   386,   386,   386,
     375,   383,   383,   364,   383,     4,   383,   383,   364,   383,
     364,   527,   527,     4,   364,   527,     5,   364,   527,     4,
     364,   527,   381,   535,   537,   538,   361,   534,     5,     5,
       4,   364,   417,   364,   417,   381,   383,     4,   374,   376,
       4,   369,   368,   364,   364,   368,   364,   374,   538,   366,
       5,     5,   364,   364,   364,   364,   390,     5,   374,   376,
     381,   374,   376,   527,   364,     4,   527,   364,   383,     5,
       5,   364,     5,   364,   381,   381,     4,   527,     4,     5,
       5,     5,   368,   368,   527,   527,   527
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (fr, ll, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, ll)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, fr, ll); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, Base* fr, frFlexLexer* ll)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, fr, ll)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    Base* fr;
    frFlexLexer* ll;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (fr);
  YYUSE (ll);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, Base* fr, frFlexLexer* ll)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, fr, ll)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    Base* fr;
    frFlexLexer* ll;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, fr, ll);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, Base* fr, frFlexLexer* ll)
#else
static void
yy_reduce_print (yyvsp, yyrule, fr, ll)
    YYSTYPE *yyvsp;
    int yyrule;
    Base* fr;
    frFlexLexer* ll;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , fr, ll);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, fr, ll); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, Base* fr, frFlexLexer* ll)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, fr, ll)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    Base* fr;
    frFlexLexer* ll;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (fr);
  YYUSE (ll);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (Base* fr, frFlexLexer* ll);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (Base* fr, frFlexLexer* ll)
#else
int
yyparse (fr, ll)
    Base* fr;
    frFlexLexer* ll;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 469 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 470 "frame/parser.Y"
    {fr->bgColorCmd("gray");;}
    break;

  case 6:
#line 471 "frame/parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 8:
#line 473 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 9:
#line 474 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 11:
#line 476 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 18:
#line 483 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 24:
#line 489 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 25:
#line 490 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 26:
#line 491 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 28:
#line 493 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 35:
#line 500 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 36:
#line 501 "frame/parser.Y"
    {fr->nanColorCmd("gray");;}
    break;

  case 40:
#line 505 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 43:
#line 508 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 48:
#line 513 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 50:
#line 515 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 52:
#line 517 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 54:
#line 519 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 59:
#line 526 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 60:
#line 527 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 61:
#line 530 "frame/parser.Y"
    {yydebug=(yyvsp[(1) - (1)].integer);;}
    break;

  case 62:
#line 531 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 532 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 533 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 534 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 535 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 536 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 537 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 538 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 539 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 540 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 72:
#line 543 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 73:
#line 545 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 74:
#line 546 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 75:
#line 547 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 76:
#line 548 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 77:
#line 550 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 78:
#line 551 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 79:
#line 552 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 80:
#line 553 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 81:
#line 556 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 82:
#line 557 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 83:
#line 558 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 84:
#line 559 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 85:
#line 560 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 86:
#line 563 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 87:
#line 564 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 88:
#line 567 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 89:
#line 568 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 90:
#line 569 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 91:
#line 572 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 92:
#line 575 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 93:
#line 578 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 94:
#line 582 "frame/parser.Y"
    {
	  Vector r;
	  if (currentSky == Coord::GALACTIC || currentSky == Coord::ECLIPTIC) 
	    r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  else
	    r = Vector((yyvsp[(1) - (2)].real)*360./24.,(yyvsp[(2) - (2)].real));

	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 95:
#line 594 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 96:
#line 601 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 97:
#line 608 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 98:
#line 615 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 99:
#line 616 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 100:
#line 617 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 101:
#line 618 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 102:
#line 619 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 103:
#line 622 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 104:
#line 623 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 105:
#line 624 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 106:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 107:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 108:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 109:
#line 628 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 110:
#line 629 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 111:
#line 630 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 112:
#line 631 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 113:
#line 632 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 114:
#line 633 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 115:
#line 634 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 116:
#line 635 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 117:
#line 636 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 118:
#line 637 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 119:
#line 638 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 120:
#line 639 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 121:
#line 640 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 122:
#line 641 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 123:
#line 642 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 124:
#line 643 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 125:
#line 644 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 126:
#line 645 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 127:
#line 646 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 128:
#line 647 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 129:
#line 648 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 130:
#line 649 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 131:
#line 652 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 132:
#line 653 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 133:
#line 656 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 134:
#line 657 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 135:
#line 658 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 136:
#line 659 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 137:
#line 660 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 138:
#line 661 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 139:
#line 664 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 140:
#line 665 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 141:
#line 666 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 142:
#line 667 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 143:
#line 668 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 144:
#line 671 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 145:
#line 672 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 146:
#line 673 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 147:
#line 674 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 148:
#line 675 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 149:
#line 676 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 150:
#line 677 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 151:
#line 678 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 152:
#line 681 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 153:
#line 682 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 154:
#line 683 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 155:
#line 684 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 156:
#line 685 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 157:
#line 688 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 158:
#line 689 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 159:
#line 690 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 160:
#line 691 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 161:
#line 692 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 162:
#line 693 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 163:
#line 694 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 164:
#line 695 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 165:
#line 698 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 166:
#line 699 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 167:
#line 700 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 168:
#line 703 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 169:
#line 704 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 170:
#line 705 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 171:
#line 706 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 172:
#line 709 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 173:
#line 710 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 174:
#line 711 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 175:
#line 714 "frame/parser.Y"
    {;}
    break;

  case 176:
#line 715 "frame/parser.Y"
    {;}
    break;

  case 177:
#line 716 "frame/parser.Y"
    {;}
    break;

  case 178:
#line 719 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 179:
#line 720 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 180:
#line 721 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 181:
#line 724 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 182:
#line 725 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 183:
#line 726 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 184:
#line 727 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 185:
#line 728 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 186:
#line 729 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 187:
#line 730 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 188:
#line 731 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 189:
#line 734 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 190:
#line 735 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 191:
#line 738 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 192:
#line 739 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 193:
#line 740 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 194:
#line 741 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 195:
#line 742 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 196:
#line 743 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 197:
#line 746 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 198:
#line 747 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 199:
#line 748 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 200:
#line 749 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 201:
#line 752 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 202:
#line 753 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 203:
#line 754 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 204:
#line 755 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 205:
#line 756 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 206:
#line 757 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 211:
#line 764 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 212:
#line 765 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 213:
#line 766 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 214:
#line 768 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 215:
#line 771 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 216:
#line 772 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 217:
#line 775 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 218:
#line 776 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 219:
#line 779 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 220:
#line 780 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 221:
#line 783 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 222:
#line 785 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 224:
#line 789 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 225:
#line 790 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 228:
#line 793 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 230:
#line 795 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 231:
#line 798 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 232:
#line 799 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 233:
#line 802 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 234:
#line 803 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 235:
#line 805 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 236:
#line 807 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 237:
#line 808 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 238:
#line 809 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 239:
#line 811 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 240:
#line 813 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 241:
#line 816 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 242:
#line 817 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 243:
#line 820 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 244:
#line 822 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 245:
#line 825 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 246:
#line 827 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 247:
#line 830 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 248:
#line 834 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 249:
#line 835 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 251:
#line 839 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 252:
#line 840 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 253:
#line 841 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 257:
#line 847 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 258:
#line 848 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 260:
#line 851 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 261:
#line 856 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 262:
#line 857 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 263:
#line 860 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 264:
#line 861 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 265:
#line 862 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 266:
#line 863 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 267:
#line 864 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 268:
#line 867 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 269:
#line 868 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 270:
#line 869 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 271:
#line 870 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 272:
#line 873 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 273:
#line 875 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 274:
#line 880 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 275:
#line 885 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 276:
#line 892 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 277:
#line 894 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 278:
#line 895 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 280:
#line 897 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 281:
#line 901 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 282:
#line 903 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 283:
#line 905 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 284:
#line 906 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 290:
#line 917 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 291:
#line 919 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 292:
#line 921 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 293:
#line 926 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 294:
#line 930 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 295:
#line 933 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 296:
#line 934 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 297:
#line 937 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 298:
#line 938 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 299:
#line 940 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 300:
#line 946 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 301:
#line 947 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 302:
#line 948 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 303:
#line 949 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 304:
#line 952 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 305:
#line 953 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 306:
#line 956 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 307:
#line 957 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 308:
#line 960 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 309:
#line 961 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 310:
#line 965 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 311:
#line 967 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 312:
#line 970 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 313:
#line 972 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 314:
#line 975 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 316:
#line 977 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 317:
#line 978 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 318:
#line 979 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 319:
#line 982 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 320:
#line 984 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 321:
#line 985 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 322:
#line 986 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 323:
#line 987 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 324:
#line 991 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 325:
#line 993 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 326:
#line 994 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 327:
#line 995 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 328:
#line 998 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 329:
#line 1000 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 330:
#line 1002 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 331:
#line 1004 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 332:
#line 1007 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 333:
#line 1010 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 334:
#line 1011 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 335:
#line 1012 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 336:
#line 1013 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 337:
#line 1016 "frame/parser.Y"
    {fr->fadeCmd((void*)(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].real));;}
    break;

  case 338:
#line 1017 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 339:
#line 1020 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 340:
#line 1023 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 341:
#line 1024 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 355:
#line 1038 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 358:
#line 1041 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 359:
#line 1042 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 363:
#line 1046 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 364:
#line 1047 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 367:
#line 1050 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 368:
#line 1051 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 370:
#line 1054 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 372:
#line 1056 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 374:
#line 1058 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 376:
#line 1060 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 377:
#line 1062 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 380:
#line 1065 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 381:
#line 1069 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 382:
#line 1071 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 383:
#line 1075 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 384:
#line 1077 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 385:
#line 1080 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 386:
#line 1081 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 387:
#line 1082 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 388:
#line 1083 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 389:
#line 1084 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 390:
#line 1085 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 392:
#line 1087 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 393:
#line 1090 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 394:
#line 1091 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 395:
#line 1092 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 396:
#line 1095 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 397:
#line 1098 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 398:
#line 1100 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 399:
#line 1102 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 400:
#line 1103 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 401:
#line 1104 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 403:
#line 1106 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 405:
#line 1109 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 406:
#line 1115 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 407:
#line 1116 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 408:
#line 1119 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 409:
#line 1120 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 410:
#line 1121 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 411:
#line 1124 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 412:
#line 1125 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 414:
#line 1131 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 415:
#line 1133 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 416:
#line 1135 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 417:
#line 1138 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 419:
#line 1140 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 420:
#line 1144 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 421:
#line 1148 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 423:
#line 1150 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 424:
#line 1151 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 425:
#line 1152 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 426:
#line 1153 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 427:
#line 1154 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 429:
#line 1156 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 430:
#line 1157 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 431:
#line 1160 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 432:
#line 1161 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 433:
#line 1162 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 434:
#line 1165 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 435:
#line 1166 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 436:
#line 1170 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 437:
#line 1172 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 438:
#line 1180 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 439:
#line 1182 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 440:
#line 1184 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 441:
#line 1187 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 442:
#line 1189 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 443:
#line 1190 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 444:
#line 1193 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 445:
#line 1196 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 446:
#line 1198 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 447:
#line 1202 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 448:
#line 1204 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 449:
#line 1207 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 450:
#line 1211 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 451:
#line 1212 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 452:
#line 1214 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 453:
#line 1217 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 454:
#line 1218 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 456:
#line 1222 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 457:
#line 1223 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 458:
#line 1224 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 459:
#line 1227 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 460:
#line 1229 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 461:
#line 1230 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 463:
#line 1232 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 467:
#line 1236 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 468:
#line 1237 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 469:
#line 1238 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 470:
#line 1240 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 472:
#line 1242 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 473:
#line 1245 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 474:
#line 1247 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 475:
#line 1249 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 476:
#line 1250 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 477:
#line 1251 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 478:
#line 1252 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 479:
#line 1255 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 480:
#line 1256 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 481:
#line 1260 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 482:
#line 1262 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 483:
#line 1265 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 484:
#line 1268 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 485:
#line 1269 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 486:
#line 1271 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 487:
#line 1273 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 488:
#line 1275 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 489:
#line 1278 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 490:
#line 1279 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 491:
#line 1280 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 492:
#line 1283 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 493:
#line 1284 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 494:
#line 1285 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 495:
#line 1286 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 496:
#line 1287 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 497:
#line 1288 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 498:
#line 1289 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 499:
#line 1292 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 500:
#line 1295 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 501:
#line 1296 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 502:
#line 1297 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 503:
#line 1300 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 504:
#line 1301 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 505:
#line 1302 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 506:
#line 1303 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 507:
#line 1304 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 508:
#line 1305 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 513:
#line 1312 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 514:
#line 1313 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 515:
#line 1314 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 516:
#line 1317 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 517:
#line 1318 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 518:
#line 1321 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 519:
#line 1322 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 520:
#line 1325 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 521:
#line 1326 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 522:
#line 1329 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 523:
#line 1330 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 524:
#line 1333 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 526:
#line 1335 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 527:
#line 1338 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 528:
#line 1339 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 530:
#line 1343 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 531:
#line 1347 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 532:
#line 1350 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 533:
#line 1357 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 534:
#line 1358 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 535:
#line 1361 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 536:
#line 1362 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 539:
#line 1365 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 540:
#line 1366 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 541:
#line 1367 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 542:
#line 1368 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 544:
#line 1370 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 545:
#line 1371 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 546:
#line 1372 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 548:
#line 1374 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 549:
#line 1375 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 550:
#line 1376 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 551:
#line 1377 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 553:
#line 1381 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 554:
#line 1384 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 555:
#line 1385 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 556:
#line 1388 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 557:
#line 1389 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 558:
#line 1390 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 559:
#line 1391 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 560:
#line 1394 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 561:
#line 1395 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 562:
#line 1396 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 563:
#line 1397 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 564:
#line 1400 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 565:
#line 1401 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 566:
#line 1402 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 567:
#line 1403 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 568:
#line 1404 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 569:
#line 1405 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 570:
#line 1408 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 571:
#line 1409 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 572:
#line 1410 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 575:
#line 1414 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 576:
#line 1415 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 577:
#line 1418 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 578:
#line 1421 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 579:
#line 1422 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 580:
#line 1426 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 581:
#line 1428 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 582:
#line 1429 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 589:
#line 1441 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 590:
#line 1443 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 591:
#line 1445 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 592:
#line 1446 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 593:
#line 1448 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 594:
#line 1450 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 595:
#line 1452 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 596:
#line 1454 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 597:
#line 1456 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 599:
#line 1460 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 600:
#line 1461 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 601:
#line 1462 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 602:
#line 1463 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 603:
#line 1464 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 604:
#line 1466 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 605:
#line 1467 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 606:
#line 1468 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 607:
#line 1469 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 608:
#line 1472 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 609:
#line 1476 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 610:
#line 1478 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 611:
#line 1480 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 612:
#line 1482 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 613:
#line 1484 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 614:
#line 1486 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 615:
#line 1488 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 616:
#line 1490 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 617:
#line 1493 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 618:
#line 1495 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 619:
#line 1497 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 625:
#line 1505 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 626:
#line 1506 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 627:
#line 1507 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 628:
#line 1508 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 629:
#line 1509 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 630:
#line 1510 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 631:
#line 1512 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 632:
#line 1514 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 633:
#line 1515 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 634:
#line 1516 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 635:
#line 1517 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 636:
#line 1520 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 637:
#line 1521 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 638:
#line 1522 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 639:
#line 1523 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 640:
#line 1524 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 641:
#line 1526 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 642:
#line 1527 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 643:
#line 1528 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 644:
#line 1529 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 650:
#line 1540 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 651:
#line 1543 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 652:
#line 1546 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 653:
#line 1549 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 654:
#line 1552 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 655:
#line 1555 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 656:
#line 1558 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 657:
#line 1561 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 658:
#line 1564 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 659:
#line 1569 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 660:
#line 1572 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 661:
#line 1575 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 662:
#line 1578 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 663:
#line 1581 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 664:
#line 1584 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 665:
#line 1587 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 666:
#line 1590 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 667:
#line 1593 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 668:
#line 1596 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 669:
#line 1599 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 670:
#line 1604 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 671:
#line 1607 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 672:
#line 1610 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 673:
#line 1613 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 674:
#line 1616 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 675:
#line 1619 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 676:
#line 1622 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 677:
#line 1625 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 678:
#line 1628 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 679:
#line 1633 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 680:
#line 1635 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 681:
#line 1637 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 682:
#line 1639 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 683:
#line 1641 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 684:
#line 1643 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 685:
#line 1648 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 686:
#line 1650 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 687:
#line 1652 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 688:
#line 1656 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 689:
#line 1659 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 690:
#line 1662 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 691:
#line 1665 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 692:
#line 1668 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 693:
#line 1671 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 694:
#line 1674 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 695:
#line 1677 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 696:
#line 1680 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 697:
#line 1683 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 698:
#line 1686 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 699:
#line 1690 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 700:
#line 1691 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 701:
#line 1692 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 702:
#line 1693 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 703:
#line 1694 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 704:
#line 1695 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 705:
#line 1697 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 706:
#line 1699 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 707:
#line 1700 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 708:
#line 1701 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 709:
#line 1702 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 710:
#line 1705 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 711:
#line 1706 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 712:
#line 1707 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 713:
#line 1708 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 714:
#line 1709 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 715:
#line 1711 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 716:
#line 1712 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 717:
#line 1713 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 718:
#line 1714 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 719:
#line 1718 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 720:
#line 1720 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 721:
#line 1721 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 722:
#line 1723 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 723:
#line 1725 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 724:
#line 1727 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 725:
#line 1730 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 726:
#line 1731 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 727:
#line 1734 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 728:
#line 1735 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 729:
#line 1736 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 730:
#line 1739 "frame/parser.Y"
    {;}
    break;

  case 731:
#line 1742 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 732:
#line 1743 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 733:
#line 1744 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 734:
#line 1745 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 735:
#line 1746 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 736:
#line 1747 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 737:
#line 1748 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 738:
#line 1752 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 740:
#line 1760 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 741:
#line 1761 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 742:
#line 1763 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 743:
#line 1765 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 744:
#line 1766 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 745:
#line 1767 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 747:
#line 1768 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 750:
#line 1771 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 751:
#line 1772 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 752:
#line 1774 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 753:
#line 1776 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 754:
#line 1778 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 755:
#line 1781 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 756:
#line 1783 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 757:
#line 1784 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 758:
#line 1786 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 759:
#line 1789 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 760:
#line 1792 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 761:
#line 1794 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 762:
#line 1797 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 763:
#line 1800 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 764:
#line 1803 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 765:
#line 1806 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 766:
#line 1810 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 767:
#line 1814 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 768:
#line 1819 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 769:
#line 1823 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 770:
#line 1824 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 771:
#line 1826 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 772:
#line 1827 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 773:
#line 1829 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 774:
#line 1831 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 775:
#line 1833 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 776:
#line 1835 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 777:
#line 1836 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 778:
#line 1838 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 779:
#line 1840 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 780:
#line 1843 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 781:
#line 1847 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 782:
#line 1851 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 783:
#line 1853 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 784:
#line 1855 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 785:
#line 1857 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 786:
#line 1859 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 787:
#line 1861 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 788:
#line 1863 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 789:
#line 1865 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 790:
#line 1867 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 791:
#line 1869 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 792:
#line 1871 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 793:
#line 1873 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 794:
#line 1875 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 795:
#line 1877 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 796:
#line 1878 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 797:
#line 1880 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 798:
#line 1882 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 799:
#line 1883 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 800:
#line 1884 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 801:
#line 1886 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 802:
#line 1888 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 803:
#line 1889 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 804:
#line 1890 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 805:
#line 1891 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 806:
#line 1893 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 807:
#line 1894 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 808:
#line 1896 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 809:
#line 1900 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 810:
#line 1903 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 811:
#line 1906 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 812:
#line 1910 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 813:
#line 1914 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 814:
#line 1919 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 815:
#line 1923 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 816:
#line 1924 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 817:
#line 1925 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 818:
#line 1927 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 819:
#line 1929 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 820:
#line 1933 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 821:
#line 1934 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 822:
#line 1935 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 823:
#line 1937 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 824:
#line 1940 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 825:
#line 1943 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 826:
#line 1946 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 827:
#line 1947 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 828:
#line 1949 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 829:
#line 1952 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 830:
#line 1956 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 831:
#line 1958 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 832:
#line 1959 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 833:
#line 1961 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 834:
#line 1964 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 835:
#line 1967 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 836:
#line 1968 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 837:
#line 1970 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 838:
#line 1971 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 839:
#line 1972 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 840:
#line 1974 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 841:
#line 1975 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 842:
#line 1977 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 843:
#line 1980 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 844:
#line 1983 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 845:
#line 1985 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 846:
#line 1986 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 850:
#line 1991 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 851:
#line 1992 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 852:
#line 1994 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 853:
#line 1996 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 854:
#line 1998 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 855:
#line 1999 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 859:
#line 2005 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 860:
#line 2006 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 861:
#line 2007 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 862:
#line 2008 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 863:
#line 2009 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 864:
#line 2010 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 865:
#line 2011 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 866:
#line 2012 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 867:
#line 2013 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 868:
#line 2014 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 869:
#line 2016 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 870:
#line 2018 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 871:
#line 2019 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 872:
#line 2020 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 873:
#line 2021 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 874:
#line 2022 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 875:
#line 2024 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 876:
#line 2025 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 877:
#line 2026 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 878:
#line 2027 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 879:
#line 2028 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 880:
#line 2030 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 881:
#line 2031 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 882:
#line 2032 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 883:
#line 2033 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 884:
#line 2034 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 885:
#line 2035 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 886:
#line 2038 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 887:
#line 2039 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 888:
#line 2040 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 889:
#line 2041 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 890:
#line 2042 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 891:
#line 2043 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 892:
#line 2044 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 893:
#line 2045 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 894:
#line 2046 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 895:
#line 2047 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 896:
#line 2048 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 897:
#line 2049 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 898:
#line 2050 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 899:
#line 2051 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 900:
#line 2052 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 901:
#line 2053 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 902:
#line 2054 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 903:
#line 2055 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 904:
#line 2056 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 905:
#line 2057 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 906:
#line 2058 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 907:
#line 2061 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 908:
#line 2062 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 909:
#line 2063 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 910:
#line 2064 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 911:
#line 2065 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 912:
#line 2067 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 913:
#line 2077 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2085 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2094 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2102 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2109 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2116 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2124 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2132 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2137 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 922:
#line 2142 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 923:
#line 2147 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 924:
#line 2152 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 925:
#line 2157 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 926:
#line 2162 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 927:
#line 2167 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 928:
#line 2176 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 929:
#line 2186 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 930:
#line 2196 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 931:
#line 2205 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 932:
#line 2213 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 933:
#line 2223 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 934:
#line 2233 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 935:
#line 2243 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 936:
#line 2255 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 937:
#line 2264 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 939:
#line 2272 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 940:
#line 2274 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 941:
#line 2276 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 942:
#line 2281 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 943:
#line 2284 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 944:
#line 2285 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 945:
#line 2286 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 946:
#line 2293 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 947:
#line 2295 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 948:
#line 2296 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 949:
#line 2299 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 950:
#line 2300 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 951:
#line 2301 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 952:
#line 2302 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 953:
#line 2303 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 954:
#line 2304 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 955:
#line 2305 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 957:
#line 2309 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 958:
#line 2310 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 959:
#line 2311 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 960:
#line 2312 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 961:
#line 2313 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 962:
#line 2316 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 963:
#line 2318 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 964:
#line 2320 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 965:
#line 2322 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 966:
#line 2324 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 967:
#line 2326 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 968:
#line 2328 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 969:
#line 2329 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 970:
#line 2330 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 971:
#line 2332 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 972:
#line 2334 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 973:
#line 2336 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 974:
#line 2338 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 975:
#line 2340 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 976:
#line 2341 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 977:
#line 2342 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 978:
#line 2344 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 979:
#line 2346 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 980:
#line 2349 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 981:
#line 2351 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 982:
#line 2353 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 983:
#line 2354 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 984:
#line 2355 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 985:
#line 2356 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 986:
#line 2358 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 987:
#line 2359 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 988:
#line 2360 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 989:
#line 2361 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 990:
#line 2362 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 991:
#line 2364 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 992:
#line 2366 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 993:
#line 2367 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 994:
#line 2369 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 995:
#line 2371 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 996:
#line 2373 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 997:
#line 2374 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 998:
#line 2376 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 999:
#line 2378 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1000:
#line 2379 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1001:
#line 2380 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1002:
#line 2381 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1003:
#line 2383 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1004:
#line 2385 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1005:
#line 2388 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1006:
#line 2391 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1007:
#line 2392 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1008:
#line 2393 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1009:
#line 2395 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1010:
#line 2398 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1011:
#line 2401 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1012:
#line 2402 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1013:
#line 2403 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1014:
#line 2404 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1015:
#line 2406 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1016:
#line 2408 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1017:
#line 2410 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1018:
#line 2411 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1019:
#line 2413 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1020:
#line 2414 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1021:
#line 2415 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1022:
#line 2416 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1023:
#line 2417 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1024:
#line 2419 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1025:
#line 2421 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1026:
#line 2423 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1027:
#line 2425 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1029:
#line 2427 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1030:
#line 2428 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1031:
#line 2430 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1032:
#line 2432 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1033:
#line 2433 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1034:
#line 2434 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1036:
#line 2436 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1038:
#line 2440 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1039:
#line 2441 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1040:
#line 2442 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1041:
#line 2443 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1042:
#line 2444 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1043:
#line 2445 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1044:
#line 2447 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1045:
#line 2448 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1046:
#line 2450 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1047:
#line 2453 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1048:
#line 2454 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1049:
#line 2455 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1050:
#line 2456 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1051:
#line 2459 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1052:
#line 2460 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1053:
#line 2463 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1054:
#line 2464 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1055:
#line 2467 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1056:
#line 2468 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1057:
#line 2471 "frame/parser.Y"
    {
	  strncpy(currentFont, "helvetica 10 normal roman", 32);
	  strncpy(currentColor, "green", 16);
	  currentDash[0] = 8;
	  currentDash[1] = 3;
	  currentWidth = 1;
	  strncpy(currentText, "", 80);
	  currentProps = defaultProps;
	  taglist.deleteAll();
	  cblist.deleteAll();
	;}
    break;

  case 1058:
#line 2484 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1059:
#line 2485 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1060:
#line 2489 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1061:
#line 2490 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1062:
#line 2494 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1063:
#line 2495 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1064:
#line 2500 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1065:
#line 2504 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1066:
#line 2509 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1067:
#line 2511 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1068:
#line 2514 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1069:
#line 2516 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1070:
#line 2519 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1071:
#line 2521 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1072:
#line 2524 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1073:
#line 2525 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1074:
#line 2526 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1075:
#line 2527 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1076:
#line 2528 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1077:
#line 2529 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1078:
#line 2531 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1081:
#line 2538 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1082:
#line 2539 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1083:
#line 2540 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1084:
#line 2541 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1085:
#line 2542 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1086:
#line 2543 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1089:
#line 2548 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1090:
#line 2549 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1091:
#line 2550 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1092:
#line 2551 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1093:
#line 2552 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1094:
#line 2553 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1095:
#line 2554 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1096:
#line 2555 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1097:
#line 2556 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1098:
#line 2557 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1099:
#line 2558 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1102:
#line 2565 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1103:
#line 2566 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1105:
#line 2570 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1106:
#line 2572 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1107:
#line 2573 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1108:
#line 2576 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1109:
#line 2577 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1110:
#line 2578 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1111:
#line 2579 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1112:
#line 2580 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1113:
#line 2581 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1114:
#line 2584 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1115:
#line 2585 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1118:
#line 2593 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1119:
#line 2596 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1120:
#line 2597 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1124:
#line 2604 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1125:
#line 2607 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1126:
#line 2611 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1127:
#line 2612 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1128:
#line 2613 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1129:
#line 2614 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1130:
#line 2615 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1131:
#line 2616 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1132:
#line 2617 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1133:
#line 2618 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1134:
#line 2624 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1135:
#line 2625 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1136:
#line 2626 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1137:
#line 2627 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1138:
#line 2631 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1139:
#line 2632 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1140:
#line 2634 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1141:
#line 2639 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1143:
#line 2641 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1145:
#line 2643 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1146:
#line 2646 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1147:
#line 2648 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1148:
#line 2653 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1149:
#line 2656 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1150:
#line 2657 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1151:
#line 2658 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1152:
#line 2661 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1153:
#line 2663 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1154:
#line 2667 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1155:
#line 2668 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1156:
#line 2672 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1157:
#line 2673 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1158:
#line 2674 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1159:
#line 2675 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1160:
#line 2681 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1161:
#line 2682 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1162:
#line 2688 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1163:
#line 2689 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1164:
#line 2690 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1165:
#line 2691 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1168:
#line 2699 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1169:
#line 2701 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1170:
#line 2702 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1171:
#line 2703 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1172:
#line 2707 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1173:
#line 2708 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1174:
#line 2709 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1175:
#line 2710 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1176:
#line 2713 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1177:
#line 2714 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1178:
#line 2717 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1179:
#line 2718 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1180:
#line 2719 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1181:
#line 2722 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1182:
#line 2723 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1183:
#line 2724 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1184:
#line 2727 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1185:
#line 2728 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1187:
#line 2730 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1188:
#line 2731 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1189:
#line 2734 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1190:
#line 2735 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1191:
#line 2736 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1196:
#line 2743 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1197:
#line 2747 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1198:
#line 2749 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1199:
#line 2751 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1201:
#line 2756 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1202:
#line 2758 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1203:
#line 2760 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1213:
#line 2773 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1214:
#line 2774 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1215:
#line 2775 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1216:
#line 2778 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1217:
#line 2779 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1218:
#line 2780 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1219:
#line 2783 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1220:
#line 2784 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1221:
#line 2785 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1222:
#line 2788 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1223:
#line 2789 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1224:
#line 2790 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1226:
#line 2794 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1227:
#line 2795 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1228:
#line 2796 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1229:
#line 2799 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1230:
#line 2800 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1231:
#line 2801 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1232:
#line 2804 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1233:
#line 2805 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1234:
#line 2806 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1235:
#line 2809 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1236:
#line 2810 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1237:
#line 2811 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1238:
#line 2814 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1239:
#line 2815 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1240:
#line 2816 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1241:
#line 2820 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1242:
#line 2822 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1243:
#line 2824 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1244:
#line 2828 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1245:
#line 2832 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1246:
#line 2834 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1247:
#line 2838 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1248:
#line 2841 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1249:
#line 2842 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1250:
#line 2843 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1251:
#line 2844 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1252:
#line 2847 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1253:
#line 2849 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1254:
#line 2850 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1255:
#line 2852 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1257:
#line 2856 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1258:
#line 2857 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1259:
#line 2858 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1260:
#line 2861 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1261:
#line 2862 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1262:
#line 2866 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1264:
#line 2868 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1267:
#line 2873 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1268:
#line 2874 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1269:
#line 2875 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1270:
#line 2878 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1271:
#line 2879 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1272:
#line 2880 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1273:
#line 2883 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1274:
#line 2885 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1275:
#line 2890 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1276:
#line 2893 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1277:
#line 2900 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1278:
#line 2902 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1279:
#line 2904 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1280:
#line 2909 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1282:
#line 2913 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1283:
#line 2914 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1284:
#line 2915 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1285:
#line 2917 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1286:
#line 2919 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1287:
#line 2924 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11083 "frame/parser.C"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (fr, ll, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (fr, ll, yymsg);
	  }
	else
	  {
	    yyerror (fr, ll, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, fr, ll);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, fr, ll);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (fr, ll, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, fr, ll);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, fr, ll);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 2928 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

