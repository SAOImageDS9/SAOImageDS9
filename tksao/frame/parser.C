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
     ANGDEGREE = 261,
     ANGRADIAN = 262,
     SEXSTR = 263,
     HMSSTR = 264,
     DMSSTR = 265,
     ABOUT_ = 266,
     AIP_ = 267,
     ALLOC_ = 268,
     ALLOCGZ_ = 269,
     ALIGN_ = 270,
     ALL_ = 271,
     ALT_ = 272,
     AMPLIFIER_ = 273,
     ANALYSIS_ = 274,
     ANGLE_ = 275,
     ANNULUS_ = 276,
     APPEND_ = 277,
     ARCMIN_ = 278,
     ARCSEC_ = 279,
     ARRAY_ = 280,
     ARROW_ = 281,
     ASINH_ = 282,
     AST_ = 283,
     AUTO_ = 284,
     AUX_ = 285,
     AVERAGE_ = 286,
     AXES_ = 287,
     AZIMUTH_ = 288,
     B1950_ = 289,
     BACK_ = 290,
     BACKGROUND_ = 291,
     BASE_ = 292,
     BBOX_ = 293,
     BEGIN_ = 294,
     BG_ = 295,
     BIG_ = 296,
     BIGENDIAN_ = 297,
     BIN_ = 298,
     BITPIX_ = 299,
     BLEND_ = 300,
     BLOCK_ = 301,
     BORDER_ = 302,
     BOX_ = 303,
     BOXANNULUS_ = 304,
     BOXCAR_ = 305,
     BOXCIRCLE_ = 306,
     BPANDA_ = 307,
     BUFFER_ = 308,
     BW_ = 309,
     CALLBACK_ = 310,
     CANVAS_ = 311,
     CATALOG_ = 312,
     CELESTIAL_ = 313,
     CENTER_ = 314,
     CENTROID_ = 315,
     CHANNEL_ = 316,
     CIRCLE_ = 317,
     CIAO_ = 318,
     CLEAR_ = 319,
     CLIP_ = 320,
     COLOR_ = 321,
     COLORBAR_ = 322,
     COLORMAP_ = 323,
     COLORSCALE_ = 324,
     COLORSPACE_ = 325,
     COLS_ = 326,
     COLUMN_ = 327,
     COMMAND_ = 328,
     COMPASS_ = 329,
     COMPOSITE_ = 330,
     COMPRESS_ = 331,
     CONTOUR_ = 332,
     CONTRAST_ = 333,
     COORDINATES_ = 334,
     COPY_ = 335,
     COUNT_ = 336,
     CPANDA_ = 337,
     CREATE_ = 338,
     CROP_ = 339,
     CROSS_ = 340,
     CROSSHAIR_ = 341,
     CUBE_ = 342,
     CURSOR_ = 343,
     CUT_ = 344,
     CMYK_ = 345,
     DARKEN_ = 346,
     DASH_ = 347,
     DASHLIST_ = 348,
     DATA_ = 349,
     DATAMIN_ = 350,
     DATASEC_ = 351,
     DEBUG_ = 352,
     DEGREES_ = 353,
     DEFAULT_ = 354,
     DELETE_ = 355,
     DEPTH_ = 356,
     DETECTOR_ = 357,
     DIAMOND_ = 358,
     DIM_ = 359,
     DS9_ = 360,
     EDIT_ = 361,
     ECLIPTIC_ = 362,
     ELEVATION_ = 363,
     ELLIPTIC_ = 364,
     ELLIPSE_ = 365,
     ELLIPSEANNULUS_ = 366,
     END_ = 367,
     ENVI_ = 368,
     EPANDA_ = 369,
     EPSILON_ = 370,
     EQUATORIAL_ = 371,
     ERASE_ = 372,
     EXT_ = 373,
     FADE_ = 374,
     FACTOR_ = 375,
     FALSE_ = 376,
     FILE_ = 377,
     FILL_ = 378,
     FILTER_ = 379,
     FIRST_ = 380,
     FIT_ = 381,
     FITS_ = 382,
     FITSY_ = 383,
     FIXED_ = 384,
     FK4_ = 385,
     FK5_ = 386,
     FONT_ = 387,
     FORMAT_ = 388,
     FOOTPRINT_ = 389,
     FROM_ = 390,
     FRONT_ = 391,
     FULL_ = 392,
     FUNCTION_ = 393,
     GALACTIC_ = 394,
     GAUSSIAN_ = 395,
     GET_ = 396,
     GLOBAL_ = 397,
     GRAPHICS_ = 398,
     GRAY_ = 399,
     GRID_ = 400,
     GZ_ = 401,
     HANDLE_ = 402,
     HAS_ = 403,
     HEAD_ = 404,
     HEADER_ = 405,
     HEIGHT_ = 406,
     HIDE_ = 407,
     HIGHLITE_ = 408,
     HISTEQU_ = 409,
     HISTOGRAM_ = 410,
     HORIZONTAL_ = 411,
     ICRS_ = 412,
     ID_ = 413,
     IIS_ = 414,
     IMAGE_ = 415,
     INCLUDE_ = 416,
     INCR_ = 417,
     INFO_ = 418,
     ITERATION_ = 419,
     IRAF_ = 420,
     IRAFMIN_ = 421,
     J2000_ = 422,
     KEY_ = 423,
     KEYWORD_ = 424,
     LABEL_ = 425,
     LAST_ = 426,
     LENGTH_ = 427,
     LEVEL_ = 428,
     LIGHTEN_ = 429,
     LITTLE_ = 430,
     LITTLEENDIAN_ = 431,
     LINE_ = 432,
     LINEAR_ = 433,
     LIST_ = 434,
     LOAD_ = 435,
     LOCAL_ = 436,
     LOG_ = 437,
     MACOSX_ = 438,
     MAGNIFIER_ = 439,
     MATCH_ = 440,
     MAP_ = 441,
     MARK_ = 442,
     MARKER_ = 443,
     MASK_ = 444,
     MEDIAN_ = 445,
     MESSAGE_ = 446,
     METHOD_ = 447,
     MINMAX_ = 448,
     MINOR_ = 449,
     MIP_ = 450,
     MMAP_ = 451,
     MMAPINCR_ = 452,
     MOSAIC_ = 453,
     MODE_ = 454,
     MOTION_ = 455,
     MOVE_ = 456,
     NAME_ = 457,
     NAN_ = 458,
     NATIVE_ = 459,
     NAXES_ = 460,
     NEW_ = 461,
     NEXT_ = 462,
     NO_ = 463,
     NONE_ = 464,
     NONNAN_ = 465,
     NONZERO_ = 466,
     NOW_ = 467,
     NRRD_ = 468,
     NUMBER_ = 469,
     OBJECT_ = 470,
     OFF_ = 471,
     ON_ = 472,
     ONLY_ = 473,
     OPTION_ = 474,
     ORIENT_ = 475,
     PAN_ = 476,
     PANNER_ = 477,
     PARSER_ = 478,
     PASTE_ = 479,
     PERF_ = 480,
     PHOTO_ = 481,
     PHYSICAL_ = 482,
     PIXEL_ = 483,
     PLOT2D_ = 484,
     PLOT3D_ = 485,
     POINT_ = 486,
     POINTER_ = 487,
     POLYGON_ = 488,
     POSTSCRIPT_ = 489,
     POW_ = 490,
     PRECISION_ = 491,
     PRINT_ = 492,
     PRESERVE_ = 493,
     PROJECTION_ = 494,
     PROPERTY_ = 495,
     PUBLICATION_ = 496,
     PROS_ = 497,
     QUERY_ = 498,
     RADIAL_ = 499,
     RADIUS_ = 500,
     RANGE_ = 501,
     REGION_ = 502,
     REPLACE_ = 503,
     RESAMPLE_ = 504,
     RESCAN_ = 505,
     RESET_ = 506,
     RESOLUTION_ = 507,
     RGB_ = 508,
     ROOT_ = 509,
     ROTATE_ = 510,
     RULER_ = 511,
     SAMPLE_ = 512,
     SAOIMAGE_ = 513,
     SAOTNG_ = 514,
     SAVE_ = 515,
     SCALE_ = 516,
     SCAN_ = 517,
     SCIENTIFIC_ = 518,
     SCOPE_ = 519,
     SCREEN_ = 520,
     SEGMENT_ = 521,
     SELECT_ = 522,
     SET_ = 523,
     SEXAGESIMAL_ = 524,
     SHAPE_ = 525,
     SHARED_ = 526,
     SHIFT_ = 527,
     SHMID_ = 528,
     SHOW_ = 529,
     SIGMA_ = 530,
     SINH_ = 531,
     SIZE_ = 532,
     SLICE_ = 533,
     SMMAP_ = 534,
     SMOOTH_ = 535,
     SOCKET_ = 536,
     SOCKETGZ_ = 537,
     SOURCE_ = 538,
     SQRT_ = 539,
     SQUARED_ = 540,
     SSHARED_ = 541,
     STATS_ = 542,
     STATUS_ = 543,
     SUM_ = 544,
     SYSTEM_ = 545,
     TABLE_ = 546,
     TAG_ = 547,
     TEMPLATE_ = 548,
     TEXT_ = 549,
     THREADS_ = 550,
     THREED_ = 551,
     THRESHOLD_ = 552,
     THICK_ = 553,
     TRANSPARENCY_ = 554,
     TO_ = 555,
     TOGGLE_ = 556,
     TOPHAT_ = 557,
     TRUE_ = 558,
     TYPE_ = 559,
     UNDO_ = 560,
     UNHIGHLITE_ = 561,
     UNLOAD_ = 562,
     UNSELECT_ = 563,
     UPDATE_ = 564,
     USER_ = 565,
     VALUE_ = 566,
     VAR_ = 567,
     VIEW_ = 568,
     VECTOR_ = 569,
     VERSION_ = 570,
     VERTEX_ = 571,
     VERTICAL_ = 572,
     WARP_ = 573,
     WCS_ = 574,
     WCSA_ = 575,
     WCSB_ = 576,
     WCSC_ = 577,
     WCSD_ = 578,
     WCSE_ = 579,
     WCSF_ = 580,
     WCSG_ = 581,
     WCSH_ = 582,
     WCSI_ = 583,
     WCSJ_ = 584,
     WCSK_ = 585,
     WCSL_ = 586,
     WCSM_ = 587,
     WCSN_ = 588,
     WCSO_ = 589,
     WCSP_ = 590,
     WCSQ_ = 591,
     WCSR_ = 592,
     WCSS_ = 593,
     WCST_ = 594,
     WCSU_ = 595,
     WCSV_ = 596,
     WCSW_ = 597,
     WCSX_ = 598,
     WCSY_ = 599,
     WCSZ_ = 600,
     WCS0_ = 601,
     WFPC2_ = 602,
     WIDTH_ = 603,
     WIN32_ = 604,
     XML_ = 605,
     XY_ = 606,
     YES_ = 607,
     ZERO_ = 608,
     ZMAX_ = 609,
     ZSCALE_ = 610,
     ZOOM_ = 611
   };
#endif
/* Tokens.  */
#define REAL 258
#define INT 259
#define STRING 260
#define ANGDEGREE 261
#define ANGRADIAN 262
#define SEXSTR 263
#define HMSSTR 264
#define DMSSTR 265
#define ABOUT_ 266
#define AIP_ 267
#define ALLOC_ 268
#define ALLOCGZ_ 269
#define ALIGN_ 270
#define ALL_ 271
#define ALT_ 272
#define AMPLIFIER_ 273
#define ANALYSIS_ 274
#define ANGLE_ 275
#define ANNULUS_ 276
#define APPEND_ 277
#define ARCMIN_ 278
#define ARCSEC_ 279
#define ARRAY_ 280
#define ARROW_ 281
#define ASINH_ 282
#define AST_ 283
#define AUTO_ 284
#define AUX_ 285
#define AVERAGE_ 286
#define AXES_ 287
#define AZIMUTH_ 288
#define B1950_ 289
#define BACK_ 290
#define BACKGROUND_ 291
#define BASE_ 292
#define BBOX_ 293
#define BEGIN_ 294
#define BG_ 295
#define BIG_ 296
#define BIGENDIAN_ 297
#define BIN_ 298
#define BITPIX_ 299
#define BLEND_ 300
#define BLOCK_ 301
#define BORDER_ 302
#define BOX_ 303
#define BOXANNULUS_ 304
#define BOXCAR_ 305
#define BOXCIRCLE_ 306
#define BPANDA_ 307
#define BUFFER_ 308
#define BW_ 309
#define CALLBACK_ 310
#define CANVAS_ 311
#define CATALOG_ 312
#define CELESTIAL_ 313
#define CENTER_ 314
#define CENTROID_ 315
#define CHANNEL_ 316
#define CIRCLE_ 317
#define CIAO_ 318
#define CLEAR_ 319
#define CLIP_ 320
#define COLOR_ 321
#define COLORBAR_ 322
#define COLORMAP_ 323
#define COLORSCALE_ 324
#define COLORSPACE_ 325
#define COLS_ 326
#define COLUMN_ 327
#define COMMAND_ 328
#define COMPASS_ 329
#define COMPOSITE_ 330
#define COMPRESS_ 331
#define CONTOUR_ 332
#define CONTRAST_ 333
#define COORDINATES_ 334
#define COPY_ 335
#define COUNT_ 336
#define CPANDA_ 337
#define CREATE_ 338
#define CROP_ 339
#define CROSS_ 340
#define CROSSHAIR_ 341
#define CUBE_ 342
#define CURSOR_ 343
#define CUT_ 344
#define CMYK_ 345
#define DARKEN_ 346
#define DASH_ 347
#define DASHLIST_ 348
#define DATA_ 349
#define DATAMIN_ 350
#define DATASEC_ 351
#define DEBUG_ 352
#define DEGREES_ 353
#define DEFAULT_ 354
#define DELETE_ 355
#define DEPTH_ 356
#define DETECTOR_ 357
#define DIAMOND_ 358
#define DIM_ 359
#define DS9_ 360
#define EDIT_ 361
#define ECLIPTIC_ 362
#define ELEVATION_ 363
#define ELLIPTIC_ 364
#define ELLIPSE_ 365
#define ELLIPSEANNULUS_ 366
#define END_ 367
#define ENVI_ 368
#define EPANDA_ 369
#define EPSILON_ 370
#define EQUATORIAL_ 371
#define ERASE_ 372
#define EXT_ 373
#define FADE_ 374
#define FACTOR_ 375
#define FALSE_ 376
#define FILE_ 377
#define FILL_ 378
#define FILTER_ 379
#define FIRST_ 380
#define FIT_ 381
#define FITS_ 382
#define FITSY_ 383
#define FIXED_ 384
#define FK4_ 385
#define FK5_ 386
#define FONT_ 387
#define FORMAT_ 388
#define FOOTPRINT_ 389
#define FROM_ 390
#define FRONT_ 391
#define FULL_ 392
#define FUNCTION_ 393
#define GALACTIC_ 394
#define GAUSSIAN_ 395
#define GET_ 396
#define GLOBAL_ 397
#define GRAPHICS_ 398
#define GRAY_ 399
#define GRID_ 400
#define GZ_ 401
#define HANDLE_ 402
#define HAS_ 403
#define HEAD_ 404
#define HEADER_ 405
#define HEIGHT_ 406
#define HIDE_ 407
#define HIGHLITE_ 408
#define HISTEQU_ 409
#define HISTOGRAM_ 410
#define HORIZONTAL_ 411
#define ICRS_ 412
#define ID_ 413
#define IIS_ 414
#define IMAGE_ 415
#define INCLUDE_ 416
#define INCR_ 417
#define INFO_ 418
#define ITERATION_ 419
#define IRAF_ 420
#define IRAFMIN_ 421
#define J2000_ 422
#define KEY_ 423
#define KEYWORD_ 424
#define LABEL_ 425
#define LAST_ 426
#define LENGTH_ 427
#define LEVEL_ 428
#define LIGHTEN_ 429
#define LITTLE_ 430
#define LITTLEENDIAN_ 431
#define LINE_ 432
#define LINEAR_ 433
#define LIST_ 434
#define LOAD_ 435
#define LOCAL_ 436
#define LOG_ 437
#define MACOSX_ 438
#define MAGNIFIER_ 439
#define MATCH_ 440
#define MAP_ 441
#define MARK_ 442
#define MARKER_ 443
#define MASK_ 444
#define MEDIAN_ 445
#define MESSAGE_ 446
#define METHOD_ 447
#define MINMAX_ 448
#define MINOR_ 449
#define MIP_ 450
#define MMAP_ 451
#define MMAPINCR_ 452
#define MOSAIC_ 453
#define MODE_ 454
#define MOTION_ 455
#define MOVE_ 456
#define NAME_ 457
#define NAN_ 458
#define NATIVE_ 459
#define NAXES_ 460
#define NEW_ 461
#define NEXT_ 462
#define NO_ 463
#define NONE_ 464
#define NONNAN_ 465
#define NONZERO_ 466
#define NOW_ 467
#define NRRD_ 468
#define NUMBER_ 469
#define OBJECT_ 470
#define OFF_ 471
#define ON_ 472
#define ONLY_ 473
#define OPTION_ 474
#define ORIENT_ 475
#define PAN_ 476
#define PANNER_ 477
#define PARSER_ 478
#define PASTE_ 479
#define PERF_ 480
#define PHOTO_ 481
#define PHYSICAL_ 482
#define PIXEL_ 483
#define PLOT2D_ 484
#define PLOT3D_ 485
#define POINT_ 486
#define POINTER_ 487
#define POLYGON_ 488
#define POSTSCRIPT_ 489
#define POW_ 490
#define PRECISION_ 491
#define PRINT_ 492
#define PRESERVE_ 493
#define PROJECTION_ 494
#define PROPERTY_ 495
#define PUBLICATION_ 496
#define PROS_ 497
#define QUERY_ 498
#define RADIAL_ 499
#define RADIUS_ 500
#define RANGE_ 501
#define REGION_ 502
#define REPLACE_ 503
#define RESAMPLE_ 504
#define RESCAN_ 505
#define RESET_ 506
#define RESOLUTION_ 507
#define RGB_ 508
#define ROOT_ 509
#define ROTATE_ 510
#define RULER_ 511
#define SAMPLE_ 512
#define SAOIMAGE_ 513
#define SAOTNG_ 514
#define SAVE_ 515
#define SCALE_ 516
#define SCAN_ 517
#define SCIENTIFIC_ 518
#define SCOPE_ 519
#define SCREEN_ 520
#define SEGMENT_ 521
#define SELECT_ 522
#define SET_ 523
#define SEXAGESIMAL_ 524
#define SHAPE_ 525
#define SHARED_ 526
#define SHIFT_ 527
#define SHMID_ 528
#define SHOW_ 529
#define SIGMA_ 530
#define SINH_ 531
#define SIZE_ 532
#define SLICE_ 533
#define SMMAP_ 534
#define SMOOTH_ 535
#define SOCKET_ 536
#define SOCKETGZ_ 537
#define SOURCE_ 538
#define SQRT_ 539
#define SQUARED_ 540
#define SSHARED_ 541
#define STATS_ 542
#define STATUS_ 543
#define SUM_ 544
#define SYSTEM_ 545
#define TABLE_ 546
#define TAG_ 547
#define TEMPLATE_ 548
#define TEXT_ 549
#define THREADS_ 550
#define THREED_ 551
#define THRESHOLD_ 552
#define THICK_ 553
#define TRANSPARENCY_ 554
#define TO_ 555
#define TOGGLE_ 556
#define TOPHAT_ 557
#define TRUE_ 558
#define TYPE_ 559
#define UNDO_ 560
#define UNHIGHLITE_ 561
#define UNLOAD_ 562
#define UNSELECT_ 563
#define UPDATE_ 564
#define USER_ 565
#define VALUE_ 566
#define VAR_ 567
#define VIEW_ 568
#define VECTOR_ 569
#define VERSION_ 570
#define VERTEX_ 571
#define VERTICAL_ 572
#define WARP_ 573
#define WCS_ 574
#define WCSA_ 575
#define WCSB_ 576
#define WCSC_ 577
#define WCSD_ 578
#define WCSE_ 579
#define WCSF_ 580
#define WCSG_ 581
#define WCSH_ 582
#define WCSI_ 583
#define WCSJ_ 584
#define WCSK_ 585
#define WCSL_ 586
#define WCSM_ 587
#define WCSN_ 588
#define WCSO_ 589
#define WCSP_ 590
#define WCSQ_ 591
#define WCSR_ 592
#define WCSS_ 593
#define WCST_ 594
#define WCSU_ 595
#define WCSV_ 596
#define WCSW_ 597
#define WCSX_ 598
#define WCSY_ 599
#define WCSZ_ 600
#define WCS0_ 601
#define WFPC2_ 602
#define WIDTH_ 603
#define WIN32_ 604
#define XML_ 605
#define XY_ 606
#define YES_ 607
#define ZERO_ 608
#define ZMAX_ 609
#define ZSCALE_ 610
#define ZOOM_ 611




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
#line 870 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 883 "frame/parser.C"

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
#define YYLAST   5510

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  361
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  222
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1280
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2809

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   611

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
       2,   360,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   358,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   359,   357,
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
     355,   356
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
     698,   701,   703,   707,   710,   713,   716,   722,   732,   734,
     737,   739,   745,   755,   757,   760,   763,   766,   769,   772,
     775,   789,   803,   816,   829,   831,   832,   834,   836,   841,
     848,   850,   852,   854,   856,   858,   860,   862,   864,   866,
     871,   875,   880,   881,   888,   897,   900,   904,   908,   912,
     913,   918,   923,   928,   933,   937,   941,   943,   947,   953,
     958,   963,   967,   970,   971,   973,   975,   977,   979,   981,
     985,   986,   989,   992,   995,   998,  1001,  1004,  1007,  1010,
    1013,  1016,  1019,  1022,  1025,  1028,  1030,  1033,  1036,  1039,
    1044,  1048,  1051,  1054,  1057,  1059,  1063,  1066,  1069,  1071,
    1074,  1083,  1086,  1088,  1091,  1093,  1096,  1098,  1103,  1107,
    1110,  1112,  1120,  1129,  1137,  1146,  1148,  1150,  1152,  1155,
    1157,  1159,  1162,  1164,  1165,  1168,  1171,  1173,  1174,  1177,
    1180,  1182,  1184,  1187,  1190,  1193,  1195,  1197,  1199,  1201,
    1203,  1205,  1206,  1208,  1211,  1213,  1218,  1224,  1225,  1228,
    1230,  1236,  1239,  1242,  1244,  1246,  1248,  1251,  1253,  1256,
    1258,  1260,  1261,  1263,  1265,  1266,  1268,  1274,  1281,  1285,
    1292,  1296,  1298,  1302,  1304,  1306,  1308,  1312,  1319,  1327,
    1333,  1336,  1338,  1344,  1349,  1351,  1355,  1356,  1358,  1361,
    1363,  1368,  1370,  1373,  1375,  1378,  1382,  1385,  1387,  1390,
    1392,  1397,  1400,  1402,  1404,  1408,  1410,  1413,  1417,  1420,
    1421,  1423,  1425,  1430,  1433,  1434,  1436,  1440,  1445,  1450,
    1451,  1453,  1455,  1457,  1459,  1461,  1463,  1465,  1467,  1469,
    1471,  1473,  1475,  1477,  1479,  1481,  1484,  1486,  1489,  1491,
    1494,  1497,  1500,  1503,  1505,  1507,  1509,  1510,  1512,  1513,
    1515,  1516,  1518,  1519,  1521,  1522,  1525,  1528,  1529,  1531,
    1534,  1536,  1543,  1549,  1551,  1553,  1555,  1558,  1561,  1564,
    1566,  1568,  1570,  1572,  1575,  1577,  1579,  1581,  1584,  1586,
    1588,  1590,  1593,  1596,  1599,  1600,  1602,  1603,  1605,  1607,
    1609,  1611,  1613,  1615,  1617,  1619,  1622,  1625,  1628,  1630,
    1633,  1637,  1639,  1642,  1645,  1650,  1656,  1658,  1669,  1671,
    1674,  1678,  1682,  1685,  1688,  1691,  1694,  1697,  1700,  1703,
    1708,  1713,  1718,  1722,  1726,  1732,  1737,  1742,  1747,  1751,
    1755,  1759,  1763,  1766,  1769,  1774,  1778,  1782,  1786,  1790,
    1795,  1800,  1805,  1810,  1816,  1821,  1828,  1836,  1841,  1846,
    1852,  1855,  1859,  1863,  1867,  1870,  1874,  1878,  1882,  1886,
    1891,  1895,  1901,  1908,  1912,  1916,  1921,  1925,  1929,  1933,
    1937,  1941,  1947,  1951,  1955,  1960,  1964,  1967,  1970,  1972,
    1976,  1981,  1986,  1991,  1996,  2001,  2008,  2013,  2018,  2024,
    2029,  2034,  2039,  2044,  2050,  2055,  2062,  2070,  2075,  2080,
    2086,  2092,  2098,  2104,  2110,  2116,  2124,  2130,  2136,  2143,
    2148,  2153,  2158,  2163,  2168,  2175,  2180,  2185,  2191,  2197,
    2203,  2209,  2215,  2222,  2228,  2236,  2245,  2251,  2257,  2264,
    2268,  2272,  2276,  2280,  2285,  2289,  2295,  2302,  2306,  2310,
    2315,  2319,  2323,  2327,  2331,  2335,  2341,  2345,  2349,  2354,
    2359,  2364,  2368,  2374,  2379,  2384,  2387,  2391,  2398,  2405,
    2407,  2409,  2411,  2414,  2417,  2420,  2424,  2428,  2431,  2444,
    2447,  2450,  2452,  2456,  2461,  2464,  2465,  2469,  2471,  2474,
    2477,  2480,  2483,  2486,  2491,  2496,  2501,  2505,  2510,  2516,
    2525,  2532,  2542,  2549,  2557,  2568,  2580,  2593,  2603,  2609,
    2616,  2620,  2626,  2632,  2639,  2645,  2650,  2660,  2671,  2683,
    2693,  2700,  2707,  2714,  2721,  2728,  2735,  2742,  2749,  2756,
    2764,  2772,  2775,  2780,  2785,  2790,  2795,  2801,  2806,  2811,
    2817,  2823,  2827,  2832,  2837,  2842,  2850,  2860,  2867,  2878,
    2890,  2903,  2913,  2917,  2920,  2924,  2930,  2938,  2943,  2947,
    2951,  2958,  2966,  2974,  2979,  2984,  2994,  2999,  3003,  3008,
    3016,  3024,  3027,  3031,  3035,  3039,  3044,  3047,  3050,  3055,
    3066,  3070,  3072,  3076,  3079,  3082,  3085,  3088,  3092,  3098,
    3103,  3109,  3112,  3115,  3118,  3121,  3125,  3128,  3131,  3134,
    3138,  3141,  3145,  3150,  3154,  3158,  3165,  3170,  3173,  3177,
    3180,  3183,  3188,  3192,  3196,  3199,  3203,  3205,  3208,  3210,
    3213,  3216,  3219,  3221,  3223,  3225,  3227,  3230,  3232,  3235,
    3238,  3240,  3243,  3246,  3248,  3251,  3253,  3255,  3257,  3259,
    3261,  3263,  3265,  3267,  3268,  3270,  3273,  3276,  3279,  3283,
    3289,  3297,  3305,  3312,  3319,  3326,  3333,  3339,  3346,  3353,
    3360,  3367,  3374,  3381,  3388,  3400,  3408,  3416,  3424,  3434,
    3444,  3455,  3468,  3481,  3484,  3487,  3491,  3496,  3501,  3506,
    3507,  3509,  3511,  3516,  3521,  3523,  3525,  3527,  3529,  3531,
    3533,  3535,  3537,  3540,  3542,  3544,  3546,  3550,  3554,  3563,
    3570,  3581,  3589,  3597,  3603,  3606,  3609,  3613,  3618,  3624,
    3630,  3636,  3640,  3645,  3651,  3657,  3663,  3669,  3672,  3676,
    3680,  3686,  3690,  3694,  3698,  3703,  3709,  3715,  3721,  3727,
    3731,  3736,  3742,  3748,  3751,  3754,  3758,  3764,  3771,  3778,
    3782,  3786,  3793,  3799,  3805,  3808,  3812,  3816,  3822,  3829,
    3833,  3836,  3839,  3843,  3846,  3850,  3853,  3857,  3863,  3870,
    3873,  3876,  3879,  3881,  3886,  3891,  3893,  3896,  3899,  3902,
    3905,  3908,  3911,  3914,  3918,  3921,  3925,  3928,  3932,  3934,
    3936,  3938,  3940,  3942,  3943,  3946,  3947,  3950,  3951,  3953,
    3954,  3955,  3957,  3959,  3961,  3963,  3965,  3973,  3982,  3985,
    3992,  3995,  4002,  4005,  4009,  4012,  4014,  4016,  4020,  4024,
    4026,  4031,  4034,  4036,  4040,  4044,  4049,  4053,  4057,  4061,
    4063,  4065,  4067,  4069,  4071,  4073,  4075,  4077,  4079,  4081,
    4083,  4085,  4087,  4089,  4091,  4094,  4095,  4096,  4099,  4106,
    4114,  4117,  4119,  4123,  4125,  4129,  4131,  4133,  4135,  4138,
    4141,  4143,  4147,  4148,  4149,  4152,  4155,  4157,  4161,  4167,
    4169,  4172,  4175,  4179,  4182,  4185,  4188,  4191,  4193,  4195,
    4197,  4199,  4204,  4207,  4211,  4215,  4218,  4222,  4225,  4228,
    4231,  4235,  4239,  4243,  4246,  4250,  4252,  4256,  4260,  4262,
    4265,  4268,  4271,  4274,  4284,  4291,  4293,  4295,  4297,  4299,
    4302,  4305,  4309,  4313,  4315,  4318,  4322,  4326,  4328,  4331,
    4333,  4335,  4337,  4339,  4341,  4344,  4347,  4352,  4354,  4357,
    4360,  4363,  4367,  4369,  4371,  4373,  4376,  4379,  4382,  4385,
    4388,  4392,  4396,  4400,  4404,  4408,  4412,  4416,  4418,  4421,
    4424,  4427,  4431,  4434,  4438,  4442,  4445,  4448,  4451,  4454,
    4457,  4460,  4463,  4466,  4469,  4472,  4475,  4478,  4481,  4484,
    4488,  4492,  4496,  4499,  4502,  4505,  4508,  4511,  4514,  4517,
    4520,  4523,  4526,  4529,  4532,  4536,  4540,  4544,  4549,  4556,
    4559,  4561,  4563,  4565,  4567,  4569,  4570,  4576,  4578,  4585,
    4589,  4591,  4594,  4597,  4600,  4604,  4608,  4611,  4614,  4617,
    4620,  4623,  4626,  4630,  4633,  4636,  4640,  4642,  4646,  4651,
    4653,  4656,  4662,  4669,  4676,  4679,  4681,  4684,  4687,  4693,
    4700
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     362,     0,    -1,    97,   364,    -1,    43,   396,    -1,    40,
      66,     5,    -1,    40,    66,   144,    -1,    40,    66,   365,
      -1,    46,   401,    -1,    59,    -1,    64,    -1,    65,   403,
      -1,    67,   292,     5,    -1,    68,   408,    -1,    69,   410,
      -1,    77,   411,    -1,    84,   420,    -1,    86,   422,    -1,
      87,   423,    -1,    96,   365,    -1,   119,   425,    -1,   128,
     426,    -1,   141,   427,    -1,   145,   471,    -1,   148,   474,
      -1,   152,    -1,   153,   365,    -1,   153,    66,     5,    -1,
     159,   480,    -1,   165,    15,     4,    -1,   180,   483,    -1,
     183,   501,    -1,   184,   502,    -1,   185,   503,    -1,   188,
     519,   504,    -1,   189,   539,    -1,   203,    66,     5,    -1,
     203,    66,   144,    -1,   220,   540,    -1,   221,   541,    -1,
     222,   544,    -1,   243,    88,    -1,   236,   546,    -1,   234,
     545,    -1,   251,    -1,   247,   519,   548,    -1,   253,   553,
      -1,   255,   554,    -1,   260,   556,    -1,   274,    -1,   280,
     571,    -1,   295,     4,    -1,   296,   391,    -1,   307,    -1,
     309,   573,    -1,   315,    -1,   318,   575,    -1,   319,   576,
      -1,   349,   580,    -1,   356,   581,    -1,     3,    -1,     4,
      -1,   365,    -1,   198,   365,    -1,   223,   365,    -1,   225,
     365,    -1,   319,   365,    -1,    43,   365,    -1,    46,   365,
      -1,    76,   365,    -1,    84,   365,    -1,   146,   365,    -1,
     253,   365,    -1,     4,    -1,   352,    -1,   357,    -1,   217,
      -1,   303,    -1,   208,    -1,   358,    -1,   216,    -1,   121,
      -1,    -1,   254,    37,    -1,   137,    37,    -1,   254,    -1,
     137,    -1,    -1,   368,    -1,   363,    -1,     6,    -1,     7,
      -1,     8,    -1,     9,    -1,    10,    -1,   369,   369,    -1,
     370,   371,    -1,   371,   371,    -1,   363,   363,    -1,   160,
      -1,   227,    -1,   102,    -1,    18,    -1,   374,    -1,   319,
      -1,   320,    -1,   321,    -1,   322,    -1,   323,    -1,   324,
      -1,   325,    -1,   326,    -1,   327,    -1,   328,    -1,   329,
      -1,   330,    -1,   331,    -1,   332,    -1,   333,    -1,   334,
      -1,   335,    -1,   336,    -1,   337,    -1,   338,    -1,   339,
      -1,   340,    -1,   341,    -1,   342,    -1,   343,    -1,   344,
      -1,   345,    -1,   346,    -1,    56,    -1,   222,    -1,    -1,
     353,    -1,   211,    -1,   203,    -1,   210,    -1,   246,    -1,
      -1,   283,    -1,   265,    -1,    91,    -1,   174,    -1,   178,
      -1,   182,    -1,   235,    -1,   284,    -1,   285,    -1,    27,
      -1,   276,    -1,   154,    -1,    29,    -1,   262,    -1,   257,
      -1,    95,    -1,   166,    -1,    -1,   130,    -1,    34,    -1,
     131,    -1,   167,    -1,   157,    -1,   139,    -1,   107,    -1,
      -1,    98,    -1,   269,    -1,    -1,    98,    -1,    23,    -1,
      24,    -1,    -1,   273,    -1,   168,    -1,    -1,    16,    -1,
     162,    -1,    -1,   160,    -1,   189,    -1,    -1,    62,    -1,
      48,    -1,   103,    -1,    85,    -1,   359,    -1,    26,    -1,
      51,    -1,    -1,     4,    -1,    82,    -1,   155,    -1,   229,
      -1,   230,    -1,   244,    -1,   287,    -1,    -1,    31,    -1,
     289,    -1,   190,    -1,    -1,   204,    -1,    41,    -1,    42,
      -1,   175,    -1,   176,    -1,   313,   395,    -1,    47,   392,
      -1,    74,   393,    -1,   153,   394,    -1,   192,   551,    -1,
      36,   552,    -1,   261,   363,    -1,   297,   363,    -1,   365,
      -1,    66,     5,    -1,   365,    -1,    66,     5,    -1,   365,
      -1,    66,     5,    -1,   363,   363,    -1,   231,   363,   363,
     363,   363,   363,    -1,    11,   397,    -1,    71,     5,     5,
       5,    -1,   101,     4,    -1,   120,   398,    -1,   138,   399,
      -1,    53,   277,     4,    -1,   300,   400,    -1,   124,     5,
      -1,    59,    -1,   363,   363,    -1,   363,    -1,   363,   363,
      -1,   363,    11,   363,   363,    -1,   363,   363,    11,   363,
     363,    -1,   300,   363,    -1,   300,   363,   363,    -1,   300,
     363,    11,   363,   363,    -1,   300,   363,   363,    11,   363,
     363,    -1,    31,    -1,   289,    -1,   126,    -1,   363,   363,
      11,    59,     5,     5,     5,    -1,   363,   363,     4,   363,
     363,    11,    59,     5,     5,     5,     5,    -1,   363,   363,
      11,   363,   363,     5,     5,     5,    -1,   363,   363,     4,
     363,   363,    11,   363,   363,     5,     5,     5,     5,    -1,
     363,    -1,   363,   363,    -1,   300,   402,    -1,   126,    -1,
     363,    -1,   363,   363,    -1,   264,   404,    -1,   199,   405,
      -1,   193,   406,    -1,   310,   363,   363,    -1,   310,   203,
     203,    -1,   355,   407,    -1,   238,   365,    -1,   142,    -1,
     181,    -1,   363,    -1,   193,    -1,   355,    -1,   354,    -1,
     310,    -1,     4,   379,    -1,   199,   379,    -1,   257,     4,
      -1,   250,    -1,   363,     4,     4,    -1,    78,   363,    -1,
     257,     4,    -1,   177,     4,    -1,     4,   363,   363,     4,
       4,    -1,   253,   363,   363,   363,   363,   363,   363,     4,
       4,    -1,    39,    -1,   200,   409,    -1,   112,    -1,     4,
     363,   363,     4,     4,    -1,   253,   363,   363,   363,   363,
     363,   363,     4,     4,    -1,   378,    -1,   182,   363,    -1,
      83,   412,    -1,   100,   413,    -1,   180,   414,    -1,   224,
     418,    -1,   260,   419,    -1,     5,     4,     4,   417,     4,
       4,   378,   363,   415,   416,   363,   363,     5,    -1,     5,
       4,     4,   417,     4,     4,   378,   363,   363,   416,   363,
     363,     5,    -1,     5,     4,     4,   417,     4,     4,   378,
     363,   415,   363,   363,     5,    -1,     5,     4,     4,   417,
       4,     4,   378,   363,   363,   363,   363,     5,    -1,   233,
      -1,    -1,    30,    -1,     5,    -1,     5,     5,     4,   365,
      -1,     5,     4,   365,     5,   373,   380,    -1,   193,    -1,
     355,    -1,   354,    -1,   310,    -1,   142,    -1,   181,    -1,
     280,    -1,    46,    -1,     5,    -1,     5,     5,     4,   365,
      -1,     5,   373,   380,    -1,    30,     5,   373,   380,    -1,
      -1,   363,   363,   363,   363,   373,   380,    -1,    59,   372,
     373,   380,   363,   363,   373,   382,    -1,   296,   421,    -1,
      39,   363,   363,    -1,   200,   363,   363,    -1,   112,   363,
     363,    -1,    -1,   363,   363,   373,   380,    -1,    39,   363,
     363,     4,    -1,   200,   363,   363,     4,    -1,   112,   363,
     363,     4,    -1,   375,   363,   363,    -1,   373,   380,   372,
      -1,   365,    -1,   318,   363,   363,    -1,    39,   200,   375,
     363,   363,    -1,   200,   375,   363,   363,    -1,    39,   200,
     373,   372,    -1,   200,   373,   372,    -1,    32,     4,    -1,
      -1,    31,    -1,   289,    -1,   190,    -1,   363,    -1,    64,
      -1,   148,   118,     5,    -1,    -1,    40,    66,    -1,    43,
     430,    -1,    46,   432,    -1,    65,   433,    -1,    68,   437,
      -1,    67,   436,    -1,    69,   439,    -1,    77,   441,    -1,
      79,   444,    -1,    84,   445,    -1,    86,   446,    -1,    88,
     448,    -1,    87,   447,    -1,    94,   449,    -1,    96,    -1,
     127,   453,    -1,   145,   459,    -1,   153,    66,    -1,   155,
       5,     5,     4,    -1,   156,    89,   428,    -1,   159,   451,
      -1,   163,   450,    -1,   165,    15,    -1,   193,    -1,   188,
     519,   513,    -1,   189,   460,    -1,   203,    66,    -1,   220,
      -1,   221,   461,    -1,   228,   291,   375,   363,   363,     4,
       4,     5,    -1,   253,   462,    -1,   255,    -1,   280,   463,
      -1,   295,    -1,   296,   464,    -1,   304,    -1,   311,   375,
     363,   363,    -1,   317,    89,   429,    -1,   319,   469,    -1,
     356,    -1,     5,     5,   363,   363,   375,     4,   424,    -1,
       5,     5,   363,   363,   373,   380,     4,   424,    -1,     5,
       5,   363,   363,   375,     4,   424,    -1,     5,     5,   363,
     363,   373,   380,     4,   424,    -1,   101,    -1,   120,    -1,
     138,    -1,    53,   277,    -1,    88,    -1,   124,    -1,    71,
     431,    -1,   179,    -1,    -1,   193,     5,    -1,   104,     5,
      -1,   120,    -1,    -1,   415,   416,    -1,   363,   416,    -1,
     264,    -1,   199,    -1,   193,   434,    -1,   310,   173,    -1,
     355,   435,    -1,   238,    -1,   199,    -1,   257,    -1,    78,
      -1,   257,    -1,   177,    -1,    -1,   292,    -1,   173,   438,
      -1,     4,    -1,     4,   375,   363,   363,    -1,     4,   363,
     363,   378,   363,    -1,    -1,   173,   440,    -1,   182,    -1,
       4,   363,   363,   378,   363,    -1,   373,   380,    -1,    65,
     442,    -1,    66,    -1,    92,    -1,   173,    -1,   214,   173,
      -1,   192,    -1,    69,   443,    -1,   280,    -1,   348,    -1,
      -1,   199,    -1,   264,    -1,    -1,   182,    -1,   363,   363,
     373,   380,   381,    -1,   375,   363,   363,   373,   380,   381,
      -1,   373,   380,   381,    -1,    59,   373,   380,   381,   373,
     382,    -1,   296,   373,   380,    -1,   375,    -1,   373,   380,
     381,    -1,   288,    -1,    32,    -1,   375,    -1,   373,   380,
     381,    -1,   373,   380,   372,   363,   363,     5,    -1,     4,
     373,   380,   372,   363,   363,     5,    -1,   375,   363,   363,
       4,     4,    -1,     5,   366,    -1,    65,    -1,   375,   363,
     363,     5,   366,    -1,     4,     4,     4,     4,    -1,    88,
      -1,   122,   202,   452,    -1,    -1,     4,    -1,   363,   363,
      -1,   205,    -1,    59,   373,   380,   381,    -1,    81,    -1,
     101,   456,    -1,    44,    -1,   118,   454,    -1,   122,   202,
     457,    -1,   150,   455,    -1,   151,    -1,   215,   202,    -1,
     277,    -1,   277,   373,   380,   382,    -1,   278,   458,    -1,
     348,    -1,     4,    -1,   375,   363,   363,    -1,     4,    -1,
     169,     5,    -1,     4,   169,     5,    -1,   319,     4,    -1,
      -1,     4,    -1,   366,    -1,   366,   375,   363,   363,    -1,
     366,     4,    -1,    -1,     4,    -1,   135,   160,   373,    -1,
     135,   160,     4,   373,    -1,   300,   160,   363,   373,    -1,
      -1,   219,    -1,   312,    -1,    66,    -1,   187,    -1,   246,
      -1,   290,    -1,   299,    -1,    81,    -1,    45,    -1,   238,
      -1,    61,    -1,   290,    -1,   313,    -1,   138,    -1,   245,
      -1,   245,   194,    -1,   275,    -1,   275,   194,    -1,    20,
      -1,   313,   468,    -1,    47,   465,    -1,    74,   466,    -1,
     153,   467,    -1,   192,    -1,    36,    -1,   261,    -1,    -1,
      66,    -1,    -1,    66,    -1,    -1,    66,    -1,    -1,   231,
      -1,    -1,    15,   470,    -1,   202,   374,    -1,    -1,   232,
      -1,    83,   472,    -1,   100,    -1,   373,   380,   381,   473,
       5,     5,    -1,   373,   380,   381,   473,     5,    -1,    19,
      -1,   241,    -1,    18,    -1,    40,    66,    -1,    43,   475,
      -1,    77,   476,    -1,    84,    -1,    95,    -1,    96,    -1,
     102,    -1,   127,   477,    -1,   145,    -1,   159,    -1,   166,
      -1,   188,   478,    -1,   227,    -1,   160,    -1,   280,    -1,
     290,   373,    -1,   319,   479,    -1,    72,     5,    -1,    -1,
      30,    -1,    -1,    43,    -1,    87,    -1,   198,    -1,   153,
      -1,   267,    -1,   224,    -1,   305,    -1,   373,    -1,    58,
     373,    -1,   116,   373,    -1,   178,   373,    -1,    17,    -1,
     296,   373,    -1,   206,     4,     4,    -1,   117,    -1,   191,
       5,    -1,    88,   482,    -1,   268,   122,   202,   481,    -1,
     268,     4,     4,     4,     4,    -1,   309,    -1,   319,   363,
     363,   363,   363,   363,   363,   363,   363,     4,    -1,     5,
      -1,     5,     4,    -1,     4,     4,    56,    -1,     4,     4,
     373,    -1,   199,   365,    -1,    25,   484,    -1,   113,   486,
      -1,   127,   487,    -1,   162,   500,    -1,   213,   498,    -1,
     226,   499,    -1,     5,    13,     5,   385,    -1,     5,    14,
       5,   385,    -1,     5,    61,     5,   385,    -1,     5,   196,
     385,    -1,     5,   197,   385,    -1,     5,   271,   383,     4,
     385,    -1,     5,   281,     4,   385,    -1,     5,   282,     4,
     385,    -1,     5,   312,     5,   385,    -1,   253,    87,   485,
      -1,     5,    13,     5,    -1,     5,    14,     5,    -1,     5,
      61,     5,    -1,     5,   196,    -1,     5,   197,    -1,     5,
     271,   383,     4,    -1,     5,   281,     4,    -1,     5,   282,
       4,    -1,     5,   312,     5,    -1,     5,     5,   279,    -1,
       5,    13,     5,   385,    -1,     5,    14,     5,   385,    -1,
       5,    61,     5,   385,    -1,     5,   196,   384,   385,    -1,
       5,     5,   279,   384,   385,    -1,     5,   197,   384,   385,
      -1,     5,   271,   383,     4,   384,   385,    -1,     5,   286,
     383,     4,     4,   384,   385,    -1,     5,   281,     4,   385,
      -1,     5,   282,     4,   385,    -1,     5,   312,     5,   384,
     385,    -1,   278,   488,    -1,   118,    87,   489,    -1,   253,
     160,   497,    -1,   253,    87,   496,    -1,   198,   490,    -1,
       5,    13,     5,    -1,     5,    14,     5,    -1,     5,    61,
       5,    -1,     5,   196,   384,    -1,     5,     5,   279,   384,
      -1,     5,   197,   384,    -1,     5,   271,   383,     4,   384,
      -1,     5,   286,   383,     4,     4,   384,    -1,     5,   281,
       4,    -1,     5,   282,     4,    -1,     5,   312,     5,   384,
      -1,     5,    13,     5,    -1,     5,    14,     5,    -1,     5,
      61,     5,    -1,     5,   196,   384,    -1,     5,   197,   384,
      -1,     5,   271,   383,     4,   384,    -1,     5,   281,     4,
      -1,     5,   282,     4,    -1,     5,   312,     5,   384,    -1,
     160,   165,   491,    -1,   165,   492,    -1,   160,   493,    -1,
     495,    -1,   160,   347,   494,    -1,     5,    13,     5,   385,
      -1,     5,    14,     5,   385,    -1,     5,    61,     5,   385,
      -1,     5,   196,   384,   385,    -1,     5,   197,   384,   385,
      -1,     5,   271,   383,     4,   384,   385,    -1,     5,   281,
       4,   385,    -1,     5,   282,     4,   385,    -1,     5,   312,
       5,   384,   385,    -1,     5,    13,     5,   385,    -1,     5,
      14,     5,   385,    -1,     5,    61,     5,   385,    -1,     5,
     196,   384,   385,    -1,     5,     5,   279,   384,   385,    -1,
       5,   197,   384,   385,    -1,     5,   271,   383,     4,   384,
     385,    -1,     5,   286,   383,     4,     4,   384,   385,    -1,
       5,   281,     4,   385,    -1,     5,   282,     4,   385,    -1,
       5,   312,     5,   384,   385,    -1,   374,     5,    13,     5,
     385,    -1,   374,     5,    14,     5,   385,    -1,   374,     5,
      61,     5,   385,    -1,   374,     5,   196,   384,   385,    -1,
     374,     5,   197,   384,   385,    -1,   374,     5,   271,   383,
       4,   384,   385,    -1,   374,     5,   281,     4,   385,    -1,
     374,     5,   282,     4,   385,    -1,   374,     5,   312,     5,
     384,   385,    -1,     5,    13,     5,   385,    -1,     5,    14,
       5,   385,    -1,     5,    61,     5,   385,    -1,     5,   196,
     384,   385,    -1,     5,   197,   384,   385,    -1,     5,   271,
     383,     4,   384,   385,    -1,     5,   281,     4,   385,    -1,
       5,   282,     4,   385,    -1,     5,   312,     5,   384,   385,
      -1,   374,     5,    13,     5,   385,    -1,   374,     5,    14,
       5,   385,    -1,   374,     5,    61,     5,   385,    -1,   374,
       5,   196,   384,   385,    -1,   374,     5,     5,   279,   384,
     385,    -1,   374,     5,   197,   384,   385,    -1,   374,     5,
     271,   383,     4,   384,   385,    -1,   374,     5,   286,   383,
       4,     4,   384,   385,    -1,   374,     5,   281,     4,   385,
      -1,   374,     5,   282,     4,   385,    -1,   374,     5,   312,
       5,   384,   385,    -1,     5,    13,     5,    -1,     5,    14,
       5,    -1,     5,    61,     5,    -1,     5,   196,   384,    -1,
       5,     5,   279,   384,    -1,     5,   197,   384,    -1,     5,
     271,   383,     4,   384,    -1,     5,   286,   383,     4,     4,
     384,    -1,     5,   281,     4,    -1,     5,   282,     4,    -1,
       5,   312,     5,   384,    -1,     5,    13,     5,    -1,     5,
      14,     5,    -1,     5,    61,     5,    -1,     5,   196,   384,
      -1,     5,   197,   384,    -1,     5,   271,   383,     4,   384,
      -1,     5,   281,     4,    -1,     5,   282,     4,    -1,     5,
     312,     5,   384,    -1,     5,    13,     5,   385,    -1,     5,
      61,     5,   385,    -1,     5,   196,   385,    -1,     5,   271,
     383,     4,   385,    -1,     5,   281,     4,   385,    -1,     5,
     312,     5,   385,    -1,     5,     5,    -1,   278,     5,     5,
      -1,    94,     4,     4,     4,     4,     4,    -1,   193,     4,
       4,     4,     4,     4,    -1,   112,    -1,   237,    -1,   365,
      -1,   143,   365,    -1,    88,   365,    -1,    66,     5,    -1,
       5,     4,     4,    -1,   309,   363,   363,    -1,   356,   363,
      -1,     5,     5,   374,   380,     5,     5,   374,   380,   363,
     374,   382,     5,    -1,    60,   507,    -1,    66,     5,    -1,
      80,    -1,    73,   512,     5,    -1,    73,   512,   312,     5,
      -1,    75,   100,    -1,    -1,    83,   505,   508,    -1,    89,
      -1,   100,   510,    -1,   106,   511,    -1,   115,     4,    -1,
     132,     5,    -1,   153,    16,    -1,   153,   218,   363,   363,
      -1,   153,   301,   363,   363,    -1,     4,    19,   388,   365,
      -1,     4,    20,   368,    -1,     4,    20,   368,   375,    -1,
       4,    20,   368,   373,   380,    -1,     4,    21,   245,   363,
     363,     4,   373,   382,    -1,     4,    21,   245,     5,   373,
     382,    -1,     4,    49,   245,   363,   363,   363,     4,   373,
     382,    -1,     4,    49,   245,     5,   373,   382,    -1,     4,
      48,   245,   363,   363,   373,   382,    -1,     4,    52,   106,
     368,   368,     4,   363,   363,   363,     4,    -1,     4,    52,
     106,   368,   368,     4,   363,   363,   363,     4,   375,    -1,
       4,    52,   106,   368,   368,     4,   363,   363,   363,     4,
     373,   380,    -1,     4,    52,   106,     5,     5,   373,   380,
     373,   382,    -1,     4,    55,   506,     5,     5,    -1,     4,
      62,   245,   363,   373,   382,    -1,     4,    66,     5,    -1,
       4,    74,    26,   365,   365,    -1,     4,    74,   170,     5,
       5,    -1,     4,    74,   245,   363,   373,   382,    -1,     4,
      74,   290,   373,   380,    -1,     4,    75,   142,   365,    -1,
       4,    82,   106,   368,   368,     4,   363,   363,     4,    -1,
       4,    82,   106,   368,   368,     4,   363,   363,     4,   375,
      -1,     4,    82,   106,   368,   368,     4,   363,   363,     4,
     373,   380,    -1,     4,    82,   106,     5,     5,   373,   380,
     373,   382,    -1,     4,    83,    21,   245,   363,   363,    -1,
       4,    83,    49,   245,   363,   363,    -1,     4,    83,    52,
      20,   363,   363,    -1,     4,    83,    52,   245,   363,   363,
      -1,     4,    83,   111,   245,   363,   363,    -1,     4,    83,
     114,    20,   363,   363,    -1,     4,    83,   114,   245,   363,
     363,    -1,     4,    83,    82,    20,   363,   363,    -1,     4,
      83,    82,   245,   363,   363,    -1,     4,    83,   233,   316,
       4,   363,   363,    -1,     4,    83,   266,   316,     4,   363,
     363,    -1,     4,   100,    -1,     4,   100,    21,     4,    -1,
       4,   100,    49,     4,    -1,     4,   100,    52,     4,    -1,
       4,   100,   111,     4,    -1,     4,   100,    55,   506,     5,
      -1,     4,   100,   114,     4,    -1,     4,   100,    82,     4,
      -1,     4,   100,   233,   316,     4,    -1,     4,   100,   266,
     316,     4,    -1,     4,   100,   292,    -1,     4,   100,   292,
       5,    -1,     4,   100,   292,     4,    -1,     4,   106,    39,
       4,    -1,     4,   110,   245,   363,   363,   373,   382,    -1,
       4,   111,   245,   363,   363,   363,     4,   373,   382,    -1,
       4,   111,   245,     5,   373,   382,    -1,     4,   114,   106,
     368,   368,     4,   363,   363,   363,     4,    -1,     4,   114,
     106,   368,   368,     4,   363,   363,   363,     4,   375,    -1,
       4,   114,   106,   368,   368,     4,   363,   363,   363,     4,
     373,   380,    -1,     4,   114,   106,     5,     5,   373,   380,
     373,   382,    -1,     4,   132,     5,    -1,     4,   153,    -1,
       4,   153,   218,    -1,     4,   177,    26,   365,   365,    -1,
       4,   177,   231,   373,   380,   372,   372,    -1,     4,   201,
     363,   363,    -1,     4,   201,   136,    -1,     4,   201,    35,
      -1,     4,   201,   300,   373,   380,   372,    -1,     4,   233,
     251,   363,   363,   373,   382,    -1,     4,   266,   251,   363,
     363,   373,   382,    -1,     4,   231,   270,   386,    -1,     4,
     231,   277,     4,    -1,     4,   239,   373,   380,   372,   372,
     363,   373,   382,    -1,     4,   240,   525,   365,    -1,     4,
     255,    39,    -1,     4,   256,   133,     5,    -1,     4,   256,
     231,   373,   380,   372,   372,    -1,     4,   256,   290,   373,
     380,   373,   382,    -1,     4,   267,    -1,     4,   267,   218,
      -1,     4,   292,     5,    -1,     4,   294,     5,    -1,     4,
     294,   255,   365,    -1,     4,   306,    -1,     4,   308,    -1,
       4,   314,    26,   365,    -1,     4,   314,   231,   373,   380,
     372,   373,   382,   363,   368,    -1,     4,   348,     4,    -1,
     168,    -1,   168,   363,   363,    -1,   179,   520,    -1,   180,
     521,    -1,   201,   522,    -1,   238,   365,    -1,   240,   525,
     365,    -1,   240,   525,   365,   363,   363,    -1,   255,    39,
     363,   363,    -1,   255,   200,   363,   363,     4,    -1,   255,
     112,    -1,   260,   529,    -1,   267,   530,    -1,   274,   531,
      -1,     5,    66,     5,    -1,     5,    80,    -1,     5,   100,
      -1,     5,    89,    -1,     5,   132,     5,    -1,     5,   153,
      -1,     5,   153,   218,    -1,     5,   201,   363,   363,    -1,
       5,   201,   136,    -1,     5,   201,    35,    -1,     5,   201,
     300,   373,   380,   372,    -1,     5,   240,   525,   365,    -1,
       5,   267,    -1,     5,   267,   218,    -1,     5,   306,    -1,
       5,   308,    -1,   292,   106,     5,     5,    -1,   292,   100,
       5,    -1,   292,   100,    16,    -1,   292,     5,    -1,   292,
     309,     5,    -1,   224,    -1,   224,   373,    -1,   305,    -1,
     306,    16,    -1,   308,    16,    -1,   348,     4,    -1,   267,
      -1,   308,    -1,   153,    -1,   306,    -1,    39,   201,    -1,
     201,    -1,   112,   201,    -1,    39,   106,    -1,   106,    -1,
     112,   106,    -1,    39,   255,    -1,   255,    -1,   112,   255,
      -1,   100,    -1,   294,    -1,    66,    -1,   348,    -1,   240,
      -1,   132,    -1,   168,    -1,   309,    -1,    -1,     4,    -1,
      29,   365,    -1,   245,   363,    -1,   164,     4,    -1,   219,
       4,   363,    -1,    62,   363,   363,   363,   526,    -1,   110,
     363,   363,   363,   363,   367,   526,    -1,    48,   363,   363,
     363,   363,   367,   526,    -1,   233,   363,   363,   363,   363,
     526,    -1,   266,   363,   363,   363,   363,   526,    -1,   177,
     363,   363,   363,   363,   526,    -1,   314,   363,   363,   363,
     363,   526,    -1,   294,   363,   363,   367,   526,    -1,    62,
     231,   363,   363,   387,   526,    -1,    48,   231,   363,   363,
     387,   526,    -1,   103,   231,   363,   363,   387,   526,    -1,
      85,   231,   363,   363,   387,   526,    -1,   359,   231,   363,
     363,   387,   526,    -1,    26,   231,   363,   363,   387,   526,
      -1,    51,   231,   363,   363,   387,   526,    -1,   256,   363,
     363,   363,   363,   373,   380,   373,   382,     5,   526,    -1,
      74,   363,   363,   363,   373,   380,   526,    -1,   239,   363,
     363,   363,   363,   363,   526,    -1,    21,   363,   363,   363,
     363,     4,   526,    -1,   111,   363,   363,   363,   363,   363,
       4,   367,   526,    -1,    49,   363,   363,   363,   363,   363,
       4,   367,   526,    -1,    82,   363,   363,   368,   368,     4,
     363,   363,     4,   526,    -1,   114,   363,   363,   368,   368,
       4,   363,   363,   363,     4,   367,   526,    -1,    52,   363,
     363,   368,   368,     4,   363,   363,   363,     4,   367,   526,
      -1,    75,   526,    -1,   293,   509,    -1,     5,   363,   363,
      -1,   312,     5,   363,   363,    -1,   363,   363,   312,     5,
      -1,     5,   373,   380,   372,    -1,    -1,   267,    -1,    16,
      -1,    39,   363,   363,     4,    -1,   200,   363,   363,     4,
      -1,   112,    -1,   105,    -1,   350,    -1,    63,    -1,   259,
      -1,   258,    -1,   242,    -1,   351,    -1,    60,   514,    -1,
      66,    -1,   132,    -1,   115,    -1,   147,   363,   363,    -1,
     158,   363,   363,    -1,     4,    19,    82,     5,     5,     5,
     373,     4,    -1,     4,    19,   155,     5,     5,     4,    -1,
       4,    19,   229,     5,     5,     5,     5,   373,   380,   389,
      -1,     4,    19,   230,     5,     5,   373,   389,    -1,     4,
      19,   244,     5,     5,     5,   373,    -1,     4,    19,   287,
     373,   380,    -1,   158,    16,    -1,     4,    20,    -1,     4,
      20,   375,    -1,     4,    20,   373,   380,    -1,     4,    21,
     245,   373,   382,    -1,     4,    49,   245,   373,   382,    -1,
       4,    48,   245,   373,   382,    -1,     4,    52,    20,    -1,
       4,    52,    20,   375,    -1,     4,    52,    20,   373,   380,
      -1,     4,    52,   245,   373,   382,    -1,     4,    59,   373,
     380,   381,    -1,     4,    62,   245,   373,   382,    -1,     4,
      66,    -1,     4,    74,    26,    -1,     4,    74,   170,    -1,
       4,    74,   245,   373,   382,    -1,     4,    74,   290,    -1,
       4,    75,   142,    -1,     4,    82,    20,    -1,     4,    82,
      20,   375,    -1,     4,    82,    20,   373,   380,    -1,     4,
      82,   245,   373,   382,    -1,     4,   110,   245,   373,   382,
      -1,     4,   111,   245,   373,   382,    -1,     4,   114,    20,
      -1,     4,   114,    20,   375,    -1,     4,   114,    20,   373,
     380,    -1,     4,   114,   245,   373,   382,    -1,     4,   132,
      -1,     4,   153,    -1,     4,   177,    26,    -1,     4,   177,
     172,   373,   382,    -1,     4,   177,   231,   373,   380,   381,
      -1,     4,   186,   172,   363,   373,   382,    -1,     4,   231,
     270,    -1,     4,   231,   277,    -1,     4,   239,   231,   373,
     380,   381,    -1,     4,   239,   172,   373,   382,    -1,     4,
     239,   298,   373,   382,    -1,     4,   240,    -1,     4,   240,
     525,    -1,     4,   256,   133,    -1,     4,   256,   172,   373,
     382,    -1,     4,   256,   231,   373,   380,   381,    -1,     4,
     256,   290,    -1,     4,   267,    -1,     4,   292,    -1,     4,
     292,     4,    -1,     4,   294,    -1,     4,   294,   255,    -1,
       4,   304,    -1,     4,   314,    26,    -1,     4,   314,   172,
     373,   382,    -1,     4,   314,   231,   373,   380,   381,    -1,
       4,   348,    -1,   153,   515,    -1,   153,   214,    -1,   214,
      -1,   233,   266,   363,   363,    -1,   266,   266,   363,   363,
      -1,   238,    -1,   240,   525,    -1,   267,   516,    -1,   267,
     214,    -1,   274,   517,    -1,     5,    66,    -1,     5,   132,
      -1,     5,   158,    -1,     5,   240,   525,    -1,     5,   292,
      -1,     5,   292,   214,    -1,   292,    16,    -1,   292,    99,
     202,    -1,   348,    -1,    29,    -1,   245,    -1,   164,    -1,
     219,    -1,    -1,   363,   363,    -1,    -1,   363,   363,    -1,
      -1,   294,    -1,    -1,    -1,   232,    -1,   247,    -1,   310,
      -1,    57,    -1,   134,    -1,   512,   373,   380,   381,   365,
     527,   534,    -1,   267,   512,   373,   380,   381,   365,   527,
     534,    -1,   512,     5,    -1,   512,     5,     4,     5,   373,
     380,    -1,   512,     4,    -1,   512,     4,     4,     5,   373,
     380,    -1,   127,     5,    -1,   127,     5,     5,    -1,   363,
     363,    -1,   136,    -1,    35,    -1,    39,   363,   363,    -1,
     200,   363,   363,    -1,   112,    -1,   300,   373,   380,   372,
      -1,   523,   524,    -1,   524,    -1,   525,   360,   365,    -1,
      66,   360,     5,    -1,    93,   360,     4,     4,    -1,   348,
     360,     4,    -1,   132,   360,     5,    -1,   294,   360,     5,
      -1,   537,    -1,   538,    -1,   209,    -1,   267,    -1,   153,
      -1,    92,    -1,   129,    -1,   106,    -1,   201,    -1,   255,
      -1,   100,    -1,   161,    -1,   283,    -1,   123,    -1,   518,
      -1,   518,   523,    -1,    -1,    -1,   528,   532,    -1,     5,
     512,   373,   380,   381,   365,    -1,   267,     5,   512,   373,
     380,   381,   365,    -1,   293,     5,    -1,    16,    -1,   218,
     363,   363,    -1,   301,    -1,   301,   363,   363,    -1,   125,
      -1,   171,    -1,   365,    -1,   294,   365,    -1,   532,   533,
      -1,   533,    -1,   525,   360,   365,    -1,    -1,    -1,   535,
     536,    -1,   536,   537,    -1,   537,    -1,   292,   360,     5,
      -1,    55,   360,   506,     5,     5,    -1,    64,    -1,    66,
       5,    -1,   187,   376,    -1,   246,   363,   363,    -1,   290,
     373,    -1,   299,   363,    -1,    45,   377,    -1,   187,     4,
      -1,   359,    -1,   357,    -1,   351,    -1,   209,    -1,   363,
     363,   363,   363,    -1,   363,   363,    -1,   375,   363,   363,
      -1,   373,   380,   372,    -1,   300,   542,    -1,    38,   363,
     363,    -1,   200,   543,    -1,   238,   365,    -1,   363,   363,
      -1,   375,   363,   363,    -1,   373,   380,   372,    -1,    39,
     363,   363,    -1,   363,   363,    -1,   112,   363,   363,    -1,
     365,    -1,   319,   374,   380,    -1,     5,     4,     4,    -1,
     309,    -1,    70,   547,    -1,   173,     4,    -1,   252,     4,
      -1,   261,   363,    -1,     4,     4,     4,     4,     4,     4,
       4,     4,     4,    -1,     4,     4,     4,     4,     4,     4,
      -1,    54,    -1,   144,    -1,   253,    -1,    90,    -1,   153,
     549,    -1,   267,   550,    -1,    39,   363,   363,    -1,   200,
     363,   363,    -1,   112,    -1,   272,   112,    -1,    39,   363,
     363,    -1,   200,   363,   363,    -1,   112,    -1,   272,   112,
      -1,   195,    -1,    12,    -1,   209,    -1,    33,    -1,   108,
      -1,    61,     5,    -1,   290,   373,    -1,   313,     4,     4,
       4,    -1,   363,    -1,   363,    98,    -1,   200,   555,    -1,
     300,   363,    -1,   300,   363,    98,    -1,    39,    -1,   363,
      -1,   112,    -1,    25,   557,    -1,   127,   559,    -1,   213,
     569,    -1,   113,   570,    -1,   226,     5,    -1,   122,     5,
     390,    -1,    61,     5,   390,    -1,   281,     4,   390,    -1,
     253,    87,   558,    -1,   122,     5,   390,    -1,    61,     5,
     390,    -1,   281,     4,   390,    -1,   560,    -1,   160,   560,
      -1,   291,   561,    -1,   278,   562,    -1,   118,    87,   563,
      -1,   198,   564,    -1,   253,   160,   566,    -1,   253,    87,
     567,    -1,   249,   568,    -1,   122,     5,    -1,    61,     5,
      -1,   281,     4,    -1,   122,     5,    -1,    61,     5,    -1,
     281,     4,    -1,   122,     5,    -1,    61,     5,    -1,   281,
       4,    -1,   122,     5,    -1,    61,     5,    -1,   281,     4,
      -1,   160,   565,    -1,   122,     5,     4,    -1,    61,     5,
       4,    -1,   281,     4,     4,    -1,   122,     5,    -1,    61,
       5,    -1,   281,     4,    -1,   122,     5,    -1,    61,     5,
      -1,   281,     4,    -1,   122,     5,    -1,    61,     5,    -1,
     281,     4,    -1,   122,     5,    -1,    61,     5,    -1,   281,
       4,    -1,   122,     5,   390,    -1,    61,     5,   390,    -1,
     281,     4,   390,    -1,   122,     5,     5,   390,    -1,   572,
       4,     4,   363,   363,   368,    -1,   572,     4,    -1,   100,
      -1,    50,    -1,   302,    -1,   140,    -1,   109,    -1,    -1,
       4,   363,   363,   363,   363,    -1,   212,    -1,   212,     4,
     363,   363,   363,   363,    -1,   127,   278,   574,    -1,     4,
      -1,     4,     4,    -1,   363,   373,    -1,   363,   363,    -1,
     300,   363,   363,    -1,   374,   380,   381,    -1,    15,   579,
      -1,   251,     4,    -1,   248,   578,    -1,    22,   577,    -1,
       4,     4,    -1,     4,     5,    -1,   294,     4,     5,    -1,
       4,     4,    -1,     4,     5,    -1,   294,     4,     5,    -1,
       4,    -1,     4,   374,   380,    -1,   300,     4,   374,   380,
      -1,   237,    -1,   363,   363,    -1,   363,   363,    11,   363,
     363,    -1,   363,   363,    11,   375,   363,   363,    -1,   363,
     363,    11,   373,   380,   372,    -1,   300,   582,    -1,   126,
      -1,   126,   363,    -1,   363,   363,    -1,   363,   363,    11,
     363,   363,    -1,   363,   363,    11,   375,   363,   363,    -1,
     363,   363,    11,   373,   380,   372,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   466,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
     514,   515,   516,   517,   518,   519,   520,   521,   522,   525,
     526,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   542,   544,   545,   546,   547,   549,   550,   551,
     552,   555,   556,   557,   558,   559,   562,   563,   566,   567,
     568,   571,   574,   577,   580,   592,   599,   606,   614,   615,
     616,   617,   618,   621,   622,   623,   624,   625,   626,   627,
     628,   629,   630,   631,   632,   633,   634,   635,   636,   637,
     638,   639,   640,   641,   642,   643,   644,   645,   646,   647,
     648,   651,   652,   655,   656,   657,   658,   659,   660,   663,
     664,   665,   666,   667,   670,   671,   672,   673,   674,   675,
     676,   677,   680,   681,   682,   683,   684,   687,   688,   689,
     690,   691,   692,   693,   694,   697,   698,   699,   702,   703,
     704,   705,   708,   709,   710,   713,   714,   715,   718,   719,
     720,   723,   724,   725,   726,   727,   728,   729,   730,   733,
     734,   737,   738,   739,   740,   741,   742,   745,   746,   747,
     748,   751,   752,   753,   754,   755,   756,   759,   760,   761,
     762,   763,   764,   765,   766,   770,   771,   774,   775,   778,
     779,   782,   783,   787,   788,   789,   790,   791,   792,   793,
     794,   797,   798,   801,   802,   803,   805,   807,   808,   809,
     811,   815,   816,   819,   820,   822,   825,   827,   833,   834,
     835,   838,   839,   840,   843,   844,   845,   846,   847,   848,
     849,   855,   856,   859,   860,   861,   862,   863,   866,   867,
     868,   869,   872,   873,   878,   883,   890,   892,   894,   895,
     896,   899,   901,   904,   905,   908,   909,   910,   911,   912,
     915,   917,   919,   924,   929,   932,   933,   936,   937,   938,
     945,   946,   947,   948,   951,   952,   955,   956,   959,   960,
     963,   965,   969,   970,   973,   975,   976,   977,   978,   981,
     982,   984,   985,   986,   989,   991,   993,   994,   996,   998,
    1000,  1002,  1006,  1009,  1010,  1011,  1012,  1015,  1016,  1019,
    1022,  1023,  1024,  1025,  1026,  1027,  1028,  1029,  1030,  1031,
    1032,  1033,  1034,  1035,  1036,  1037,  1038,  1039,  1040,  1041,
    1042,  1043,  1044,  1045,  1046,  1047,  1048,  1049,  1050,  1051,
    1052,  1054,  1055,  1056,  1057,  1058,  1059,  1060,  1062,  1063,
    1064,  1067,  1069,  1073,  1075,  1079,  1080,  1081,  1082,  1083,
    1084,  1085,  1086,  1089,  1090,  1091,  1094,  1097,  1098,  1100,
    1102,  1103,  1104,  1105,  1106,  1107,  1114,  1115,  1118,  1119,
    1120,  1123,  1124,  1127,  1130,  1131,  1133,  1137,  1138,  1139,
    1142,  1146,  1148,  1149,  1150,  1151,  1152,  1153,  1154,  1155,
    1156,  1159,  1160,  1161,  1164,  1165,  1168,  1170,  1178,  1180,
    1182,  1186,  1187,  1189,  1192,  1195,  1196,  1200,  1202,  1205,
    1210,  1211,  1212,  1216,  1217,  1218,  1221,  1222,  1223,  1226,
    1227,  1229,  1230,  1231,  1232,  1233,  1234,  1235,  1236,  1237,
    1238,  1240,  1241,  1244,  1245,  1248,  1249,  1250,  1251,  1254,
    1255,  1258,  1260,  1263,  1267,  1268,  1269,  1271,  1273,  1277,
    1278,  1279,  1282,  1283,  1284,  1285,  1286,  1287,  1288,  1291,
    1294,  1295,  1296,  1299,  1300,  1301,  1302,  1303,  1304,  1307,
    1308,  1309,  1310,  1311,  1312,  1313,  1316,  1317,  1320,  1321,
    1324,  1325,  1328,  1329,  1332,  1333,  1334,  1337,  1338,  1341,
    1342,  1345,  1348,  1356,  1357,  1360,  1361,  1362,  1363,  1364,
    1365,  1366,  1367,  1368,  1369,  1370,  1371,  1372,  1373,  1374,
    1375,  1376,  1377,  1380,  1383,  1384,  1387,  1388,  1389,  1390,
    1393,  1394,  1395,  1396,  1399,  1400,  1401,  1402,  1403,  1404,
    1407,  1408,  1409,  1410,  1411,  1412,  1414,  1415,  1420,  1421,
    1424,  1426,  1428,  1431,  1432,  1433,  1434,  1435,  1436,  1439,
    1441,  1443,  1445,  1446,  1448,  1450,  1452,  1454,  1456,  1459,
    1460,  1461,  1462,  1463,  1464,  1466,  1467,  1468,  1471,  1474,
    1476,  1478,  1480,  1482,  1484,  1486,  1488,  1491,  1493,  1495,
    1497,  1498,  1499,  1500,  1501,  1504,  1505,  1506,  1507,  1508,
    1509,  1510,  1512,  1514,  1515,  1516,  1519,  1520,  1521,  1522,
    1523,  1524,  1526,  1527,  1528,  1531,  1532,  1533,  1534,  1535,
    1538,  1541,  1544,  1547,  1550,  1553,  1556,  1559,  1562,  1567,
    1570,  1573,  1576,  1579,  1582,  1585,  1588,  1591,  1594,  1597,
    1602,  1605,  1608,  1611,  1614,  1617,  1620,  1623,  1626,  1631,
    1633,  1635,  1637,  1639,  1641,  1646,  1648,  1650,  1654,  1657,
    1660,  1663,  1666,  1669,  1672,  1675,  1678,  1681,  1684,  1689,
    1690,  1691,  1692,  1693,  1694,  1695,  1697,  1699,  1700,  1701,
    1704,  1705,  1706,  1707,  1708,  1709,  1711,  1712,  1713,  1716,
    1718,  1720,  1721,  1723,  1725,  1729,  1730,  1733,  1734,  1735,
    1738,  1741,  1742,  1743,  1744,  1745,  1746,  1747,  1750,  1758,
    1759,  1760,  1761,  1763,  1765,  1766,  1766,  1767,  1768,  1769,
    1770,  1771,  1773,  1774,  1776,  1779,  1782,  1783,  1784,  1787,
    1790,  1793,  1797,  1800,  1803,  1806,  1810,  1815,  1820,  1822,
    1824,  1825,  1827,  1829,  1831,  1833,  1834,  1836,  1838,  1842,
    1847,  1849,  1851,  1853,  1855,  1857,  1859,  1861,  1863,  1865,
    1867,  1870,  1871,  1873,  1875,  1876,  1878,  1880,  1881,  1882,
    1884,  1886,  1887,  1888,  1890,  1891,  1894,  1898,  1901,  1904,
    1908,  1913,  1919,  1920,  1921,  1923,  1924,  1928,  1930,  1931,
    1932,  1935,  1938,  1941,  1943,  1945,  1950,  1953,  1954,  1955,
    1958,  1962,  1963,  1965,  1966,  1967,  1969,  1970,  1972,  1973,
    1978,  1980,  1981,  1983,  1984,  1985,  1986,  1987,  1988,  1990,
    1992,  1994,  1995,  1996,  1998,  2000,  2001,  2002,  2003,  2004,
    2005,  2006,  2007,  2008,  2009,  2010,  2012,  2014,  2015,  2016,
    2017,  2019,  2020,  2021,  2022,  2023,  2025,  2026,  2027,  2028,
    2029,  2030,  2033,  2034,  2035,  2036,  2037,  2038,  2039,  2040,
    2041,  2042,  2043,  2044,  2045,  2046,  2047,  2048,  2049,  2050,
    2051,  2052,  2053,  2056,  2057,  2058,  2059,  2060,  2061,  2069,
    2076,  2085,  2094,  2101,  2108,  2116,  2124,  2131,  2136,  2141,
    2146,  2151,  2156,  2161,  2167,  2177,  2187,  2197,  2204,  2214,
    2224,  2233,  2245,  2258,  2263,  2266,  2268,  2270,  2275,  2279,
    2280,  2281,  2287,  2289,  2291,  2294,  2295,  2296,  2297,  2298,
    2299,  2300,  2303,  2304,  2305,  2306,  2307,  2308,  2310,  2312,
    2314,  2316,  2318,  2320,  2323,  2324,  2325,  2326,  2328,  2331,
    2333,  2335,  2336,  2337,  2339,  2342,  2345,  2347,  2348,  2349,
    2350,  2352,  2353,  2354,  2355,  2356,  2358,  2360,  2362,  2365,
    2366,  2367,  2369,  2372,  2373,  2374,  2375,  2377,  2380,  2384,
    2385,  2386,  2389,  2392,  2394,  2395,  2396,  2397,  2399,  2402,
    2403,  2405,  2406,  2407,  2408,  2409,  2411,  2412,  2414,  2417,
    2418,  2419,  2420,  2421,  2423,  2425,  2426,  2427,  2428,  2430,
    2432,  2433,  2434,  2435,  2436,  2437,  2439,  2440,  2442,  2445,
    2446,  2447,  2448,  2451,  2452,  2455,  2456,  2459,  2460,  2463,
    2476,  2477,  2481,  2482,  2486,  2487,  2490,  2494,  2500,  2502,
    2505,  2507,  2510,  2512,  2516,  2517,  2518,  2519,  2520,  2521,
    2522,  2526,  2527,  2530,  2531,  2532,  2533,  2534,  2535,  2536,
    2537,  2540,  2541,  2542,  2543,  2544,  2545,  2546,  2547,  2548,
    2549,  2550,  2551,  2554,  2555,  2558,  2559,  2559,  2562,  2564,
    2566,  2569,  2570,  2571,  2572,  2573,  2574,  2577,  2578,  2581,
    2582,  2585,  2589,  2590,  2590,  2593,  2594,  2597,  2600,  2604,
    2605,  2606,  2607,  2608,  2609,  2610,  2611,  2617,  2618,  2619,
    2620,  2623,  2625,  2626,  2631,  2633,  2634,  2635,  2636,  2639,
    2640,  2645,  2649,  2650,  2651,  2654,  2655,  2660,  2661,  2664,
    2666,  2667,  2668,  2673,  2675,  2681,  2682,  2683,  2684,  2687,
    2688,  2691,  2693,  2695,  2696,  2699,  2701,  2702,  2703,  2706,
    2707,  2710,  2711,  2712,  2715,  2716,  2717,  2720,  2721,  2722,
    2723,  2724,  2727,  2728,  2729,  2732,  2733,  2734,  2735,  2736,
    2739,  2741,  2743,  2745,  2748,  2750,  2752,  2755,  2756,  2757,
    2758,  2759,  2760,  2761,  2762,  2763,  2766,  2767,  2768,  2771,
    2772,  2773,  2776,  2777,  2778,  2781,  2782,  2783,  2786,  2787,
    2788,  2789,  2792,  2793,  2794,  2797,  2798,  2799,  2802,  2803,
    2804,  2807,  2808,  2809,  2812,  2814,  2816,  2820,  2824,  2826,
    2831,  2834,  2835,  2836,  2837,  2840,  2841,  2843,  2844,  2846,
    2849,  2850,  2851,  2854,  2855,  2858,  2860,  2861,  2862,  2863,
    2866,  2867,  2868,  2871,  2872,  2873,  2876,  2877,  2882,  2886,
    2893,  2894,  2896,  2901,  2903,  2906,  2907,  2908,  2909,  2911,
    2916
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "REAL", "INT", "STRING", "ANGDEGREE",
  "ANGRADIAN", "SEXSTR", "HMSSTR", "DMSSTR", "ABOUT_", "AIP_", "ALLOC_",
  "ALLOCGZ_", "ALIGN_", "ALL_", "ALT_", "AMPLIFIER_", "ANALYSIS_",
  "ANGLE_", "ANNULUS_", "APPEND_", "ARCMIN_", "ARCSEC_", "ARRAY_",
  "ARROW_", "ASINH_", "AST_", "AUTO_", "AUX_", "AVERAGE_", "AXES_",
  "AZIMUTH_", "B1950_", "BACK_", "BACKGROUND_", "BASE_", "BBOX_", "BEGIN_",
  "BG_", "BIG_", "BIGENDIAN_", "BIN_", "BITPIX_", "BLEND_", "BLOCK_",
  "BORDER_", "BOX_", "BOXANNULUS_", "BOXCAR_", "BOXCIRCLE_", "BPANDA_",
  "BUFFER_", "BW_", "CALLBACK_", "CANVAS_", "CATALOG_", "CELESTIAL_",
  "CENTER_", "CENTROID_", "CHANNEL_", "CIRCLE_", "CIAO_", "CLEAR_",
  "CLIP_", "COLOR_", "COLORBAR_", "COLORMAP_", "COLORSCALE_",
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
     605,   606,   607,   608,   609,   610,   611,    89,    78,    88,
      61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   361,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   363,
     363,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   364,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   366,   366,   366,   366,   366,   367,   367,   368,   368,
     368,   369,   370,   371,   372,   372,   372,   372,   373,   373,
     373,   373,   373,   374,   374,   374,   374,   374,   374,   374,
     374,   374,   374,   374,   374,   374,   374,   374,   374,   374,
     374,   374,   374,   374,   374,   374,   374,   374,   374,   374,
     374,   375,   375,   376,   376,   376,   376,   376,   376,   377,
     377,   377,   377,   377,   378,   378,   378,   378,   378,   378,
     378,   378,   379,   379,   379,   379,   379,   380,   380,   380,
     380,   380,   380,   380,   380,   381,   381,   381,   382,   382,
     382,   382,   383,   383,   383,   384,   384,   384,   385,   385,
     385,   386,   386,   386,   386,   386,   386,   386,   386,   387,
     387,   388,   388,   388,   388,   388,   388,   389,   389,   389,
     389,   390,   390,   390,   390,   390,   390,   391,   391,   391,
     391,   391,   391,   391,   391,   392,   392,   393,   393,   394,
     394,   395,   395,   396,   396,   396,   396,   396,   396,   396,
     396,   397,   397,   398,   398,   398,   398,   398,   398,   398,
     398,   399,   399,   400,   400,   400,   400,   400,   401,   401,
     401,   402,   402,   402,   403,   403,   403,   403,   403,   403,
     403,   404,   404,   405,   405,   405,   405,   405,   406,   406,
     406,   406,   407,   407,   407,   407,   408,   408,   408,   408,
     408,   409,   409,   410,   410,   411,   411,   411,   411,   411,
     412,   412,   412,   412,   412,   413,   413,   414,   414,   414,
     415,   415,   415,   415,   416,   416,   417,   417,   418,   418,
     419,   419,   420,   420,   420,   420,   420,   420,   420,   421,
     421,   421,   421,   421,   422,   422,   422,   422,   422,   422,
     422,   422,   423,   424,   424,   424,   424,   425,   425,   426,
     427,   427,   427,   427,   427,   427,   427,   427,   427,   427,
     427,   427,   427,   427,   427,   427,   427,   427,   427,   427,
     427,   427,   427,   427,   427,   427,   427,   427,   427,   427,
     427,   427,   427,   427,   427,   427,   427,   427,   427,   427,
     427,   428,   428,   429,   429,   430,   430,   430,   430,   430,
     430,   430,   430,   431,   431,   431,   432,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   434,   434,   435,   435,
     435,   436,   436,   437,   438,   438,   438,   439,   439,   439,
     440,   441,   441,   441,   441,   441,   441,   441,   441,   441,
     441,   442,   442,   442,   443,   443,   444,   444,   445,   445,
     445,   446,   446,   446,   447,   448,   448,   449,   449,   449,
     450,   450,   450,   451,   451,   451,   452,   452,   452,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   453,
     453,   453,   453,   454,   454,   455,   455,   455,   455,   456,
     456,   457,   457,   457,   458,   458,   458,   458,   458,   459,
     459,   459,   460,   460,   460,   460,   460,   460,   460,   461,
     462,   462,   462,   463,   463,   463,   463,   463,   463,   464,
     464,   464,   464,   464,   464,   464,   465,   465,   466,   466,
     467,   467,   468,   468,   469,   469,   469,   470,   470,   471,
     471,   472,   472,   473,   473,   474,   474,   474,   474,   474,
     474,   474,   474,   474,   474,   474,   474,   474,   474,   474,
     474,   474,   474,   475,   476,   476,   477,   477,   477,   477,
     478,   478,   478,   478,   479,   479,   479,   479,   479,   479,
     480,   480,   480,   480,   480,   480,   480,   480,   481,   481,
     482,   482,   482,   483,   483,   483,   483,   483,   483,   484,
     484,   484,   484,   484,   484,   484,   484,   484,   484,   485,
     485,   485,   485,   485,   485,   485,   485,   485,   486,   487,
     487,   487,   487,   487,   487,   487,   487,   487,   487,   487,
     487,   487,   487,   487,   487,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   490,   490,   490,   490,   490,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   492,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   496,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   498,
     498,   498,   498,   498,   498,   499,   499,   500,   500,   500,
     501,   502,   502,   502,   502,   502,   502,   502,   503,   504,
     504,   504,   504,   504,   504,   505,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   506,   506,   506,   506,   506,   506,   506,   506,
     506,   506,   506,   506,   506,   506,   506,   506,   506,   506,
     506,   506,   506,   507,   507,   507,   507,   507,   507,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   509,   509,   509,   509,   510,
     510,   510,   511,   511,   511,   512,   512,   512,   512,   512,
     512,   512,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   514,
     514,   514,   514,   515,   515,   516,   516,   517,   517,   518,
     519,   519,   519,   519,   519,   519,   520,   520,   521,   521,
     521,   521,   521,   521,   522,   522,   522,   522,   522,   522,
     522,   523,   523,   524,   524,   524,   524,   524,   524,   524,
     524,   525,   525,   525,   525,   525,   525,   525,   525,   525,
     525,   525,   525,   526,   526,   527,   528,   527,   529,   529,
     529,   530,   530,   530,   530,   530,   530,   531,   531,   532,
     532,   533,   534,   535,   534,   536,   536,   537,   538,   539,
     539,   539,   539,   539,   539,   539,   539,   540,   540,   540,
     540,   541,   541,   541,   541,   541,   541,   541,   541,   542,
     542,   542,   543,   543,   543,   544,   544,   544,   544,   545,
     545,   545,   545,   546,   546,   547,   547,   547,   547,   548,
     548,   549,   549,   549,   549,   550,   550,   550,   550,   551,
     551,   552,   552,   552,   553,   553,   553,   554,   554,   554,
     554,   554,   555,   555,   555,   556,   556,   556,   556,   556,
     557,   557,   557,   557,   558,   558,   558,   559,   559,   559,
     559,   559,   559,   559,   559,   559,   560,   560,   560,   561,
     561,   561,   562,   562,   562,   563,   563,   563,   564,   564,
     564,   564,   565,   565,   565,   566,   566,   566,   567,   567,
     567,   568,   568,   568,   569,   569,   569,   570,   571,   571,
     571,   572,   572,   572,   572,   573,   573,   573,   573,   573,
     574,   574,   574,   575,   575,   576,   576,   576,   576,   576,
     577,   577,   577,   578,   578,   578,   579,   579,   579,   580,
     581,   581,   581,   581,   581,   582,   582,   582,   582,   582,
     582
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
       2,     1,     3,     2,     2,     2,     5,     9,     1,     2,
       1,     5,     9,     1,     2,     2,     2,     2,     2,     2,
      13,    13,    12,    12,     1,     0,     1,     1,     4,     6,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       3,     4,     0,     6,     8,     2,     3,     3,     3,     0,
       4,     4,     4,     4,     3,     3,     1,     3,     5,     4,
       4,     3,     2,     0,     1,     1,     1,     1,     1,     3,
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
       2,     1,     5,     4,     1,     3,     0,     1,     2,     1,
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
       3,     1,     2,     2,     4,     5,     1,    10,     1,     2,
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
       6,     9,     6,     7,    10,    11,    12,     9,     5,     6,
       3,     5,     5,     6,     5,     4,     9,    10,    11,     9,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     7,
       7,     2,     4,     4,     4,     4,     5,     4,     4,     5,
       5,     3,     4,     4,     4,     7,     9,     6,    10,    11,
      12,     9,     3,     2,     3,     5,     7,     4,     3,     3,
       6,     7,     7,     4,     4,     9,     4,     3,     4,     7,
       7,     2,     3,     3,     3,     4,     2,     2,     4,    10,
       3,     1,     3,     2,     2,     2,     2,     3,     5,     4,
       5,     2,     2,     2,     2,     3,     2,     2,     2,     3,
       2,     3,     4,     3,     3,     6,     4,     2,     3,     2,
       2,     4,     3,     3,     2,     3,     1,     2,     1,     2,
       2,     2,     1,     1,     1,     1,     2,     1,     2,     2,
       1,     2,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     2,     2,     2,     3,     5,
       7,     7,     6,     6,     6,     6,     5,     6,     6,     6,
       6,     6,     6,     6,    11,     7,     7,     7,     9,     9,
      10,    12,    12,     2,     2,     3,     4,     4,     4,     0,
       1,     1,     4,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     3,     3,     8,     6,
      10,     7,     7,     5,     2,     2,     3,     4,     5,     5,
       5,     3,     4,     5,     5,     5,     5,     2,     3,     3,
       5,     3,     3,     3,     4,     5,     5,     5,     5,     3,
       4,     5,     5,     2,     2,     3,     5,     6,     6,     3,
       3,     6,     5,     5,     2,     3,     3,     5,     6,     3,
       2,     2,     3,     2,     3,     2,     3,     5,     6,     2,
       2,     2,     1,     4,     4,     1,     2,     2,     2,     2,
       2,     2,     2,     3,     2,     3,     2,     3,     1,     1,
       1,     1,     1,     0,     2,     0,     2,     0,     1,     0,
       0,     1,     1,     1,     1,     1,     7,     8,     2,     6,
       2,     6,     2,     3,     2,     1,     1,     3,     3,     1,
       4,     2,     1,     3,     3,     4,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     0,     0,     2,     6,     7,
       2,     1,     3,     1,     3,     1,     1,     1,     2,     2,
       1,     3,     0,     0,     2,     2,     1,     3,     5,     1,
       2,     2,     3,     2,     2,     2,     2,     1,     1,     1,
       1,     4,     2,     3,     3,     2,     3,     2,     2,     2,
       3,     3,     3,     2,     3,     1,     3,     3,     1,     2,
       2,     2,     2,     9,     6,     1,     1,     1,     1,     2,
       2,     3,     3,     1,     2,     3,     3,     1,     2,     1,
       1,     1,     1,     1,     2,     2,     4,     1,     2,     2,
       2,     3,     1,     1,     1,     2,     2,     2,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     1,     2,     2,
       2,     3,     2,     3,     3,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       3,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     3,     3,     3,     4,     6,     2,
       1,     1,     1,     1,     1,     0,     5,     1,     6,     3,
       1,     2,     2,     2,     3,     3,     2,     2,     2,     2,
       2,     2,     3,     2,     2,     3,     1,     3,     4,     1,
       2,     5,     6,     6,     2,     1,     2,     2,     5,     6,
       6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     8,     9,     0,     0,     0,     0,
       0,   312,     0,     0,     0,     0,     0,     0,   340,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     0,  1050,
       0,     0,     0,     0,     0,     0,     0,     0,  1050,    43,
       0,     0,     0,    48,     0,     0,     0,    52,  1245,    54,
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
       0,     2,    61,   338,   337,    19,     0,    20,     0,     0,
       0,   397,   411,     0,   417,     0,     0,     0,     0,     0,
       0,     0,   355,     0,   489,     0,     0,     0,     0,     0,
       0,  1050,     0,   364,     0,   368,     0,     0,     0,   372,
       0,   374,     0,   376,     0,     0,   524,   380,    21,     0,
     530,    22,   535,     0,     0,   554,   539,   540,   541,   542,
     556,   544,   545,   549,   546,     0,   548,   550,     0,     0,
      23,     0,    25,     0,   571,     0,     0,     0,   576,     0,
      27,     0,     0,     0,     0,     0,     0,     0,    29,   730,
      30,     0,     0,     0,     0,     0,     0,   731,    31,     0,
      32,  1054,  1055,  1051,  1052,  1053,     0,   139,  1119,     0,
     133,     0,     0,     0,    34,     0,  1130,  1129,  1128,  1127,
      37,     0,     0,     0,     0,     0,   157,     0,    38,     0,
    1148,     0,  1145,    39,     0,     0,     0,     0,    42,     0,
      41,    40,     0,     0,     0,     0,    45,     0,     0,  1177,
      46,     0,     0,     0,     0,     0,    47,  1241,  1240,  1244,
    1243,  1242,    49,     0,    50,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,  1247,    53,     0,     0,
      55,     0,     0,     0,     0,   157,    56,  1269,    57,     0,
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
      68,    69,    70,    62,    63,    64,    71,    65,     0,   341,
       0,   393,   389,   385,   386,   390,   387,   392,   342,   396,
     343,   300,   401,   405,   400,   303,   302,   301,     0,     0,
     344,   412,   346,     0,   345,     0,   419,   347,   431,   423,
     434,   424,   425,   427,     0,   429,   430,   157,   348,     0,
       0,   349,     0,     0,   157,   350,   443,   157,   441,   351,
     444,   353,   157,   445,   352,     0,   157,     0,   354,   463,
       0,   461,   479,     0,     0,     0,   467,   459,     0,   469,
     484,   472,   356,   490,   491,   357,   358,     0,     0,     0,
     454,     0,   361,    81,   451,     0,   362,   363,     0,   498,
     492,   497,   493,   494,   495,   496,   366,   367,   499,   369,
       0,   500,   501,   502,   371,   508,   503,   504,   506,   373,
     514,   516,   518,   520,   513,   515,   522,   375,     0,     0,
     527,     0,   379,   157,   529,   536,     0,   537,   555,   538,
     557,   558,   559,   543,   560,   562,   561,   563,   547,   551,
     568,     0,     0,     0,     0,   564,   552,    26,     0,     0,
     573,   572,     0,     0,     0,     0,    28,     0,     0,   583,
       0,   584,     0,     0,     0,     0,     0,   585,     0,   729,
       0,   586,     0,   587,     0,     0,   588,     0,   734,   733,
     732,     0,   737,     0,     0,     0,   903,     0,     0,     0,
     741,   745,   747,   939,     0,     0,     0,     0,   841,     0,
       0,     0,   876,     0,     0,     0,     0,     0,     0,     0,
     878,     0,     0,     0,    33,   142,   143,   141,   140,  1125,
    1120,  1126,   136,   137,   135,   138,   134,  1121,     0,  1123,
    1124,    35,    36,     0,     0,     0,     0,  1137,  1138,     0,
     157,     0,  1135,  1132,     0,     0,     0,   157,  1155,  1158,
    1156,  1157,  1149,  1150,  1151,  1152,     0,     0,     0,    44,
    1174,  1175,     0,  1182,  1184,  1183,  1179,  1180,  1178,     0,
       0,     0,     0,  1185,     0,  1188,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1186,  1197,     0,     0,
       0,  1187,  1189,  1239,  1172,  1173,  1171,   212,     0,   215,
     208,     0,   217,   209,     0,   219,   210,  1170,  1169,   211,
     213,   214,     0,     0,   207,     0,     0,     0,     0,  1253,
    1266,     0,  1256,     0,     0,  1259,     0,     0,  1258,  1257,
     165,  1275,     0,  1274,  1270,   232,   228,     0,   237,     0,
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
       0,     0,     0,     0,   953,   955,   954,     0,  1043,     0,
    1022,     0,  1025,     0,     0,  1045,  1047,     0,  1038,   365,
       0,   505,   507,   517,   510,   519,   511,   521,   512,   523,
     509,     0,     0,   378,   528,   525,   526,   165,   553,   565,
     566,   567,   569,     0,   582,   570,     0,     0,     0,     0,
       0,     0,   178,   178,   172,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   175,   175,   172,     0,     0,   172,
       0,     0,     0,     0,     0,   624,   648,     0,     0,     0,
     620,     0,     0,     0,     0,   178,   172,     0,     0,   725,
       0,   735,   736,   157,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   791,     0,     0,
       0,     0,     0,   813,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   831,     0,     0,   836,   837,     0,     0,
       0,   856,   858,   857,     0,   860,     0,     0,   867,   869,
     870,   904,     0,     0,     0,     0,   739,   740,   947,   945,
     950,   949,   948,   946,   951,     0,   744,     0,   941,   940,
     748,     0,   944,     0,   749,   750,   751,   752,     0,     0,
       0,     0,     0,   843,     0,     0,   844,  1066,     0,  1069,
    1065,     0,     0,     0,   845,   877,   846,  1084,  1089,  1086,
    1092,  1085,  1083,  1090,  1087,  1081,  1088,  1082,  1091,     0,
       0,   851,     0,     0,     0,     0,   852,  1101,  1105,  1106,
       0,  1103,   853,     0,  1107,   854,   874,     0,     0,     0,
     879,   880,   881,  1122,  1136,     0,     0,  1143,  1139,     0,
       0,     0,  1134,  1133,  1147,  1146,     0,     0,  1163,     0,
       0,  1159,     0,  1167,     0,     0,  1160,     0,  1181,   201,
     201,     0,   201,     0,  1207,     0,  1206,  1198,     0,     0,
       0,     0,  1202,     0,     0,     0,  1205,     0,     0,     0,
       0,     0,  1200,  1208,     0,     0,     0,  1199,   201,   201,
     201,     0,   216,   218,   220,     0,   221,     0,    60,     0,
    1249,     0,  1254,   157,     0,  1260,  1261,     0,  1263,  1264,
       0,   166,   167,  1255,  1276,  1277,     0,   224,     0,   238,
       0,     0,     0,     0,   272,     0,     0,     0,     0,     0,
       0,     0,     0,   310,   157,     0,     0,     0,     0,   157,
       0,   330,     0,   329,   395,   394,     0,     0,     0,   157,
       0,   165,   440,   438,   442,   446,     0,     0,     0,   165,
       0,   481,   465,     0,   476,   478,   168,     0,     0,   359,
       0,     0,    60,     0,   455,    83,    82,     0,     0,   965,
       0,     0,     0,     0,     0,     0,   977,     0,     0,     0,
       0,     0,     0,   993,   994,     0,     0,     0,     0,  1004,
       0,  1010,  1011,  1013,  1015,     0,  1019,  1030,  1031,  1032,
       0,  1034,  1039,  1041,  1042,  1040,   952,     0,  1021,     0,
    1020,   964,     0,     0,  1026,     0,  1028,     0,  1027,  1048,
    1029,  1036,     0,     0,   377,     0,     0,   580,   581,     0,
     578,   574,     0,   178,   178,   178,   179,   180,   592,   593,
     174,   173,     0,   178,   178,   178,     0,   598,   608,   175,
     178,   178,   178,   176,   177,   178,   178,     0,   178,   178,
       0,   175,     0,   621,     0,     0,     0,   647,     0,   646,
       0,     0,   623,     0,   622,     0,     0,     0,     0,   175,
     175,   172,     0,     0,   172,     0,     0,     0,   178,   178,
     721,     0,   178,   178,   726,     0,   191,   192,   193,   194,
     195,   196,     0,    89,    90,    88,   756,     0,     0,     0,
       0,     0,   897,   895,   890,     0,   900,   884,   901,   887,
     899,   893,   882,   896,   885,   883,   902,   898,     0,     0,
     770,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   801,     0,     0,     0,     0,   812,
     814,     0,     0,   819,   818,     0,     0,   181,     0,     0,
     157,     0,   827,     0,     0,     0,     0,   832,   833,   834,
       0,     0,     0,   840,   855,   859,   861,   864,   863,     0,
       0,     0,   868,   905,   907,     0,   906,   742,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1049,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   746,     0,     0,     0,     0,   842,     0,
     157,  1062,  1060,  1058,     0,     0,   157,  1064,   847,     0,
       0,     0,     0,  1100,     0,     0,  1108,   872,   873,     0,
     875,  1142,  1144,  1141,  1140,  1131,     0,     0,     0,  1164,
       0,     0,  1168,  1176,   203,   204,   205,   206,   202,  1191,
    1190,     0,     0,     0,  1193,  1192,   201,     0,     0,     0,
    1201,     0,     0,     0,     0,     0,  1218,     0,  1232,  1231,
    1233,     0,     0,     0,  1204,     0,     0,     0,  1203,  1213,
    1212,  1214,  1210,  1209,  1211,  1235,  1234,  1236,     0,     0,
       0,  1251,  1252,     0,  1267,   157,  1262,  1265,     0,     0,
     157,     0,     0,     0,   235,     0,     0,     0,     0,   276,
       0,     0,     0,   307,   306,     0,     0,   298,   309,   311,
       0,   321,   323,   322,   320,   157,   328,     0,     0,     0,
     165,   157,     0,     0,     0,     0,   460,   474,   483,     0,
     477,   170,   171,   169,   470,     0,   486,     0,     0,   453,
     458,    81,     0,     0,     0,     0,     0,     0,   157,   966,
       0,     0,     0,   971,     0,   157,     0,   978,   979,     0,
     981,   982,   983,     0,     0,     0,   989,     0,   995,     0,
       0,     0,   999,  1000,     0,     0,     0,  1005,  1006,     0,
       0,  1009,  1012,  1014,  1016,     0,     0,  1033,  1035,   956,
    1044,   957,     0,     0,  1046,  1037,     0,     0,   533,   534,
       0,   575,   579,     0,   589,   590,   591,   178,   595,   596,
     597,     0,     0,     0,   602,   603,   172,     0,     0,     0,
     178,   609,   610,   611,   612,   614,   175,   617,   618,     0,
     178,     0,     0,     0,   175,   175,   172,     0,     0,     0,
       0,   645,     0,   649,     0,     0,     0,     0,     0,   175,
     175,   172,     0,     0,   172,     0,     0,     0,     0,     0,
     175,   175,   172,     0,     0,   172,     0,     0,     0,     0,
       0,   175,   175,   172,     0,     0,   172,     0,     0,     0,
       0,   175,   175,   172,     0,     0,     0,   175,   625,   626,
     627,   628,   630,     0,   633,   634,     0,   175,     0,     0,
     719,   720,   178,   723,   724,     0,   755,   157,   757,     0,
       0,     0,     0,     0,     0,     0,   889,   886,   892,   891,
     888,   894,     0,     0,     0,     0,     0,   157,   775,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   792,   793,   794,     0,   798,   795,   797,     0,
       0,   803,   802,   804,     0,     0,     0,     0,     0,     0,
     157,   157,   817,   187,   183,   188,   182,   185,   184,   186,
     823,   824,     0,     0,   826,   828,   157,   157,     0,   835,
     838,   157,   157,   862,   866,   908,   743,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1093,   933,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   934,     0,     0,     0,     0,     0,   753,
     754,   157,   165,  1063,     0,     0,  1067,  1068,     0,     0,
     849,     0,   157,     0,  1102,  1104,   871,     0,  1161,  1162,
    1165,  1166,   201,   201,   201,  1237,  1216,  1215,  1217,  1220,
    1219,  1223,  1222,  1224,  1221,  1229,  1228,  1230,  1226,  1225,
    1227,     0,     0,  1246,     0,  1268,     0,   157,     0,  1271,
       0,     0,   239,     0,   236,     0,     0,     0,   281,     0,
       0,     0,   157,     0,   313,   145,     0,   415,     0,   436,
     165,   168,     0,     0,   449,     0,   487,   488,     0,   452,
       0,     0,     0,     0,     0,   157,   967,   168,   168,   168,
     157,   972,   168,   165,   168,   168,   157,   984,   168,   168,
     168,   157,   990,   168,   168,   157,     0,   168,   157,   168,
     168,   157,   168,   157,  1023,  1024,     0,     0,   532,     0,
     594,   599,   600,   601,     0,   605,   606,   607,   613,   178,
     175,   619,   636,   637,   638,   639,   640,     0,   642,   643,
     175,     0,     0,     0,   175,   175,   172,     0,     0,     0,
       0,     0,     0,   175,   175,   172,     0,     0,     0,     0,
       0,     0,   175,   175,   172,     0,     0,     0,   175,   178,
     178,   178,   178,   178,     0,   178,   178,     0,   175,   175,
     178,   178,   178,   178,   178,     0,   178,   178,     0,   175,
     175,   699,   700,   701,   702,   704,     0,   707,   708,     0,
     175,   710,   711,   712,   713,   714,     0,   716,   717,   175,
     629,   175,     0,   635,     0,     0,   722,     0,   758,   168,
       0,     0,   168,     0,     0,     0,   768,   168,   771,   772,
     168,   774,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   796,   799,   800,     0,   168,
       0,     0,     0,   815,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1094,  1072,     0,  1079,  1080,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   157,     0,     0,
      86,     0,     0,   942,   943,   165,     0,     0,     0,  1070,
     848,   850,   165,   157,  1154,  1195,  1194,  1196,  1238,     0,
    1248,  1278,     0,     0,  1273,  1272,   240,     0,     0,     0,
       0,     0,     0,   299,   168,   416,   420,   437,   439,     0,
     447,   482,   157,     0,     0,     0,     0,     0,     0,   963,
     968,   970,   969,   973,   974,   975,   976,   980,   985,   986,
     987,   988,   991,   992,   996,   165,   168,  1002,   165,  1003,
    1007,   165,  1017,   165,     0,   157,     0,   531,     0,   604,
     615,   178,   175,   644,   178,   178,   178,   178,   178,     0,
     178,   178,   175,   178,   178,   178,   178,   178,     0,   178,
     178,   175,   178,   178,   178,   178,   178,     0,   178,   178,
     175,   178,   659,   660,   661,   662,   664,   175,   667,   668,
       0,   178,   178,   688,   689,   690,   691,   693,   175,   696,
     697,     0,   178,   703,   175,     0,   709,   175,   718,   631,
     175,   727,   728,   157,   760,     0,   168,   762,     0,   157,
       0,   769,   773,   157,     0,   780,   781,   782,   783,   787,
     788,   784,   785,   786,     0,     0,   168,   807,     0,   157,
       0,     0,   820,   168,     0,     0,   168,   168,     0,   865,
       0,   189,   189,     0,     0,   189,     0,   189,  1049,     0,
       0,     0,     0,     0,     0,     0,     0,  1071,     0,     0,
     189,   189,     0,     0,     0,     0,     0,     0,     0,     0,
     935,     0,     0,     0,  1049,    87,     0,   189,     0,  1096,
     157,   157,     0,   165,     0,   222,  1280,  1279,     0,     0,
     244,     0,     0,     0,     0,   314,   448,     0,   333,     0,
     959,     0,   197,     0,   997,   998,  1001,  1008,  1018,   370,
       0,   333,     0,   616,   641,   650,   651,   652,   653,   654,
     175,   656,   657,   178,   679,   680,   681,   682,   683,   175,
     685,   686,   178,   670,   671,   672,   673,   674,   175,   676,
     677,   178,   663,   178,   175,   669,   692,   178,   175,   698,
     705,   175,   715,   632,     0,   168,   763,     0,     0,     0,
       0,     0,   789,   790,   805,     0,     0,     0,   816,   821,
       0,   829,   830,   822,   168,     0,   190,  1049,  1049,    86,
       0,  1049,     0,  1049,   909,   157,     0,  1074,     0,  1077,
    1117,  1078,  1076,  1073,     0,  1049,  1049,    86,     0,     0,
    1049,  1049,     0,     0,  1049,   938,   936,   937,   916,  1049,
    1049,  1096,  1112,     0,  1061,  1059,  1098,     0,     0,     0,
       0,   246,     0,   277,     0,   333,   334,   336,   335,   381,
       0,     0,   198,   200,   199,   961,   962,   333,   383,     0,
     178,   658,   178,   687,   178,   678,   665,   178,   694,   178,
     706,     0,   759,   168,   168,     0,   168,     0,   168,   168,
       0,   168,     0,  1049,   922,   918,  1049,     0,   923,     0,
     917,  1049,     0,  1075,     0,   920,   919,  1049,     0,     0,
     914,   912,  1049,   157,   913,   915,   921,  1112,  1056,     0,
       0,  1097,  1110,  1099,  1153,     0,     0,   282,   300,   303,
     301,     0,     0,   382,   958,   157,   384,   577,   655,   684,
     675,   666,   695,   168,   761,   767,     0,   779,   776,   806,
     811,     0,   825,     0,   927,   911,    86,     0,   925,  1118,
       0,   910,    86,     0,   926,     0,  1057,  1114,  1116,     0,
    1109,     0,     0,     0,     0,     0,     0,   197,     0,   764,
     157,   777,   808,   839,  1049,     0,     0,  1049,     0,   168,
    1115,  1111,   245,     0,     0,     0,     0,     0,   960,   738,
     157,   765,   778,   157,   809,   929,     0,  1049,   928,     0,
       0,   247,   293,     0,   292,     0,   766,   810,    86,   930,
      86,  1049,   291,   290,  1049,  1049,   924,   932,   931
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    54,  1425,   171,   153,   919,  2484,  2485,   432,   433,
     434,   435,   154,   155,   156,   697,   689,    92,   818,   455,
    1223,  1684,  1362,  1375,  1358,  1920,  2587,  1422,  2645,  1589,
     343,   770,   773,   776,   784,    64,   368,   374,   378,   381,
      69,   384,    76,   400,   396,   390,   407,    83,   412,    93,
      99,   417,   419,   421,   489,   872,  1655,   423,   426,   106,
     442,   157,   159,  2639,   175,   177,   218,   914,   953,   478,
     861,   480,   490,   864,   869,   492,   494,   875,   497,   877,
     508,   880,   882,   511,   515,   519,   521,   524,   528,   556,
     552,  1284,   542,   900,   905,   897,  1272,   911,   545,   566,
     569,   574,   579,   587,   944,   946,   948,   950,   592,   955,
     221,   594,  1750,   240,   597,   599,   603,   608,   616,   250,
    1351,   620,   258,   629,  1367,   631,   637,  1000,  1383,   995,
    1791,  1389,  1387,  1793,   996,  1392,  1394,   643,   646,   641,
     260,   268,   270,   684,  1077,  1448,  1066,  1543,  1963,  1080,
    1084,  1075,   939,  1326,  1330,  1338,  1340,  1947,   276,  1093,
    1096,  1104,  2250,  2251,  2252,  1948,  2622,  2623,  1126,  1132,
    1135,  2701,  2702,  2698,  2699,  2747,  2253,  2254,   284,   290,
     298,   712,   707,   303,   308,   310,   722,   729,  1161,  1166,
     779,   767,   316,   320,   736,   326,   743,  1594,   756,   757,
    1197,  1192,  1600,  1182,  1606,  1618,  1614,  1186,   761,   745,
     332,   333,   347,  1210,   350,   356,   795,   798,   792,   358,
     361,   803
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2124
static const yytype_int16 yypact[] =
{
    5084,    71,   472,    36, -2124, -2124,   852,  -170,   471,  1062,
     961,   516,  3651,   130,   269,    44,   127,    46,  5154,   651,
     946, -2124,   136,  1171,   199,   937,   -33,   110,   219,   244,
    1037,   309,   194,  3701,    31,   386,   477,   381,   244, -2124,
     -20,    17,   796, -2124,    66,   483,   982, -2124,    74, -2124,
      73,  3888,   242,    82,   538,   143,   951,   273,   565,   574,
      91,   597,    72,   101, -2124, -2124, -2124,   139,  1149, -2124,
     312,   106,   269,    -8,    52,   783, -2124,   603,  1149, -2124,
   -2124,    89,  1149, -2124, -2124, -2124, -2124,  1149, -2124, -2124,
   -2124, -2124, -2124, -2124,    41,   593,   627,   636,   823, -2124,
    1149,  1299,  1149,  1149,   881,  1149, -2124, -2124, -2124,   443,
   -2124, -2124, -2124, -2124,  4530, -2124, -2124, -2124, -2124, -2124,
   -2124,  1149, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,
   -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,
   -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,
   -2124, -2124, -2124, -2124,  1224, -2124,  1149, -2124,   647, -2124,
   -2124,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269, -2124, -2124, -2124, -2124, -2124,   535, -2124,   596,  1674,
     601,    12,   437,   568,   332,  4076,   657,  4581,  4502,   711,
    4530,  3789, -2124,     7,  -102,   698,   786,   712,   727,   672,
     802,   244,   833, -2124,   754, -2124,   613,   550,   128, -2124,
     134, -2124,   543, -2124,   -22,   765,   118, -2124, -2124,  4777,
   -2124, -2124, -2124,   820,   857,   865, -2124, -2124, -2124, -2124,
     898, -2124, -2124, -2124, -2124,   846, -2124, -2124,  4777,  4136,
   -2124,   944, -2124,    57, -2124,   952,   980,    87, -2124,  1149,
   -2124,   984,    37,   987,   231,   945,   991,    28, -2124, -2124,
   -2124,   996,  1006,   269,   269,  1149,  1149, -2124, -2124,  1014,
   -2124, -2124, -2124, -2124, -2124, -2124,  3105,   769, -2124,  1020,
     102,  1149,  4777,  1149, -2124,   114, -2124, -2124, -2124, -2124,
   -2124,  1149,  1162,   269,  1367,  1149,  1224,  1149, -2124,  1029,
   -2124,  4686, -2124, -2124,   924,  1043,  1045,  1149, -2124,  1065,
   -2124, -2124,  -104,  1067,  4777,  1070, -2124,  1193,  1149,   985,
   -2124,   393,   955,  1388,    62,  1083, -2124, -2124, -2124, -2124,
   -2124, -2124, -2124,  1100, -2124,   541,   177,   209,   241,   439,
    1149,  1149,   189, -2124,  1149,   831,  1116, -2124,  1149,  1149,
   -2124,    33,    15,    25,  1118,  1224, -2124, -2124, -2124,   861,
    1149, -2124, -2124, -2124, -2124, -2124, -2124,  1149, -2124,  1125,
    1128, -2124,  1149,   855, -2124, -2124, -2124, -2124, -2124, -2124,
    1149, -2124, -2124,  1149, -2124, -2124,   492,   492, -2124,  1135,
   -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,
   -2124,   966,  1149,  1149,  1179,  1182,  1188, -2124, -2124,  1149,
    1149,  1149, -2124,  1149, -2124,  1191, -2124, -2124, -2124, -2124,
    1167, -2124,  1198, -2124,  4777,  1204, -2124,  1149, -2124, -2124,
   -2124,  1149,  1210,  1212,  1212,  4777,  1149,  1149,  1149,  1149,
    1149,  1149, -2124,  1149,  4530,  1299,  1149,  1149, -2124, -2124,
   -2124, -2124, -2124, -2124, -2124,  1299,  1149, -2124, -2124, -2124,
   -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,  1228, -2124,
     962,    56, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,
   -2124,   -54, -2124, -2124, -2124,  1077, -2124,   452,   400,   400,
   -2124, -2124, -2124,  1253, -2124,  1262, -2124, -2124,   -27, -2124,
    1086, -2124, -2124, -2124,  1105, -2124, -2124,  1224, -2124,  1149,
    1149, -2124,  4777,  4777,  1224, -2124, -2124,  1224, -2124, -2124,
   -2124, -2124,  1224, -2124, -2124,  4777,  1224,  1149, -2124, -2124,
    4777, -2124,  1294,   132,  1098,    10, -2124, -2124,  1102,  4777,
      21, -2124, -2124, -2124, -2124, -2124, -2124,  1301,  1305,  1314,
   -2124,  1123, -2124,   419, -2124,  1149, -2124, -2124,   522, -2124,
   -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,
     -22, -2124, -2124, -2124, -2124, -2124, -2124,  1126,  1139, -2124,
   -2124,  1271,  1291,  1292, -2124, -2124,  1110, -2124,  1149,  1339,
    1134,  4686, -2124,  1224, -2124, -2124,  1364, -2124, -2124, -2124,
   -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,
   -2124,  4777,  4777,  4777,  4777, -2124, -2124, -2124,  1378,   269,
   -2124, -2124,  1379,  1380,  1184,  1149, -2124,   485,  1303, -2124,
    1383, -2124,   581,  1306,  4619,     9,  1389, -2124,  1394, -2124,
    1395, -2124,   100, -2124,  1398,  1402, -2124,  1404, -2124, -2124,
   -2124,  1149, -2124,  4686,  4464,  1584,   488,  1406,   172,  1312,
   -2124, -2124, -2124,    43,    34,  1409,  1412,     1,  1149,   552,
     817,    23,  4777,   269,  1661,   494,    65,   279,   255,    26,
   -2124,  1411,  1414,  1410, -2124, -2124, -2124, -2124, -2124, -2124,
   -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,  1149, -2124,
   -2124, -2124, -2124,  1149,  1149,  1149,  1149, -2124, -2124,  1149,
    1224,  1149, -2124,  1149,  1299,  1149,  1418,  1224, -2124, -2124,
   -2124, -2124, -2124, -2124, -2124, -2124,  1424,   489,   493, -2124,
   -2124, -2124,  1427, -2124, -2124, -2124, -2124,  1337, -2124,  1432,
    1435,  1356,  1440, -2124,  1442, -2124,  1446,  1358,  1447,   103,
     528,   548,    68,   564,  1450,   630, -2124, -2124,  1452,  1453,
    1451, -2124, -2124,  1455, -2124, -2124, -2124, -2124,  1457, -2124,
   -2124,  1458, -2124, -2124,  1459, -2124, -2124, -2124, -2124, -2124,
   -2124, -2124,  1149,  1149, -2124,  1149,  1177,  1149,  1149, -2124,
    4686,  1456, -2124,  1185,  1461, -2124,  1195,  1463, -2124, -2124,
     506,  1149,  1149, -2124,  1460, -2124, -2124,  1465,   942,  1149,
    1464,  1013, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,
   -2124, -2124, -2124, -2124, -2124, -2124,  1468,  1472,  1149,  1149,
    1149,  1474,   269,  1475,  1478,  1224,  4777, -2124, -2124, -2124,
   -2124, -2124,  1224, -2124, -2124,  1149,  1149,  1149,  4777,  1149,
    1299,  1149, -2124,  1149, -2124, -2124, -2124, -2124, -2124,  1476,
    1479, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,
   -2124, -2124, -2124, -2124,   657, -2124,  1149, -2124, -2124, -2124,
   -2124, -2124, -2124, -2124, -2124,  4777,  1149,  1224,  1224,   506,
     506,   506,  1224,  1299,  1149,  1224, -2124, -2124, -2124,  1149,
   -2124,   419,  1316,  1482,  1484, -2124, -2124,  1224, -2124,  1308,
    1331, -2124,  1490,  1491, -2124,  1494,  1209,  1462,  1466, -2124,
    1149,  4469,   498,   508, -2124, -2124, -2124,  1149,   544,  1141,
   -2124,  1234, -2124,  1661,  1235,   675,  1214,    96, -2124, -2124,
    1149, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,
   -2124,  1149,  1499, -2124, -2124, -2124, -2124,   506, -2124, -2124,
   -2124, -2124, -2124,  4651, -2124, -2124,  1505,  1506,  1149,  1508,
    1509,  1510,   475,   475,   -41,  1513,  1516,  1519,  1521,  1260,
    1266,  1541,  1542,  1544,    53,    53,   -41,  1546,  1549,   -41,
    1553,  1554,  4715,  1555,  1571, -2124, -2124,  1574,  1575,   606,
   -2124,  1550,  1577,  1578,  1579,   475,   -41,  1581,  1582, -2124,
    1583, -2124, -2124,  1224,  1166,  1172,  1345,  1346,  1348,  1486,
     465,  1350,  1591,   228,  1487,  1522,  1307,   949,  1543,  1386,
    1387,  1527,  1629,  1426,     2,   147,   848,  1400,  4777,  1661,
    1607,   840,  1401,  1436,  1648,    27, -2124, -2124,    48,  1651,
    1653, -2124, -2124, -2124,  1654,  1438,   164,  1661,  1443, -2124,
   -2124, -2124,   269,  1656,  1658,  1149, -2124, -2124, -2124, -2124,
   -2124, -2124, -2124, -2124, -2124,    13, -2124,  1731, -2124, -2124,
   -2124,  1149, -2124,  1149, -2124, -2124, -2124, -2124,  1149,  1149,
    1149,   172,  4777, -2124,  1662,  1241, -2124, -2124,  1149, -2124,
   -2124,  1149,  4777,  1149, -2124, -2124, -2124, -2124, -2124, -2124,
   -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,   269,
    1149, -2124,  1149,   172,  1667,  1669, -2124, -2124, -2124, -2124,
    1149,  1149, -2124,   269, -2124, -2124, -2124,   181,  1670,  1672,
   -2124, -2124, -2124, -2124, -2124,  1149,  1149, -2124, -2124,  1299,
    1149,  1149, -2124, -2124, -2124, -2124,  1659,  1149, -2124,  1149,
    1566, -2124,  1149, -2124,  1149,  1568, -2124,  1677, -2124,  1095,
    1095,   654,  1095,  1678, -2124,   678, -2124, -2124,  1709,  1710,
     696,  1713, -2124,  1714,  1715,  1717, -2124,   746,   747,  1718,
    1719,  1722, -2124, -2124,  1723,  1724,  1726, -2124,  1095,  1095,
    1095,  1149, -2124, -2124, -2124,  1149, -2124,  1149,   915,  4777,
   -2124,  1149, -2124,  1224,  4686, -2124, -2124,  1729, -2124, -2124,
    1730, -2124, -2124, -2124, -2124,  1671,  1367, -2124,  1149,  1711,
    1149,  1149,  1149,  1090, -2124,  1727,  1732,  1149,  1149,   131,
    1733,   269,   269, -2124,  1224,  1149,  1737,  1739,  1743,  1224,
    4777, -2124,  1149, -2124, -2124, -2124,  1149,  1149,  1149,  1224,
    4777,   506, -2124, -2124, -2124, -2124,  1299,  1149,  1744,   506,
    1149,   504, -2124,  1746, -2124, -2124,  1042,  1278,  1149, -2124,
    1149,  1750,  1755,  1149, -2124, -2124, -2124,  1751,  1190,  4530,
    1514,  1515,  1518,    63,  4777,  1520, -2124,   346,  1616,   150,
    1523,  1524,   160, -2124, -2124,   487,  1592,   854,   385,  1661,
     807, -2124,  1762,  1517, -2124,   804, -2124, -2124, -2124, -2124,
    1661,  1556, -2124, -2124, -2124, -2124, -2124,  1149, -2124,  1149,
   -2124, -2124,  1149,  1149, -2124,  1149, -2124,  1149, -2124, -2124,
   -2124, -2124,  1569,  1149, -2124,  1149,    70, -2124, -2124,  1770,
    1772, -2124,  1149,   475,   475,   475, -2124, -2124, -2124, -2124,
   -2124, -2124,  1773,   475,   475,   475,   731, -2124, -2124,    53,
     475,   475,   475, -2124, -2124,   475,   475,  1774,   475,   475,
    1777,    53,   734, -2124,  1781,  1782,  1783, -2124,   626, -2124,
     685,   709, -2124,   755, -2124,  1512,  1787,  1790,  1791,    53,
      53,   -41,  1793,  1795,   -41,  1796,  1798,  1803,   475,   475,
   -2124,  1804,   475,   475, -2124,  1805, -2124, -2124, -2124, -2124,
   -2124, -2124,   269, -2124, -2124, -2124,  4530,  1281,  1149,  1347,
    1310,   -14, -2124, -2124, -2124,   462, -2124, -2124, -2124, -2124,
   -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,  1806,  1149,
   -2124,   269,  1810,  1149,  4777,   269,  1560,  1564,  1572,   176,
     187,  1573,   220,  1503,  1504,  1817,  1819,  1821,   465,  1822,
    1823,  1824,  1528,  1531,  1257,  1825,  1149,  1369,  1565, -2124,
   -2124,   269,  4777, -2124, -2124,  4777,  1149,   123,  1826,  1149,
    1224,   269, -2124,  1828,  4777,  4777,  1149, -2124, -2124, -2124,
     269,   269,  4777, -2124, -2124, -2124, -2124, -2124, -2124,  4777,
    1149,   269, -2124, -2124, -2124,  1149, -2124, -2124,  1830,  1149,
    1600,   383,  1149,  1605,  1149,   499,  1149, -2124,  1149,  1606,
    1608,  1149,  1149,  1149,  1149,  1149,  1149,  1149,  1149,    19,
    1149,  1149,  1609, -2124,  1149,  1149,  1149,  1149, -2124,  4777,
    1224,  1833,  1839,  1844,  1149,  1149,  1224, -2124,  1149,  1149,
    1149,  4777,   172, -2124,  1149,  1149, -2124, -2124, -2124,  1845,
   -2124, -2124, -2124, -2124, -2124, -2124,  1848,  1149,  1149, -2124,
    1149,  1149, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,
   -2124,  1849,  1850,  1852, -2124, -2124,  1095,  1854,  1856,  1859,
   -2124,  1860,  1861,  1862,  1863,  1865, -2124,  1867, -2124, -2124,
   -2124,  1868,  1869,  1871, -2124,  1872,  1882,  1884, -2124, -2124,
   -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,  1149,  1149,
    1149, -2124, -2124,  1149, -2124,  1224, -2124, -2124,  1367,  1149,
    1224,  1149,  1149,  1149, -2124,  1149,  1149,  1886,  1149, -2124,
    1885,  1149,  1149, -2124, -2124,  1889,  4777, -2124, -2124, -2124,
    1149, -2124, -2124, -2124, -2124,  1224, -2124,  1157,  1149,  1157,
     506,  1224,  4777,  1149,  1149,  1890, -2124, -2124, -2124,  1149,
   -2124, -2124, -2124, -2124, -2124,  4777, -2124,  4777,  1149, -2124,
   -2124,   419,  1891,  1892,  1893,  1894,  1895,  4777,  1224, -2124,
    4777,  4777,  4777,  4530,  4777,  1224,  4777, -2124, -2124,  4777,
   -2124, -2124,  4530,  4777,  4777,  4777,  4530,  4777, -2124,  4777,
    4777,  1149, -2124, -2124,  4777,  4777,  4777, -2124, -2124,  4777,
    4777, -2124, -2124, -2124, -2124,  4777,  4777, -2124, -2124, -2124,
   -2124, -2124,  1149,  1149, -2124, -2124,  1898,  1149, -2124, -2124,
    1899, -2124, -2124,  1149, -2124, -2124, -2124,   475, -2124, -2124,
   -2124,  1900,  1901,  1904, -2124, -2124,   -41,  1906,  1909,  1910,
     475, -2124, -2124, -2124, -2124, -2124,    53, -2124, -2124,  1913,
     475,  1916,  1917,  1918,    53,    53,   -41,  1914,  1920,  1921,
    1041, -2124,  1094, -2124,  1097,  1570,  1922,  1924,  1925,    53,
      53,   -41,  1927,  1928,   -41,  1940,  1587,  1955,  1960,  1961,
      53,    53,   -41,  1929,  1963,   -41,  1964,  1593,  1966,  1967,
    1968,    53,    53,   -41,  1970,  1973,   -41,  1974,  1975,  1976,
    1977,    53,    53,   -41,  1979,  1981,  1984,    53, -2124, -2124,
   -2124, -2124, -2124,  1982, -2124, -2124,  1986,    53,  1988,  1989,
   -2124, -2124,   475, -2124, -2124,  1990, -2124,  1224, -2124,  4777,
    1149,  1149,  4777,  1149,  1991,  1172, -2124, -2124, -2124, -2124,
   -2124, -2124,  1993,  4777,   269,  1995,  4777,  1224, -2124,  1996,
    1172,  1149,  1149,  1149,  1149,  1149,  1149,  1149,  1149,  1149,
    1998,  2000, -2124, -2124, -2124,  2001, -2124, -2124, -2124,  2003,
    2004, -2124, -2124, -2124,  1149,  4777,  1149,  2005,  1172,   269,
    1224,  1224, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,
   -2124, -2124,  1149,  1299, -2124, -2124,  1224,  1224,  1149, -2124,
   -2124,  1224,  1224, -2124, -2124, -2124, -2124,  1149,  1149,  1149,
    1149,  1149,  1149,  1149,  1149,  1149,  1149,  2091, -2124,  1149,
    1149,  1149,  1149,  1149,  1149,  1149,  1149,  1149,  1149,  1149,
    2488,  2007,  1149, -2124,  1149,  1149,  1149,  2010,  2012, -2124,
   -2124,  1224,   506, -2124,  2014,  2016, -2124, -2124,  1299,  1149,
   -2124,  2018,  1224,  4777, -2124, -2124, -2124,  2019, -2124, -2124,
   -2124, -2124,  1095,  1095,  1095, -2124, -2124, -2124, -2124, -2124,
   -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,
   -2124,  1172,  1149, -2124,  1149, -2124,  1149,  1224,  1149, -2124,
    1299,  1149, -2124,  1149, -2124,  1789,  2023,  2024, -2124,  1149,
    1149,  2026,  1224,  4777, -2124, -2124,  1149, -2124,  1149, -2124,
     506,  1042,  1149,  2027, -2124,  1149, -2124, -2124,  4530, -2124,
    2029,  2032,  2033,  2035,  2036,  1224, -2124,  1042,  1042,  1042,
    1224, -2124,  1042,   506,  1042,  1042,  1224, -2124,  1042,  1042,
    1042,  1224, -2124,  1042,  1042,  1224,  4777,  1042,  1224,  1042,
    1042,  1224,  1042,  1224, -2124, -2124,  2039,  4530,  2041,  1149,
   -2124, -2124, -2124, -2124,  2040, -2124, -2124, -2124, -2124,   475,
      53, -2124, -2124, -2124, -2124, -2124, -2124,  2043, -2124, -2124,
      53,  2044,  2047,  2050,    53,    53,   -41,  2052,  2056,  2058,
    2061,  2062,  2063,    53,    53,   -41,  2065,  2067,  2068,  2069,
    2070,  2071,    53,    53,   -41,  2073,  2075,  2076,    53,   475,
     475,   475,   475,   475,  2078,   475,   475,  2079,    53,    53,
     475,   475,   475,   475,   475,  2080,   475,   475,  2081,    53,
      53, -2124, -2124, -2124, -2124, -2124,  2083, -2124, -2124,  2084,
      53, -2124, -2124, -2124, -2124, -2124,  2085, -2124, -2124,    53,
   -2124,    53,  2087, -2124,  2090,  2092, -2124,  4686, -2124,  1042,
    2093,  4777,  1042,  1149,  4777,  2094, -2124,  1042, -2124, -2124,
    1042, -2124,  4777,  2095,  1149,  1149,  1149,  1149,  1149,  1149,
    1149,  1149,  1149,  1149,  1149, -2124, -2124, -2124,  4777,  1042,
    1149,  4777,  2096, -2124,  1299,  1299,  4777,  1299,  1299,  4777,
    4777,  1299,  1299,  1149,  1149,  1149,  1149,  1149,  1149,  1172,
    1149,  1149,  1149,  1535,  1618,  1645,  1688,  1712,  1720,  1735,
    2091, -2124,  1741, -2124, -2124,  1172,  1149,  1149,  1149,  1149,
    1172,  1149,  1149,  1149,  1149,  1149,  1149,  1224,  1149,  1602,
    1172,  1149,  1149, -2124, -2124,   506,   269,  4777,  4777, -2124,
   -2124, -2124,   506,  1224,  2098, -2124, -2124, -2124, -2124,  1149,
   -2124, -2124,  1299,  1149, -2124, -2124, -2124,  1111,  2099,  2100,
    1149,  2102,  1157, -2124,  1042, -2124, -2124, -2124, -2124,  2103,
   -2124, -2124,  1224,  2105,  2106,  2110,  2114,  4777,  2115, -2124,
   -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,
   -2124, -2124, -2124, -2124, -2124,   506,  1042, -2124,   506, -2124,
   -2124,   506, -2124,   506,  2117,  1224,  2111, -2124,  1149, -2124,
   -2124,   475,    53, -2124,   475,   475,   475,   475,   475,  2119,
     475,   475,    53,   475,   475,   475,   475,   475,  2120,   475,
     475,    53,   475,   475,   475,   475,   475,  2122,   475,   475,
      53,   475, -2124, -2124, -2124, -2124, -2124,    53, -2124, -2124,
    2123,   475,   475, -2124, -2124, -2124, -2124, -2124,    53, -2124,
   -2124,  2124,   475, -2124,    53,  2125, -2124,    53, -2124, -2124,
      53, -2124, -2124,  1224, -2124,  4777,  1042, -2124,  2126,  1224,
    1149, -2124, -2124,  1224,  1149, -2124, -2124, -2124, -2124, -2124,
   -2124, -2124, -2124, -2124,  1149,  1149,  1042, -2124,  2127,  1224,
    1149,  1299, -2124,  1042,  1149,  1299,  1042,  1042,  4777, -2124,
    1149,  2128,  2128,  1149,  1149,  2128,  1172,  2128, -2124,  4777,
     465,  2129,  2131,  2133,  2134,  2135,  2132, -2124,   269,  1172,
    2128,  2128,  1149,  1149,  1172,  1149,  1149,  1149,  1149,  1149,
   -2124,  1299,  1149,  2136, -2124, -2124,  1149,  2128,   269,    11,
    1224,  1224,   269,   506,  2138, -2124, -2124, -2124,  2139,  1149,
   -2124,  2140,  2143,  2144,  1149, -2124, -2124,  2145,    76,  4777,
   -2124,  2147,   207,  4777, -2124, -2124, -2124, -2124, -2124, -2124,
    2146,    76,  1149, -2124, -2124, -2124, -2124, -2124, -2124, -2124,
      53, -2124, -2124,   475, -2124, -2124, -2124, -2124, -2124,    53,
   -2124, -2124,   475, -2124, -2124, -2124, -2124, -2124,    53, -2124,
   -2124,   475, -2124,   475,    53, -2124, -2124,   475,    53, -2124,
   -2124,    53, -2124, -2124,  1149,  1042, -2124,  4777,  4777,  1149,
    4777,  1149, -2124, -2124, -2124,  4777,  4777,  1149, -2124, -2124,
    4777, -2124, -2124, -2124,  1042,  2149, -2124, -2124, -2124,  1172,
    1149, -2124,  2150, -2124, -2124,  1224,  2153, -2124,  2151, -2124,
   -2124, -2124, -2124, -2124,  2155, -2124, -2124,  1172,  1149,  2156,
   -2124, -2124,  1149,  4777, -2124, -2124, -2124, -2124, -2124, -2124,
   -2124,    11,  1676,  1661, -2124, -2124, -2124,   269,  2158,  2159,
    2160, -2124,  2162, -2124,   135,    76, -2124, -2124, -2124, -2124,
    2163,  4777, -2124, -2124, -2124, -2124, -2124,    76, -2124,  2165,
     475, -2124,   475, -2124,   475, -2124, -2124,   475, -2124,   475,
   -2124,  4686, -2124,  1042,  1042,  1149,  1042,  2168,  1042,  1042,
    1149,  1042,  1149, -2124, -2124, -2124, -2124,  2169, -2124,  1149,
   -2124, -2124,  2170, -2124,  1149, -2124, -2124, -2124,  2172,  1149,
   -2124, -2124, -2124,  1224, -2124, -2124, -2124,  1676, -2124,  1811,
    1747,  1661, -2124, -2124, -2124,  2173,  2174, -2124, -2124, -2124,
   -2124,   979,   979, -2124, -2124,  1224, -2124, -2124, -2124, -2124,
   -2124, -2124, -2124,  1042, -2124, -2124,  2176, -2124,  4530, -2124,
   -2124,  2178, -2124,  1172, -2124, -2124,  1172,  1149, -2124, -2124,
    1149, -2124,  1172,  1149, -2124,  4777, -2124,  1811, -2124,   269,
   -2124,  2180,  2181,  1149,  1149,  1149,  1149,   207,  2184,  4530,
    1224, -2124,  4530, -2124, -2124,  1149,  2188, -2124,  1149,  1042,
   -2124, -2124, -2124,  2190,  2191,  1149,  2193,  1149, -2124, -2124,
    1224, -2124, -2124,  1224, -2124, -2124,  2189, -2124, -2124,  2195,
    2207, -2124, -2124,  2208, -2124,  2210, -2124, -2124,  1172, -2124,
    1172, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2124, -2124,    -3, -2124,   670,  -898, -1826, -1008,  1444, -2124,
     927,  -174,  1874,   -50,    30, -2124, -2124, -1657,  1644,  1477,
    -846,   797,  -865,  1131,  1275, -2124, -1055, -2124,  -647, -1118,
   -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,
   -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,
   -2124, -2124, -2124, -2124,  -501,  -485, -2124, -2124, -2124, -2124,
   -2124, -2124, -2124, -1666, -2124, -2124, -2124, -2124, -2124, -2124,
   -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,
   -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,
   -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,
   -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,
   -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,
   -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,
   -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,
   -2124, -2124, -2124, -2124, -2124, -1466, -2124, -2124, -2124, -2124,
   -2124,  -664, -2124, -2124, -2124, -2124, -2124, -2124,    29, -2124,
   -2124, -2124, -2124,  -107,  -665, -1400,  -458, -2124, -2124, -2124,
   -2124, -2124,  -527,  -520, -2124, -2124, -2123, -2124, -2124, -2124,
   -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,
   -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,  1467,
   -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,
   -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124, -2124,
   -2124, -2124
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1251
static const yytype_int16 yytable[] =
{
      68,   355,  1895,  1271,   873,  1092,  1095,  1426,   105,  1119,
    2036, -1095,  2038,   174,   902,    65,    66,  1087,  1517,   793,
      65,    66,    65,    66,  1960,   908,    65,    66,  1481,   796,
     295,  1136,  1499,   644,   110,   107,   299,   790,   319,    65,
      66,   313,   627,  1263,  1264,  1265,   415,   349,   107,   727,
     360,   529,  1590,   367,  1595,    65,    66,   373,  1097,  1078,
     380,   618,  1098,   297,   383,   385,   530,   312,   395,  1373,
    1123,   402,   406,  1081,  1501,   409,    65,    66,   344,   413,
    1625,  1626,  1627,  1703,   414,    65,    66,   161,   531,  1748,
     162,   623,  1866,   410,    65,    66,   997,   427,   431,   436,
     437,   441,   443,   376,    65,    66,   691,  2636,   532,    65,
      66,  1346,  1341,  1003,   107,   261,   327,   543,   447,   701,
     163,  1377,    77,   758,  1380,   533,  1137,  1360,   164,   534,
      65,    66,  1138,   590,   398,  1099,   898,    55,    65,    66,
     107,  1411,    65,    66,   446,   862,  1082,   107,   363,  1913,
      65,    66,   112,   456,   575,  1187,   909,   535,   536,  1100,
     859,  1004,   158,   728,   746,   112,   328,    65,    66,   998,
    1712,  1914,   878,   399,  1915,   329,   262,  1653,   488,   903,
    1716,   107,  1483,   509,   759,  1916,  1567,  1867,   110,   571,
     165,   173,    65,    66,   176,  1342,  1883,  1568,   263,  1507,
     118,   345,   241,   863,   259,   481,   330,  1885,  1917,   624,
     544,   482,   537,   107,   251,  1374,   510,   317,   518,  1088,
     523,   527,   538,  1101,   269,   748,  1918,   379,  1188,   555,
     558,   112,  1361,  1482,  1083,  1068,   632,   879,  2642,   115,
    1888,  1868,   166,   768,   588,   107,   625,   116,   117,   860,
     483,   717,   115,   264,  1451,   401,   619,   112,   702,   107,
     116,   117,   651,   652,   112,   382,  2637,   167,  1334,   168,
     314,   852,   576,   107,   416,   771,   484,  1069,   698,  1502,
     700,   855,  1500,  1484,   539,   540,   346,   364,   703,   706,
     628,   709,   713,   315,   715,  1127,  1005,   169,   112,   391,
    1508,   271,  1089, -1095,   725,   692,   645,   774,  1704,   794,
    1079,  1749,   693,   694,   735,   737,   386,   318,   115,   797,
     591,   910,   485,  1102,   711,  1518,   116,   117,  2708,   904,
     112,  1961,  1124,   791,   120,  1139,    67,   780,   781,   783,
     300,   785,   411,   760,   115,   788,   789,   120,   695,   633,
     301,   115,   116,   117,   118,   541,   802,   804,  1125,   116,
     117,   377,   112,   170,   805,  2638,   486,   487,   331,   808,
     810,  1006,  1707,   348,  1491,   285,   112,   811,   272,   577,
     812,  1007,   359,   150,   754,   115,    65,    66,   151,   152,
     112,   372,  1511,   116,   117,  1713,   150,  2643,  1452,   822,
     823,   151,   152,   286,  1128,  1717,   827,   828,   829,   578,
     830,  1654,  1008,   120,  1070,  1672,   392,   115,   572,   265,
     782,  1884,  1865,  1676,   837,   116,   117,  1549,   838,   634,
    1071,  1072,  1886,   843,   844,   845,   846,   847,   848,   120,
     849,   573,   431,   853,   854,  2709,   120,  1485,  1880,   115,
    1129,   777,   431,   856,   739,   696,   304,   116,   117,  1561,
     393,   394,   150,   115,  1509,  1889,   266,   151,   152,   311,
    1908,   116,   117,  1453,   851,    78,   273,   115,  1995,   357,
     120,   309,  1919,    56,   635,   116,   117,   334,   150,   486,
    2710,   274,  1061,   151,   152,   150,  2644,  1130,   969,   970,
     151,   152,    65,    66,  1431,   495,   885,   886,  1678,   636,
      79,   387,   120,  1718,   496,   740,  1708,  1062,  1454,    65,
      66,   813,  1073,  1074,   894,    57,   921,   922,  1157,   150,
     866,  1432,  1162,  1120,   151,   152,  1843,  1322,   362,  1846,
    1152,   956,   870,    58,   120,   287,   971,    65,    66,  1133,
     369,   288,   920,   289,   275,   100,   917,  1724,   120,   305,
     110,   150,   388,   899,  1317,  1433,   151,   152,  1869,   389,
     370,  1434,   120,    59,   764,   101,  2748,  1435,   371,   580,
    1131,   871,   923,    80,   994,   951,   980,   814,   924,  1178,
     581,  1709,    60,   150,   981,   982,    61,  1436,   151,   152,
     940,  1158,   375,  1013,  1221,  1163,  1121,   150,   408,  1183,
      62,  1395,   151,   152,  1939,  1068,  1725,   582,  1437,  1396,
    1397,   150,   968,   418,  2770,  1189,   151,   152,   102,   867,
    1318,  1795,   420,  1438,   778,  1356,  1710,   925,   306,  1796,
    1797,   422,   983,   444,  1727,  2504,   741,   307,  1012,   765,
    1179,   457,  1063,   468,   926,  1737,  1319,  1069,   815,  1719,
      65,    66,   469,  1870,  1357,  1090,  1439,  1398,  1103,   927,
    1184,    81,  1323,   918,   742,   928,  1251,   553,    65,    66,
     929,   972,   973,  1726,   160,   172,  1190,  1798,  1180,  1159,
    1806,  1194,   242,  1164,  1122,  1143,   583,   267,  1807,  1808,
    1144,  1145,  1146,  1147,   302,  1440,  1148,  1064,  1150,   868,
    1151,   431,  1153,   110,  1817,  1591,   103,  1871,  1720,  1267,
    1441,   479,  1818,  1819,    82,   365,   118,  1324,   110,   491,
    1944,   549,  1442,  1065,   219,   584,   930,   554,  1320,  1597,
    1213,   493,   397,   520,  1761,  1762,  1809,  1781,  1782,   816,
     766,   220,  1195,  1325,   817,   931,   974,  1603,  1328,  1443,
     932,  1160,   933,  2676,   546,  1165,   975,   976,  1828,  1829,
    1820,  1444,    63,  1445,  1446,  1222,  1592,   984,   985,  1205,
    1206,  2687,  1207,  1209,  1211,  1212,    65,    66,   934,   935,
    1321,   547,  1763,  2049,  1070,  1783,   936,   977,  1224,  1225,
    1598,   548,  1399,  1400,   585,  1229,  1230,  1611,  1615,  1181,
    1071,  1072,   104,  1447,   937,   550,  1830,   557,  1604,  1091,
     567,   321,  1799,  1800,  2039,  1236,  1237,  1238,   424,  1185,
    1734,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   570,  1246,  1247,  1248,  1191,  1250,   431,  1252,   551,
    1253,   568,   986,   425,   589,  2648,   586,  2195,    65,    66,
     685,   403,   987,   988,    65,    66,   809,   989,  1612,  1616,
     938,  1256,  2203,  1258,  2285,  2286,  2287,  1401,   559,   118,
    1068,  1810,  1811,  1260,    65,    66,   595,  1402,  1403,  1336,
     431,  1268,  1404,   990,   118,   598,  1270,  1801,  1983,   560,
    2222,  2094,  1073,  1074,  1257,  1821,  1822,  1802,  1803,   322,
    2764,  1196,  1804,  1283,   561, -1250,  2767,  1287,  1405,  1631,
     438,  2107,  1069,   323,  1327,  1329,  1332,  1764,  1765,   596,
    1784,  1785,  1337,   649,   650,  1593,  2144,  1343,  1805,  2147,
    1728,   600,  1386,   686,  1094,    65,    66,  2155,  1344,   617,
    2158,  1831,  1832,  1228,    65,    66,  1812,   621,  2166,  1599,
     404,  2169,   252,   708,   222,  1352,  1813,  1814,  2176,  2713,
    1465,  1815,  2804,  1493,  2805,  1573,  1735,  1605,   718,  1729,
    1823,  2716,    65,    66,   622,   601,   223,   801,   626,   224,
    1824,  1825,   630,   439,  2596,  1826,   642,  1816,  1466,   604,
     647,  1467,  1766,  2288,  1468,  1786,   769,   772,   775,   324,
     366,   648,  1767,  1768,   719,  1787,  1788,  1232,   335,   653,
     562,  1827,   325,   225,  1233,   690,  1833,  1613,  1617,   336,
     226,  1469,  1486,   716,   687,  1736,  1834,  1835,  1730,   638,
     405,   227,   228,  1769,    94,    70,  1789,   723,   229,   724,
     253,    71,   688,  1510,  2111,  2112,   337,   639,  2594,  1070,
    1470,    95,  1516,  1471,   254,  1681,  1682,  1836,   720,   726,
     605,  1494,   730,   230,   732,  1071,  1072,   744,  1544,   563,
    1545,   440,   277,   738,  2618,  1546,  1547,  1548,   762,    84,
      72,   231,  1673,    65,    66,  1554,   602,  1731,  1555,   255,
    1557,   278,  2113,   279,   763,   232,   233,  2120,  2121,   786,
    2129,  2130,   234,   606,    65,    66,    73,  1559,  1487,  1560,
     787,   870,   799,   564,  1722,  1488,  2276,  1564,  1565,   806,
    1495,  1723,   565,   807,   235,   338,  1584,  1585,   640,   820,
    1683,    96,  1571,  1572,    65,    66,   431,  1574,  1575,  1647,
     256,   607,    65,    66,  1577,  2122,  1578,  1331,  2131,  1580,
     871,  1581,    74,   257,  1635,    65,    66,  1073,  1074,   821,
    2498,   832,   833,   236,   339,    65,    66,   721,  1423,  1424,
      65,  1208,  1472,   824,    84,    97,   825,  2674,  2675,  1215,
    1216,  2678,   826,  2680,  2307,   831,    65,    66,  1628,  1218,
    1219,   704,  1629,   834,  1630,  2685,  2686,    75,  1633,   836,
    2690,  2691,    65,  1282,  2694,  1473,    85,  2325,   428,  2695,
    2696,    98,   430,  1639,   280,  1642,   237,  1644,  1645,  1646,
    1648,  2456,   733,   857,  1651,  1652,   238,  2114,  2115,   858,
      86,  1474,  1660,   340,    87,  1552,  1553,  2469,  1416,  1666,
     865,  2359,  2474,  1667,  1668,  1669,  1641,   874,   448,   243,
    2368,  1901,  1902,   431,  1674,   239,   876,  1677,   881,  2377,
    1586,  1587,  1692,  2734,   705,  1687,  2735,  1688,   883,   341,
    1690,  2738,  1685,   281,    65,    66,  1859,  2741,   244,   964,
    2123,  2124,  2744,  2132,  2133,   342,   108,    88,   896,  1588,
     901,  1679,    65,    66,   906,   734,   912,   428,   429,   430,
     913,    85,  2116,    65,    66,  1864,  1423,  1424,   915,  1699,
     941,  1417,  2117,  2118,  1739,   916,  1740,   282,  1457,  1741,
    1742,   449,  1743,   942,  1744,    86,   283,   943,    89,  2035,
    1746,   949,  1747,  1106,   952,  1693,    90,    91,  1134,  1753,
      65,    66,  1862,  2119,   450,   451,  1458,   945,   947,  1459,
     840,   841,   245,   452,  2785,  2125,   954,  2788,  2134,   958,
      65,    66,    65,    66,  1905,  2126,  2127,   246,  2135,  2136,
     111,   453,   963,   965,   966,   108,   967,  2799,   979,  1460,
     978,   454,    88,   991,   999,  1418,  1419,  2588,  1001,  1002,
    2591,  2806,  2593,  1009,  2807,  2808,  2128,  1010,  1011,  2137,
    1420,  1067,  1076,  1085,  1142,  2605,  2606,  1086,  1461,  1694,
    1695,  1462,  1154,   110,  1860,  1861,  1863,  1140,  1156,  2488,
    1141,  1167,  2620,    89,  1696,  1168,  2492,  1169,   113,   247,
    1170,    90,    91,  1171,  1172,  1175,  1873,  1173,  2592,   746,
    1876,  1174,  1176,  1421,  1193,  1200,  1858,  1198,  1199,  1201,
    1214,  2604,  1202,  1203,  1204,  1217,  2609,  1220,  1277,   111,
    1227,  1226,  1234,  1904,  1906,  1231,  1235,  1697,  1239,  1241,
     248,  1254,  1242,  1912,  1255,  1273,  1922,  1274,  1275,  2514,
     249,  1278,  2516,  1928,  1279,  2517,  1280,  2518,  1281,  1285,
    1333,  1335,  1240,  1286,  1345,   119,   747,  1933,  1339,  1349,
     748,  1350,  1935,  1353,  1354,  1355,  1937,  1363,  1940,  1941,
    1364,  1943,  1945,  1946,  1365,  1949,  1366,   113,  1952,  1953,
    1954,  1955,  1956,  1957,  1958,  1959,  1962,  1964,  1965,  1368,
    1463,  1967,  1968,  1969,  1970,  1369,  1370,  1371,   749,  1372,
    1378,  1976,  1977,  1379,  1406,  1979,  1980,  1981,  1381,  1382,
    1388,  1984,  1985,    65,    66,  1879,  1423,  1424,    65,    66,
    1907,  1423,  1424,  1464,  1988,  1989,  1390,  1990,  1991,  1391,
    1393,  1407,  1475,  1408,  1409,  1412,   750,  1413,  1414,   118,
    1427,  1428,  1430,  1429,   119,  1449,  1450,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,  2011,  2012,  2013,  1456,  1455,
    2014,  1476,  1477,  1478,  1479,  2016,  2019,   751,  2021,  2022,
    2023,   752,  2024,  2025,  1480,  2027,  1492,  2627,  2029,  2030,
    1050,  1489,  1496,  1498,  1497,  1503,  1506,  2033,  1504,  1505,
    1514,  1512,  1515,  1576,  1051,  2037,   753,  1551,  2018,   754,
    2042,  2043,  1562,  1052,  1563,  1569,  2045,  1570,  1579,   755,
    1582,  1583,  1638,  1596,  1053,  2048,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,  1601,  1602,  1054,  1607,  2076,  1608,
    1609,  1610,  1643,  1619,  1620,  2763,  1621,   470,  1622,  1623,
    1624,  1649,  1513,  2061,  1636,  1637,  1650,  1055,  1656,  2084,
    2085,  1661,  2067,  1662,  2087,   471,  2072,  1663,  1675,  2227,
    2089,  1680,  1519,  1107,  1689,  -457,  1691,  1520,  1711,  1700,
    1701,  1108,   472,  1702,  1721,  1706,  1732,  1109,  1714,  1715,
    1738,  1745,  1733,   714,  1751,   473,  1752,  1757,  1776,  1521,
    1522,  1779,  1523,  1524,  1110,  1056,  1790,  1792,  1794,  1558,
    1111,  1837,  1838,  1525,   474,  1839,  1840,  1844,   475,  1845,
    2297,  1847,  1848,  1566,  2279,  1526,  1527,  1849,  1852,  1881,
    1855,  1872,   476,  1528,  1112,  1875,  1529,  1882,  1887,  1890,
    1891,  1892,  1113,  1893,  1057,  1894,  1896,  1897,  1898,  1903,
    1921,  1938,   800,  1925,  1530,  1936,  1942,  1950,  1973,  1951,
    1966,  1531,  1532,  1974,  1899,  1533,  2294,  1900,  1975,  2138,
    1986,  1058,  1987,   477,  1992,  1993,  1994,  2190,  2191,  1996,
    2193,  1997,  1114,  1998,  1999,  2000,  2149,  2001,  2002,  2003,
    1115,  2004,  2160,  2005,  2006,  2007,   839,  2008,  2204,  2205,
    2206,  2207,  2208,  2209,  2210,  2211,  2212,  2009,  2010,  2028,
    1059,  2026,  1060,  2031,  2044,  2460,  2050,  2051,  2052,  2053,
    2054,  2218,  2086,  2220,  2088,  2091,  2092,   296,  1534,  2093,
    2095,  1657,  1658,  2096,  2483,  2097,  1116,  2100,  2108,  2226,
     431,  2102,  2103,  2104,  2109,  2230,  2110,  2139,  1117,  2140,
    2141,  2145,  2146,  2156,  2233,  2234,  2235,  2236,  2237,  2238,
    2239,  2240,  2241,  2242,  1118,  2148,  2255,  2256,  2257,  2258,
    2259,  2260,  2261,  2262,  2263,  2264,  2265,  2266,  2700,  2269,
    2150,  2270,  2271,  2272,  1535,  2151,  2152,  2157, -1113,  2159,
    1536,  2161,  2162,  2163,  2167,   431,  2280,  2168,  2461,  2170,
    2171,  2172,  2173,  2177,   884,  2178,  2181,  1537,   445,  2179,
    2182,   889,  2184,  2185,   890,  2187,  2194,  1538,  2196,   891,
    2199,  2202,  2213,   893,  2214,  2462,  2215,  2216,  2217,  2289,
    2221,  2290,  2268,  2291,  2273,  2293,  2274,   431,  2295,  2277,
    2296,  2278,  2281,  2284,  1539,  1540,  2300,  2301,  2298,  2299,
    2302,   819,  2310,  2305,  2314,  2306,  2700,  2315,  2316,  2309,
    2317,  2318,  2311,  2344,  2349,  1541,  2347,  2352,  2463,  2354,
    2441,  2442,  2355,  2444,  2445,  2356,  2360,  2448,  2449,   507,
    2361,   514,   517,  2362,   522,   526,  2363,  2364,  2365,  2369,
     957,  2370,  2464,  2371,  2372,  2373,  2374,  2378,  2313,  2379,
    2465,  2380,  2387,  2390,  2398,  2401,  2348,  2404,  2405,  2407,
    1542,  2410,  1856,   593,  2411,  2466,  2412,  2415,  2420,  2424,
    2440,  2468,  2494,  2247,  2500,  2501,  2503,  2749,  2506,  2508,
    2778,  2509,   609,   615,  2510,  2521,  1376,  2346,  2496,  2511,
    2513,  1874,  2519,  2530,  2539,  1878,  2548,  2554,  2558,  2561,
    2567,  2575,  2586,  2712,  2597,  2598,  2602,  2413,  2599,  2600,
    2601,  2617,  2628,  2467,  2629,  2631,  2243,  2632,  2633,  2635,
    2647,  1909,  2641,  2673,  2679,  2683,   699,  2244,  2682,  2684,
    2689,  1924,  2704,  2697,  2705,  2706,  2707,  2714,   710,  2717,
    1929,  1930,  2728,  2736,  2750,  2739,  2742,  2746,  2751,  2752,
    2759,  1934,  2762,  1107,  2245,  2772,  2773,  1149,   731,  2779,
    2418,  1108,  2787,  2798,  1155,  2791,  2792,  1109,  2794,  2800,
       0,  2425,  2426,  2427,  2428,  2429,  2430,  2431,  2432,  2433,
    2434,  2435,  2801,  2802,  1110,  2803,  1177,  2438,     0,     0,
    1111,   431,   431,  2246,   431,   431,  2754,  2756,   431,   431,
    2450,  2451,  2452,  2453,  2454,  2455,     0,  2457,  2458,  2459,
       0,     0,     0,     0,  1112,     0,     0,     0,  1359,     0,
       0,     0,  1113,  2470,  2471,  2472,  2473,     0,  2475,  2476,
    2477,  2478,  2479,  2480,     0,  2482,     0,  2578,  2486,  2487,
       0,  2581,     0,     0,     0,     0,     0,     0,     0,     0,
    1410,     0,     0,     0,     0,     0,  2495,     0,     0,   431,
    2497,     0,  1114,     0,  2499,     0,     0,  2502,   835,     0,
    1115,     0,     0,     0,     0,     0,     0,  2615,     0,   842,
       0,     0,  1243,     0,     0,     0,     0,     0,   850,  1245,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2522,  1116,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1117,     0,
       0,     0,     0,     0,  1261,  1262,     0,     0,     0,  1266,
       0,     0,  1269,     0,  1118,     0,     0,     0,     0,     0,
       0,     0,     0,  2247,  1276,  2248,   887,   888,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   892,
       0,     0,     0,     0,   895,     0,     0,     0,     0,     0,
       0,     0,     0,   907,     0,     0,     0,  2569,     0,     0,
       0,  2571,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2572,  2573,     0,     0,     0,     0,  2577,   431,  2249,
       0,  2580,   431,     0,     0,     0,     0,  2585,     0,     0,
    2589,  2590,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2607,
    2608,     0,  2610,  2611,  2612,  2613,  2614,     0,   431,  2616,
       0,     0,     0,  2619,     0,   959,   960,   961,   962,     0,
    1415,    65,    66,     0,     0,     0,  2630,     0,     0,     0,
    1770,  2634,     0,     0,     0,     0,   108,     0,     0,     0,
       0,     0,  1780,     0,     0,     0,     0,     0,     0,  2649,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1841,  1842,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2198,     0,  1105,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2661,     0,     0,     0,     0,  2665,     0,  2667,     0,
       0,     0,     0,     0,  2670,     0,     0,     0,     0,  2223,
       0,     0,     0,     0,     0,     0,     0,  2677,     0,     0,
     111,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2688,     0,     0,     0,  2692,
       0,  2723,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1754,  1755,
    1756,  2711,     0,     0,     0,     0,     0,     0,  1758,  1759,
    1760,     0,     0,     0,     0,  1771,  1772,  1773,   113,     0,
    1774,  1775,     0,  1777,  1778,     0,     0,     0,     0,     0,
       0,     0,  2726,     0,     0,     0,     0,  2731,     0,  2733,
       0,     0,     0,     0,     0,     0,  2737,     0,     0,     0,
       0,  2740,     0,  1850,  1851,     0,  2743,  1853,  1854,     0,
    1634,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2753,  2755,
    1244,     0,     0,     0,     0,   119,     0,     0,     0,     0,
       0,  1659,  1249,     0,     0,     0,  1664,     0,     0,     0,
       0,     0,     0,     0,  2765,     0,  1670,  2766,     0,     0,
    2768,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2774,  2775,  2776,  2777,     0,     0,     0,     0,  2761,  1259,
       0,     0,  2786,     0,     0,  2789,     0,     0,     0,     0,
       0,     0,  2793,     0,  2795,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2781,
       0,     0,  2784,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,     0,     0,  1348,  2308,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2320,  2321,  2322,     0,     0,  2324,
       0,  2326,  2327,     0,     0,  2329,  2330,  2331,     0,     0,
    2333,  2334,     0,     0,  2337,     0,  2339,  2340,     0,  2342,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2099,     0,     0,
       0,     0,  1490,     0,     0,  2105,  2106,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2142,  2143,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2153,  2154,     0,     0,     0,  2489,     0,     0,     0,
       0,     0,  2164,  2165,     0,     0,     0,     0,     0,     0,
       0,     0,  2174,  2175,     0,     0,  1550,  1923,  2180,     0,
       0,     0,     0,     0,     0,     0,  1556,     0,  2183,     0,
       0,     0,     0,     0,     0,     0,  2414,     0,     0,  2417,
       0,     0,     0,     0,  2421,     0,     0,  2422,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2437,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1972,     0,     0,
       0,     0,  2090,  1978,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2098,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2101,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1632,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1640,  2505,     0,     0,     0,     0,     0,     0,     0,   654,
     655,     0,  2015,     0,     0,     0,     0,  2020,     0,     0,
       0,     0,     0,     0,  1665,     0,     0,  2186,     0,     0,
       0,     0,     0,  2515,  1671,     0,     0,     0,  2603,     0,
       0,     0,  2034,     0,     0,     0,     0,     0,  2040,     0,
       0,  1686,     0,     0,     0,     0,     0,     0,  2621,     0,
       0,     0,  2626,  1698,     0,   656,     0,     0,  1705,     0,
       0,   657,     0,     0,     0,  2056,     0,     0,   658,     0,
     659,     0,  2063,     0,     0,   660,     0,     0,   661,     0,
       0,     0,     0,     0,   662,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   663,     0,     0,     0,     0,
       0,   664,     0,  2566,     0,     0,     0,     0,     0,     0,
     665,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2351,     0,  2574,     0,     0,     0,   666,     0,     0,
    2579,  2353,     0,  2582,  2583,  2357,  2358,     0,     0,     0,
       0,     0,     0,     0,  2366,  2367,     0,     0,   667,     0,
       0,     0,     0,  2375,  2376,     0,     0,     0,     0,  2381,
       0,     0,     0,   668,     0,     0,     0,     0,     0,  2391,
    2392,     0,     0,     0,   669,   670,     0,     0,     0,     0,
    2402,  2403,     0,     0,     0,     0,     0,  2703,     0,     0,
    1857,  2406,     0,     0,     0,     0,   671,     0,     0,     0,
    2408,     0,  2409,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1877,   672,
       0,     0,     0,     0,  2188,     0,     0,     0,     0,     0,
       0,     0,     0,   673,     0,   674,     0,     0,     0,     0,
       0,     0,     0,     0,  2201,     0,  1910,     0,     0,  1911,
     675,     0,  2662,     0,     0,   676,     0,     0,  1926,  1927,
       0,     0,   677,     0,  2350,     0,  1931,     0,     0,   678,
       0,  2672,     0,  1932,     0,     0,     0,  2224,  2225,     0,
       0,     0,     0,     0,     0,     0,     0,   679,     0,     0,
       0,     0,     0,  2228,  2229,     0,     0,     0,  2231,  2232,
     680,   681,     0,   682,  2382,  2383,  2384,  2385,  2386,  2771,
    2388,  2389,     0,  1971,     0,  2393,  2394,  2395,  2396,  2397,
       0,  2399,  2400,     0,     0,  1982,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2275,     0,
       0,     0,     0,   683,     0,     0,     0,     0,     0,  2282,
    2724,  2725,     0,  2727,     0,  2729,  2730,     0,  2732,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2524,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2533,  2292,     0,     0,     0,     0,     0,
       0,     0,  2542,     0,     0,     0,     0,     0,     0,  2303,
       0,  2551,  2017,     0,     0,     0,     0,     0,  2553,     0,
    2758,     0,     0,     0,     0,     0,     0,     0,     0,  2557,
    2032,     0,  2319,     0,     0,  2560,     0,  2323,  2562,     0,
       0,  2563,     0,  2328,     0,     0,  2041,     0,  2332,     0,
       0,     0,  2335,     0,     0,  2338,     0,     0,  2341,  2046,
    2343,  2047,     0,     0,     0,     0,  2790,     0,     0,     0,
       0,  2055,     0,     0,  2057,  2058,  2059,  2060,  2062,     0,
    2064,     0,     0,  2065,     0,     0,  2066,  2068,  2069,  2070,
    2071,  2073,     0,  2074,  2075,     0,     0,     0,  2077,  2078,
    2079,     0,     0,  2080,  2081,     0,     0,     0,     0,  2082,
    2083,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2523,     0,     0,  2525,
    2526,  2527,  2528,  2529,     0,  2531,  2532,     0,  2534,  2535,
    2536,  2537,  2538,     0,  2540,  2541,     0,  2543,  2544,  2545,
    2546,  2547,     0,  2549,  2550,   107,  2552,     0,     0,     0,
       0,  2650,     0,     0,     0,     0,  2555,  2556,     0,   108,
    2652,     0,     0,     0,     0,     0,     0,  2559,     0,  2654,
       0,     0,     0,     0,     0,  2657,     0,     0,     0,  2659,
     109,     0,  2660,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    66,     0,   110,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   108,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2189,     0,     0,  2192,     0,     0,   291,
       0,     0,     0,     0,  2481,     0,     0,  2197,     0,     0,
    2200,     0,     0,   111,     0,     0,     0,   110,     0,     0,
    2493,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   112,     0,     0,     0,     0,     0,     0,  2219,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2507,
       0,     0,     0,   525,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   111,     0,     0,     0,   108,  2651,     0,
       0,   113,     0,     0,     0,     0,     0,  2653,     0,     0,
       0,     0,  2520,     0,     0,     0,  2655,     0,  2656,     0,
       0,     0,  2658,     0,  2267,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   110,     0,     0,     0,     0,
       0,   114,     0,     0,     0,     0,     0,  2283,     0,   115,
       0,   113,     0,     0,     0,     0,     0,   116,   117,     0,
       0,     0,     0,   118,     0,     0,     0,     0,   119,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2564,   111,     0,     0,     0,     0,  2568,     0,     0,     0,
    2570,   292,     0,   351,     0,     0,     0,  2304,     0,     0,
     352,     0,     0,     0,     0,     0,  2576,     0,     0,     0,
       0,     0,  2312,   118,     0,  2718,     0,  2719,   119,  2720,
       0,     0,  2721,     0,  2722,     0,     0,     0,     0,   293,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
    2336,     0,     0,     0,   120,     0,     0,     0,     0,     0,
       0,  2345,     0,     0,     0,     0,     0,  2624,  2625,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,     0,     0,
       0,   294,     0,   150,     0,     0,     0,     0,   151,   152,
       0,   118,     0,     0,     0,     0,   119,     0,     0,     0,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2416,     0,     0,  2419,     0,
       0,     0,  2681,     0,     0,     0,  2423,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2436,     0,   108,  2439,     0,     0,     0,     0,
    2443,     0,     0,  2446,  2447,     0,     0,     0,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   353,     0,     0,   354,
       0,   498,   499,     0,     0,   500,     0,     0,     0,     0,
       0,  2490,  2491,   610,   108,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   501,     0,
    2745,     0,     0,     0,     0,     0,     0,     0,   111,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2512,  2757,     0,   611,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,     0,   113,  2782,   111,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   502,
       0,     0,   612,     0,     0,     0,     0,  2796,     0,     0,
    2797,     0,     0,     0,     0,     0,     0,     0,   503,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2565,
     504,     0,     0,     0,     0,     0,   113,     0,     0,     0,
       0,     0,     0,   119,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   613,     0,     0,     0,     0,     0,
       0,     0,  2584,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2595,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   505,     0,     0,     0,
       0,     0,     0,   119,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2640,     0,     0,     0,  2646,     0,     0,
       0,     0,     0,     0,     0,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,     0,   506,     0,     0,     0,     0,     0,
       0,     0,   614,     0,     0,     0,     0,     0,     0,     0,
       0,  2663,  2664,     0,  2666,     0,     0,     0,     0,  2668,
    2669,     0,     0,     0,  2671,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,  1014,  1015,  1016,     0,  2693,  1288,  1289,
    1290,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1017,  1018,     0,  2715,  1019,  1291,  1292,  1020,
     108,  1293,     0,     0,     0,     0,  1021,     0,  1294,     0,
    1022,  1295,     0,     0,     0,  1296,     0,     0,  1023,  1024,
       0,     0,     0,  1297,  1298,     0,  1025,  1026,   108,     0,
       0,  1299,     0,     0,     0,     0,     0,     0,   110,     0,
       0,     0,     0,     0,  1027,     0,     0,     0,     0,     0,
    1028,     0,     0,     0,  1029,  1030,     0,     0,  1031,  1300,
    1301,     0,     0,  1302,     0,     0,   110,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1032,     0,     0,   108,
       0,  1303,  2760,     0,   111,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1033,     0,  2769,
       0,     0,  1304,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   111,  2780,     0,     0,  2783,     0,     0,     0,
     512,  1034,     0,     0,     0,     0,  1305,     0,     0,     0,
       0,     0,     0,     0,     0,  1306,     0,     0,     0,     0,
       0,     0,   113,     0,     0,  1035,     0,     0,     0,   108,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   111,     0,     0,     0,     0,     0,     0,
     113,     0,     0,     0,     0,  1036,     0,  1037,     0,     0,
    1307,     0,     0,  1038,  1039,     0,     0,  1347,  1308,  1309,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1040,
    1041,     0,     0,     0,   118,  1310,     0,     0,     0,   119,
    1042,  1043,     0,     0,     0,     0,  1311,     0,     0,     0,
       0,   113,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   118,   111,     0,     0,  1044,   119,  1045,     0,
       0,  1312,     0,  1313,     0,     0,     0,     0,     0,     0,
    1046,     0,  1047,  1314,     0,     0,     0,     0,  1048,   992,
       0,     0,     0,  1315,   993,     0,     0,     0,     0,     0,
     516,     0,     0,     0,     0,   108,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,     0,
       0,   113,  1049,     0,     0,     0,     0,  1316,     0,     0,
       0,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   513,   119,   111,
    1384,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,     0,     0,     0,     0,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,     0,     0,
       0,     0,     0,     0,   119,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,     0,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,  1385,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,     1,     0,     0,     2,     0,     0,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     0,     0,     0,     0,     5,     6,
       0,     7,     8,     9,     0,     0,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,    11,     0,
      12,    13,     0,     0,     0,     0,     0,     0,     0,     0,
      14,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   178,     0,     0,   179,     0,     0,
     180,     0,     0,    16,     0,     0,     0,     0,     0,     0,
       0,     0,    17,     0,     0,     0,     0,     0,     0,   181,
       0,   182,   183,   184,     0,    18,     0,     0,     0,    19,
       0,   185,    20,   186,     0,     0,    21,    22,   187,     0,
     188,   189,   190,    23,     0,     0,     0,     0,   191,    24,
     192,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,     0,     0,    26,    27,    28,
       0,     0,    29,    30,     0,     0,     0,     0,     0,     0,
       0,   193,     0,     0,     0,     0,     0,    31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   194,
       0,     0,     0,     0,    32,    33,    34,   195,     0,   196,
     197,     0,     0,   198,     0,     0,     0,   199,    35,   200,
      36,     0,     0,     0,     0,     0,     0,    37,     0,     0,
       0,    38,     0,     0,     0,    39,     0,    40,     0,    41,
       0,     0,   201,   202,    42,     0,     0,   203,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   204,    43,     0,
       0,     0,     0,     0,    44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   205,   206,     0,     0,     0,    45,
      46,     0,   207,     0,     0,     0,     0,     0,     0,     0,
       0,    47,     0,    48,     0,     0,     0,     0,     0,    49,
       0,     0,    50,    51,     0,     0,     0,   208,     0,   209,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,   210,     0,     0,     0,     0,     0,
      53,     0,     0,     0,     0,     0,     0,     0,     0,   211,
     212,     0,     0,     0,     0,     0,     0,     0,   213,     0,
       0,     0,     0,     0,     0,   214,     0,     0,     0,     0,
       0,   215,     0,   216,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     217
};

static const yytype_int16 yycheck[] =
{
       3,    51,  1468,   901,   489,   669,   670,  1015,    11,   674,
    1667,     0,  1669,    16,     4,     3,     4,    16,     5,     4,
       3,     4,     3,     4,     5,     4,     3,     4,    26,     4,
      33,     5,     5,     5,    56,     4,     5,     4,    41,     3,
       4,    61,     5,   889,   890,   891,     5,    50,     4,   153,
      53,    44,  1170,    56,  1172,     3,     4,    60,    35,    16,
      63,     4,    39,    33,    67,    68,    59,    38,    71,    16,
       5,    74,    75,    39,    26,    78,     3,     4,     4,    82,
    1198,  1199,  1200,    20,    87,     3,     4,    43,    81,    19,
      46,     4,   106,     4,     3,     4,    87,   100,   101,   102,
     103,   104,   105,    31,     3,     4,     4,    31,   101,     3,
       4,   957,    16,    13,     4,     5,    50,   219,   121,     5,
      76,   986,   292,    61,   989,   118,   100,   168,    84,   122,
       3,     4,   106,    15,   142,   112,     4,    66,     3,     4,
       4,  1006,     3,     4,   114,   199,   112,     4,     5,    26,
       3,     4,   121,   156,    20,    87,   135,   150,   151,   136,
     104,    61,    32,   267,    61,   121,   100,     3,     4,   160,
      20,    48,   199,   181,    51,   109,    66,    46,   181,   169,
      20,     4,    35,   186,   122,    62,     5,   201,    56,    61,
     146,    64,     3,     4,   148,    99,    20,    16,    88,    35,
     222,   127,    66,   257,   237,   193,   140,    20,    85,   122,
     312,   199,   205,     4,    15,   162,   186,   200,   188,   218,
     190,   191,   215,   200,     5,   122,   103,   126,   160,   199,
     201,   121,   273,   231,   200,    63,     5,   264,    31,   208,
      20,   255,   198,    66,   214,     4,   249,   216,   217,   193,
     238,   301,   208,   143,    26,   203,   199,   121,   144,     4,
     216,   217,   265,   266,   121,   126,   190,   223,   933,   225,
     290,   445,   138,     4,   233,    66,   264,   105,   281,   231,
     283,   455,   255,   136,   277,   278,   212,   144,   291,   292,
     253,   294,   295,   313,   297,    16,   196,   253,   121,   193,
     136,    57,   301,   292,   307,   203,   278,    66,   245,   294,
     267,   241,   210,   211,   317,   318,     4,   300,   208,   294,
     202,   300,   310,   300,   294,   312,   216,   217,   193,   319,
     121,   312,   267,   300,   303,   309,   300,   340,   341,   342,
     309,   344,   253,   281,   208,   348,   349,   303,   246,   118,
     319,   208,   216,   217,   222,   348,   359,   360,   293,   216,
     217,   289,   121,   319,   367,   289,   354,   355,   302,   372,
     373,   271,    26,   300,  1039,    66,   121,   380,   134,   245,
     383,   281,   300,   352,   281,   208,     3,     4,   357,   358,
     121,   300,  1057,   216,   217,   245,   352,   190,   170,   402,
     403,   357,   358,   209,   125,   245,   409,   410,   411,   275,
     413,   280,   312,   303,   242,  1261,   310,   208,   290,   309,
     231,   245,  1430,  1269,   427,   216,   217,  1091,   431,   198,
     258,   259,   245,   436,   437,   438,   439,   440,   441,   303,
     443,   313,   445,   446,   447,   310,   303,   300,  1456,   208,
     171,    12,   455,   456,    61,   353,    70,   216,   217,  1123,
     354,   355,   352,   208,   300,   245,   356,   357,   358,    88,
    1478,   216,   217,   245,   444,     4,   232,   208,  1596,   237,
     303,     4,   359,    11,   253,   216,   217,     4,   352,   354,
     355,   247,     4,   357,   358,   352,   289,   218,    13,    14,
     357,   358,     3,     4,    39,   173,   509,   510,     4,   278,
      39,   199,   303,    26,   182,   122,   170,    29,   290,     3,
       4,    29,   350,   351,   527,    53,     4,     5,    39,   352,
      78,    66,    39,    39,   357,   358,  1401,    29,     0,  1404,
     714,   591,   142,    71,   303,   351,    61,     3,     4,   294,
     277,   357,   555,   359,   310,    39,   137,   172,   303,   173,
      56,   352,   250,   533,    66,   100,   357,   358,   106,   257,
       5,   106,   303,   101,    33,    59,  2699,   112,     4,    36,
     301,   181,    60,   112,   634,   588,     5,    95,    66,    61,
      47,   245,   120,   352,    13,    14,   124,   132,   357,   358,
     570,   112,     5,   653,    98,   112,   112,   352,     5,    61,
     138,     5,   357,   358,   231,    63,   231,    74,   153,    13,
      14,   352,   625,    30,  2747,    61,   357,   358,   112,   177,
     132,     5,     5,   168,   195,   160,   290,   115,   252,    13,
      14,     5,    61,   200,  1309,  2302,   253,   261,   651,   108,
     122,     4,   164,   118,   132,  1320,   158,   105,   166,   172,
       3,     4,    66,   201,   189,   668,   201,    61,   671,   147,
     122,   200,   164,   254,   281,   153,   850,     5,     3,     4,
     158,   196,   197,   298,    14,    15,   122,    61,   160,   200,
       5,    61,    22,   200,   200,   698,   153,    27,    13,    14,
     703,   704,   705,   706,    34,   240,   709,   219,   711,   257,
     713,   714,   715,    56,     5,    61,   200,   255,   231,   893,
     255,   120,    13,    14,   253,    55,   222,   219,    56,   292,
     231,     4,   267,   245,    83,   192,   214,    65,   240,    61,
     790,   173,    72,    32,    13,    14,    61,    13,    14,   257,
     209,   100,   122,   245,   262,   233,   271,    61,   214,   294,
     238,   272,   240,  2589,    66,   272,   281,   282,    13,    14,
      61,   306,   300,   308,   309,   269,   122,   196,   197,   782,
     783,  2607,   785,   786,   787,   788,     3,     4,   266,   267,
     292,     5,    61,  1691,   242,    61,   274,   312,   801,   802,
     122,    89,   196,   197,   261,   808,   809,    61,    61,   281,
     258,   259,   296,   348,   292,    88,    61,    15,   122,   267,
      66,    25,   196,   197,  1670,   828,   829,   830,     5,   281,
      26,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   291,   845,   846,   847,   281,   849,   850,   851,   122,
     853,   238,   271,    30,    89,  2521,   313,  1865,     3,     4,
      91,    78,   281,   282,     3,     4,    11,   286,   122,   122,
     348,   874,  1880,   876,  1992,  1993,  1994,   271,    45,   222,
      63,   196,   197,   886,     3,     4,    66,   281,   282,   214,
     893,   894,   286,   312,   222,    30,   899,   271,  1562,    66,
    1908,  1766,   350,   351,   874,   196,   197,   281,   282,   113,
    2736,   281,   286,   916,    81,     0,  2742,   920,   312,     4,
      39,  1786,   105,   127,   927,   928,   929,   196,   197,    72,
     196,   197,   935,   263,   264,   281,  1801,   940,   312,  1804,
     133,    43,   992,   174,   127,     3,     4,  1812,   951,     5,
    1815,   196,   197,    11,     3,     4,   271,     5,  1823,   281,
     177,  1826,    25,   293,    18,   968,   281,   282,  1833,  2635,
      21,   286,  2798,   133,  2800,  1149,   172,   281,    54,   172,
     271,  2647,     3,     4,     4,    87,    40,   126,     4,    43,
     281,   282,     5,   112,  2460,   286,     5,   312,    49,   153,
       4,    52,   271,  2011,    55,   271,   336,   337,   338,   213,
      59,     5,   281,   282,    90,   281,   282,     4,    36,     5,
     187,   312,   226,    77,    11,     5,   271,   281,   281,    47,
      84,    82,  1035,     4,   265,   231,   281,   282,   231,    94,
     257,    95,    96,   312,    83,   193,   312,     4,   102,     4,
     113,   199,   283,  1056,    13,    14,    74,   112,  2458,   242,
     111,   100,  1065,   114,   127,    23,    24,   312,   144,     4,
     224,   231,     5,   127,     4,   258,   259,   122,  1081,   246,
    1083,   200,    45,    98,  2484,  1088,  1089,  1090,     5,    27,
     238,   145,  1266,     3,     4,  1098,   198,   290,  1101,   162,
    1103,    64,    61,    66,     4,   159,   160,    13,    14,   278,
      13,    14,   166,   267,     3,     4,   264,  1120,   270,  1122,
       4,   142,     4,   290,   270,   277,  1972,  1130,  1131,     4,
     290,   277,   299,     5,   188,   153,    41,    42,   193,     4,
      98,   180,  1145,  1146,     3,     4,  1149,  1150,  1151,    59,
     213,   305,     3,     4,  1157,    61,  1159,    16,    61,  1162,
     181,  1164,   310,   226,  1214,     3,     4,   350,   351,   203,
      59,     4,     5,   227,   192,     3,     4,   253,     6,     7,
       3,     4,   233,     4,    27,   224,     4,  2587,  2588,     4,
       5,  2591,     4,  2593,  2040,     4,     3,     4,  1201,     4,
       5,    39,  1205,     5,  1207,  2605,  2606,   355,  1211,     5,
    2610,  2611,     3,     4,  2614,   266,   154,  2063,     8,  2619,
    2620,   260,    10,  1226,   187,  1228,   280,  1230,  1231,  1232,
    1233,  2239,    39,     5,  1237,  1238,   290,   196,   197,   277,
     178,   292,  1245,   261,   182,     4,     5,  2255,    82,  1252,
     173,  2116,  2260,  1256,  1257,  1258,  1226,     4,    34,    88,
    2125,     4,     5,  1266,  1267,   319,     4,  1270,   182,  2134,
     175,   176,    82,  2673,   112,  1278,  2676,  1280,   173,   297,
    1283,  2681,     4,   246,     3,     4,     5,  2687,   117,   619,
     196,   197,  2692,   196,   197,   313,    18,   235,     4,   204,
     202,  1271,     3,     4,   202,   112,     5,     8,     9,    10,
       5,   154,   271,     3,     4,     5,     6,     7,     4,  1289,
     194,   155,   281,   282,  1327,   202,  1329,   290,    21,  1332,
    1333,   107,  1335,   194,  1337,   178,   299,    66,   276,   182,
    1343,   231,  1345,   673,     5,   155,   284,   285,   678,  1352,
       3,     4,     5,   312,   130,   131,    49,    66,    66,    52,
     433,   434,   191,   139,  2764,   271,   232,  2767,   271,     5,
       3,     4,     3,     4,     5,   281,   282,   206,   281,   282,
     102,   157,     4,     4,     4,    18,   202,  2787,     5,    82,
      87,   167,   235,    87,     5,   229,   230,  2452,     4,     4,
    2455,  2801,  2457,     5,  2804,  2805,   312,     5,     4,   312,
     244,     5,   100,     4,     4,  2470,  2471,     5,   111,   229,
     230,   114,     4,    56,  1427,  1428,  1429,    16,     4,  2275,
      16,     4,  2487,   276,   244,    98,  2282,     5,   160,   268,
       5,   284,   285,    87,     4,    87,  1449,     5,  2456,    61,
    1453,     5,     5,   287,     4,     4,  1426,     5,     5,     4,
       4,  2469,     5,     5,     5,     4,  2474,     4,   160,   102,
       5,    11,     4,  1476,  1477,    11,     4,   287,     4,     4,
     309,     5,     4,  1486,     5,   169,  1489,     5,     4,  2335,
     319,   160,  2338,  1496,     4,  2341,     5,  2343,     4,    37,
     266,   266,   832,    37,     5,   227,   118,  1510,   294,     4,
     122,     5,  1515,     5,     5,     5,  1519,     4,  1521,  1522,
       4,  1524,  1525,  1526,     5,  1528,     5,   160,  1531,  1532,
    1533,  1534,  1535,  1536,  1537,  1538,  1539,  1540,  1541,   279,
     233,  1544,  1545,  1546,  1547,   279,     5,     5,   160,     5,
       4,  1554,  1555,     4,     4,  1558,  1559,  1560,     5,     5,
       5,  1564,  1565,     3,     4,     5,     6,     7,     3,     4,
       5,     6,     7,   266,  1577,  1578,     5,  1580,  1581,     5,
       5,     4,    39,     5,     5,     4,   198,     5,     5,   222,
     245,   245,   106,   245,   227,   245,     5,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,  1628,  1629,  1630,   106,   142,
    1633,   245,   245,   106,     5,  1638,  1639,   249,  1641,  1642,
    1643,   253,  1645,  1646,   218,  1648,    39,  2493,  1651,  1652,
      66,   251,   251,     5,   218,     4,   218,  1660,     5,     5,
       4,   218,     4,     4,    80,  1668,   278,     5,  1638,   281,
    1673,  1674,     5,    89,     5,     5,  1679,     5,   112,   291,
     112,     4,    11,     5,   100,  1688,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,     5,     5,   132,     4,  1721,     5,
       5,     4,    11,     5,     5,  2733,     4,    53,     5,     5,
       4,     4,  1062,  1703,     5,     5,     4,   153,     5,  1742,
    1743,     4,  1712,     4,  1747,    71,  1716,     4,     4,  1923,
    1753,     5,    21,    92,     4,     0,     5,    26,   142,   245,
     245,   100,    88,   245,   172,   245,     4,   106,   245,   245,
     214,   202,   255,   296,     4,   101,     4,     4,     4,    48,
      49,     4,    51,    52,   123,   201,     5,     5,     5,  1119,
     129,   279,     5,    62,   120,     5,     5,     4,   124,     4,
      11,     5,     4,  1133,  1978,    74,    75,     4,     4,   245,
       5,     5,   138,    82,   153,     5,    85,   245,   245,   316,
     316,     4,   161,     4,   240,     4,     4,     4,     4,     4,
       4,   231,   355,     5,   103,     5,   231,   231,     5,   231,
     231,   110,   111,     4,   316,   114,  2020,   316,     4,   279,
       5,   267,     4,   179,     5,     5,     4,  1860,  1861,     5,
    1863,     5,   201,     4,     4,     4,   279,     5,     5,     4,
     209,     4,   279,     5,     5,     4,   432,     5,  1881,  1882,
    1883,  1884,  1885,  1886,  1887,  1888,  1889,     5,     4,     4,
     306,     5,   308,     4,     4,   360,     5,     5,     5,     5,
       5,  1904,     4,  1906,     5,     5,     5,    33,   177,     5,
       4,  1241,  1242,     4,   312,     5,   255,     4,     4,  1922,
    1923,     5,     5,     5,     4,  1928,     5,     5,   267,     5,
       5,     4,     4,     4,  1937,  1938,  1939,  1940,  1941,  1942,
    1943,  1944,  1945,  1946,   283,     5,  1949,  1950,  1951,  1952,
    1953,  1954,  1955,  1956,  1957,  1958,  1959,  1960,  2623,  1962,
       5,  1964,  1965,  1966,   233,     5,     5,     4,   292,     5,
     239,     5,     5,     5,     4,  1978,  1979,     4,   360,     5,
       5,     5,     5,     4,   507,     4,     4,   256,   114,     5,
       4,   514,     4,     4,   517,     5,     5,   266,     5,   522,
       5,     5,     4,   526,     4,   360,     5,     4,     4,  2012,
       5,  2014,     5,  2016,     4,  2018,     4,  2020,  2021,     5,
    2023,     5,     4,     4,   293,   294,  2029,  2030,     5,     5,
       4,   387,     5,  2036,     5,  2038,  2701,     5,     5,  2042,
       5,     5,  2045,     4,     4,   314,     5,     4,   360,     5,
    2224,  2225,     5,  2227,  2228,     5,     4,  2231,  2232,   185,
       4,   187,   188,     5,   190,   191,     5,     5,     5,     4,
     593,     4,   360,     5,     5,     5,     5,     4,  2048,     4,
     360,     5,     4,     4,     4,     4,  2089,     4,     4,     4,
     359,     4,  1422,   219,     4,   360,     4,     4,     4,     4,
       4,   360,     4,   292,     5,     5,     4,   360,     5,     4,
    2757,     5,   238,   239,     4,     4,   985,  2087,  2292,     5,
       5,  1451,     5,     4,     4,  1455,     4,     4,     4,     4,
       4,     4,     4,  2634,     5,     4,     4,  2187,     5,     5,
       5,     5,     4,  2250,     5,     5,    55,     4,     4,     4,
       4,  1481,     5,     4,     4,     4,   282,    66,     5,     4,
       4,  1491,     4,  2621,     5,     5,     4,     4,   294,     4,
    1500,  1501,     4,     4,  2701,     5,     4,  2697,     5,     5,
       4,  1511,     4,    92,    93,     5,     5,   710,   314,     5,
    2193,   100,     4,     4,   717,     5,     5,   106,     5,     4,
      -1,  2204,  2205,  2206,  2207,  2208,  2209,  2210,  2211,  2212,
    2213,  2214,     5,     5,   123,     5,   749,  2220,    -1,    -1,
     129,  2224,  2225,   132,  2227,  2228,  2711,  2712,  2231,  2232,
    2233,  2234,  2235,  2236,  2237,  2238,    -1,  2240,  2241,  2242,
      -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,   973,    -1,
      -1,    -1,   161,  2256,  2257,  2258,  2259,    -1,  2261,  2262,
    2263,  2264,  2265,  2266,    -1,  2268,    -1,  2441,  2271,  2272,
      -1,  2445,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1005,    -1,    -1,    -1,    -1,    -1,  2289,    -1,    -1,  2292,
    2293,    -1,   201,    -1,  2297,    -1,    -1,  2300,   424,    -1,
     209,    -1,    -1,    -1,    -1,    -1,    -1,  2481,    -1,   435,
      -1,    -1,   835,    -1,    -1,    -1,    -1,    -1,   444,   842,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2348,   255,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,    -1,
      -1,    -1,    -1,    -1,   887,   888,    -1,    -1,    -1,   892,
      -1,    -1,   895,    -1,   283,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   292,   907,   294,   512,   513,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   525,
      -1,    -1,    -1,    -1,   530,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   539,    -1,    -1,    -1,  2420,    -1,    -1,
      -1,  2424,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2434,  2435,    -1,    -1,    -1,    -1,  2440,  2441,   348,
      -1,  2444,  2445,    -1,    -1,    -1,    -1,  2450,    -1,    -1,
    2453,  2454,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2472,
    2473,    -1,  2475,  2476,  2477,  2478,  2479,    -1,  2481,  2482,
      -1,    -1,    -1,  2486,    -1,   611,   612,   613,   614,    -1,
    1013,     3,     4,    -1,    -1,    -1,  2499,    -1,    -1,    -1,
    1369,  2504,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,  1381,    -1,    -1,    -1,    -1,    -1,    -1,  2522,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1399,  1400,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1874,    -1,   672,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2564,    -1,    -1,    -1,    -1,  2569,    -1,  2571,    -1,
      -1,    -1,    -1,    -1,  2577,    -1,    -1,    -1,    -1,  1909,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2590,    -1,    -1,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2608,    -1,    -1,    -1,  2612,
      -1,  2661,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1353,  1354,
    1355,  2634,    -1,    -1,    -1,    -1,    -1,    -1,  1363,  1364,
    1365,    -1,    -1,    -1,    -1,  1370,  1371,  1372,   160,    -1,
    1375,  1376,    -1,  1378,  1379,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2665,    -1,    -1,    -1,    -1,  2670,    -1,  2672,
      -1,    -1,    -1,    -1,    -1,    -1,  2679,    -1,    -1,    -1,
      -1,  2684,    -1,  1408,  1409,    -1,  2689,  1412,  1413,    -1,
    1213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2711,  2712,
     836,    -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,    -1,
      -1,  1244,   848,    -1,    -1,    -1,  1249,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2737,    -1,  1259,  2740,    -1,    -1,
    2743,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2753,  2754,  2755,  2756,    -1,    -1,    -1,    -1,  2728,   885,
      -1,    -1,  2765,    -1,    -1,  2768,    -1,    -1,    -1,    -1,
      -1,    -1,  2775,    -1,  2777,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2759,
      -1,    -1,  2762,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,    -1,    -1,   963,  2041,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2057,  2058,  2059,    -1,    -1,  2062,
      -1,  2064,  2065,    -1,    -1,  2068,  2069,  2070,    -1,    -1,
    2073,  2074,    -1,    -1,  2077,    -1,  2079,  2080,    -1,  2082,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1776,    -1,    -1,
      -1,    -1,  1038,    -1,    -1,  1784,  1785,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1799,  1800,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1810,  1811,    -1,    -1,    -1,  2276,    -1,    -1,    -1,
      -1,    -1,  1821,  1822,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1831,  1832,    -1,    -1,  1092,  1490,  1837,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1102,    -1,  1847,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2189,    -1,    -1,  2192,
      -1,    -1,    -1,    -1,  2197,    -1,    -1,  2200,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2219,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1550,    -1,    -1,
      -1,    -1,  1757,  1556,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1770,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1780,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1209,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1226,  2304,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,
       5,    -1,  1635,    -1,    -1,    -1,    -1,  1640,    -1,    -1,
      -1,    -1,    -1,    -1,  1250,    -1,    -1,  1852,    -1,    -1,
      -1,    -1,    -1,  2336,  1260,    -1,    -1,    -1,  2468,    -1,
      -1,    -1,  1665,    -1,    -1,    -1,    -1,    -1,  1671,    -1,
      -1,  1277,    -1,    -1,    -1,    -1,    -1,    -1,  2488,    -1,
      -1,    -1,  2492,  1289,    -1,    60,    -1,    -1,  1294,    -1,
      -1,    66,    -1,    -1,    -1,  1698,    -1,    -1,    73,    -1,
      75,    -1,  1705,    -1,    -1,    80,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,   106,    -1,  2416,    -1,    -1,    -1,    -1,    -1,    -1,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2100,    -1,  2436,    -1,    -1,    -1,   132,    -1,    -1,
    2443,  2110,    -1,  2446,  2447,  2114,  2115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2123,  2124,    -1,    -1,   153,    -1,
      -1,    -1,    -1,  2132,  2133,    -1,    -1,    -1,    -1,  2138,
      -1,    -1,    -1,   168,    -1,    -1,    -1,    -1,    -1,  2148,
    2149,    -1,    -1,    -1,   179,   180,    -1,    -1,    -1,    -1,
    2159,  2160,    -1,    -1,    -1,    -1,    -1,  2627,    -1,    -1,
    1426,  2170,    -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,
    2179,    -1,  2181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1454,   224,
      -1,    -1,    -1,    -1,  1857,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   238,    -1,   240,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1877,    -1,  1482,    -1,    -1,  1485,
     255,    -1,  2565,    -1,    -1,   260,    -1,    -1,  1494,  1495,
      -1,    -1,   267,    -1,  2099,    -1,  1502,    -1,    -1,   274,
      -1,  2584,    -1,  1509,    -1,    -1,    -1,  1910,  1911,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,
      -1,    -1,    -1,  1926,  1927,    -1,    -1,    -1,  1931,  1932,
     305,   306,    -1,   308,  2139,  2140,  2141,  2142,  2143,  2749,
    2145,  2146,    -1,  1549,    -1,  2150,  2151,  2152,  2153,  2154,
      -1,  2156,  2157,    -1,    -1,  1561,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1971,    -1,
      -1,    -1,    -1,   348,    -1,    -1,    -1,    -1,    -1,  1982,
    2663,  2664,    -1,  2666,    -1,  2668,  2669,    -1,  2671,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2352,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2362,  2017,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2371,    -1,    -1,    -1,    -1,    -1,    -1,  2032,
      -1,  2380,  1638,    -1,    -1,    -1,    -1,    -1,  2387,    -1,
    2723,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2398,
    1656,    -1,  2055,    -1,    -1,  2404,    -1,  2060,  2407,    -1,
      -1,  2410,    -1,  2066,    -1,    -1,  1672,    -1,  2071,    -1,
      -1,    -1,  2075,    -1,    -1,  2078,    -1,    -1,  2081,  1685,
    2083,  1687,    -1,    -1,    -1,    -1,  2769,    -1,    -1,    -1,
      -1,  1697,    -1,    -1,  1700,  1701,  1702,  1703,  1704,    -1,
    1706,    -1,    -1,  1709,    -1,    -1,  1712,  1713,  1714,  1715,
    1716,  1717,    -1,  1719,  1720,    -1,    -1,    -1,  1724,  1725,
    1726,    -1,    -1,  1729,  1730,    -1,    -1,    -1,    -1,  1735,
    1736,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2351,    -1,    -1,  2354,
    2355,  2356,  2357,  2358,    -1,  2360,  2361,    -1,  2363,  2364,
    2365,  2366,  2367,    -1,  2369,  2370,    -1,  2372,  2373,  2374,
    2375,  2376,    -1,  2378,  2379,     4,  2381,    -1,    -1,    -1,
      -1,  2530,    -1,    -1,    -1,    -1,  2391,  2392,    -1,    18,
    2539,    -1,    -1,    -1,    -1,    -1,    -1,  2402,    -1,  2548,
      -1,    -1,    -1,    -1,    -1,  2554,    -1,    -1,    -1,  2558,
      39,    -1,  2561,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1859,    -1,    -1,  1862,    -1,    -1,    38,
      -1,    -1,    -1,    -1,  2267,    -1,    -1,  1873,    -1,    -1,
    1876,    -1,    -1,   102,    -1,    -1,    -1,    56,    -1,    -1,
    2283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,    -1,  1905,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2312,
      -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,    -1,    -1,    -1,    18,  2533,    -1,
      -1,   160,    -1,    -1,    -1,    -1,    -1,  2542,    -1,    -1,
      -1,    -1,  2345,    -1,    -1,    -1,  2551,    -1,  2553,    -1,
      -1,    -1,  2557,    -1,  1960,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,   200,    -1,    -1,    -1,    -1,    -1,  1983,    -1,   208,
      -1,   160,    -1,    -1,    -1,    -1,    -1,   216,   217,    -1,
      -1,    -1,    -1,   222,    -1,    -1,    -1,    -1,   227,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2413,   102,    -1,    -1,    -1,    -1,  2419,    -1,    -1,    -1,
    2423,   200,    -1,    15,    -1,    -1,    -1,  2033,    -1,    -1,
      22,    -1,    -1,    -1,    -1,    -1,  2439,    -1,    -1,    -1,
      -1,    -1,  2048,   222,    -1,  2650,    -1,  2652,   227,  2654,
      -1,    -1,  2657,    -1,  2659,    -1,    -1,    -1,    -1,   238,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,
    2076,    -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,
      -1,  2087,    -1,    -1,    -1,    -1,    -1,  2490,  2491,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,    -1,    -1,
      -1,   300,    -1,   352,    -1,    -1,    -1,    -1,   357,   358,
      -1,   222,    -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2191,    -1,    -1,  2194,    -1,
      -1,    -1,  2595,    -1,    -1,    -1,  2202,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2218,    -1,    18,  2221,    -1,    -1,    -1,    -1,
    2226,    -1,    -1,  2229,  2230,    -1,    -1,    -1,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   248,    -1,    -1,   251,
      -1,    65,    66,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      -1,  2277,  2278,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
    2693,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2317,  2715,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,    -1,   160,  2760,   102,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,
      -1,    -1,   116,    -1,    -1,    -1,    -1,  2780,    -1,    -1,
    2783,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2415,
     214,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,    -1,
      -1,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   178,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2448,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2459,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   280,    -1,    -1,    -1,
      -1,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2509,    -1,    -1,    -1,  2513,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,    -1,   348,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2567,  2568,    -1,  2570,    -1,    -1,    -1,    -1,  2575,
    2576,    -1,    -1,    -1,  2580,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,    19,    20,    21,    -1,  2613,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,  2641,    52,    48,    49,    55,
      18,    52,    -1,    -1,    -1,    -1,    62,    -1,    59,    -1,
      66,    62,    -1,    -1,    -1,    66,    -1,    -1,    74,    75,
      -1,    -1,    -1,    74,    75,    -1,    82,    83,    18,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,   110,   111,    -1,    -1,   114,   110,
     111,    -1,    -1,   114,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,    18,
      -1,   132,  2728,    -1,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,  2745,
      -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,  2759,    -1,    -1,  2762,    -1,    -1,    -1,
      59,   177,    -1,    -1,    -1,    -1,   177,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,
      -1,    -1,   160,    -1,    -1,   201,    -1,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,
     160,    -1,    -1,    -1,    -1,   231,    -1,   233,    -1,    -1,
     231,    -1,    -1,   239,   240,    -1,    -1,    56,   239,   240,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   255,
     256,    -1,    -1,    -1,   222,   256,    -1,    -1,    -1,   227,
     266,   267,    -1,    -1,    -1,    -1,   267,    -1,    -1,    -1,
      -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   222,   102,    -1,    -1,   292,   227,   294,    -1,
      -1,   292,    -1,   294,    -1,    -1,    -1,    -1,    -1,    -1,
     306,    -1,   308,   304,    -1,    -1,    -1,    -1,   314,   160,
      -1,    -1,    -1,   314,   165,    -1,    -1,    -1,    -1,    -1,
     288,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,
      -1,   160,   348,    -1,    -1,    -1,    -1,   348,    -1,    -1,
      -1,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   296,   227,   102,
     165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,    -1,    -1,    -1,    -1,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,    -1,    -1,
      -1,    -1,    -1,    -1,   227,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,    -1,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,    40,    -1,    -1,    43,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    64,    65,
      -1,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    -1,    -1,
      46,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   128,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    67,    68,    69,    -1,   141,    -1,    -1,    -1,   145,
      -1,    77,   148,    79,    -1,    -1,   152,   153,    84,    -1,
      86,    87,    88,   159,    -1,    -1,    -1,    -1,    94,   165,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   180,    -1,    -1,   183,   184,   185,
      -1,    -1,   188,   189,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   127,    -1,    -1,    -1,    -1,    -1,   203,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,
      -1,    -1,    -1,    -1,   220,   221,   222,   153,    -1,   155,
     156,    -1,    -1,   159,    -1,    -1,    -1,   163,   234,   165,
     236,    -1,    -1,    -1,    -1,    -1,    -1,   243,    -1,    -1,
      -1,   247,    -1,    -1,    -1,   251,    -1,   253,    -1,   255,
      -1,    -1,   188,   189,   260,    -1,    -1,   193,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,   274,    -1,
      -1,    -1,    -1,    -1,   280,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   220,   221,    -1,    -1,    -1,   295,
     296,    -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   307,    -1,   309,    -1,    -1,    -1,    -1,    -1,   315,
      -1,    -1,   318,   319,    -1,    -1,    -1,   253,    -1,   255,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   349,   280,    -1,    -1,    -1,    -1,    -1,
     356,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   295,
     296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,
      -1,    -1,    -1,    -1,    -1,   311,    -1,    -1,    -1,    -1,
      -1,   317,    -1,   319,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     356
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    40,    43,    46,    59,    64,    65,    67,    68,    69,
      77,    84,    86,    87,    96,    97,   119,   128,   141,   145,
     148,   152,   153,   159,   165,   180,   183,   184,   185,   188,
     189,   203,   220,   221,   222,   234,   236,   243,   247,   251,
     253,   255,   260,   274,   280,   295,   296,   307,   309,   315,
     318,   319,   349,   356,   362,    66,    11,    53,    71,   101,
     120,   124,   138,   300,   396,     3,     4,   300,   363,   401,
     193,   199,   238,   264,   310,   355,   403,   292,     4,    39,
     112,   200,   253,   408,    27,   154,   178,   182,   235,   276,
     284,   285,   378,   410,    83,   100,   180,   224,   260,   411,
      39,    59,   112,   200,   296,   363,   420,     4,    18,    39,
      56,   102,   121,   160,   200,   208,   216,   217,   222,   227,
     303,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     352,   357,   358,   365,   373,   374,   375,   422,    32,   423,
     365,    43,    46,    76,    84,   146,   198,   223,   225,   253,
     319,   364,   365,    64,   363,   425,   148,   426,    40,    43,
      46,    65,    67,    68,    69,    77,    79,    84,    86,    87,
      88,    94,    96,   127,   145,   153,   155,   156,   159,   163,
     165,   188,   189,   193,   203,   220,   221,   228,   253,   255,
     280,   295,   296,   304,   311,   317,   319,   356,   427,    83,
     100,   471,    18,    40,    43,    77,    84,    95,    96,   102,
     127,   145,   159,   160,   166,   188,   227,   280,   290,   319,
     474,    66,   365,    88,   117,   191,   206,   268,   309,   319,
     480,    15,    25,   113,   127,   162,   213,   226,   483,   237,
     501,     5,    66,    88,   143,   309,   356,   365,   502,     5,
     503,    57,   134,   232,   247,   310,   519,    45,    64,    66,
     187,   246,   290,   299,   539,    66,   209,   351,   357,   359,
     540,    38,   200,   238,   300,   363,   373,   375,   541,     5,
     309,   319,   365,   544,    70,   173,   252,   261,   545,     4,
     546,    88,   519,    61,   290,   313,   553,   200,   300,   363,
     554,    25,   113,   127,   213,   226,   556,    50,   100,   109,
     140,   302,   571,   572,     4,    36,    47,    74,   153,   192,
     261,   297,   313,   391,     4,   127,   212,   573,   300,   363,
     575,    15,    22,   248,   251,   374,   576,   237,   580,   300,
     363,   581,     0,     5,   144,   365,    59,   363,   397,   277,
       5,     4,   300,   363,   398,     5,    31,   289,   399,   126,
     363,   400,   126,   363,   402,   363,     4,   199,   250,   257,
     406,   193,   310,   354,   355,   363,   405,   365,   142,   181,
     404,   203,   363,    78,   177,   257,   363,   407,     5,   363,
       4,   253,   409,   363,   363,     5,   233,   412,    30,   413,
       5,   414,     5,   418,     5,    30,   419,   363,     8,     9,
      10,   363,   369,   370,   371,   372,   363,   363,    39,   112,
     200,   363,   421,   363,   200,   373,   375,   363,    34,   107,
     130,   131,   139,   157,   167,   380,   363,     4,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   118,    66,
      53,    71,    88,   101,   120,   124,   138,   179,   430,   120,
     432,   193,   199,   238,   264,   310,   354,   355,   363,   415,
     433,   292,   436,   173,   437,   173,   182,   439,    65,    66,
      69,    92,   173,   192,   214,   280,   348,   373,   441,   363,
     375,   444,    59,   296,   373,   445,   288,   373,   375,   446,
      32,   447,   373,   375,   448,     4,   373,   375,   449,    44,
      59,    81,   101,   118,   122,   150,   151,   205,   215,   277,
     278,   348,   453,   219,   312,   459,    66,     5,    89,     4,
      88,   122,   451,     5,    65,   375,   450,    15,   519,    45,
      66,    81,   187,   246,   290,   299,   460,    66,   238,   461,
     291,    61,   290,   313,   462,    20,   138,   245,   275,   463,
      36,    47,    74,   153,   192,   261,   313,   464,   375,    89,
      15,   202,   469,   373,   472,    66,    72,   475,    30,   476,
      43,    87,   198,   477,   153,   224,   267,   305,   478,   373,
      17,    58,   116,   178,   296,   373,   479,     5,     4,   199,
     482,     5,     4,     4,   122,   363,     4,     5,   253,   484,
       5,   486,     5,   118,   198,   253,   278,   487,    94,   112,
     193,   500,     5,   498,     5,   278,   499,     4,     5,   365,
     365,   363,   363,     5,     4,     5,    60,    66,    73,    75,
      80,    83,    89,   100,   106,   115,   132,   153,   168,   179,
     180,   201,   224,   238,   240,   255,   260,   267,   274,   292,
     305,   306,   308,   348,   504,    91,   174,   265,   283,   377,
       5,     4,   203,   210,   211,   246,   353,   376,   363,   373,
     363,     5,   144,   363,    39,   112,   363,   543,   365,   363,
     373,   375,   542,   363,   380,   363,     4,   374,    54,    90,
     144,   253,   547,     4,     4,   363,     4,   153,   267,   548,
       5,   373,     4,    39,   112,   363,   555,   363,    98,    61,
     122,   253,   281,   557,   122,   570,    61,   118,   122,   160,
     198,   249,   253,   278,   281,   291,   559,   560,    61,   122,
     281,   569,     5,     4,    33,   108,   209,   552,    66,   365,
     392,    66,   365,   393,    66,   365,   394,    12,   195,   551,
     363,   363,   231,   363,   395,   363,   278,     4,   363,   363,
       4,   300,   579,     4,   294,   577,     4,   294,   578,     4,
     380,   126,   363,   582,   363,   363,     4,     5,   363,    11,
     363,   363,   363,    29,    95,   166,   257,   262,   379,   379,
       4,   203,   363,   363,     4,     4,     4,   363,   363,   363,
     363,     4,     4,     5,     5,   373,     5,   363,   363,   369,
     371,   371,   373,   363,   363,   363,   363,   363,   363,   363,
     373,   375,   372,   363,   363,   372,   363,     5,   277,   104,
     193,   431,   199,   257,   434,   173,    78,   177,   257,   435,
     142,   181,   416,   416,     4,   438,     4,   440,   199,   264,
     442,   182,   443,   173,   380,   363,   363,   373,   373,   380,
     380,   380,   373,   380,   363,   373,     4,   456,     4,   375,
     454,   202,     4,   169,   319,   455,   202,   373,     4,   135,
     300,   458,     5,     5,   428,     4,   202,   137,   254,   366,
     363,     4,     5,    60,    66,   115,   132,   147,   153,   158,
     214,   233,   238,   240,   266,   267,   274,   292,   348,   513,
     375,   194,   194,    66,   465,    66,   466,    66,   467,   231,
     468,   363,     5,   429,   232,   470,   374,   380,     5,   373,
     373,   373,   373,     4,   365,     4,     4,   202,   363,    13,
      14,    61,   196,   197,   271,   281,   282,   312,    87,     5,
       5,    13,    14,    61,   196,   197,   271,   281,   282,   286,
     312,    87,   160,   165,   374,   490,   495,    87,   160,     5,
     488,     4,     4,    13,    61,   196,   271,   281,   312,     5,
       5,     4,   363,   374,    19,    20,    21,    48,    49,    52,
      55,    62,    66,    74,    75,    82,    83,   100,   106,   110,
     111,   114,   132,   153,   177,   201,   231,   233,   239,   240,
     255,   256,   266,   267,   292,   294,   306,   308,   314,   348,
      66,    80,    89,   100,   132,   153,   201,   240,   267,   306,
     308,     4,    29,   164,   219,   245,   507,     5,    63,   105,
     242,   258,   259,   350,   351,   512,   100,   505,    16,   267,
     510,    39,   112,   200,   511,     4,     5,    16,   218,   301,
     363,   267,   512,   520,   127,   512,   521,    35,    39,   112,
     136,   200,   300,   363,   522,   373,   365,    92,   100,   106,
     123,   129,   153,   161,   201,   209,   255,   267,   283,   525,
      39,   112,   200,     5,   267,   293,   529,    16,   125,   171,
     218,   301,   530,   294,   365,   531,     5,   100,   106,   309,
      16,    16,     4,   363,   363,   363,   363,   363,   363,   380,
     363,   363,   372,   363,     4,   380,     4,    39,   112,   200,
     272,   549,    39,   112,   200,   272,   550,     4,    98,     5,
       5,    87,     4,     5,     5,    87,     5,   560,    61,   122,
     160,   281,   564,    61,   122,   281,   568,    87,   160,    61,
     122,   281,   562,     4,    61,   122,   281,   561,     5,     5,
       4,     4,     5,     5,     5,   363,   363,   363,     4,   363,
     574,   363,   363,   374,     4,     4,     5,     4,     4,     5,
       4,    98,   269,   381,   363,   363,    11,     5,    11,   363,
     363,    11,     4,    11,     4,     4,   363,   363,   363,     4,
     365,     4,     4,   380,   373,   380,   363,   363,   363,   373,
     363,   372,   363,   363,     5,     5,   363,   375,   363,   373,
     363,   380,   380,   381,   381,   381,   380,   372,   363,   380,
     363,   366,   457,   169,     5,     4,   380,   160,   160,     4,
       5,     4,     4,   363,   452,    37,    37,   363,    19,    20,
      21,    48,    49,    52,    59,    62,    66,    74,    75,    82,
     110,   111,   114,   132,   153,   177,   186,   231,   239,   240,
     256,   267,   292,   294,   304,   314,   348,    66,   132,   158,
     240,   292,    29,   164,   219,   245,   514,   363,   214,   363,
     515,    16,   363,   266,   525,   266,   214,   363,   516,   294,
     517,    16,    99,   363,   363,     5,   381,    56,   373,     4,
       5,   481,   363,     5,     5,     5,   160,   189,   385,   385,
     168,   273,   383,     4,     4,     5,     5,   485,   279,   279,
       5,     5,     5,    16,   162,   384,   384,   383,     4,     4,
     383,     5,     5,   489,   165,   347,   374,   493,     5,   492,
       5,     5,   496,     5,   497,     5,    13,    14,    61,   196,
     197,   271,   281,   282,   286,   312,     4,     4,     5,     5,
     385,   383,     4,     5,     5,   380,    82,   155,   229,   230,
     244,   287,   388,     6,     7,   363,   368,   245,   245,   245,
     106,    39,    66,   100,   106,   112,   132,   153,   168,   201,
     240,   255,   267,   294,   306,   308,   309,   348,   506,   245,
       5,    26,   170,   245,   290,   142,   106,    21,    49,    52,
      82,   111,   114,   233,   266,    21,    49,    52,    55,    82,
     111,   114,   233,   266,   292,    39,   245,   245,   106,     5,
     218,    26,   231,    35,   136,   300,   363,   270,   277,   251,
     373,   525,    39,   133,   231,   290,   251,   218,     5,     5,
     255,    26,   231,     4,     5,     5,   218,    35,   136,   300,
     363,   525,   218,   365,     4,     4,   363,     5,   312,    21,
      26,    48,    49,    51,    52,    62,    74,    75,    82,    85,
     103,   110,   111,   114,   177,   233,   239,   256,   266,   293,
     294,   314,   359,   508,   363,   363,   363,   363,   363,   512,
     373,     5,     4,     5,   363,   363,   373,   363,   365,   363,
     363,   512,     5,     5,   363,   363,   365,     5,    16,     5,
       5,   363,   363,   372,   363,   363,     4,   363,   363,   112,
     363,   363,   112,     4,    41,    42,   175,   176,   204,   390,
     390,    61,   122,   281,   558,   390,     5,    61,   122,   281,
     563,     5,     5,    61,   122,   281,   565,     4,     5,     5,
       4,    61,   122,   281,   567,    61,   122,   281,   566,     5,
       5,     4,     5,     5,     4,   390,   390,   390,   363,   363,
     363,     4,   373,   363,   380,   374,     5,     5,    11,   363,
     373,   375,   363,    11,   363,   363,   363,    59,   363,     4,
       4,   363,   363,    46,   280,   417,     5,   365,   365,   380,
     363,     4,     4,     4,   380,   373,   363,   363,   363,   363,
     380,   373,   381,   372,   363,     4,   381,   363,     4,   375,
       5,    23,    24,    98,   382,     4,   373,   363,   363,     4,
     363,     5,    82,   155,   229,   230,   244,   287,   373,   375,
     245,   245,   245,    20,   245,   373,   245,    26,   170,   245,
     290,   142,    20,   245,   245,   245,    20,   245,    26,   172,
     231,   172,   270,   277,   172,   231,   298,   525,   133,   172,
     231,   290,     4,   255,    26,   172,   231,   525,   214,   363,
     363,   363,   363,   363,   363,   202,   363,   363,    19,   241,
     473,     4,     4,   363,   385,   385,   385,     4,   385,   385,
     385,    13,    14,    61,   196,   197,   271,   281,   282,   312,
     384,   385,   385,   385,   385,   385,     4,   385,   385,     4,
     384,    13,    14,    61,   196,   197,   271,   281,   282,   312,
       5,   491,     5,   494,     5,     5,    13,    14,    61,   196,
     197,   271,   281,   282,   286,   312,     5,    13,    14,    61,
     196,   197,   271,   281,   282,   286,   312,     5,    13,    14,
      61,   196,   197,   271,   281,   282,   286,   312,    13,    14,
      61,   196,   197,   271,   281,   282,   312,   279,     5,     5,
       5,   384,   384,   383,     4,     4,   383,     5,     4,     4,
     385,   385,     4,   385,   385,     5,   365,   373,   375,     5,
     363,   363,     5,   363,     5,   368,   106,   201,   255,   106,
     201,   255,     5,   363,   365,     5,   363,   373,   365,     5,
     368,   245,   245,    20,   245,    20,   245,   245,    20,   245,
     316,   316,     4,     4,     4,   506,     4,     4,     4,   316,
     316,     4,     5,     4,   363,     5,   363,     5,   368,   365,
     373,   373,   363,    26,    48,    51,    62,    85,   103,   359,
     386,     4,   363,   380,   365,     5,   373,   373,   363,   365,
     365,   373,   373,   363,   365,   363,     5,   363,   231,   231,
     363,   363,   231,   363,   231,   363,   363,   518,   526,   363,
     231,   231,   363,   363,   363,   363,   363,   363,   363,   363,
       5,   312,   363,   509,   363,   363,   231,   363,   363,   363,
     363,   373,   380,     5,     4,     4,   363,   363,   380,   363,
     363,   363,   373,   512,   363,   363,     5,     4,   363,   363,
     363,   363,     5,     5,     4,   390,     5,     5,     4,     4,
       4,     5,     5,     4,     4,     5,     5,     4,     5,     5,
       4,   363,   363,   363,   363,   380,   363,   373,   375,   363,
     380,   363,   363,   363,   363,   363,     5,   363,     4,   363,
     363,     4,   373,   363,   380,   182,   378,   363,   378,   381,
     380,   373,   363,   363,     4,   363,   373,   373,   363,   366,
       5,     5,     5,     5,     5,   373,   380,   373,   373,   373,
     373,   375,   373,   380,   373,   373,   373,   375,   373,   373,
     373,   373,   375,   373,   373,   373,   363,   373,   373,   373,
     373,   373,   373,   373,   363,   363,     4,   363,     5,   363,
     385,     5,     5,     5,   383,     4,     4,     5,   385,   384,
       4,   385,     5,     5,     5,   384,   384,   383,     4,     4,
       5,    13,    14,    61,   196,   197,   271,   281,   282,   312,
      13,    14,    61,   196,   197,   271,   281,   282,   312,    13,
      14,    61,   196,   197,   271,   281,   282,   312,   279,     5,
       5,     5,   384,   384,   383,     4,     4,   383,     5,   279,
       5,     5,     5,   384,   384,   383,     4,     4,   383,     5,
     279,     5,     5,     5,   384,   384,   383,     4,     4,   383,
       5,     5,     5,     5,   384,   384,   383,     4,     4,     5,
     384,     4,     4,   384,     4,     4,   385,     5,   380,   373,
     363,   363,   373,   363,     5,   368,     5,   373,   365,     5,
     373,   380,     5,   368,   363,   363,   363,   363,   363,   363,
     363,   363,   363,     4,     4,     5,     4,     4,   363,   373,
     363,     5,   368,   365,   380,   380,   363,   372,   380,   380,
     363,   380,   380,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,    55,    66,    93,   132,   292,   294,   348,
     523,   524,   525,   537,   538,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   373,     5,   363,
     363,   363,   363,     4,     4,   380,   381,     5,     5,   372,
     363,     4,   380,   373,     4,   390,   390,   390,   368,   363,
     363,   363,   380,   363,   372,   363,   363,    11,     5,     5,
     363,   363,     4,   380,   373,   363,   363,   381,   382,   363,
       5,   363,   373,   375,     5,     5,     5,     5,     5,   380,
     382,   382,   382,   380,   382,   381,   382,   382,   380,   382,
     382,   382,   380,   382,   382,   380,   373,   382,   380,   382,
     382,   380,   382,   380,     4,   373,   375,     5,   363,     4,
     385,   384,     4,   384,     5,     5,     5,   384,   384,   383,
       4,     4,     5,     5,     5,     5,   384,   384,   383,     4,
       4,     5,     5,     5,     5,   384,   384,   383,     4,     4,
       5,   384,   385,   385,   385,   385,   385,     4,   385,   385,
       4,   384,   384,   385,   385,   385,   385,   385,     4,   385,
     385,     4,   384,   384,     4,     4,   384,     4,   384,   384,
       4,     4,     4,   374,   382,     4,   373,   382,   363,   373,
       4,   382,   382,   373,     4,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   373,   382,   363,   373,
       4,   372,   372,   373,   372,   372,   373,   373,   372,   372,
     363,   363,   363,   363,   363,   363,   368,   363,   363,   363,
     360,   360,   360,   360,   360,   360,   360,   524,   360,   368,
     363,   363,   363,   363,   368,   363,   363,   363,   363,   363,
     363,   380,   363,   312,   367,   368,   363,   363,   381,   365,
     373,   373,   381,   380,     4,   363,   372,   363,    59,   363,
       5,     5,   363,     4,   378,   382,     5,   380,     4,     5,
       4,     5,   373,     5,   381,   382,   381,   381,   381,     5,
     380,     4,   363,   385,   384,   385,   385,   385,   385,   385,
       4,   385,   385,   384,   385,   385,   385,   385,   385,     4,
     385,   385,   384,   385,   385,   385,   385,   385,     4,   385,
     385,   384,   385,   384,     4,   385,   385,   384,     4,   385,
     384,     4,   384,   384,   380,   373,   382,     4,   380,   363,
     380,   363,   363,   363,   382,     4,   380,   363,   372,   382,
     363,   372,   382,   382,   373,   363,     4,   387,   387,   363,
     363,   387,   368,   387,   526,   373,   506,     5,     4,     5,
       5,     5,     4,   365,   368,   387,   387,   363,   363,   368,
     363,   363,   363,   363,   363,   372,   363,     5,   526,   363,
     387,   365,   527,   528,   380,   380,   365,   381,     4,     5,
     363,     5,     4,     4,   363,     4,    31,   190,   289,   424,
     373,     5,    31,   190,   289,   389,   373,     4,   424,   363,
     384,   385,   384,   385,   384,   385,   385,   384,   385,   384,
     384,   363,   382,   373,   373,   363,   373,   363,   373,   373,
     363,   373,   382,     4,   526,   526,   367,   363,   526,     4,
     526,   380,     5,     4,     4,   526,   526,   367,   363,     4,
     526,   526,   363,   373,   526,   526,   526,   527,   534,   535,
     525,   532,   533,   365,     4,     5,     5,     4,   193,   310,
     355,   363,   415,   424,     4,   373,   424,     4,   385,   385,
     385,   385,   385,   374,   382,   382,   363,   382,     4,   382,
     382,   363,   382,   363,   526,   526,     4,   363,   526,     5,
     363,   526,     4,   363,   526,   380,   534,   536,   537,   360,
     533,     5,     5,   363,   416,   363,   416,   380,   382,     4,
     373,   375,     4,   368,   367,   363,   363,   367,   363,   373,
     537,   365,     5,     5,   363,   363,   363,   363,   389,     5,
     373,   375,   380,   373,   375,   526,   363,     4,   526,   363,
     382,     5,     5,   363,     5,   363,   380,   380,     4,   526,
       4,     5,     5,     5,   367,   367,   526,   526,   526
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
#line 468 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 469 "frame/parser.Y"
    {fr->bgColorCmd("gray");;}
    break;

  case 6:
#line 470 "frame/parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 8:
#line 472 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 9:
#line 473 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 11:
#line 475 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 18:
#line 482 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 24:
#line 488 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 25:
#line 489 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 26:
#line 490 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 28:
#line 492 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 35:
#line 499 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 36:
#line 500 "frame/parser.Y"
    {fr->nanColorCmd("gray");;}
    break;

  case 40:
#line 504 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 43:
#line 507 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 48:
#line 512 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 50:
#line 514 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 52:
#line 516 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 54:
#line 518 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 59:
#line 525 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 60:
#line 526 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 61:
#line 529 "frame/parser.Y"
    {yydebug=(yyvsp[(1) - (1)].integer);;}
    break;

  case 62:
#line 530 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 531 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 532 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 533 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 534 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 535 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 536 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 537 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 538 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 539 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 72:
#line 542 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 73:
#line 544 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 74:
#line 545 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 75:
#line 546 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 76:
#line 547 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 77:
#line 549 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 78:
#line 550 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 79:
#line 551 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 80:
#line 552 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 81:
#line 555 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 82:
#line 556 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 83:
#line 557 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 84:
#line 558 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 85:
#line 559 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 86:
#line 562 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 87:
#line 563 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 88:
#line 566 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 89:
#line 567 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 90:
#line 568 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 91:
#line 571 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 92:
#line 574 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 93:
#line 577 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 94:
#line 581 "frame/parser.Y"
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
#line 593 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 96:
#line 600 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 97:
#line 607 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 98:
#line 614 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 99:
#line 615 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 100:
#line 616 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 101:
#line 617 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 102:
#line 618 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 103:
#line 621 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 104:
#line 622 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 105:
#line 623 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 106:
#line 624 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 107:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 108:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 109:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 110:
#line 628 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 111:
#line 629 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 112:
#line 630 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 113:
#line 631 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 114:
#line 632 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 115:
#line 633 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 116:
#line 634 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 117:
#line 635 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 118:
#line 636 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 119:
#line 637 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 120:
#line 638 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 121:
#line 639 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 122:
#line 640 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 123:
#line 641 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 124:
#line 642 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 125:
#line 643 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 126:
#line 644 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 127:
#line 645 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 128:
#line 646 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 129:
#line 647 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 130:
#line 648 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 131:
#line 651 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 132:
#line 652 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 133:
#line 655 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 134:
#line 656 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 135:
#line 657 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 136:
#line 658 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 137:
#line 659 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 138:
#line 660 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 139:
#line 663 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 140:
#line 664 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 141:
#line 665 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 142:
#line 666 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 143:
#line 667 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 144:
#line 670 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 145:
#line 671 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 146:
#line 672 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 147:
#line 673 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 148:
#line 674 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 149:
#line 675 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 150:
#line 676 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 151:
#line 677 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 152:
#line 680 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 153:
#line 681 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 154:
#line 682 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 155:
#line 683 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 156:
#line 684 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 157:
#line 687 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 158:
#line 688 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 159:
#line 689 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 160:
#line 690 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 161:
#line 691 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 162:
#line 692 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 163:
#line 693 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 164:
#line 694 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 165:
#line 697 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 166:
#line 698 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 167:
#line 699 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 168:
#line 702 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 169:
#line 703 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 170:
#line 704 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 171:
#line 705 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 172:
#line 708 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 173:
#line 709 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 174:
#line 710 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 175:
#line 713 "frame/parser.Y"
    {;}
    break;

  case 176:
#line 714 "frame/parser.Y"
    {;}
    break;

  case 177:
#line 715 "frame/parser.Y"
    {;}
    break;

  case 178:
#line 718 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 179:
#line 719 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 180:
#line 720 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 181:
#line 723 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 182:
#line 724 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 183:
#line 725 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 184:
#line 726 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 185:
#line 727 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 186:
#line 728 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 187:
#line 729 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 188:
#line 730 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 189:
#line 733 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 190:
#line 734 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 191:
#line 737 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 192:
#line 738 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 193:
#line 739 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 194:
#line 740 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 195:
#line 741 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 196:
#line 742 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 197:
#line 745 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 198:
#line 746 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 199:
#line 747 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 200:
#line 748 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 201:
#line 751 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 202:
#line 752 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 203:
#line 753 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 204:
#line 754 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 205:
#line 755 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 206:
#line 756 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 211:
#line 763 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 212:
#line 764 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 213:
#line 765 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 214:
#line 767 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 215:
#line 770 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 216:
#line 771 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 217:
#line 774 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 218:
#line 775 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 219:
#line 778 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 220:
#line 779 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 221:
#line 782 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 222:
#line 784 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 224:
#line 788 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 225:
#line 789 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 228:
#line 792 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 230:
#line 794 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 231:
#line 797 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 232:
#line 798 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 233:
#line 801 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 234:
#line 802 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 235:
#line 804 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 236:
#line 806 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 237:
#line 807 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 238:
#line 808 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 239:
#line 810 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 240:
#line 812 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 241:
#line 815 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 242:
#line 816 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 243:
#line 819 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 244:
#line 821 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 245:
#line 824 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 246:
#line 826 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 247:
#line 829 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 248:
#line 833 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 249:
#line 834 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 251:
#line 838 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 252:
#line 839 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 253:
#line 840 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 257:
#line 846 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 258:
#line 847 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 260:
#line 850 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 261:
#line 855 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 262:
#line 856 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 263:
#line 859 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 264:
#line 860 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 265:
#line 861 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 266:
#line 862 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 267:
#line 863 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 268:
#line 866 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 269:
#line 867 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 270:
#line 868 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 271:
#line 869 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 272:
#line 872 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 273:
#line 874 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 274:
#line 879 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 275:
#line 884 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 276:
#line 891 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 277:
#line 893 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 278:
#line 894 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 280:
#line 896 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 281:
#line 900 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 282:
#line 902 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 283:
#line 904 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 284:
#line 905 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 290:
#line 916 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 291:
#line 918 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 292:
#line 920 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 293:
#line 925 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 294:
#line 929 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 295:
#line 932 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 296:
#line 933 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 297:
#line 936 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 298:
#line 937 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 299:
#line 939 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 300:
#line 945 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 301:
#line 946 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 302:
#line 947 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 303:
#line 948 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 304:
#line 951 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 305:
#line 952 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 306:
#line 955 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 307:
#line 956 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 308:
#line 959 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 309:
#line 960 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 310:
#line 964 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 311:
#line 966 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 312:
#line 969 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 313:
#line 971 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 314:
#line 974 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 316:
#line 976 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 317:
#line 977 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 318:
#line 978 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 319:
#line 981 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 320:
#line 983 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 321:
#line 984 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 322:
#line 985 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 323:
#line 986 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 324:
#line 990 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 325:
#line 992 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 326:
#line 993 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 327:
#line 994 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 328:
#line 997 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 329:
#line 999 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 330:
#line 1001 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 331:
#line 1003 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 332:
#line 1006 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 333:
#line 1009 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 334:
#line 1010 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 335:
#line 1011 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 336:
#line 1012 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 337:
#line 1015 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 338:
#line 1016 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 339:
#line 1019 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 340:
#line 1022 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 341:
#line 1023 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 355:
#line 1037 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 358:
#line 1040 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 359:
#line 1041 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 363:
#line 1045 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 364:
#line 1046 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 367:
#line 1049 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 368:
#line 1050 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 370:
#line 1053 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 372:
#line 1055 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 374:
#line 1057 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 376:
#line 1059 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 377:
#line 1061 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 380:
#line 1064 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 381:
#line 1068 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 382:
#line 1070 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 383:
#line 1074 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 384:
#line 1076 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 385:
#line 1079 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 386:
#line 1080 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 387:
#line 1081 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 388:
#line 1082 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 389:
#line 1083 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 390:
#line 1084 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 392:
#line 1086 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 393:
#line 1089 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 394:
#line 1090 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 395:
#line 1091 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 396:
#line 1094 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 397:
#line 1097 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 398:
#line 1099 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 399:
#line 1101 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 400:
#line 1102 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 401:
#line 1103 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 403:
#line 1105 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 405:
#line 1108 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 406:
#line 1114 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 407:
#line 1115 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 408:
#line 1118 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 409:
#line 1119 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 410:
#line 1120 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 411:
#line 1123 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 412:
#line 1124 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 414:
#line 1130 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 415:
#line 1132 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 416:
#line 1134 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 417:
#line 1137 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 419:
#line 1139 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 420:
#line 1143 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 421:
#line 1147 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 423:
#line 1149 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 424:
#line 1150 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 425:
#line 1151 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 426:
#line 1152 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 427:
#line 1153 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 429:
#line 1155 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 430:
#line 1156 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 431:
#line 1159 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 432:
#line 1160 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 433:
#line 1161 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 434:
#line 1164 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 435:
#line 1165 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 436:
#line 1169 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 437:
#line 1171 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 438:
#line 1179 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 439:
#line 1181 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 440:
#line 1183 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 441:
#line 1186 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 442:
#line 1188 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 443:
#line 1189 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 444:
#line 1192 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 445:
#line 1195 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 446:
#line 1197 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 447:
#line 1201 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 448:
#line 1203 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 449:
#line 1206 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 450:
#line 1210 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 451:
#line 1211 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 452:
#line 1213 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 453:
#line 1216 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 454:
#line 1217 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 456:
#line 1221 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 457:
#line 1222 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 458:
#line 1223 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 459:
#line 1226 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 460:
#line 1228 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 461:
#line 1229 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 463:
#line 1231 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 467:
#line 1235 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 468:
#line 1236 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 469:
#line 1237 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 470:
#line 1239 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 472:
#line 1241 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 473:
#line 1244 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 474:
#line 1246 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 475:
#line 1248 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 476:
#line 1249 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 477:
#line 1250 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 478:
#line 1251 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 479:
#line 1254 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 480:
#line 1255 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 481:
#line 1259 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 482:
#line 1261 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 483:
#line 1264 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 484:
#line 1267 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 485:
#line 1268 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 486:
#line 1270 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 487:
#line 1272 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 488:
#line 1274 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 489:
#line 1277 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 490:
#line 1278 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 491:
#line 1279 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 492:
#line 1282 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 493:
#line 1283 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 494:
#line 1284 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 495:
#line 1285 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 496:
#line 1286 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 497:
#line 1287 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 498:
#line 1288 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 499:
#line 1291 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 500:
#line 1294 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 501:
#line 1295 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 502:
#line 1296 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 503:
#line 1299 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 504:
#line 1300 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 505:
#line 1301 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 506:
#line 1302 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 507:
#line 1303 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 508:
#line 1304 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 513:
#line 1311 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 514:
#line 1312 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 515:
#line 1313 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 516:
#line 1316 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 517:
#line 1317 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 518:
#line 1320 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 519:
#line 1321 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 520:
#line 1324 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 521:
#line 1325 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 522:
#line 1328 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 523:
#line 1329 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 524:
#line 1332 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 526:
#line 1334 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 527:
#line 1337 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 528:
#line 1338 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 530:
#line 1342 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 531:
#line 1346 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 532:
#line 1349 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 533:
#line 1356 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 534:
#line 1357 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 535:
#line 1360 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 536:
#line 1361 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 539:
#line 1364 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 540:
#line 1365 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 541:
#line 1366 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 542:
#line 1367 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 544:
#line 1369 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 545:
#line 1370 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 546:
#line 1371 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 548:
#line 1373 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 549:
#line 1374 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 550:
#line 1375 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 551:
#line 1376 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 553:
#line 1380 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 554:
#line 1383 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 555:
#line 1384 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 556:
#line 1387 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 557:
#line 1388 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 558:
#line 1389 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 559:
#line 1390 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 560:
#line 1393 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 561:
#line 1394 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 562:
#line 1395 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 563:
#line 1396 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 564:
#line 1399 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 565:
#line 1400 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 566:
#line 1401 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 567:
#line 1402 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 568:
#line 1403 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 569:
#line 1404 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 570:
#line 1407 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 571:
#line 1408 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 572:
#line 1409 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 575:
#line 1413 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 576:
#line 1414 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 577:
#line 1417 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 578:
#line 1420 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 579:
#line 1421 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 580:
#line 1425 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 581:
#line 1427 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 582:
#line 1428 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 589:
#line 1440 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 590:
#line 1442 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 591:
#line 1444 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 592:
#line 1445 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 593:
#line 1447 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 594:
#line 1449 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 595:
#line 1451 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 596:
#line 1453 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 597:
#line 1455 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 599:
#line 1459 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 600:
#line 1460 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 601:
#line 1461 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 602:
#line 1462 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 603:
#line 1463 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 604:
#line 1465 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 605:
#line 1466 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 606:
#line 1467 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 607:
#line 1468 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 608:
#line 1471 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 609:
#line 1475 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 610:
#line 1477 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 611:
#line 1479 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 612:
#line 1481 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 613:
#line 1483 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 614:
#line 1485 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 615:
#line 1487 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 616:
#line 1489 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 617:
#line 1492 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 618:
#line 1494 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 619:
#line 1496 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 625:
#line 1504 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 626:
#line 1505 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 627:
#line 1506 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 628:
#line 1507 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 629:
#line 1508 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 630:
#line 1509 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 631:
#line 1511 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 632:
#line 1513 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 633:
#line 1514 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 634:
#line 1515 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 635:
#line 1516 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 636:
#line 1519 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 637:
#line 1520 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 638:
#line 1521 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 639:
#line 1522 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 640:
#line 1523 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 641:
#line 1525 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 642:
#line 1526 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 643:
#line 1527 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 644:
#line 1528 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 650:
#line 1539 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 651:
#line 1542 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 652:
#line 1545 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 653:
#line 1548 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 654:
#line 1551 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 655:
#line 1554 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 656:
#line 1557 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 657:
#line 1560 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 658:
#line 1563 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 659:
#line 1568 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 660:
#line 1571 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 661:
#line 1574 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 662:
#line 1577 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 663:
#line 1580 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 664:
#line 1583 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 665:
#line 1586 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 666:
#line 1589 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 667:
#line 1592 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 668:
#line 1595 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 669:
#line 1598 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 670:
#line 1603 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 671:
#line 1606 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 672:
#line 1609 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 673:
#line 1612 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 674:
#line 1615 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 675:
#line 1618 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 676:
#line 1621 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 677:
#line 1624 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 678:
#line 1627 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 679:
#line 1632 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 680:
#line 1634 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 681:
#line 1636 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 682:
#line 1638 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 683:
#line 1640 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 684:
#line 1642 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 685:
#line 1647 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 686:
#line 1649 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 687:
#line 1651 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 688:
#line 1655 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 689:
#line 1658 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 690:
#line 1661 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 691:
#line 1664 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 692:
#line 1667 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 693:
#line 1670 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 694:
#line 1673 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 695:
#line 1676 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 696:
#line 1679 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 697:
#line 1682 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 698:
#line 1685 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 699:
#line 1689 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 700:
#line 1690 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 701:
#line 1691 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 702:
#line 1692 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 703:
#line 1693 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 704:
#line 1694 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 705:
#line 1696 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 706:
#line 1698 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 707:
#line 1699 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 708:
#line 1700 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 709:
#line 1701 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 710:
#line 1704 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 711:
#line 1705 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 712:
#line 1706 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 713:
#line 1707 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 714:
#line 1708 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 715:
#line 1710 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 716:
#line 1711 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 717:
#line 1712 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 718:
#line 1713 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 719:
#line 1717 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 720:
#line 1719 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 721:
#line 1720 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 722:
#line 1722 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 723:
#line 1724 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 724:
#line 1726 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 725:
#line 1729 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 726:
#line 1730 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 727:
#line 1733 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 728:
#line 1734 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 729:
#line 1735 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 730:
#line 1738 "frame/parser.Y"
    {;}
    break;

  case 731:
#line 1741 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 732:
#line 1742 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 733:
#line 1743 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 734:
#line 1744 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 735:
#line 1745 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 736:
#line 1746 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 737:
#line 1747 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 738:
#line 1751 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 740:
#line 1759 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 741:
#line 1760 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 742:
#line 1762 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 743:
#line 1764 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 744:
#line 1765 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 745:
#line 1766 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 747:
#line 1767 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 750:
#line 1770 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 751:
#line 1771 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 752:
#line 1773 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 753:
#line 1775 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 754:
#line 1777 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 755:
#line 1780 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 756:
#line 1782 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 757:
#line 1783 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 758:
#line 1785 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 759:
#line 1788 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 760:
#line 1791 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 761:
#line 1795 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 762:
#line 1798 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 763:
#line 1801 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 764:
#line 1804 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 765:
#line 1808 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 766:
#line 1812 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 767:
#line 1817 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 768:
#line 1821 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 769:
#line 1823 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 770:
#line 1824 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 771:
#line 1826 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 772:
#line 1828 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 773:
#line 1830 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 774:
#line 1832 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 775:
#line 1833 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 776:
#line 1835 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 777:
#line 1837 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 778:
#line 1840 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 779:
#line 1844 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 780:
#line 1848 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 781:
#line 1850 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 782:
#line 1852 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 783:
#line 1854 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 784:
#line 1856 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 785:
#line 1858 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 786:
#line 1860 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 787:
#line 1862 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 788:
#line 1864 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 789:
#line 1866 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 790:
#line 1868 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 791:
#line 1870 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 792:
#line 1872 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 793:
#line 1874 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 794:
#line 1875 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 795:
#line 1877 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 796:
#line 1879 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 797:
#line 1880 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 798:
#line 1881 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 799:
#line 1883 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 800:
#line 1885 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 801:
#line 1886 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 802:
#line 1887 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 803:
#line 1888 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 804:
#line 1890 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 805:
#line 1892 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 806:
#line 1896 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 807:
#line 1899 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 808:
#line 1902 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 809:
#line 1906 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 810:
#line 1910 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 811:
#line 1915 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 812:
#line 1919 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 813:
#line 1920 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 814:
#line 1921 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 815:
#line 1923 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 816:
#line 1925 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 817:
#line 1929 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 818:
#line 1930 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 819:
#line 1931 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 820:
#line 1933 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 821:
#line 1936 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 822:
#line 1939 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 823:
#line 1942 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 824:
#line 1943 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 825:
#line 1947 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 826:
#line 1951 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 827:
#line 1953 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 828:
#line 1954 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 829:
#line 1956 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 830:
#line 1959 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 831:
#line 1962 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 832:
#line 1963 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 833:
#line 1965 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 834:
#line 1966 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 835:
#line 1967 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 836:
#line 1969 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 837:
#line 1970 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 838:
#line 1972 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 839:
#line 1975 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 840:
#line 1978 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 841:
#line 1980 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 842:
#line 1981 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 846:
#line 1986 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 847:
#line 1987 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 848:
#line 1989 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 849:
#line 1991 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 850:
#line 1993 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 851:
#line 1994 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 855:
#line 2000 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 856:
#line 2001 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 857:
#line 2002 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 858:
#line 2003 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 859:
#line 2004 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 860:
#line 2005 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 861:
#line 2006 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 862:
#line 2007 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 863:
#line 2008 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 864:
#line 2009 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 865:
#line 2011 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 866:
#line 2013 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 867:
#line 2014 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 868:
#line 2015 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 869:
#line 2016 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 870:
#line 2017 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 871:
#line 2019 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 872:
#line 2020 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 873:
#line 2021 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 874:
#line 2022 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 875:
#line 2023 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 876:
#line 2025 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 877:
#line 2026 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 878:
#line 2027 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 879:
#line 2028 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 880:
#line 2029 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 881:
#line 2030 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 882:
#line 2033 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 883:
#line 2034 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 884:
#line 2035 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 885:
#line 2036 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 886:
#line 2037 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 887:
#line 2038 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 888:
#line 2039 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 889:
#line 2040 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 890:
#line 2041 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 891:
#line 2042 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 892:
#line 2043 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 893:
#line 2044 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 894:
#line 2045 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 895:
#line 2046 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 896:
#line 2047 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 897:
#line 2048 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 898:
#line 2049 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 899:
#line 2050 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 900:
#line 2051 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 901:
#line 2052 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 902:
#line 2053 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 903:
#line 2056 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 904:
#line 2057 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 905:
#line 2058 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 906:
#line 2059 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 907:
#line 2060 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 908:
#line 2062 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 909:
#line 2072 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 910:
#line 2080 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 911:
#line 2089 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 912:
#line 2097 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2104 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2111 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2119 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2127 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2132 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2137 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2142 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2147 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2152 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 922:
#line 2157 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 923:
#line 2162 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 924:
#line 2171 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 925:
#line 2181 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 926:
#line 2191 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 927:
#line 2200 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 928:
#line 2208 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 929:
#line 2218 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 930:
#line 2228 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 931:
#line 2238 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 932:
#line 2250 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 933:
#line 2259 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 935:
#line 2267 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 936:
#line 2269 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 937:
#line 2271 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 938:
#line 2276 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 939:
#line 2279 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 940:
#line 2280 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 941:
#line 2281 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 942:
#line 2288 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 943:
#line 2290 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 944:
#line 2291 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 945:
#line 2294 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 946:
#line 2295 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 947:
#line 2296 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 948:
#line 2297 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 949:
#line 2298 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 950:
#line 2299 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 951:
#line 2300 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 953:
#line 2304 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 954:
#line 2305 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 955:
#line 2306 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 956:
#line 2307 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 957:
#line 2308 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 958:
#line 2311 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 959:
#line 2313 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 960:
#line 2315 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 961:
#line 2317 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 962:
#line 2319 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 963:
#line 2321 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 964:
#line 2323 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 965:
#line 2324 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 966:
#line 2325 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 967:
#line 2327 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 968:
#line 2329 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 969:
#line 2332 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 970:
#line 2334 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 971:
#line 2335 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 972:
#line 2336 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 973:
#line 2338 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 974:
#line 2340 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 975:
#line 2343 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 976:
#line 2346 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 977:
#line 2347 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 978:
#line 2348 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 979:
#line 2349 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 980:
#line 2351 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 981:
#line 2352 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 982:
#line 2353 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 983:
#line 2354 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 984:
#line 2355 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 985:
#line 2357 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 986:
#line 2359 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 987:
#line 2361 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 988:
#line 2363 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 989:
#line 2365 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 990:
#line 2366 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 991:
#line 2368 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 992:
#line 2370 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 993:
#line 2372 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 994:
#line 2373 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 995:
#line 2374 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 996:
#line 2376 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 997:
#line 2378 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 998:
#line 2381 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 999:
#line 2384 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1000:
#line 2385 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1001:
#line 2387 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1002:
#line 2390 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1003:
#line 2393 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1004:
#line 2394 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1005:
#line 2395 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1006:
#line 2396 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1007:
#line 2398 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1008:
#line 2400 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1009:
#line 2402 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1010:
#line 2403 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1011:
#line 2405 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1012:
#line 2406 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1013:
#line 2407 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1014:
#line 2408 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1015:
#line 2409 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1016:
#line 2411 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1017:
#line 2413 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1018:
#line 2415 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1019:
#line 2417 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1021:
#line 2419 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1022:
#line 2420 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1023:
#line 2422 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1024:
#line 2424 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1025:
#line 2425 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1026:
#line 2426 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1028:
#line 2428 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1030:
#line 2432 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1031:
#line 2433 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1032:
#line 2434 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1033:
#line 2435 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1034:
#line 2436 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1035:
#line 2437 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1036:
#line 2439 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1037:
#line 2440 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1038:
#line 2442 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1039:
#line 2445 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1040:
#line 2446 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1041:
#line 2447 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1042:
#line 2448 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1043:
#line 2451 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1044:
#line 2452 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1045:
#line 2455 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1046:
#line 2456 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1047:
#line 2459 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1048:
#line 2460 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1049:
#line 2463 "frame/parser.Y"
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

  case 1050:
#line 2476 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1051:
#line 2477 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1052:
#line 2481 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1053:
#line 2482 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1054:
#line 2486 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1055:
#line 2487 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1056:
#line 2492 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1057:
#line 2496 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1058:
#line 2501 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1059:
#line 2503 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1060:
#line 2506 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1061:
#line 2508 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1062:
#line 2511 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1063:
#line 2513 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1064:
#line 2516 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1065:
#line 2517 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1066:
#line 2518 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1067:
#line 2519 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1068:
#line 2520 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1069:
#line 2521 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1070:
#line 2523 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1073:
#line 2530 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1074:
#line 2531 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1075:
#line 2532 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1076:
#line 2533 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1077:
#line 2534 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1078:
#line 2535 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1081:
#line 2540 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1082:
#line 2541 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1083:
#line 2542 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1084:
#line 2543 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1085:
#line 2544 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1086:
#line 2545 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1087:
#line 2546 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1088:
#line 2547 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1089:
#line 2548 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1090:
#line 2549 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1091:
#line 2550 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1092:
#line 2551 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1095:
#line 2558 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1096:
#line 2559 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1098:
#line 2563 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1099:
#line 2565 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1100:
#line 2566 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1101:
#line 2569 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1102:
#line 2570 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1103:
#line 2571 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1104:
#line 2572 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1105:
#line 2573 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1106:
#line 2574 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1107:
#line 2577 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1108:
#line 2578 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1111:
#line 2586 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1112:
#line 2589 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1113:
#line 2590 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1117:
#line 2597 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1118:
#line 2600 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1119:
#line 2604 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1120:
#line 2605 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1121:
#line 2606 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1122:
#line 2607 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1123:
#line 2608 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1124:
#line 2609 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1125:
#line 2610 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1126:
#line 2611 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1127:
#line 2617 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1128:
#line 2618 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1129:
#line 2619 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1130:
#line 2620 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1131:
#line 2624 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1132:
#line 2625 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1133:
#line 2627 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1134:
#line 2632 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1136:
#line 2634 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1138:
#line 2636 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1139:
#line 2639 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1140:
#line 2641 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1141:
#line 2646 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1142:
#line 2649 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1143:
#line 2650 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1144:
#line 2651 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1145:
#line 2654 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1146:
#line 2656 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1147:
#line 2660 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1148:
#line 2661 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1149:
#line 2665 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1150:
#line 2666 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1151:
#line 2667 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1152:
#line 2668 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1153:
#line 2674 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1154:
#line 2675 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1155:
#line 2681 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1156:
#line 2682 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1157:
#line 2683 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1158:
#line 2684 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1161:
#line 2692 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1162:
#line 2694 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1163:
#line 2695 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1164:
#line 2696 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1165:
#line 2700 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1166:
#line 2701 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1167:
#line 2702 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1168:
#line 2703 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1169:
#line 2706 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1170:
#line 2707 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1171:
#line 2710 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1172:
#line 2711 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1173:
#line 2712 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1174:
#line 2715 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1175:
#line 2716 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1176:
#line 2717 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1177:
#line 2720 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1178:
#line 2721 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1180:
#line 2723 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1181:
#line 2724 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1182:
#line 2727 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1183:
#line 2728 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1184:
#line 2729 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1189:
#line 2736 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1190:
#line 2740 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1191:
#line 2742 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1192:
#line 2744 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1194:
#line 2749 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1195:
#line 2751 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1196:
#line 2753 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1206:
#line 2766 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1207:
#line 2767 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1208:
#line 2768 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1209:
#line 2771 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1210:
#line 2772 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1211:
#line 2773 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1212:
#line 2776 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1213:
#line 2777 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1214:
#line 2778 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1215:
#line 2781 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1216:
#line 2782 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1217:
#line 2783 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1219:
#line 2787 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1220:
#line 2788 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1221:
#line 2789 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1222:
#line 2792 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1223:
#line 2793 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1224:
#line 2794 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1225:
#line 2797 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1226:
#line 2798 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1227:
#line 2799 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1228:
#line 2802 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1229:
#line 2803 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1230:
#line 2804 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1231:
#line 2807 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1232:
#line 2808 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1233:
#line 2809 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1234:
#line 2813 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1235:
#line 2815 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1236:
#line 2817 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1237:
#line 2821 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1238:
#line 2825 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1239:
#line 2827 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1240:
#line 2831 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1241:
#line 2834 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1242:
#line 2835 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1243:
#line 2836 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1244:
#line 2837 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1245:
#line 2840 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1246:
#line 2842 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1247:
#line 2843 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1248:
#line 2845 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1250:
#line 2849 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1251:
#line 2850 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1252:
#line 2851 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1253:
#line 2854 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1254:
#line 2855 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1255:
#line 2859 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1257:
#line 2861 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1260:
#line 2866 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1261:
#line 2867 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1262:
#line 2868 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1263:
#line 2871 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1264:
#line 2872 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1265:
#line 2873 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1266:
#line 2876 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1267:
#line 2878 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1268:
#line 2883 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1269:
#line 2886 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1270:
#line 2893 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1271:
#line 2895 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1272:
#line 2897 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1273:
#line 2902 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1275:
#line 2906 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1276:
#line 2907 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1277:
#line 2908 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1278:
#line 2910 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1279:
#line 2912 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1280:
#line 2917 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11016 "frame/parser.C"
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


#line 2921 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

