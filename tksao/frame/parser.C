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
static int currentFill;
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
#line 54 "frame/parser.Y"
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
#line 871 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 884 "frame/parser.C"

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
#define YYLAST   5591

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  361
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  222
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1286
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2820

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
    2477,  2480,  2483,  2486,  2489,  2494,  2499,  2504,  2508,  2513,
    2519,  2528,  2535,  2545,  2552,  2560,  2571,  2583,  2596,  2606,
    2612,  2619,  2623,  2629,  2635,  2642,  2648,  2653,  2663,  2674,
    2686,  2696,  2703,  2710,  2717,  2724,  2731,  2738,  2745,  2752,
    2759,  2767,  2775,  2778,  2783,  2788,  2793,  2798,  2804,  2809,
    2814,  2820,  2826,  2830,  2835,  2840,  2845,  2853,  2863,  2870,
    2881,  2893,  2906,  2916,  2920,  2924,  2927,  2931,  2937,  2945,
    2950,  2954,  2958,  2965,  2973,  2981,  2986,  2991,  3001,  3006,
    3010,  3015,  3023,  3031,  3034,  3038,  3042,  3046,  3051,  3054,
    3057,  3062,  3073,  3077,  3079,  3083,  3086,  3089,  3092,  3095,
    3099,  3105,  3110,  3116,  3119,  3122,  3125,  3128,  3132,  3135,
    3138,  3141,  3145,  3149,  3152,  3156,  3161,  3165,  3169,  3176,
    3181,  3184,  3188,  3191,  3194,  3199,  3203,  3207,  3210,  3214,
    3216,  3219,  3221,  3224,  3227,  3230,  3232,  3234,  3236,  3238,
    3241,  3243,  3246,  3249,  3251,  3254,  3257,  3259,  3262,  3264,
    3266,  3268,  3270,  3272,  3274,  3276,  3278,  3279,  3281,  3284,
    3287,  3290,  3294,  3300,  3308,  3316,  3323,  3330,  3337,  3344,
    3350,  3357,  3364,  3371,  3378,  3385,  3392,  3399,  3411,  3419,
    3427,  3435,  3445,  3455,  3466,  3479,  3492,  3495,  3498,  3502,
    3507,  3512,  3517,  3518,  3520,  3522,  3527,  3532,  3534,  3536,
    3538,  3540,  3542,  3544,  3546,  3548,  3551,  3553,  3555,  3557,
    3559,  3563,  3567,  3576,  3583,  3594,  3602,  3610,  3616,  3619,
    3622,  3626,  3631,  3637,  3643,  3649,  3653,  3658,  3664,  3670,
    3676,  3682,  3685,  3689,  3693,  3699,  3703,  3707,  3711,  3716,
    3722,  3728,  3734,  3740,  3744,  3749,  3755,  3761,  3764,  3767,
    3770,  3774,  3780,  3787,  3794,  3798,  3802,  3809,  3815,  3821,
    3824,  3828,  3832,  3838,  3845,  3849,  3852,  3855,  3859,  3862,
    3866,  3869,  3873,  3879,  3886,  3889,  3892,  3895,  3897,  3902,
    3907,  3909,  3912,  3915,  3918,  3921,  3924,  3927,  3930,  3933,
    3937,  3940,  3944,  3947,  3951,  3953,  3955,  3957,  3959,  3961,
    3962,  3965,  3966,  3969,  3970,  3972,  3973,  3974,  3976,  3978,
    3980,  3982,  3984,  3992,  4001,  4004,  4011,  4014,  4021,  4024,
    4028,  4031,  4033,  4035,  4039,  4043,  4045,  4050,  4053,  4055,
    4059,  4063,  4067,  4072,  4076,  4080,  4084,  4086,  4088,  4090,
    4092,  4094,  4096,  4098,  4100,  4102,  4104,  4106,  4108,  4110,
    4112,  4115,  4116,  4117,  4120,  4127,  4135,  4138,  4140,  4144,
    4146,  4150,  4152,  4154,  4156,  4159,  4162,  4164,  4168,  4169,
    4170,  4173,  4176,  4178,  4182,  4188,  4190,  4193,  4196,  4200,
    4203,  4206,  4209,  4212,  4214,  4216,  4218,  4220,  4225,  4228,
    4232,  4236,  4239,  4243,  4246,  4249,  4252,  4256,  4260,  4264,
    4267,  4271,  4273,  4277,  4281,  4283,  4286,  4289,  4292,  4295,
    4305,  4312,  4314,  4316,  4318,  4320,  4323,  4326,  4330,  4334,
    4336,  4339,  4343,  4347,  4349,  4352,  4354,  4356,  4358,  4360,
    4362,  4365,  4368,  4373,  4375,  4378,  4381,  4384,  4388,  4390,
    4392,  4394,  4397,  4400,  4403,  4406,  4409,  4413,  4417,  4421,
    4425,  4429,  4433,  4437,  4439,  4442,  4445,  4448,  4452,  4455,
    4459,  4463,  4466,  4469,  4472,  4475,  4478,  4481,  4484,  4487,
    4490,  4493,  4496,  4499,  4502,  4505,  4509,  4513,  4517,  4520,
    4523,  4526,  4529,  4532,  4535,  4538,  4541,  4544,  4547,  4550,
    4553,  4557,  4561,  4565,  4570,  4577,  4580,  4582,  4584,  4586,
    4588,  4590,  4591,  4597,  4599,  4606,  4610,  4612,  4615,  4618,
    4621,  4625,  4629,  4632,  4635,  4638,  4641,  4644,  4647,  4651,
    4654,  4657,  4661,  4663,  4667,  4672,  4674,  4677,  4683,  4690,
    4697,  4700,  4702,  4705,  4708,  4714,  4721
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
     123,   365,    -1,   132,     5,    -1,   153,    16,    -1,   153,
     218,   363,   363,    -1,   153,   301,   363,   363,    -1,     4,
      19,   388,   365,    -1,     4,    20,   368,    -1,     4,    20,
     368,   375,    -1,     4,    20,   368,   373,   380,    -1,     4,
      21,   245,   363,   363,     4,   373,   382,    -1,     4,    21,
     245,     5,   373,   382,    -1,     4,    49,   245,   363,   363,
     363,     4,   373,   382,    -1,     4,    49,   245,     5,   373,
     382,    -1,     4,    48,   245,   363,   363,   373,   382,    -1,
       4,    52,   106,   368,   368,     4,   363,   363,   363,     4,
      -1,     4,    52,   106,   368,   368,     4,   363,   363,   363,
       4,   375,    -1,     4,    52,   106,   368,   368,     4,   363,
     363,   363,     4,   373,   380,    -1,     4,    52,   106,     5,
       5,   373,   380,   373,   382,    -1,     4,    55,   506,     5,
       5,    -1,     4,    62,   245,   363,   373,   382,    -1,     4,
      66,     5,    -1,     4,    74,    26,   365,   365,    -1,     4,
      74,   170,     5,     5,    -1,     4,    74,   245,   363,   373,
     382,    -1,     4,    74,   290,   373,   380,    -1,     4,    75,
     142,   365,    -1,     4,    82,   106,   368,   368,     4,   363,
     363,     4,    -1,     4,    82,   106,   368,   368,     4,   363,
     363,     4,   375,    -1,     4,    82,   106,   368,   368,     4,
     363,   363,     4,   373,   380,    -1,     4,    82,   106,     5,
       5,   373,   380,   373,   382,    -1,     4,    83,    21,   245,
     363,   363,    -1,     4,    83,    49,   245,   363,   363,    -1,
       4,    83,    52,    20,   363,   363,    -1,     4,    83,    52,
     245,   363,   363,    -1,     4,    83,   111,   245,   363,   363,
      -1,     4,    83,   114,    20,   363,   363,    -1,     4,    83,
     114,   245,   363,   363,    -1,     4,    83,    82,    20,   363,
     363,    -1,     4,    83,    82,   245,   363,   363,    -1,     4,
      83,   233,   316,     4,   363,   363,    -1,     4,    83,   266,
     316,     4,   363,   363,    -1,     4,   100,    -1,     4,   100,
      21,     4,    -1,     4,   100,    49,     4,    -1,     4,   100,
      52,     4,    -1,     4,   100,   111,     4,    -1,     4,   100,
      55,   506,     5,    -1,     4,   100,   114,     4,    -1,     4,
     100,    82,     4,    -1,     4,   100,   233,   316,     4,    -1,
       4,   100,   266,   316,     4,    -1,     4,   100,   292,    -1,
       4,   100,   292,     5,    -1,     4,   100,   292,     4,    -1,
       4,   106,    39,     4,    -1,     4,   110,   245,   363,   363,
     373,   382,    -1,     4,   111,   245,   363,   363,   363,     4,
     373,   382,    -1,     4,   111,   245,     5,   373,   382,    -1,
       4,   114,   106,   368,   368,     4,   363,   363,   363,     4,
      -1,     4,   114,   106,   368,   368,     4,   363,   363,   363,
       4,   375,    -1,     4,   114,   106,   368,   368,     4,   363,
     363,   363,     4,   373,   380,    -1,     4,   114,   106,     5,
       5,   373,   380,   373,   382,    -1,     4,   123,   365,    -1,
       4,   132,     5,    -1,     4,   153,    -1,     4,   153,   218,
      -1,     4,   177,    26,   365,   365,    -1,     4,   177,   231,
     373,   380,   372,   372,    -1,     4,   201,   363,   363,    -1,
       4,   201,   136,    -1,     4,   201,    35,    -1,     4,   201,
     300,   373,   380,   372,    -1,     4,   233,   251,   363,   363,
     373,   382,    -1,     4,   266,   251,   363,   363,   373,   382,
      -1,     4,   231,   270,   386,    -1,     4,   231,   277,     4,
      -1,     4,   239,   373,   380,   372,   372,   363,   373,   382,
      -1,     4,   240,   525,   365,    -1,     4,   255,    39,    -1,
       4,   256,   133,     5,    -1,     4,   256,   231,   373,   380,
     372,   372,    -1,     4,   256,   290,   373,   380,   373,   382,
      -1,     4,   267,    -1,     4,   267,   218,    -1,     4,   292,
       5,    -1,     4,   294,     5,    -1,     4,   294,   255,   365,
      -1,     4,   306,    -1,     4,   308,    -1,     4,   314,    26,
     365,    -1,     4,   314,   231,   373,   380,   372,   373,   382,
     363,   368,    -1,     4,   348,     4,    -1,   168,    -1,   168,
     363,   363,    -1,   179,   520,    -1,   180,   521,    -1,   201,
     522,    -1,   238,   365,    -1,   240,   525,   365,    -1,   240,
     525,   365,   363,   363,    -1,   255,    39,   363,   363,    -1,
     255,   200,   363,   363,     4,    -1,   255,   112,    -1,   260,
     529,    -1,   267,   530,    -1,   274,   531,    -1,     5,    66,
       5,    -1,     5,    80,    -1,     5,   100,    -1,     5,    89,
      -1,     5,   123,   365,    -1,     5,   132,     5,    -1,     5,
     153,    -1,     5,   153,   218,    -1,     5,   201,   363,   363,
      -1,     5,   201,   136,    -1,     5,   201,    35,    -1,     5,
     201,   300,   373,   380,   372,    -1,     5,   240,   525,   365,
      -1,     5,   267,    -1,     5,   267,   218,    -1,     5,   306,
      -1,     5,   308,    -1,   292,   106,     5,     5,    -1,   292,
     100,     5,    -1,   292,   100,    16,    -1,   292,     5,    -1,
     292,   309,     5,    -1,   224,    -1,   224,   373,    -1,   305,
      -1,   306,    16,    -1,   308,    16,    -1,   348,     4,    -1,
     267,    -1,   308,    -1,   153,    -1,   306,    -1,    39,   201,
      -1,   201,    -1,   112,   201,    -1,    39,   106,    -1,   106,
      -1,   112,   106,    -1,    39,   255,    -1,   255,    -1,   112,
     255,    -1,   100,    -1,   294,    -1,    66,    -1,   348,    -1,
     240,    -1,   132,    -1,   168,    -1,   309,    -1,    -1,     4,
      -1,    29,   365,    -1,   245,   363,    -1,   164,     4,    -1,
     219,     4,   363,    -1,    62,   363,   363,   363,   526,    -1,
     110,   363,   363,   363,   363,   367,   526,    -1,    48,   363,
     363,   363,   363,   367,   526,    -1,   233,   363,   363,   363,
     363,   526,    -1,   266,   363,   363,   363,   363,   526,    -1,
     177,   363,   363,   363,   363,   526,    -1,   314,   363,   363,
     363,   363,   526,    -1,   294,   363,   363,   367,   526,    -1,
      62,   231,   363,   363,   387,   526,    -1,    48,   231,   363,
     363,   387,   526,    -1,   103,   231,   363,   363,   387,   526,
      -1,    85,   231,   363,   363,   387,   526,    -1,   359,   231,
     363,   363,   387,   526,    -1,    26,   231,   363,   363,   387,
     526,    -1,    51,   231,   363,   363,   387,   526,    -1,   256,
     363,   363,   363,   363,   373,   380,   373,   382,     5,   526,
      -1,    74,   363,   363,   363,   373,   380,   526,    -1,   239,
     363,   363,   363,   363,   363,   526,    -1,    21,   363,   363,
     363,   363,     4,   526,    -1,   111,   363,   363,   363,   363,
     363,     4,   367,   526,    -1,    49,   363,   363,   363,   363,
     363,     4,   367,   526,    -1,    82,   363,   363,   368,   368,
       4,   363,   363,     4,   526,    -1,   114,   363,   363,   368,
     368,     4,   363,   363,   363,     4,   367,   526,    -1,    52,
     363,   363,   368,   368,     4,   363,   363,   363,     4,   367,
     526,    -1,    75,   526,    -1,   293,   509,    -1,     5,   363,
     363,    -1,   312,     5,   363,   363,    -1,   363,   363,   312,
       5,    -1,     5,   373,   380,   372,    -1,    -1,   267,    -1,
      16,    -1,    39,   363,   363,     4,    -1,   200,   363,   363,
       4,    -1,   112,    -1,   105,    -1,   350,    -1,    63,    -1,
     259,    -1,   258,    -1,   242,    -1,   351,    -1,    60,   514,
      -1,    66,    -1,   132,    -1,   115,    -1,   123,    -1,   147,
     363,   363,    -1,   158,   363,   363,    -1,     4,    19,    82,
       5,     5,     5,   373,     4,    -1,     4,    19,   155,     5,
       5,     4,    -1,     4,    19,   229,     5,     5,     5,     5,
     373,   380,   389,    -1,     4,    19,   230,     5,     5,   373,
     389,    -1,     4,    19,   244,     5,     5,     5,   373,    -1,
       4,    19,   287,   373,   380,    -1,   158,    16,    -1,     4,
      20,    -1,     4,    20,   375,    -1,     4,    20,   373,   380,
      -1,     4,    21,   245,   373,   382,    -1,     4,    49,   245,
     373,   382,    -1,     4,    48,   245,   373,   382,    -1,     4,
      52,    20,    -1,     4,    52,    20,   375,    -1,     4,    52,
      20,   373,   380,    -1,     4,    52,   245,   373,   382,    -1,
       4,    59,   373,   380,   381,    -1,     4,    62,   245,   373,
     382,    -1,     4,    66,    -1,     4,    74,    26,    -1,     4,
      74,   170,    -1,     4,    74,   245,   373,   382,    -1,     4,
      74,   290,    -1,     4,    75,   142,    -1,     4,    82,    20,
      -1,     4,    82,    20,   375,    -1,     4,    82,    20,   373,
     380,    -1,     4,    82,   245,   373,   382,    -1,     4,   110,
     245,   373,   382,    -1,     4,   111,   245,   373,   382,    -1,
       4,   114,    20,    -1,     4,   114,    20,   375,    -1,     4,
     114,    20,   373,   380,    -1,     4,   114,   245,   373,   382,
      -1,     4,   123,    -1,     4,   132,    -1,     4,   153,    -1,
       4,   177,    26,    -1,     4,   177,   172,   373,   382,    -1,
       4,   177,   231,   373,   380,   381,    -1,     4,   186,   172,
     363,   373,   382,    -1,     4,   231,   270,    -1,     4,   231,
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
      -1,     5,    66,    -1,     5,   123,    -1,     5,   132,    -1,
       5,   158,    -1,     5,   240,   525,    -1,     5,   292,    -1,
       5,   292,   214,    -1,   292,    16,    -1,   292,    99,   202,
      -1,   348,    -1,    29,    -1,   245,    -1,   164,    -1,   219,
      -1,    -1,   363,   363,    -1,    -1,   363,   363,    -1,    -1,
     294,    -1,    -1,    -1,   232,    -1,   247,    -1,   310,    -1,
      57,    -1,   134,    -1,   512,   373,   380,   381,   365,   527,
     534,    -1,   267,   512,   373,   380,   381,   365,   527,   534,
      -1,   512,     5,    -1,   512,     5,     4,     5,   373,   380,
      -1,   512,     4,    -1,   512,     4,     4,     5,   373,   380,
      -1,   127,     5,    -1,   127,     5,     5,    -1,   363,   363,
      -1,   136,    -1,    35,    -1,    39,   363,   363,    -1,   200,
     363,   363,    -1,   112,    -1,   300,   373,   380,   372,    -1,
     523,   524,    -1,   524,    -1,   525,   360,   365,    -1,    66,
     360,     5,    -1,   123,   360,     4,    -1,    93,   360,     4,
       4,    -1,   348,   360,     4,    -1,   132,   360,     5,    -1,
     294,   360,     5,    -1,   537,    -1,   538,    -1,   209,    -1,
     267,    -1,   153,    -1,    92,    -1,   129,    -1,   106,    -1,
     201,    -1,   255,    -1,   100,    -1,   161,    -1,   283,    -1,
     518,    -1,   518,   523,    -1,    -1,    -1,   528,   532,    -1,
       5,   512,   373,   380,   381,   365,    -1,   267,     5,   512,
     373,   380,   381,   365,    -1,   293,     5,    -1,    16,    -1,
     218,   363,   363,    -1,   301,    -1,   301,   363,   363,    -1,
     125,    -1,   171,    -1,   365,    -1,   294,   365,    -1,   532,
     533,    -1,   533,    -1,   525,   360,   365,    -1,    -1,    -1,
     535,   536,    -1,   536,   537,    -1,   537,    -1,   292,   360,
       5,    -1,    55,   360,   506,     5,     5,    -1,    64,    -1,
      66,     5,    -1,   187,   376,    -1,   246,   363,   363,    -1,
     290,   373,    -1,   299,   363,    -1,    45,   377,    -1,   187,
       4,    -1,   359,    -1,   357,    -1,   351,    -1,   209,    -1,
     363,   363,   363,   363,    -1,   363,   363,    -1,   375,   363,
     363,    -1,   373,   380,   372,    -1,   300,   542,    -1,    38,
     363,   363,    -1,   200,   543,    -1,   238,   365,    -1,   363,
     363,    -1,   375,   363,   363,    -1,   373,   380,   372,    -1,
      39,   363,   363,    -1,   363,   363,    -1,   112,   363,   363,
      -1,   365,    -1,   319,   374,   380,    -1,     5,     4,     4,
      -1,   309,    -1,    70,   547,    -1,   173,     4,    -1,   252,
       4,    -1,   261,   363,    -1,     4,     4,     4,     4,     4,
       4,     4,     4,     4,    -1,     4,     4,     4,     4,     4,
       4,    -1,    54,    -1,   144,    -1,   253,    -1,    90,    -1,
     153,   549,    -1,   267,   550,    -1,    39,   363,   363,    -1,
     200,   363,   363,    -1,   112,    -1,   272,   112,    -1,    39,
     363,   363,    -1,   200,   363,   363,    -1,   112,    -1,   272,
     112,    -1,   195,    -1,    12,    -1,   209,    -1,    33,    -1,
     108,    -1,    61,     5,    -1,   290,   373,    -1,   313,     4,
       4,     4,    -1,   363,    -1,   363,    98,    -1,   200,   555,
      -1,   300,   363,    -1,   300,   363,    98,    -1,    39,    -1,
     363,    -1,   112,    -1,    25,   557,    -1,   127,   559,    -1,
     213,   569,    -1,   113,   570,    -1,   226,     5,    -1,   122,
       5,   390,    -1,    61,     5,   390,    -1,   281,     4,   390,
      -1,   253,    87,   558,    -1,   122,     5,   390,    -1,    61,
       5,   390,    -1,   281,     4,   390,    -1,   560,    -1,   160,
     560,    -1,   291,   561,    -1,   278,   562,    -1,   118,    87,
     563,    -1,   198,   564,    -1,   253,   160,   566,    -1,   253,
      87,   567,    -1,   249,   568,    -1,   122,     5,    -1,    61,
       5,    -1,   281,     4,    -1,   122,     5,    -1,    61,     5,
      -1,   281,     4,    -1,   122,     5,    -1,    61,     5,    -1,
     281,     4,    -1,   122,     5,    -1,    61,     5,    -1,   281,
       4,    -1,   160,   565,    -1,   122,     5,     4,    -1,    61,
       5,     4,    -1,   281,     4,     4,    -1,   122,     5,    -1,
      61,     5,    -1,   281,     4,    -1,   122,     5,    -1,    61,
       5,    -1,   281,     4,    -1,   122,     5,    -1,    61,     5,
      -1,   281,     4,    -1,   122,     5,    -1,    61,     5,    -1,
     281,     4,    -1,   122,     5,   390,    -1,    61,     5,   390,
      -1,   281,     4,   390,    -1,   122,     5,     5,   390,    -1,
     572,     4,     4,   363,   363,   368,    -1,   572,     4,    -1,
     100,    -1,    50,    -1,   302,    -1,   140,    -1,   109,    -1,
      -1,     4,   363,   363,   363,   363,    -1,   212,    -1,   212,
       4,   363,   363,   363,   363,    -1,   127,   278,   574,    -1,
       4,    -1,     4,     4,    -1,   363,   373,    -1,   363,   363,
      -1,   300,   363,   363,    -1,   374,   380,   381,    -1,    15,
     579,    -1,   251,     4,    -1,   248,   578,    -1,    22,   577,
      -1,     4,     4,    -1,     4,     5,    -1,   294,     4,     5,
      -1,     4,     4,    -1,     4,     5,    -1,   294,     4,     5,
      -1,     4,    -1,     4,   374,   380,    -1,   300,     4,   374,
     380,    -1,   237,    -1,   363,   363,    -1,   363,   363,    11,
     363,   363,    -1,   363,   363,    11,   375,   363,   363,    -1,
     363,   363,    11,   373,   380,   372,    -1,   300,   582,    -1,
     126,    -1,   126,   363,    -1,   363,   363,    -1,   363,   363,
      11,   363,   363,    -1,   363,   363,    11,   375,   363,   363,
      -1,   363,   363,    11,   373,   380,   372,    -1
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
    1771,  1772,  1773,  1775,  1776,  1778,  1781,  1784,  1785,  1786,
    1789,  1792,  1795,  1799,  1802,  1805,  1808,  1812,  1817,  1822,
    1824,  1826,  1827,  1829,  1831,  1833,  1835,  1836,  1838,  1840,
    1844,  1849,  1851,  1853,  1855,  1857,  1859,  1861,  1863,  1865,
    1867,  1869,  1872,  1873,  1875,  1877,  1878,  1880,  1882,  1883,
    1884,  1886,  1888,  1889,  1890,  1892,  1893,  1896,  1900,  1903,
    1906,  1910,  1915,  1921,  1922,  1923,  1924,  1926,  1927,  1931,
    1933,  1934,  1935,  1938,  1941,  1944,  1946,  1948,  1953,  1956,
    1957,  1958,  1961,  1965,  1966,  1968,  1969,  1970,  1972,  1973,
    1975,  1976,  1981,  1983,  1984,  1986,  1987,  1988,  1989,  1990,
    1991,  1993,  1995,  1997,  1998,  1999,  2001,  2003,  2004,  2005,
    2006,  2007,  2008,  2009,  2010,  2011,  2012,  2013,  2014,  2016,
    2018,  2019,  2020,  2021,  2023,  2024,  2025,  2026,  2027,  2029,
    2030,  2031,  2032,  2033,  2034,  2037,  2038,  2039,  2040,  2041,
    2042,  2043,  2044,  2045,  2046,  2047,  2048,  2049,  2050,  2051,
    2052,  2053,  2054,  2055,  2056,  2057,  2060,  2061,  2062,  2063,
    2064,  2065,  2073,  2080,  2089,  2098,  2105,  2112,  2120,  2128,
    2135,  2140,  2145,  2150,  2155,  2160,  2165,  2171,  2181,  2191,
    2201,  2208,  2218,  2228,  2237,  2249,  2262,  2267,  2270,  2272,
    2274,  2279,  2283,  2284,  2285,  2291,  2293,  2295,  2298,  2299,
    2300,  2301,  2302,  2303,  2304,  2307,  2308,  2309,  2310,  2311,
    2312,  2313,  2315,  2317,  2319,  2321,  2323,  2325,  2328,  2329,
    2330,  2331,  2333,  2336,  2338,  2340,  2341,  2342,  2344,  2347,
    2350,  2352,  2353,  2354,  2355,  2357,  2358,  2359,  2360,  2361,
    2363,  2365,  2367,  2370,  2371,  2372,  2374,  2377,  2378,  2379,
    2380,  2381,  2383,  2386,  2390,  2391,  2392,  2395,  2398,  2400,
    2401,  2402,  2403,  2405,  2408,  2409,  2411,  2412,  2413,  2414,
    2415,  2417,  2418,  2420,  2423,  2424,  2425,  2426,  2427,  2429,
    2431,  2432,  2433,  2434,  2436,  2438,  2439,  2440,  2441,  2442,
    2443,  2444,  2446,  2447,  2449,  2452,  2453,  2454,  2455,  2458,
    2459,  2462,  2463,  2466,  2467,  2470,  2484,  2485,  2489,  2490,
    2494,  2495,  2498,  2502,  2508,  2510,  2513,  2515,  2518,  2520,
    2524,  2525,  2526,  2527,  2528,  2529,  2530,  2534,  2535,  2538,
    2539,  2540,  2541,  2542,  2543,  2544,  2545,  2546,  2549,  2550,
    2551,  2552,  2553,  2554,  2555,  2556,  2557,  2558,  2559,  2562,
    2563,  2566,  2567,  2567,  2570,  2572,  2574,  2577,  2578,  2579,
    2580,  2581,  2582,  2585,  2586,  2589,  2590,  2593,  2597,  2598,
    2598,  2601,  2602,  2605,  2608,  2612,  2613,  2614,  2615,  2616,
    2617,  2618,  2619,  2625,  2626,  2627,  2628,  2631,  2633,  2634,
    2639,  2641,  2642,  2643,  2644,  2647,  2648,  2653,  2657,  2658,
    2659,  2662,  2663,  2668,  2669,  2672,  2674,  2675,  2676,  2681,
    2683,  2689,  2690,  2691,  2692,  2695,  2696,  2699,  2701,  2703,
    2704,  2707,  2709,  2710,  2711,  2714,  2715,  2718,  2719,  2720,
    2723,  2724,  2725,  2728,  2729,  2730,  2731,  2732,  2735,  2736,
    2737,  2740,  2741,  2742,  2743,  2744,  2747,  2749,  2751,  2753,
    2756,  2758,  2760,  2763,  2764,  2765,  2766,  2767,  2768,  2769,
    2770,  2771,  2774,  2775,  2776,  2779,  2780,  2781,  2784,  2785,
    2786,  2789,  2790,  2791,  2794,  2795,  2796,  2797,  2800,  2801,
    2802,  2805,  2806,  2807,  2810,  2811,  2812,  2815,  2816,  2817,
    2820,  2822,  2824,  2828,  2832,  2834,  2839,  2842,  2843,  2844,
    2845,  2848,  2849,  2851,  2852,  2854,  2857,  2858,  2859,  2862,
    2863,  2866,  2868,  2869,  2870,  2871,  2874,  2875,  2876,  2879,
    2880,  2881,  2884,  2885,  2890,  2894,  2901,  2902,  2904,  2909,
    2911,  2914,  2915,  2916,  2917,  2919,  2924
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
     504,   504,   504,   504,   504,   506,   506,   506,   506,   506,
     506,   506,   506,   506,   506,   506,   506,   506,   506,   506,
     506,   506,   506,   506,   506,   506,   507,   507,   507,   507,
     507,   507,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   508,   508,   508,   508,   509,   509,
     509,   509,   510,   510,   510,   511,   511,   511,   512,   512,
     512,   512,   512,   512,   512,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   514,   514,   514,   514,   515,
     515,   516,   516,   517,   517,   518,   519,   519,   519,   519,
     519,   519,   520,   520,   521,   521,   521,   521,   521,   521,
     522,   522,   522,   522,   522,   522,   522,   523,   523,   524,
     524,   524,   524,   524,   524,   524,   524,   524,   525,   525,
     525,   525,   525,   525,   525,   525,   525,   525,   525,   526,
     526,   527,   528,   527,   529,   529,   529,   530,   530,   530,
     530,   530,   530,   531,   531,   532,   532,   533,   534,   535,
     534,   536,   536,   537,   538,   539,   539,   539,   539,   539,
     539,   539,   539,   540,   540,   540,   540,   541,   541,   541,
     541,   541,   541,   541,   541,   542,   542,   542,   543,   543,
     543,   544,   544,   544,   544,   545,   545,   545,   545,   546,
     546,   547,   547,   547,   547,   548,   548,   549,   549,   549,
     549,   550,   550,   550,   550,   551,   551,   552,   552,   552,
     553,   553,   553,   554,   554,   554,   554,   554,   555,   555,
     555,   556,   556,   556,   556,   556,   557,   557,   557,   557,
     558,   558,   558,   559,   559,   559,   559,   559,   559,   559,
     559,   559,   560,   560,   560,   561,   561,   561,   562,   562,
     562,   563,   563,   563,   564,   564,   564,   564,   565,   565,
     565,   566,   566,   566,   567,   567,   567,   568,   568,   568,
     569,   569,   569,   570,   571,   571,   571,   572,   572,   572,
     572,   573,   573,   573,   573,   573,   574,   574,   574,   575,
     575,   576,   576,   576,   576,   576,   577,   577,   577,   578,
     578,   578,   579,   579,   579,   580,   581,   581,   581,   581,
     581,   582,   582,   582,   582,   582,   582
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
       2,     2,     2,     2,     4,     4,     4,     3,     4,     5,
       8,     6,     9,     6,     7,    10,    11,    12,     9,     5,
       6,     3,     5,     5,     6,     5,     4,     9,    10,    11,
       9,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       7,     7,     2,     4,     4,     4,     4,     5,     4,     4,
       5,     5,     3,     4,     4,     4,     7,     9,     6,    10,
      11,    12,     9,     3,     3,     2,     3,     5,     7,     4,
       3,     3,     6,     7,     7,     4,     4,     9,     4,     3,
       4,     7,     7,     2,     3,     3,     3,     4,     2,     2,
       4,    10,     3,     1,     3,     2,     2,     2,     2,     3,
       5,     4,     5,     2,     2,     2,     2,     3,     2,     2,
       2,     3,     3,     2,     3,     4,     3,     3,     6,     4,
       2,     3,     2,     2,     4,     3,     3,     2,     3,     1,
       2,     1,     2,     2,     2,     1,     1,     1,     1,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     2,     2,
       2,     3,     5,     7,     7,     6,     6,     6,     6,     5,
       6,     6,     6,     6,     6,     6,     6,    11,     7,     7,
       7,     9,     9,    10,    12,    12,     2,     2,     3,     4,
       4,     4,     0,     1,     1,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       3,     3,     8,     6,    10,     7,     7,     5,     2,     2,
       3,     4,     5,     5,     5,     3,     4,     5,     5,     5,
       5,     2,     3,     3,     5,     3,     3,     3,     4,     5,
       5,     5,     5,     3,     4,     5,     5,     2,     2,     2,
       3,     5,     6,     6,     3,     3,     6,     5,     5,     2,
       3,     3,     5,     6,     3,     2,     2,     3,     2,     3,
       2,     3,     5,     6,     2,     2,     2,     1,     4,     4,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       2,     3,     2,     3,     1,     1,     1,     1,     1,     0,
       2,     0,     2,     0,     1,     0,     0,     1,     1,     1,
       1,     1,     7,     8,     2,     6,     2,     6,     2,     3,
       2,     1,     1,     3,     3,     1,     4,     2,     1,     3,
       3,     3,     4,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     0,     2,     6,     7,     2,     1,     3,     1,
       3,     1,     1,     1,     2,     2,     1,     3,     0,     0,
       2,     2,     1,     3,     5,     1,     2,     2,     3,     2,
       2,     2,     2,     1,     1,     1,     1,     4,     2,     3,
       3,     2,     3,     2,     2,     2,     3,     3,     3,     2,
       3,     1,     3,     3,     1,     2,     2,     2,     2,     9,
       6,     1,     1,     1,     1,     2,     2,     3,     3,     1,
       2,     3,     3,     1,     2,     1,     1,     1,     1,     1,
       2,     2,     4,     1,     2,     2,     2,     3,     1,     1,
       1,     2,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     1,     2,     2,     2,     3,     2,     3,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     3,     3,     3,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     3,     3,     4,     6,     2,     1,     1,     1,     1,
       1,     0,     5,     1,     6,     3,     1,     2,     2,     2,
       3,     3,     2,     2,     2,     2,     2,     2,     3,     2,
       2,     3,     1,     3,     4,     1,     2,     5,     6,     6,
       2,     1,     2,     2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     8,     9,     0,     0,     0,     0,
       0,   312,     0,     0,     0,     0,     0,     0,   340,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     0,  1056,
       0,     0,     0,     0,     0,     0,     0,     0,  1056,    43,
       0,     0,     0,    48,     0,     0,     0,    52,  1251,    54,
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
       0,  1056,     0,   364,     0,   368,     0,     0,     0,   372,
       0,   374,     0,   376,     0,     0,   524,   380,    21,     0,
     530,    22,   535,     0,     0,   554,   539,   540,   541,   542,
     556,   544,   545,   549,   546,     0,   548,   550,     0,     0,
      23,     0,    25,     0,   571,     0,     0,     0,   576,     0,
      27,     0,     0,     0,     0,     0,     0,     0,    29,   730,
      30,     0,     0,     0,     0,     0,     0,   731,    31,     0,
      32,  1060,  1061,  1057,  1058,  1059,     0,   139,  1125,     0,
     133,     0,     0,     0,    34,     0,  1136,  1135,  1134,  1133,
      37,     0,     0,     0,     0,     0,   157,     0,    38,     0,
    1154,     0,  1151,    39,     0,     0,     0,     0,    42,     0,
      41,    40,     0,     0,     0,     0,    45,     0,     0,  1183,
      46,     0,     0,     0,     0,     0,    47,  1247,  1246,  1250,
    1249,  1248,    49,     0,    50,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,  1253,    53,     0,     0,
      55,     0,     0,     0,     0,   157,    56,  1275,    57,     0,
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
     732,     0,   737,     0,     0,     0,   906,     0,     0,     0,
     741,   745,   747,   942,     0,     0,     0,     0,     0,   843,
       0,     0,     0,   879,     0,     0,     0,     0,     0,     0,
       0,   881,     0,     0,     0,    33,   142,   143,   141,   140,
    1131,  1126,  1132,   136,   137,   135,   138,   134,  1127,     0,
    1129,  1130,    35,    36,     0,     0,     0,     0,  1143,  1144,
       0,   157,     0,  1141,  1138,     0,     0,     0,   157,  1161,
    1164,  1162,  1163,  1155,  1156,  1157,  1158,     0,     0,     0,
      44,  1180,  1181,     0,  1188,  1190,  1189,  1185,  1186,  1184,
       0,     0,     0,     0,  1191,     0,  1194,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1192,  1203,     0,
       0,     0,  1193,  1195,  1245,  1178,  1179,  1177,   212,     0,
     215,   208,     0,   217,   209,     0,   219,   210,  1176,  1175,
     211,   213,   214,     0,     0,   207,     0,     0,     0,     0,
    1259,  1272,     0,  1262,     0,     0,  1265,     0,     0,  1264,
    1263,   165,  1281,     0,  1280,  1276,   232,   228,     0,   237,
       0,   234,     0,   253,   152,   155,   156,   154,   153,   268,
     269,   270,   258,   257,   273,   275,   274,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   157,     0,   316,    97,
      94,    95,    96,   157,   318,   317,     0,     0,     0,     0,
       0,     0,     0,   331,     0,   327,   325,   324,   339,   388,
       0,     0,   391,   406,   407,   402,   403,   408,   410,   409,
     404,   304,   305,   399,   398,   414,   413,     0,   418,   432,
     433,   422,   435,   428,   426,   421,     0,     0,   157,   157,
     165,   165,   165,   157,     0,     0,   157,   480,   462,   473,
       0,   464,    81,   475,     0,     0,   466,   468,   157,   485,
       0,     0,   471,     0,     0,   360,     0,   456,    85,    84,
     450,     0,     0,     0,     0,   956,   958,   959,   957,     0,
    1049,     0,  1027,     0,  1030,     0,     0,  1051,  1053,     0,
    1044,   365,     0,   505,   507,   517,   510,   519,   511,   521,
     512,   523,   509,     0,     0,   378,   528,   525,   526,   165,
     553,   565,   566,   567,   569,     0,   582,   570,     0,     0,
       0,     0,     0,     0,   178,   178,   172,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   175,   175,   172,     0,
       0,   172,     0,     0,     0,     0,     0,   624,   648,     0,
       0,     0,   620,     0,     0,     0,     0,   178,   172,     0,
       0,   725,     0,   735,   736,   157,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   792,
       0,     0,     0,     0,     0,     0,   815,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   833,     0,     0,   838,
     839,     0,     0,     0,   858,   860,   859,     0,     0,   863,
       0,     0,   870,   872,   873,   907,     0,     0,     0,     0,
     739,   740,   950,   948,   953,   952,   951,   949,   954,     0,
     744,     0,   944,   943,   748,     0,   947,     0,   749,   750,
     751,   752,   753,     0,     0,     0,     0,     0,   845,     0,
       0,   846,  1072,     0,  1075,  1071,     0,     0,     0,   847,
     880,   848,  1091,  1096,  1093,  1092,  1090,  1097,  1094,  1088,
    1095,  1089,  1098,     0,     0,   853,     0,     0,     0,     0,
     854,  1107,  1111,  1112,     0,  1109,   855,     0,  1113,   856,
     877,     0,     0,     0,   882,   883,   884,  1128,  1142,     0,
       0,  1149,  1145,     0,     0,     0,  1140,  1139,  1153,  1152,
       0,     0,  1169,     0,     0,  1165,     0,  1173,     0,     0,
    1166,     0,  1187,   201,   201,     0,   201,     0,  1213,     0,
    1212,  1204,     0,     0,     0,     0,  1208,     0,     0,     0,
    1211,     0,     0,     0,     0,     0,  1206,  1214,     0,     0,
       0,  1205,   201,   201,   201,     0,   216,   218,   220,     0,
     221,     0,    60,     0,  1255,     0,  1260,   157,     0,  1266,
    1267,     0,  1269,  1270,     0,   166,   167,  1261,  1282,  1283,
       0,   224,     0,   238,     0,     0,     0,     0,   272,     0,
       0,     0,     0,     0,     0,     0,     0,   310,   157,     0,
       0,     0,     0,   157,     0,   330,     0,   329,   395,   394,
       0,     0,     0,   157,     0,   165,   440,   438,   442,   446,
       0,     0,     0,   165,     0,   481,   465,     0,   476,   478,
     168,     0,     0,   359,     0,     0,    60,     0,   455,    83,
      82,     0,     0,   969,     0,     0,     0,     0,     0,     0,
     981,     0,     0,     0,     0,     0,     0,   997,   998,   999,
       0,     0,     0,     0,  1009,     0,  1015,  1016,  1018,  1020,
       0,  1024,  1035,  1036,  1037,  1038,     0,  1040,  1045,  1047,
    1048,  1046,   955,     0,  1026,     0,  1025,   968,     0,     0,
    1031,     0,  1033,     0,  1032,  1054,  1034,  1042,     0,     0,
     377,     0,     0,   580,   581,     0,   578,   574,     0,   178,
     178,   178,   179,   180,   592,   593,   174,   173,     0,   178,
     178,   178,     0,   598,   608,   175,   178,   178,   178,   176,
     177,   178,   178,     0,   178,   178,     0,   175,     0,   621,
       0,     0,     0,   647,     0,   646,     0,     0,   623,     0,
     622,     0,     0,     0,     0,   175,   175,   172,     0,     0,
     172,     0,     0,     0,   178,   178,   721,     0,   178,   178,
     726,     0,   191,   192,   193,   194,   195,   196,     0,    89,
      90,    88,   757,     0,     0,     0,     0,     0,   900,   898,
     893,     0,   903,   887,   904,   890,   902,   896,   885,   899,
     888,   886,   905,   901,     0,     0,   771,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     802,     0,     0,     0,     0,   813,   814,   816,     0,     0,
     821,   820,     0,     0,   181,     0,     0,   157,     0,   829,
       0,     0,     0,     0,   834,   835,   836,     0,     0,     0,
     842,   857,   861,   862,   864,   867,   866,     0,     0,     0,
     871,   908,   910,     0,   909,   742,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1055,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   746,     0,     0,     0,     0,   844,     0,   157,  1068,
    1066,  1064,     0,     0,   157,  1070,   849,     0,     0,     0,
       0,  1106,     0,     0,  1114,   875,   876,     0,   878,  1148,
    1150,  1147,  1146,  1137,     0,     0,     0,  1170,     0,     0,
    1174,  1182,   203,   204,   205,   206,   202,  1197,  1196,     0,
       0,     0,  1199,  1198,   201,     0,     0,     0,  1207,     0,
       0,     0,     0,     0,  1224,     0,  1238,  1237,  1239,     0,
       0,     0,  1210,     0,     0,     0,  1209,  1219,  1218,  1220,
    1216,  1215,  1217,  1241,  1240,  1242,     0,     0,     0,  1257,
    1258,     0,  1273,   157,  1268,  1271,     0,     0,   157,     0,
       0,     0,   235,     0,     0,     0,     0,   276,     0,     0,
       0,   307,   306,     0,     0,   298,   309,   311,     0,   321,
     323,   322,   320,   157,   328,     0,     0,     0,   165,   157,
       0,     0,     0,     0,   460,   474,   483,     0,   477,   170,
     171,   169,   470,     0,   486,     0,     0,   453,   458,    81,
       0,     0,     0,     0,     0,     0,   157,   970,     0,     0,
       0,   975,     0,   157,     0,   982,   983,     0,   985,   986,
     987,     0,     0,     0,   993,     0,  1000,     0,     0,     0,
    1004,  1005,     0,     0,     0,  1010,  1011,     0,     0,  1014,
    1017,  1019,  1021,     0,     0,  1039,  1041,   960,  1050,   961,
       0,     0,  1052,  1043,     0,     0,   533,   534,     0,   575,
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
     178,   723,   724,     0,   756,   157,   758,     0,     0,     0,
       0,     0,     0,     0,   892,   889,   895,   894,   891,   897,
       0,     0,     0,     0,     0,   157,   776,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     793,   794,   795,     0,   799,   796,   798,     0,     0,   804,
     803,   805,     0,     0,     0,     0,     0,     0,   157,   157,
     819,   187,   183,   188,   182,   185,   184,   186,   825,   826,
       0,     0,   828,   830,   157,   157,     0,   837,   840,   157,
     157,   865,   869,   911,   743,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1099,   936,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   937,     0,     0,     0,     0,     0,   754,   755,   157,
     165,  1069,     0,     0,  1073,  1074,     0,     0,   851,     0,
     157,     0,  1108,  1110,   874,     0,  1167,  1168,  1171,  1172,
     201,   201,   201,  1243,  1222,  1221,  1223,  1226,  1225,  1229,
    1228,  1230,  1227,  1235,  1234,  1236,  1232,  1231,  1233,     0,
       0,  1252,     0,  1274,     0,   157,     0,  1277,     0,     0,
     239,     0,   236,     0,     0,     0,   281,     0,     0,     0,
     157,     0,   313,   145,     0,   415,     0,   436,   165,   168,
       0,     0,   449,     0,   487,   488,     0,   452,     0,     0,
       0,     0,     0,   157,   971,   168,   168,   168,   157,   976,
     168,   165,   168,   168,   157,   988,   168,   168,   168,   157,
     994,   168,   168,   157,     0,   168,   157,   168,   168,   157,
     168,   157,  1028,  1029,     0,     0,   532,     0,   594,   599,
     600,   601,     0,   605,   606,   607,   613,   178,   175,   619,
     636,   637,   638,   639,   640,     0,   642,   643,   175,     0,
       0,     0,   175,   175,   172,     0,     0,     0,     0,     0,
       0,   175,   175,   172,     0,     0,     0,     0,     0,     0,
     175,   175,   172,     0,     0,     0,   175,   178,   178,   178,
     178,   178,     0,   178,   178,     0,   175,   175,   178,   178,
     178,   178,   178,     0,   178,   178,     0,   175,   175,   699,
     700,   701,   702,   704,     0,   707,   708,     0,   175,   710,
     711,   712,   713,   714,     0,   716,   717,   175,   629,   175,
       0,   635,     0,     0,   722,     0,   759,   168,     0,     0,
     168,     0,     0,     0,   769,   168,   772,   773,   168,   775,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   797,   800,   801,     0,   168,     0,     0,
       0,   817,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1100,
    1078,     0,  1086,  1087,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   157,     0,     0,    86,
       0,     0,   945,   946,   165,     0,     0,     0,  1076,   850,
     852,   165,   157,  1160,  1201,  1200,  1202,  1244,     0,  1254,
    1284,     0,     0,  1279,  1278,   240,     0,     0,     0,     0,
       0,     0,   299,   168,   416,   420,   437,   439,     0,   447,
     482,   157,     0,     0,     0,     0,     0,     0,   967,   972,
     974,   973,   977,   978,   979,   980,   984,   989,   990,   991,
     992,   995,   996,  1001,   165,   168,  1007,   165,  1008,  1012,
     165,  1022,   165,     0,   157,     0,   531,     0,   604,   615,
     178,   175,   644,   178,   178,   178,   178,   178,     0,   178,
     178,   175,   178,   178,   178,   178,   178,     0,   178,   178,
     175,   178,   178,   178,   178,   178,     0,   178,   178,   175,
     178,   659,   660,   661,   662,   664,   175,   667,   668,     0,
     178,   178,   688,   689,   690,   691,   693,   175,   696,   697,
       0,   178,   703,   175,     0,   709,   175,   718,   631,   175,
     727,   728,   157,   761,     0,   168,   763,     0,   157,     0,
     770,   774,   157,     0,   781,   782,   783,   784,   788,   789,
     785,   786,   787,     0,     0,   168,   808,     0,   157,     0,
       0,   822,   168,     0,     0,   168,   168,     0,   868,     0,
     189,   189,     0,     0,   189,     0,   189,  1055,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1077,     0,     0,
     189,   189,     0,     0,     0,     0,     0,     0,     0,     0,
     938,     0,     0,     0,  1055,    87,     0,   189,     0,  1102,
     157,   157,     0,   165,     0,   222,  1286,  1285,     0,     0,
     244,     0,     0,     0,     0,   314,   448,     0,   333,     0,
     963,     0,   197,     0,  1002,  1003,  1006,  1013,  1023,   370,
       0,   333,     0,   616,   641,   650,   651,   652,   653,   654,
     175,   656,   657,   178,   679,   680,   681,   682,   683,   175,
     685,   686,   178,   670,   671,   672,   673,   674,   175,   676,
     677,   178,   663,   178,   175,   669,   692,   178,   175,   698,
     705,   175,   715,   632,     0,   168,   764,     0,     0,     0,
       0,     0,   790,   791,   806,     0,     0,     0,   818,   823,
       0,   831,   832,   824,   168,     0,   190,  1055,  1055,    86,
       0,  1055,     0,  1055,   912,   157,     0,  1080,     0,  1081,
    1084,  1123,  1085,  1083,  1079,     0,  1055,  1055,    86,     0,
       0,  1055,  1055,     0,     0,  1055,   941,   939,   940,   919,
    1055,  1055,  1102,  1118,     0,  1067,  1065,  1104,     0,     0,
       0,     0,   246,     0,   277,     0,   333,   334,   336,   335,
     381,     0,     0,   198,   200,   199,   965,   966,   333,   383,
       0,   178,   658,   178,   687,   178,   678,   665,   178,   694,
     178,   706,     0,   760,   168,   168,     0,   168,     0,   168,
     168,     0,   168,     0,  1055,   925,   921,  1055,     0,   926,
       0,   920,  1055,     0,  1082,     0,   923,   922,  1055,     0,
       0,   917,   915,  1055,   157,   916,   918,   924,  1118,  1062,
       0,     0,  1103,  1116,  1105,  1159,     0,     0,   282,   300,
     303,   301,     0,     0,   382,   962,   157,   384,   577,   655,
     684,   675,   666,   695,   168,   762,   768,     0,   780,   777,
     807,   812,     0,   827,     0,   930,   914,    86,     0,   928,
    1124,     0,   913,    86,     0,   929,     0,  1063,  1120,  1122,
       0,  1115,     0,     0,     0,     0,     0,     0,   197,     0,
     765,   157,   778,   809,   841,  1055,     0,     0,  1055,     0,
     168,  1121,  1117,   245,     0,     0,     0,     0,     0,   964,
     738,   157,   766,   779,   157,   810,   932,     0,  1055,   931,
       0,     0,   247,   293,     0,   292,     0,   767,   811,    86,
     933,    86,  1055,   291,   290,  1055,  1055,   927,   935,   934
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    54,  1431,   171,   153,   920,  2494,  2495,   432,   433,
     434,   435,   154,   155,   156,   698,   690,    92,   819,   455,
    1227,  1692,  1368,  1381,  1364,  1928,  2597,  1428,  2656,  1597,
     343,   771,   774,   777,   785,    64,   368,   374,   378,   381,
      69,   384,    76,   400,   396,   390,   407,    83,   412,    93,
      99,   417,   419,   421,   489,   873,  1663,   423,   426,   106,
     442,   157,   159,  2650,   175,   177,   218,   915,   955,   478,
     862,   480,   490,   865,   870,   492,   494,   876,   497,   878,
     508,   881,   883,   511,   515,   519,   521,   524,   528,   556,
     552,  1288,   542,   901,   906,   898,  1276,   912,   545,   566,
     569,   574,   579,   587,   946,   948,   950,   952,   592,   957,
     221,   594,  1758,   240,   597,   599,   603,   608,   616,   250,
    1357,   620,   258,   629,  1373,   631,   637,  1002,  1389,   997,
    1799,  1395,  1393,  1801,   998,  1398,  1400,   643,   646,   641,
     260,   268,   270,   685,  1081,  1454,  1070,  1551,  1971,  1084,
    1088,  1079,   941,  1332,  1336,  1344,  1346,  1955,   276,  1098,
    1101,  1109,  2259,  2260,  2261,  1956,  2633,  2634,  1130,  1136,
    1139,  2712,  2713,  2709,  2710,  2758,  2262,  2263,   284,   290,
     298,   713,   708,   303,   308,   310,   723,   730,  1165,  1170,
     780,   768,   316,   320,   737,   326,   744,  1602,   757,   758,
    1201,  1196,  1608,  1186,  1614,  1626,  1622,  1190,   762,   746,
     332,   333,   347,  1214,   350,   356,   796,   799,   793,   358,
     361,   804
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2574
static const yytype_int16 yypact[] =
{
    5137,    29,   419,    63, -2574, -2574,  1014,  -159,   587,   869,
     918,    85,  1269,   113,   267,   108,   573,    11,  5207,    72,
    1714, -2574,    10,   807,   150,  1136,   -51,   176,   194,   599,
    1160,   142,   623,  2897,   112,   650,   307,   427,   599, -2574,
     -15,   103,   474, -2574,   165,   523,   851, -2574,   730, -2574,
      78,   432,   294,   116,   545,    14,  1134,   274,   559,   571,
     122,   584,     4,   494, -2574, -2574, -2574,   830,   833, -2574,
     400,   119,   267,    33,   248,   812, -2574,   601,   833, -2574,
   -2574,    30,   833, -2574, -2574, -2574, -2574,   833, -2574, -2574,
   -2574, -2574, -2574, -2574,   190,   568,   613,   624,   143, -2574,
     833,  1392,   833,   833,  1416,   833, -2574, -2574, -2574,   408,
   -2574, -2574, -2574, -2574,  4708, -2574, -2574, -2574, -2574, -2574,
   -2574,   833, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574,  1254, -2574,   833, -2574,   673, -2574,
   -2574,   267,   267,   267,   267,   267,   267,   267,   267,   267,
     267, -2574, -2574, -2574, -2574, -2574,   575, -2574,   652,  1375,
     596,    20,   436,   567,   -16,  4276,   203,  4760,  2039,   781,
    4708,  3864, -2574,  1100,   -72,   756,   837,   774,   927,   517,
     853,   599,   840, -2574,   804, -2574,   642,   639,   -13, -2574,
     212, -2574,    47, -2574,    57,   805,    26, -2574, -2574,  4830,
   -2574, -2574, -2574,   879,   876,   924, -2574, -2574, -2574, -2574,
      89, -2574, -2574, -2574, -2574,   305, -2574, -2574,  4830,  4342,
   -2574,   974, -2574,   491, -2574,   978,   981,    66, -2574,   833,
   -2574,   992,    37,  1004,   385,   900,  1012,    17, -2574, -2574,
   -2574,  1022,  1027,   267,   267,   833,   833, -2574, -2574,  1033,
   -2574, -2574, -2574, -2574, -2574, -2574,   956,   832, -2574,  1037,
      -1,   833,  4830,   833, -2574,   105, -2574, -2574, -2574, -2574,
   -2574,   833,   124,   267,  3365,   833,  1254,   833, -2574,  1048,
   -2574,  5245, -2574, -2574,   875,  1063,  1066,   833, -2574,  1073,
   -2574, -2574,   -50,  1045,  4830,  1079, -2574,  1206,   833,   989,
   -2574,   358,   967,  1648,   394,  1097, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574,  1102, -2574,   513,    39,   178,   201,   497,
     833,   833,   158, -2574,   833,   839,  1104, -2574,   833,   833,
   -2574,    23,    13,    59,  1107,  1254, -2574, -2574, -2574,  1061,
     833, -2574, -2574, -2574, -2574, -2574, -2574,   833, -2574,  1116,
    1124, -2574,   833,  1130, -2574, -2574, -2574, -2574, -2574, -2574,
     833, -2574, -2574,   833, -2574, -2574,   707,   707, -2574,  1139,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574,   937,   833,   833,  1175,  1191,  1193, -2574, -2574,   833,
     833,   833, -2574,   833, -2574,  1210, -2574, -2574, -2574, -2574,
     861, -2574,  1220, -2574,  4830,  1223, -2574,   833, -2574, -2574,
   -2574,   833,  1227,  1234,  1234,  4830,   833,   833,   833,   833,
     833,   833, -2574,   833,  4708,  1392,   833,   833, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574,  1392,   833, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,  1250, -2574,
     983,     0, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574,   322, -2574, -2574, -2574,  1093, -2574,    -9,   405,   405,
   -2574, -2574, -2574,  1268, -2574,  1273, -2574, -2574,   -60, -2574,
    1111, -2574, -2574, -2574,  1113, -2574, -2574,  1254, -2574,   833,
     833, -2574,  4830,  4830,  1254, -2574, -2574,  1254, -2574, -2574,
   -2574, -2574,  1254, -2574, -2574,  4830,  1254,   833, -2574, -2574,
    4830, -2574,  1285,   492,  1095,     8, -2574, -2574,  1098,  4830,
      21, -2574, -2574, -2574, -2574, -2574, -2574,  1302,  1304,  1306,
   -2574,  1112, -2574,   376, -2574,   833, -2574, -2574,  1513, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
      57, -2574, -2574, -2574, -2574, -2574, -2574,  1122,  1125, -2574,
   -2574,  1257,  1260,  1263, -2574, -2574,  1089, -2574,   833,  1326,
    1118,  5245, -2574,  1254, -2574, -2574,  1334, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574,  4830,  4830,  4830,  4830, -2574, -2574, -2574,  1341,   267,
   -2574, -2574,  1347,  1352,  1157,   833, -2574,   527,  1276, -2574,
    1355, -2574,   321,  1281,  3673,    27,  1365, -2574,  1370, -2574,
    1384, -2574,    73, -2574,  1387,  1394, -2574,  1393, -2574, -2574,
   -2574,   833, -2574,  5245,  4670,  1602,   472,  1398,   553,  1307,
   -2574, -2574, -2574,    92,   603,  1400,   267,  1403,   125,   833,
     439,   674,   593,  4830,   267,  1577,   874,    80,    64,   197,
      40, -2574,  1402,  1407,  1406, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,   833,
   -2574, -2574, -2574, -2574,   833,   833,   833,   833, -2574, -2574,
     833,  1254,   833, -2574,   833,  1392,   833,  1429,  1254, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574,  1430,    38,   453,
   -2574, -2574, -2574,  1441, -2574, -2574, -2574, -2574,  1349, -2574,
    1444,  1446,  1366,  1450, -2574,  1455, -2574,  1457,  1378,  1470,
     401,   529,   586,    43,   588,  1474,   627, -2574, -2574,  1482,
    1483,  1485, -2574, -2574,  1490, -2574, -2574, -2574, -2574,  1492,
   -2574, -2574,  1502, -2574, -2574,  1503, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574,   833,   833, -2574,   833,   885,   833,   833,
   -2574,  5245,  1499, -2574,  1076,  1505, -2574,  1091,  1506, -2574,
   -2574,   -46,   833,   833, -2574,  1501, -2574, -2574,  1511,  1369,
     833,  1508,   160, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574,  1517,  1518,   833,
     833,   833,  1519,   267,  1528,  1530,  1254,  4830, -2574, -2574,
   -2574, -2574, -2574,  1254, -2574, -2574,   833,   833,   833,  4830,
     833,  1392,   833, -2574,   833, -2574, -2574, -2574, -2574, -2574,
    1542,  1543, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574,   203, -2574,   833, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574,  4830,   833,  1254,  1254,
     -46,   -46,   -46,  1254,  1392,   833,  1254, -2574, -2574, -2574,
     833, -2574,   376,  1386,  1548,  1531, -2574, -2574,  1254, -2574,
    1396,  1397, -2574,  1554,  1556, -2574,  1558,  1110,  1529,  1534,
   -2574,   833,  4675,   446,   656, -2574, -2574, -2574, -2574,   833,
     577,  1069, -2574,  1301, -2574,  1577,  1308,   591,  1274,    75,
   -2574, -2574,   833, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574,   833,  1570, -2574, -2574, -2574, -2574,   -46,
   -2574, -2574, -2574, -2574, -2574,  4788, -2574, -2574,  1572,  1573,
     833,  1576,  1579,  1613,   -22,   -22,   -32,  1619,  1620,  1624,
    1625,  1298,  1353,  1626,  1632,  1634,    62,    62,   -32,  1636,
    1637,   -32,  1644,  1647,  5209,  1649,  1650, -2574, -2574,  1653,
    1654,   600, -2574,  1638,  1657,  1658,  1659,   -22,   -32,  1663,
    1665, -2574,  1669, -2574, -2574,  1254,  1135,  1498,  1417,  1431,
    1436,  1569,   682,  1442,  1681,   372,  1546,  1583,   889,   923,
    1651,  1447,  1451,  1591,   267,  1694,  1489,    70,    55,   357,
    1452,  4830,  1577,  1662,   441,  1459,  1493,  1703,    31, -2574,
   -2574,   240,  1709,  1711, -2574, -2574, -2574,   267,  1712,  1500,
      58,  1577,  1504, -2574, -2574, -2574,   267,  1715,  1716,   833,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,    24,
   -2574,  2547, -2574, -2574, -2574,   833, -2574,   833, -2574, -2574,
   -2574, -2574, -2574,   833,   833,   833,   553,  4830, -2574,  1718,
    1199, -2574, -2574,   833, -2574, -2574,   833,  4830,   833, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574,   267,   833, -2574,   833,   553,  1719,  1724,
   -2574, -2574, -2574, -2574,   833,   833, -2574,   267, -2574, -2574,
   -2574,   174,  1728,  1731, -2574, -2574, -2574, -2574, -2574,   833,
     833, -2574, -2574,  1392,   833,   833, -2574, -2574, -2574, -2574,
    1717,   833, -2574,   833,  1627, -2574,   833, -2574,   833,  1628,
   -2574,  1733, -2574,   783,   783,   777,   783,  1736, -2574,   795,
   -2574, -2574,  1737,  1738,   818,  1740, -2574,  1744,  1745,  1741,
   -2574,   844,   846,  1751,  1754,  1756, -2574, -2574,  1757,  1758,
    1760, -2574,   783,   783,   783,   833, -2574, -2574, -2574,   833,
   -2574,   833,   563,  4830, -2574,   833, -2574,  1254,  5245, -2574,
   -2574,  1762, -2574, -2574,  1763, -2574, -2574, -2574, -2574,  1750,
    3365, -2574,   833,  1761,   833,   833,   833,  1330, -2574,  1765,
    1769,   833,   833,   152,  1770,   267,   267, -2574,  1254,   833,
    1772,  1777,  1778,  1254,  4830, -2574,   833, -2574, -2574, -2574,
     833,   833,   833,  1254,  4830,   -46, -2574, -2574, -2574, -2574,
    1392,   833,  1779,   -46,   833,   510, -2574,  1780, -2574, -2574,
    1197,  3927,   833, -2574,   833,  1785,  1774,   833, -2574, -2574,
   -2574,  1787,  1137,  4708,  1520,  1539,  1545,   196,  4830,  1549,
   -2574,   386,  1655,   205,  1550,  1551,   214, -2574, -2574, -2574,
     512,  1629,   771,   -61,  1577,   353, -2574,  1795,  1552, -2574,
     645, -2574, -2574, -2574, -2574, -2574,  1577,  1586, -2574, -2574,
   -2574, -2574, -2574,   833, -2574,   833, -2574, -2574,   833,   833,
   -2574,   833, -2574,   833, -2574, -2574, -2574, -2574,  1609,   833,
   -2574,   833,   110, -2574, -2574,  1800,  1808, -2574,   833,   -22,
     -22,   -22, -2574, -2574, -2574, -2574, -2574, -2574,  1809,   -22,
     -22,   -22,   548, -2574, -2574,    62,   -22,   -22,   -22, -2574,
   -2574,   -22,   -22,  1813,   -22,   -22,  1814,    62,   681, -2574,
    1815,  1816,  1818, -2574,   665, -2574,   994,  1105, -2574,  1040,
   -2574,  1540,  1819,  1820,  1826,    62,    62,   -32,  1831,  1832,
     -32,  1833,  1836,  1839,   -22,   -22, -2574,  1843,   -22,   -22,
   -2574,  1844, -2574, -2574, -2574, -2574, -2574, -2574,   267, -2574,
   -2574, -2574,  4708,  1179,   833,  1422,  1409,   399, -2574, -2574,
   -2574,   813, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574,  1845,   833, -2574,   267,  1847,   833,
    4830,   267,  1435,  1592,  1603,   223,   233,  1608,   237,  1541,
    1547,  1851,  1852,  1854,   682,  1858,  1860,  1863,  1555,  1560,
    1236,  1866,   833,  1478,  1467, -2574, -2574, -2574,   267,  4830,
   -2574, -2574,  4830,   833,   -11,  1868,   833,  1254,   267, -2574,
    1872,  4830,  4830,   833, -2574, -2574, -2574,   267,   267,  4830,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574,  4830,   833,   267,
   -2574, -2574, -2574,   833, -2574, -2574,  1873,   833,  1667,   208,
     833,  1668,   833,   217,   833, -2574,   833,  1672,  1673,   833,
     833,   833,   833,   833,   833,   833,   833,    28,   833,   833,
    1674, -2574,   833,   833,   833,   833, -2574,  4830,  1254,  1874,
    1877,  1878,   833,   833,  1254, -2574,   833,   833,   833,  4830,
     553, -2574,   833,   833, -2574, -2574, -2574,  1879, -2574, -2574,
   -2574, -2574, -2574, -2574,  1881,   833,   833, -2574,   833,   833,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,  1891,
    1895,  1902, -2574, -2574,   783,  1907,  1908,  1903, -2574,  1910,
    1911,  1912,  1913,  1916, -2574,  1917, -2574, -2574, -2574,  1919,
    1920,  1918, -2574,  1925,  1927,  1930, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574,   833,   833,   833, -2574,
   -2574,   833, -2574,  1254, -2574, -2574,  3365,   833,  1254,   833,
     833,   833, -2574,   833,   833,  1931,   833, -2574,  1933,   833,
     833, -2574, -2574,  1934,  4830, -2574, -2574, -2574,   833, -2574,
   -2574, -2574, -2574,  1254, -2574,  1159,   833,  1159,   -46,  1254,
    4830,   833,   833,  1936, -2574, -2574, -2574,   833, -2574, -2574,
   -2574, -2574, -2574,  4830, -2574,  4830,   833, -2574, -2574,   376,
    1947,  1948,  1961,  1963,  1967,  4830,  1254, -2574,  4830,  4830,
    4830,  4708,  4830,  1254,  4830, -2574, -2574,  4830, -2574, -2574,
    4708,  4830,  4830,  4830,  4708,  4830, -2574,  4830,  4830,   833,
   -2574, -2574,  4830,  4830,  4830, -2574, -2574,  4830,  4830, -2574,
   -2574, -2574, -2574,  4830,  4830, -2574, -2574, -2574, -2574, -2574,
     833,   833, -2574, -2574,  1969,   833, -2574, -2574,  1971, -2574,
   -2574,   833, -2574, -2574, -2574,   -22, -2574, -2574, -2574,  1973,
    1974,  1975, -2574, -2574,   -32,  1970,  1977,  1980,   -22, -2574,
   -2574, -2574, -2574, -2574,    62, -2574, -2574,  1978,   -22,  1981,
    1982,  1983,    62,    62,   -32,  1986,  1987,  1988,  1046, -2574,
    1186, -2574,  1423,  1656,  1990,  1991,  1992,    62,    62,   -32,
    1994,  1995,   -32,  1996,  1713,  1997,  1998,  2001,    62,    62,
     -32,  2003,  2004,   -32,  2005,  1730,  2006,  2007,  2008,    62,
      62,   -32,  2011,  2014,   -32,  2015,  2017,  2019,  2022,    62,
      62,   -32,  2025,  2026,  2027,    62, -2574, -2574, -2574, -2574,
   -2574,  2032, -2574, -2574,  2033,    62,  2034,  2035, -2574, -2574,
     -22, -2574, -2574,  2037, -2574,  1254, -2574,  4830,   833,   833,
    4830,   833,  2040,  1498, -2574, -2574, -2574, -2574, -2574, -2574,
    2041,  4830,   267,  2044,  4830,  1254, -2574,  2046,  1498,   833,
     833,   833,   833,   833,   833,   833,   833,   833,  2048,  2050,
   -2574, -2574, -2574,  2051, -2574, -2574, -2574,  2054,  2055, -2574,
   -2574, -2574,   833,  4830,   833,  2056,  1498,   267,  1254,  1254,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
     833,  1392, -2574, -2574,  1254,  1254,   833, -2574, -2574,  1254,
    1254, -2574, -2574, -2574, -2574,   833,   833,   833,   833,   833,
     833,   833,   833,   833,   833,  1722, -2574,   833,   833,   833,
     833,   833,   833,   833,   833,   833,   833,   833,  3570,  2057,
     833, -2574,   833,   833,   833,  2060,  2061, -2574, -2574,  1254,
     -46, -2574,  2062,  2063, -2574, -2574,  1392,   833, -2574,  2065,
    1254,  4830, -2574, -2574, -2574,  2071, -2574, -2574, -2574, -2574,
     783,   783,   783, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,  1498,
     833, -2574,   833, -2574,   833,  1254,   833, -2574,  1392,   833,
   -2574,   833, -2574,  1905,  2073,  2074, -2574,   833,   833,  2076,
    1254,  4830, -2574, -2574,   833, -2574,   833, -2574,   -46,  1197,
     833,  2077, -2574,   833, -2574, -2574,  4708, -2574,  2078,  2079,
    2081,  2082,  2083,  1254, -2574,  1197,  1197,  1197,  1254, -2574,
    1197,   -46,  1197,  1197,  1254, -2574,  1197,  1197,  1197,  1254,
   -2574,  1197,  1197,  1254,  4830,  1197,  1254,  1197,  1197,  1254,
    1197,  1254, -2574, -2574,  2085,  4708,  2086,   833, -2574, -2574,
   -2574, -2574,  2088, -2574, -2574, -2574, -2574,   -22,    62, -2574,
   -2574, -2574, -2574, -2574, -2574,  2092, -2574, -2574,    62,  2093,
    2094,  2096,    62,    62,   -32,  2098,  2099,  2101,  2102,  2103,
    2104,    62,    62,   -32,  2100,  2106,  2108,  2109,  2110,  2111,
      62,    62,   -32,  2107,  2113,  2114,    62,   -22,   -22,   -22,
     -22,   -22,  2116,   -22,   -22,  2117,    62,    62,   -22,   -22,
     -22,   -22,   -22,  2118,   -22,   -22,  2119,    62,    62, -2574,
   -2574, -2574, -2574, -2574,  2122, -2574, -2574,  2123,    62, -2574,
   -2574, -2574, -2574, -2574,  2124, -2574, -2574,    62, -2574,    62,
    2128, -2574,  2129,  2130, -2574,  5245, -2574,  1197,  2131,  4830,
    1197,   833,  4830,  2132, -2574,  1197, -2574, -2574,  1197, -2574,
    4830,  2133,   833,   833,   833,   833,   833,   833,   833,   833,
     833,   833,   833, -2574, -2574, -2574,  4830,  1197,   833,  4830,
    2135, -2574,  1392,  1392,  4830,  1392,  1392,  4830,  4830,  1392,
    1392,   833,   833,   833,   833,   833,   833,  1498,   833,   833,
     833,  1671,  1695,  1700,  1706,  1721,  1782,  1784,  1786,  1722,
   -2574,  1788, -2574, -2574,  1498,   833,   833,   833,   833,  1498,
     833,   833,   833,   833,   833,   833,  1254,   833,  1806,  1498,
     833,   833, -2574, -2574,   -46,   267,  4830,  4830, -2574, -2574,
   -2574,   -46,  1254,  2136, -2574, -2574, -2574, -2574,   833, -2574,
   -2574,  1392,   833, -2574, -2574, -2574,  1350,  2140,  2142,   833,
    2145,  1159, -2574,  1197, -2574, -2574, -2574, -2574,  2146, -2574,
   -2574,  1254,  2149,  2150,  2152,  2153,  4830,  2154, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574,   -46,  1197, -2574,   -46, -2574, -2574,
     -46, -2574,   -46,  2155,  1254,  2157, -2574,   833, -2574, -2574,
     -22,    62, -2574,   -22,   -22,   -22,   -22,   -22,  2158,   -22,
     -22,    62,   -22,   -22,   -22,   -22,   -22,  2159,   -22,   -22,
      62,   -22,   -22,   -22,   -22,   -22,  2160,   -22,   -22,    62,
     -22, -2574, -2574, -2574, -2574, -2574,    62, -2574, -2574,  2161,
     -22,   -22, -2574, -2574, -2574, -2574, -2574,    62, -2574, -2574,
    2162,   -22, -2574,    62,  2163, -2574,    62, -2574, -2574,    62,
   -2574, -2574,  1254, -2574,  4830,  1197, -2574,  2165,  1254,   833,
   -2574, -2574,  1254,   833, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574,   833,   833,  1197, -2574,  2166,  1254,   833,
    1392, -2574,  1197,   833,  1392,  1197,  1197,  4830, -2574,   833,
    2167,  2167,   833,   833,  2167,  1498,  2167, -2574,  4830,   682,
    2168,  2170,  2171,  2173,  2174,  2176,  2172, -2574,   267,  1498,
    2167,  2167,   833,   833,  1498,   833,   833,   833,   833,   833,
   -2574,  1392,   833,  2177, -2574, -2574,   833,  2167,   267,   109,
    1254,  1254,   267,   -46,  2179, -2574, -2574, -2574,  2180,   833,
   -2574,  2181,  2183,  2184,   833, -2574, -2574,  2185,   230,  4830,
   -2574,  2186,   271,  4830, -2574, -2574, -2574, -2574, -2574, -2574,
    2188,   230,   833, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
      62, -2574, -2574,   -22, -2574, -2574, -2574, -2574, -2574,    62,
   -2574, -2574,   -22, -2574, -2574, -2574, -2574, -2574,    62, -2574,
   -2574,   -22, -2574,   -22,    62, -2574, -2574,   -22,    62, -2574,
   -2574,    62, -2574, -2574,   833,  1197, -2574,  4830,  4830,   833,
    4830,   833, -2574, -2574, -2574,  4830,  4830,   833, -2574, -2574,
    4830, -2574, -2574, -2574,  1197,  2189, -2574, -2574, -2574,  1498,
     833, -2574,  2190, -2574, -2574,  1254,  2191, -2574,  2193, -2574,
   -2574, -2574, -2574, -2574, -2574,  2197, -2574, -2574,  1498,   833,
    2198, -2574, -2574,   833,  4830, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574,   109,  1798,  1577, -2574, -2574, -2574,   267,  2199,
    2200,  2201, -2574,  2203, -2574,   139,   230, -2574, -2574, -2574,
   -2574,  2204,  4830, -2574, -2574, -2574, -2574, -2574,   230, -2574,
    2216,   -22, -2574,   -22, -2574,   -22, -2574, -2574,   -22, -2574,
     -22, -2574,  5245, -2574,  1197,  1197,   833,  1197,  2217,  1197,
    1197,   833,  1197,   833, -2574, -2574, -2574, -2574,  2218, -2574,
     833, -2574, -2574,  2219, -2574,   833, -2574, -2574, -2574,  2222,
     833, -2574, -2574, -2574,  1254, -2574, -2574, -2574,  1798, -2574,
    1805,  1790,  1577, -2574, -2574, -2574,  2223,  2226, -2574, -2574,
   -2574, -2574,  1007,  1007, -2574, -2574,  1254, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574,  1197, -2574, -2574,  2240, -2574,  4708,
   -2574, -2574,  2244, -2574,  1498, -2574, -2574,  1498,   833, -2574,
   -2574,   833, -2574,  1498,   833, -2574,  4830, -2574,  1805, -2574,
     267, -2574,  2245,  2248,   833,   833,   833,   833,   271,  2249,
    4708,  1254, -2574,  4708, -2574, -2574,   833,  2251, -2574,   833,
    1197, -2574, -2574, -2574,  2252,  2253,   833,  2254,   833, -2574,
   -2574,  1254, -2574, -2574,  1254, -2574, -2574,  2256, -2574, -2574,
    2269,  2270, -2574, -2574,  2271, -2574,  2274, -2574, -2574,  1498,
   -2574,  1498, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2574, -2574,    -3, -2574,  1006,  -895, -1555,  -973,  1725, -2574,
     849,  -406,  1886,   -41,    82, -2574, -2574, -1666,  1803,  1797,
    -886,   867,  -839,   725,  1670, -2574,  -766, -2574,  -596, -1148,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574,  -461,  -488, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2023, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -1472, -2574, -2574, -2574, -2574,
   -2574,  -650, -2574, -2574, -2574, -2574, -2574, -2574,    49, -2574,
   -2574, -2574, -2574,   -64,  -659, -1957,  -428, -2574, -2574, -2574,
   -2574, -2574,  -489,  -481, -2574, -2574, -2573, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,  1532,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1257
static const yytype_int16 yytable[] =
{
      68,   874,  1903,   692,  1267,  1268,  1269,  1275,   105,  2044,
     355,  2046,   903,   174,   107,  1921,  1123,   794,   107,   363,
    1097,  1100,   644,    65,    66,   909,  1598,   791,  1603,  1525,
     295,    65,    66,  1968,   410,   376,  1506,  1922,   319,   853,
    1923,   590,   627,   107,  1432,  1140,   313,   349,   571,   856,
     360,  1924,  1225,   367,  1633,  1634,  1635,   373,    65,    66,
     380,    65,    66,   797,   383,   385,    65,    66,   395,   867,
     623,   402,   406,  1352,  1925,   409,   241,  1161,  1379,   413,
    1131,    65,    66,   580,   414,  1127,  1005,   312,    65,    66,
    1490,  1347,  1926,  1515,   581,    55,  1488,   427,   431,   436,
     437,   441,   443,   728,   860,   769,    65,    66,  1082, -1101,
     702,  1732,   107,   110,   999,   297,   107,   299,   447,    65,
      66,   582,    65,    66,   100,    65,    66,    65,    66,  1756,
    1191,   112,   600,    77,  1006,   112,  1366,  2759,  1362,   879,
    1141,  1092,    65,    66,   101,   158,  1142,   543,   424,  1383,
    1162,   161,  1386,   456,   162,   219,   910,   495,   364,   176,
     112,    65,    66,   705,  1236,   251,   496,  1363,   868,  1417,
    1733,  1237,   220,   425,  1348,   398,   601,   904,   488,  1575,
     107,   261,   107,   509,   163,  2781,   259,  1000,   624,  1132,
    1576,  1491,   164,   861,  1516,   415,   446,   102,  1661,   269,
     583,   107,   693,  1192,   880,   107,    65,    66,   285,   694,
     695,    65,    66,   481,   399,   327,  1711,   729,   115,   482,
      65,    66,   115,  1226,  1380,  1720,   116,   117,   591,   112,
     116,   117,   575,   112,  1724,  1133,   706,  1734,  1163,   584,
     544,  1367,   262,  1891,   772,   696,   625,   115,   869,   703,
     558,    65,    66,  1893,   165,   116,   117,  1896,   483,   110,
     718,  2647,   651,   652,   263,   328,  1508,   775,   510,  1007,
     518,   107,   523,   527,   329,   314,  1340,   572,   699,   118,
     701,   555,  1134,   411,   484,   103,  1507,   602,   704,   707,
     628,   710,   714,   377,   716,   645,   588,   112,   315,   112,
     573,  1489,  2653,   317,   726,   330,   166,   795,   585,  1156,
    1164,   309,   391,   120,   736,   738,   115,   120,   112,   264,
     115,   911,   112,   792,   116,   117,   982,   905,   116,   117,
     485,   167,  2719,   168,   983,   984,  1526,   781,   782,   784,
    1969,   786,   120,  1093,  1008,   789,   790,  1128,  1927,  1143,
     576,  1757,   697,   798,  1009,  1492,   803,   805,  1517,  1083,
     586,   169,   150,    67,   806,  1135,   150,   151,   152,   809,
     811,   151,   152,  1129,   486,   487,   712,   812,   348,  1680,
     813,   104,   985,  1498,   115,  1010,   115,  1684,   112,   783,
     632,   150,   116,   117,   116,   117,   151,   152,  1457,   823,
     824, -1101,  1519,   318,   386,   115,   828,   829,   830,   115,
     831,   120,  1715,   116,   117,   120,   359,   116,   117,   740,
    2648,   300,   372,   416,   838,   118,  1094,   170,   839,   392,
      56,   301,  1662,   844,   845,   846,   847,   848,   849,  1947,
     850,  1712,   431,   854,   855,  1255,  1557,   351,  1952,  2720,
    1721,   401,   431,   857,   352,   759,  2003,   577,   604,  1725,
     150,  2654,   747,  1873,   150,   151,   152,   331,  1892,   151,
     152,  1509,    57,   393,   394,   115,  1065,  1569,  1894,   120,
     741,   120,  1897,   116,   117,   265,  1736,   578,  1271,  1888,
      58,  1137,  1166,   486,  2721,   618,   899,    65,    66,   321,
     120,  1066,  1072,   633,   120,  1874,   886,   887,  2659,   778,
    2604,  1916,  1322,   918,  1686,   311,   760,   986,   987,  2649,
      59,   863,   553,   749,   895,  1737,   852,   334,   150,   605,
     150,   357,   266,   151,   152,   151,   152,  2629,  1726,    60,
     971,   972,  1458,    61,  1073,   362,   765,   871,   110,   150,
     958,   369,   921,   150,   151,   152,  1716,    62,   151,   152,
    2655,  1769,  1770, -1256,   370,  1167,   110,  1639,  1851,  1323,
     120,  1854,   606,   110,  1500,   371,    65,    66,  1324,   864,
      65,    66,   554,   634,  1738,   953,   872,   322,   973,   375,
    1182,    78,   988,   996,    65,    66,    65,    66,   418,   387,
    1875,   323,   989,   990,  1325,  1401,   408,   991,   444,  1771,
     607,   742,  1015,  1402,  1403,   900,  1072,  1459,   420,   150,
     379,   766,   970,  2724,   151,   152,    79,  1494,  1102,   422,
     919,  1717,  1103,   992,  1495,  2727,  1067,   173,   635,   743,
    2685,  2686,  1085,  1739,  2689,  2514,  2691,  1187,  1014,  1193,
     388,  1183,   942,  1168,  1876,  1735,   271,   389,  1073,  2696,
    2697,  1404,  1460,   636,  2701,  2702,  1095,  1745,  2705,  1108,
    1803,  1742,  1501,  2706,  2707,   761,  1718,   457,  1804,  1805,
     353,  1074,   755,   354,  1727,  1328,  1326,   324,  1198,  1184,
     619,  1068,   779,   468,  1789,  1790,  1147,  1075,  1076,    80,
     325,  1148,  1149,  1150,  1151,  1104,  1096,  1152,  1188,  1154,
    1194,  1155,   431,  1157,   118,  1086,   479,  1069,   469,    63,
     304,  1437,   767,   974,   975,  1169,  1806,  2745,   491,  1105,
    2746,  1502,   118,   272,   344,  2749,   814,  1072,  1327,   118,
     493,  2752,  1791,  1728,  1772,  1773,  2755,  1581,  1438,  1199,
    1217,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,  1073,
    1209,  1210,  1439,  1211,  1213,  1215,  1216,    81,  1440,  1077,
    1078,  1334,  2047,  1106,  1441,  1074,  1405,  1406,   976,  1228,
    1229,  1099,   815,  1087,  2057,  1342,  1233,  1234,   977,   978,
    1185,  1075,  1076,   520,  1442,    65,    66,  1743,  2796,  1774,
    1329,  2799,   546,   305,  1592,  1593,  1240,  1241,  1242,  1775,
    1776,   273,   286,    65,    66,  1443,    65,    66,  1599,   979,
      82,  2810,   547,  1250,  1251,  1252,   274,  1254,   431,  1256,
    1444,  1257,  2294,  2295,  2296,  2817,  1605,   345,  2818,  2819,
    1777,  1807,  1808,   548,  1681,   833,   834,  1189,   557,  1195,
     567,  1407,  1260,   816,  1262,  1330,  1744,  1792,  1793,  1611,
     568,  1408,  1409,  1445,  1264,   559,  1410,   335,    65,  1212,
     403,   431,  1272,  1107,   589,   243,    84,  1274,   336,  1600,
    2203,  1331,   306,  1077,  1078,  1619,   560,  1623,  1200,   275,
    1463,   307,  1411,  1124,  1287,  2211,  1074,  1606,  1291,  1877,
    1991,   561,  1446,   686,   244,   337,  1333,  1335,  1338,   719,
     570,   549,  1075,  1076,  1343,  2102,  1809,  1447,  1464,  1349,
    1612,  1465,   346,  2230,  1471,   595,  1810,  1811,   596,  1448,
    1350,  1812,  1794,  1392,   598,  2115,   382,  1261,  1594,  1595,
     654,   655,  1795,  1796,   817,   720,  1620,  1358,  1624,   818,
    2152,  1466,  1472,  2155,   287,  1473,  1449,  1813,  1474,   617,
     288,  2163,   289,   621,  2166,   622,  1125,  1596,  1450,   404,
    1451,  1452,  2174,  1797,   638,  2177,   626,  2606,   245,  1814,
    1467,    94,  2184,  1468,   338,  1475,   687,  1815,  1816,   630,
      65,    66,   639,   246,  1878,   550,   656,   642,    95,   721,
     160,   172,   657,    85,  1077,  1078,   647,   562,   242,   658,
    1453,   659,   648,   267,  1476,  1493,   660,  1477,   653,   661,
     302,  1730,   691,   339,  2687,   662,  2297,    86,  1731,   551,
     731,    87,   717,  1836,  1837,  1817,   663,  1518,  1601,  2119,
    2120,   365,   664,  2698,    65,    66,  1524,   724,  1879,   405,
     725,   665,    65,    66,  1126,   247,  1607,   727,   397,   666,
    1219,  1220,  1552,   733,  1553,  1337,   563,   739,   667,   745,
    1554,  1555,  1556,   640,  2285,  1222,  1223,   688,    96,  1613,
    1562,  1838,   763,  1563,    88,  1565,   764,  2121,   788,   668,
    1825,   800,   340,    65,  1286,   689,   248,   787,  1826,  1827,
     807,  1567,  1469,  1568,   669,  1621,   249,  1625,   722,   808,
     564,  1572,  1573,    65,    66,   670,   671,    65,    66,   565,
     822,   810,    97,   821,   529,    89,  1579,  1580,   341,   871,
     431,  1582,  1583,    90,    91,  1470,  1478,   672,  1585,   530,
    1586,   252,  2316,  1588,   342,  1589,  1828,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,  1643,    98,   825,
     673,   531,    65,    66,  1867,  2334,    84,   802,   872,  1479,
    1818,  1819,  2775,   366,   674,   826,   675,   827,  2778,  2128,
    2129,   532,  1636,  1560,  1561,   277,  1637,    70,  1638,    65,
      66,   676,  1641,    71,   832,  1480,   677,  1422,   533,  1700,
    1689,  1690,   534,   678,   278,   835,   279,  1647,   837,  1650,
     679,  1652,  1653,  1654,  1656,   428,  1839,  1840,  1659,  1660,
    1909,  1910,  2122,  2123,   430,   734,  1668,  2130,   680,   253,
     535,   536,    72,  1674,  2815,   858,  2816,  1675,  1676,  1677,
     859,   681,   682,   254,   683,  1820,   866,   431,  1682,   649,
     650,  1685,   875,   107,  2465,  1821,  1822,   877,    73,  1695,
    1823,  1696,   841,   842,  1698,  2368,   884,   108,   448,   897,
    1423,  2479,  1701,   882,  2377,  1691,  2484,   902,   255,   709,
     907,  1829,  1830,  2386,   684,   537,  1824,   913,   109,   914,
     916,  1841,  1649,    85,   917,   538,   943,  2124,   735,   944,
     951,  1842,  1843,   945,    74,   110,   947,  2125,  2126,   949,
    1747,   954,  1748,    65,    66,  1749,  1750,    86,  1751,   960,
    1752,  2043,   770,   773,   776,   965,  1754,   280,  1755,   256,
     956,   967,  1844,    65,    66,  1761,   968,  1687,  2127,   969,
     981,   449,   257,   980,  1424,  1425,  1702,  1703,   993,    75,
    1001,   111,    65,    66,  1003,  1707,  1831,   539,   540,  1426,
    1232,  1704,  2131,  2132,   450,   451,  1832,  1833,  1004,  1655,
     112,  1834,  1011,   452,    88,    65,    66,  1013,  2498,  1012,
     428,   429,   430,  1071,  1089,  2502,   281,  1080,  1091,  2508,
    1146,   453,    65,    66,  1872,  1429,  1430,  1835,  1144,    65,
      66,   454,  1427,  1145,  1705,    65,    66,  1870,   470,   113,
    1868,  1869,  1871,  1158,  1160,    89,  2137,  2138,    65,    66,
    1887,  1429,  1430,    90,    91,  1171,   471,  1172,   541,  1173,
     282,  1174,  1881,  1175,  1176,   438,  1884,  2133,  2524,   283,
    1177,  2526,  1178,   472,  2527,  1179,  2528,  2134,  2135,   114,
      65,    66,  1915,  1429,  1430,  1180,   473,   115,  1197,  1912,
    1914,    65,    66,  1913,  2139,   116,   117,  1202,  1203,  1204,
    1920,   118,  2602,  1930,  1205,   474,   119,  1206,  2136,   475,
    1936,    65,    66,  1218,  1429,  1430,  2615,  1207,  1208,  1221,
    1224,  2620,  1230,   476,  1866,  1941,  1231,   922,   923,  1235,
    1943,  1238,  1239,  1243,  1945,  2235,  1948,  1949,   439,  1951,
    1953,  1954,  1245,  1957,  1246,  1279,  1960,  1961,  1962,  1963,
    1964,  1965,  1966,  1967,  1970,  1972,  1973,  1258,  1259,  1975,
    1976,  1977,  1978,  1278,   477,  1277,  1281,  1282,  1283,  1984,
    1985,  1284,  1285,  1987,  1988,  1989,  1289,  1339,  1345,  1992,
    1993,  1290,   120,   924,  1341,  1351,  1355,  1374,  1356,   925,
    2288,  1359,  1996,  1997,  1360,  1998,  1999,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   440,  2638,  1361,  2140,
    2141,   150,  2303,  1369,  1370,   966,   151,   152,   926,  1371,
    1372,  1376,  1375,  2019,  2020,  2021,   927,  1377,  2022,  1378,
    1384,  1385,  1412,  2024,  2027,   928,  2029,  2030,  2031,  1387,
    2032,  2033,  1388,  2035,  1394,  1396,  2037,  2038,  1397,  1399,
     929,  1413,  1433,  1414,  1415,  2041,   930,  1418,  1053,  1112,
    1419,   931,  1090,  2045,  1420,  1436,  1434,  1113,  2050,  2051,
    1111,  1435,  1054,  1114,  2053,  1138,  1456,  1455,  1461,  1462,
    1481,  1055,  1482,  2056,  2142,  2598,  1483,  1484,  2601,  1486,
    2603,  1499,  1056,  1496,  2143,  2144,  1115,  1487,  1505,   747,
    1503,  1504,  1382,  1510,  2616,  2617,  1511,  1513,  1514,  1522,
    1523,  1584,  1520,  1559,  1570,  1057,  2084,   932,  2026,  1571,
    1116,  2631,   222,  1577,  1058,  2145,  1578,  1591,  1117,  1587,
    1590,  1604,  1609,  1610,  1615,  1618,   933,  2092,  2093,  1616,
    1617,   934,  2095,   935,   223,  1059,  1627,   224,  2097,  1628,
    1629,  1646,  1630,  1631,  1632,  1708,   748,  1644,  1645,  1657,
     749,  2774,  1651,  1658,  -457,  1664,  1669,  2251,  1118,   936,
     937,  1670,  1671,  1683,  1709,  1688,  1119,   938,  2252,  1697,
    1710,   225,  1699,  2069,  1714,  1722,  1723,  1719,   226,  1740,
    1746,  1729,  2075,  1060,  1759,   939,  2080,  1741,   750,   227,
     228,  1753,  1760,  1765,  1112,  2253,   229,  1784,  1787,  1845,
    1798,  1800,  1113,  1802,  1846,  1847,  2450,  2451,  1114,  2453,
    2454,  1848,  1120,  2457,  2458,  1852,  1853,  1889,  1855,  1244,
    1856,   230,  1061,  1857,  1121,  2254,   751,  1860,  1890,  1863,
    1880,  1115,  1883,  1895,  2255,  1900,  1901,  1898,  1902,   231,
    1122,   940,  1904,  1899,  1905,  2198,  2199,  1906,  2201,  1062,
    1911,  1907,  1929,   232,   233,  1116,  1908,  1933,  1944,  1981,
     234,  1982,  1983,  1117,  1994,  1995,  2212,  2213,  2214,  2215,
    2216,  2217,  2218,  2219,  2220,  2506,  2000,   752,  1946,  1950,
    2001,   753,   235,  1958,  1959,  1974,  2002,  2006,  1063,  2226,
    1064,  2228,  2004,  2005,  2007,  2008,  2306,  2009,  2010,   296,
    2011,  2012,  2015,  1118,  2013,  2014,   754,  2234,   431,   755,
    2016,  1119,  2017,  2238,  2018,  2146,  2034,  2036,  2039,   756,
    2052,   236,  2241,  2242,  2243,  2244,  2245,  2246,  2247,  2248,
    2249,  2250,  2058,  2059,  2264,  2265,  2266,  2267,  2268,  2269,
    2270,  2271,  2272,  2273,  2274,  2275,  2060,  2278,  2061,  2279,
    2280,  2281,  2062,  2094,  2103,  2711,  2096,  1120,  2099,  2100,
    2101,  2104,  2108,   431,  2289,  2105,  2110,  2111,  2112,  1121,
    2116,  2117,  2157,  2118,   237,  2147,  2148,  2149,  2153,  2154,
     445,  2156,  2158,  2159,   238,  1122,  2160,  2164,  2165,  2168,
    2167,  2169,  2170,  2171,  2256,  2175,  2257,  2298,  2176,  2299,
    2178,  2300,  2179,  2302,  2180,   431,  2304,  2181,  2305,  2185,
    2186,  2469,  2187,   239,  2309,  2310,  2189,  2190,  2192,  2193,
    1485,  2314,  2195,  2315,  2588,  2202,  2204,  2318,  2591,  2207,
    2320,  2210,  2221,  2711,  2222,  2470,  2223,   108,  2224,  2225,
    2471,  2229,  2277,  1512,  2282,  2283,  2472,  2286,  2287,  2290,
    2258,   507,  1521,   514,   517,  2293,   522,   526,  2307,  2308,
    2311,  2473,  2319,  2323,  2324,  2626,  2325,  2326,  2327,  2353,
   -1119,  2356,  2358,   715,  2357,   110,  2361,  2256,  2363,  2364,
    1778,  2365,  2369,  2370,  2378,   593,  2371,  2372,  2373,  2374,
    2379,  2387,  1788,  2380,  2381,  2382,  2383,  2388,  2493,  2389,
    2396,  2399,  2407,  2410,   609,   615,  2413,  2414,  2416,  1566,
    1849,  1850,  2419,  2420,  2421,  2424,  2429,  2433,  2322,  2449,
    2504,   111,  2474,  1574,  2475,  2510,  2476,  2511,  2478,  2513,
    2760,  2516,   801,  2518,  2422,  2519,  2520,   840,  2521,  2523,
    2529,  2531,  2540,  2549,  2558,  2564,  2568,  2571,   700,  2577,
    2585,  2596,  2789,  2607,  2608,  2609,  2613,  2355,  2610,  2611,
     711,  2612,  2628,  2639,  2723,  2640,  2642,  2643,  2644,  2646,
     820,  2652,  2658,  2684,  2690,  2477,  2693,  2694,  2427,   113,
     732,  2695,  2700,  2715,  2708,  2716,  2717,  2718,  2725,  2434,
    2435,  2436,  2437,  2438,  2439,  2440,  2441,  2442,  2443,  2444,
    2728,  2739,  2747,  2761,  2750,  2447,  2753,  2757,  2762,   431,
     431,  2763,   431,   431,  2765,  2767,   431,   431,  2459,  2460,
    2461,  2462,  2463,  2464,  2770,  2466,  2467,  2468,  2773,     0,
    2783,  1665,  1666,  2784,  2790,  2798,     0,  2802,  2803,  2805,
    2809,   118,  2480,  2481,  2482,  2483,   119,  2485,  2486,  2487,
    2488,  2489,  2490,  2811,  2492,  2812,  2813,  2496,  2497,  2814,
       0,     0,  1181,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2505,     0,     0,   431,  2507,
       0,     0,     0,  2509,   885,     0,  2512,     0,     0,     0,
     836,   890,     0,     0,   891,     0,     0,     0,     0,   892,
       0,   843,     0,   894,     0,     0,     0,   516,     0,     0,
     851,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2532,     0,     0,     0,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,     0,     0,     0,     0,
     959,     0,     0,     0,     0,     0,     0,     0,   888,   889,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   893,     0,     0,     0,     0,   896,     0,     0,     0,
       0,     0,     0,     0,     0,   908,  2579,     0,     0,     0,
    2581,     0,     0,     0,  1864,     0,     0,     0,     0,     0,
    2582,  2583,     0,     0,     0,     0,  2587,   431,     0,     0,
    2590,   431,     0,     0,     0,     0,  2595,     0,     0,  2599,
    2600,     0,     0,  1882,     0,     0,     0,  1886,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2618,
    2619,     0,  2621,  2622,  2623,  2624,  2625,     0,   431,  2627,
       0,     0,     0,  2630,  1917,     0,     0,   961,   962,   963,
     964,     0,     0,     0,  1932,     0,  2641,     0,  1153,  2107,
       0,  2645,     0,  1937,  1938,  1159,     0,  2113,  2114,     0,
       0,     0,     0,     0,     0,  1942,     0,     0,     0,  2660,
       0,     0,  2150,  2151,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2161,  2162,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2172,  2173,     0,     0,     0,  1110,
       0,     0,     0,     0,  2182,  2183,     0,     0,  1527,     0,
    2188,  2672,     0,  1528,     0,     0,  2676,     0,  2678,     0,
    2191,     0,     0,     0,  2681,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1529,  1530,  2688,  1531,  1532,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1533,
       0,     0,     0,     0,     0,     0,  2699,     0,     0,     0,
    2703,  1534,  1535,     0,     0,     0,     0,     0,     0,  1536,
       0,  2734,  1537,  1247,     0,     0,     0,     0,     0,     0,
    1249,     0,  2722,     0,     0,  1365,     0,     0,     0,     0,
    1538,     0,     0,     0,     0,     0,     0,  1539,  1540,     0,
       0,  1541,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2737,     0,     0,     0,  1416,  2742,     0,
    2744,     0,     0,     0,     0,  1265,  1266,  2748,     0,     0,
    1270,     0,  2751,  1273,     0,     0,     0,  2754,     0,     0,
       0,     0,     0,     0,     0,  1280,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2764,
    2766,     0,     0,  1248,  1542,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1253,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2776,     0,     0,  2777,     0,
       0,  2779,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2785,  2786,  2787,  2788,     0,     0,     0,     0,     0,
       0,     0,  1263,  2797,     0,     0,  2800,     0,     0,     0,
    1543,     0,     0,  2804,     0,  2806,  1544,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1545,     0,     0,     0,     0,     0,     0,
       0,     0,  1421,  1546,     0,     0,     0,     0,     0,     0,
       0,  2772,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2360,     0,     0,     0,     0,     0,     0,
    1547,  1548,     0,  2362,     0,     0,     0,  2366,  2367,     0,
       0,  1354,  2792,     0,     0,  2795,  2375,  2376,     0,     0,
       0,  1549,     0,     0,     0,  2384,  2385,     0,     0,     0,
       0,  2390,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2400,  2401,     0,     0,     0,     0,     0,  2206,     0,
       0,     0,  2411,  2412,     0,     0,     0,     0,     0,     0,
      65,    66,     0,  2415,     0,     0,  1550,     0,     0,     0,
       0,     0,  2417,     0,  2418,   108,  2317,     0,     0,     0,
       0,     0,     0,  2231,     0,     0,     0,  1497,     0,     0,
       0,     0,  2329,  2330,  2331,   291,     0,  2333,     0,  2335,
    2336,     0,     0,  2338,  2339,  2340,     0,     0,  2342,  2343,
       0,     0,  2346,   110,  2348,  2349,     0,  2351,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1558,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1564,     0,     0,     0,     0,     0,   111,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1642,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1762,
    1763,  1764,     0,     0,     0,     0,     0,     0,     0,  1766,
    1767,  1768,     0,     0,     0,  1667,  1779,  1780,  1781,     0,
    1672,  1782,  1783,     0,  1785,  1786,     0,   113,     0,     0,
    1678,     0,     0,     0,  2423,     0,     0,  2426,     0,     0,
       0,     0,  2430,     0,     0,  2431,     0,     0,     0,     0,
       0,     0,     0,     0,  1858,  1859,  2534,     0,  1861,  1862,
       0,     0,     0,     0,  2446,     0,  2543,   292,     0,  1640,
       0,     0,     0,     0,     0,  2552,     0,     0,     0,     0,
       0,     0,     0,     0,  2561,     0,  1648,     0,     0,   118,
       0,  2563,     0,     0,   119,     0,     0,     0,     0,     0,
       0,     0,  2567,     0,     0,   293,     0,     0,  2570,     0,
    1673,  2572,     0,     0,  2573,     0,     0,     0,     0,     0,
    1679,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1694,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1706,
    2515,     0,     0,     0,  1713,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   294,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2525,     0,     0,     0,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2661,     0,     0,     0,     0,
       0,     0,     0,     0,  2663,     0,     0,     0,     0,     0,
       0,     0,     0,  2665,     0,     0,     0,     0,     0,  2668,
       0,  2499,  2576,  2670,  1931,     0,  2671,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2584,     0,     0,     0,     0,     0,  1865,  2589,
       0,     0,  2592,  2593,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1885,     0,     0,     0,
       0,     0,     0,     0,     0,  1980,     0,     0,     0,     0,
       0,  1986,     0,     0,     0,     0,     0,     0,    65,    66,
       0,     0,     0,     0,     0,  1918,     0,     0,  1919,     0,
       0,     0,     0,   108,     0,     0,     0,  1934,  1935,     0,
       0,     0,     0,     0,     0,  1939,     0,     0,     0,     0,
       0,     0,     0,  1940,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2098,     0,     0,     0,     0,
    2023,     0,  2673,  1979,     0,  2028,     0,     0,  2106,     0,
       0,     0,     0,     0,     0,  1990,     0,     0,  2109,     0,
       0,  2683,     0,     0,     0,     0,     0,   111,     0,     0,
    2042,     0,     0,     0,     0,     0,  2048,     0,     0,     0,
       0,     0,     0,     0,  2614,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2064,  2632,     0,     0,     0,  2637,     0,
    2071,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,     0,     0,     0,     0,
    2194,     0,  2025,     0,     0,     0,     0,     0,     0,     0,
       0,  2735,  2736,     0,  2738,     0,  2740,  2741,     0,  2743,
    2040,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2049,     0,     0,     0,
       0,     0,     0,    65,    66,     0,     0,     0,     0,  2054,
       0,  2055,     0,     0,     0,     0,     0,   118,   108,     0,
       0,  2063,   119,     0,  2065,  2066,  2067,  2068,  2070,     0,
    2072,  2769,     0,  2073,     0,     0,  2074,  2076,  2077,  2078,
    2079,  2081,     0,  2082,  2083,     0,     0,     0,  2085,  2086,
    2087,     0,     0,  2088,  2089,     0,     0,     0,     0,  2090,
    2091,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2714,     0,     0,  2801,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2196,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   111,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2209,     0,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,     0,     0,     0,  2232,  2233,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,  2236,  2237,     0,     0,     0,  2239,  2240,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2197,     0,     0,  2200,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2782,  2205,     0,     0,
    2208,     0,     0,     0,     0,     0,  2284,  2359,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2291,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,     0,  2227,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2391,  2392,  2393,
    2394,  2395,  2301,  2397,  2398,     0,     0,     0,  2402,  2403,
    2404,  2405,  2406,   994,  2408,  2409,     0,  2312,   995,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2276,     0,     0,     0,     0,     0,
    2328,     0,     0,     0,     0,  2332,     0,     0,   525,     0,
       0,  2337,     0,     0,     0,     0,  2341,  2292,     0,     0,
    2344,     0,   108,  2347,     0,     0,  2350,     0,  2352,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,     0,     0,     0,
     110,     0,     0,     0,     0,     0,     0,  2313,     0,     0,
       0,  1693,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2321,     0,     0,   108,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   111,     0,     0,     0,
    2345,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2354,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
       0,     0,     0,     0,   113,     0,     0,     0,     0,   111,
    2533,     0,     0,  2535,  2536,  2537,  2538,  2539,     0,  2541,
    2542,     0,  2544,  2545,  2546,  2547,  2548,     0,  2550,  2551,
       0,  2553,  2554,  2555,  2556,  2557,     0,  2559,  2560,     0,
    2562,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2565,  2566,     0,  2491,     0,     0,     0,     0,     0,     0,
       0,  2569,     0,     0,     0,  2425,   118,   113,  2428,  2503,
       0,   119,     0,     0,     0,     0,  2432,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2445,     0,     0,  2448,     0,     0,  2517,     0,
    2452,     0,     0,  2455,  2456,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2530,     0,     0,   119,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2500,  2501,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,     0,  2522,  2662,     0,     0,     0,     0,     0,  2574,
       0,     0,  2664,     0,     0,  2578,     0,     0,     0,  2580,
       0,  2666,     0,  2667,     0,     0,     0,  2669,     0,     0,
       0,     0,     0,     0,     0,  2586,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   108,     0,     0,  2635,  2636,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2575,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2729,     0,  2730,     0,  2731,     0,     0,  2732,     0,
    2733,   498,   499,  2594,     0,   500,     0,     0,     0,     0,
       0,     0,     0,     0,  2605,     0,     0,     0,     0,   610,
     108,     0,     0,     0,     0,     0,     0,     0,   501,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   111,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     611,     0,  2692,     0,     0,  2651,     0,     0,     0,  2657,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,     0,     0,     0,
       0,     0,     0,     0,   111,     0,     0,     0,     0,   502,
       0,     0,     0,     0,     0,     0,     0,     0,   612,     0,
       0,     0,     0,  2674,  2675,     0,  2677,     0,   503,     0,
       0,  2679,  2680,     0,     0,     0,  2682,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     504,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2756,   113,   119,     0,     0,     0,     0,     0,     0,
    2704,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     613,     0,     0,  2768,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2726,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   505,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2793,   119,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2807,     0,
       0,  2808,     0,     0,     0,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,     0,   506,  2771,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   614,     0,
       0,     0,  2780,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2791,     0,     0,  2794,
       0,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,  1016,
    1017,  1018,     0,     0,  1292,  1293,  1294,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1019,  1020,
       0,     0,  1021,  1295,  1296,  1022,   108,  1297,     0,     0,
       0,     0,  1023,     0,  1298,     0,  1024,  1299,     0,     0,
       0,  1300,     0,     0,  1025,  1026,     0,     0,     0,  1301,
    1302,     0,  1027,  1028,     0,     0,     0,  1303,     0,     0,
       0,     0,     0,     0,   110,     0,     0,     0,     0,     0,
    1029,     0,     0,     0,     0,     0,  1030,     0,   108,     0,
    1031,  1032,     0,     0,  1033,  1304,  1305,     0,     0,  1306,
       0,     0,     0,  1034,     0,     0,     0,     0,  1307,     0,
       0,     0,  1035,     0,     0,     0,   108,  1308,     0,     0,
     111,     0,     0,     0,     0,     0,     0,     0,     0,   512,
       0,     0,     0,  1036,     0,     0,     0,     0,  1309,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1353,     0,     0,  1037,   108,     0,
       0,     0,  1310,     0,     0,     0,     0,     0,     0,     0,
       0,  1311,   111,     0,     0,     0,     0,     0,   113,     0,
       0,  1038,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     111,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1039,     0,  1040,     0,     0,  1312,     0,     0,  1041,
    1042,     0,     0,     0,  1313,  1314,     0,     0,     0,     0,
     113,     0,     0,     0,     0,  1043,  1044,     0,     0,     0,
     118,  1315,   111,     0,     0,   119,  1045,  1046,     0,     0,
       0,     0,  1316,     0,     0,     0,     0,     0,   113,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1047,     0,  1048,     0,     0,  1317,     0,  1318,
       0,     0,     0,     0,     0,     0,  1049,     0,  1050,  1319,
       0,     0,     0,     0,  1051,     0,     0,   119,     0,  1320,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,     0,     0,  1052,     0,
       0,     0,     0,  1321,     0,     0,     0,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,     0,   513,   119,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,     0,     0,     0,     0,     0,
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
     199,    35,   200,    36,  1390,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,   215,     0,   216,     0,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,  1391,     0,     0,     0,
       0,     0,     0,   217,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149
};

static const yytype_int16 yycheck[] =
{
       3,   489,  1474,     4,   890,   891,   892,   902,    11,  1675,
      51,  1677,     4,    16,     4,    26,   675,     4,     4,     5,
     670,   671,     5,     3,     4,     4,  1174,     4,  1176,     5,
      33,     3,     4,     5,     4,    31,     5,    48,    41,   445,
      51,    15,     5,     4,  1017,     5,    61,    50,    61,   455,
      53,    62,    98,    56,  1202,  1203,  1204,    60,     3,     4,
      63,     3,     4,     4,    67,    68,     3,     4,    71,    78,
       4,    74,    75,   959,    85,    78,    66,    39,    16,    82,
      16,     3,     4,    36,    87,     5,    13,    38,     3,     4,
      35,    16,   103,    35,    47,    66,    26,   100,   101,   102,
     103,   104,   105,   153,   104,    66,     3,     4,    16,     0,
       5,   172,     4,    56,    87,    33,     4,     5,   121,     3,
       4,    74,     3,     4,    39,     3,     4,     3,     4,    19,
      87,   121,    43,   292,    61,   121,   168,  2710,   160,   199,
     100,    16,     3,     4,    59,    32,   106,   219,     5,   988,
     112,    43,   991,   156,    46,    83,   135,   173,   144,   148,
     121,     3,     4,    39,     4,    15,   182,   189,   177,  1008,
     231,    11,   100,    30,    99,   142,    87,   169,   181,     5,
       4,     5,     4,   186,    76,  2758,   237,   160,   122,   125,
      16,   136,    84,   193,   136,     5,   114,   112,    46,     5,
     153,     4,   203,   160,   264,     4,     3,     4,    66,   210,
     211,     3,     4,   193,   181,    50,    20,   267,   208,   199,
       3,     4,   208,   269,   162,    20,   216,   217,   202,   121,
     216,   217,    20,   121,    20,   171,   112,   298,   200,   192,
     312,   273,    66,    20,    66,   246,   249,   208,   257,   144,
     201,     3,     4,    20,   146,   216,   217,    20,   238,    56,
     301,    31,   265,   266,    88,   100,    26,    66,   186,   196,
     188,     4,   190,   191,   109,   290,   935,   290,   281,   222,
     283,   199,   218,   253,   264,   200,   255,   198,   291,   292,
     253,   294,   295,   289,   297,   278,   214,   121,   313,   121,
     313,   231,    31,   200,   307,   140,   198,   294,   261,   715,
     272,     4,   193,   303,   317,   318,   208,   303,   121,   143,
     208,   300,   121,   300,   216,   217,     5,   319,   216,   217,
     310,   223,   193,   225,    13,    14,   312,   340,   341,   342,
     312,   344,   303,   218,   271,   348,   349,   267,   359,   309,
     138,   241,   353,   294,   281,   300,   359,   360,   300,   267,
     313,   253,   352,   300,   367,   301,   352,   357,   358,   372,
     373,   357,   358,   293,   354,   355,   294,   380,   300,  1265,
     383,   296,    61,  1042,   208,   312,   208,  1273,   121,   231,
       5,   352,   216,   217,   216,   217,   357,   358,    26,   402,
     403,   292,  1061,   300,     4,   208,   409,   410,   411,   208,
     413,   303,    26,   216,   217,   303,   300,   216,   217,    61,
     190,   309,   300,   233,   427,   222,   301,   319,   431,   310,
      11,   319,   280,   436,   437,   438,   439,   440,   441,   231,
     443,   245,   445,   446,   447,   851,  1096,    15,   231,   310,
     245,   203,   455,   456,    22,    61,  1604,   245,   153,   245,
     352,   190,    61,  1436,   352,   357,   358,   302,   245,   357,
     358,   231,    53,   354,   355,   208,     4,  1127,   245,   303,
     122,   303,   245,   216,   217,   309,   133,   275,   894,  1462,
      71,   294,    39,   354,   355,     4,     4,     3,     4,    25,
     303,    29,    63,   118,   303,   106,   509,   510,  2531,    12,
    2467,  1484,    66,   137,     4,    88,   122,   196,   197,   289,
     101,   199,     5,   122,   527,   172,   444,     4,   352,   224,
     352,   237,   356,   357,   358,   357,   358,  2494,    26,   120,
      13,    14,   170,   124,   105,     0,    33,   142,    56,   352,
     591,   277,   555,   352,   357,   358,   170,   138,   357,   358,
     289,    13,    14,     0,     5,   112,    56,     4,  1407,   123,
     303,  1410,   267,    56,   133,     4,     3,     4,   132,   257,
       3,     4,    65,   198,   231,   588,   181,   113,    61,     5,
      61,     4,   271,   634,     3,     4,     3,     4,    30,   199,
     201,   127,   281,   282,   158,     5,     5,   286,   200,    61,
     305,   253,   653,    13,    14,   533,    63,   245,     5,   352,
     126,   108,   625,  2646,   357,   358,    39,   270,    35,     5,
     254,   245,    39,   312,   277,  2658,   164,    64,   253,   281,
    2597,  2598,    39,   290,  2601,  2311,  2603,    61,   651,    61,
     250,   122,   570,   200,   255,  1314,    57,   257,   105,  2616,
    2617,    61,   290,   278,  2621,  2622,   669,  1326,  2625,   672,
       5,    26,   231,  2630,  2631,   281,   290,     4,    13,    14,
     248,   242,   281,   251,   172,    29,   240,   213,    61,   160,
     199,   219,   195,   118,    13,    14,   699,   258,   259,   112,
     226,   704,   705,   706,   707,   112,   267,   710,   122,   712,
     122,   714,   715,   716,   222,   112,   120,   245,    66,   300,
      70,    39,   209,   196,   197,   272,    61,  2684,   292,   136,
    2687,   290,   222,   134,     4,  2692,    29,    63,   292,   222,
     173,  2698,    61,   231,   196,   197,  2703,  1153,    66,   122,
     791,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   105,
     783,   784,   100,   786,   787,   788,   789,   200,   106,   350,
     351,   214,  1678,   200,   112,   242,   196,   197,   271,   802,
     803,   127,    95,   200,  1699,   214,   809,   810,   281,   282,
     281,   258,   259,    32,   132,     3,     4,   172,  2775,   271,
     164,  2778,    66,   173,    41,    42,   829,   830,   831,   281,
     282,   232,   209,     3,     4,   153,     3,     4,    61,   312,
     253,  2798,     5,   846,   847,   848,   247,   850,   851,   852,
     168,   854,  2000,  2001,  2002,  2812,    61,   127,  2815,  2816,
     312,   196,   197,    89,  1270,     4,     5,   281,    15,   281,
      66,   271,   875,   166,   877,   219,   231,   196,   197,    61,
     238,   281,   282,   201,   887,    45,   286,    36,     3,     4,
      78,   894,   895,   300,    89,    88,    27,   900,    47,   122,
    1873,   245,   252,   350,   351,    61,    66,    61,   281,   310,
      21,   261,   312,    39,   917,  1888,   242,   122,   921,   106,
    1570,    81,   240,    91,   117,    74,   929,   930,   931,    54,
     291,     4,   258,   259,   937,  1774,   271,   255,    49,   942,
     122,    52,   212,  1916,    21,    66,   281,   282,    72,   267,
     953,   286,   271,   994,    30,  1794,   126,   875,   175,   176,
       4,     5,   281,   282,   257,    90,   122,   970,   122,   262,
    1809,    82,    49,  1812,   351,    52,   294,   312,    55,     5,
     357,  1820,   359,     5,  1823,     4,   112,   204,   306,   177,
     308,   309,  1831,   312,    94,  1834,     4,  2469,   191,     5,
     111,    83,  1841,   114,   153,    82,   174,    13,    14,     5,
       3,     4,   112,   206,   201,    88,    60,     5,   100,   144,
      14,    15,    66,   154,   350,   351,     4,   187,    22,    73,
     348,    75,     5,    27,   111,  1038,    80,   114,     5,    83,
      34,   270,     5,   192,  2599,    89,  2019,   178,   277,   122,
       5,   182,     4,    13,    14,    61,   100,  1060,   281,    13,
      14,    55,   106,  2618,     3,     4,  1069,     4,   255,   257,
       4,   115,     3,     4,   200,   268,   281,     4,    72,   123,
       4,     5,  1085,     4,  1087,    16,   246,    98,   132,   122,
    1093,  1094,  1095,   193,  1980,     4,     5,   265,   180,   281,
    1103,    61,     5,  1106,   235,  1108,     4,    61,     4,   153,
       5,     4,   261,     3,     4,   283,   309,   278,    13,    14,
       4,  1124,   233,  1126,   168,   281,   319,   281,   253,     5,
     290,  1134,  1135,     3,     4,   179,   180,     3,     4,   299,
     203,    11,   224,     4,    44,   276,  1149,  1150,   297,   142,
    1153,  1154,  1155,   284,   285,   266,   233,   201,  1161,    59,
    1163,    25,  2048,  1166,   313,  1168,    61,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,  1218,   260,     4,
     224,    81,     3,     4,     5,  2071,    27,   126,   181,   266,
     196,   197,  2747,    59,   238,     4,   240,     4,  2753,    13,
      14,   101,  1205,     4,     5,    45,  1209,   193,  1211,     3,
       4,   255,  1215,   199,     4,   292,   260,    82,   118,    82,
      23,    24,   122,   267,    64,     5,    66,  1230,     5,  1232,
     274,  1234,  1235,  1236,  1237,     8,   196,   197,  1241,  1242,
       4,     5,   196,   197,    10,    39,  1249,    61,   292,   113,
     150,   151,   238,  1256,  2809,     5,  2811,  1260,  1261,  1262,
     277,   305,   306,   127,   308,   271,   173,  1270,  1271,   263,
     264,  1274,     4,     4,  2247,   281,   282,     4,   264,  1282,
     286,  1284,   433,   434,  1287,  2124,   173,    18,    34,     4,
     155,  2264,   155,   182,  2133,    98,  2269,   202,   162,   293,
     202,   196,   197,  2142,   348,   205,   312,     5,    39,     5,
       4,   271,  1230,   154,   202,   215,   194,   271,   112,   194,
     231,   281,   282,    66,   310,    56,    66,   281,   282,    66,
    1333,     5,  1335,     3,     4,  1338,  1339,   178,  1341,     5,
    1343,   182,   336,   337,   338,     4,  1349,   187,  1351,   213,
     232,     4,   312,     3,     4,  1358,     4,  1275,   312,   202,
       5,   107,   226,    87,   229,   230,   229,   230,    87,   355,
       5,   102,     3,     4,     4,  1293,   271,   277,   278,   244,
      11,   244,   196,   197,   130,   131,   281,   282,     4,    59,
     121,   286,     5,   139,   235,     3,     4,     4,  2284,     5,
       8,     9,    10,     5,     4,  2291,   246,   100,     5,    59,
       4,   157,     3,     4,     5,     6,     7,   312,    16,     3,
       4,   167,   287,    16,   287,     3,     4,     5,    53,   160,
    1433,  1434,  1435,     4,     4,   276,    13,    14,     3,     4,
       5,     6,     7,   284,   285,     4,    71,    98,   348,     5,
     290,     5,  1455,    87,     4,    39,  1459,   271,  2344,   299,
       5,  2347,     5,    88,  2350,    87,  2352,   281,   282,   200,
       3,     4,     5,     6,     7,     5,   101,   208,     4,  1482,
    1483,     3,     4,     5,    61,   216,   217,     5,     5,     4,
    1493,   222,  2465,  1496,     4,   120,   227,     5,   312,   124,
    1503,     3,     4,     4,     6,     7,  2479,     5,     5,     4,
       4,  2484,    11,   138,  1432,  1518,     5,     4,     5,    11,
    1523,     4,     4,     4,  1527,  1931,  1529,  1530,   112,  1532,
    1533,  1534,     4,  1536,     4,     4,  1539,  1540,  1541,  1542,
    1543,  1544,  1545,  1546,  1547,  1548,  1549,     5,     5,  1552,
    1553,  1554,  1555,     5,   179,   169,   160,   160,     4,  1562,
    1563,     5,     4,  1566,  1567,  1568,    37,   266,   294,  1572,
    1573,    37,   303,    60,   266,     5,     4,   279,     5,    66,
    1986,     5,  1585,  1586,     5,  1588,  1589,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   200,  2503,     5,   196,
     197,   352,  2028,     4,     4,   619,   357,   358,   115,     5,
       5,     5,   279,  1636,  1637,  1638,   123,     5,  1641,     5,
       4,     4,     4,  1646,  1647,   132,  1649,  1650,  1651,     5,
    1653,  1654,     5,  1656,     5,     5,  1659,  1660,     5,     5,
     147,     4,   245,     5,     5,  1668,   153,     4,    66,    92,
       5,   158,   666,  1676,     5,   106,   245,   100,  1681,  1682,
     674,   245,    80,   106,  1687,   679,     5,   245,   142,   106,
      39,    89,   245,  1696,   271,  2461,   245,   106,  2464,     5,
    2466,    39,   100,   251,   281,   282,   129,   218,     5,    61,
     251,   218,   987,     4,  2480,  2481,     5,     5,   218,     4,
       4,     4,   218,     5,     5,   123,  1729,   214,  1646,     5,
     153,  2497,    18,     5,   132,   312,     5,     4,   161,   112,
     112,     5,     5,     5,     4,     4,   233,  1750,  1751,     5,
       5,   238,  1755,   240,    40,   153,     5,    43,  1761,     5,
       4,    11,     5,     5,     4,   245,   118,     5,     5,     4,
     122,  2744,    11,     4,     0,     5,     4,    55,   201,   266,
     267,     4,     4,     4,   245,     5,   209,   274,    66,     4,
     245,    77,     5,  1711,   245,   245,   245,   142,    84,     4,
     214,   172,  1720,   201,     4,   292,  1724,   255,   160,    95,
      96,   202,     4,     4,    92,    93,   102,     4,     4,   279,
       5,     5,   100,     5,     5,     5,  2232,  2233,   106,  2235,
    2236,     5,   255,  2239,  2240,     4,     4,   245,     5,   833,
       4,   127,   240,     4,   267,   123,   198,     4,   245,     5,
       5,   129,     5,   245,   132,     4,     4,   316,     4,   145,
     283,   348,     4,   316,     4,  1868,  1869,     4,  1871,   267,
       4,   316,     4,   159,   160,   153,   316,     5,     5,     5,
     166,     4,     4,   161,     5,     4,  1889,  1890,  1891,  1892,
    1893,  1894,  1895,  1896,  1897,  2301,     5,   249,   231,   231,
       5,   253,   188,   231,   231,   231,     4,     4,   306,  1912,
     308,  1914,     5,     5,     4,     4,    11,     5,     5,    33,
       4,     4,     4,   201,     5,     5,   278,  1930,  1931,   281,
       5,   209,     5,  1936,     4,   279,     5,     4,     4,   291,
       4,   227,  1945,  1946,  1947,  1948,  1949,  1950,  1951,  1952,
    1953,  1954,     5,     5,  1957,  1958,  1959,  1960,  1961,  1962,
    1963,  1964,  1965,  1966,  1967,  1968,     5,  1970,     5,  1972,
    1973,  1974,     5,     4,     4,  2634,     5,   255,     5,     5,
       5,     4,     4,  1986,  1987,     5,     5,     5,     5,   267,
       4,     4,   279,     5,   280,     5,     5,     5,     4,     4,
     114,     5,     5,     5,   290,   283,     5,     4,     4,   279,
       5,     5,     5,     5,   292,     4,   294,  2020,     4,  2022,
       5,  2024,     5,  2026,     5,  2028,  2029,     5,  2031,     4,
       4,   360,     5,   319,  2037,  2038,     4,     4,     4,     4,
    1034,  2044,     5,  2046,  2450,     5,     5,  2050,  2454,     5,
    2053,     5,     4,  2712,     4,   360,     5,    18,     4,     4,
     360,     5,     5,  1057,     4,     4,   360,     5,     5,     4,
     348,   185,  1066,   187,   188,     4,   190,   191,     5,     5,
       4,   360,     5,     5,     5,  2491,     5,     5,     5,     4,
     292,     5,     4,   296,  2097,    56,     4,   292,     5,     5,
    1375,     5,     4,     4,     4,   219,     5,     5,     5,     5,
       4,     4,  1387,     5,     5,     5,     5,     4,   312,     5,
       4,     4,     4,     4,   238,   239,     4,     4,     4,  1123,
    1405,  1406,     4,     4,     4,     4,     4,     4,  2056,     4,
       4,   102,   360,  1137,   360,     5,   360,     5,   360,     4,
     360,     5,   355,     4,  2195,     5,     4,   432,     5,     5,
       5,     4,     4,     4,     4,     4,     4,     4,   282,     4,
       4,     4,  2768,     5,     4,     4,     4,  2095,     5,     5,
     294,     5,     5,     4,  2645,     5,     5,     4,     4,     4,
     387,     5,     4,     4,     4,  2259,     5,     4,  2201,   160,
     314,     4,     4,     4,  2632,     5,     5,     4,     4,  2212,
    2213,  2214,  2215,  2216,  2217,  2218,  2219,  2220,  2221,  2222,
       4,     4,     4,  2712,     5,  2228,     4,  2708,     5,  2232,
    2233,     5,  2235,  2236,  2722,  2723,  2239,  2240,  2241,  2242,
    2243,  2244,  2245,  2246,     4,  2248,  2249,  2250,     4,    -1,
       5,  1245,  1246,     5,     5,     4,    -1,     5,     5,     5,
       4,   222,  2265,  2266,  2267,  2268,   227,  2270,  2271,  2272,
    2273,  2274,  2275,     4,  2277,     5,     5,  2280,  2281,     5,
      -1,    -1,   750,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2298,    -1,    -1,  2301,  2302,
      -1,    -1,    -1,  2306,   507,    -1,  2309,    -1,    -1,    -1,
     424,   514,    -1,    -1,   517,    -1,    -1,    -1,    -1,   522,
      -1,   435,    -1,   526,    -1,    -1,    -1,   288,    -1,    -1,
     444,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2357,    -1,    -1,    -1,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,    -1,    -1,    -1,    -1,
     593,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   512,   513,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   525,    -1,    -1,    -1,    -1,   530,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   539,  2429,    -1,    -1,    -1,
    2433,    -1,    -1,    -1,  1428,    -1,    -1,    -1,    -1,    -1,
    2443,  2444,    -1,    -1,    -1,    -1,  2449,  2450,    -1,    -1,
    2453,  2454,    -1,    -1,    -1,    -1,  2459,    -1,    -1,  2462,
    2463,    -1,    -1,  1457,    -1,    -1,    -1,  1461,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2482,
    2483,    -1,  2485,  2486,  2487,  2488,  2489,    -1,  2491,  2492,
      -1,    -1,    -1,  2496,  1488,    -1,    -1,   611,   612,   613,
     614,    -1,    -1,    -1,  1498,    -1,  2509,    -1,   711,  1784,
      -1,  2514,    -1,  1507,  1508,   718,    -1,  1792,  1793,    -1,
      -1,    -1,    -1,    -1,    -1,  1519,    -1,    -1,    -1,  2532,
      -1,    -1,  1807,  1808,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1818,  1819,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1829,  1830,    -1,    -1,    -1,   673,
      -1,    -1,    -1,    -1,  1839,  1840,    -1,    -1,    21,    -1,
    1845,  2574,    -1,    26,    -1,    -1,  2579,    -1,  2581,    -1,
    1855,    -1,    -1,    -1,  2587,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,  2600,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    -1,    -1,  2619,    -1,    -1,    -1,
    2623,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,  2672,    85,   836,    -1,    -1,    -1,    -1,    -1,    -1,
     843,    -1,  2645,    -1,    -1,   975,    -1,    -1,    -1,    -1,
     103,    -1,    -1,    -1,    -1,    -1,    -1,   110,   111,    -1,
      -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2676,    -1,    -1,    -1,  1007,  2681,    -1,
    2683,    -1,    -1,    -1,    -1,   888,   889,  2690,    -1,    -1,
     893,    -1,  2695,   896,    -1,    -1,    -1,  2700,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   908,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2722,
    2723,    -1,    -1,   837,   177,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   849,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2748,    -1,    -1,  2751,    -1,
      -1,  2754,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2764,  2765,  2766,  2767,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   886,  2776,    -1,    -1,  2779,    -1,    -1,    -1,
     233,    -1,    -1,  2786,    -1,  2788,   239,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   256,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1015,   266,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2739,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2108,    -1,    -1,    -1,    -1,    -1,    -1,
     293,   294,    -1,  2118,    -1,    -1,    -1,  2122,  2123,    -1,
      -1,   965,  2770,    -1,    -1,  2773,  2131,  2132,    -1,    -1,
      -1,   314,    -1,    -1,    -1,  2140,  2141,    -1,    -1,    -1,
      -1,  2146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2156,  2157,    -1,    -1,    -1,    -1,    -1,  1882,    -1,
      -1,    -1,  2167,  2168,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,  2178,    -1,    -1,   359,    -1,    -1,    -1,
      -1,    -1,  2187,    -1,  2189,    18,  2049,    -1,    -1,    -1,
      -1,    -1,    -1,  1917,    -1,    -1,    -1,  1041,    -1,    -1,
      -1,    -1,  2065,  2066,  2067,    38,    -1,  2070,    -1,  2072,
    2073,    -1,    -1,  2076,  2077,  2078,    -1,    -1,  2081,  2082,
      -1,    -1,  2085,    56,  2087,  2088,    -1,  2090,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1097,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1107,    -1,    -1,    -1,    -1,    -1,   102,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1217,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1359,
    1360,  1361,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1369,
    1370,  1371,    -1,    -1,    -1,  1248,  1376,  1377,  1378,    -1,
    1253,  1381,  1382,    -1,  1384,  1385,    -1,   160,    -1,    -1,
    1263,    -1,    -1,    -1,  2197,    -1,    -1,  2200,    -1,    -1,
      -1,    -1,  2205,    -1,    -1,  2208,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1414,  1415,  2361,    -1,  1418,  1419,
      -1,    -1,    -1,    -1,  2227,    -1,  2371,   200,    -1,  1213,
      -1,    -1,    -1,    -1,    -1,  2380,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2389,    -1,  1230,    -1,    -1,   222,
      -1,  2396,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2407,    -1,    -1,   238,    -1,    -1,  2413,    -1,
    1254,  2416,    -1,    -1,  2419,    -1,    -1,    -1,    -1,    -1,
    1264,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1281,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1293,
    2313,    -1,    -1,    -1,  1298,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   300,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2345,    -1,    -1,    -1,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2540,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2549,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2558,    -1,    -1,    -1,    -1,    -1,  2564,
      -1,  2285,  2425,  2568,  1497,    -1,  2571,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2445,    -1,    -1,    -1,    -1,    -1,  1432,  2452,
      -1,    -1,  2455,  2456,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1460,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1558,    -1,    -1,    -1,    -1,
      -1,  1564,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    -1,  1489,    -1,    -1,  1492,    -1,
      -1,    -1,    -1,    18,    -1,    -1,    -1,  1501,  1502,    -1,
      -1,    -1,    -1,    -1,    -1,  1509,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1517,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1765,    -1,    -1,    -1,    -1,
    1643,    -1,  2575,  1557,    -1,  1648,    -1,    -1,  1778,    -1,
      -1,    -1,    -1,    -1,    -1,  1569,    -1,    -1,  1788,    -1,
      -1,  2594,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,
    1673,    -1,    -1,    -1,    -1,    -1,  1679,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2478,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1706,  2498,    -1,    -1,    -1,  2502,    -1,
    1713,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,    -1,    -1,
    1860,    -1,  1646,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2674,  2675,    -1,  2677,    -1,  2679,  2680,    -1,  2682,
    1664,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1680,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,    -1,    -1,    -1,  1693,
      -1,  1695,    -1,    -1,    -1,    -1,    -1,   222,    18,    -1,
      -1,  1705,   227,    -1,  1708,  1709,  1710,  1711,  1712,    -1,
    1714,  2734,    -1,  1717,    -1,    -1,  1720,  1721,  1722,  1723,
    1724,  1725,    -1,  1727,  1728,    -1,    -1,    -1,  1732,  1733,
    1734,    -1,    -1,  1737,  1738,    -1,    -1,    -1,    -1,  1743,
    1744,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2638,    -1,    -1,  2780,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1865,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1885,    -1,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,    -1,    -1,    -1,  1918,  1919,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     160,  1934,  1935,    -1,    -1,    -1,  1939,  1940,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1867,    -1,    -1,  1870,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2760,  1881,    -1,    -1,
    1884,    -1,    -1,    -1,    -1,    -1,  1979,  2107,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1990,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,  1913,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2147,  2148,  2149,
    2150,  2151,  2025,  2153,  2154,    -1,    -1,    -1,  2158,  2159,
    2160,  2161,  2162,   160,  2164,  2165,    -1,  2040,   165,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1968,    -1,    -1,    -1,    -1,    -1,
    2063,    -1,    -1,    -1,    -1,  2068,    -1,    -1,     4,    -1,
      -1,  2074,    -1,    -1,    -1,    -1,  2079,  1991,    -1,    -1,
    2083,    -1,    18,  2086,    -1,    -1,  2089,    -1,  2091,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,  2041,    -1,    -1,
      -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2056,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,
    2084,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2095,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
      -1,    -1,    -1,    -1,   160,    -1,    -1,    -1,    -1,   102,
    2360,    -1,    -1,  2363,  2364,  2365,  2366,  2367,    -1,  2369,
    2370,    -1,  2372,  2373,  2374,  2375,  2376,    -1,  2378,  2379,
      -1,  2381,  2382,  2383,  2384,  2385,    -1,  2387,  2388,    -1,
    2390,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2400,  2401,    -1,  2276,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2411,    -1,    -1,    -1,  2199,   222,   160,  2202,  2292,
      -1,   227,    -1,    -1,    -1,    -1,  2210,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2226,    -1,    -1,  2229,    -1,    -1,  2321,    -1,
    2234,    -1,    -1,  2237,  2238,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2354,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2286,  2287,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,    -1,  2326,  2543,    -1,    -1,    -1,    -1,    -1,  2422,
      -1,    -1,  2552,    -1,    -1,  2428,    -1,    -1,    -1,  2432,
      -1,  2561,    -1,  2563,    -1,    -1,    -1,  2567,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2448,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    -1,  2500,  2501,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2424,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2661,    -1,  2663,    -1,  2665,    -1,    -1,  2668,    -1,
    2670,    65,    66,  2457,    -1,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2468,    -1,    -1,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,  2605,    -1,    -1,  2519,    -1,    -1,    -1,  2523,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,   173,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,
      -1,    -1,    -1,  2577,  2578,    -1,  2580,    -1,   192,    -1,
      -1,  2585,  2586,    -1,    -1,    -1,  2590,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2704,   160,   227,    -1,    -1,    -1,    -1,    -1,    -1,
    2624,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     178,    -1,    -1,  2726,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2652,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   280,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2771,   227,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2791,    -1,
      -1,  2794,    -1,    -1,    -1,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,    -1,   348,  2739,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,
      -1,    -1,  2756,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2770,    -1,    -1,  2773,
      -1,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,    19,
      20,    21,    -1,    -1,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    52,    48,    49,    55,    18,    52,    -1,    -1,
      -1,    -1,    62,    -1,    59,    -1,    66,    62,    -1,    -1,
      -1,    66,    -1,    -1,    74,    75,    -1,    -1,    -1,    74,
      75,    -1,    82,    83,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,
     100,    -1,    -1,    -1,    -1,    -1,   106,    -1,    18,    -1,
     110,   111,    -1,    -1,   114,   110,   111,    -1,    -1,   114,
      -1,    -1,    -1,   123,    -1,    -1,    -1,    -1,   123,    -1,
      -1,    -1,   132,    -1,    -1,    -1,    18,   132,    -1,    -1,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,   153,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    -1,   177,    18,    -1,
      -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   186,   102,    -1,    -1,    -1,    -1,    -1,   160,    -1,
      -1,   201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   231,    -1,   233,    -1,    -1,   231,    -1,    -1,   239,
     240,    -1,    -1,    -1,   239,   240,    -1,    -1,    -1,    -1,
     160,    -1,    -1,    -1,    -1,   255,   256,    -1,    -1,    -1,
     222,   256,   102,    -1,    -1,   227,   266,   267,    -1,    -1,
      -1,    -1,   267,    -1,    -1,    -1,    -1,    -1,   160,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   292,    -1,   294,    -1,    -1,   292,    -1,   294,
      -1,    -1,    -1,    -1,    -1,    -1,   306,    -1,   308,   304,
      -1,    -1,    -1,    -1,   314,    -1,    -1,   227,    -1,   314,
     160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,   348,    -1,
      -1,    -1,    -1,   348,    -1,    -1,    -1,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,    -1,   296,   227,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,    40,    -1,    -1,
      43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    64,    65,    -1,    67,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      43,    -1,    -1,    46,    -1,    -1,   119,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   128,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    -1,    67,    68,    69,    -1,   141,    -1,
      -1,    -1,   145,    -1,    77,   148,    79,    -1,    -1,   152,
     153,    84,    -1,    86,    87,    88,   159,    -1,    -1,    -1,
      -1,    94,   165,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,    -1,    -1,
     183,   184,   185,    -1,    -1,   188,   189,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   127,    -1,    -1,    -1,    -1,    -1,
     203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   145,    -1,    -1,    -1,    -1,   220,   221,   222,
     153,    -1,   155,   156,    -1,    -1,   159,    -1,    -1,    -1,
     163,   234,   165,   236,   165,    -1,    -1,    -1,    -1,    -1,
     243,    -1,    -1,    -1,   247,    -1,    -1,    -1,   251,    -1,
     253,    -1,   255,    -1,    -1,   188,   189,   260,    -1,    -1,
     193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     203,   274,    -1,    -1,    -1,    -1,    -1,   280,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,   221,    -1,
      -1,    -1,   295,   296,    -1,   228,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   307,    -1,   309,    -1,    -1,    -1,
      -1,    -1,   315,    -1,    -1,   318,   319,    -1,    -1,    -1,
     253,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      80,    83,    89,   100,   106,   115,   123,   132,   153,   168,
     179,   180,   201,   224,   238,   240,   255,   260,   267,   274,
     292,   305,   306,   308,   348,   504,    91,   174,   265,   283,
     377,     5,     4,   203,   210,   211,   246,   353,   376,   363,
     373,   363,     5,   144,   363,    39,   112,   363,   543,   365,
     363,   373,   375,   542,   363,   380,   363,     4,   374,    54,
      90,   144,   253,   547,     4,     4,   363,     4,   153,   267,
     548,     5,   373,     4,    39,   112,   363,   555,   363,    98,
      61,   122,   253,   281,   557,   122,   570,    61,   118,   122,
     160,   198,   249,   253,   278,   281,   291,   559,   560,    61,
     122,   281,   569,     5,     4,    33,   108,   209,   552,    66,
     365,   392,    66,   365,   393,    66,   365,   394,    12,   195,
     551,   363,   363,   231,   363,   395,   363,   278,     4,   363,
     363,     4,   300,   579,     4,   294,   577,     4,   294,   578,
       4,   380,   126,   363,   582,   363,   363,     4,     5,   363,
      11,   363,   363,   363,    29,    95,   166,   257,   262,   379,
     379,     4,   203,   363,   363,     4,     4,     4,   363,   363,
     363,   363,     4,     4,     5,     5,   373,     5,   363,   363,
     369,   371,   371,   373,   363,   363,   363,   363,   363,   363,
     363,   373,   375,   372,   363,   363,   372,   363,     5,   277,
     104,   193,   431,   199,   257,   434,   173,    78,   177,   257,
     435,   142,   181,   416,   416,     4,   438,     4,   440,   199,
     264,   442,   182,   443,   173,   380,   363,   363,   373,   373,
     380,   380,   380,   373,   380,   363,   373,     4,   456,     4,
     375,   454,   202,     4,   169,   319,   455,   202,   373,     4,
     135,   300,   458,     5,     5,   428,     4,   202,   137,   254,
     366,   363,     4,     5,    60,    66,   115,   123,   132,   147,
     153,   158,   214,   233,   238,   240,   266,   267,   274,   292,
     348,   513,   375,   194,   194,    66,   465,    66,   466,    66,
     467,   231,   468,   363,     5,   429,   232,   470,   374,   380,
       5,   373,   373,   373,   373,     4,   365,     4,     4,   202,
     363,    13,    14,    61,   196,   197,   271,   281,   282,   312,
      87,     5,     5,    13,    14,    61,   196,   197,   271,   281,
     282,   286,   312,    87,   160,   165,   374,   490,   495,    87,
     160,     5,   488,     4,     4,    13,    61,   196,   271,   281,
     312,     5,     5,     4,   363,   374,    19,    20,    21,    48,
      49,    52,    55,    62,    66,    74,    75,    82,    83,   100,
     106,   110,   111,   114,   123,   132,   153,   177,   201,   231,
     233,   239,   240,   255,   256,   266,   267,   292,   294,   306,
     308,   314,   348,    66,    80,    89,   100,   123,   132,   153,
     201,   240,   267,   306,   308,     4,    29,   164,   219,   245,
     507,     5,    63,   105,   242,   258,   259,   350,   351,   512,
     100,   505,    16,   267,   510,    39,   112,   200,   511,     4,
     365,     5,    16,   218,   301,   363,   267,   512,   520,   127,
     512,   521,    35,    39,   112,   136,   200,   300,   363,   522,
     373,   365,    92,   100,   106,   129,   153,   161,   201,   209,
     255,   267,   283,   525,    39,   112,   200,     5,   267,   293,
     529,    16,   125,   171,   218,   301,   530,   294,   365,   531,
       5,   100,   106,   309,    16,    16,     4,   363,   363,   363,
     363,   363,   363,   380,   363,   363,   372,   363,     4,   380,
       4,    39,   112,   200,   272,   549,    39,   112,   200,   272,
     550,     4,    98,     5,     5,    87,     4,     5,     5,    87,
       5,   560,    61,   122,   160,   281,   564,    61,   122,   281,
     568,    87,   160,    61,   122,   281,   562,     4,    61,   122,
     281,   561,     5,     5,     4,     4,     5,     5,     5,   363,
     363,   363,     4,   363,   574,   363,   363,   374,     4,     4,
       5,     4,     4,     5,     4,    98,   269,   381,   363,   363,
      11,     5,    11,   363,   363,    11,     4,    11,     4,     4,
     363,   363,   363,     4,   365,     4,     4,   380,   373,   380,
     363,   363,   363,   373,   363,   372,   363,   363,     5,     5,
     363,   375,   363,   373,   363,   380,   380,   381,   381,   381,
     380,   372,   363,   380,   363,   366,   457,   169,     5,     4,
     380,   160,   160,     4,     5,     4,     4,   363,   452,    37,
      37,   363,    19,    20,    21,    48,    49,    52,    59,    62,
      66,    74,    75,    82,   110,   111,   114,   123,   132,   153,
     177,   186,   231,   239,   240,   256,   267,   292,   294,   304,
     314,   348,    66,   123,   132,   158,   240,   292,    29,   164,
     219,   245,   514,   363,   214,   363,   515,    16,   363,   266,
     525,   266,   214,   363,   516,   294,   517,    16,    99,   363,
     363,     5,   381,    56,   373,     4,     5,   481,   363,     5,
       5,     5,   160,   189,   385,   385,   168,   273,   383,     4,
       4,     5,     5,   485,   279,   279,     5,     5,     5,    16,
     162,   384,   384,   383,     4,     4,   383,     5,     5,   489,
     165,   347,   374,   493,     5,   492,     5,     5,   496,     5,
     497,     5,    13,    14,    61,   196,   197,   271,   281,   282,
     286,   312,     4,     4,     5,     5,   385,   383,     4,     5,
       5,   380,    82,   155,   229,   230,   244,   287,   388,     6,
       7,   363,   368,   245,   245,   245,   106,    39,    66,   100,
     106,   112,   132,   153,   168,   201,   240,   255,   267,   294,
     306,   308,   309,   348,   506,   245,     5,    26,   170,   245,
     290,   142,   106,    21,    49,    52,    82,   111,   114,   233,
     266,    21,    49,    52,    55,    82,   111,   114,   233,   266,
     292,    39,   245,   245,   106,   365,     5,   218,    26,   231,
      35,   136,   300,   363,   270,   277,   251,   373,   525,    39,
     133,   231,   290,   251,   218,     5,     5,   255,    26,   231,
       4,     5,   365,     5,   218,    35,   136,   300,   363,   525,
     218,   365,     4,     4,   363,     5,   312,    21,    26,    48,
      49,    51,    52,    62,    74,    75,    82,    85,   103,   110,
     111,   114,   177,   233,   239,   256,   266,   293,   294,   314,
     359,   508,   363,   363,   363,   363,   363,   512,   373,     5,
       4,     5,   363,   363,   373,   363,   365,   363,   363,   512,
       5,     5,   363,   363,   365,     5,    16,     5,     5,   363,
     363,   372,   363,   363,     4,   363,   363,   112,   363,   363,
     112,     4,    41,    42,   175,   176,   204,   390,   390,    61,
     122,   281,   558,   390,     5,    61,   122,   281,   563,     5,
       5,    61,   122,   281,   565,     4,     5,     5,     4,    61,
     122,   281,   567,    61,   122,   281,   566,     5,     5,     4,
       5,     5,     4,   390,   390,   390,   363,   363,   363,     4,
     373,   363,   380,   374,     5,     5,    11,   363,   373,   375,
     363,    11,   363,   363,   363,    59,   363,     4,     4,   363,
     363,    46,   280,   417,     5,   365,   365,   380,   363,     4,
       4,     4,   380,   373,   363,   363,   363,   363,   380,   373,
     381,   372,   363,     4,   381,   363,     4,   375,     5,    23,
      24,    98,   382,     4,   373,   363,   363,     4,   363,     5,
      82,   155,   229,   230,   244,   287,   373,   375,   245,   245,
     245,    20,   245,   373,   245,    26,   170,   245,   290,   142,
      20,   245,   245,   245,    20,   245,    26,   172,   231,   172,
     270,   277,   172,   231,   298,   525,   133,   172,   231,   290,
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
       4,   385,   385,     5,   365,   373,   375,     5,   363,   363,
       5,   363,     5,   368,   106,   201,   255,   106,   201,   255,
       5,   363,   365,     5,   363,   373,   365,     5,   368,   245,
     245,    20,   245,    20,   245,   245,    20,   245,   316,   316,
       4,     4,     4,   506,     4,     4,     4,   316,   316,     4,
       5,     4,   363,     5,   363,     5,   368,   365,   373,   373,
     363,    26,    48,    51,    62,    85,   103,   359,   386,     4,
     363,   380,   365,     5,   373,   373,   363,   365,   365,   373,
     373,   363,   365,   363,     5,   363,   231,   231,   363,   363,
     231,   363,   231,   363,   363,   518,   526,   363,   231,   231,
     363,   363,   363,   363,   363,   363,   363,   363,     5,   312,
     363,   509,   363,   363,   231,   363,   363,   363,   363,   373,
     380,     5,     4,     4,   363,   363,   380,   363,   363,   363,
     373,   512,   363,   363,     5,     4,   363,   363,   363,   363,
       5,     5,     4,   390,     5,     5,     4,     4,     4,     5,
       5,     4,     4,     5,     5,     4,     5,     5,     4,   363,
     363,   363,   363,   380,   363,   373,   375,   363,   380,   363,
     363,   363,   363,   363,     5,   363,     4,   363,   363,     4,
     373,   363,   380,   182,   378,   363,   378,   381,   380,   373,
     363,   363,     4,   363,   373,   373,   363,   366,     5,     5,
       5,     5,     5,   373,   380,   373,   373,   373,   373,   375,
     373,   380,   373,   373,   373,   375,   373,   373,   373,   373,
     375,   373,   373,   373,   363,   373,   373,   373,   373,   373,
     373,   373,   363,   363,     4,   363,     5,   363,   385,     5,
       5,     5,   383,     4,     4,     5,   385,   384,     4,   385,
       5,     5,     5,   384,   384,   383,     4,     4,     5,    13,
      14,    61,   196,   197,   271,   281,   282,   312,    13,    14,
      61,   196,   197,   271,   281,   282,   312,    13,    14,    61,
     196,   197,   271,   281,   282,   312,   279,     5,     5,     5,
     384,   384,   383,     4,     4,   383,     5,   279,     5,     5,
       5,   384,   384,   383,     4,     4,   383,     5,   279,     5,
       5,     5,   384,   384,   383,     4,     4,   383,     5,     5,
       5,     5,   384,   384,   383,     4,     4,     5,   384,     4,
       4,   384,     4,     4,   385,     5,   380,   373,   363,   363,
     373,   363,     5,   368,     5,   373,   365,     5,   373,   380,
       5,   368,   363,   363,   363,   363,   363,   363,   363,   363,
     363,     4,     4,     5,     4,     4,   363,   373,   363,     5,
     368,   365,   380,   380,   363,   372,   380,   380,   363,   380,
     380,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,    55,    66,    93,   123,   132,   292,   294,   348,   523,
     524,   525,   537,   538,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   373,     5,   363,   363,
     363,   363,     4,     4,   380,   381,     5,     5,   372,   363,
       4,   380,   373,     4,   390,   390,   390,   368,   363,   363,
     363,   380,   363,   372,   363,   363,    11,     5,     5,   363,
     363,     4,   380,   373,   363,   363,   381,   382,   363,     5,
     363,   373,   375,     5,     5,     5,     5,     5,   380,   382,
     382,   382,   380,   382,   381,   382,   382,   380,   382,   382,
     382,   380,   382,   382,   380,   373,   382,   380,   382,   382,
     380,   382,   380,     4,   373,   375,     5,   363,     4,   385,
     384,     4,   384,     5,     5,     5,   384,   384,   383,     4,
       4,     5,     5,     5,     5,   384,   384,   383,     4,     4,
       5,     5,     5,     5,   384,   384,   383,     4,     4,     5,
     384,   385,   385,   385,   385,   385,     4,   385,   385,     4,
     384,   384,   385,   385,   385,   385,   385,     4,   385,   385,
       4,   384,   384,     4,     4,   384,     4,   384,   384,     4,
       4,     4,   374,   382,     4,   373,   382,   363,   373,     4,
     382,   382,   373,     4,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   373,   382,   363,   373,     4,
     372,   372,   373,   372,   372,   373,   373,   372,   372,   363,
     363,   363,   363,   363,   363,   368,   363,   363,   363,   360,
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
     363,   387,   368,   387,   526,   373,   506,     5,     4,     4,
       5,     5,     5,     4,   365,   368,   387,   387,   363,   363,
     368,   363,   363,   363,   363,   363,   372,   363,     5,   526,
     363,   387,   365,   527,   528,   380,   380,   365,   381,     4,
       5,   363,     5,     4,     4,   363,     4,    31,   190,   289,
     424,   373,     5,    31,   190,   289,   389,   373,     4,   424,
     363,   384,   385,   384,   385,   384,   385,   385,   384,   385,
     384,   384,   363,   382,   373,   373,   363,   373,   363,   373,
     373,   363,   373,   382,     4,   526,   526,   367,   363,   526,
       4,   526,   380,     5,     4,     4,   526,   526,   367,   363,
       4,   526,   526,   363,   373,   526,   526,   526,   527,   534,
     535,   525,   532,   533,   365,     4,     5,     5,     4,   193,
     310,   355,   363,   415,   424,     4,   373,   424,     4,   385,
     385,   385,   385,   385,   374,   382,   382,   363,   382,     4,
     382,   382,   363,   382,   363,   526,   526,     4,   363,   526,
       5,   363,   526,     4,   363,   526,   380,   534,   536,   537,
     360,   533,     5,     5,   363,   416,   363,   416,   380,   382,
       4,   373,   375,     4,   368,   367,   363,   363,   367,   363,
     373,   537,   365,     5,     5,   363,   363,   363,   363,   389,
       5,   373,   375,   380,   373,   375,   526,   363,     4,   526,
     363,   382,     5,     5,   363,     5,   363,   380,   380,     4,
     526,     4,     5,     5,     5,   367,   367,   526,   526,   526
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
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 277:
#line 894 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
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
    {fr->colormapMotionCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 282:
#line 903 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
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
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
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
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
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
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
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
    {fr->markerFillCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 752:
#line 1773 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 753:
#line 1775 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 754:
#line 1777 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 755:
#line 1779 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 756:
#line 1782 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 757:
#line 1784 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 758:
#line 1785 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 759:
#line 1787 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 760:
#line 1790 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 761:
#line 1793 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
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
#line 1825 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 771:
#line 1826 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 772:
#line 1828 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 773:
#line 1830 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 774:
#line 1832 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 775:
#line 1834 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 776:
#line 1835 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 777:
#line 1837 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 778:
#line 1839 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 779:
#line 1842 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 780:
#line 1846 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 781:
#line 1850 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 782:
#line 1852 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 783:
#line 1854 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 784:
#line 1856 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 785:
#line 1858 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 786:
#line 1860 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 787:
#line 1862 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 788:
#line 1864 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 789:
#line 1866 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 790:
#line 1868 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 791:
#line 1870 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 792:
#line 1872 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 793:
#line 1874 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 794:
#line 1876 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 795:
#line 1877 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 796:
#line 1879 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 797:
#line 1881 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 798:
#line 1882 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 799:
#line 1883 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 800:
#line 1885 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 801:
#line 1887 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 802:
#line 1888 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 803:
#line 1889 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 804:
#line 1890 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 805:
#line 1892 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 806:
#line 1894 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 807:
#line 1898 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 808:
#line 1901 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 809:
#line 1904 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 810:
#line 1908 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 811:
#line 1912 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 812:
#line 1917 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 813:
#line 1921 "frame/parser.Y"
    {fr->markerFillCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 814:
#line 1922 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 815:
#line 1923 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 816:
#line 1924 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 817:
#line 1926 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 818:
#line 1928 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 819:
#line 1932 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 820:
#line 1933 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 821:
#line 1934 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 822:
#line 1936 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 823:
#line 1939 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 824:
#line 1942 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 825:
#line 1945 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 826:
#line 1946 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 827:
#line 1950 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 828:
#line 1954 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 829:
#line 1956 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 830:
#line 1957 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 831:
#line 1959 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 832:
#line 1962 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 833:
#line 1965 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 834:
#line 1966 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 835:
#line 1968 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 836:
#line 1969 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 837:
#line 1970 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 838:
#line 1972 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 839:
#line 1973 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 840:
#line 1975 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 841:
#line 1978 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 842:
#line 1981 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 843:
#line 1983 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 844:
#line 1984 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 848:
#line 1989 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 849:
#line 1990 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 850:
#line 1992 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 851:
#line 1994 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 852:
#line 1996 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 853:
#line 1997 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 857:
#line 2003 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 858:
#line 2004 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 859:
#line 2005 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 860:
#line 2006 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 861:
#line 2007 "frame/parser.Y"
    {fr->markerFillCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 862:
#line 2008 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 863:
#line 2009 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 864:
#line 2010 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 865:
#line 2011 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 866:
#line 2012 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 867:
#line 2013 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 868:
#line 2015 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 869:
#line 2017 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 870:
#line 2018 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 871:
#line 2019 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 872:
#line 2020 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 873:
#line 2021 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 874:
#line 2023 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 875:
#line 2024 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 876:
#line 2025 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 877:
#line 2026 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 878:
#line 2027 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 879:
#line 2029 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 880:
#line 2030 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 881:
#line 2031 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 882:
#line 2032 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 883:
#line 2033 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 884:
#line 2034 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 885:
#line 2037 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 886:
#line 2038 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 887:
#line 2039 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 888:
#line 2040 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 889:
#line 2041 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 890:
#line 2042 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 891:
#line 2043 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 892:
#line 2044 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 893:
#line 2045 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 894:
#line 2046 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 895:
#line 2047 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 896:
#line 2048 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 897:
#line 2049 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 898:
#line 2050 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 899:
#line 2051 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 900:
#line 2052 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 901:
#line 2053 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 902:
#line 2054 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 903:
#line 2055 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 904:
#line 2056 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 905:
#line 2057 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 906:
#line 2060 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 907:
#line 2061 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 908:
#line 2062 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 909:
#line 2063 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 910:
#line 2064 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 911:
#line 2066 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 912:
#line 2076 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), currentFill,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2084 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), currentFill,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2093 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), currentFill,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2101 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), currentFill,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2108 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2115 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2123 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2131 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2136 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2141 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 922:
#line 2146 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 923:
#line 2151 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 924:
#line 2156 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 925:
#line 2161 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 926:
#line 2166 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 927:
#line 2175 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 928:
#line 2185 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 929:
#line 2195 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 930:
#line 2204 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 931:
#line 2212 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 932:
#line 2222 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 933:
#line 2232 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 934:
#line 2242 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 935:
#line 2254 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 936:
#line 2263 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 938:
#line 2271 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 939:
#line 2273 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 940:
#line 2275 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 941:
#line 2280 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 942:
#line 2283 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 943:
#line 2284 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 944:
#line 2285 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 945:
#line 2292 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 946:
#line 2294 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 947:
#line 2295 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 948:
#line 2298 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 949:
#line 2299 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 950:
#line 2300 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 951:
#line 2301 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 952:
#line 2302 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 953:
#line 2303 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 954:
#line 2304 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 956:
#line 2308 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 957:
#line 2309 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 958:
#line 2310 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 959:
#line 2311 "frame/parser.Y"
    {fr->getMarkerFillCmd();;}
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
#line 2337 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 974:
#line 2339 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 975:
#line 2340 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 976:
#line 2341 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 977:
#line 2343 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 978:
#line 2345 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 979:
#line 2348 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 980:
#line 2351 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 981:
#line 2352 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 982:
#line 2353 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 983:
#line 2354 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 984:
#line 2356 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 985:
#line 2357 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 986:
#line 2358 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 987:
#line 2359 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 988:
#line 2360 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 989:
#line 2362 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 990:
#line 2364 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 991:
#line 2366 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 992:
#line 2368 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 993:
#line 2370 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 994:
#line 2371 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 995:
#line 2373 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 996:
#line 2375 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 997:
#line 2377 "frame/parser.Y"
    {fr->getMarkerFillCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 998:
#line 2378 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 999:
#line 2379 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1000:
#line 2380 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1001:
#line 2382 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1002:
#line 2384 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1003:
#line 2387 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1004:
#line 2390 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1005:
#line 2391 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1006:
#line 2393 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1007:
#line 2396 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1008:
#line 2399 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1009:
#line 2400 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1010:
#line 2401 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1011:
#line 2402 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1012:
#line 2404 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1013:
#line 2406 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1014:
#line 2408 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1015:
#line 2409 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1016:
#line 2411 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1017:
#line 2412 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1018:
#line 2413 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1019:
#line 2414 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1020:
#line 2415 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1021:
#line 2417 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1022:
#line 2419 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1023:
#line 2421 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1024:
#line 2423 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1026:
#line 2425 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1027:
#line 2426 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1028:
#line 2428 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1029:
#line 2430 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1030:
#line 2431 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1031:
#line 2432 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1033:
#line 2434 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1035:
#line 2438 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1036:
#line 2439 "frame/parser.Y"
    {fr->getMarkerFillCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1037:
#line 2440 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1038:
#line 2441 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1039:
#line 2442 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1040:
#line 2443 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1041:
#line 2444 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1042:
#line 2446 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1043:
#line 2447 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1044:
#line 2449 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1045:
#line 2452 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1046:
#line 2453 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1047:
#line 2454 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1048:
#line 2455 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1049:
#line 2458 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1050:
#line 2459 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1051:
#line 2462 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1052:
#line 2463 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1053:
#line 2466 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1054:
#line 2467 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1055:
#line 2470 "frame/parser.Y"
    {
	  strncpy(currentFont, "helvetica 10 normal roman", 32);
	  strncpy(currentColor, "green", 16);
	  currentFill = 0;
	  currentDash[0] = 8;
	  currentDash[1] = 3;
	  currentWidth = 1;
	  strncpy(currentText, "", 80);
	  currentProps = defaultProps;
	  taglist.deleteAll();
	  cblist.deleteAll();
	;}
    break;

  case 1056:
#line 2484 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1057:
#line 2485 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1058:
#line 2489 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1059:
#line 2490 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1060:
#line 2494 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1061:
#line 2495 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1062:
#line 2500 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1063:
#line 2504 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1064:
#line 2509 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1065:
#line 2511 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1066:
#line 2514 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1067:
#line 2516 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1068:
#line 2519 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1069:
#line 2521 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1070:
#line 2524 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1071:
#line 2525 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1072:
#line 2526 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1073:
#line 2527 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1074:
#line 2528 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1075:
#line 2529 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1076:
#line 2531 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1079:
#line 2538 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1080:
#line 2539 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1081:
#line 2540 "frame/parser.Y"
    {currentFill = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1082:
#line 2541 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1083:
#line 2542 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1084:
#line 2543 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1085:
#line 2544 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1088:
#line 2549 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1089:
#line 2550 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1090:
#line 2551 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1091:
#line 2552 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1092:
#line 2553 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1093:
#line 2554 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1094:
#line 2555 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1095:
#line 2556 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1096:
#line 2557 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1097:
#line 2558 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1098:
#line 2559 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1101:
#line 2566 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1102:
#line 2567 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1104:
#line 2571 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1105:
#line 2573 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1106:
#line 2574 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1107:
#line 2577 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1108:
#line 2578 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1109:
#line 2579 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1110:
#line 2580 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1111:
#line 2581 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1112:
#line 2582 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1113:
#line 2585 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1114:
#line 2586 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1117:
#line 2594 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1118:
#line 2597 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1119:
#line 2598 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1123:
#line 2605 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1124:
#line 2608 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1125:
#line 2612 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1126:
#line 2613 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1127:
#line 2614 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1128:
#line 2615 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1129:
#line 2616 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1130:
#line 2617 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1131:
#line 2618 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1132:
#line 2619 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1133:
#line 2625 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1134:
#line 2626 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1135:
#line 2627 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1136:
#line 2628 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1137:
#line 2632 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1138:
#line 2633 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1139:
#line 2635 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1140:
#line 2640 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1142:
#line 2642 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1144:
#line 2644 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1145:
#line 2647 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1146:
#line 2649 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1147:
#line 2654 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1148:
#line 2657 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1149:
#line 2658 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1150:
#line 2659 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1151:
#line 2662 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1152:
#line 2664 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1153:
#line 2668 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1154:
#line 2669 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1155:
#line 2673 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1156:
#line 2674 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1157:
#line 2675 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1158:
#line 2676 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1159:
#line 2682 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1160:
#line 2683 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1161:
#line 2689 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1162:
#line 2690 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1163:
#line 2691 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1164:
#line 2692 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1167:
#line 2700 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1168:
#line 2702 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1169:
#line 2703 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1170:
#line 2704 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1171:
#line 2708 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1172:
#line 2709 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1173:
#line 2710 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1174:
#line 2711 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1175:
#line 2714 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1176:
#line 2715 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1177:
#line 2718 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1178:
#line 2719 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1179:
#line 2720 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1180:
#line 2723 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1181:
#line 2724 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1182:
#line 2725 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1183:
#line 2728 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1184:
#line 2729 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1186:
#line 2731 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1187:
#line 2732 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1188:
#line 2735 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1189:
#line 2736 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1190:
#line 2737 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1195:
#line 2744 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1196:
#line 2748 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1197:
#line 2750 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1198:
#line 2752 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1200:
#line 2757 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1201:
#line 2759 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1202:
#line 2761 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1212:
#line 2774 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1213:
#line 2775 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1214:
#line 2776 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1215:
#line 2779 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1216:
#line 2780 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1217:
#line 2781 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1218:
#line 2784 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1219:
#line 2785 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1220:
#line 2786 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1221:
#line 2789 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1222:
#line 2790 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1223:
#line 2791 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1225:
#line 2795 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1226:
#line 2796 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1227:
#line 2797 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1228:
#line 2800 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1229:
#line 2801 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1230:
#line 2802 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1231:
#line 2805 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1232:
#line 2806 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1233:
#line 2807 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1234:
#line 2810 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1235:
#line 2811 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1236:
#line 2812 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1237:
#line 2815 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1238:
#line 2816 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1239:
#line 2817 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1240:
#line 2821 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1241:
#line 2823 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1242:
#line 2825 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1243:
#line 2829 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1244:
#line 2833 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1245:
#line 2835 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1246:
#line 2839 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1247:
#line 2842 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1248:
#line 2843 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1249:
#line 2844 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1250:
#line 2845 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1251:
#line 2848 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1252:
#line 2850 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1253:
#line 2851 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1254:
#line 2853 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1256:
#line 2857 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1257:
#line 2858 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1258:
#line 2859 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1259:
#line 2862 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1260:
#line 2863 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1261:
#line 2867 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1263:
#line 2869 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1266:
#line 2874 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1267:
#line 2875 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1268:
#line 2876 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1269:
#line 2879 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1270:
#line 2880 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1271:
#line 2881 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1272:
#line 2884 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1273:
#line 2886 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1274:
#line 2891 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1275:
#line 2894 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1276:
#line 2901 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1277:
#line 2903 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1278:
#line 2905 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1279:
#line 2910 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1281:
#line 2914 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1282:
#line 2915 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1283:
#line 2916 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1284:
#line 2918 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1285:
#line 2920 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1286:
#line 2925 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11069 "frame/parser.C"
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


#line 2929 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

