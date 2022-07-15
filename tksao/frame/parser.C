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
#define YYLAST   5451

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  361
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  222
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1287
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2821

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
    2525,  2532,  2537,  2547,  2554,  2562,  2573,  2585,  2598,  2608,
    2614,  2619,  2626,  2630,  2636,  2642,  2649,  2655,  2660,  2670,
    2681,  2693,  2703,  2710,  2717,  2724,  2731,  2738,  2745,  2752,
    2759,  2766,  2774,  2782,  2785,  2790,  2795,  2800,  2805,  2811,
    2816,  2821,  2827,  2833,  2837,  2842,  2847,  2852,  2857,  2865,
    2875,  2882,  2893,  2905,  2918,  2928,  2932,  2935,  2939,  2945,
    2953,  2958,  2962,  2966,  2973,  2981,  2989,  2994,  2999,  3004,
    3014,  3019,  3023,  3028,  3036,  3044,  3047,  3051,  3055,  3059,
    3064,  3067,  3070,  3075,  3086,  3090,  3092,  3096,  3099,  3102,
    3105,  3108,  3112,  3118,  3123,  3129,  3132,  3135,  3138,  3141,
    3145,  3148,  3151,  3154,  3158,  3161,  3165,  3170,  3174,  3178,
    3185,  3190,  3193,  3197,  3200,  3203,  3208,  3212,  3216,  3219,
    3223,  3225,  3228,  3230,  3233,  3236,  3239,  3241,  3243,  3245,
    3247,  3250,  3252,  3255,  3258,  3260,  3263,  3266,  3268,  3271,
    3273,  3275,  3277,  3279,  3281,  3283,  3285,  3287,  3288,  3290,
    3293,  3296,  3299,  3303,  3309,  3317,  3325,  3332,  3339,  3346,
    3353,  3359,  3366,  3373,  3380,  3387,  3394,  3401,  3408,  3420,
    3428,  3436,  3444,  3454,  3464,  3475,  3488,  3501,  3504,  3507,
    3511,  3516,  3521,  3526,  3527,  3529,  3531,  3536,  3541,  3543,
    3545,  3547,  3549,  3551,  3553,  3555,  3557,  3560,  3562,  3564,
    3566,  3570,  3574,  3583,  3590,  3601,  3609,  3617,  3623,  3626,
    3629,  3633,  3638,  3644,  3648,  3654,  3660,  3664,  3669,  3675,
    3681,  3687,  3691,  3697,  3700,  3704,  3708,  3714,  3718,  3722,
    3726,  3731,  3737,  3743,  3747,  3753,  3759,  3763,  3768,  3774,
    3780,  3783,  3786,  3790,  3796,  3803,  3810,  3814,  3818,  3822,
    3829,  3835,  3841,  3844,  3848,  3852,  3858,  3865,  3869,  3872,
    3875,  3879,  3882,  3886,  3889,  3893,  3899,  3906,  3909,  3912,
    3915,  3917,  3922,  3927,  3929,  3932,  3935,  3938,  3941,  3944,
    3947,  3950,  3954,  3957,  3961,  3964,  3968,  3970,  3972,  3974,
    3976,  3978,  3979,  3982,  3983,  3986,  3987,  3989,  3990,  3991,
    3993,  3995,  3997,  3999,  4001,  4009,  4018,  4021,  4028,  4031,
    4038,  4041,  4045,  4048,  4050,  4052,  4056,  4060,  4062,  4067,
    4070,  4072,  4076,  4080,  4085,  4089,  4093,  4097,  4099,  4101,
    4103,  4105,  4107,  4109,  4111,  4113,  4115,  4117,  4119,  4121,
    4123,  4125,  4128,  4129,  4130,  4133,  4140,  4148,  4151,  4153,
    4157,  4159,  4163,  4165,  4167,  4169,  4172,  4175,  4177,  4181,
    4182,  4183,  4186,  4189,  4191,  4195,  4201,  4203,  4206,  4209,
    4213,  4216,  4219,  4222,  4225,  4227,  4229,  4231,  4233,  4238,
    4241,  4245,  4249,  4252,  4256,  4259,  4262,  4265,  4269,  4273,
    4277,  4280,  4284,  4286,  4290,  4294,  4296,  4299,  4302,  4305,
    4308,  4318,  4325,  4327,  4329,  4331,  4333,  4336,  4339,  4343,
    4347,  4349,  4352,  4356,  4360,  4362,  4365,  4367,  4369,  4371,
    4373,  4375,  4378,  4381,  4386,  4388,  4391,  4394,  4397,  4401,
    4403,  4405,  4407,  4410,  4413,  4416,  4419,  4422,  4426,  4430,
    4434,  4438,  4442,  4446,  4450,  4452,  4455,  4458,  4461,  4465,
    4468,  4472,  4476,  4479,  4482,  4485,  4488,  4491,  4494,  4497,
    4500,  4503,  4506,  4509,  4512,  4515,  4518,  4522,  4526,  4530,
    4533,  4536,  4539,  4542,  4545,  4548,  4551,  4554,  4557,  4560,
    4563,  4566,  4570,  4574,  4578,  4583,  4590,  4593,  4595,  4597,
    4599,  4601,  4603,  4604,  4610,  4612,  4619,  4623,  4625,  4628,
    4631,  4634,  4638,  4642,  4645,  4648,  4651,  4654,  4657,  4660,
    4664,  4667,  4670,  4674,  4676,  4680,  4685,  4687,  4690,  4696,
    4703,  4710,  4713,  4715,  4718,  4721,  4727,  4734
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
     382,    -1,     4,    48,   123,   365,    -1,     4,    49,   245,
     363,   363,   363,     4,   373,   382,    -1,     4,    49,   245,
       5,   373,   382,    -1,     4,    48,   245,   363,   363,   373,
     382,    -1,     4,    52,   106,   368,   368,     4,   363,   363,
     363,     4,    -1,     4,    52,   106,   368,   368,     4,   363,
     363,   363,     4,   375,    -1,     4,    52,   106,   368,   368,
       4,   363,   363,   363,     4,   373,   380,    -1,     4,    52,
     106,     5,     5,   373,   380,   373,   382,    -1,     4,    55,
     506,     5,     5,    -1,     4,    62,   123,   365,    -1,     4,
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
       4,    -1,     4,   110,   123,   365,    -1,     4,   110,   245,
     363,   363,   373,   382,    -1,     4,   111,   245,   363,   363,
     363,     4,   373,   382,    -1,     4,   111,   245,     5,   373,
     382,    -1,     4,   114,   106,   368,   368,     4,   363,   363,
     363,     4,    -1,     4,   114,   106,   368,   368,     4,   363,
     363,   363,     4,   375,    -1,     4,   114,   106,   368,   368,
       4,   363,   363,   363,     4,   373,   380,    -1,     4,   114,
     106,     5,     5,   373,   380,   373,   382,    -1,     4,   132,
       5,    -1,     4,   153,    -1,     4,   153,   218,    -1,     4,
     177,    26,   365,   365,    -1,     4,   177,   231,   373,   380,
     372,   372,    -1,     4,   201,   363,   363,    -1,     4,   201,
     136,    -1,     4,   201,    35,    -1,     4,   201,   300,   373,
     380,   372,    -1,     4,   233,   251,   363,   363,   373,   382,
      -1,     4,   266,   251,   363,   363,   373,   382,    -1,     4,
     231,   270,   386,    -1,     4,   231,   277,     4,    -1,     4,
     233,   123,   365,    -1,     4,   239,   373,   380,   372,   372,
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
     245,   373,   382,    -1,     4,    48,   123,    -1,     4,    49,
     245,   373,   382,    -1,     4,    48,   245,   373,   382,    -1,
       4,    52,    20,    -1,     4,    52,    20,   375,    -1,     4,
      52,    20,   373,   380,    -1,     4,    52,   245,   373,   382,
      -1,     4,    59,   373,   380,   381,    -1,     4,    62,   123,
      -1,     4,    62,   245,   373,   382,    -1,     4,    66,    -1,
       4,    74,    26,    -1,     4,    74,   170,    -1,     4,    74,
     245,   373,   382,    -1,     4,    74,   290,    -1,     4,    75,
     142,    -1,     4,    82,    20,    -1,     4,    82,    20,   375,
      -1,     4,    82,    20,   373,   380,    -1,     4,    82,   245,
     373,   382,    -1,     4,   110,   123,    -1,     4,   110,   245,
     373,   382,    -1,     4,   111,   245,   373,   382,    -1,     4,
     114,    20,    -1,     4,   114,    20,   375,    -1,     4,   114,
      20,   373,   380,    -1,     4,   114,   245,   373,   382,    -1,
       4,   132,    -1,     4,   153,    -1,     4,   177,    26,    -1,
       4,   177,   172,   373,   382,    -1,     4,   177,   231,   373,
     380,   381,    -1,     4,   186,   172,   363,   373,   382,    -1,
       4,   233,   123,    -1,     4,   231,   270,    -1,     4,   231,
     277,    -1,     4,   239,   231,   373,   380,   381,    -1,     4,
     239,   172,   373,   382,    -1,     4,   239,   298,   373,   382,
      -1,     4,   240,    -1,     4,   240,   525,    -1,     4,   256,
     133,    -1,     4,   256,   172,   373,   382,    -1,     4,   256,
     231,   373,   380,   381,    -1,     4,   256,   290,    -1,     4,
     267,    -1,     4,   292,    -1,     4,   292,     4,    -1,     4,
     294,    -1,     4,   294,   255,    -1,     4,   304,    -1,     4,
     314,    26,    -1,     4,   314,   172,   373,   382,    -1,     4,
     314,   231,   373,   380,   381,    -1,     4,   348,    -1,   153,
     515,    -1,   153,   214,    -1,   214,    -1,   233,   266,   363,
     363,    -1,   266,   266,   363,   363,    -1,   238,    -1,   240,
     525,    -1,   267,   516,    -1,   267,   214,    -1,   274,   517,
      -1,     5,    66,    -1,     5,   132,    -1,     5,   158,    -1,
       5,   240,   525,    -1,     5,   292,    -1,     5,   292,   214,
      -1,   292,    16,    -1,   292,    99,   202,    -1,   348,    -1,
      29,    -1,   245,    -1,   164,    -1,   219,    -1,    -1,   363,
     363,    -1,    -1,   363,   363,    -1,    -1,   294,    -1,    -1,
      -1,   232,    -1,   247,    -1,   310,    -1,    57,    -1,   134,
      -1,   512,   373,   380,   381,   365,   527,   534,    -1,   267,
     512,   373,   380,   381,   365,   527,   534,    -1,   512,     5,
      -1,   512,     5,     4,     5,   373,   380,    -1,   512,     4,
      -1,   512,     4,     4,     5,   373,   380,    -1,   127,     5,
      -1,   127,     5,     5,    -1,   363,   363,    -1,   136,    -1,
      35,    -1,    39,   363,   363,    -1,   200,   363,   363,    -1,
     112,    -1,   300,   373,   380,   372,    -1,   523,   524,    -1,
     524,    -1,   525,   360,   365,    -1,    66,   360,     5,    -1,
      93,   360,     4,     4,    -1,   348,   360,     4,    -1,   132,
     360,     5,    -1,   294,   360,     5,    -1,   537,    -1,   538,
      -1,   209,    -1,   267,    -1,   153,    -1,    92,    -1,   129,
      -1,   106,    -1,   201,    -1,   255,    -1,   100,    -1,   161,
      -1,   283,    -1,   518,    -1,   518,   523,    -1,    -1,    -1,
     528,   532,    -1,     5,   512,   373,   380,   381,   365,    -1,
     267,     5,   512,   373,   380,   381,   365,    -1,   293,     5,
      -1,    16,    -1,   218,   363,   363,    -1,   301,    -1,   301,
     363,   363,    -1,   125,    -1,   171,    -1,   365,    -1,   294,
     365,    -1,   532,   533,    -1,   533,    -1,   525,   360,   365,
      -1,    -1,    -1,   535,   536,    -1,   536,   537,    -1,   537,
      -1,   292,   360,     5,    -1,    55,   360,   506,     5,     5,
      -1,    64,    -1,    66,     5,    -1,   187,   376,    -1,   246,
     363,   363,    -1,   290,   373,    -1,   299,   363,    -1,    45,
     377,    -1,   187,     4,    -1,   359,    -1,   357,    -1,   351,
      -1,   209,    -1,   363,   363,   363,   363,    -1,   363,   363,
      -1,   375,   363,   363,    -1,   373,   380,   372,    -1,   300,
     542,    -1,    38,   363,   363,    -1,   200,   543,    -1,   238,
     365,    -1,   363,   363,    -1,   375,   363,   363,    -1,   373,
     380,   372,    -1,    39,   363,   363,    -1,   363,   363,    -1,
     112,   363,   363,    -1,   365,    -1,   319,   374,   380,    -1,
       5,     4,     4,    -1,   309,    -1,    70,   547,    -1,   173,
       4,    -1,   252,     4,    -1,   261,   363,    -1,     4,     4,
       4,     4,     4,     4,     4,     4,     4,    -1,     4,     4,
       4,     4,     4,     4,    -1,    54,    -1,   144,    -1,   253,
      -1,    90,    -1,   153,   549,    -1,   267,   550,    -1,    39,
     363,   363,    -1,   200,   363,   363,    -1,   112,    -1,   272,
     112,    -1,    39,   363,   363,    -1,   200,   363,   363,    -1,
     112,    -1,   272,   112,    -1,   195,    -1,    12,    -1,   209,
      -1,    33,    -1,   108,    -1,    61,     5,    -1,   290,   373,
      -1,   313,     4,     4,     4,    -1,   363,    -1,   363,    98,
      -1,   200,   555,    -1,   300,   363,    -1,   300,   363,    98,
      -1,    39,    -1,   363,    -1,   112,    -1,    25,   557,    -1,
     127,   559,    -1,   213,   569,    -1,   113,   570,    -1,   226,
       5,    -1,   122,     5,   390,    -1,    61,     5,   390,    -1,
     281,     4,   390,    -1,   253,    87,   558,    -1,   122,     5,
     390,    -1,    61,     5,   390,    -1,   281,     4,   390,    -1,
     560,    -1,   160,   560,    -1,   291,   561,    -1,   278,   562,
      -1,   118,    87,   563,    -1,   198,   564,    -1,   253,   160,
     566,    -1,   253,    87,   567,    -1,   249,   568,    -1,   122,
       5,    -1,    61,     5,    -1,   281,     4,    -1,   122,     5,
      -1,    61,     5,    -1,   281,     4,    -1,   122,     5,    -1,
      61,     5,    -1,   281,     4,    -1,   122,     5,    -1,    61,
       5,    -1,   281,     4,    -1,   160,   565,    -1,   122,     5,
       4,    -1,    61,     5,     4,    -1,   281,     4,     4,    -1,
     122,     5,    -1,    61,     5,    -1,   281,     4,    -1,   122,
       5,    -1,    61,     5,    -1,   281,     4,    -1,   122,     5,
      -1,    61,     5,    -1,   281,     4,    -1,   122,     5,    -1,
      61,     5,    -1,   281,     4,    -1,   122,     5,   390,    -1,
      61,     5,   390,    -1,   281,     4,   390,    -1,   122,     5,
       5,   390,    -1,   572,     4,     4,   363,   363,   368,    -1,
     572,     4,    -1,   100,    -1,    50,    -1,   302,    -1,   140,
      -1,   109,    -1,    -1,     4,   363,   363,   363,   363,    -1,
     212,    -1,   212,     4,   363,   363,   363,   363,    -1,   127,
     278,   574,    -1,     4,    -1,     4,     4,    -1,   363,   373,
      -1,   363,   363,    -1,   300,   363,   363,    -1,   374,   380,
     381,    -1,    15,   579,    -1,   251,     4,    -1,   248,   578,
      -1,    22,   577,    -1,     4,     4,    -1,     4,     5,    -1,
     294,     4,     5,    -1,     4,     4,    -1,     4,     5,    -1,
     294,     4,     5,    -1,     4,    -1,     4,   374,   380,    -1,
     300,     4,   374,   380,    -1,   237,    -1,   363,   363,    -1,
     363,   363,    11,   363,   363,    -1,   363,   363,    11,   375,
     363,   363,    -1,   363,   363,    11,   373,   380,   372,    -1,
     300,   582,    -1,   126,    -1,   126,   363,    -1,   363,   363,
      -1,   363,   363,    11,   363,   363,    -1,   363,   363,    11,
     375,   363,   363,    -1,   363,   363,    11,   373,   380,   372,
      -1
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
    1790,  1793,  1794,  1798,  1801,  1804,  1807,  1811,  1816,  1821,
    1823,  1824,  1826,  1827,  1829,  1831,  1833,  1835,  1836,  1838,
    1840,  1844,  1849,  1851,  1853,  1855,  1857,  1859,  1861,  1863,
    1865,  1867,  1869,  1872,  1873,  1875,  1877,  1878,  1880,  1882,
    1883,  1884,  1886,  1888,  1889,  1890,  1892,  1893,  1894,  1897,
    1901,  1904,  1907,  1911,  1916,  1922,  1923,  1924,  1926,  1927,
    1931,  1933,  1934,  1935,  1938,  1941,  1944,  1946,  1948,  1949,
    1954,  1957,  1958,  1959,  1962,  1966,  1967,  1969,  1970,  1971,
    1973,  1974,  1976,  1977,  1982,  1984,  1985,  1987,  1988,  1989,
    1990,  1991,  1992,  1994,  1996,  1998,  1999,  2000,  2002,  2004,
    2005,  2006,  2007,  2008,  2009,  2010,  2011,  2012,  2013,  2014,
    2016,  2018,  2019,  2020,  2021,  2023,  2024,  2025,  2026,  2027,
    2029,  2030,  2031,  2032,  2033,  2034,  2037,  2038,  2039,  2040,
    2041,  2042,  2043,  2044,  2045,  2046,  2047,  2048,  2049,  2050,
    2051,  2052,  2053,  2054,  2055,  2056,  2057,  2060,  2061,  2062,
    2063,  2064,  2065,  2073,  2080,  2089,  2098,  2105,  2112,  2120,
    2128,  2135,  2140,  2145,  2150,  2155,  2160,  2165,  2171,  2181,
    2191,  2201,  2208,  2218,  2228,  2237,  2249,  2262,  2267,  2270,
    2272,  2274,  2279,  2283,  2284,  2285,  2291,  2293,  2295,  2298,
    2299,  2300,  2301,  2302,  2303,  2304,  2307,  2308,  2309,  2310,
    2311,  2312,  2314,  2316,  2318,  2320,  2322,  2324,  2327,  2328,
    2329,  2330,  2332,  2335,  2336,  2338,  2340,  2341,  2342,  2344,
    2347,  2350,  2351,  2353,  2354,  2355,  2356,  2358,  2359,  2360,
    2361,  2362,  2364,  2366,  2367,  2369,  2372,  2373,  2374,  2376,
    2378,  2379,  2380,  2381,  2383,  2386,  2390,  2391,  2392,  2393,
    2396,  2399,  2401,  2402,  2403,  2404,  2406,  2409,  2410,  2412,
    2413,  2414,  2415,  2416,  2418,  2419,  2421,  2424,  2425,  2426,
    2427,  2428,  2430,  2432,  2433,  2434,  2435,  2437,  2439,  2440,
    2441,  2442,  2443,  2444,  2446,  2447,  2449,  2452,  2453,  2454,
    2455,  2458,  2459,  2462,  2463,  2466,  2467,  2470,  2483,  2484,
    2488,  2489,  2493,  2494,  2497,  2501,  2507,  2509,  2512,  2514,
    2517,  2519,  2523,  2524,  2525,  2526,  2527,  2528,  2529,  2533,
    2534,  2537,  2538,  2539,  2540,  2541,  2542,  2543,  2544,  2547,
    2548,  2549,  2550,  2551,  2552,  2553,  2554,  2555,  2556,  2557,
    2560,  2561,  2564,  2565,  2565,  2568,  2570,  2572,  2575,  2576,
    2577,  2578,  2579,  2580,  2583,  2584,  2587,  2588,  2591,  2595,
    2596,  2596,  2599,  2600,  2603,  2606,  2610,  2611,  2612,  2613,
    2614,  2615,  2616,  2617,  2623,  2624,  2625,  2626,  2629,  2631,
    2632,  2637,  2639,  2640,  2641,  2642,  2645,  2646,  2651,  2655,
    2656,  2657,  2660,  2661,  2666,  2667,  2670,  2672,  2673,  2674,
    2679,  2681,  2687,  2688,  2689,  2690,  2693,  2694,  2697,  2699,
    2701,  2702,  2705,  2707,  2708,  2709,  2712,  2713,  2716,  2717,
    2718,  2721,  2722,  2723,  2726,  2727,  2728,  2729,  2730,  2733,
    2734,  2735,  2738,  2739,  2740,  2741,  2742,  2745,  2747,  2749,
    2751,  2754,  2756,  2758,  2761,  2762,  2763,  2764,  2765,  2766,
    2767,  2768,  2769,  2772,  2773,  2774,  2777,  2778,  2779,  2782,
    2783,  2784,  2787,  2788,  2789,  2792,  2793,  2794,  2795,  2798,
    2799,  2800,  2803,  2804,  2805,  2808,  2809,  2810,  2813,  2814,
    2815,  2818,  2820,  2822,  2826,  2830,  2832,  2837,  2840,  2841,
    2842,  2843,  2846,  2847,  2849,  2850,  2852,  2855,  2856,  2857,
    2860,  2861,  2864,  2866,  2867,  2868,  2869,  2872,  2873,  2874,
    2877,  2878,  2879,  2882,  2883,  2888,  2892,  2899,  2900,  2902,
    2907,  2909,  2912,  2913,  2914,  2915,  2917,  2922
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
     504,   504,   504,   504,   504,   504,   506,   506,   506,   506,
     506,   506,   506,   506,   506,   506,   506,   506,   506,   506,
     506,   506,   506,   506,   506,   506,   506,   507,   507,   507,
     507,   507,   507,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   509,
     509,   509,   509,   510,   510,   510,   511,   511,   511,   512,
     512,   512,   512,   512,   512,   512,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   514,   514,   514,
     514,   515,   515,   516,   516,   517,   517,   518,   519,   519,
     519,   519,   519,   519,   520,   520,   521,   521,   521,   521,
     521,   521,   522,   522,   522,   522,   522,   522,   522,   523,
     523,   524,   524,   524,   524,   524,   524,   524,   524,   525,
     525,   525,   525,   525,   525,   525,   525,   525,   525,   525,
     526,   526,   527,   528,   527,   529,   529,   529,   530,   530,
     530,   530,   530,   530,   531,   531,   532,   532,   533,   534,
     535,   534,   536,   536,   537,   538,   539,   539,   539,   539,
     539,   539,   539,   539,   540,   540,   540,   540,   541,   541,
     541,   541,   541,   541,   541,   541,   542,   542,   542,   543,
     543,   543,   544,   544,   544,   544,   545,   545,   545,   545,
     546,   546,   547,   547,   547,   547,   548,   548,   549,   549,
     549,   549,   550,   550,   550,   550,   551,   551,   552,   552,
     552,   553,   553,   553,   554,   554,   554,   554,   554,   555,
     555,   555,   556,   556,   556,   556,   556,   557,   557,   557,
     557,   558,   558,   558,   559,   559,   559,   559,   559,   559,
     559,   559,   559,   560,   560,   560,   561,   561,   561,   562,
     562,   562,   563,   563,   563,   564,   564,   564,   564,   565,
     565,   565,   566,   566,   566,   567,   567,   567,   568,   568,
     568,   569,   569,   569,   570,   571,   571,   571,   572,   572,
     572,   572,   573,   573,   573,   573,   573,   574,   574,   574,
     575,   575,   576,   576,   576,   576,   576,   577,   577,   577,
     578,   578,   578,   579,   579,   579,   580,   581,   581,   581,
     581,   581,   582,   582,   582,   582,   582,   582
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
       0,     2,    61,   338,   337,    19,     0,    20,     0,     0,
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
     732,     0,   737,     0,     0,     0,   907,     0,     0,     0,
     741,   745,   747,   943,     0,     0,     0,     0,   845,     0,
       0,     0,   880,     0,     0,     0,     0,     0,     0,     0,
     882,     0,     0,     0,    33,   142,   143,   141,   140,  1132,
    1127,  1133,   136,   137,   135,   138,   134,  1128,     0,  1130,
    1131,    35,    36,     0,     0,     0,     0,  1144,  1145,     0,
     157,     0,  1142,  1139,     0,     0,     0,   157,  1162,  1165,
    1163,  1164,  1156,  1157,  1158,  1159,     0,     0,     0,    44,
    1181,  1182,     0,  1189,  1191,  1190,  1186,  1187,  1185,     0,
       0,     0,     0,  1192,     0,  1195,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1193,  1204,     0,     0,
       0,  1194,  1196,  1246,  1179,  1180,  1178,   212,     0,   215,
     208,     0,   217,   209,     0,   219,   210,  1177,  1176,   211,
     213,   214,     0,     0,   207,     0,     0,     0,     0,  1260,
    1273,     0,  1263,     0,     0,  1266,     0,     0,  1265,  1264,
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
       0,  1261,   157,     0,  1267,  1268,     0,  1270,  1271,     0,
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
    1241,  1243,     0,     0,     0,  1258,  1259,     0,  1274,   157,
    1269,  1272,     0,     0,   157,     0,     0,     0,   235,     0,
       0,     0,     0,   276,     0,     0,     0,   307,   306,     0,
       0,   298,   309,   311,     0,   321,   323,   322,   320,   157,
     328,     0,     0,     0,   165,   157,     0,     0,     0,     0,
     460,   474,   483,     0,   477,   170,   171,   169,   470,     0,
     486,     0,     0,   453,   458,    81,     0,     0,     0,     0,
       0,     0,   157,   970,     0,   973,     0,     0,   976,     0,
     157,   981,     0,   984,   985,     0,   987,   988,   989,     0,
     993,     0,     0,   996,     0,  1002,     0,     0,     0,  1007,
    1008,  1006,     0,     0,     0,  1013,  1014,     0,     0,  1017,
    1020,  1022,  1024,     0,     0,  1041,  1043,   960,  1052,   961,
       0,     0,  1054,  1045,     0,     0,   533,   534,     0,   575,
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
     281,     0,     0,     0,   157,     0,   313,   145,     0,   415,
       0,   436,   165,   168,     0,     0,   449,     0,   487,   488,
       0,   452,     0,     0,     0,     0,     0,   157,   971,   168,
     168,   168,   157,   977,   168,   165,   168,   168,   157,   990,
     168,   168,   168,   157,   997,   168,   168,   157,     0,   168,
     157,   168,   168,   157,   168,   157,  1031,  1032,     0,     0,
     532,     0,   594,   599,   600,   601,     0,   605,   606,   607,
     613,   178,   175,   619,   636,   637,   638,   639,   640,     0,
     642,   643,   175,     0,     0,     0,   175,   175,   172,     0,
       0,     0,     0,     0,     0,   175,   175,   172,     0,     0,
       0,     0,     0,     0,   175,   175,   172,     0,     0,     0,
     175,   178,   178,   178,   178,   178,     0,   178,   178,     0,
     175,   175,   178,   178,   178,   178,   178,     0,   178,   178,
       0,   175,   175,   699,   700,   701,   702,   704,     0,   707,
     708,     0,   175,   710,   711,   712,   713,   714,     0,   716,
     717,   175,   629,   175,     0,   635,     0,     0,   722,     0,
     758,   168,     0,     0,   168,     0,     0,     0,   769,   168,
     773,   774,   168,   776,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   798,   801,   802,
       0,   168,     0,     0,     0,   818,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1101,  1080,     0,  1087,  1088,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   157,
       0,     0,    86,     0,     0,   946,   947,   165,     0,     0,
       0,  1078,   852,   854,   165,   157,  1161,  1202,  1201,  1203,
    1245,     0,  1255,  1285,     0,     0,  1280,  1279,   240,     0,
       0,     0,     0,     0,     0,   299,   168,   416,   420,   437,
     439,     0,   447,   482,   157,     0,     0,     0,     0,     0,
       0,   967,   972,   975,   974,   978,   979,   980,   982,   986,
     991,   992,   994,   995,   998,   999,  1003,   165,   168,  1010,
     165,  1011,  1015,   165,  1025,   165,     0,   157,     0,   531,
       0,   604,   615,   178,   175,   644,   178,   178,   178,   178,
     178,     0,   178,   178,   175,   178,   178,   178,   178,   178,
       0,   178,   178,   175,   178,   178,   178,   178,   178,     0,
     178,   178,   175,   178,   659,   660,   661,   662,   664,   175,
     667,   668,     0,   178,   178,   688,   689,   690,   691,   693,
     175,   696,   697,     0,   178,   703,   175,     0,   709,   175,
     718,   631,   175,   727,   728,   157,   760,     0,   168,   763,
       0,   157,     0,   771,   775,   157,     0,   782,   783,   784,
     785,   789,   790,   786,   787,   788,     0,     0,   168,   810,
       0,   157,     0,     0,   823,   168,     0,     0,   168,   168,
       0,   869,     0,   189,   189,     0,     0,   189,     0,   189,
    1057,     0,     0,     0,     0,     0,     0,     0,     0,  1079,
       0,     0,   189,   189,     0,     0,     0,     0,     0,     0,
       0,     0,   939,     0,     0,     0,  1057,    87,     0,   189,
       0,  1103,   157,   157,     0,   165,     0,   222,  1287,  1286,
       0,     0,   244,     0,     0,     0,     0,   314,   448,     0,
     333,     0,   963,     0,   197,     0,  1004,  1005,  1009,  1016,
    1026,   370,     0,   333,     0,   616,   641,   650,   651,   652,
     653,   654,   175,   656,   657,   178,   679,   680,   681,   682,
     683,   175,   685,   686,   178,   670,   671,   672,   673,   674,
     175,   676,   677,   178,   663,   178,   175,   669,   692,   178,
     175,   698,   705,   175,   715,   632,     0,   168,   764,     0,
       0,     0,     0,     0,   791,   792,   808,     0,     0,     0,
     819,   824,     0,   833,   834,   825,   168,     0,   190,  1057,
    1057,    86,     0,  1057,     0,  1057,   913,   157,     0,  1082,
       0,  1085,  1124,  1086,  1084,  1081,     0,  1057,  1057,    86,
       0,     0,  1057,  1057,     0,     0,  1057,   942,   940,   941,
     920,  1057,  1057,  1103,  1119,     0,  1069,  1067,  1105,     0,
       0,     0,     0,   246,     0,   277,     0,   333,   334,   336,
     335,   381,     0,     0,   198,   200,   199,   965,   966,   333,
     383,     0,   178,   658,   178,   687,   178,   678,   665,   178,
     694,   178,   706,     0,   759,   168,   168,     0,   168,     0,
     168,   168,     0,   168,     0,  1057,   926,   922,  1057,     0,
     927,     0,   921,  1057,     0,  1083,     0,   924,   923,  1057,
       0,     0,   918,   916,  1057,   157,   917,   919,   925,  1119,
    1064,     0,     0,  1104,  1117,  1106,  1160,     0,     0,   282,
     300,   303,   301,     0,     0,   382,   962,   157,   384,   577,
     655,   684,   675,   666,   695,   168,   762,   768,     0,   781,
     778,   809,   814,     0,   829,     0,   931,   915,    86,     0,
     929,  1125,     0,   914,    86,     0,   930,     0,  1065,  1121,
    1123,     0,  1116,     0,     0,     0,     0,     0,     0,   197,
       0,   765,   157,   779,   811,   843,  1057,     0,     0,  1057,
       0,   168,  1122,  1118,   245,     0,     0,     0,     0,     0,
     964,   738,   157,   766,   780,   157,   812,   933,     0,  1057,
     932,     0,     0,   247,   293,     0,   292,     0,   767,   813,
      86,   934,    86,  1057,   291,   290,  1057,  1057,   928,   936,
     935
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    54,  1425,   171,   153,   919,  2496,  2497,   432,   433,
     434,   435,   154,   155,   156,   697,   689,    92,   818,   455,
    1222,  1688,  1362,  1375,  1358,  1931,  2599,  1422,  2657,  1593,
     343,   770,   773,   776,   784,    64,   368,   374,   378,   381,
      69,   384,    76,   400,   396,   390,   407,    83,   412,    93,
      99,   417,   419,   421,   489,   872,  1659,   423,   426,   106,
     442,   157,   159,  2651,   175,   177,   218,   914,   953,   478,
     861,   480,   490,   864,   869,   492,   494,   875,   497,   877,
     508,   880,   882,   511,   515,   519,   521,   524,   528,   556,
     552,  1283,   542,   900,   905,   897,  1271,   911,   545,   566,
     569,   574,   579,   587,   944,   946,   948,   950,   592,   955,
     221,   594,  1758,   240,   597,   599,   603,   608,   616,   250,
    1351,   620,   258,   629,  1367,   631,   637,  1000,  1383,   995,
    1799,  1389,  1387,  1801,   996,  1392,  1394,   643,   646,   641,
     260,   268,   270,   684,  1077,  1449,  1066,  1547,  1975,  1080,
    1084,  1075,   939,  1326,  1330,  1338,  1340,  1959,   276,  1093,
    1096,  1104,  2262,  2263,  2264,  1960,  2634,  2635,  1125,  1131,
    1134,  2713,  2714,  2710,  2711,  2759,  2265,  2266,   284,   290,
     298,   712,   707,   303,   308,   310,   722,   729,  1160,  1165,
     779,   767,   316,   320,   736,   326,   743,  1598,   756,   757,
    1196,  1191,  1604,  1181,  1610,  1622,  1618,  1185,   761,   745,
     332,   333,   347,  1209,   350,   356,   795,   798,   792,   358,
     361,   803
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2590
static const yytype_int16 yypact[] =
{
    4997,    72,   118,    23, -2590, -2590,  1105,  -160,    37,   785,
    1168,   158,  3372,   134,   371,   126,  1098,   375,  5067,    99,
    2808, -2590,   209,  1125,   133,   904,   319,    16,   584,   754,
     692,   528,   935,  3421,   146,   762,   605,   531,   754, -2590,
     119,    55,  1192, -2590,   533,   640,   742, -2590,    57, -2590,
      85,  2009,   410,   105,   663,   110,   514,   411,   749,   753,
     116,   791,    18,   881, -2590, -2590, -2590,  1022,   657, -2590,
     121,   120,   371,    -6,   113,   571, -2590,   799,   657, -2590,
   -2590,    40,   657, -2590, -2590, -2590, -2590,   657, -2590, -2590,
   -2590, -2590, -2590, -2590,   187,   736,   814,   826,   155, -2590,
     657,  1455,   657,   657,  1044,   657, -2590, -2590, -2590,   668,
   -2590, -2590, -2590, -2590,  4569, -2590, -2590, -2590, -2590, -2590,
   -2590,   657, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590,  1160, -2590,   657, -2590,   853, -2590,
   -2590,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371, -2590, -2590, -2590, -2590, -2590,   752, -2590,   815,  1517,
     781,   102,   613,   730,   464,  3758,   542,  4622,  4167,   899,
    4569,  3951, -2590,  1266,  -109,   870,   936,   857,   117,   676,
     940,   754,   885, -2590,   891, -2590,   734,   687,   169, -2590,
     285, -2590,   504, -2590,   564,   892,    62, -2590, -2590,  4690,
   -2590, -2590, -2590,   923,   934,   965, -2590, -2590, -2590, -2590,
     997, -2590, -2590, -2590, -2590,   956, -2590, -2590,  4690,  4240,
   -2590,  1023, -2590,    77, -2590,  1028,  1033,   565, -2590,   657,
   -2590,  1038,    64,  1045,    75,   906,  1054,    24, -2590, -2590,
   -2590,  1052,  1063,   371,   371,   657,   657, -2590, -2590,  1069,
   -2590, -2590, -2590, -2590, -2590, -2590,  2961,   629, -2590,  1072,
      12,   657,  4690,   657, -2590,   483, -2590, -2590, -2590, -2590,
   -2590,   657,  1211,   371,  3793,   657,  1160,   657, -2590,  1086,
   -2590,  5105, -2590, -2590,   623,  1088,  1115,   657, -2590,  1124,
   -2590, -2590,   -58,  1074,  4690,  1134, -2590,  1254,   657,  1042,
   -2590,   510,  1027,  1320,   426,  1149, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590,  1164, -2590,   188,   255,   318,   394,    84,
     657,   657,   130, -2590,   657,   879,  1167, -2590,   657,   657,
   -2590,    35,    39,    50,  1173,  1160, -2590, -2590, -2590,  1110,
     657, -2590, -2590, -2590, -2590, -2590, -2590,   657, -2590,  1178,
    1186, -2590,   657,  1161, -2590, -2590, -2590, -2590, -2590, -2590,
     657, -2590, -2590,   657, -2590, -2590,   610,   610, -2590,  1183,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590,  1005,   657,   657,  1196,  1208,  1212, -2590, -2590,   657,
     657,   657, -2590,   657, -2590,  1226, -2590, -2590, -2590, -2590,
     829, -2590,  1244, -2590,  4690,  1251, -2590,   657, -2590, -2590,
   -2590,   657,  1256,  1249,  1249,  4690,   657,   657,   657,   657,
     657,   657, -2590,   657,  4569,  1455,   657,   657, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590,  1455,   657, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,  1270, -2590,
    1008,    92, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590,   -43, -2590, -2590, -2590,  1109, -2590,   503,   374,   374,
   -2590, -2590, -2590,  1299, -2590,  1305, -2590, -2590,   -35, -2590,
    1131, -2590, -2590, -2590,  1138, -2590, -2590,  1160, -2590,   657,
     657, -2590,  4690,  4690,  1160, -2590, -2590,  1160, -2590, -2590,
   -2590, -2590,  1160, -2590, -2590,  4690,  1160,   657, -2590, -2590,
    4690, -2590,  1311,   482,  1116,    10, -2590, -2590,  1126,  4690,
       8, -2590, -2590, -2590, -2590, -2590, -2590,  1332,  1334,  1337,
   -2590,  1143, -2590,   -34, -2590,   657, -2590, -2590,   476, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
     564, -2590, -2590, -2590, -2590, -2590, -2590,  1158,  1165, -2590,
   -2590,  1294,  1295,  1302, -2590, -2590,  1142, -2590,   657,  1369,
    1145,  5105, -2590,  1160, -2590, -2590,  1375, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590,  4690,  4690,  4690,  4690, -2590, -2590, -2590,  1381,   371,
   -2590, -2590,  1382,  1385,  1188,   657, -2590,   488,  1304, -2590,
    1389, -2590,   611,  1309,  4101,    48,  1393, -2590,  1395, -2590,
    1396, -2590,   418, -2590,  1397,  1402, -2590,  1406, -2590, -2590,
   -2590,   657, -2590,  5105,  4572,  1357,   196,  1409,   513,  1321,
   -2590, -2590, -2590,    15,    28,  1407,  1417,   267,   657,   144,
     946,   518,  4690,   371,  1401,   438,    43,   480,   283,    41,
   -2590,  1419,  1423,  1421, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,   657, -2590,
   -2590, -2590, -2590,   657,   657,   657,   657, -2590, -2590,   657,
    1160,   657, -2590,   657,  1455,   657,  1437,  1160, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590,  1439,    27,    34, -2590,
   -2590, -2590,  1441, -2590, -2590, -2590, -2590,  1349, -2590,  1444,
    1450,  1374,  1458, -2590,  1463, -2590,  1465,  1386,  1467,   450,
     509,   468,    58,   493,  1471,   521, -2590, -2590,  1473,  1474,
    1478, -2590, -2590,  1479, -2590, -2590, -2590, -2590,  1480, -2590,
   -2590,  1482, -2590, -2590,  1483, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590,   657,   657, -2590,   657,  1041,   657,   657, -2590,
    5105,  1487, -2590,  1130,  1488, -2590,  1214,  1490, -2590, -2590,
      -8,   657,   657, -2590,  1484, -2590, -2590,  1491,  1182,   657,
    1489,   170, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590,  1494,  1495,   657,   657,
     657,  1504,   371,  1505,  1508,  1160,  4690, -2590, -2590, -2590,
   -2590, -2590,  1160, -2590, -2590,   657,   657,   657,  4690,   657,
    1455,   657, -2590,   657, -2590, -2590, -2590, -2590, -2590,  1512,
    1514, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590,   542, -2590,   657, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590,  4690,   657,  1160,  1160,    -8,
      -8,    -8,  1160,  1455,   657,  1160, -2590, -2590, -2590,   657,
   -2590,   -34,  1315,  1516,  1511, -2590, -2590,  1160, -2590,  1403,
    1404, -2590,  1553,  1562, -2590,  1564,  1303,  1534,  1535, -2590,
     657,  3374,   933,   695, -2590, -2590, -2590,   657,   208,   958,
   -2590,  1308, -2590,  1401,  1310,   262,  1281,   136, -2590, -2590,
     657, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590,   657,  1572, -2590, -2590, -2590, -2590,    -8, -2590, -2590,
   -2590, -2590, -2590,  4650, -2590, -2590,  1576,  1578,   657,  1580,
    1581,  1586,   -16,   -16,   -75,  1585,  1589,  1590,  1591,  1324,
    1325,  1594,  1595,  1601,    54,    54,   -75,  1603,  1604,   -75,
    1608,  1610,  5069,  1611,  1615, -2590, -2590,  1616,  1617,   678,
   -2590,  1605,  1619,  1620,  1621,   -16,   -75,  1623,  1627, -2590,
    1628, -2590, -2590,  1160,  1051,  1447,  1383,   405,  1390,  1530,
     427,   414,  1633,     7,  1452,  1539,  1129,   544,  1612,   421,
    1405,  1551,  1653,  1442,    81,    52,   243,   -45,  4690,  1401,
    1625,   777,  1408,  1448,  1657,    31, -2590, -2590,   217,  1663,
    1666, -2590, -2590, -2590,  1667,  1459,    59,  1401,  1460, -2590,
   -2590, -2590,   371,  1669,  1677,   657, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590,    20, -2590,  2772, -2590, -2590,
   -2590,   657, -2590,   657, -2590, -2590, -2590, -2590,   657,   657,
     657,   513,  4690, -2590,  1681,  1265, -2590, -2590,   657, -2590,
   -2590,   657,  4690,   657, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,   371,   657,
   -2590,   657,   513,  1682,  1683, -2590, -2590, -2590, -2590,   657,
     657, -2590,   371, -2590, -2590, -2590,   849,  1685,  1686, -2590,
   -2590, -2590, -2590, -2590,   657,   657, -2590, -2590,  1455,   657,
     657, -2590, -2590, -2590, -2590,  1678,   657, -2590,   657,  1582,
   -2590,   657, -2590,   657,  1587, -2590,  1688, -2590,  1034,  1034,
     540,  1034,  1692, -2590,   556, -2590, -2590,  1696,  1697,   625,
    1689, -2590,  1698,  1700,  1702, -2590,   666,   673,  1703,  1704,
    1707, -2590, -2590,  1708,  1709,  1711, -2590,  1034,  1034,  1034,
     657, -2590, -2590, -2590,   657, -2590,   657,   856,  4690, -2590,
     657, -2590,  1160,  5105, -2590, -2590,  1712, -2590, -2590,  1714,
   -2590, -2590, -2590, -2590,  1701,  3793, -2590,   657,  1705,   657,
     657,   657,  1228, -2590,  1716,  1718,   657,   657,   -12,  1719,
     371,   371, -2590,  1160,   657,  1722,  1723,  1724,  1160,  4690,
   -2590,   657, -2590, -2590, -2590,   657,   657,   657,  1160,  4690,
      -8, -2590, -2590, -2590, -2590,  1455,   657,  1725,    -8,   657,
     600, -2590,  1727, -2590, -2590,   508,  4041,   657, -2590,   657,
    1730,  1735,   657, -2590, -2590, -2590,  1731,  1153,  4569,  1462,
     474,  1493,    -1,  4690,   548, -2590,   355,  1597,    66,   570,
    1498,   122, -2590, -2590,   566,  1568,   710,  1600,   -41,  1401,
     877, -2590,  1740,  1496, -2590,   761, -2590, -2590, -2590, -2590,
    1401,  1531, -2590, -2590, -2590, -2590, -2590,   657, -2590,   657,
   -2590, -2590,   657,   657, -2590,   657, -2590,   657, -2590, -2590,
   -2590, -2590,  1544,   657, -2590,   657,     9, -2590, -2590,  1745,
    1746, -2590,   657,   -16,   -16,   -16, -2590, -2590, -2590, -2590,
   -2590, -2590,  1749,   -16,   -16,   -16,   731, -2590, -2590,    54,
     -16,   -16,   -16, -2590, -2590,   -16,   -16,  1750,   -16,   -16,
    1751,    54,   800, -2590,  1752,  1754,  1755, -2590,   712, -2590,
     748,   825, -2590,   839, -2590,  1477,  1756,  1757,  1758,    54,
      54,   -75,  1762,  1763,   -75,  1765,  1764,  1769,   -16,   -16,
   -2590,  1772,   -16,   -16, -2590,  1774, -2590, -2590, -2590, -2590,
   -2590, -2590,   371, -2590, -2590, -2590,  4569,  1120,   371,   657,
    1297,  1426,   688, -2590, -2590, -2590,   921, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,  1775,
     371,   657, -2590,   371,  1776,   657,  4690,   371,  1499,  1532,
    1537,   206,   216,  1538,   225,  1468,  1469,  1783,  1785,  1786,
     427,  1787,  1788,  1789,  1481,  1485,  1331,  1790,   371,   657,
    1317,  1546, -2590, -2590,   371,  4690, -2590, -2590,  4690,   657,
     -11,  1791,   371,   657,  1160,   371, -2590,  1793,  4690,  4690,
     657, -2590, -2590, -2590,   371,   371,  4690, -2590, -2590, -2590,
   -2590, -2590, -2590,  4690,   657,   371, -2590, -2590, -2590,   657,
   -2590, -2590,  1794,   657,  1565,   151,   657,  1569,   657,   183,
     657, -2590,   657,  1571,  1573,   657,   657,   657,   657,   657,
     657,   657,   657,    19,   657,   657,  1574, -2590,   657,   657,
     657,   657, -2590,  4690,  1160,  1801,  1803,  1804,   657,   657,
    1160, -2590,   657,   657,   657,  4690,   513, -2590,   657,   657,
   -2590, -2590, -2590,  1805, -2590, -2590, -2590, -2590, -2590, -2590,
    1807,   657,   657, -2590,   657,   657, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590,  1808,  1809,  1811, -2590, -2590,
    1034,  1812,  1813,  1816, -2590,  1817,  1820,  1821,  1822,  1824,
   -2590,  1853, -2590, -2590, -2590,  1854,  1857,  1859, -2590,  1863,
    1865,  1860, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590,   657,   657,   657, -2590, -2590,   657, -2590,  1160,
   -2590, -2590,  3793,   657,  1160,   657,   657,   657, -2590,   657,
     657,  1866,   657, -2590,  1868,   657,   657, -2590, -2590,  1869,
    4690, -2590, -2590, -2590,   657, -2590, -2590, -2590, -2590,  1160,
   -2590,   961,   657,   961,    -8,  1160,  4690,   657,   657,  1870,
   -2590, -2590, -2590,   657, -2590, -2590, -2590, -2590, -2590,  4690,
   -2590,  4690,   657, -2590, -2590,   -34,  1871,  1872,  1874,  1875,
    1876,  4690,  1160, -2590,  4690, -2590,  4690,  4690,  4569,  4690,
    1160, -2590,  4690, -2590, -2590,  4690, -2590, -2590,  4569,  4690,
   -2590,  4690,  4690,  4569,  4690, -2590,  4690,  4690,   657, -2590,
   -2590, -2590,  4690,  4690,  4690, -2590, -2590,  4690,  4690, -2590,
   -2590, -2590, -2590,  4690,  4690, -2590, -2590, -2590, -2590, -2590,
     657,   657, -2590, -2590,  1878,   657, -2590, -2590,  1879, -2590,
   -2590,   657, -2590, -2590, -2590,   -16, -2590, -2590, -2590,  1880,
    1881,  1882, -2590, -2590,   -75,  1893,  1895,  1896,   -16, -2590,
   -2590, -2590, -2590, -2590,    54, -2590, -2590,  1898,   -16,  1899,
    1900,  1901,    54,    54,   -75,  1903,  1904,  1905,   908, -2590,
    1002, -2590,  1075,  1533,  1906,  1910,  1911,    54,    54,   -75,
    1909,  1913,   -75,  1914,  1579,  1915,  1916,  1917,    54,    54,
     -75,  1919,  1920,   -75,  1921,  1596,  1922,  1923,  1924,    54,
      54,   -75,  1926,  1929,   -75,  1930,  1931,  1933,  1934,    54,
      54,   -75,  1936,  1937,  1938,    54, -2590, -2590, -2590, -2590,
   -2590,  1940, -2590, -2590,  1941,    54,  1952,  1953, -2590, -2590,
     -16, -2590, -2590,  1965, -2590,  1160, -2590,  4690,   657, -2590,
     657,  4690,   657,  1967,  1447, -2590, -2590, -2590, -2590, -2590,
   -2590,  1971, -2590,  4690,   371,  1972,  4690,  1160, -2590,  1973,
    1447,   657,   657,   657,   657,   657,   657,   657,   657,   657,
    1976,  1977, -2590, -2590, -2590,  1978, -2590, -2590, -2590,  1980,
    1981, -2590, -2590, -2590, -2590,   657,  4690,   657,  1984,  1447,
     371,  1160,  1160, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590,   657,  1455, -2590, -2590,  1160,  1160,
     657, -2590, -2590,  1160,  1160, -2590, -2590, -2590, -2590,   657,
     657,   657,   657,   657,   657,   657,   657,   657,   657,  4986,
   -2590,   657,   657,   657,   657,   657,   657,   657,   657,   657,
     657,   657,  1510,  1985,   657, -2590,   657,   657,   657,  1982,
    1987, -2590, -2590,  1160,    -8, -2590,  1988,  1989, -2590, -2590,
    1455,   657, -2590,  1991,  1160,  4690, -2590, -2590, -2590,  1992,
   -2590, -2590, -2590, -2590,  1034,  1034,  1034, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590,  1447,   657, -2590,   657, -2590,   657,  1160,
     657, -2590,  1455,   657, -2590,   657, -2590,  1798,  1993,  1994,
   -2590,   657,   657,  1996,  1160,  4690, -2590, -2590,   657, -2590,
     657, -2590,    -8,   508,   657,  1997, -2590,   657, -2590, -2590,
    4569, -2590,  1998,  1999,  2000,  2001,  2002,  1160, -2590,   508,
     508,   508,  1160, -2590,   508,    -8,   508,   508,  1160, -2590,
     508,   508,   508,  1160, -2590,   508,   508,  1160,  4690,   508,
    1160,   508,   508,  1160,   508,  1160, -2590, -2590,  2005,  4569,
    2006,   657, -2590, -2590, -2590, -2590,  2008, -2590, -2590, -2590,
   -2590,   -16,    54, -2590, -2590, -2590, -2590, -2590, -2590,  2010,
   -2590, -2590,    54,  2011,  2012,  2013,    54,    54,   -75,  2016,
    2018,  2021,  2028,  2029,  2030,    54,    54,   -75,  2032,  2036,
    2037,  2038,  2039,  2041,    54,    54,   -75,  2044,  2045,  2047,
      54,   -16,   -16,   -16,   -16,   -16,  2046,   -16,   -16,  2049,
      54,    54,   -16,   -16,   -16,   -16,   -16,  2051,   -16,   -16,
    2052,    54,    54, -2590, -2590, -2590, -2590, -2590,  2054, -2590,
   -2590,  2055,    54, -2590, -2590, -2590, -2590, -2590,  2056, -2590,
   -2590,    54, -2590,    54,  2057, -2590,  2058,  2059, -2590,  5105,
   -2590,   508,  2060,  4690,   508,   657,  4690,  2063, -2590,   508,
   -2590, -2590,   508, -2590,  4690,  2066,   657,   657,   657,   657,
     657,   657,   657,   657,   657,   657,   657, -2590, -2590, -2590,
    4690,   508,   657,  4690,  2067, -2590,  1455,  1455,  4690,  1455,
    1455,  4690,  4690,  1455,  1455,   657,   657,   657,   657,   657,
     657,  1447,   657,   657,   657,  1456,  1523,  1540,  1543,  1549,
    1558,  1622,  4986, -2590,  1632, -2590, -2590,  1447,   657,   657,
     657,   657,  1447,   657,   657,   657,   657,   657,   657,  1160,
     657,  1513,  1447,   657,   657, -2590, -2590,    -8,   371,  4690,
    4690, -2590, -2590, -2590,    -8,  1160,  2070, -2590, -2590, -2590,
   -2590,   657, -2590, -2590,  1455,   657, -2590, -2590, -2590,  1274,
    2072,  2073,   657,  2071,   961, -2590,   508, -2590, -2590, -2590,
   -2590,  2074, -2590, -2590,  1160,  2076,  2077,  2079,  2080,  4690,
    2081, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590,    -8,   508, -2590,
      -8, -2590, -2590,    -8, -2590,    -8,  2082,  1160,  2084, -2590,
     657, -2590, -2590,   -16,    54, -2590,   -16,   -16,   -16,   -16,
     -16,  2085,   -16,   -16,    54,   -16,   -16,   -16,   -16,   -16,
    2086,   -16,   -16,    54,   -16,   -16,   -16,   -16,   -16,  2087,
     -16,   -16,    54,   -16, -2590, -2590, -2590, -2590, -2590,    54,
   -2590, -2590,  2088,   -16,   -16, -2590, -2590, -2590, -2590, -2590,
      54, -2590, -2590,  2089,   -16, -2590,    54,  2090, -2590,    54,
   -2590, -2590,    54, -2590, -2590,  1160, -2590,  4690,   508, -2590,
    2091,  1160,   657, -2590, -2590,  1160,   657, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590,   657,   657,   508, -2590,
    2095,  1160,   657,  1455, -2590,   508,   657,  1455,   508,   508,
    4690, -2590,   657,  2096,  2096,   657,   657,  2096,  1447,  2096,
   -2590,  4690,   427,  2097,  2099,  2100,  2101,  2102,  2104, -2590,
     371,  1447,  2096,  2096,   657,   657,  1447,   657,   657,   657,
     657,   657, -2590,  1455,   657,  2107, -2590, -2590,   657,  2096,
     371,    17,  1160,  1160,   371,    -8,  2109, -2590, -2590, -2590,
    2110,   657, -2590,  2111,  2113,  2114,   657, -2590, -2590,  2115,
      11,  4690, -2590,  2116,    14,  4690, -2590, -2590, -2590, -2590,
   -2590, -2590,  2118,    11,   657, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590,    54, -2590, -2590,   -16, -2590, -2590, -2590, -2590,
   -2590,    54, -2590, -2590,   -16, -2590, -2590, -2590, -2590, -2590,
      54, -2590, -2590,   -16, -2590,   -16,    54, -2590, -2590,   -16,
      54, -2590, -2590,    54, -2590, -2590,   657,   508, -2590,  4690,
    4690,   657,  4690,   657, -2590, -2590, -2590,  4690,  4690,   657,
   -2590, -2590,  4690, -2590, -2590, -2590,   508,  2120, -2590, -2590,
   -2590,  1447,   657, -2590,  2121, -2590, -2590,  1160,  2122, -2590,
    2124, -2590, -2590, -2590, -2590, -2590,  2125, -2590, -2590,  1447,
     657,  2126, -2590, -2590,   657,  4690, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590,    17,  1642,  1401, -2590, -2590, -2590,   371,
    2127,  2129,  2130, -2590,  2128, -2590,   154,    11, -2590, -2590,
   -2590, -2590,  2132,  4690, -2590, -2590, -2590, -2590, -2590,    11,
   -2590,  2133,   -16, -2590,   -16, -2590,   -16, -2590, -2590,   -16,
   -2590,   -16, -2590,  5105, -2590,   508,   508,   657,   508,  2134,
     508,   508,   657,   508,   657, -2590, -2590, -2590, -2590,  2135,
   -2590,   657, -2590, -2590,  2136, -2590,   657, -2590, -2590, -2590,
    2138,   657, -2590, -2590, -2590,  1160, -2590, -2590, -2590,  1642,
   -2590,  1650,  1637,  1401, -2590, -2590, -2590,  2139,  2140, -2590,
   -2590, -2590, -2590,   912,   912, -2590, -2590,  1160, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590,   508, -2590, -2590,  2143, -2590,
    4569, -2590, -2590,  2144, -2590,  1447, -2590, -2590,  1447,   657,
   -2590, -2590,   657, -2590,  1447,   657, -2590,  4690, -2590,  1650,
   -2590,   371, -2590,  2145,  2151,   657,   657,   657,   657,    14,
    2154,  4569,  1160, -2590,  4569, -2590, -2590,   657,  2156, -2590,
     657,   508, -2590, -2590, -2590,  2162,  2166,   657,  2167,   657,
   -2590, -2590,  1160, -2590, -2590,  1160, -2590, -2590,  2157, -2590,
   -2590,  2169,  2170, -2590, -2590,  2171, -2590,  2172, -2590, -2590,
    1447, -2590,  1447, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2590, -2590,    -3, -2590,   226,  -894, -1651, -1012,  1583, -2590,
     917,  -171,  1584,   -50,   -23, -2590, -2590, -1662,  1614,  1908,
    -763,   441,  -954,   801,     0, -2590, -1063, -2590,  -844, -1086,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590,  -636,  -485, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -1818, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -1468, -2590, -2590, -2590, -2590,
   -2590,  -664, -2590, -2590, -2590, -2590, -2590, -2590,   435, -2590,
   -2590, -2590, -2590,  -249,  -656, -1647,  -592, -2590, -2590, -2590,
   -2590, -2590,  -632,  -625, -2590, -2590, -2589, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,  1352,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590, -2590,
   -2590, -2590
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1258
static const yytype_int16 yytable[] =
{
      68,   355,  1905,  1426,   873,  1092,  1095,  1270,   105,  2048,
     297,  2050,   908,   174,   902,  1924,   691, -1102,  1118,  1708,
     107,   261,    65,    66,  1972,  1521,    65,    66,  1756,   644,
     295,  1078,  1377,  1453,  1657,  1380,  1503,  1925,   319,   790,
    1926,    78,  2648,   793,   410,  2654,  1135,   349,  1122,   376,
     360,  1927,  1411,   367,   796,    65,    66,   373,    65,    66,
     380,   344,    65,    66,   383,   385,  1156,  1081,   395,   627,
    1373,   402,   406,  1161,  1928,   409,    79,   590,  1492,   413,
     632,   618,   262,  1594,   414,  1599,  1718,  1486,    65,    66,
    1220,   446,  1929,  1360,  1511,   727,   777,   427,   431,   436,
     437,   441,   443,   917,   263,    65,    66,  1484,    65,    66,
     543,  1629,  1630,  1631,   107,   363,    65,    66,   447,    65,
      66,   549,  2760,    65,    66,   386,  1262,  1263,  1264,    56,
     107,  1732,    77,    65,    66,   997,   398,   112,    55,  1157,
    1082,  1136,  1723,   909,  1356,  1186,  1162,  1137,   251,    80,
     107,   299,  1341,   456,    65,    66,   862,    65,    66,   264,
     424,    65,    66,   510,   878,   518,   158,   523,   527,   161,
    2782,    57,   162,  1357,  1231,   399,   555,  1454,   488,   903,
     313,  1232,   219,   509,   345,   425,    65,    66,  1487,    58,
    1733,   588,   415,   633,  1346,  1512,   859,   100,  1361,   220,
    1061,  2649,   163,   544,  2655,   550,  1493,  1068,   998,   728,
     164,    65,    66,   107,   863,   692,  1374,   101,  1187,    59,
     918,   764,   693,   694,   115,  1062,  1893,  1158,  1083,   879,
     571,   112,   116,   117,  1163,  1342,  1895,    81,    60,   551,
     160,   172,    61,  1505,  1709,  1898,   625,   112,   242,  1069,
    1757,   717,  1455,   267,   364,   317,    62,  1734,   695,   107,
     302,  1221,   651,   652,   591,    65,    66,   112,  1658,   346,
     102,   711,   165,   634,   852,   241,   619,  1334,   698,   778,
     700,   365,  1079,  1087,   855,   860,  1504,   107,   703,   706,
      82,   709,   713,   411,   715,   481,   765,  1456,   397,  1159,
    2650,   482,   645,  2656,   725,   575,  1164,   377,   910, -1102,
    1123,  1719,  1485,   391,   735,   737,   401,   628,   115,   120,
     387,   768,   107,    67,   166,   265,   116,   117,   635,   904,
     112,  1973,  1522,   794,   115,   791,  1124,   780,   781,   783,
     483,   785,   116,   117,   797,   788,   789,  2720,  1930,   167,
    1138,   168,  1488,   636,   115,   318,   802,   804,   103,  1513,
    1063,   782,   116,   117,   805,   696,   484,  1724,   150,   808,
     810,   388,   266,   151,   152,   107,   112,   811,   389,   169,
     812,  1713,  1951,  1495,   771,   348,  1070,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   766,   107,   822,
     823,  1515,  1071,  1072,   112,   359,   827,   828,   829,   314,
     830,  1091,   485,   120,  1956,  1064,   372,   115,    63,  1874,
     416,   851,  1328,   576,   837,   116,   117,  1553,   838,   120,
     392,  1003,   315,   843,   844,   845,   846,   847,   848,   112,
     849,  1065,   431,   853,   854,   170,  1890,  1851,  1506,   120,
    1854,  1894,   431,   856,   104,   300,   486,   487,  1565,   572,
     774,  1896,   150,   115,  2721,   301,  1432,   151,   152,  1919,
    1899,   116,   117,   312,   393,   394,  1336,  1119,   150,  1004,
     921,   922,   573,   151,   152,  1088,   898,   758,   701,   649,
     650,   115,   112,  1433,  1073,  1074,  1126,  1676,   150,   116,
     117,   969,   970,   151,   152,  1680,   885,   886,   486,  2722,
     899,   746,   120,  1490,  2007,   112,   870,    65,    66,   708,
    1491,    65,    66,   176,   894,  1714,   115,  1434,  1428,  1182,
     577,  1685,  1686,  1435,   116,   117,   923,  1450,   110,  1436,
     580,   956,   924,  1151,  1478,    65,    66,   940,   759,   971,
    1120,   581,   920,  1097,  1188,   871,   259,  1098,   120,  1437,
     578,   150,   769,   772,   775,  1467,   151,   152,  1089,   623,
    1177,   739,   748,   366,    65,    66,  1068,  1132,   582,   115,
    1438,   866,  1193,   327,   994,   951,   120,   116,   117,   269,
    1183,   925,  1725,  1468,   285,  1439,  1469,  1705,   110,  1470,
    1715,  1595,   115,  1013,  1682,  1127,  1687,   150,   926,   309,
     116,   117,   151,   152,  1005,  1189,   980,  1601,  1069,   311,
     110,   120,   968,   927,   981,   982,  1471,   702,  1440,   928,
    1099,  1178,   740,   328,   929,   150,   558,   495,  1121,   813,
     151,   152,   329,  1194,   334,  1716,   496,   357,  1012,   403,
    1429,  1128,  2516,  1735,  1100,  1472,   110,   583,  1473,  1451,
      65,    66,  1596,   362,  1745,  1090,  1479,  1441,  1103,  1179,
     150,  1711,   983,   330,   120,   151,   152,   718,  1602,  1250,
     867,   553,  1442,  1395,   972,   973,  1607,   624,   369,  1006,
     930,  1396,  1397,  1720,  1443,  1142,   584,   120,  1129,  1007,
    1143,  1144,  1145,  1146,   118,   814,  1147,   760,  1149,   931,
    1150,   431,  1152,   719,   932,  2660,   933,  1803,  1101,  1706,
     685,  1444,  1266,   150,  1322,  1804,  1805,  1615,   151,   152,
    1008,   754,   110,  1445,  1619,  1446,  1447,   277,  1726,  1398,
    1212,   554,   934,   935,  1769,  1770,   150,  1608,   404,  1184,
     936,   151,   152,  1814,   370,  1070,   278,   371,   279,   974,
     868,  1815,  1816,   741,   118,   585,   418,   720,   937,   975,
     976,  1071,  1072,  1806,  1190,  1448,   815,  1474,   335,  1204,
    1205,  1130,  1206,  1208,  1210,  1211,   118,  1742,  1616,   336,
    1180,   742,  1771,  1712,  1875,  1620,   375,  1727,  1223,  1224,
     977,  2061,  1195,   686,   408,  1228,  1229,   984,   985,  1817,
    1475,   271,    84,  1789,  1790,  1721,   337,   586,  1102,   420,
    2106,  1597,   118,  2606,   938,  1235,  1236,  1237,   405,  2725,
    1825,   422,   304,   832,   833,   331,  1476,  1603,  1826,  1827,
    2119,  2728,  1245,  1246,  1247,   964,  1249,   431,  1251,  2630,
    1252,  1256,  1836,  1837,  1571,  2156, -1257,   457,  2159,  1323,
    1635,  1791,  2207,  1073,  1074,  1572,  2167,   816,   444,  2170,
     468,  1255,   817,  1257,  1399,  1400,   721,  2178,  2215,   280,
    2181,   469,   986,  1259,    65,    66,  1828,  2188,   272,  1876,
     431,  1267,   987,   988,   687,   338,  1269,   989,   118,  1106,
    1838,   479,  1995,   493,  1133,   491,  1609,  2234,  1807,  1808,
    1497,  2051,   688,  1282,  1324,    65,    66,  1286,  2297,  2298,
    2299,  2123,  2124,   990,  1327,  1329,  1332,  1772,  1773,   252,
     559,   520,  1337,  1743,   339,   305,   546,  1343,   281,    85,
    1325,   547,  1386,  1877,  1818,  1819,   548,  1617,  1344,  1401,
    2688,   560,  2686,  2687,  1621,   557,  2690,   567,  2692,  1402,
    1403,    65,    66,    86,  1404,  1352,   561,    87,  2699,  2125,
    2697,  2698,   568,  1359,  1331,  2702,  2703,  1577,   570,  2706,
    1729,   589,   282,  1809,  2707,  2708,   273,  1730,    84,   595,
    1405,   283,  1744,  1810,  1811,   598,  1792,  1793,  1812,  1317,
     638,   274,  1774,   340,  2608,  1410,   596,   379,  1498,  1068,
    1736,  2300,  1775,  1776,   306,  2132,  2133,   253,   639,  1820,
      88,  1829,  1830,   307,  1813,    65,    66,  1878,   617,  1821,
    1822,   254,  1489,   621,  1823,  1839,  1840,   622,  2746,   341,
     600,  2747,   626,  1777,    65,  1207,  2750,    65,    66,  1737,
     630,  1069,  2753,  1514,   870,   342,   647,  2756,  1239,   642,
    1824,    89,  1520,  2134,   275,  1318,   255,  1499,   648,    90,
      91,  1794,   562,  1094,   653,  1588,  1589,   690,  1548,   730,
    1549,  1795,  1796,   438,   601,  1550,  1551,  1552,  2141,  2142,
     716,  1319,   723,   871,  1677,  1558,  1831,  2776,  1559,   640,
    1561,    65,    66,  2779,  2126,  2127,  1832,  1833,  1738,   604,
    1841,  1834,  1797,    65,    66,    85,  1563,   256,  1564,   724,
    1842,  1843,  1879,    65,    66,  1867,  1568,  1569,   726,  2797,
     257,   563,  2800,  1416,  1214,  1215,  2143,  1835,   732,    86,
     738,  1575,  1576,  2047,   286,   431,  1578,  1579,   382,   744,
    1459,  1844,  2811,  1581,   762,  1582,   439,   786,  1584,  2816,
    1585,  2817,   173,  1639,    65,    66,  2818,  1739,   763,  2819,
    2820,   787,   809,  1320,  2371,   564,  1880,   799,  1460,  2128,
     605,  1461,   806,  2380,   565,    65,    66,   820,  1070,  2129,
    2130,   807,  2389,  1227,   448,   602,    88,  1632,  2135,  2136,
     824,  1633,  1645,  1634,  1071,  1072,  1417,  1637,   821,  1590,
    1591,  1462,   825,   243,    65,    66,   826,   321,  1217,  1218,
    2131,  2288,  1643,   606,  1646,  1321,  1648,  1649,  1650,  1652,
     831,    65,    66,  1655,  1656,  1696,   801,    89,  1592,  2468,
    1463,  1664,   244,  1464,   440,    90,    91,  1683,  1670,   834,
     704,    94,  1671,  1672,  1673,  2481,   836,    65,    66,   430,
    2486,   607,   431,  1678,   428,  1703,  1681,   449,    95,  1556,
    1557,  2144,  2145,  2137,  1691,   857,  1692,    65,    66,  1694,
    1418,  1419,   865,  2138,  2139,   858,   287,  1651,  1517,  2319,
     450,   451,   288,   733,   289,  1420,  1073,  1074,    70,   452,
      65,    66,  1871,   874,    71,   322,    65,  1281,  1697,   876,
     529,   883,  2337,   881,  2140,   896,   245,   453,   901,   323,
      65,    66,  1916,   705,  1747,   530,  1748,   454,   906,  1749,
    1750,   246,  1751,  2510,  1752,  1911,  1912,   912,  1421,   913,
    1754,   915,  1755,    72,  1562,   916,  2146,   531,    96,  1761,
     840,   841,   941,  1762,  1763,  1764,  2147,  2148,  1570,   942,
     943,   945,  1465,  1766,  1767,  1768,   734,   532,   947,    73,
    1779,  1780,  1781,   949,   952,  1782,  1783,   954,  1785,  1786,
     958,   746,  1698,  1699,   533,   963,   965,  2149,   534,   966,
     967,   978,    97,   247,   979,  1466,   991,  1700,   999,  1001,
    1002,  2600,  1009,  1866,  2603,   324,  2605,  1010,  1858,  1859,
    1011,  1085,  1861,  1862,  1067,    74,   535,   536,   325,  2617,
    2618,  1076,  1086,  1050,  1868,  1141,  1870,  1872,    98,    65,
      66,  1873,  1423,  1424,   248,  1139,  2632,  1051,   747,  1140,
    1701,  1153,   748,  1155,   249,  1166,  1052,  1167,  1883,  1168,
      65,    66,  1886,  1423,  1424,  1169,  2604,  1053,    65,    66,
      75,  1170,  1171,   428,   429,   430,  1661,  1662,  1172,  2616,
    1173,   537,  1175,  1174,  2621,  1192,  1915,  1917,  1197,  1198,
     749,   538,  1199,  1200,  1272,  1201,  1923,  1202,  1203,  1054,
    1934,  1213,  1216,  1107,  1219,  1225,  1226,  1940,  1233,  1234,
    1230,  1108,    65,    66,  1889,  1423,  1424,  1109,  1238,  1240,
    1055,  1945,  1241,    65,    66,  1274,  1947,  1253,   750,  1254,
    1949,  1273,  1952,  1953,  2500,  1955,  1957,  1958,   108,  1961,
    1110,  2504,  1964,  1965,  1966,  1967,  1968,  1969,  1970,  1971,
    1974,  1976,  1977,   539,   540,  1979,  1980,  1981,  1982,    65,
      66,  1918,  1423,  1424,  1111,  1988,  1989,  1278,  1056,  1991,
    1992,  1993,  1112,  1276,  1277,  1996,  1997,  1279,  1280,   751,
     470,  1284,  1285,   752,  1333,  1339,  1335,  1345,  2000,  2001,
    1349,  2002,  2003,  1350,  2526,  1353,  1354,  2528,   471,  1363,
    2529,  1355,  2530,  1364,  1457,  1365,  1366,  1057,   753,  1370,
    1371,   754,  1113,  1368,  1369,   472,  1372,  1378,  1379,  1406,
    1114,   755,   111,  1381,   541,  1382,  1388,   296,   473,  2030,
    1390,  1391,  1393,  1407,  1058,  1408,  1409,  1412,  1427,  2023,
    2024,  2025,  1413,  1414,  2026,  1430,  1431,   474,  1452,  2028,
    2031,   475,  2033,  2034,  2035,  1458,  2036,  2037,  1864,  2039,
    1480,  1477,  2041,  2042,  1869,   476,  1115,  1481,  1482,  1500,
    1483,  2045,  1502,  1059,  1496,  1060,  1501,  1507,  1116,  2049,
     113,  1508,  1509,  1518,  2054,  2055,  1882,  1510,  1516,  1884,
    2057,  1519,  1580,  1888,  1117,  2073,  1555,  1566,  1567,  2060,
    1573,  1574,  1587,  1611,  1583,  2079,   477,  1600,   445,  1586,
    2084,  1605,  1606,  1612,  1914,  1613,  1614,  1704,  1623,  1624,
    1920,  1625,  1642,  1626,  1627,  1628,  1647,  1640,  1933,  1641,
    1653,  1936,  1654,  1731,  1660,  2088,  1665,  1666,  1667,  1679,
    1941,  1942,  1684,  2775,  1693,  -457,  1695,   119,  1707,  1717,
    1728,  1946,  2639,  1722,  1740,  1746,  1753,  2096,  2097,  1759,
    1760,  1741,  2099,  1765,  1784,  1787,  1845,  1798,  2101,  1800,
    1802,  1846,  1847,  1848,  2239,  2102,  1852,  1853,  1856,   507,
    1855,   514,   517,  1857,   522,   526,  1860,  1891,  2110,  1863,
    1881,  1885,  1892,  1897,  1900,  1901,  1376,  1902,  2113,  1903,
    1904,  1906,  1907,  1908,  1913,  1932,  1950,  1909,  1937,  1948,
    1954,  1910,  1962,   593,  1963,  1978,  1985,  1986,  1987,  2309,
    1998,  1999,  2150,  2004,  2005,  2006,  2472,  2008,  2009,  2291,
    2010,  2011,   609,   615,  2012,  2495,  2013,  2014,  2015,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,  2016,  2161,  2017,
    2198,  2306,  2018,  2019,  2022,  2202,   699,  2203,  2020,  2205,
    2021,  2038,  2040,  2043,  2056,  2172,  2062,  2063,   710,  2064,
    2065,  2066,  2098,  2473,  2100,  2103,  2104,  2105,  2216,  2217,
    2218,  2219,  2220,  2221,  2222,  2223,  2224,  2107,   731,  2108,
    2474,  2109,  2112,  2475,  2114,  2115,  2116,  2120,  2121,  2476,
    2122,  2151,  2230,  2157,  2232,  2152,  2153,  2158,  2477,  2160,
    2162,  2163,  2164,  2168,  2169,  2790,  2171,  2173,  2174,  2175,
    2179,  2238,   431,  2180, -1120,  2182,  2183,  2242,  2184,  2185,
    2189,  2190,  2259,  2191,  2193,  2194,  2245,  2246,  2247,  2248,
    2249,  2250,  2251,  2252,  2253,  2254,  2196,  2197,  2267,  2268,
    2269,  2270,  2271,  2272,  2273,  2274,  2275,  2276,  2277,  2278,
    2199,  2281,  2206,  2282,  2283,  2284,  2208,  2211,  2214,  2712,
    2225,  2226,  2478,  2227,  2228,  2229,  2285,   431,  2292,  2233,
    2280,  2286,  2480,  2289,  2290,  2293,  2296,  2761,  2310,  2311,
    2314,   819,  2322,  2326,  2327,  2328,  2329,  2330,   835,  2356,
    2724,  2359,  2361,  2479,  2364,   839,  2366,  2367,  2368,   842,
    2372,  2301,  2373,  2302,   351,  2303,  2374,  2305,   850,   431,
    2307,   352,  2308,  2375,  2376,  2377,  2381,  2325,  2312,  2313,
    2382,  2709,  2383,  2384,  2385,  2317,  2386,  2318,  2390,  2391,
    2399,  2321,  2392,  2402,  2323,  2410,  2413,  2712,  2416,  2417,
    2419,  2422,  2423,  2424,  2427,  2453,  2454,  2432,  2456,  2457,
    2436,  2452,  2460,  2461,  2506,  2515,  2358,  2512,  2513,  2518,
    2520,  2762,  2521,  2522,  2758,  2523,  2525,  2531,  2533,  2542,
    2551,  2560,  2566,  2570,  2573,  2579,   887,   888,  2360,  2587,
    2598,  1176,  2609,  2610,     0,  2611,  2612,  2613,  2614,   892,
    2210,  2362,  2629,  2640,   895,  2641,  2643,  2644,  2645,  2647,
       0,  2653,  2659,   907,  2685,  2691,     0,  2694,  2695,  2696,
    2701,  2716,  2719,  2508,  2717,  2718,  2726,  2729,  2740,  2748,
       0,  2751,  2754,     0,  2763,  2764,  2235,  2771,  2774,  2425,
    2784,  2394,  2395,  2396,  2397,  2398,  2785,  2400,  2401,  2791,
    2799,  2810,  2405,  2406,  2407,  2408,  2409,  2803,  2411,  2412,
    1778,  2804,  2806,  2812,     0,  2813,  2814,  2815,     0,     0,
       0,     0,  1788,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   959,   960,   961,   962,     0,
    1849,  1850,  2430,     0,   714,     0,     0,     0,     0,     0,
       0,     0,     0,  2437,  2438,  2439,  2440,  2441,  2442,  2443,
    2444,  2445,  2446,  2447,     0,     0,     0,     0,     0,  2450,
       0,     0,     0,   431,   431,     0,   431,   431,  2766,  2768,
     431,   431,  2462,  2463,  2464,  2465,  2466,  2467,     0,  2469,
    2470,  2471,     0,     0,     0,     0,  1105,   353,     0,     0,
     354,     0,     0,   800,     0,  2482,  2483,  2484,  2485,     0,
    2487,  2488,  2489,  2490,  2491,  2492,     0,  2494,     0,     0,
    2498,  2499,  2590,     0,     0,     0,  2593,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2507,     0,
       0,   431,  2509,     0,     0,     0,  2511,     0,     0,  2514,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2627,     0,     0,     0,     0,     0,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,     0,  2534,     0,     0,
       0,     0,     0,  2535,     0,     0,  2537,  2538,  2539,  2540,
    2541,     0,  2543,  2544,     0,  2546,  2547,  2548,  2549,  2550,
       0,  2552,  2553,     0,  2555,  2556,  2557,  2558,  2559,     0,
    2561,  2562,     0,  2564,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2567,  2568,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2571,   884,     0,     0,     0,     0,
    1243,     0,   889,     0,     0,   890,     0,     0,     0,  2581,
     891,     0,  1248,  2583,   893,     0,     0,     0,     0,     0,
       0,     0,     0,  2584,  2585,     0,     0,     0,     0,  2589,
     431,     0,     0,  2592,   431,     0,     0,     0,     0,  2597,
       0,     0,  2601,  2602,     0,     0,     0,     0,     0,  1258,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2619,  2620,     0,  2622,  2623,  2624,  2625,  2626,     0,
     431,  2628,     0,     0,  2320,  2631,     0,     0,     0,     0,
       0,   957,     0,     0,     0,     0,     0,     0,  2642,     0,
    2332,  2333,  2334,  2646,  2501,  2336,     0,  2338,  2339,     0,
       0,  2341,  2342,  2343,     0,     0,  2345,  2346,     0,     0,
    2349,  2661,  2351,  2352,     0,  2354,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2663,     0,  1348,     0,     0,
       0,     0,     0,     0,  2665,     0,     0,     0,     0,     0,
       0,     0,     0,  2667,     0,  2668,     0,     0,     0,  2670,
       0,     0,     0,  2673,     0,     0,     0,     0,  2677,     0,
    2679,     0,     0,     0,     0,  2111,  2682,     0,     0,     0,
       0,     0,     0,  2117,  2118,     0,     0,     0,     0,  2689,
       0,     0,     0,     0,     0,     0,     0,     0,  2154,  2155,
       0,     0,     0,     0,     0,     0,     0,  2700,  1148,  2165,
    2166,  2704,  1494,  2735,     0,  1154,     0,     0,     0,     0,
    2176,  2177,     0,     0,     0,     0,     0,     0,     0,     0,
    2186,  2187,  2426,  2723,     0,  2429,  2192,     0,     0,     0,
    2433,     0,     0,  2434,     0,     0,  2195,     0,     0,     0,
       0,     0,  2730,     0,  2731,     0,  2732,     0,     0,  2733,
       0,  2734,  2449,     0,  2738,     0,  1554,     0,     0,  2743,
       0,  2745,     0,     0,     0,     0,  1560,     0,  2749,     0,
       0,     0,     0,  2752,     0,     0,     0,     0,  2755,     0,
       0,     0,     0,     0,     0,     0,  2615,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2773,     0,     0,
    2765,  2767,     0,     0,     0,     0,  2633,     0,     0,     0,
    2638,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1242,     0,     0,  2777,     0,  2793,  2778,
    1244,  2796,  2780,     0,     0,     0,     0,  2517,     0,     0,
       0,     0,  2786,  2787,  2788,  2789,     0,     0,     0,     0,
       0,     0,     0,     0,  2798,     0,     0,  2801,     0,     0,
       0,     0,     0,     0,  2805,     0,  2807,     0,     0,  2527,
       0,     0,  1636,  1523,     0,  1260,  1261,     0,  1524,     0,
    1265,     0,     0,  1268,     0,     0,     0,     0,     0,  1644,
       0,     0,     0,     0,     0,  1275,     0,     0,     0,     0,
    1525,  1526,     0,  1527,  1528,     0,   222,     0,     0,     0,
       0,     0,     0,  1669,  1529,     0,     0,     0,     0,     0,
       0,     0,     0,  1675,     0,     0,  1530,  1531,   223,     0,
       0,   224,     0,     0,  1532,     0,     0,  1533,     0,     0,
    1690,     0,     0,     0,     0,  2715,     0,     0,     0,  2578,
       0,     0,  1702,     0,     0,  1534,     0,  1710,     0,     0,
       0,     0,  1535,  1536,     0,   225,  1537,     0,     0,  2586,
       0,     0,   226,     0,     0,     0,  2591,     0,     0,  2594,
    2595,     0,     0,   227,   228,     0,     0,     0,     0,     0,
     229,     0,     0,  2363,     0,     0,     0,     0,     0,     0,
       0,  1415,     0,  2365,     0,     0,     0,  2369,  2370,     0,
       0,     0,     0,     0,     0,   230,  2378,  2379,     0,     0,
       0,     0,     0,     0,     0,  2387,  2388,     0,     0,  1538,
       0,  2393,     0,   231,     0,     0,     0,     0,     0,     0,
       0,  2403,  2404,     0,     0,   654,   655,   232,   233,     0,
       0,     0,  2414,  2415,   234,     0,     0,     0,     0,     0,
       0,     0,     0,  2418,     0,     0,     0,  2783,     0,     0,
       0,     0,  2420,     0,  2421,     0,   235,     0,     0,     0,
       0,     0,     0,     0,     0,  1539,     0,     0,     0,     0,
    1865,  1540,     0,     0,     0,     0,     0,     0,  2674,     0,
       0,   656,     0,     0,     0,     0,     0,   657,  1541,     0,
       0,     0,     0,     0,   658,   236,   659,  2684,  1542,     0,
    1887,   660,     0,     0,   661,     0,     0,     0,     0,     0,
     662,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   663,     0,     0,     0,  1543,  1544,   664,     0,  1921,
       0,     0,  1922,     0,     0,     0,   665,     0,     0,     0,
       0,     0,  1938,  1939,     0,     0,  1545,     0,   237,     0,
    1943,     0,     0,   666,     0,     0,     0,  1944,   238,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   667,     0,  2736,  2737,     0,  2739,
    1638,  2741,  2742,     0,  2744,     0,     0,   239,     0,   668,
       0,  1546,     0,     0,     0,     0,     0,  1983,     0,     0,
     669,   670,     0,     0,     0,     0,     0,     0,     0,  1994,
       0,  1663,     0,     0,     0,     0,  1668,     0,     0,     0,
       0,     0,   671,     0,     0,  2536,  1674,     0,     0,     0,
       0,     0,     0,     0,     0,  2545,  2770,     0,     0,     0,
       0,     0,     0,     0,  2554,   672,     0,     0,     0,     0,
       0,     0,     0,  2563,     0,     0,     0,     0,     0,   673,
    2565,   674,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2569,     0,     0,     0,     0,   675,  2572,     0,     0,
    2574,   676,  2802,  2575,     0,     0,  2029,     0,   677,     0,
       0,     0,     0,     0,     0,   678,     0,     0,     0,     0,
       0,     0,     0,     0,  2044,     0,     0,     0,     0,     0,
       0,     0,     0,   679,     0,     0,     0,     0,     0,     0,
    2053,     0,     0,     0,     0,     0,   680,   681,     0,   682,
       0,     0,     0,  2058,     0,  2059,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2067,     0,     0,  2069,     0,
    2070,  2071,  2072,  2074,     0,     0,  2076,     0,     0,  2077,
       0,     0,  2078,  2080,     0,  2081,  2082,  2083,  2085,   683,
    2086,  2087,     0,     0,     0,     0,  2089,  2090,  2091,     0,
       0,  2092,  2093,     0,     0,     0,     0,  2094,  2095,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2662,     0,     0,     0,     0,     0,     0,
       0,     0,  2664,     0,     0,     0,     0,     0,     0,     0,
       0,  2666,     0,     0,     0,     0,     0,  2669,     0,     0,
       0,  2671,     0,     0,  2672,     0,   107,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     108,     0,     0,  1287,  1288,  1289,     0,     0,     0,     0,
       0,     0,  1935,     0,     0,     0,     0,     0,     0,     0,
       0,   109,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1290,  1291,    65,    66,  1292,     0,   110,     0,
       0,     0,     0,  1293,     0,     0,  1294,     0,     0,   108,
    1295,     0,     0,     0,     0,     0,     0,     0,  1296,  1297,
       0,  2201,     0,     0,     0,  2204,  1298,     0,     0,   291,
       0,     0,  1984,     0,     0,     0,     0,  2209,  1990,     0,
    2212,     0,     0,     0,   111,     0,     0,   110,     0,     0,
       0,     0,     0,     0,  1299,  1300,     0,     0,  1301,     0,
       0,     0,     0,   112,     0,     0,     0,     0,     0,     0,
    2231,     0,     0,     0,     0,     0,  1302,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   111,     0,     0,     0,  1303,     0,     0,
       0,     0,   113,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2027,     0,     0,
       0,  1304,  2032,     0,     0,     0,  2279,     0,     0,     0,
    1305,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,     0,     0,     0,     0,  2046,     0,  2295,
     115,   113,     0,  2052,     0,     0,     0,     0,   116,   117,
       0,     0,     0,     0,   118,     0,     0,     0,     0,   119,
       0,     0,     0,     0,     0,  1306,     0,  1307,     0,     0,
    2068,     0,     0,  1308,  1309,     0,     0,     0,  2075,     0,
       0,   292,     0,     0,     0,     0,     0,     0,     0,  2316,
    1310,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1311,     0,   118,  2324,     0,     0,     0,   119,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   293,
       0,     0,     0,     0,     0,     0,  1312,     0,  1313,     0,
       0,     0,  2348,     0,     0,   120,     0,     0,  1314,     0,
       0,     0,     0,  2357,     0,     0,     0,     0,  1315,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,     0,
       0,   294,  1316,     0,   150,     0,     0,     0,     0,   151,
     152,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,     0,     0,
       0,     0,     0,  2200,     0,     0,   108,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2428,     0,     0,
    2431,     0,     0,     0,     0,  2213,    65,    66,  2435,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   108,     0,     0,  2448,     0,     0,  2451,     0,     0,
       0,     0,  2455,   498,   499,  2458,  2459,   500,     0,  2236,
    2237,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2240,  2241,     0,   110,
     501,  2243,  2244,     0,     0,     0,     0,     0,     0,     0,
     111,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2502,  2503,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2287,     0,     0,     0,   111,     0,     0,     0,     0,
       0,     0,  2294,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2524,     0,     0,     0,     0,   113,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   502,     0,     0,     0,     0,     0,  2304,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     503,     0,  2315,   113,     0,   525,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   108,
       0,     0,   504,     0,     0,  2331,     0,     0,     0,     0,
    2335,     0,     0,     0,     0,   119,  2340,     0,     0,     0,
       0,  2344,     0,     0,     0,  2347,     0,     0,  2350,     0,
       0,  2353,     0,  2355,     0,     0,     0,   110,     0,     0,
       0,  2577,     0,     0,     0,   118,     0,     0,     0,     0,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   505,     0,
       0,     0,     0,     0,  2596,  1689,     0,     0,     0,     0,
       0,     0,     0,   111,     0,  2607,     0,     0,     0,   108,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,  2652,   506,     0,     0,  2658,
       0,   113,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
       0,     0,     0,   111,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2675,  2676,     0,  2678,     0,     0,     0,
       0,  2680,  2681,   118,     0,     0,  2683,     0,   119,     0,
       0,     0,     0,     0,     0,   108,     0,  2493,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,     0,  2505,     0,     0,     0,     0,     0,  2705,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   110,     0,     0,     0,     0,     0,     0,
       0,     0,  2519,     0,     0,     0,     0,  2727,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   610,   108,     0,
       0,   992,     0,     0,     0,  2532,   993,     0,   119,   111,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   611,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2772,     0,     0,   113,     0,     0,
       0,     0,     0,  2576,     0,     0,     0,     0,     0,  2580,
       0,  2781,   111,  2582,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2792,   612,     0,  2795,  2588,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,     0,   118,
       0,     0,     0,     0,   119,     0,     0,     0,     0,     0,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2636,  2637,     0,     0,     0,     0,     0,     0,   613,     0,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,     0,     0,
       0,     0,     0,     0,     0,   516,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,     0,  2693,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   614,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   108,     0,     0,
       0,  1014,  1015,  1016,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2757,     0,     0,     0,     0,     0,     0,
    1017,  1018,     0,     0,  1019,   110,     0,  1020,     0,     0,
       0,     0,     0,     0,  1021,  2769,     0,     0,  1022,     0,
     108,     0,     0,     0,     0,     0,  1023,  1024,     0,     0,
       0,     0,     0,     0,  1025,  1026,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   108,     0,
       0,   111,  1027,     0,     0,     0,     0,     0,  1028,     0,
    2794,   512,  1029,  1030,     0,     0,  1031,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2808,     0,     0,  2809,  1032,     0,  1347,     0,   108,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   111,  1033,     0,     0,     0,   113,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1034,
       0,     0,   111,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1035,     0,     0,     0,     0,     0,     0,
       0,     0,   113,     0,     0,     0,     0,     0,     0,     0,
       0,   118,   111,     0,     0,     0,   119,     0,     0,     0,
       0,     0,     0,  1036,     0,  1037,     0,     0,     0,     0,
     113,  1038,  1039,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1040,  1041,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1042,  1043,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1044,     0,  1045,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,  1046,     0,
    1047,     0,     0,     0,     0,     0,  1048,     0,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,     0,   119,   513,     0,
    1049,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,     1,     0,     0,
       2,  2255,     0,     3,     0,     0,     0,     0,     0,     0,
       0,     0,  2256,     0,     0,     0,     4,     0,     0,     0,
       0,     5,     6,     0,     7,     8,     9,     0,     0,     0,
       0,     0,     0,     0,    10,     0,     0,     0,  1107,  2257,
       0,    11,     0,    12,    13,     0,  1108,     0,     0,     0,
       0,     0,  1109,    14,    15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   178,     0,     0,
     179,     0,     0,   180,     0,  1110,    16,     0,  2258,     0,
       0,     0,     0,     0,     0,    17,     0,     0,     0,     0,
       0,     0,   181,     0,   182,   183,   184,     0,    18,  1111,
       0,     0,    19,     0,   185,    20,   186,  1112,     0,    21,
      22,   187,     0,   188,   189,   190,    23,     0,     0,     0,
       0,   191,    24,   192,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,     0,     0,
      26,    27,    28,     0,     0,    29,    30,  1113,     0,     0,
       0,     0,     0,     0,   193,  1114,     0,     0,     0,     0,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   194,     0,     0,     0,     0,    32,    33,    34,
     195,     0,   196,   197,     0,     0,   198,     0,     0,     0,
     199,    35,   200,    36,  1384,     0,     0,     0,     0,     0,
      37,  1115,     0,     0,    38,     0,     0,     0,    39,     0,
      40,     0,    41,  1116,     0,   201,   202,    42,     0,     0,
     203,     0,     0,     0,     0,     0,     0,     0,     0,  1117,
     204,    43,     0,     0,     0,     0,     0,    44,  2259,     0,
    2260,     0,     0,     0,     0,     0,     0,   205,   206,     0,
       0,     0,    45,    46,     0,   207,     0,     0,     0,     0,
       0,     0,     0,     0,    47,     0,    48,     0,     0,     0,
       0,     0,    49,     0,     0,    50,    51,     0,     0,     0,
     208,     0,   209,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2261,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,   210,     0,     0,
       0,     0,     0,    53,     0,     0,     0,     0,     0,     0,
       0,     0,   211,   212,     0,     0,     0,     0,     0,     0,
       0,   213,     0,     0,     0,     0,     0,     0,   214,     0,
       0,     0,     0,     0,   215,     0,   216,     0,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,  1385,     0,     0,     0,
       0,     0,     0,   217,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149
};

static const yytype_int16 yycheck[] =
{
       3,    51,  1470,  1015,   489,   669,   670,   901,    11,  1671,
      33,  1673,     4,    16,     4,    26,     4,     0,   674,    20,
       4,     5,     3,     4,     5,     5,     3,     4,    19,     5,
      33,    16,   986,    26,    46,   989,     5,    48,    41,     4,
      51,     4,    31,     4,     4,    31,     5,    50,     5,    31,
      53,    62,  1006,    56,     4,     3,     4,    60,     3,     4,
      63,     4,     3,     4,    67,    68,    39,    39,    71,     5,
      16,    74,    75,    39,    85,    78,    39,    15,   123,    82,
       5,     4,    66,  1169,    87,  1171,    20,    35,     3,     4,
      98,   114,   103,   168,    35,   153,    12,   100,   101,   102,
     103,   104,   105,   137,    88,     3,     4,    26,     3,     4,
     219,  1197,  1198,  1199,     4,     5,     3,     4,   121,     3,
       4,     4,  2711,     3,     4,     4,   889,   890,   891,    11,
       4,   172,   292,     3,     4,    87,   142,   121,    66,   112,
     112,   100,    20,   135,   160,    87,   112,   106,    15,   112,
       4,     5,    16,   156,     3,     4,   199,     3,     4,   143,
       5,     3,     4,   186,   199,   188,    32,   190,   191,    43,
    2759,    53,    46,   189,     4,   181,   199,   170,   181,   169,
      61,    11,    83,   186,   127,    30,     3,     4,   136,    71,
     231,   214,     5,   118,   957,   136,   104,    39,   273,   100,
       4,   190,    76,   312,   190,    88,   251,    63,   160,   267,
      84,     3,     4,     4,   257,   203,   162,    59,   160,   101,
     254,    33,   210,   211,   208,    29,    20,   200,   200,   264,
      61,   121,   216,   217,   200,    99,    20,   200,   120,   122,
      14,    15,   124,    26,   245,    20,   249,   121,    22,   105,
     241,   301,   245,    27,   144,   200,   138,   298,   246,     4,
      34,   269,   265,   266,   202,     3,     4,   121,   280,   212,
     112,   294,   146,   198,   445,    66,   199,   933,   281,   195,
     283,    55,   267,    16,   455,   193,   255,     4,   291,   292,
     253,   294,   295,   253,   297,   193,   108,   290,    72,   272,
     289,   199,   278,   289,   307,    20,   272,   289,   300,   292,
     267,   245,   231,   193,   317,   318,   203,   253,   208,   303,
     199,    66,     4,   300,   198,   309,   216,   217,   253,   319,
     121,   312,   312,   294,   208,   300,   293,   340,   341,   342,
     238,   344,   216,   217,   294,   348,   349,   193,   359,   223,
     309,   225,   300,   278,   208,   300,   359,   360,   200,   300,
     164,   231,   216,   217,   367,   353,   264,   245,   352,   372,
     373,   250,   356,   357,   358,     4,   121,   380,   257,   253,
     383,    26,   231,  1039,    66,   300,   242,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   209,     4,   402,
     403,  1057,   258,   259,   121,   300,   409,   410,   411,   290,
     413,   267,   310,   303,   231,   219,   300,   208,   300,  1431,
     233,   444,   214,   138,   427,   216,   217,  1091,   431,   303,
     310,    13,   313,   436,   437,   438,   439,   440,   441,   121,
     443,   245,   445,   446,   447,   319,  1458,  1401,   231,   303,
    1404,   245,   455,   456,   296,   309,   354,   355,  1122,   290,
      66,   245,   352,   208,   310,   319,    39,   357,   358,  1481,
     245,   216,   217,    38,   354,   355,   214,    39,   352,    61,
       4,     5,   313,   357,   358,   218,     4,    61,     5,   263,
     264,   208,   121,    66,   350,   351,    16,  1260,   352,   216,
     217,    13,    14,   357,   358,  1268,   509,   510,   354,   355,
     533,    61,   303,   270,  1600,   121,   142,     3,     4,   293,
     277,     3,     4,   148,   527,   170,   208,   100,   123,    61,
     245,    23,    24,   106,   216,   217,    60,   123,    56,   112,
      36,   591,    66,   714,   123,     3,     4,   570,   122,    61,
     112,    47,   555,    35,    61,   181,   237,    39,   303,   132,
     275,   352,   336,   337,   338,    21,   357,   358,   301,     4,
      61,    61,   122,    59,     3,     4,    63,   294,    74,   208,
     153,    78,    61,    50,   634,   588,   303,   216,   217,     5,
     122,   115,    26,    49,    66,   168,    52,   123,    56,    55,
     245,    61,   208,   653,     4,   125,    98,   352,   132,     4,
     216,   217,   357,   358,   196,   122,     5,    61,   105,    88,
      56,   303,   625,   147,    13,    14,    82,   144,   201,   153,
     112,   122,   122,   100,   158,   352,   201,   173,   200,    29,
     357,   358,   109,   122,     4,   290,   182,   237,   651,    78,
     245,   171,  2314,  1309,   136,   111,    56,   153,   114,   245,
       3,     4,   122,     0,  1320,   668,   245,   240,   671,   160,
     352,   123,    61,   140,   303,   357,   358,    54,   122,   850,
     177,     5,   255,     5,   196,   197,    61,   122,   277,   271,
     214,    13,    14,   123,   267,   698,   192,   303,   218,   281,
     703,   704,   705,   706,   222,    95,   709,   281,   711,   233,
     713,   714,   715,    90,   238,  2533,   240,     5,   200,   245,
      91,   294,   893,   352,    29,    13,    14,    61,   357,   358,
     312,   281,    56,   306,    61,   308,   309,    45,   172,    61,
     790,    65,   266,   267,    13,    14,   352,   122,   177,   281,
     274,   357,   358,     5,     5,   242,    64,     4,    66,   271,
     257,    13,    14,   253,   222,   261,    30,   144,   292,   281,
     282,   258,   259,    61,   281,   348,   166,   233,    36,   782,
     783,   301,   785,   786,   787,   788,   222,    26,   122,    47,
     281,   281,    61,   245,   106,   122,     5,   231,   801,   802,
     312,  1695,   281,   174,     5,   808,   809,   196,   197,    61,
     266,    57,    27,    13,    14,   245,    74,   313,   300,     5,
    1774,   281,   222,  2470,   348,   828,   829,   830,   257,  2647,
       5,     5,    70,     4,     5,   302,   292,   281,    13,    14,
    1794,  2659,   845,   846,   847,   619,   849,   850,   851,  2496,
     853,   874,    13,    14,     5,  1809,     0,     4,  1812,   164,
       4,    61,  1874,   350,   351,    16,  1820,   257,   200,  1823,
     118,   874,   262,   876,   196,   197,   253,  1831,  1890,   187,
    1834,    66,   271,   886,     3,     4,    61,  1841,   134,   201,
     893,   894,   281,   282,   265,   153,   899,   286,   222,   673,
      61,   120,  1566,   173,   678,   292,   281,  1919,   196,   197,
     133,  1674,   283,   916,   219,     3,     4,   920,  2004,  2005,
    2006,    13,    14,   312,   927,   928,   929,   196,   197,    25,
      45,    32,   935,   172,   192,   173,    66,   940,   246,   154,
     245,     5,   992,   255,   196,   197,    89,   281,   951,   271,
    2601,    66,  2599,  2600,   281,    15,  2603,    66,  2605,   281,
     282,     3,     4,   178,   286,   968,    81,   182,  2619,    61,
    2617,  2618,   238,   973,    16,  2622,  2623,  1148,   291,  2626,
     270,    89,   290,   271,  2631,  2632,   232,   277,    27,    66,
     312,   299,   231,   281,   282,    30,   196,   197,   286,    66,
      94,   247,   271,   261,  2472,  1005,    72,   126,   231,    63,
     133,  2023,   281,   282,   252,    13,    14,   113,   112,   271,
     235,   196,   197,   261,   312,     3,     4,   106,     5,   281,
     282,   127,  1035,     5,   286,   196,   197,     4,  2685,   297,
      43,  2688,     4,   312,     3,     4,  2693,     3,     4,   172,
       5,   105,  2699,  1056,   142,   313,     4,  2704,   832,     5,
     312,   276,  1065,    61,   310,   132,   162,   290,     5,   284,
     285,   271,   187,   127,     5,    41,    42,     5,  1081,     5,
    1083,   281,   282,    39,    87,  1088,  1089,  1090,    13,    14,
       4,   158,     4,   181,  1265,  1098,   271,  2748,  1101,   193,
    1103,     3,     4,  2754,   196,   197,   281,   282,   231,   153,
     271,   286,   312,     3,     4,   154,  1119,   213,  1121,     4,
     281,   282,   201,     3,     4,     5,  1129,  1130,     4,  2776,
     226,   246,  2779,    82,     4,     5,    61,   312,     4,   178,
      98,  1144,  1145,   182,   209,  1148,  1149,  1150,   126,   122,
      21,   312,  2799,  1156,     5,  1158,   112,   278,  1161,  2810,
    1163,  2812,    64,  1213,     3,     4,  2813,   290,     4,  2816,
    2817,     4,    11,   240,  2128,   290,   255,     4,    49,   271,
     224,    52,     4,  2137,   299,     3,     4,     4,   242,   281,
     282,     5,  2146,    11,    34,   198,   235,  1200,   196,   197,
       4,  1204,  1225,  1206,   258,   259,   155,  1210,   203,   175,
     176,    82,     4,    88,     3,     4,     4,    25,     4,     5,
     312,  1984,  1225,   267,  1227,   292,  1229,  1230,  1231,  1232,
       4,     3,     4,  1236,  1237,    82,   126,   276,   204,  2251,
     111,  1244,   117,   114,   200,   284,   285,  1270,  1251,     5,
      39,    83,  1255,  1256,  1257,  2267,     5,     3,     4,    10,
    2272,   305,  1265,  1266,     8,  1288,  1269,   107,   100,     4,
       5,   196,   197,   271,  1277,     5,  1279,     3,     4,  1282,
     229,   230,   173,   281,   282,   277,   351,    59,  1062,  2052,
     130,   131,   357,    39,   359,   244,   350,   351,   193,   139,
       3,     4,     5,     4,   199,   113,     3,     4,   155,     4,
      44,   173,  2075,   182,   312,     4,   191,   157,   202,   127,
       3,     4,     5,   112,  1327,    59,  1329,   167,   202,  1332,
    1333,   206,  1335,    59,  1337,     4,     5,     5,   287,     5,
    1343,     4,  1345,   238,  1118,   202,   271,    81,   180,  1352,
     433,   434,   194,  1353,  1354,  1355,   281,   282,  1132,   194,
      66,    66,   233,  1363,  1364,  1365,   112,   101,    66,   264,
    1370,  1371,  1372,   231,     5,  1375,  1376,   232,  1378,  1379,
       5,    61,   229,   230,   118,     4,     4,   312,   122,     4,
     202,    87,   224,   268,     5,   266,    87,   244,     5,     4,
       4,  2464,     5,  1426,  2467,   213,  2469,     5,  1408,  1409,
       4,     4,  1412,  1413,     5,   310,   150,   151,   226,  2482,
    2483,   100,     5,    66,  1427,     4,  1429,  1430,   260,     3,
       4,     5,     6,     7,   309,    16,  2499,    80,   118,    16,
     287,     4,   122,     4,   319,     4,    89,    98,  1451,     5,
       3,     4,  1455,     6,     7,     5,  2468,   100,     3,     4,
     355,    87,     4,     8,     9,    10,  1240,  1241,     5,  2481,
       5,   205,     5,    87,  2486,     4,  1479,  1480,     5,     5,
     160,   215,     4,     4,   169,     5,  1489,     5,     5,   132,
    1493,     4,     4,    92,     4,    11,     5,  1500,     4,     4,
      11,   100,     3,     4,     5,     6,     7,   106,     4,     4,
     153,  1514,     4,     3,     4,     4,  1519,     5,   198,     5,
    1523,     5,  1525,  1526,  2287,  1528,  1529,  1530,    18,  1532,
     129,  2294,  1535,  1536,  1537,  1538,  1539,  1540,  1541,  1542,
    1543,  1544,  1545,   277,   278,  1548,  1549,  1550,  1551,     3,
       4,     5,     6,     7,   153,  1558,  1559,     4,   201,  1562,
    1563,  1564,   161,   160,   160,  1568,  1569,     5,     4,   249,
      53,    37,    37,   253,   266,   294,   266,     5,  1581,  1582,
       4,  1584,  1585,     5,  2347,     5,     5,  2350,    71,     4,
    2353,     5,  2355,     4,   142,     5,     5,   240,   278,     5,
       5,   281,   201,   279,   279,    88,     5,     4,     4,     4,
     209,   291,   102,     5,   348,     5,     5,    33,   101,  1642,
       5,     5,     5,     4,   267,     5,     5,     4,   245,  1632,
    1633,  1634,     5,     5,  1637,   245,   106,   120,     5,  1642,
    1643,   124,  1645,  1646,  1647,   106,  1649,  1650,  1422,  1652,
     245,    39,  1655,  1656,  1428,   138,   255,   106,     5,   251,
     218,  1664,     5,   306,    39,   308,   218,     4,   267,  1672,
     160,     5,     5,     4,  1677,  1678,  1450,   218,   218,  1453,
    1683,     4,     4,  1457,   283,  1708,     5,     5,     5,  1692,
       5,     5,     4,     4,   112,  1718,   179,     5,   114,   112,
    1723,     5,     5,     5,  1478,     5,     4,   245,     5,     5,
    1484,     4,    11,     5,     5,     4,    11,     5,  1492,     5,
       4,  1495,     4,   123,     5,  1728,     4,     4,     4,     4,
    1504,  1505,     5,  2745,     4,     0,     5,   227,   245,   142,
     172,  1515,  2505,   245,     4,   214,   202,  1750,  1751,     4,
       4,   255,  1755,     4,     4,     4,   279,     5,  1761,     5,
       5,     5,     5,     5,  1935,  1765,     4,     4,     4,   185,
       5,   187,   188,     4,   190,   191,     4,   245,  1778,     5,
       5,     5,   245,   245,   316,   316,   985,     4,  1788,     4,
       4,     4,     4,     4,     4,     4,   231,   316,     5,     5,
     231,   316,   231,   219,   231,   231,     5,     4,     4,    11,
       5,     4,   279,     5,     5,     4,   360,     5,     5,  1990,
       4,     4,   238,   239,     4,   312,     5,     5,     4,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,     4,   279,     5,
    1860,  2032,     5,     4,     4,  1868,   282,  1870,     5,  1872,
       5,     5,     4,     4,     4,   279,     5,     5,   294,     5,
       5,     5,     4,   360,     5,     5,     5,     5,  1891,  1892,
    1893,  1894,  1895,  1896,  1897,  1898,  1899,     4,   314,     4,
     360,     5,     4,   360,     5,     5,     5,     4,     4,   360,
       5,     5,  1915,     4,  1917,     5,     5,     4,   360,     5,
       5,     5,     5,     4,     4,  2769,     5,     5,     5,     5,
       4,  1934,  1935,     4,   292,     5,     5,  1940,     5,     5,
       4,     4,   292,     5,     4,     4,  1949,  1950,  1951,  1952,
    1953,  1954,  1955,  1956,  1957,  1958,     4,     4,  1961,  1962,
    1963,  1964,  1965,  1966,  1967,  1968,  1969,  1970,  1971,  1972,
       5,  1974,     5,  1976,  1977,  1978,     5,     5,     5,  2635,
       4,     4,   360,     5,     4,     4,     4,  1990,  1991,     5,
       5,     4,   360,     5,     5,     4,     4,   360,     5,     5,
       4,   387,     5,     5,     5,     5,     5,     5,   424,     4,
    2646,     5,     4,  2262,     4,   432,     5,     5,     5,   435,
       4,  2024,     4,  2026,    15,  2028,     5,  2030,   444,  2032,
    2033,    22,  2035,     5,     5,     5,     4,  2060,  2041,  2042,
       4,  2633,     5,     5,     5,  2048,     5,  2050,     4,     4,
       4,  2054,     5,     4,  2057,     4,     4,  2713,     4,     4,
       4,     4,     4,     4,     4,  2236,  2237,     4,  2239,  2240,
       4,     4,  2243,  2244,     4,     4,  2099,     5,     5,     5,
       4,  2713,     5,     4,  2709,     5,     5,     5,     4,     4,
       4,     4,     4,     4,     4,     4,   512,   513,  2101,     4,
       4,   749,     5,     4,    -1,     5,     5,     5,     4,   525,
    1884,  2111,     5,     4,   530,     5,     5,     4,     4,     4,
      -1,     5,     4,   539,     4,     4,    -1,     5,     4,     4,
       4,     4,     4,  2304,     5,     5,     4,     4,     4,     4,
      -1,     5,     4,    -1,     5,     5,  1920,     4,     4,  2199,
       5,  2151,  2152,  2153,  2154,  2155,     5,  2157,  2158,     5,
       4,     4,  2162,  2163,  2164,  2165,  2166,     5,  2168,  2169,
    1369,     5,     5,     4,    -1,     5,     5,     5,    -1,    -1,
      -1,    -1,  1381,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   611,   612,   613,   614,    -1,
    1399,  1400,  2205,    -1,   296,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2216,  2217,  2218,  2219,  2220,  2221,  2222,
    2223,  2224,  2225,  2226,    -1,    -1,    -1,    -1,    -1,  2232,
      -1,    -1,    -1,  2236,  2237,    -1,  2239,  2240,  2723,  2724,
    2243,  2244,  2245,  2246,  2247,  2248,  2249,  2250,    -1,  2252,
    2253,  2254,    -1,    -1,    -1,    -1,   672,   248,    -1,    -1,
     251,    -1,    -1,   355,    -1,  2268,  2269,  2270,  2271,    -1,
    2273,  2274,  2275,  2276,  2277,  2278,    -1,  2280,    -1,    -1,
    2283,  2284,  2453,    -1,    -1,    -1,  2457,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2301,    -1,
      -1,  2304,  2305,    -1,    -1,    -1,  2309,    -1,    -1,  2312,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2493,    -1,    -1,    -1,    -1,    -1,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,    -1,  2360,    -1,    -1,
      -1,    -1,    -1,  2363,    -1,    -1,  2366,  2367,  2368,  2369,
    2370,    -1,  2372,  2373,    -1,  2375,  2376,  2377,  2378,  2379,
      -1,  2381,  2382,    -1,  2384,  2385,  2386,  2387,  2388,    -1,
    2390,  2391,    -1,  2393,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2403,  2404,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2414,   507,    -1,    -1,    -1,    -1,
     836,    -1,   514,    -1,    -1,   517,    -1,    -1,    -1,  2432,
     522,    -1,   848,  2436,   526,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2446,  2447,    -1,    -1,    -1,    -1,  2452,
    2453,    -1,    -1,  2456,  2457,    -1,    -1,    -1,    -1,  2462,
      -1,    -1,  2465,  2466,    -1,    -1,    -1,    -1,    -1,   885,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2484,  2485,    -1,  2487,  2488,  2489,  2490,  2491,    -1,
    2493,  2494,    -1,    -1,  2053,  2498,    -1,    -1,    -1,    -1,
      -1,   593,    -1,    -1,    -1,    -1,    -1,    -1,  2511,    -1,
    2069,  2070,  2071,  2516,  2288,  2074,    -1,  2076,  2077,    -1,
      -1,  2080,  2081,  2082,    -1,    -1,  2085,  2086,    -1,    -1,
    2089,  2534,  2091,  2092,    -1,  2094,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2545,    -1,   963,    -1,    -1,
      -1,    -1,    -1,    -1,  2554,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2563,    -1,  2565,    -1,    -1,    -1,  2569,
      -1,    -1,    -1,  2576,    -1,    -1,    -1,    -1,  2581,    -1,
    2583,    -1,    -1,    -1,    -1,  1784,  2589,    -1,    -1,    -1,
      -1,    -1,    -1,  1792,  1793,    -1,    -1,    -1,    -1,  2602,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1807,  1808,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2620,   710,  1818,
    1819,  2624,  1038,  2673,    -1,   717,    -1,    -1,    -1,    -1,
    1829,  1830,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1839,  1840,  2201,  2646,    -1,  2204,  1845,    -1,    -1,    -1,
    2209,    -1,    -1,  2212,    -1,    -1,  1855,    -1,    -1,    -1,
      -1,    -1,  2662,    -1,  2664,    -1,  2666,    -1,    -1,  2669,
      -1,  2671,  2231,    -1,  2677,    -1,  1092,    -1,    -1,  2682,
      -1,  2684,    -1,    -1,    -1,    -1,  1102,    -1,  2691,    -1,
      -1,    -1,    -1,  2696,    -1,    -1,    -1,    -1,  2701,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2480,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2740,    -1,    -1,
    2723,  2724,    -1,    -1,    -1,    -1,  2500,    -1,    -1,    -1,
    2504,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   835,    -1,    -1,  2749,    -1,  2771,  2752,
     842,  2774,  2755,    -1,    -1,    -1,    -1,  2316,    -1,    -1,
      -1,    -1,  2765,  2766,  2767,  2768,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2777,    -1,    -1,  2780,    -1,    -1,
      -1,    -1,    -1,    -1,  2787,    -1,  2789,    -1,    -1,  2348,
      -1,    -1,  1208,    21,    -1,   887,   888,    -1,    26,    -1,
     892,    -1,    -1,   895,    -1,    -1,    -1,    -1,    -1,  1225,
      -1,    -1,    -1,    -1,    -1,   907,    -1,    -1,    -1,    -1,
      48,    49,    -1,    51,    52,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    -1,  1249,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1259,    -1,    -1,    74,    75,    40,    -1,
      -1,    43,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,
    1276,    -1,    -1,    -1,    -1,  2639,    -1,    -1,    -1,  2428,
      -1,    -1,  1288,    -1,    -1,   103,    -1,  1293,    -1,    -1,
      -1,    -1,   110,   111,    -1,    77,   114,    -1,    -1,  2448,
      -1,    -1,    84,    -1,    -1,    -1,  2455,    -1,    -1,  2458,
    2459,    -1,    -1,    95,    96,    -1,    -1,    -1,    -1,    -1,
     102,    -1,    -1,  2112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1013,    -1,  2122,    -1,    -1,    -1,  2126,  2127,    -1,
      -1,    -1,    -1,    -1,    -1,   127,  2135,  2136,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2144,  2145,    -1,    -1,   177,
      -1,  2150,    -1,   145,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2160,  2161,    -1,    -1,     4,     5,   159,   160,    -1,
      -1,    -1,  2171,  2172,   166,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2182,    -1,    -1,    -1,  2761,    -1,    -1,
      -1,    -1,  2191,    -1,  2193,    -1,   188,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,    -1,    -1,
    1426,   239,    -1,    -1,    -1,    -1,    -1,    -1,  2577,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    66,   256,    -1,
      -1,    -1,    -1,    -1,    73,   227,    75,  2596,   266,    -1,
    1456,    80,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,    -1,    -1,    -1,   293,   294,   106,    -1,  1485,
      -1,    -1,  1488,    -1,    -1,    -1,   115,    -1,    -1,    -1,
      -1,    -1,  1498,  1499,    -1,    -1,   314,    -1,   280,    -1,
    1506,    -1,    -1,   132,    -1,    -1,    -1,  1513,   290,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    -1,  2675,  2676,    -1,  2678,
    1212,  2680,  2681,    -1,  2683,    -1,    -1,   319,    -1,   168,
      -1,   359,    -1,    -1,    -1,    -1,    -1,  1553,    -1,    -1,
     179,   180,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1565,
      -1,  1243,    -1,    -1,    -1,    -1,  1248,    -1,    -1,    -1,
      -1,    -1,   201,    -1,    -1,  2364,  1258,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2374,  2735,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2383,   224,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2392,    -1,    -1,    -1,    -1,    -1,   238,
    2399,   240,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2410,    -1,    -1,    -1,    -1,   255,  2416,    -1,    -1,
    2419,   260,  2781,  2422,    -1,    -1,  1642,    -1,   267,    -1,
      -1,    -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1660,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   292,    -1,    -1,    -1,    -1,    -1,    -1,
    1676,    -1,    -1,    -1,    -1,    -1,   305,   306,    -1,   308,
      -1,    -1,    -1,  1689,    -1,  1691,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1701,    -1,    -1,  1704,    -1,
    1706,  1707,  1708,  1709,    -1,    -1,  1712,    -1,    -1,  1715,
      -1,    -1,  1718,  1719,    -1,  1721,  1722,  1723,  1724,   348,
    1726,  1727,    -1,    -1,    -1,    -1,  1732,  1733,  1734,    -1,
      -1,  1737,  1738,    -1,    -1,    -1,    -1,  1743,  1744,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2542,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2551,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2560,    -1,    -1,    -1,    -1,    -1,  2566,    -1,    -1,
      -1,  2570,    -1,    -1,  2573,    -1,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,  1494,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,     3,     4,    52,    -1,    56,    -1,
      -1,    -1,    -1,    59,    -1,    -1,    62,    -1,    -1,    18,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,
      -1,  1867,    -1,    -1,    -1,  1871,    82,    -1,    -1,    38,
      -1,    -1,  1554,    -1,    -1,    -1,    -1,  1883,  1560,    -1,
    1886,    -1,    -1,    -1,   102,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,   110,   111,    -1,    -1,   114,    -1,
      -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,    -1,
    1916,    -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,    -1,    -1,    -1,   153,    -1,    -1,
      -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1639,    -1,    -1,
      -1,   177,  1644,    -1,    -1,    -1,  1972,    -1,    -1,    -1,
     186,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   200,    -1,    -1,    -1,    -1,  1669,    -1,  1995,
     208,   160,    -1,  1675,    -1,    -1,    -1,    -1,   216,   217,
      -1,    -1,    -1,    -1,   222,    -1,    -1,    -1,    -1,   227,
      -1,    -1,    -1,    -1,    -1,   231,    -1,   233,    -1,    -1,
    1702,    -1,    -1,   239,   240,    -1,    -1,    -1,  1710,    -1,
      -1,   200,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2045,
     256,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   267,    -1,   222,  2060,    -1,    -1,    -1,   227,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,
      -1,    -1,    -1,    -1,    -1,    -1,   292,    -1,   294,    -1,
      -1,    -1,  2088,    -1,    -1,   303,    -1,    -1,   304,    -1,
      -1,    -1,    -1,  2099,    -1,    -1,    -1,    -1,   314,    -1,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,    -1,
      -1,   300,   348,    -1,   352,    -1,    -1,    -1,    -1,   357,
     358,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,    -1,    -1,
      -1,    -1,    -1,  1865,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2203,    -1,    -1,
    2206,    -1,    -1,    -1,    -1,  1887,     3,     4,  2214,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    -1,  2230,    -1,    -1,  2233,    -1,    -1,
      -1,    -1,  2238,    65,    66,  2241,  2242,    69,    -1,  1921,
    1922,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1938,  1939,    -1,    56,
      92,  1943,  1944,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2289,  2290,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1983,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,
      -1,    -1,  1994,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2329,    -1,    -1,    -1,    -1,   160,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   173,    -1,    -1,    -1,    -1,    -1,  2029,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     192,    -1,  2044,   160,    -1,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      -1,    -1,   214,    -1,    -1,  2067,    -1,    -1,    -1,    -1,
    2072,    -1,    -1,    -1,    -1,   227,  2078,    -1,    -1,    -1,
      -1,  2083,    -1,    -1,    -1,  2087,    -1,    -1,  2090,    -1,
      -1,  2093,    -1,  2095,    -1,    -1,    -1,    56,    -1,    -1,
      -1,  2427,    -1,    -1,    -1,   222,    -1,    -1,    -1,    -1,
     227,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   280,    -1,
      -1,    -1,    -1,    -1,  2460,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,    -1,  2471,    -1,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,  2521,   348,    -1,    -1,  2525,
      -1,   160,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
      -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2579,  2580,    -1,  2582,    -1,    -1,    -1,
      -1,  2587,  2588,   222,    -1,    -1,  2592,    -1,   227,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    -1,  2279,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   160,    -1,  2295,    -1,    -1,    -1,    -1,    -1,  2625,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2324,    -1,    -1,    -1,    -1,  2653,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,   160,    -1,    -1,    -1,  2357,   165,    -1,   227,   102,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2740,    -1,    -1,   160,    -1,    -1,
      -1,    -1,    -1,  2425,    -1,    -1,    -1,    -1,    -1,  2431,
      -1,  2757,   102,  2435,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2771,   116,    -1,  2774,  2451,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,    -1,   222,
      -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,
     160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2502,  2503,    -1,    -1,    -1,    -1,    -1,    -1,   178,    -1,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   288,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,    -1,  2607,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,    18,    -1,    -1,
      -1,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2705,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    52,    56,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    62,  2727,    -1,    -1,    66,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      -1,   102,   100,    -1,    -1,    -1,    -1,    -1,   106,    -1,
    2772,    59,   110,   111,    -1,    -1,   114,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2792,    -1,    -1,  2795,   132,    -1,    56,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   153,    -1,    -1,    -1,   160,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,
      -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   222,   102,    -1,    -1,    -1,   227,    -1,    -1,    -1,
      -1,    -1,    -1,   231,    -1,   233,    -1,    -1,    -1,    -1,
     160,   239,   240,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   255,   256,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   266,   267,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   227,
     160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   292,    -1,   294,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   227,   306,    -1,
     308,    -1,    -1,    -1,    -1,    -1,   314,    -1,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,    -1,   227,   296,    -1,
     348,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,    40,    -1,    -1,
      43,    55,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    64,    65,    -1,    67,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    92,    93,
      -1,    84,    -1,    86,    87,    -1,   100,    -1,    -1,    -1,
      -1,    -1,   106,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      43,    -1,    -1,    46,    -1,   129,   119,    -1,   132,    -1,
      -1,    -1,    -1,    -1,    -1,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    67,    68,    69,    -1,   141,   153,
      -1,    -1,   145,    -1,    77,   148,    79,   161,    -1,   152,
     153,    84,    -1,    86,    87,    88,   159,    -1,    -1,    -1,
      -1,    94,   165,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,    -1,    -1,
     183,   184,   185,    -1,    -1,   188,   189,   201,    -1,    -1,
      -1,    -1,    -1,    -1,   127,   209,    -1,    -1,    -1,    -1,
     203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   145,    -1,    -1,    -1,    -1,   220,   221,   222,
     153,    -1,   155,   156,    -1,    -1,   159,    -1,    -1,    -1,
     163,   234,   165,   236,   165,    -1,    -1,    -1,    -1,    -1,
     243,   255,    -1,    -1,   247,    -1,    -1,    -1,   251,    -1,
     253,    -1,   255,   267,    -1,   188,   189,   260,    -1,    -1,
     193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   283,
     203,   274,    -1,    -1,    -1,    -1,    -1,   280,   292,    -1,
     294,    -1,    -1,    -1,    -1,    -1,    -1,   220,   221,    -1,
      -1,    -1,   295,   296,    -1,   228,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   307,    -1,   309,    -1,    -1,    -1,
      -1,    -1,   315,    -1,    -1,   318,   319,    -1,    -1,    -1,
     253,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   348,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   349,   280,    -1,    -1,
      -1,    -1,    -1,   356,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   295,   296,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   304,    -1,    -1,    -1,    -1,    -1,    -1,   311,    -1,
      -1,    -1,    -1,    -1,   317,    -1,   319,    -1,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,    -1,    -1,    -1,
      -1,    -1,    -1,   356,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346
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
     129,   153,   161,   201,   209,   255,   267,   283,   525,    39,
     112,   200,     5,   267,   293,   529,    16,   125,   171,   218,
     301,   530,   294,   365,   531,     5,   100,   106,   309,    16,
      16,     4,   363,   363,   363,   363,   363,   363,   380,   363,
     363,   372,   363,     4,   380,     4,    39,   112,   200,   272,
     549,    39,   112,   200,   272,   550,     4,    98,     5,     5,
      87,     4,     5,     5,    87,     5,   560,    61,   122,   160,
     281,   564,    61,   122,   281,   568,    87,   160,    61,   122,
     281,   562,     4,    61,   122,   281,   561,     5,     5,     4,
       4,     5,     5,     5,   363,   363,   363,     4,   363,   574,
     363,   363,   374,     4,     4,     5,     4,     4,     5,     4,
      98,   269,   381,   363,   363,    11,     5,    11,   363,   363,
      11,     4,    11,     4,     4,   363,   363,   363,     4,   365,
       4,     4,   380,   373,   380,   363,   363,   363,   373,   363,
     372,   363,   363,     5,     5,   363,   375,   363,   373,   363,
     380,   380,   381,   381,   381,   380,   372,   363,   380,   363,
     366,   457,   169,     5,     4,   380,   160,   160,     4,     5,
       4,     4,   363,   452,    37,    37,   363,    19,    20,    21,
      48,    49,    52,    59,    62,    66,    74,    75,    82,   110,
     111,   114,   132,   153,   177,   186,   231,   233,   239,   240,
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
     244,   287,   388,     6,     7,   363,   368,   245,   123,   245,
     245,   106,    39,    66,   100,   106,   112,   132,   153,   168,
     201,   240,   255,   267,   294,   306,   308,   309,   348,   506,
     123,   245,     5,    26,   170,   245,   290,   142,   106,    21,
      49,    52,    82,   111,   114,   233,   266,    21,    49,    52,
      55,    82,   111,   114,   233,   266,   292,    39,   123,   245,
     245,   106,     5,   218,    26,   231,    35,   136,   300,   363,
     270,   277,   123,   251,   373,   525,    39,   133,   231,   290,
     251,   218,     5,     5,   255,    26,   231,     4,     5,     5,
     218,    35,   136,   300,   363,   525,   218,   365,     4,     4,
     363,     5,   312,    21,    26,    48,    49,    51,    52,    62,
      74,    75,    82,    85,   103,   110,   111,   114,   177,   233,
     239,   256,   266,   293,   294,   314,   359,   508,   363,   363,
     363,   363,   363,   512,   373,     5,     4,     5,   363,   363,
     373,   363,   365,   363,   363,   512,     5,     5,   363,   363,
     365,     5,    16,     5,     5,   363,   363,   372,   363,   363,
       4,   363,   363,   112,   363,   363,   112,     4,    41,    42,
     175,   176,   204,   390,   390,    61,   122,   281,   558,   390,
       5,    61,   122,   281,   563,     5,     5,    61,   122,   281,
     565,     4,     5,     5,     4,    61,   122,   281,   567,    61,
     122,   281,   566,     5,     5,     4,     5,     5,     4,   390,
     390,   390,   363,   363,   363,     4,   373,   363,   380,   374,
       5,     5,    11,   363,   373,   375,   363,    11,   363,   363,
     363,    59,   363,     4,     4,   363,   363,    46,   280,   417,
       5,   365,   365,   380,   363,     4,     4,     4,   380,   373,
     363,   363,   363,   363,   380,   373,   381,   372,   363,     4,
     381,   363,     4,   375,     5,    23,    24,    98,   382,     4,
     373,   363,   363,     4,   363,     5,    82,   155,   229,   230,
     244,   287,   373,   375,   245,   123,   245,   245,    20,   245,
     373,   123,   245,    26,   170,   245,   290,   142,    20,   245,
     123,   245,   245,    20,   245,    26,   172,   231,   172,   270,
     277,   123,   172,   231,   298,   525,   133,   172,   231,   290,
       4,   255,    26,   172,   231,   525,   214,   363,   363,   363,
     363,   363,   363,   202,   363,   363,    19,   241,   473,     4,
       4,   363,   385,   385,   385,     4,   385,   385,   385,    13,
      14,    61,   196,   197,   271,   281,   282,   312,   384,   385,
     385,   385,   385,   385,     4,   385,   385,     4,   384,    13,
      14,    61,   196,   197,   271,   281,   282,   312,     5,   491,
       5,   494,     5,     5,    13,    14,    61,   196,   197,   271,
     281,   282,   286,   312,     5,    13,    14,    61,   196,   197,
     271,   281,   282,   286,   312,     5,    13,    14,    61,   196,
     197,   271,   281,   282,   286,   312,    13,    14,    61,   196,
     197,   271,   281,   282,   312,   279,     5,     5,     5,   384,
     384,   383,     4,     4,   383,     5,     4,     4,   385,   385,
       4,   385,   385,     5,   365,   373,   375,     5,   363,   365,
     363,     5,   363,     5,   368,   106,   201,   255,   106,   201,
     255,     5,   365,   363,   365,     5,   363,   373,   365,     5,
     368,   245,   245,    20,   245,    20,   245,   245,    20,   245,
     316,   316,     4,     4,     4,   506,     4,     4,     4,   316,
     316,     4,     5,     4,   365,   363,     5,   363,     5,   368,
     365,   373,   373,   363,    26,    48,    51,    62,    85,   103,
     359,   386,     4,   365,   363,   380,   365,     5,   373,   373,
     363,   365,   365,   373,   373,   363,   365,   363,     5,   363,
     231,   231,   363,   363,   231,   363,   231,   363,   363,   518,
     526,   363,   231,   231,   363,   363,   363,   363,   363,   363,
     363,   363,     5,   312,   363,   509,   363,   363,   231,   363,
     363,   363,   363,   373,   380,     5,     4,     4,   363,   363,
     380,   363,   363,   363,   373,   512,   363,   363,     5,     4,
     363,   363,   363,   363,     5,     5,     4,   390,     5,     5,
       4,     4,     4,     5,     5,     4,     4,     5,     5,     4,
       5,     5,     4,   363,   363,   363,   363,   380,   363,   373,
     375,   363,   380,   363,   363,   363,   363,   363,     5,   363,
       4,   363,   363,     4,   373,   363,   380,   182,   378,   363,
     378,   381,   380,   373,   363,   363,     4,   363,   373,   373,
     363,   366,     5,     5,     5,     5,     5,   373,   380,   373,
     373,   373,   373,   375,   373,   380,   373,   373,   373,   375,
     373,   373,   373,   373,   375,   373,   373,   373,   363,   373,
     373,   373,   373,   373,   373,   373,   363,   363,     4,   363,
       5,   363,   385,     5,     5,     5,   383,     4,     4,     5,
     385,   384,     4,   385,     5,     5,     5,   384,   384,   383,
       4,     4,     5,    13,    14,    61,   196,   197,   271,   281,
     282,   312,    13,    14,    61,   196,   197,   271,   281,   282,
     312,    13,    14,    61,   196,   197,   271,   281,   282,   312,
     279,     5,     5,     5,   384,   384,   383,     4,     4,   383,
       5,   279,     5,     5,     5,   384,   384,   383,     4,     4,
     383,     5,   279,     5,     5,     5,   384,   384,   383,     4,
       4,   383,     5,     5,     5,     5,   384,   384,   383,     4,
       4,     5,   384,     4,     4,   384,     4,     4,   385,     5,
     380,   373,   363,   363,   373,   363,     5,   368,     5,   373,
     365,     5,   373,   380,     5,   368,   363,   363,   363,   363,
     363,   363,   363,   363,   363,     4,     4,     5,     4,     4,
     363,   373,   363,     5,   368,   365,   380,   380,   363,   372,
     380,   380,   363,   380,   380,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,    55,    66,    93,   132,   292,
     294,   348,   523,   524,   525,   537,   538,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   373,
       5,   363,   363,   363,   363,     4,     4,   380,   381,     5,
       5,   372,   363,     4,   380,   373,     4,   390,   390,   390,
     368,   363,   363,   363,   380,   363,   372,   363,   363,    11,
       5,     5,   363,   363,     4,   380,   373,   363,   363,   381,
     382,   363,     5,   363,   373,   375,     5,     5,     5,     5,
       5,   380,   382,   382,   382,   380,   382,   381,   382,   382,
     380,   382,   382,   382,   380,   382,   382,   380,   373,   382,
     380,   382,   382,   380,   382,   380,     4,   373,   375,     5,
     363,     4,   385,   384,     4,   384,     5,     5,     5,   384,
     384,   383,     4,     4,     5,     5,     5,     5,   384,   384,
     383,     4,     4,     5,     5,     5,     5,   384,   384,   383,
       4,     4,     5,   384,   385,   385,   385,   385,   385,     4,
     385,   385,     4,   384,   384,   385,   385,   385,   385,   385,
       4,   385,   385,     4,   384,   384,     4,     4,   384,     4,
     384,   384,     4,     4,     4,   374,   382,     4,   373,   382,
     363,   373,     4,   382,   382,   373,     4,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   373,   382,
     363,   373,     4,   372,   372,   373,   372,   372,   373,   373,
     372,   372,   363,   363,   363,   363,   363,   363,   368,   363,
     363,   363,   360,   360,   360,   360,   360,   360,   360,   524,
     360,   368,   363,   363,   363,   363,   368,   363,   363,   363,
     363,   363,   363,   380,   363,   312,   367,   368,   363,   363,
     381,   365,   373,   373,   381,   380,     4,   363,   372,   363,
      59,   363,     5,     5,   363,     4,   378,   382,     5,   380,
       4,     5,     4,     5,   373,     5,   381,   382,   381,   381,
     381,     5,   380,     4,   363,   385,   384,   385,   385,   385,
     385,   385,     4,   385,   385,   384,   385,   385,   385,   385,
     385,     4,   385,   385,   384,   385,   385,   385,   385,   385,
       4,   385,   385,   384,   385,   384,     4,   385,   385,   384,
       4,   385,   384,     4,   384,   384,   380,   373,   382,     4,
     380,   363,   380,   363,   363,   363,   382,     4,   380,   363,
     372,   382,   363,   372,   382,   382,   373,   363,     4,   387,
     387,   363,   363,   387,   368,   387,   526,   373,   506,     5,
       4,     5,     5,     5,     4,   365,   368,   387,   387,   363,
     363,   368,   363,   363,   363,   363,   363,   372,   363,     5,
     526,   363,   387,   365,   527,   528,   380,   380,   365,   381,
       4,     5,   363,     5,     4,     4,   363,     4,    31,   190,
     289,   424,   373,     5,    31,   190,   289,   389,   373,     4,
     424,   363,   384,   385,   384,   385,   384,   385,   385,   384,
     385,   384,   384,   363,   382,   373,   373,   363,   373,   363,
     373,   373,   363,   373,   382,     4,   526,   526,   367,   363,
     526,     4,   526,   380,     5,     4,     4,   526,   526,   367,
     363,     4,   526,   526,   363,   373,   526,   526,   526,   527,
     534,   535,   525,   532,   533,   365,     4,     5,     5,     4,
     193,   310,   355,   363,   415,   424,     4,   373,   424,     4,
     385,   385,   385,   385,   385,   374,   382,   382,   363,   382,
       4,   382,   382,   363,   382,   363,   526,   526,     4,   363,
     526,     5,   363,   526,     4,   363,   526,   380,   534,   536,
     537,   360,   533,     5,     5,   363,   416,   363,   416,   380,
     382,     4,   373,   375,     4,   368,   367,   363,   363,   367,
     363,   373,   537,   365,     5,     5,   363,   363,   363,   363,
     389,     5,   373,   375,   380,   373,   375,   526,   363,     4,
     526,   363,   382,     5,     5,   363,     5,   363,   380,   380,
       4,   526,     4,     5,     5,     5,   367,   367,   526,   526,
     526
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
#line 1793 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 762:
#line 1796 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 763:
#line 1799 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 764:
#line 1802 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 765:
#line 1805 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 766:
#line 1809 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 767:
#line 1813 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 768:
#line 1818 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 769:
#line 1822 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 770:
#line 1823 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 771:
#line 1825 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 772:
#line 1826 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 773:
#line 1828 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 774:
#line 1830 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 775:
#line 1832 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 776:
#line 1834 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 777:
#line 1835 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 778:
#line 1837 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 779:
#line 1839 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 780:
#line 1842 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 781:
#line 1846 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 782:
#line 1850 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 783:
#line 1852 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 784:
#line 1854 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 785:
#line 1856 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 786:
#line 1858 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 787:
#line 1860 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 788:
#line 1862 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 789:
#line 1864 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 790:
#line 1866 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 791:
#line 1868 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 792:
#line 1870 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 793:
#line 1872 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 794:
#line 1874 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 795:
#line 1876 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 796:
#line 1877 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 797:
#line 1879 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 798:
#line 1881 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 799:
#line 1882 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 800:
#line 1883 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 801:
#line 1885 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 802:
#line 1887 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 803:
#line 1888 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 804:
#line 1889 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 805:
#line 1890 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 806:
#line 1892 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 807:
#line 1893 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 808:
#line 1895 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 809:
#line 1899 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 810:
#line 1902 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 811:
#line 1905 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 812:
#line 1909 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 813:
#line 1913 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 814:
#line 1918 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 815:
#line 1922 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 816:
#line 1923 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 817:
#line 1924 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 818:
#line 1926 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 819:
#line 1928 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 820:
#line 1932 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 821:
#line 1933 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 822:
#line 1934 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 823:
#line 1936 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 824:
#line 1939 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 825:
#line 1942 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 826:
#line 1945 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 827:
#line 1946 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 828:
#line 1948 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 829:
#line 1951 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 830:
#line 1955 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 831:
#line 1957 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 832:
#line 1958 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 833:
#line 1960 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 834:
#line 1963 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 835:
#line 1966 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 836:
#line 1967 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 837:
#line 1969 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 838:
#line 1970 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 839:
#line 1971 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 840:
#line 1973 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 841:
#line 1974 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 842:
#line 1976 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 843:
#line 1979 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 844:
#line 1982 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 845:
#line 1984 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 846:
#line 1985 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 850:
#line 1990 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 851:
#line 1991 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 852:
#line 1993 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 853:
#line 1995 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 854:
#line 1997 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 855:
#line 1998 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 859:
#line 2004 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 860:
#line 2005 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 861:
#line 2006 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 862:
#line 2007 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 863:
#line 2008 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 864:
#line 2009 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 865:
#line 2010 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 866:
#line 2011 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 867:
#line 2012 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 868:
#line 2013 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 869:
#line 2015 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 870:
#line 2017 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 871:
#line 2018 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 872:
#line 2019 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 873:
#line 2020 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 874:
#line 2021 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 875:
#line 2023 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 876:
#line 2024 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 877:
#line 2025 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 878:
#line 2026 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 879:
#line 2027 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 880:
#line 2029 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 881:
#line 2030 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 882:
#line 2031 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 883:
#line 2032 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 884:
#line 2033 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 885:
#line 2034 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 886:
#line 2037 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 887:
#line 2038 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 888:
#line 2039 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 889:
#line 2040 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 890:
#line 2041 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 891:
#line 2042 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 892:
#line 2043 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 893:
#line 2044 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 894:
#line 2045 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 895:
#line 2046 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 896:
#line 2047 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 897:
#line 2048 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 898:
#line 2049 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 899:
#line 2050 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 900:
#line 2051 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 901:
#line 2052 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 902:
#line 2053 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 903:
#line 2054 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 904:
#line 2055 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 905:
#line 2056 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 906:
#line 2057 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 907:
#line 2060 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 908:
#line 2061 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 909:
#line 2062 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 910:
#line 2063 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 911:
#line 2064 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 912:
#line 2066 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 913:
#line 2076 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2084 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2093 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2101 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2108 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2115 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2123 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2131 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2136 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 922:
#line 2141 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 923:
#line 2146 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 924:
#line 2151 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 925:
#line 2156 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 926:
#line 2161 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 927:
#line 2166 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 928:
#line 2175 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 929:
#line 2185 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 930:
#line 2195 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 931:
#line 2204 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 932:
#line 2212 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 933:
#line 2222 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 934:
#line 2232 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 935:
#line 2242 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 936:
#line 2254 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 937:
#line 2263 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 939:
#line 2271 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 940:
#line 2273 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 941:
#line 2275 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 942:
#line 2280 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 943:
#line 2283 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 944:
#line 2284 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 945:
#line 2285 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 946:
#line 2292 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 947:
#line 2294 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 948:
#line 2295 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 949:
#line 2298 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 950:
#line 2299 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 951:
#line 2300 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 952:
#line 2301 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 953:
#line 2302 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 954:
#line 2303 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 955:
#line 2304 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 957:
#line 2308 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 958:
#line 2309 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 959:
#line 2310 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 960:
#line 2311 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 961:
#line 2312 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 962:
#line 2315 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 963:
#line 2317 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 964:
#line 2319 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 965:
#line 2321 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 966:
#line 2323 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 967:
#line 2325 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 968:
#line 2327 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 969:
#line 2328 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 970:
#line 2329 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 971:
#line 2331 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 972:
#line 2333 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 973:
#line 2335 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 974:
#line 2337 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 975:
#line 2339 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 976:
#line 2340 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 977:
#line 2341 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 978:
#line 2343 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 979:
#line 2345 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 980:
#line 2348 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 981:
#line 2350 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 982:
#line 2352 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 983:
#line 2353 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 984:
#line 2354 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 985:
#line 2355 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 986:
#line 2357 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 987:
#line 2358 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 988:
#line 2359 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 989:
#line 2360 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 990:
#line 2361 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 991:
#line 2363 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 992:
#line 2365 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 993:
#line 2366 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 994:
#line 2368 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 995:
#line 2370 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 996:
#line 2372 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 997:
#line 2373 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 998:
#line 2375 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 999:
#line 2377 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1000:
#line 2378 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1001:
#line 2379 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1002:
#line 2380 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1003:
#line 2382 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1004:
#line 2384 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1005:
#line 2387 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1006:
#line 2390 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1007:
#line 2391 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1008:
#line 2392 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1009:
#line 2394 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1010:
#line 2397 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1011:
#line 2400 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1012:
#line 2401 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1013:
#line 2402 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1014:
#line 2403 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1015:
#line 2405 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1016:
#line 2407 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1017:
#line 2409 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1018:
#line 2410 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1019:
#line 2412 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1020:
#line 2413 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1021:
#line 2414 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1022:
#line 2415 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1023:
#line 2416 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1024:
#line 2418 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1025:
#line 2420 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1026:
#line 2422 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1027:
#line 2424 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1029:
#line 2426 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1030:
#line 2427 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1031:
#line 2429 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1032:
#line 2431 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1033:
#line 2432 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1034:
#line 2433 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1036:
#line 2435 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1038:
#line 2439 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1039:
#line 2440 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1040:
#line 2441 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1041:
#line 2442 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1042:
#line 2443 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1043:
#line 2444 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1044:
#line 2446 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1045:
#line 2447 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1046:
#line 2449 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1047:
#line 2452 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1048:
#line 2453 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1049:
#line 2454 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1050:
#line 2455 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1051:
#line 2458 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1052:
#line 2459 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1053:
#line 2462 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1054:
#line 2463 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1055:
#line 2466 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1056:
#line 2467 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1057:
#line 2470 "frame/parser.Y"
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
#line 2483 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1059:
#line 2484 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1060:
#line 2488 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1061:
#line 2489 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1062:
#line 2493 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1063:
#line 2494 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1064:
#line 2499 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1065:
#line 2503 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1066:
#line 2508 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1067:
#line 2510 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1068:
#line 2513 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1069:
#line 2515 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1070:
#line 2518 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1071:
#line 2520 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1072:
#line 2523 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1073:
#line 2524 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1074:
#line 2525 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1075:
#line 2526 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1076:
#line 2527 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1077:
#line 2528 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1078:
#line 2530 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1081:
#line 2537 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1082:
#line 2538 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1083:
#line 2539 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1084:
#line 2540 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1085:
#line 2541 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1086:
#line 2542 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1089:
#line 2547 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1090:
#line 2548 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1091:
#line 2549 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1092:
#line 2550 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1093:
#line 2551 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1094:
#line 2552 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1095:
#line 2553 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1096:
#line 2554 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1097:
#line 2555 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1098:
#line 2556 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1099:
#line 2557 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1102:
#line 2564 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1103:
#line 2565 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1105:
#line 2569 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1106:
#line 2571 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1107:
#line 2572 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1108:
#line 2575 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1109:
#line 2576 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1110:
#line 2577 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1111:
#line 2578 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1112:
#line 2579 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1113:
#line 2580 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1114:
#line 2583 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1115:
#line 2584 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1118:
#line 2592 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1119:
#line 2595 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1120:
#line 2596 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1124:
#line 2603 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1125:
#line 2606 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1126:
#line 2610 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1127:
#line 2611 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1128:
#line 2612 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1129:
#line 2613 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1130:
#line 2614 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1131:
#line 2615 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1132:
#line 2616 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1133:
#line 2617 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1134:
#line 2623 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1135:
#line 2624 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1136:
#line 2625 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1137:
#line 2626 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1138:
#line 2630 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1139:
#line 2631 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1140:
#line 2633 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1141:
#line 2638 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1143:
#line 2640 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1145:
#line 2642 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1146:
#line 2645 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1147:
#line 2647 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1148:
#line 2652 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1149:
#line 2655 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1150:
#line 2656 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1151:
#line 2657 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1152:
#line 2660 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1153:
#line 2662 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1154:
#line 2666 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1155:
#line 2667 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1156:
#line 2671 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1157:
#line 2672 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1158:
#line 2673 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1159:
#line 2674 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1160:
#line 2680 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1161:
#line 2681 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1162:
#line 2687 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1163:
#line 2688 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1164:
#line 2689 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1165:
#line 2690 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1168:
#line 2698 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1169:
#line 2700 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1170:
#line 2701 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1171:
#line 2702 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1172:
#line 2706 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1173:
#line 2707 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1174:
#line 2708 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1175:
#line 2709 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1176:
#line 2712 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1177:
#line 2713 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1178:
#line 2716 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1179:
#line 2717 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1180:
#line 2718 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1181:
#line 2721 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1182:
#line 2722 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1183:
#line 2723 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1184:
#line 2726 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1185:
#line 2727 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1187:
#line 2729 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1188:
#line 2730 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1189:
#line 2733 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1190:
#line 2734 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1191:
#line 2735 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1196:
#line 2742 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1197:
#line 2746 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1198:
#line 2748 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1199:
#line 2750 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1201:
#line 2755 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1202:
#line 2757 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1203:
#line 2759 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1213:
#line 2772 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1214:
#line 2773 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1215:
#line 2774 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1216:
#line 2777 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1217:
#line 2778 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1218:
#line 2779 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1219:
#line 2782 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1220:
#line 2783 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1221:
#line 2784 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1222:
#line 2787 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1223:
#line 2788 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1224:
#line 2789 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1226:
#line 2793 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1227:
#line 2794 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1228:
#line 2795 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1229:
#line 2798 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1230:
#line 2799 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1231:
#line 2800 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1232:
#line 2803 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1233:
#line 2804 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1234:
#line 2805 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1235:
#line 2808 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1236:
#line 2809 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1237:
#line 2810 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1238:
#line 2813 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1239:
#line 2814 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1240:
#line 2815 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1241:
#line 2819 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1242:
#line 2821 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1243:
#line 2823 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1244:
#line 2827 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1245:
#line 2831 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1246:
#line 2833 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1247:
#line 2837 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1248:
#line 2840 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1249:
#line 2841 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1250:
#line 2842 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1251:
#line 2843 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1252:
#line 2846 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1253:
#line 2848 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1254:
#line 2849 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1255:
#line 2851 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1257:
#line 2855 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1258:
#line 2856 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1259:
#line 2857 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1260:
#line 2860 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1261:
#line 2861 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1262:
#line 2865 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1264:
#line 2867 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1267:
#line 2872 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1268:
#line 2873 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1269:
#line 2874 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1270:
#line 2877 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1271:
#line 2878 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1272:
#line 2879 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1273:
#line 2882 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1274:
#line 2884 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1275:
#line 2889 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1276:
#line 2892 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1277:
#line 2899 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1278:
#line 2901 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1279:
#line 2903 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1280:
#line 2908 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1282:
#line 2912 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1283:
#line 2913 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1284:
#line 2914 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1285:
#line 2916 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1286:
#line 2918 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1287:
#line 2923 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11049 "frame/parser.C"
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


#line 2927 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

