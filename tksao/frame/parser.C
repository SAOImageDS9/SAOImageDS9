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
  void* ptr;
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
#define YYLAST   5715

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  362
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  222
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1286
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2826

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
      90,    93,    96,    99,   103,   106,   110,   113,   116,   119,
     122,   125,   128,   130,   134,   137,   140,   143,   145,   148,
     151,   154,   156,   159,   161,   164,   167,   170,   173,   175,
     177,   179,   182,   185,   188,   191,   194,   197,   200,   203,
     206,   209,   211,   213,   215,   217,   219,   221,   223,   225,
     227,   228,   231,   234,   236,   238,   239,   241,   243,   245,
     247,   249,   251,   253,   256,   259,   262,   265,   267,   269,
     271,   273,   275,   277,   279,   281,   283,   285,   287,   289,
     291,   293,   295,   297,   299,   301,   303,   305,   307,   309,
     311,   313,   315,   317,   319,   321,   323,   325,   327,   329,
     331,   333,   335,   336,   338,   340,   342,   344,   346,   347,
     349,   351,   353,   355,   357,   359,   361,   363,   365,   367,
     369,   371,   373,   375,   377,   379,   381,   382,   384,   386,
     388,   390,   392,   394,   396,   397,   399,   401,   402,   404,
     406,   408,   409,   411,   413,   414,   416,   418,   419,   421,
     423,   424,   426,   428,   430,   432,   434,   436,   438,   439,
     441,   443,   445,   447,   449,   451,   453,   454,   456,   458,
     460,   461,   463,   465,   467,   469,   471,   474,   477,   480,
     483,   486,   489,   492,   495,   497,   500,   502,   505,   507,
     510,   513,   520,   523,   528,   531,   534,   537,   541,   544,
     547,   549,   552,   554,   557,   562,   568,   571,   575,   581,
     588,   590,   592,   594,   602,   614,   623,   636,   638,   641,
     644,   646,   648,   651,   654,   657,   660,   664,   668,   671,
     674,   676,   678,   680,   682,   684,   686,   688,   691,   694,
     697,   699,   703,   706,   709,   712,   719,   730,   732,   735,
     737,   744,   755,   757,   760,   763,   766,   769,   772,   775,
     789,   803,   816,   829,   831,   832,   834,   836,   841,   848,
     850,   852,   854,   856,   858,   860,   862,   864,   866,   871,
     875,   880,   881,   888,   897,   900,   904,   908,   912,   913,
     918,   923,   928,   933,   937,   941,   943,   947,   953,   958,
     963,   967,   970,   971,   973,   975,   977,   980,   982,   986,
     987,   990,   993,   996,   999,  1002,  1005,  1008,  1011,  1014,
    1017,  1020,  1023,  1026,  1029,  1031,  1034,  1037,  1040,  1045,
    1049,  1052,  1055,  1058,  1060,  1064,  1067,  1070,  1072,  1075,
    1084,  1087,  1089,  1092,  1094,  1097,  1099,  1104,  1108,  1111,
    1113,  1121,  1130,  1138,  1147,  1149,  1151,  1153,  1156,  1158,
    1160,  1163,  1165,  1166,  1169,  1172,  1174,  1175,  1178,  1181,
    1183,  1185,  1188,  1191,  1194,  1196,  1198,  1200,  1202,  1204,
    1206,  1207,  1209,  1212,  1214,  1219,  1225,  1226,  1229,  1231,
    1237,  1240,  1243,  1245,  1247,  1249,  1252,  1254,  1257,  1259,
    1261,  1262,  1264,  1266,  1267,  1269,  1275,  1282,  1286,  1293,
    1297,  1299,  1303,  1305,  1307,  1309,  1313,  1320,  1328,  1334,
    1337,  1339,  1345,  1351,  1353,  1357,  1358,  1360,  1363,  1365,
    1370,  1372,  1375,  1377,  1380,  1384,  1387,  1389,  1392,  1394,
    1399,  1402,  1404,  1406,  1410,  1412,  1415,  1419,  1422,  1423,
    1425,  1427,  1432,  1435,  1436,  1438,  1442,  1447,  1452,  1453,
    1455,  1457,  1459,  1461,  1463,  1465,  1467,  1469,  1471,  1473,
    1475,  1477,  1479,  1481,  1483,  1486,  1488,  1491,  1493,  1496,
    1499,  1502,  1505,  1507,  1509,  1511,  1512,  1514,  1515,  1517,
    1518,  1520,  1521,  1523,  1524,  1527,  1530,  1531,  1533,  1536,
    1538,  1545,  1551,  1553,  1555,  1557,  1560,  1563,  1566,  1568,
    1570,  1572,  1574,  1577,  1579,  1581,  1583,  1586,  1588,  1590,
    1592,  1595,  1598,  1601,  1602,  1604,  1605,  1607,  1609,  1611,
    1613,  1615,  1617,  1619,  1621,  1624,  1627,  1630,  1632,  1635,
    1639,  1641,  1644,  1647,  1652,  1659,  1661,  1672,  1674,  1677,
    1681,  1685,  1688,  1691,  1694,  1697,  1700,  1703,  1706,  1711,
    1716,  1721,  1725,  1729,  1735,  1740,  1745,  1750,  1754,  1758,
    1762,  1766,  1769,  1772,  1777,  1781,  1785,  1789,  1793,  1798,
    1803,  1808,  1813,  1819,  1824,  1831,  1839,  1844,  1849,  1855,
    1858,  1862,  1866,  1870,  1873,  1877,  1881,  1885,  1889,  1894,
    1898,  1904,  1911,  1915,  1919,  1924,  1928,  1932,  1936,  1940,
    1944,  1950,  1954,  1958,  1963,  1967,  1970,  1973,  1975,  1979,
    1984,  1989,  1994,  1999,  2004,  2011,  2016,  2021,  2027,  2032,
    2037,  2042,  2047,  2053,  2058,  2065,  2073,  2078,  2083,  2089,
    2095,  2101,  2107,  2113,  2119,  2127,  2133,  2139,  2146,  2151,
    2156,  2161,  2166,  2171,  2178,  2183,  2188,  2194,  2200,  2206,
    2212,  2218,  2225,  2231,  2239,  2248,  2254,  2260,  2267,  2271,
    2275,  2279,  2283,  2288,  2292,  2298,  2305,  2309,  2313,  2318,
    2322,  2326,  2330,  2334,  2338,  2344,  2348,  2352,  2357,  2362,
    2367,  2371,  2377,  2382,  2387,  2390,  2394,  2401,  2408,  2410,
    2412,  2414,  2417,  2420,  2423,  2427,  2431,  2434,  2447,  2450,
    2453,  2455,  2459,  2464,  2467,  2468,  2472,  2474,  2477,  2480,
    2483,  2486,  2489,  2494,  2499,  2504,  2508,  2513,  2519,  2528,
    2535,  2540,  2550,  2557,  2565,  2576,  2588,  2601,  2611,  2617,
    2622,  2629,  2633,  2639,  2645,  2652,  2658,  2663,  2673,  2684,
    2696,  2706,  2713,  2720,  2727,  2734,  2741,  2748,  2755,  2762,
    2769,  2777,  2785,  2788,  2793,  2798,  2803,  2808,  2814,  2819,
    2824,  2830,  2836,  2840,  2845,  2850,  2855,  2860,  2868,  2878,
    2885,  2896,  2908,  2921,  2931,  2935,  2938,  2942,  2948,  2956,
    2961,  2965,  2969,  2976,  2984,  2992,  2997,  3002,  3007,  3017,
    3022,  3026,  3031,  3039,  3047,  3050,  3054,  3058,  3062,  3067,
    3070,  3073,  3078,  3089,  3093,  3095,  3099,  3102,  3105,  3108,
    3111,  3115,  3121,  3126,  3132,  3135,  3138,  3141,  3144,  3148,
    3151,  3154,  3157,  3161,  3164,  3168,  3173,  3177,  3181,  3188,
    3193,  3196,  3200,  3203,  3206,  3211,  3215,  3219,  3222,  3226,
    3228,  3231,  3233,  3236,  3239,  3242,  3244,  3246,  3248,  3250,
    3253,  3255,  3258,  3261,  3263,  3266,  3269,  3271,  3274,  3276,
    3278,  3280,  3282,  3284,  3286,  3288,  3290,  3291,  3293,  3296,
    3299,  3302,  3306,  3312,  3320,  3328,  3335,  3342,  3349,  3356,
    3362,  3369,  3376,  3383,  3390,  3397,  3404,  3411,  3423,  3431,
    3439,  3447,  3457,  3467,  3478,  3491,  3504,  3507,  3510,  3514,
    3519,  3524,  3529,  3530,  3532,  3534,  3539,  3544,  3546,  3548,
    3550,  3552,  3554,  3556,  3558,  3560,  3563,  3565,  3567,  3569,
    3573,  3577,  3586,  3593,  3604,  3612,  3620,  3626,  3629,  3632,
    3636,  3641,  3647,  3651,  3657,  3663,  3667,  3672,  3678,  3684,
    3690,  3694,  3700,  3703,  3707,  3711,  3717,  3721,  3725,  3729,
    3734,  3740,  3746,  3750,  3756,  3762,  3766,  3771,  3777,  3783,
    3786,  3789,  3793,  3799,  3806,  3813,  3817,  3821,  3825,  3832,
    3838,  3844,  3847,  3851,  3855,  3861,  3868,  3872,  3875,  3878,
    3882,  3885,  3889,  3892,  3896,  3902,  3909,  3912,  3915,  3918,
    3920,  3925,  3930,  3932,  3935,  3938,  3941,  3944,  3947,  3950,
    3953,  3957,  3960,  3964,  3967,  3971,  3973,  3975,  3977,  3979,
    3981,  3982,  3985,  3986,  3989,  3990,  3992,  3993,  3994,  3996,
    3998,  4000,  4002,  4004,  4012,  4021,  4024,  4031,  4034,  4041,
    4044,  4048,  4051,  4053,  4055,  4059,  4063,  4065,  4070,  4073,
    4075,  4079,  4083,  4088,  4092,  4096,  4100,  4102,  4104,  4106,
    4108,  4110,  4112,  4114,  4116,  4118,  4120,  4122,  4124,  4126,
    4128,  4131,  4132,  4133,  4136,  4143,  4151,  4154,  4156,  4160,
    4162,  4166,  4168,  4170,  4172,  4175,  4178,  4180,  4184,  4185,
    4186,  4189,  4192,  4194,  4198,  4204,  4206,  4209,  4212,  4216,
    4219,  4222,  4225,  4228,  4230,  4232,  4234,  4236,  4241,  4244,
    4248,  4252,  4255,  4259,  4262,  4265,  4268,  4272,  4276,  4280,
    4283,  4287,  4289,  4293,  4297,  4299,  4302,  4305,  4308,  4311,
    4321,  4328,  4330,  4332,  4334,  4336,  4339,  4342,  4346,  4350,
    4352,  4355,  4359,  4363,  4365,  4368,  4370,  4372,  4374,  4376,
    4378,  4381,  4384,  4389,  4391,  4394,  4397,  4400,  4404,  4406,
    4408,  4410,  4413,  4416,  4419,  4422,  4425,  4429,  4433,  4437,
    4441,  4445,  4449,  4453,  4455,  4458,  4461,  4464,  4468,  4471,
    4475,  4479,  4482,  4485,  4488,  4491,  4494,  4497,  4500,  4503,
    4506,  4509,  4512,  4515,  4518,  4521,  4525,  4529,  4533,  4536,
    4539,  4542,  4545,  4548,  4551,  4554,  4557,  4560,  4563,  4566,
    4569,  4573,  4577,  4581,  4586,  4593,  4596,  4598,  4600,  4602,
    4604,  4606,  4607,  4613,  4615,  4622,  4626,  4628,  4631,  4634,
    4637,  4641,  4645,  4648,  4651,  4654,  4657,  4660,  4663,  4667,
    4670,  4673,  4677,  4679,  4683,  4688,  4690,  4693,  4699,  4706,
    4713,  4716,  4718,  4721,  4724,  4730,  4737
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
     221,   541,    -1,   222,   542,    -1,   223,   545,    -1,   244,
      89,    -1,   237,   547,    -1,   235,   546,    -1,   252,    -1,
     248,   520,   549,    -1,   254,   554,    -1,   256,   555,    -1,
     261,   557,    -1,   275,    -1,   281,   572,    -1,   296,     4,
      -1,   297,   392,    -1,   308,    -1,   310,   574,    -1,   316,
      -1,   319,   576,    -1,   320,   577,    -1,   350,   581,    -1,
     357,   582,    -1,     3,    -1,     4,    -1,   366,    -1,   199,
     366,    -1,   224,   366,    -1,   226,   366,    -1,   320,   366,
      -1,    44,   366,    -1,    47,   366,    -1,    77,   366,    -1,
      85,   366,    -1,   147,   366,    -1,   254,   366,    -1,     4,
      -1,   353,    -1,   358,    -1,   218,    -1,   304,    -1,   209,
      -1,   359,    -1,   217,    -1,   122,    -1,    -1,   255,    38,
      -1,   138,    38,    -1,   255,    -1,   138,    -1,    -1,   369,
      -1,   364,    -1,     7,    -1,     8,    -1,     9,    -1,    10,
      -1,    11,    -1,   370,   370,    -1,   371,   372,    -1,   372,
     372,    -1,   364,   364,    -1,   161,    -1,   228,    -1,   103,
      -1,    19,    -1,   375,    -1,   320,    -1,   321,    -1,   322,
      -1,   323,    -1,   324,    -1,   325,    -1,   326,    -1,   327,
      -1,   328,    -1,   329,    -1,   330,    -1,   331,    -1,   332,
      -1,   333,    -1,   334,    -1,   335,    -1,   336,    -1,   337,
      -1,   338,    -1,   339,    -1,   340,    -1,   341,    -1,   342,
      -1,   343,    -1,   344,    -1,   345,    -1,   346,    -1,   347,
      -1,    57,    -1,   223,    -1,    -1,   354,    -1,   212,    -1,
     204,    -1,   211,    -1,   247,    -1,    -1,   284,    -1,   266,
      -1,    92,    -1,   175,    -1,   179,    -1,   183,    -1,   236,
      -1,   285,    -1,   286,    -1,    28,    -1,   277,    -1,   155,
      -1,    30,    -1,   263,    -1,   258,    -1,    96,    -1,   167,
      -1,    -1,   131,    -1,    35,    -1,   132,    -1,   168,    -1,
     158,    -1,   140,    -1,   108,    -1,    -1,    99,    -1,   270,
      -1,    -1,    99,    -1,    24,    -1,    25,    -1,    -1,   274,
      -1,   169,    -1,    -1,    17,    -1,   163,    -1,    -1,   161,
      -1,   190,    -1,    -1,    63,    -1,    49,    -1,   104,    -1,
      86,    -1,   360,    -1,    27,    -1,    52,    -1,    -1,     4,
      -1,    83,    -1,   156,    -1,   230,    -1,   231,    -1,   245,
      -1,   288,    -1,    -1,    32,    -1,   290,    -1,   191,    -1,
      -1,   205,    -1,    42,    -1,    43,    -1,   176,    -1,   177,
      -1,   314,   396,    -1,    48,   393,    -1,    75,   394,    -1,
     154,   395,    -1,   193,   552,    -1,    37,   553,    -1,   262,
     364,    -1,   298,   364,    -1,   366,    -1,    67,     5,    -1,
     366,    -1,    67,     5,    -1,   366,    -1,    67,     5,    -1,
     364,   364,    -1,   232,   364,   364,   364,   364,   364,    -1,
      12,   398,    -1,    72,     5,     5,     5,    -1,   102,     4,
      -1,   121,   399,    -1,   139,   400,    -1,    54,   278,     4,
      -1,   301,   401,    -1,   125,     5,    -1,    60,    -1,   364,
     364,    -1,   364,    -1,   364,   364,    -1,   364,    12,   364,
     364,    -1,   364,   364,    12,   364,   364,    -1,   301,   364,
      -1,   301,   364,   364,    -1,   301,   364,    12,   364,   364,
      -1,   301,   364,   364,    12,   364,   364,    -1,    32,    -1,
     290,    -1,   127,    -1,   364,   364,    12,    60,     5,     5,
       5,    -1,   364,   364,     4,   364,   364,    12,    60,     5,
       5,     5,     5,    -1,   364,   364,    12,   364,   364,     5,
       5,     5,    -1,   364,   364,     4,   364,   364,    12,   364,
     364,     5,     5,     5,     5,    -1,   364,    -1,   364,   364,
      -1,   301,   403,    -1,   127,    -1,   364,    -1,   364,   364,
      -1,   265,   405,    -1,   200,   406,    -1,   194,   407,    -1,
     311,   364,   364,    -1,   311,   204,   204,    -1,   356,   408,
      -1,   239,   366,    -1,   143,    -1,   182,    -1,   364,    -1,
     194,    -1,   356,    -1,   355,    -1,   311,    -1,     4,   380,
      -1,   200,   380,    -1,   258,     4,    -1,   251,    -1,   364,
       4,     4,    -1,    79,   364,    -1,   258,     4,    -1,   178,
       4,    -1,     4,   364,   364,     4,     6,     4,    -1,   254,
     364,   364,   364,   364,   364,   364,     4,     6,     4,    -1,
      40,    -1,   201,   410,    -1,   113,    -1,     4,   364,   364,
       4,     6,     4,    -1,   254,   364,   364,   364,   364,   364,
     364,     4,     6,     4,    -1,   379,    -1,   183,   364,    -1,
      84,   413,    -1,   101,   414,    -1,   181,   415,    -1,   225,
     419,    -1,   261,   420,    -1,     5,     4,     4,   418,     4,
       4,   379,   364,   416,   417,   364,   364,     5,    -1,     5,
       4,     4,   418,     4,     4,   379,   364,   364,   417,   364,
     364,     5,    -1,     5,     4,     4,   418,     4,     4,   379,
     364,   416,   364,   364,     5,    -1,     5,     4,     4,   418,
       4,     4,   379,   364,   364,   364,   364,     5,    -1,   234,
      -1,    -1,    31,    -1,     5,    -1,     5,     5,     4,   366,
      -1,     5,     4,   366,     5,   374,   381,    -1,   194,    -1,
     356,    -1,   355,    -1,   311,    -1,   143,    -1,   182,    -1,
     281,    -1,    47,    -1,     5,    -1,     5,     5,     4,   366,
      -1,     5,   374,   381,    -1,    31,     5,   374,   381,    -1,
      -1,   364,   364,   364,   364,   374,   381,    -1,    60,   373,
     374,   381,   364,   364,   374,   383,    -1,   297,   422,    -1,
      40,   364,   364,    -1,   201,   364,   364,    -1,   113,   364,
     364,    -1,    -1,   364,   364,   374,   381,    -1,    40,   364,
     364,     4,    -1,   201,   364,   364,     4,    -1,   113,   364,
     364,     4,    -1,   376,   364,   364,    -1,   374,   381,   373,
      -1,   366,    -1,   319,   364,   364,    -1,    40,   201,   376,
     364,   364,    -1,   201,   376,   364,   364,    -1,    40,   201,
     374,   373,    -1,   201,   374,   373,    -1,    33,     4,    -1,
      -1,    32,    -1,   290,    -1,   191,    -1,     6,   364,    -1,
      65,    -1,   149,   119,     5,    -1,    -1,    41,    67,    -1,
      44,   431,    -1,    47,   433,    -1,    66,   434,    -1,    69,
     438,    -1,    68,   437,    -1,    70,   440,    -1,    78,   442,
      -1,    80,   445,    -1,    85,   446,    -1,    87,   447,    -1,
      89,   449,    -1,    88,   448,    -1,    95,   450,    -1,    97,
      -1,   128,   454,    -1,   146,   460,    -1,   154,    67,    -1,
     156,     5,     5,     4,    -1,   157,    90,   429,    -1,   160,
     452,    -1,   164,   451,    -1,   166,    16,    -1,   194,    -1,
     189,   520,   514,    -1,   190,   461,    -1,   204,    67,    -1,
     221,    -1,   222,   462,    -1,   229,   292,   376,   364,   364,
       4,     4,     5,    -1,   254,   463,    -1,   256,    -1,   281,
     464,    -1,   296,    -1,   297,   465,    -1,   305,    -1,   312,
     376,   364,   364,    -1,   318,    90,   430,    -1,   320,   470,
      -1,   357,    -1,     5,     5,   364,   364,   376,     4,   425,
      -1,     5,     5,   364,   364,   374,   381,     4,   425,    -1,
       5,     5,   364,   364,   376,     4,   425,    -1,     5,     5,
     364,   364,   374,   381,     4,   425,    -1,   102,    -1,   121,
      -1,   139,    -1,    54,   278,    -1,    89,    -1,   125,    -1,
      72,   432,    -1,   180,    -1,    -1,   194,     5,    -1,   105,
       5,    -1,   121,    -1,    -1,   416,   417,    -1,   364,   417,
      -1,   265,    -1,   200,    -1,   194,   435,    -1,   311,   174,
      -1,   356,   436,    -1,   239,    -1,   200,    -1,   258,    -1,
      79,    -1,   258,    -1,   178,    -1,    -1,   293,    -1,   174,
     439,    -1,     4,    -1,     4,   376,   364,   364,    -1,     4,
     364,   364,   379,   364,    -1,    -1,   174,   441,    -1,   183,
      -1,     4,   364,   364,   379,   364,    -1,   374,   381,    -1,
      66,   443,    -1,    67,    -1,    93,    -1,   174,    -1,   215,
     174,    -1,   193,    -1,    70,   444,    -1,   281,    -1,   349,
      -1,    -1,   200,    -1,   265,    -1,    -1,   183,    -1,   364,
     364,   374,   381,   382,    -1,   376,   364,   364,   374,   381,
     382,    -1,   374,   381,   382,    -1,    60,   374,   381,   382,
     374,   383,    -1,   297,   374,   381,    -1,   376,    -1,   374,
     381,   382,    -1,   289,    -1,    33,    -1,   376,    -1,   374,
     381,   382,    -1,   374,   381,   373,   364,   364,     5,    -1,
       4,   374,   381,   373,   364,   364,     5,    -1,   376,   364,
     364,     4,     4,    -1,     5,   367,    -1,    66,    -1,   376,
     364,   364,     5,   367,    -1,     6,     4,     4,     4,     4,
      -1,    89,    -1,   123,   203,   453,    -1,    -1,     4,    -1,
     364,   364,    -1,   206,    -1,    60,   374,   381,   382,    -1,
      82,    -1,   102,   457,    -1,    45,    -1,   119,   455,    -1,
     123,   203,   458,    -1,   151,   456,    -1,   152,    -1,   216,
     203,    -1,   278,    -1,   278,   374,   381,   383,    -1,   279,
     459,    -1,   349,    -1,     4,    -1,   376,   364,   364,    -1,
       4,    -1,   170,     5,    -1,     4,   170,     5,    -1,   320,
       4,    -1,    -1,     4,    -1,   367,    -1,   367,   376,   364,
     364,    -1,   367,     4,    -1,    -1,     4,    -1,   136,   161,
     374,    -1,   136,   161,     4,   374,    -1,   301,   161,   364,
     374,    -1,    -1,   220,    -1,   313,    -1,    67,    -1,   188,
      -1,   247,    -1,   291,    -1,   300,    -1,    82,    -1,    46,
      -1,   239,    -1,    62,    -1,   291,    -1,   314,    -1,   139,
      -1,   246,    -1,   246,   195,    -1,   276,    -1,   276,   195,
      -1,    21,    -1,   314,   469,    -1,    48,   466,    -1,    75,
     467,    -1,   154,   468,    -1,   193,    -1,    37,    -1,   262,
      -1,    -1,    67,    -1,    -1,    67,    -1,    -1,    67,    -1,
      -1,   232,    -1,    -1,    16,   471,    -1,   203,   375,    -1,
      -1,   233,    -1,    84,   473,    -1,   101,    -1,   374,   381,
     382,   474,     5,     5,    -1,   374,   381,   382,   474,     5,
      -1,    20,    -1,   242,    -1,    19,    -1,    41,    67,    -1,
      44,   476,    -1,    78,   477,    -1,    85,    -1,    96,    -1,
      97,    -1,   103,    -1,   128,   478,    -1,   146,    -1,   160,
      -1,   167,    -1,   189,   479,    -1,   228,    -1,   161,    -1,
     281,    -1,   291,   374,    -1,   320,   480,    -1,    73,     5,
      -1,    -1,    31,    -1,    -1,    44,    -1,    88,    -1,   199,
      -1,   154,    -1,   268,    -1,   225,    -1,   306,    -1,   374,
      -1,    59,   374,    -1,   117,   374,    -1,   179,   374,    -1,
      18,    -1,   297,   374,    -1,   207,     4,     4,    -1,   118,
      -1,   192,     5,    -1,    89,   483,    -1,   269,   123,   203,
     482,    -1,   269,     6,     4,     4,     4,     4,    -1,   310,
      -1,   320,   364,   364,   364,   364,   364,   364,   364,   364,
       4,    -1,     5,    -1,     5,     4,    -1,     4,     4,    57,
      -1,     4,     4,   374,    -1,   200,   366,    -1,    26,   485,
      -1,   114,   487,    -1,   128,   488,    -1,   163,   501,    -1,
     214,   499,    -1,   227,   500,    -1,     5,    14,     5,   386,
      -1,     5,    15,     5,   386,    -1,     5,    62,     5,   386,
      -1,     5,   197,   386,    -1,     5,   198,   386,    -1,     5,
     272,   384,     4,   386,    -1,     5,   282,     4,   386,    -1,
       5,   283,     4,   386,    -1,     5,   313,     5,   386,    -1,
     254,    88,   486,    -1,     5,    14,     5,    -1,     5,    15,
       5,    -1,     5,    62,     5,    -1,     5,   197,    -1,     5,
     198,    -1,     5,   272,   384,     4,    -1,     5,   282,     4,
      -1,     5,   283,     4,    -1,     5,   313,     5,    -1,     5,
       5,   280,    -1,     5,    14,     5,   386,    -1,     5,    15,
       5,   386,    -1,     5,    62,     5,   386,    -1,     5,   197,
     385,   386,    -1,     5,     5,   280,   385,   386,    -1,     5,
     198,   385,   386,    -1,     5,   272,   384,     4,   385,   386,
      -1,     5,   287,   384,     4,     4,   385,   386,    -1,     5,
     282,     4,   386,    -1,     5,   283,     4,   386,    -1,     5,
     313,     5,   385,   386,    -1,   279,   489,    -1,   119,    88,
     490,    -1,   254,   161,   498,    -1,   254,    88,   497,    -1,
     199,   491,    -1,     5,    14,     5,    -1,     5,    15,     5,
      -1,     5,    62,     5,    -1,     5,   197,   385,    -1,     5,
       5,   280,   385,    -1,     5,   198,   385,    -1,     5,   272,
     384,     4,   385,    -1,     5,   287,   384,     4,     4,   385,
      -1,     5,   282,     4,    -1,     5,   283,     4,    -1,     5,
     313,     5,   385,    -1,     5,    14,     5,    -1,     5,    15,
       5,    -1,     5,    62,     5,    -1,     5,   197,   385,    -1,
       5,   198,   385,    -1,     5,   272,   384,     4,   385,    -1,
       5,   282,     4,    -1,     5,   283,     4,    -1,     5,   313,
       5,   385,    -1,   161,   166,   492,    -1,   166,   493,    -1,
     161,   494,    -1,   496,    -1,   161,   348,   495,    -1,     5,
      14,     5,   386,    -1,     5,    15,     5,   386,    -1,     5,
      62,     5,   386,    -1,     5,   197,   385,   386,    -1,     5,
     198,   385,   386,    -1,     5,   272,   384,     4,   385,   386,
      -1,     5,   282,     4,   386,    -1,     5,   283,     4,   386,
      -1,     5,   313,     5,   385,   386,    -1,     5,    14,     5,
     386,    -1,     5,    15,     5,   386,    -1,     5,    62,     5,
     386,    -1,     5,   197,   385,   386,    -1,     5,     5,   280,
     385,   386,    -1,     5,   198,   385,   386,    -1,     5,   272,
     384,     4,   385,   386,    -1,     5,   287,   384,     4,     4,
     385,   386,    -1,     5,   282,     4,   386,    -1,     5,   283,
       4,   386,    -1,     5,   313,     5,   385,   386,    -1,   375,
       5,    14,     5,   386,    -1,   375,     5,    15,     5,   386,
      -1,   375,     5,    62,     5,   386,    -1,   375,     5,   197,
     385,   386,    -1,   375,     5,   198,   385,   386,    -1,   375,
       5,   272,   384,     4,   385,   386,    -1,   375,     5,   282,
       4,   386,    -1,   375,     5,   283,     4,   386,    -1,   375,
       5,   313,     5,   385,   386,    -1,     5,    14,     5,   386,
      -1,     5,    15,     5,   386,    -1,     5,    62,     5,   386,
      -1,     5,   197,   385,   386,    -1,     5,   198,   385,   386,
      -1,     5,   272,   384,     4,   385,   386,    -1,     5,   282,
       4,   386,    -1,     5,   283,     4,   386,    -1,     5,   313,
       5,   385,   386,    -1,   375,     5,    14,     5,   386,    -1,
     375,     5,    15,     5,   386,    -1,   375,     5,    62,     5,
     386,    -1,   375,     5,   197,   385,   386,    -1,   375,     5,
       5,   280,   385,   386,    -1,   375,     5,   198,   385,   386,
      -1,   375,     5,   272,   384,     4,   385,   386,    -1,   375,
       5,   287,   384,     4,     4,   385,   386,    -1,   375,     5,
     282,     4,   386,    -1,   375,     5,   283,     4,   386,    -1,
     375,     5,   313,     5,   385,   386,    -1,     5,    14,     5,
      -1,     5,    15,     5,    -1,     5,    62,     5,    -1,     5,
     197,   385,    -1,     5,     5,   280,   385,    -1,     5,   198,
     385,    -1,     5,   272,   384,     4,   385,    -1,     5,   287,
     384,     4,     4,   385,    -1,     5,   282,     4,    -1,     5,
     283,     4,    -1,     5,   313,     5,   385,    -1,     5,    14,
       5,    -1,     5,    15,     5,    -1,     5,    62,     5,    -1,
       5,   197,   385,    -1,     5,   198,   385,    -1,     5,   272,
     384,     4,   385,    -1,     5,   282,     4,    -1,     5,   283,
       4,    -1,     5,   313,     5,   385,    -1,     5,    14,     5,
     386,    -1,     5,    62,     5,   386,    -1,     5,   197,   386,
      -1,     5,   272,   384,     4,   386,    -1,     5,   282,     4,
     386,    -1,     5,   313,     5,   386,    -1,     5,     5,    -1,
     279,     5,     5,    -1,    95,     4,     4,     4,     4,     4,
      -1,   194,     4,     4,     4,     4,     4,    -1,   113,    -1,
     238,    -1,   366,    -1,   144,   366,    -1,    89,   366,    -1,
      67,     5,    -1,     5,     4,     4,    -1,   310,   364,   364,
      -1,   357,   364,    -1,     5,     5,   375,   381,     5,     5,
     375,   381,   364,   375,   383,     5,    -1,    61,   508,    -1,
      67,     5,    -1,    81,    -1,    74,   513,     5,    -1,    74,
     513,   313,     5,    -1,    76,   101,    -1,    -1,    84,   506,
     509,    -1,    90,    -1,   101,   511,    -1,   107,   512,    -1,
     116,     4,    -1,   133,     5,    -1,   154,    17,    -1,   154,
     219,   364,   364,    -1,   154,   302,   364,   364,    -1,     4,
      20,   389,   366,    -1,     4,    21,   369,    -1,     4,    21,
     369,   376,    -1,     4,    21,   369,   374,   381,    -1,     4,
      22,   246,   364,   364,     4,   374,   383,    -1,     4,    22,
     246,     5,   374,   383,    -1,     4,    49,   124,   366,    -1,
       4,    50,   246,   364,   364,   364,     4,   374,   383,    -1,
       4,    50,   246,     5,   374,   383,    -1,     4,    49,   246,
     364,   364,   374,   383,    -1,     4,    53,   107,   369,   369,
       4,   364,   364,   364,     4,    -1,     4,    53,   107,   369,
     369,     4,   364,   364,   364,     4,   376,    -1,     4,    53,
     107,   369,   369,     4,   364,   364,   364,     4,   374,   381,
      -1,     4,    53,   107,     5,     5,   374,   381,   374,   383,
      -1,     4,    56,   507,     5,     5,    -1,     4,    63,   124,
     366,    -1,     4,    63,   246,   364,   374,   383,    -1,     4,
      67,     5,    -1,     4,    75,    27,   366,   366,    -1,     4,
      75,   171,     5,     5,    -1,     4,    75,   246,   364,   374,
     383,    -1,     4,    75,   291,   374,   381,    -1,     4,    76,
     143,   366,    -1,     4,    83,   107,   369,   369,     4,   364,
     364,     4,    -1,     4,    83,   107,   369,   369,     4,   364,
     364,     4,   376,    -1,     4,    83,   107,   369,   369,     4,
     364,   364,     4,   374,   381,    -1,     4,    83,   107,     5,
       5,   374,   381,   374,   383,    -1,     4,    84,    22,   246,
     364,   364,    -1,     4,    84,    50,   246,   364,   364,    -1,
       4,    84,    53,    21,   364,   364,    -1,     4,    84,    53,
     246,   364,   364,    -1,     4,    84,   112,   246,   364,   364,
      -1,     4,    84,   115,    21,   364,   364,    -1,     4,    84,
     115,   246,   364,   364,    -1,     4,    84,    83,    21,   364,
     364,    -1,     4,    84,    83,   246,   364,   364,    -1,     4,
      84,   234,   317,     4,   364,   364,    -1,     4,    84,   267,
     317,     4,   364,   364,    -1,     4,   101,    -1,     4,   101,
      22,     4,    -1,     4,   101,    50,     4,    -1,     4,   101,
      53,     4,    -1,     4,   101,   112,     4,    -1,     4,   101,
      56,   507,     5,    -1,     4,   101,   115,     4,    -1,     4,
     101,    83,     4,    -1,     4,   101,   234,   317,     4,    -1,
       4,   101,   267,   317,     4,    -1,     4,   101,   293,    -1,
       4,   101,   293,     5,    -1,     4,   101,   293,     4,    -1,
       4,   107,    40,     4,    -1,     4,   111,   124,   366,    -1,
       4,   111,   246,   364,   364,   374,   383,    -1,     4,   112,
     246,   364,   364,   364,     4,   374,   383,    -1,     4,   112,
     246,     5,   374,   383,    -1,     4,   115,   107,   369,   369,
       4,   364,   364,   364,     4,    -1,     4,   115,   107,   369,
     369,     4,   364,   364,   364,     4,   376,    -1,     4,   115,
     107,   369,   369,     4,   364,   364,   364,     4,   374,   381,
      -1,     4,   115,   107,     5,     5,   374,   381,   374,   383,
      -1,     4,   133,     5,    -1,     4,   154,    -1,     4,   154,
     219,    -1,     4,   178,    27,   366,   366,    -1,     4,   178,
     232,   374,   381,   373,   373,    -1,     4,   202,   364,   364,
      -1,     4,   202,   137,    -1,     4,   202,    36,    -1,     4,
     202,   301,   374,   381,   373,    -1,     4,   234,   252,   364,
     364,   374,   383,    -1,     4,   267,   252,   364,   364,   374,
     383,    -1,     4,   232,   271,   387,    -1,     4,   232,   278,
       4,    -1,     4,   234,   124,   366,    -1,     4,   240,   374,
     381,   373,   373,   364,   374,   383,    -1,     4,   241,   526,
     366,    -1,     4,   256,    40,    -1,     4,   257,   134,     5,
      -1,     4,   257,   232,   374,   381,   373,   373,    -1,     4,
     257,   291,   374,   381,   374,   383,    -1,     4,   268,    -1,
       4,   268,   219,    -1,     4,   293,     5,    -1,     4,   295,
       5,    -1,     4,   295,   256,   366,    -1,     4,   307,    -1,
       4,   309,    -1,     4,   315,    27,   366,    -1,     4,   315,
     232,   374,   381,   373,   374,   383,   364,   369,    -1,     4,
     349,     4,    -1,   169,    -1,   169,   364,   364,    -1,   180,
     521,    -1,   181,   522,    -1,   202,   523,    -1,   239,   366,
      -1,   241,   526,   366,    -1,   241,   526,   366,   364,   364,
      -1,   256,    40,   364,   364,    -1,   256,   201,   364,   364,
       4,    -1,   256,   113,    -1,   261,   530,    -1,   268,   531,
      -1,   275,   532,    -1,     5,    67,     5,    -1,     5,    81,
      -1,     5,   101,    -1,     5,    90,    -1,     5,   133,     5,
      -1,     5,   154,    -1,     5,   154,   219,    -1,     5,   202,
     364,   364,    -1,     5,   202,   137,    -1,     5,   202,    36,
      -1,     5,   202,   301,   374,   381,   373,    -1,     5,   241,
     526,   366,    -1,     5,   268,    -1,     5,   268,   219,    -1,
       5,   307,    -1,     5,   309,    -1,   293,   107,     5,     5,
      -1,   293,   101,     5,    -1,   293,   101,    17,    -1,   293,
       5,    -1,   293,   310,     5,    -1,   225,    -1,   225,   374,
      -1,   306,    -1,   307,    17,    -1,   309,    17,    -1,   349,
       4,    -1,   268,    -1,   309,    -1,   154,    -1,   307,    -1,
      40,   202,    -1,   202,    -1,   113,   202,    -1,    40,   107,
      -1,   107,    -1,   113,   107,    -1,    40,   256,    -1,   256,
      -1,   113,   256,    -1,   101,    -1,   295,    -1,    67,    -1,
     349,    -1,   241,    -1,   133,    -1,   169,    -1,   310,    -1,
      -1,     4,    -1,    30,   366,    -1,   246,   364,    -1,   165,
       4,    -1,   220,     4,   364,    -1,    63,   364,   364,   364,
     527,    -1,   111,   364,   364,   364,   364,   368,   527,    -1,
      49,   364,   364,   364,   364,   368,   527,    -1,   234,   364,
     364,   364,   364,   527,    -1,   267,   364,   364,   364,   364,
     527,    -1,   178,   364,   364,   364,   364,   527,    -1,   315,
     364,   364,   364,   364,   527,    -1,   295,   364,   364,   368,
     527,    -1,    63,   232,   364,   364,   388,   527,    -1,    49,
     232,   364,   364,   388,   527,    -1,   104,   232,   364,   364,
     388,   527,    -1,    86,   232,   364,   364,   388,   527,    -1,
     360,   232,   364,   364,   388,   527,    -1,    27,   232,   364,
     364,   388,   527,    -1,    52,   232,   364,   364,   388,   527,
      -1,   257,   364,   364,   364,   364,   374,   381,   374,   383,
       5,   527,    -1,    75,   364,   364,   364,   374,   381,   527,
      -1,   240,   364,   364,   364,   364,   364,   527,    -1,    22,
     364,   364,   364,   364,     4,   527,    -1,   112,   364,   364,
     364,   364,   364,     4,   368,   527,    -1,    50,   364,   364,
     364,   364,   364,     4,   368,   527,    -1,    83,   364,   364,
     369,   369,     4,   364,   364,     4,   527,    -1,   115,   364,
     364,   369,   369,     4,   364,   364,   364,     4,   368,   527,
      -1,    53,   364,   364,   369,   369,     4,   364,   364,   364,
       4,   368,   527,    -1,    76,   527,    -1,   294,   510,    -1,
       5,   364,   364,    -1,   313,     5,   364,   364,    -1,   364,
     364,   313,     5,    -1,     5,   374,   381,   373,    -1,    -1,
     268,    -1,    17,    -1,    40,   364,   364,     4,    -1,   201,
     364,   364,     4,    -1,   113,    -1,   106,    -1,   351,    -1,
      64,    -1,   260,    -1,   259,    -1,   243,    -1,   352,    -1,
      61,   515,    -1,    67,    -1,   133,    -1,   116,    -1,   148,
     364,   364,    -1,   159,   364,   364,    -1,     4,    20,    83,
       5,     5,     5,   374,     4,    -1,     4,    20,   156,     5,
       5,     4,    -1,     4,    20,   230,     5,     5,     5,     5,
     374,   381,   390,    -1,     4,    20,   231,     5,     5,   374,
     390,    -1,     4,    20,   245,     5,     5,     5,   374,    -1,
       4,    20,   288,   374,   381,    -1,   159,    17,    -1,     4,
      21,    -1,     4,    21,   376,    -1,     4,    21,   374,   381,
      -1,     4,    22,   246,   374,   383,    -1,     4,    49,   124,
      -1,     4,    50,   246,   374,   383,    -1,     4,    49,   246,
     374,   383,    -1,     4,    53,    21,    -1,     4,    53,    21,
     376,    -1,     4,    53,    21,   374,   381,    -1,     4,    53,
     246,   374,   383,    -1,     4,    60,   374,   381,   382,    -1,
       4,    63,   124,    -1,     4,    63,   246,   374,   383,    -1,
       4,    67,    -1,     4,    75,    27,    -1,     4,    75,   171,
      -1,     4,    75,   246,   374,   383,    -1,     4,    75,   291,
      -1,     4,    76,   143,    -1,     4,    83,    21,    -1,     4,
      83,    21,   376,    -1,     4,    83,    21,   374,   381,    -1,
       4,    83,   246,   374,   383,    -1,     4,   111,   124,    -1,
       4,   111,   246,   374,   383,    -1,     4,   112,   246,   374,
     383,    -1,     4,   115,    21,    -1,     4,   115,    21,   376,
      -1,     4,   115,    21,   374,   381,    -1,     4,   115,   246,
     374,   383,    -1,     4,   133,    -1,     4,   154,    -1,     4,
     178,    27,    -1,     4,   178,   173,   374,   383,    -1,     4,
     178,   232,   374,   381,   382,    -1,     4,   187,   173,   364,
     374,   383,    -1,     4,   234,   124,    -1,     4,   232,   271,
      -1,     4,   232,   278,    -1,     4,   240,   232,   374,   381,
     382,    -1,     4,   240,   173,   374,   383,    -1,     4,   240,
     299,   374,   383,    -1,     4,   241,    -1,     4,   241,   526,
      -1,     4,   257,   134,    -1,     4,   257,   173,   374,   383,
      -1,     4,   257,   232,   374,   381,   382,    -1,     4,   257,
     291,    -1,     4,   268,    -1,     4,   293,    -1,     4,   293,
       4,    -1,     4,   295,    -1,     4,   295,   256,    -1,     4,
     305,    -1,     4,   315,    27,    -1,     4,   315,   173,   374,
     383,    -1,     4,   315,   232,   374,   381,   382,    -1,     4,
     349,    -1,   154,   516,    -1,   154,   215,    -1,   215,    -1,
     234,   267,   364,   364,    -1,   267,   267,   364,   364,    -1,
     239,    -1,   241,   526,    -1,   268,   517,    -1,   268,   215,
      -1,   275,   518,    -1,     5,    67,    -1,     5,   133,    -1,
       5,   159,    -1,     5,   241,   526,    -1,     5,   293,    -1,
       5,   293,   215,    -1,   293,    17,    -1,   293,   100,   203,
      -1,   349,    -1,    30,    -1,   246,    -1,   165,    -1,   220,
      -1,    -1,   364,   364,    -1,    -1,   364,   364,    -1,    -1,
     295,    -1,    -1,    -1,   233,    -1,   248,    -1,   311,    -1,
      58,    -1,   135,    -1,   513,   374,   381,   382,   366,   528,
     535,    -1,   268,   513,   374,   381,   382,   366,   528,   535,
      -1,   513,     5,    -1,   513,     5,     4,     5,   374,   381,
      -1,   513,     4,    -1,   513,     4,     4,     5,   374,   381,
      -1,   128,     5,    -1,   128,     5,     5,    -1,   364,   364,
      -1,   137,    -1,    36,    -1,    40,   364,   364,    -1,   201,
     364,   364,    -1,   113,    -1,   301,   374,   381,   373,    -1,
     524,   525,    -1,   525,    -1,   526,   361,   366,    -1,    67,
     361,     5,    -1,    94,   361,     4,     4,    -1,   349,   361,
       4,    -1,   133,   361,     5,    -1,   295,   361,     5,    -1,
     538,    -1,   539,    -1,   210,    -1,   268,    -1,   154,    -1,
      93,    -1,   130,    -1,   107,    -1,   202,    -1,   256,    -1,
     101,    -1,   162,    -1,   284,    -1,   519,    -1,   519,   524,
      -1,    -1,    -1,   529,   533,    -1,     5,   513,   374,   381,
     382,   366,    -1,   268,     5,   513,   374,   381,   382,   366,
      -1,   294,     5,    -1,    17,    -1,   219,   364,   364,    -1,
     302,    -1,   302,   364,   364,    -1,   126,    -1,   172,    -1,
     366,    -1,   295,   366,    -1,   533,   534,    -1,   534,    -1,
     526,   361,   366,    -1,    -1,    -1,   536,   537,    -1,   537,
     538,    -1,   538,    -1,   293,   361,     5,    -1,    56,   361,
     507,     5,     5,    -1,    65,    -1,    67,     5,    -1,   188,
     377,    -1,   247,   364,   364,    -1,   291,   374,    -1,   300,
     364,    -1,    46,   378,    -1,   188,     4,    -1,   360,    -1,
     358,    -1,   352,    -1,   210,    -1,   364,   364,   364,   364,
      -1,   364,   364,    -1,   376,   364,   364,    -1,   374,   381,
     373,    -1,   301,   543,    -1,    39,   364,   364,    -1,   201,
     544,    -1,   239,   366,    -1,   364,   364,    -1,   376,   364,
     364,    -1,   374,   381,   373,    -1,    40,   364,   364,    -1,
     364,   364,    -1,   113,   364,   364,    -1,   366,    -1,   320,
     375,   381,    -1,     5,     4,     4,    -1,   310,    -1,    71,
     548,    -1,   174,     4,    -1,   253,     4,    -1,   262,   364,
      -1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
      -1,     4,     4,     4,     4,     4,     4,    -1,    55,    -1,
     145,    -1,   254,    -1,    91,    -1,   154,   550,    -1,   268,
     551,    -1,    40,   364,   364,    -1,   201,   364,   364,    -1,
     113,    -1,   273,   113,    -1,    40,   364,   364,    -1,   201,
     364,   364,    -1,   113,    -1,   273,   113,    -1,   196,    -1,
      13,    -1,   210,    -1,    34,    -1,   109,    -1,    62,     5,
      -1,   291,   374,    -1,   314,     4,     4,     4,    -1,   364,
      -1,   364,    99,    -1,   201,   556,    -1,   301,   364,    -1,
     301,   364,    99,    -1,    40,    -1,   364,    -1,   113,    -1,
      26,   558,    -1,   128,   560,    -1,   214,   570,    -1,   114,
     571,    -1,   227,     5,    -1,   123,     5,   391,    -1,    62,
       5,   391,    -1,   282,     4,   391,    -1,   254,    88,   559,
      -1,   123,     5,   391,    -1,    62,     5,   391,    -1,   282,
       4,   391,    -1,   561,    -1,   161,   561,    -1,   292,   562,
      -1,   279,   563,    -1,   119,    88,   564,    -1,   199,   565,
      -1,   254,   161,   567,    -1,   254,    88,   568,    -1,   250,
     569,    -1,   123,     5,    -1,    62,     5,    -1,   282,     4,
      -1,   123,     5,    -1,    62,     5,    -1,   282,     4,    -1,
     123,     5,    -1,    62,     5,    -1,   282,     4,    -1,   123,
       5,    -1,    62,     5,    -1,   282,     4,    -1,   161,   566,
      -1,   123,     5,     4,    -1,    62,     5,     4,    -1,   282,
       4,     4,    -1,   123,     5,    -1,    62,     5,    -1,   282,
       4,    -1,   123,     5,    -1,    62,     5,    -1,   282,     4,
      -1,   123,     5,    -1,    62,     5,    -1,   282,     4,    -1,
     123,     5,    -1,    62,     5,    -1,   282,     4,    -1,   123,
       5,   391,    -1,    62,     5,   391,    -1,   282,     4,   391,
      -1,   123,     5,     5,   391,    -1,   573,     4,     4,   364,
     364,   369,    -1,   573,     4,    -1,   101,    -1,    51,    -1,
     303,    -1,   141,    -1,   110,    -1,    -1,     4,   364,   364,
     364,   364,    -1,   213,    -1,   213,     4,   364,   364,   364,
     364,    -1,   128,   279,   575,    -1,     4,    -1,     4,     4,
      -1,   364,   374,    -1,   364,   364,    -1,   301,   364,   364,
      -1,   375,   381,   382,    -1,    16,   580,    -1,   252,     4,
      -1,   249,   579,    -1,    23,   578,    -1,     4,     4,    -1,
       4,     5,    -1,   295,     4,     5,    -1,     4,     4,    -1,
       4,     5,    -1,   295,     4,     5,    -1,     4,    -1,     4,
     375,   381,    -1,     4,     6,   375,   381,    -1,   238,    -1,
     364,   364,    -1,   364,   364,    12,   364,   364,    -1,   364,
     364,    12,   376,   364,   364,    -1,   364,   364,    12,   374,
     381,   373,    -1,   301,   583,    -1,   127,    -1,   127,   364,
      -1,   364,   364,    -1,   364,   364,    12,   364,   364,    -1,
     364,   364,    12,   376,   364,   364,    -1,   364,   364,    12,
     374,   381,   373,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   467,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   525,   526,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   542,   544,   545,   546,   547,   549,   550,   551,   552,
     555,   556,   557,   558,   559,   562,   563,   566,   567,   568,
     571,   574,   577,   580,   592,   599,   606,   614,   615,   616,
     617,   618,   621,   622,   623,   624,   625,   626,   627,   628,
     629,   630,   631,   632,   633,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,   646,   647,   648,
     651,   652,   655,   656,   657,   658,   659,   660,   663,   664,
     665,   666,   667,   670,   671,   672,   673,   674,   675,   676,
     677,   680,   681,   682,   683,   684,   687,   688,   689,   690,
     691,   692,   693,   694,   697,   698,   699,   702,   703,   704,
     705,   708,   709,   710,   713,   714,   715,   718,   719,   720,
     723,   724,   725,   726,   727,   728,   729,   730,   733,   734,
     737,   738,   739,   740,   741,   742,   745,   746,   747,   748,
     751,   752,   753,   754,   755,   756,   759,   760,   761,   762,
     763,   764,   765,   766,   770,   771,   774,   775,   778,   779,
     782,   783,   787,   788,   789,   790,   791,   792,   793,   794,
     797,   798,   801,   802,   803,   805,   807,   808,   809,   811,
     815,   816,   819,   820,   822,   825,   827,   833,   834,   835,
     838,   839,   840,   843,   844,   845,   846,   847,   848,   849,
     855,   856,   859,   860,   861,   862,   863,   866,   867,   868,
     869,   872,   873,   878,   883,   890,   892,   894,   895,   896,
     899,   901,   904,   905,   908,   909,   910,   911,   912,   915,
     917,   919,   924,   929,   932,   933,   936,   937,   938,   945,
     946,   947,   948,   951,   952,   955,   956,   959,   960,   963,
     965,   969,   970,   973,   975,   976,   977,   978,   981,   982,
     984,   985,   986,   989,   991,   993,   994,   996,   998,  1000,
    1002,  1006,  1009,  1010,  1011,  1012,  1015,  1016,  1019,  1022,
    1023,  1024,  1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,
    1033,  1034,  1035,  1036,  1037,  1038,  1039,  1040,  1041,  1042,
    1043,  1044,  1045,  1046,  1047,  1048,  1049,  1050,  1051,  1052,
    1054,  1055,  1056,  1057,  1058,  1059,  1060,  1062,  1063,  1064,
    1067,  1069,  1073,  1075,  1079,  1080,  1081,  1082,  1083,  1084,
    1085,  1086,  1089,  1090,  1091,  1094,  1097,  1098,  1100,  1102,
    1103,  1104,  1105,  1106,  1107,  1114,  1115,  1118,  1119,  1120,
    1123,  1124,  1127,  1130,  1131,  1133,  1137,  1138,  1139,  1142,
    1146,  1148,  1149,  1150,  1151,  1152,  1153,  1154,  1155,  1156,
    1159,  1160,  1161,  1164,  1165,  1168,  1170,  1178,  1180,  1182,
    1186,  1187,  1189,  1192,  1195,  1196,  1200,  1202,  1205,  1210,
    1211,  1212,  1216,  1217,  1218,  1221,  1222,  1223,  1226,  1227,
    1229,  1230,  1231,  1232,  1233,  1234,  1235,  1236,  1237,  1238,
    1240,  1241,  1244,  1245,  1248,  1249,  1250,  1251,  1254,  1255,
    1258,  1260,  1263,  1267,  1268,  1269,  1271,  1273,  1277,  1278,
    1279,  1282,  1283,  1284,  1285,  1286,  1287,  1288,  1291,  1294,
    1295,  1296,  1299,  1300,  1301,  1302,  1303,  1304,  1307,  1308,
    1309,  1310,  1311,  1312,  1313,  1316,  1317,  1320,  1321,  1324,
    1325,  1328,  1329,  1332,  1333,  1334,  1337,  1338,  1341,  1342,
    1345,  1348,  1356,  1357,  1360,  1361,  1362,  1363,  1364,  1365,
    1366,  1367,  1368,  1369,  1370,  1371,  1372,  1373,  1374,  1375,
    1376,  1377,  1380,  1383,  1384,  1387,  1388,  1389,  1390,  1393,
    1394,  1395,  1396,  1399,  1400,  1401,  1402,  1403,  1404,  1407,
    1408,  1409,  1410,  1411,  1412,  1414,  1415,  1420,  1421,  1424,
    1426,  1428,  1431,  1432,  1433,  1434,  1435,  1436,  1439,  1441,
    1443,  1445,  1446,  1448,  1450,  1452,  1454,  1456,  1459,  1460,
    1461,  1462,  1463,  1464,  1466,  1467,  1468,  1471,  1474,  1476,
    1478,  1480,  1482,  1484,  1486,  1488,  1491,  1493,  1495,  1497,
    1498,  1499,  1500,  1501,  1504,  1505,  1506,  1507,  1508,  1509,
    1510,  1512,  1514,  1515,  1516,  1519,  1520,  1521,  1522,  1523,
    1524,  1526,  1527,  1528,  1531,  1532,  1533,  1534,  1535,  1538,
    1541,  1544,  1547,  1550,  1553,  1556,  1559,  1562,  1567,  1570,
    1573,  1576,  1579,  1582,  1585,  1588,  1591,  1594,  1597,  1602,
    1605,  1608,  1611,  1614,  1617,  1620,  1623,  1626,  1631,  1633,
    1635,  1637,  1639,  1641,  1646,  1648,  1650,  1654,  1657,  1660,
    1663,  1666,  1669,  1672,  1675,  1678,  1681,  1684,  1689,  1690,
    1691,  1692,  1693,  1694,  1695,  1697,  1699,  1700,  1701,  1704,
    1705,  1706,  1707,  1708,  1709,  1711,  1712,  1713,  1716,  1718,
    1720,  1721,  1723,  1725,  1729,  1730,  1733,  1734,  1735,  1738,
    1741,  1742,  1743,  1744,  1745,  1746,  1747,  1750,  1758,  1759,
    1760,  1761,  1763,  1765,  1766,  1766,  1767,  1768,  1769,  1770,
    1771,  1773,  1774,  1776,  1779,  1782,  1783,  1784,  1787,  1790,
    1793,  1794,  1798,  1801,  1804,  1807,  1811,  1816,  1821,  1823,
    1824,  1826,  1827,  1829,  1831,  1833,  1835,  1836,  1838,  1840,
    1844,  1849,  1851,  1853,  1855,  1857,  1859,  1861,  1863,  1865,
    1867,  1869,  1872,  1873,  1875,  1877,  1878,  1880,  1882,  1883,
    1884,  1886,  1888,  1889,  1890,  1892,  1893,  1894,  1897,  1901,
    1904,  1907,  1911,  1916,  1922,  1923,  1924,  1926,  1927,  1931,
    1933,  1934,  1935,  1938,  1941,  1944,  1946,  1948,  1949,  1954,
    1957,  1958,  1959,  1962,  1966,  1967,  1969,  1970,  1971,  1973,
    1974,  1976,  1977,  1982,  1984,  1985,  1987,  1988,  1989,  1990,
    1991,  1992,  1994,  1996,  1998,  1999,  2000,  2002,  2004,  2005,
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
    2312,  2314,  2316,  2318,  2320,  2322,  2324,  2327,  2328,  2329,
    2330,  2332,  2335,  2336,  2338,  2340,  2341,  2342,  2344,  2347,
    2350,  2351,  2353,  2354,  2355,  2356,  2358,  2359,  2360,  2361,
    2362,  2364,  2366,  2367,  2369,  2372,  2373,  2374,  2376,  2378,
    2379,  2380,  2381,  2383,  2386,  2390,  2391,  2392,  2393,  2396,
    2399,  2401,  2402,  2403,  2404,  2406,  2409,  2410,  2412,  2413,
    2414,  2415,  2416,  2418,  2419,  2421,  2424,  2425,  2426,  2427,
    2428,  2430,  2432,  2433,  2434,  2435,  2437,  2439,  2440,  2441,
    2442,  2443,  2444,  2446,  2447,  2449,  2452,  2453,  2454,  2455,
    2458,  2459,  2462,  2463,  2466,  2467,  2470,  2483,  2484,  2488,
    2489,  2493,  2494,  2497,  2501,  2507,  2509,  2512,  2514,  2517,
    2519,  2523,  2524,  2525,  2526,  2527,  2528,  2529,  2533,  2534,
    2537,  2538,  2539,  2540,  2541,  2542,  2543,  2544,  2547,  2548,
    2549,  2550,  2551,  2552,  2553,  2554,  2555,  2556,  2557,  2560,
    2561,  2564,  2565,  2565,  2568,  2570,  2572,  2575,  2576,  2577,
    2578,  2579,  2580,  2583,  2584,  2587,  2588,  2591,  2595,  2596,
    2596,  2599,  2600,  2603,  2606,  2610,  2611,  2612,  2613,  2614,
    2615,  2616,  2617,  2623,  2624,  2625,  2626,  2629,  2631,  2632,
    2637,  2639,  2640,  2641,  2642,  2645,  2646,  2651,  2655,  2656,
    2657,  2660,  2661,  2666,  2667,  2670,  2672,  2673,  2674,  2679,
    2681,  2687,  2688,  2689,  2690,  2693,  2694,  2697,  2699,  2701,
    2702,  2705,  2707,  2708,  2709,  2712,  2713,  2716,  2717,  2718,
    2721,  2722,  2723,  2726,  2727,  2728,  2729,  2730,  2733,  2734,
    2735,  2738,  2739,  2740,  2741,  2742,  2745,  2747,  2749,  2751,
    2754,  2756,  2758,  2761,  2762,  2763,  2764,  2765,  2766,  2767,
    2768,  2769,  2772,  2773,  2774,  2777,  2778,  2779,  2782,  2783,
    2784,  2787,  2788,  2789,  2792,  2793,  2794,  2795,  2798,  2799,
    2800,  2803,  2804,  2805,  2808,  2809,  2810,  2813,  2814,  2815,
    2818,  2820,  2822,  2826,  2830,  2832,  2837,  2840,  2841,  2842,
    2843,  2846,  2847,  2849,  2850,  2852,  2855,  2856,  2857,  2860,
    2861,  2864,  2866,  2867,  2868,  2869,  2872,  2873,  2874,  2877,
    2878,  2879,  2882,  2883,  2888,  2892,  2899,  2900,  2902,  2907,
    2909,  2912,  2913,  2914,  2915,  2917,  2922
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
     363,   363,   363,   363,   363,   363,   363,   363,   364,   364,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     367,   367,   367,   367,   367,   368,   368,   369,   369,   369,
     370,   371,   372,   373,   373,   373,   373,   374,   374,   374,
     374,   374,   375,   375,   375,   375,   375,   375,   375,   375,
     375,   375,   375,   375,   375,   375,   375,   375,   375,   375,
     375,   375,   375,   375,   375,   375,   375,   375,   375,   375,
     376,   376,   377,   377,   377,   377,   377,   377,   378,   378,
     378,   378,   378,   379,   379,   379,   379,   379,   379,   379,
     379,   380,   380,   380,   380,   380,   381,   381,   381,   381,
     381,   381,   381,   381,   382,   382,   382,   383,   383,   383,
     383,   384,   384,   384,   385,   385,   385,   386,   386,   386,
     387,   387,   387,   387,   387,   387,   387,   387,   388,   388,
     389,   389,   389,   389,   389,   389,   390,   390,   390,   390,
     391,   391,   391,   391,   391,   391,   392,   392,   392,   392,
     392,   392,   392,   392,   393,   393,   394,   394,   395,   395,
     396,   396,   397,   397,   397,   397,   397,   397,   397,   397,
     398,   398,   399,   399,   399,   399,   399,   399,   399,   399,
     400,   400,   401,   401,   401,   401,   401,   402,   402,   402,
     403,   403,   403,   404,   404,   404,   404,   404,   404,   404,
     405,   405,   406,   406,   406,   406,   406,   407,   407,   407,
     407,   408,   408,   408,   408,   409,   409,   409,   409,   409,
     410,   410,   411,   411,   412,   412,   412,   412,   412,   413,
     413,   413,   413,   413,   414,   414,   415,   415,   415,   416,
     416,   416,   416,   417,   417,   418,   418,   419,   419,   420,
     420,   421,   421,   421,   421,   421,   421,   421,   422,   422,
     422,   422,   422,   423,   423,   423,   423,   423,   423,   423,
     423,   424,   425,   425,   425,   425,   426,   426,   427,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     429,   429,   430,   430,   431,   431,   431,   431,   431,   431,
     431,   431,   432,   432,   432,   433,   434,   434,   434,   434,
     434,   434,   434,   434,   434,   435,   435,   436,   436,   436,
     437,   437,   438,   439,   439,   439,   440,   440,   440,   441,
     442,   442,   442,   442,   442,   442,   442,   442,   442,   442,
     443,   443,   443,   444,   444,   445,   445,   446,   446,   446,
     447,   447,   447,   448,   449,   449,   450,   450,   450,   451,
     451,   451,   452,   452,   452,   453,   453,   453,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   455,   455,   456,   456,   456,   456,   457,   457,
     458,   458,   458,   459,   459,   459,   459,   459,   460,   460,
     460,   461,   461,   461,   461,   461,   461,   461,   462,   463,
     463,   463,   464,   464,   464,   464,   464,   464,   465,   465,
     465,   465,   465,   465,   465,   466,   466,   467,   467,   468,
     468,   469,   469,   470,   470,   470,   471,   471,   472,   472,
     473,   473,   474,   474,   475,   475,   475,   475,   475,   475,
     475,   475,   475,   475,   475,   475,   475,   475,   475,   475,
     475,   475,   476,   477,   477,   478,   478,   478,   478,   479,
     479,   479,   479,   480,   480,   480,   480,   480,   480,   481,
     481,   481,   481,   481,   481,   481,   481,   482,   482,   483,
     483,   483,   484,   484,   484,   484,   484,   484,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   485,   486,   486,
     486,   486,   486,   486,   486,   486,   486,   487,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   491,   491,   491,   491,   491,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   496,   496,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   499,   499,
     499,   499,   499,   499,   500,   500,   501,   501,   501,   502,
     503,   503,   503,   503,   503,   503,   503,   504,   505,   505,
     505,   505,   505,   505,   506,   505,   505,   505,   505,   505,
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
     505,   505,   505,   505,   505,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   508,   508,   508,   508,
     508,   508,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   510,   510,
     510,   510,   511,   511,   511,   512,   512,   512,   513,   513,
     513,   513,   513,   513,   513,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   515,   515,   515,   515,
     516,   516,   517,   517,   518,   518,   519,   520,   520,   520,
     520,   520,   520,   521,   521,   522,   522,   522,   522,   522,
     522,   523,   523,   523,   523,   523,   523,   523,   524,   524,
     525,   525,   525,   525,   525,   525,   525,   525,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   527,
     527,   528,   529,   528,   530,   530,   530,   531,   531,   531,
     531,   531,   531,   532,   532,   533,   533,   534,   535,   536,
     535,   537,   537,   538,   539,   540,   540,   540,   540,   540,
     540,   540,   540,   541,   541,   541,   541,   542,   542,   542,
     542,   542,   542,   542,   542,   543,   543,   543,   544,   544,
     544,   545,   545,   545,   545,   546,   546,   546,   546,   547,
     547,   548,   548,   548,   548,   549,   549,   550,   550,   550,
     550,   551,   551,   551,   551,   552,   552,   553,   553,   553,
     554,   554,   554,   555,   555,   555,   555,   555,   556,   556,
     556,   557,   557,   557,   557,   557,   558,   558,   558,   558,
     559,   559,   559,   560,   560,   560,   560,   560,   560,   560,
     560,   560,   561,   561,   561,   562,   562,   562,   563,   563,
     563,   564,   564,   564,   565,   565,   565,   565,   566,   566,
     566,   567,   567,   567,   568,   568,   568,   569,   569,   569,
     570,   570,   570,   571,   572,   572,   572,   573,   573,   573,
     573,   574,   574,   574,   574,   574,   575,   575,   575,   576,
     576,   577,   577,   577,   577,   577,   578,   578,   578,   579,
     579,   579,   580,   580,   580,   581,   582,   582,   582,   582,
     582,   583,   583,   583,   583,   583,   583
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     3,     3,     2,     1,     1,
       2,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     2,     3,     2,     3,     2,
       2,     2,     2,     3,     2,     3,     2,     2,     2,     2,
       2,     2,     1,     3,     2,     2,     2,     1,     2,     2,
       2,     1,     2,     1,     2,     2,     2,     2,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     2,     2,     1,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     0,     1,     1,
       1,     0,     1,     1,     0,     1,     1,     0,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       0,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     2,     1,     2,     1,     2,
       2,     6,     2,     4,     2,     2,     2,     3,     2,     2,
       1,     2,     1,     2,     4,     5,     2,     3,     5,     6,
       1,     1,     1,     7,    11,     8,    12,     1,     2,     2,
       1,     1,     2,     2,     2,     2,     3,     3,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       1,     3,     2,     2,     2,     6,    10,     1,     2,     1,
       6,    10,     1,     2,     2,     2,     2,     2,     2,    13,
      13,    12,    12,     1,     0,     1,     1,     4,     6,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       4,     0,     6,     8,     2,     3,     3,     3,     0,     4,
       4,     4,     4,     3,     3,     1,     3,     5,     4,     4,
       3,     2,     0,     1,     1,     1,     2,     1,     3,     0,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     2,     2,     2,     4,     3,
       2,     2,     2,     1,     3,     2,     2,     1,     2,     8,
       2,     1,     2,     1,     2,     1,     4,     3,     2,     1,
       7,     8,     7,     8,     1,     1,     1,     2,     1,     1,
       2,     1,     0,     2,     2,     1,     0,     2,     2,     1,
       1,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       0,     1,     2,     1,     4,     5,     0,     2,     1,     5,
       2,     2,     1,     1,     1,     2,     1,     2,     1,     1,
       0,     1,     1,     0,     1,     5,     6,     3,     6,     3,
       1,     3,     1,     1,     1,     3,     6,     7,     5,     2,
       1,     5,     5,     1,     3,     0,     1,     2,     1,     4,
       1,     2,     1,     2,     3,     2,     1,     2,     1,     4,
       2,     1,     1,     3,     1,     2,     3,     2,     0,     1,
       1,     4,     2,     0,     1,     3,     4,     4,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     1,     2,     2,
       2,     2,     1,     1,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     2,     2,     0,     1,     2,     1,
       6,     5,     1,     1,     1,     2,     2,     2,     1,     1,
       1,     1,     2,     1,     1,     1,     2,     1,     1,     1,
       2,     2,     2,     0,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     1,     2,     3,
       1,     2,     2,     4,     6,     1,    10,     1,     2,     3,
       3,     2,     2,     2,     2,     2,     2,     2,     4,     4,
       4,     3,     3,     5,     4,     4,     4,     3,     3,     3,
       3,     2,     2,     4,     3,     3,     3,     3,     4,     4,
       4,     4,     5,     4,     6,     7,     4,     4,     5,     2,
       3,     3,     3,     2,     3,     3,     3,     3,     4,     3,
       5,     6,     3,     3,     4,     3,     3,     3,     3,     3,
       5,     3,     3,     4,     3,     2,     2,     1,     3,     4,
       4,     4,     4,     4,     6,     4,     4,     5,     4,     4,
       4,     4,     5,     4,     6,     7,     4,     4,     5,     5,
       5,     5,     5,     5,     7,     5,     5,     6,     4,     4,
       4,     4,     4,     6,     4,     4,     5,     5,     5,     5,
       5,     6,     5,     7,     8,     5,     5,     6,     3,     3,
       3,     3,     4,     3,     5,     6,     3,     3,     4,     3,
       3,     3,     3,     3,     5,     3,     3,     4,     4,     4,
       3,     5,     4,     4,     2,     3,     6,     6,     1,     1,
       1,     2,     2,     2,     3,     3,     2,    12,     2,     2,
       1,     3,     4,     2,     0,     3,     1,     2,     2,     2,
       2,     2,     4,     4,     4,     3,     4,     5,     8,     6,
       4,     9,     6,     7,    10,    11,    12,     9,     5,     4,
       6,     3,     5,     5,     6,     5,     4,     9,    10,    11,
       9,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       7,     7,     2,     4,     4,     4,     4,     5,     4,     4,
       5,     5,     3,     4,     4,     4,     4,     7,     9,     6,
      10,    11,    12,     9,     3,     2,     3,     5,     7,     4,
       3,     3,     6,     7,     7,     4,     4,     4,     9,     4,
       3,     4,     7,     7,     2,     3,     3,     3,     4,     2,
       2,     4,    10,     3,     1,     3,     2,     2,     2,     2,
       3,     5,     4,     5,     2,     2,     2,     2,     3,     2,
       2,     2,     3,     2,     3,     4,     3,     3,     6,     4,
       2,     3,     2,     2,     4,     3,     3,     2,     3,     1,
       2,     1,     2,     2,     2,     1,     1,     1,     1,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     2,     2,
       2,     3,     5,     7,     7,     6,     6,     6,     6,     5,
       6,     6,     6,     6,     6,     6,     6,    11,     7,     7,
       7,     9,     9,    10,    12,    12,     2,     2,     3,     4,
       4,     4,     0,     1,     1,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     3,
       3,     8,     6,    10,     7,     7,     5,     2,     2,     3,
       4,     5,     3,     5,     5,     3,     4,     5,     5,     5,
       3,     5,     2,     3,     3,     5,     3,     3,     3,     4,
       5,     5,     3,     5,     5,     3,     4,     5,     5,     2,
       2,     3,     5,     6,     6,     3,     3,     3,     6,     5,
       5,     2,     3,     3,     5,     6,     3,     2,     2,     3,
       2,     3,     2,     3,     5,     6,     2,     2,     2,     1,
       4,     4,     1,     2,     2,     2,     2,     2,     2,     2,
       3,     2,     3,     2,     3,     1,     1,     1,     1,     1,
       0,     2,     0,     2,     0,     1,     0,     0,     1,     1,
       1,     1,     1,     7,     8,     2,     6,     2,     6,     2,
       3,     2,     1,     1,     3,     3,     1,     4,     2,     1,
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
       0,   311,     0,     0,     0,     0,     0,     0,   339,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     0,  1057,
       0,     0,     0,     0,     0,     0,     0,     0,  1057,    42,
       0,     0,     0,    47,     0,     0,     0,    51,  1251,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     3,    58,    59,     0,   247,     7,
       0,     0,     0,     0,     0,     0,    10,     0,     0,   277,
     279,     0,     0,    12,   148,   150,   143,   144,   145,   149,
     146,   147,   282,    13,     0,   294,     0,     0,     0,    14,
       0,     0,     0,     0,   318,     0,    15,    71,   100,     0,
     130,    99,    79,    97,     0,    76,    78,    74,   131,    98,
      75,     0,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
      72,    73,    77,   325,   156,   101,     0,    16,     0,    17,
      18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,    60,     0,   337,    19,     0,    20,     0,     0,
       0,   396,   410,     0,   416,     0,     0,     0,     0,     0,
       0,     0,   354,     0,   488,     0,     0,     0,     0,     0,
       0,  1057,     0,   363,     0,   367,     0,     0,     0,   371,
       0,   373,     0,   375,     0,     0,   523,   379,    21,     0,
     529,    22,   534,     0,     0,   553,   538,   539,   540,   541,
     555,   543,   544,   548,   545,     0,   547,   549,     0,     0,
      23,     0,    25,     0,   570,     0,     0,     0,   575,     0,
      27,     0,     0,     0,     0,     0,     0,     0,    29,   729,
      30,     0,     0,     0,     0,     0,     0,   730,    31,     0,
      32,  1061,  1062,  1058,  1059,  1060,     0,   138,  1125,     0,
     132,     0,     0,     0,    34,     0,  1136,  1135,  1134,  1133,
      36,     0,     0,     0,     0,     0,   156,     0,    37,     0,
    1154,     0,  1151,    38,     0,     0,     0,     0,    41,     0,
      40,    39,     0,     0,     0,     0,    44,     0,     0,  1183,
      45,     0,     0,     0,     0,     0,    46,  1247,  1246,  1250,
    1249,  1248,    48,     0,    49,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,  1253,    52,     0,     0,
      54,     0,     0,     0,     0,   156,    55,  1275,    56,     0,
       0,    57,     1,     4,     5,     6,   230,     0,   222,     0,
       0,   224,     0,   232,   225,   229,   240,   241,   226,   242,
       0,   228,   250,   251,   249,   248,     0,     0,   270,     0,
     255,   263,   266,   265,   264,   262,   254,   259,   260,   261,
     253,     0,     0,     0,     0,     0,     0,   258,    11,     0,
       0,     0,   278,     0,   283,     0,   293,   284,   295,   285,
     296,   286,   307,   287,     0,     0,   288,     0,    90,    91,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   314,     0,     0,     0,     0,     0,   158,   163,
     157,   159,   162,   161,   160,     0,     0,   331,    65,    66,
      67,    68,    69,    61,    62,    63,    70,    64,   336,     0,
     340,     0,   392,   388,   384,   385,   389,   386,   391,   341,
     395,   342,   299,   400,   404,   399,   302,   301,   300,     0,
       0,   343,   411,   345,     0,   344,     0,   418,   346,   430,
     422,   433,   423,   424,   426,     0,   428,   429,   156,   347,
       0,     0,   348,     0,     0,   156,   349,   442,   156,   440,
     350,   443,   352,   156,   444,   351,     0,   156,     0,   353,
     462,     0,   460,   478,     0,     0,     0,   466,   458,     0,
     468,   483,   471,   355,   489,   490,   356,   357,     0,     0,
       0,   453,     0,   360,    80,   450,     0,   361,   362,     0,
     497,   491,   496,   492,   493,   494,   495,   365,   366,   498,
     368,     0,   499,   500,   501,   370,   507,   502,   503,   505,
     372,   513,   515,   517,   519,   512,   514,   521,   374,     0,
       0,   526,     0,   378,   156,   528,   535,     0,   536,   554,
     537,   556,   557,   558,   542,   559,   561,   560,   562,   546,
     550,   567,     0,     0,     0,     0,   563,   551,    26,     0,
       0,   572,   571,     0,     0,     0,     0,    28,     0,     0,
     582,     0,   583,     0,     0,     0,     0,     0,   584,     0,
     728,     0,   585,     0,   586,     0,     0,   587,     0,   733,
     732,   731,     0,   736,     0,     0,     0,   906,     0,     0,
       0,   740,   744,   746,   942,     0,     0,     0,     0,   844,
       0,     0,     0,   879,     0,     0,     0,     0,     0,     0,
       0,   881,     0,     0,     0,    33,   141,   142,   140,   139,
    1131,  1126,  1132,   135,   136,   134,   137,   133,  1127,     0,
    1129,  1130,    35,     0,     0,     0,     0,  1143,  1144,     0,
     156,     0,  1141,  1138,     0,     0,     0,   156,  1161,  1164,
    1162,  1163,  1155,  1156,  1157,  1158,     0,     0,     0,    43,
    1180,  1181,     0,  1188,  1190,  1189,  1185,  1186,  1184,     0,
       0,     0,     0,  1191,     0,  1194,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1192,  1203,     0,     0,
       0,  1193,  1195,  1245,  1178,  1179,  1177,   211,     0,   214,
     207,     0,   216,   208,     0,   218,   209,  1176,  1175,   210,
     212,   213,     0,     0,   206,     0,     0,     0,     0,  1259,
    1272,  1262,     0,     0,  1265,     0,     0,  1264,  1263,   164,
    1281,     0,  1280,  1276,   231,   227,     0,   236,     0,   233,
       0,   252,   151,   154,   155,   153,   152,   267,   268,   269,
     257,   256,   272,   274,   273,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   156,     0,   315,    96,    93,    94,
      95,   156,   317,   316,     0,     0,     0,     0,     0,     0,
       0,   330,     0,   326,   324,   323,   338,   387,     0,     0,
     390,   405,   406,   401,   402,   407,   409,   408,   403,   303,
     304,   398,   397,   413,   412,     0,   417,   431,   432,   421,
     434,   427,   425,   420,     0,     0,   156,   156,   164,   164,
     164,   156,     0,     0,   156,   479,   461,   472,     0,   463,
      80,   474,     0,     0,   465,   467,   156,   484,     0,     0,
     470,     0,     0,   359,     0,   455,    84,    83,   449,     0,
       0,     0,     0,   956,   958,   957,     0,  1050,     0,  1029,
       0,  1032,     0,     0,  1052,  1054,     0,  1045,   364,     0,
     504,   506,   516,   509,   518,   510,   520,   511,   522,   508,
       0,     0,   377,   527,   524,   525,   164,   552,   564,   565,
     566,   568,     0,   581,   569,     0,     0,     0,     0,     0,
       0,   177,   177,   171,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   174,   174,   171,     0,     0,   171,     0,
       0,     0,     0,     0,   623,   647,     0,     0,     0,   619,
       0,     0,     0,     0,   177,   171,     0,     0,   724,     0,
     734,   735,   156,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   792,     0,     0,     0,
       0,     0,   815,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   834,     0,     0,   839,   840,     0,     0,     0,
     859,   861,   860,     0,   863,     0,     0,   870,   872,   873,
     907,     0,     0,     0,     0,   738,   739,   950,   948,   953,
     952,   951,   949,   954,     0,   743,     0,   944,   943,   747,
       0,   947,     0,   748,   749,   750,   751,     0,     0,     0,
       0,     0,   846,     0,     0,   847,  1073,     0,  1076,  1072,
       0,     0,     0,   848,   880,   849,  1091,  1096,  1093,  1092,
    1090,  1097,  1094,  1088,  1095,  1089,  1098,     0,     0,   854,
       0,     0,     0,     0,   855,  1107,  1111,  1112,     0,  1109,
     856,     0,  1113,   857,   877,     0,     0,     0,   882,   883,
     884,  1128,  1142,     0,     0,  1149,  1145,     0,     0,     0,
    1140,  1139,  1153,  1152,     0,     0,  1169,     0,     0,  1165,
       0,  1173,     0,     0,  1166,     0,  1187,   200,   200,     0,
     200,     0,  1213,     0,  1212,  1204,     0,     0,     0,     0,
    1208,     0,     0,     0,  1211,     0,     0,     0,     0,     0,
    1206,  1214,     0,     0,     0,  1205,   200,   200,   200,     0,
     215,   217,   219,     0,   220,     0,    59,     0,  1255,     0,
    1260,     0,   156,  1266,  1267,     0,  1269,  1270,     0,   165,
     166,  1261,  1282,  1283,     0,   223,     0,   237,     0,     0,
       0,     0,   271,     0,     0,     0,     0,     0,     0,     0,
       0,   309,   156,     0,     0,     0,     0,   156,     0,   329,
       0,   328,   394,   393,     0,     0,     0,   156,     0,   164,
     439,   437,   441,   445,     0,     0,     0,   164,     0,   480,
     464,     0,   475,   477,   167,     0,     0,   358,     0,     0,
      59,     0,   454,    82,    81,     0,     0,   968,     0,     0,
       0,     0,     0,     0,   982,     0,     0,     0,     0,     0,
       0,   999,  1000,     0,     0,     0,     0,     0,  1011,     0,
    1017,  1018,  1020,  1022,     0,  1026,  1037,  1038,  1039,     0,
    1041,  1046,  1048,  1049,  1047,   955,     0,  1028,     0,  1027,
     967,     0,     0,  1033,     0,  1035,     0,  1034,  1055,  1036,
    1043,     0,     0,   376,     0,     0,   579,   580,     0,   577,
     573,     0,   177,   177,   177,   178,   179,   591,   592,   173,
     172,     0,   177,   177,   177,     0,   597,   607,   174,   177,
     177,   177,   175,   176,   177,   177,     0,   177,   177,     0,
     174,     0,   620,     0,     0,     0,   646,     0,   645,     0,
       0,   622,     0,   621,     0,     0,     0,     0,   174,   174,
     171,     0,     0,   171,     0,     0,     0,   177,   177,   720,
       0,   177,   177,   725,     0,   190,   191,   192,   193,   194,
     195,     0,    88,    89,    87,   755,     0,     0,     0,     0,
       0,     0,   900,   898,   893,     0,   903,   887,   904,   890,
     902,   896,   885,   899,   888,   886,   905,   901,     0,     0,
       0,   771,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   802,     0,     0,     0,     0,
       0,   814,   816,     0,     0,   821,   820,     0,     0,   180,
       0,     0,     0,   156,     0,   830,     0,     0,     0,     0,
     835,   836,   837,     0,     0,     0,   843,   858,   862,   864,
     867,   866,     0,     0,     0,   871,   908,   910,     0,   909,
     741,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1056,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   745,     0,     0,     0,
       0,   845,     0,   156,  1069,  1067,  1065,     0,     0,   156,
    1071,   850,     0,     0,     0,     0,  1106,     0,     0,  1114,
     875,   876,     0,   878,  1148,  1150,  1147,  1146,  1137,     0,
       0,     0,  1170,     0,     0,  1174,  1182,   202,   203,   204,
     205,   201,  1197,  1196,     0,     0,     0,  1199,  1198,   200,
       0,     0,     0,  1207,     0,     0,     0,     0,     0,  1224,
       0,  1238,  1237,  1239,     0,     0,     0,  1210,     0,     0,
       0,  1209,  1219,  1218,  1220,  1216,  1215,  1217,  1241,  1240,
    1242,     0,     0,     0,  1257,  1258,     0,   156,  1273,  1268,
    1271,     0,     0,   156,     0,     0,     0,   234,     0,     0,
       0,     0,     0,     0,     0,     0,   306,   305,     0,     0,
     297,   308,   310,     0,   320,   322,   321,   319,   156,   327,
       0,     0,     0,   164,   156,     0,     0,     0,     0,   459,
     473,   482,     0,   476,   169,   170,   168,   469,     0,   485,
       0,     0,     0,   457,    80,     0,     0,     0,     0,     0,
       0,   156,   969,     0,   972,     0,     0,   975,     0,   156,
     980,     0,   983,   984,     0,   986,   987,   988,     0,   992,
       0,     0,   995,     0,  1001,     0,     0,     0,  1006,  1007,
    1005,     0,     0,     0,  1012,  1013,     0,     0,  1016,  1019,
    1021,  1023,     0,     0,  1040,  1042,   959,  1051,   960,     0,
       0,  1053,  1044,     0,     0,   532,   533,     0,     0,   578,
       0,   588,   589,   590,   177,   594,   595,   596,     0,     0,
       0,   601,   602,   171,     0,     0,     0,   177,   608,   609,
     610,   611,   613,   174,   616,   617,     0,   177,     0,     0,
       0,   174,   174,   171,     0,     0,     0,     0,   644,     0,
     648,     0,     0,     0,     0,     0,   174,   174,   171,     0,
       0,   171,     0,     0,     0,     0,     0,   174,   174,   171,
       0,     0,   171,     0,     0,     0,     0,     0,   174,   174,
     171,     0,     0,   171,     0,     0,     0,     0,   174,   174,
     171,     0,     0,     0,   174,   624,   625,   626,   627,   629,
       0,   632,   633,     0,   174,     0,     0,   718,   719,   177,
     722,   723,     0,   754,   156,   756,     0,     0,   760,     0,
       0,     0,     0,     0,   892,   889,   895,   894,   891,   897,
       0,   769,     0,     0,     0,     0,   156,   776,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   793,   794,   795,     0,   799,   796,   798,     0,     0,
     804,   803,   805,   806,     0,     0,     0,     0,     0,     0,
     156,   156,   819,   186,   182,   187,   181,   184,   183,   185,
     825,   826,   827,     0,     0,   829,   831,   156,   156,     0,
     838,   841,   156,   156,   865,   869,   911,   742,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1099,   936,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   937,     0,     0,     0,     0,     0,
     752,   753,   156,   164,  1070,     0,     0,  1074,  1075,     0,
       0,   852,     0,   156,     0,  1108,  1110,   874,     0,  1167,
    1168,  1171,  1172,   200,   200,   200,  1243,  1222,  1221,  1223,
    1226,  1225,  1229,  1228,  1230,  1227,  1235,  1234,  1236,  1232,
    1231,  1233,     0,     0,  1252,     0,  1274,     0,   156,     0,
    1277,     0,     0,   238,     0,   235,     0,     0,     0,   275,
       0,     0,     0,     0,   156,     0,   312,   144,     0,   414,
       0,   435,   164,   167,     0,     0,   448,     0,   486,   487,
       0,   452,   451,     0,     0,     0,     0,     0,   156,   970,
     167,   167,   167,   156,   976,   167,   164,   167,   167,   156,
     989,   167,   167,   167,   156,   996,   167,   167,   156,     0,
     167,   156,   167,   167,   156,   167,   156,  1030,  1031,     0,
       0,   531,   574,     0,   593,   598,   599,   600,     0,   604,
     605,   606,   612,   177,   174,   618,   635,   636,   637,   638,
     639,     0,   641,   642,   174,     0,     0,     0,   174,   174,
     171,     0,     0,     0,     0,     0,     0,   174,   174,   171,
       0,     0,     0,     0,     0,     0,   174,   174,   171,     0,
       0,     0,   174,   177,   177,   177,   177,   177,     0,   177,
     177,     0,   174,   174,   177,   177,   177,   177,   177,     0,
     177,   177,     0,   174,   174,   698,   699,   700,   701,   703,
       0,   706,   707,     0,   174,   709,   710,   711,   712,   713,
       0,   715,   716,   174,   628,   174,     0,   634,     0,     0,
     721,     0,   757,   167,     0,     0,   167,     0,     0,     0,
     768,   167,   772,   773,   167,   775,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   797,
     800,   801,     0,   167,     0,     0,     0,   817,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1100,  1079,     0,  1086,  1087,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   156,     0,     0,    85,     0,     0,   945,   946,   164,
       0,     0,     0,  1077,   851,   853,   164,   156,  1160,  1201,
    1200,  1202,  1244,     0,  1254,  1284,     0,     0,  1279,  1278,
     239,     0,     0,     0,   280,     0,     0,     0,   298,   167,
     415,   419,   436,   438,     0,   446,   481,   156,     0,     0,
       0,     0,     0,     0,   966,   971,   974,   973,   977,   978,
     979,   981,   985,   990,   991,   993,   994,   997,   998,  1002,
     164,   167,  1009,   164,  1010,  1014,   164,  1024,   164,     0,
     156,     0,   530,     0,   603,   614,   177,   174,   643,   177,
     177,   177,   177,   177,     0,   177,   177,   174,   177,   177,
     177,   177,   177,     0,   177,   177,   174,   177,   177,   177,
     177,   177,     0,   177,   177,   174,   177,   658,   659,   660,
     661,   663,   174,   666,   667,     0,   177,   177,   687,   688,
     689,   690,   692,   174,   695,   696,     0,   177,   702,   174,
       0,   708,   174,   717,   630,   174,   726,   727,   156,   759,
       0,   167,   762,     0,   156,     0,   770,   774,   156,     0,
     781,   782,   783,   784,   788,   789,   785,   786,   787,     0,
       0,   167,   809,     0,   156,     0,     0,   822,   167,     0,
       0,   167,   167,     0,   868,     0,   188,   188,     0,     0,
     188,     0,   188,  1056,     0,     0,     0,     0,     0,     0,
       0,     0,  1078,     0,     0,   188,   188,     0,     0,     0,
       0,     0,     0,     0,     0,   938,     0,     0,     0,  1056,
      86,     0,   188,     0,  1102,   156,   156,     0,   164,     0,
     221,  1286,  1285,     0,     0,   243,     0,     0,     0,     0,
     313,   447,     0,   332,     0,   962,     0,   196,     0,  1003,
    1004,  1008,  1015,  1025,   369,     0,   332,     0,   615,   640,
     649,   650,   651,   652,   653,   174,   655,   656,   177,   678,
     679,   680,   681,   682,   174,   684,   685,   177,   669,   670,
     671,   672,   673,   174,   675,   676,   177,   662,   177,   174,
     668,   691,   177,   174,   697,   704,   174,   714,   631,     0,
     167,   763,     0,     0,     0,     0,     0,   790,   791,   807,
       0,     0,     0,   818,   823,     0,   832,   833,   824,   167,
       0,   189,  1056,  1056,    85,     0,  1056,     0,  1056,   912,
     156,     0,  1081,     0,  1084,  1123,  1085,  1083,  1080,     0,
    1056,  1056,    85,     0,     0,  1056,  1056,     0,     0,  1056,
     941,   939,   940,   919,  1056,  1056,  1102,  1118,     0,  1068,
    1066,  1104,     0,     0,     0,     0,   245,     0,     0,     0,
     332,   333,   335,   334,   380,     0,     0,   197,   199,   198,
     964,   965,   332,   382,     0,   177,   657,   177,   686,   177,
     677,   664,   177,   693,   177,   705,     0,   758,   167,   167,
       0,   167,     0,   167,   167,     0,   167,     0,  1056,   925,
     921,  1056,     0,   926,     0,   920,  1056,     0,  1082,     0,
     923,   922,  1056,     0,     0,   917,   915,  1056,   156,   916,
     918,   924,  1118,  1063,     0,     0,  1103,  1116,  1105,  1159,
       0,     0,     0,   276,   299,   302,   300,     0,     0,   381,
     961,   156,   383,   576,   654,   683,   674,   665,   694,   167,
     761,   767,     0,   780,   777,   808,   813,     0,   828,     0,
     930,   914,    85,     0,   928,  1124,     0,   913,    85,     0,
     929,     0,  1064,  1120,  1122,     0,  1115,     0,     0,   281,
       0,     0,     0,     0,   196,     0,   764,   156,   778,   810,
     842,  1056,     0,     0,  1056,     0,   167,  1121,  1117,   244,
       0,     0,     0,     0,     0,   963,   737,   156,   765,   779,
     156,   811,   932,     0,  1056,   931,     0,     0,   246,   292,
       0,   291,     0,   766,   812,    85,   933,    85,  1056,   290,
     289,  1056,  1056,   927,   935,   934
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    54,  1424,   171,   153,   918,  2499,  2500,   432,   433,
     434,   435,   154,   155,   156,   698,   690,    92,   817,   455,
    1221,  1687,  1361,  1374,  1357,  1930,  2602,  1421,  2660,  1592,
     343,   770,   773,   776,   784,    64,   368,   374,   378,   381,
      69,   384,    76,   400,   396,   390,   407,    83,   412,    93,
      99,   417,   419,   421,   490,   871,  1658,   423,   426,   106,
     442,   157,   159,  2654,   175,   177,   218,   913,   952,   479,
     860,   481,   491,   863,   868,   493,   495,   874,   498,   876,
     509,   879,   881,   512,   516,   520,   522,   525,   529,   557,
     553,  1282,   543,   899,   904,   896,  1270,   910,   546,   567,
     570,   575,   580,   588,   943,   945,   947,   949,   593,   954,
     221,   595,  1757,   240,   598,   600,   604,   609,   617,   250,
    1350,   621,   258,   630,  1366,   632,   638,   999,  1382,   994,
    1798,  1388,  1386,  1800,   995,  1391,  1393,   644,   647,   642,
     260,   268,   270,   685,  1076,  1448,  1065,  1546,  1974,  1079,
    1083,  1074,   938,  1325,  1329,  1337,  1339,  1958,   276,  1092,
    1095,  1103,  2264,  2265,  2266,  1959,  2637,  2638,  1124,  1130,
    1133,  2716,  2717,  2713,  2714,  2763,  2267,  2268,   284,   290,
     298,   712,   707,   303,   308,   310,   722,   729,  1159,  1164,
     779,   767,   316,   320,   736,   326,   743,  1597,   756,   757,
    1195,  1190,  1603,  1180,  1609,  1621,  1617,  1184,   761,   745,
     332,   333,   347,  1208,   350,   356,   794,   797,   791,   358,
     361,   802
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2577
static const yytype_int16 yypact[] =
{
    5288,    93,   443,    21, -2577, -2577,  1103,  -176,   527,   928,
     -18,    33,  4015,   129,   213,   107,   141,    30,  5358,    71,
    1715, -2577,    59,  1047,   193,   892,   -53,   135,   207,   583,
     588,   181,   735,  1059,     9,   807,   471,   126,   583, -2577,
     105,     7,   894, -2577,   447,   514,   411, -2577,   509, -2577,
     101,  4055,   286,   131,   540,   125,  1067,   303,   589,   605,
     140,   622,    10,   611, -2577, -2577, -2577,   938,   618, -2577,
     279,    17,   213,    37,   519,   124, -2577,   642,   618, -2577,
   -2577,   169,   618, -2577, -2577, -2577, -2577,   618, -2577, -2577,
   -2577, -2577, -2577, -2577,   161,   637,   665,   686,   571, -2577,
     618,  1334,   618,   618,  1040,   618, -2577, -2577, -2577,   554,
   -2577, -2577, -2577, -2577,  4734, -2577, -2577, -2577, -2577, -2577,
   -2577,   618, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577,
   -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577,
   -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577,
   -2577, -2577, -2577, -2577,  1323, -2577,   618, -2577,   748, -2577,
   -2577,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213, -2577, -2577,   618, -2577, -2577,   672, -2577,   852,  1238,
     811,    36,   522,   772,   511,  4344,   587,  4785,  4706,   902,
    4734,  3668, -2577,  1663,   -99,   885,   949,   868,   880,   504,
     951,   583,   829, -2577,   920, -2577,   744,   709,   189, -2577,
      20, -2577,   212, -2577,   -23,   901,    58, -2577, -2577,  4981,
   -2577, -2577, -2577,   944,   941,   988, -2577, -2577, -2577, -2577,
     508, -2577, -2577, -2577, -2577,   974, -2577, -2577,  4981,  4137,
   -2577,  1021, -2577,   148, -2577,  1027,  1036,   144, -2577,   618,
   -2577,  1038,    57,  1046,   541,   862,  1054,    24, -2577, -2577,
   -2577,  1092,  1105,   213,   213,   618,   618, -2577, -2577,  1113,
   -2577, -2577, -2577, -2577, -2577, -2577,  2258,   846, -2577,  1119,
     167,   618,  4981,   618, -2577,  1132, -2577, -2577, -2577, -2577,
   -2577,   618,  1009,   213,  3027,   618,  1323,   618, -2577,  1139,
   -2577,  4890, -2577, -2577,   712,  1143,  1154,   618, -2577,  1162,
   -2577, -2577,   -58,  1193,  4981,  1199, -2577,  1099,   618,  1116,
   -2577,   450,  1101,  1517,   452,  1217, -2577, -2577, -2577, -2577,
   -2577, -2577, -2577,  1230, -2577,   661,   109,   254,   293,    78,
     618,   618,    66, -2577,   618,   969,  1254, -2577,   618,   618,
   -2577,  1262,    45,    54,  1263,  1323, -2577, -2577, -2577,   982,
     618, -2577, -2577, -2577, -2577, -2577, -2577,   618, -2577,  1264,
    1269, -2577,   618,  1042, -2577, -2577, -2577, -2577, -2577, -2577,
     618, -2577, -2577,   618, -2577, -2577,   368,   368, -2577,  1265,
   -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577,
   -2577,  1075,   618,   618,  1277,  1279,  1280, -2577, -2577,   618,
     618,   618, -2577,   618, -2577,  1285, -2577, -2577, -2577, -2577,
     945, -2577,  1299, -2577,  4981,  1300, -2577,   618, -2577, -2577,
   -2577,   618,  1298,  1303,  1303,  4981,   618,   618,   618,   618,
     618,   618, -2577,   618,  4734,  1334,   618,   618, -2577, -2577,
   -2577, -2577, -2577, -2577, -2577,  1334,   618, -2577, -2577, -2577,
   -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577,  1304,
   -2577,  1033,   444, -2577, -2577, -2577, -2577, -2577, -2577, -2577,
   -2577, -2577,   -59, -2577, -2577, -2577,  1141, -2577,    15,   446,
     446, -2577, -2577, -2577,  1326, -2577,  1332, -2577, -2577,   -88,
   -2577,  1163, -2577, -2577, -2577,  1173, -2577, -2577,  1323, -2577,
     618,   618, -2577,  4981,  4981,  1323, -2577, -2577,  1323, -2577,
   -2577, -2577, -2577,  1323, -2577, -2577,  4981,  1323,   618, -2577,
   -2577,  4981, -2577,  1345,   512,  1147,    12, -2577, -2577,  1152,
    4981,    50, -2577, -2577, -2577, -2577, -2577, -2577,  1349,  1351,
    1360, -2577,  1166, -2577,   344, -2577,   618, -2577, -2577,   534,
   -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577,
   -2577,   -23, -2577, -2577, -2577, -2577, -2577, -2577,  1176,  1177,
   -2577, -2577,  1307,  1308,  1309, -2577, -2577,  1175, -2577,   618,
    1403,  1180,  4890, -2577,  1323, -2577, -2577,  1405, -2577, -2577,
   -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577,
   -2577, -2577,  4981,  4981,  4981,  4981, -2577, -2577, -2577,  1411,
     213, -2577, -2577,  1412,  1417,  1221,   618, -2577,   481,  1339,
   -2577,  1424, -2577,   615,  1342,  4824,    76,  1427, -2577,  1429,
   -2577,  1430, -2577,   219, -2577,  1432,  1433, -2577,  1437, -2577,
   -2577, -2577,   618, -2577,  4890,  4674,  1888,   594,  1439,   477,
    1347, -2577, -2577, -2577,    31,    84,  1442,  1444,   171,   618,
     291,   456,    83,  4981,   213,  1878,   464,   153,    63,   252,
      13, -2577,  1436,  1445,  1446, -2577, -2577, -2577, -2577, -2577,
   -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577,   618,
   -2577, -2577, -2577,   618,   618,   618,   618, -2577, -2577,   618,
    1323,   618, -2577,   618,  1334,   618,  1464,  1323, -2577, -2577,
   -2577, -2577, -2577, -2577, -2577, -2577,  1467,    85,   585, -2577,
   -2577, -2577,  1470, -2577, -2577, -2577, -2577,  1378, -2577,  1473,
    1474,  1392,  1479, -2577,  1481, -2577,  1482,  1396,  1483,   624,
     457,   625,   439,   635,  1488,   683, -2577, -2577,  1489,  1492,
    1494, -2577, -2577,  1495, -2577, -2577, -2577, -2577,  1501, -2577,
   -2577,  1504, -2577, -2577,  1506, -2577, -2577, -2577, -2577, -2577,
   -2577, -2577,   618,   618, -2577,   618,  1001,   618,   618, -2577,
     847, -2577,  1087,  1496, -2577,  1151,  1508, -2577, -2577,   -11,
     618,   618, -2577,  1505, -2577, -2577,  1511,  1130,   618,  1515,
     145, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577,
   -2577, -2577, -2577, -2577, -2577,  1509,  1514,   618,   618,   618,
    1516,   213,  1519,  1525,  1323,  4981, -2577, -2577, -2577, -2577,
   -2577,  1323, -2577, -2577,   618,   618,   618,  4981,   618,  1334,
     618, -2577,   618, -2577, -2577, -2577, -2577, -2577,  1537,  1538,
   -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577,
   -2577, -2577, -2577,   587, -2577,   618, -2577, -2577, -2577, -2577,
   -2577, -2577, -2577, -2577,  4981,   618,  1323,  1323,   -11,   -11,
     -11,  1323,  1334,   618,  1323, -2577, -2577, -2577,   618, -2577,
     344,  1381,  1551,  1557, -2577, -2577,  1323, -2577,  1401,  1402,
   -2577,  1562,  1552, -2577,  1563,  1205,  1455,  1531, -2577,   618,
    4472,   789,   428, -2577, -2577, -2577,   618,   236,   957, -2577,
    1305, -2577,  1878,  1306,   502,  1275,   152, -2577, -2577,   618,
   -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577,
     618,  1570, -2577, -2577, -2577, -2577,   -11, -2577, -2577, -2577,
   -2577, -2577,  4855, -2577, -2577,  1578,  1579,   618,  1580,  1610,
    1611,   769,   769,   -33,  1613,  1614,  1617,  1620,  1346,  1352,
    1622,  1626,  1629,    92,    92,   -33,  1615,  1631,   -33,  1632,
    1639,  4919,  1642,  1644, -2577, -2577,  1645,  1648,   657, -2577,
    1650,  1651,  1653,  1654,   769,   -33,  1657,  1658, -2577,  1659,
   -2577, -2577,  1323,   765,  1314,  1337,   -21,  1416,  1558,  2510,
     357,  1661,     4,  1526,  1564,  1390,  1389,  1630,   495,  1426,
    1568,  1672,  1461,   460,    19,  -110,   -14,  4981,  1878,  1641,
     590,  1431,  1465,  1680,   132, -2577, -2577,   473,  1682,  1684,
   -2577, -2577, -2577,  1685,  1468,    86,  1878,  1472, -2577, -2577,
   -2577,   213,  1688,  1689,   618, -2577, -2577, -2577, -2577, -2577,
   -2577, -2577, -2577, -2577,    -1, -2577,  2392, -2577, -2577, -2577,
     618, -2577,   618, -2577, -2577, -2577, -2577,   618,   618,   618,
     477,  4981, -2577,  1690,  1214, -2577, -2577,   618, -2577, -2577,
     618,  4981,   618, -2577, -2577, -2577, -2577, -2577, -2577, -2577,
   -2577, -2577, -2577, -2577, -2577, -2577, -2577,   213,   618, -2577,
     618,   477,  1691,  1692, -2577, -2577, -2577, -2577,   618,   618,
   -2577,   213, -2577, -2577, -2577,   199,  1693,  1694, -2577, -2577,
   -2577, -2577, -2577,   618,   618, -2577, -2577,  1334,   618,   618,
   -2577, -2577, -2577, -2577,  1696,   618, -2577,   618,  1581, -2577,
     618, -2577,   618,  1588, -2577,  1699, -2577,   750,   750,   694,
     750,  1700, -2577,   698, -2577, -2577,  1701,  1702,   707,  1705,
   -2577,  1706,  1707,  1709, -2577,   715,   782,  1710,  1712,  1716,
   -2577, -2577,  1714,  1717,  1721, -2577,   750,   750,   750,   618,
   -2577, -2577, -2577,   618, -2577,   618,   761,  4981, -2577,   618,
   -2577,  4890,  1323, -2577, -2577,  1722, -2577, -2577,  1723, -2577,
   -2577, -2577, -2577,  1698,  3027, -2577,   618,  1718,   618,   618,
     618,  1253, -2577,  1708,  1725,   618,   618,    69,  1726,   213,
     213, -2577,  1323,   618,  1728,  1729,  1731,  1323,  4981, -2577,
     618, -2577, -2577, -2577,   618,   618,   618,  1323,  4981,   -11,
   -2577, -2577, -2577, -2577,  1334,   618,  1732,   -11,   618,   551,
   -2577,  1734, -2577, -2577,  1014,  1267,   618, -2577,   618,  1733,
    1704,   618, -2577, -2577, -2577,  1737,  1121,  4734,  1475,   663,
    1502,    25,  4981,   664, -2577,   283,  1606,   174,   777,  1507,
     180, -2577, -2577,    32,  1577,   307,  1628,   360,  1878,   916,
   -2577,  1750,  1499, -2577,    40, -2577, -2577, -2577, -2577,  1878,
    1543, -2577, -2577, -2577, -2577, -2577,   618, -2577,   618, -2577,
   -2577,   618,   618, -2577,   618, -2577,   618, -2577, -2577, -2577,
   -2577,  1559,   618, -2577,   618,    65, -2577, -2577,  1757,  1759,
   -2577,   618,   769,   769,   769, -2577, -2577, -2577, -2577, -2577,
   -2577,  1760,   769,   769,   769,   602, -2577, -2577,    92,   769,
     769,   769, -2577, -2577,   769,   769,  1762,   769,   769,  1765,
      92,   621, -2577,  1768,  1769,  1770, -2577,   818, -2577,  1013,
    1019, -2577,   716, -2577,  1490,  1771,  1772,  1773,    92,    92,
     -33,  1775,  1776,   -33,  1778,  1777,  1780,   769,   769, -2577,
    1781,   769,   769, -2577,  1782, -2577, -2577, -2577, -2577, -2577,
   -2577,   213, -2577, -2577, -2577,  4734,  1069,   213,   618,  1146,
    1453,   -12, -2577, -2577, -2577,   792, -2577, -2577, -2577, -2577,
   -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577,  1783,   213,
     618, -2577,   213,  1784,   618,  4981,   213,  1462,  1544,  1548,
     211,   244,  1549,   296,  1480,  1484,  1794,  1798,  1799,  2510,
    1800,  1801,  1802,  1491,  1493,  1225,  1803,   213,   618,  1233,
    1545, -2577, -2577,   213,  4981, -2577, -2577,  4981,   618,    29,
    1809,   213,   618,  1323,   213, -2577,  1812,  4981,  4981,   618,
   -2577, -2577, -2577,   213,   213,  4981, -2577, -2577, -2577, -2577,
   -2577, -2577,  4981,   618,   213, -2577, -2577, -2577,   618, -2577,
   -2577,  1814,   618,  1589,    73,   618,  1590,   618,   218,   618,
   -2577,   618,  1591,  1592,   618,   618,   618,   618,   618,   618,
     618,   618,    23,   618,   618,  1593, -2577,   618,   618,   618,
     618, -2577,  4981,  1323,  1815,  1823,  1824,   618,   618,  1323,
   -2577,   618,   618,   618,  4981,   477, -2577,   618,   618, -2577,
   -2577, -2577,  1821, -2577, -2577, -2577, -2577, -2577, -2577,  1825,
     618,   618, -2577,   618,   618, -2577, -2577, -2577, -2577, -2577,
   -2577, -2577, -2577, -2577,  1826,  1827,  1829, -2577, -2577,   750,
    1832,  1833,  1830, -2577,  1835,  1836,  1837,  1839,  1841, -2577,
    1842, -2577, -2577, -2577,  1843,  1844,  1846, -2577,  1847,  1848,
    1850, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577,
   -2577,   618,   618,   618, -2577, -2577,   618,  1323, -2577, -2577,
   -2577,  3027,   618,  1323,   618,   618,   618, -2577,   618,   618,
    1851,   618,  1853,  1845,   618,   618, -2577, -2577,  1854,  4981,
   -2577, -2577, -2577,   618, -2577, -2577, -2577, -2577,  1323, -2577,
    1076,   618,  1076,   -11,  1323,  4981,   618,   618,  1855, -2577,
   -2577, -2577,   618, -2577, -2577, -2577, -2577, -2577,  4981, -2577,
    4981,   618,  1856, -2577,   344,  1857,  1858,  1860,  1865,  1866,
    4981,  1323, -2577,  4981, -2577,  4981,  4981,  4734,  4981,  1323,
   -2577,  4981, -2577, -2577,  4981, -2577, -2577,  4734,  4981, -2577,
    4981,  4981,  4734,  4981, -2577,  4981,  4981,   618, -2577, -2577,
   -2577,  4981,  4981,  4981, -2577, -2577,  4981,  4981, -2577, -2577,
   -2577, -2577,  4981,  4981, -2577, -2577, -2577, -2577, -2577,   618,
     618, -2577, -2577,  1868,   618, -2577, -2577,  1869,  1873, -2577,
     618, -2577, -2577, -2577,   769, -2577, -2577, -2577,  1875,  1876,
    1879, -2577, -2577,   -33,  1874,  1881,  1891,   769, -2577, -2577,
   -2577, -2577, -2577,    92, -2577, -2577,  1882,   769,  1892,  1893,
    1894,    92,    92,   -33,  1896,  1897,  1898,   775, -2577,   963,
   -2577,  1052,  1561,  1900,  1901,  1902,    92,    92,   -33,  1904,
    1905,   -33,  1909,  1575,  1910,  1911,  1913,    92,    92,   -33,
    1906,  1915,   -33,  1916,  1603,  1917,  1918,  1919,    92,    92,
     -33,  1923,  1930,   -33,  1932,  1935,  1939,  1951,    92,    92,
     -33,  1931,  1972,  1975,    92, -2577, -2577, -2577, -2577, -2577,
    1977, -2577, -2577,  1978,    92,  1979,  1980, -2577, -2577,   769,
   -2577, -2577,  1985, -2577,  1323, -2577,  4981,   618, -2577,   618,
    4981,   618,  1986,  1314, -2577, -2577, -2577, -2577, -2577, -2577,
    1987, -2577,  4981,   213,  1989,  4981,  1323, -2577,  1990,  1314,
     618,   618,   618,   618,   618,   618,   618,   618,   618,  1994,
    1995, -2577, -2577, -2577,  1996, -2577, -2577, -2577,  1998,  1999,
   -2577, -2577, -2577, -2577,   618,  4981,   618,  2000,  1314,   213,
    1323,  1323, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577,
   -2577, -2577, -2577,   618,  1334, -2577, -2577,  1323,  1323,   618,
   -2577, -2577,  1323,  1323, -2577, -2577, -2577, -2577,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,  2573, -2577,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,  3228,  2002,   618, -2577,   618,   618,   618,  2005,  2006,
   -2577, -2577,  1323,   -11, -2577,  2008,  2009, -2577, -2577,  1334,
     618, -2577,  2007,  1323,  4981, -2577, -2577, -2577,  2011, -2577,
   -2577, -2577, -2577,   750,   750,   750, -2577, -2577, -2577, -2577,
   -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577,
   -2577, -2577,  1314,   618, -2577,   618, -2577,   618,  1323,   618,
   -2577,  1334,   618, -2577,   618, -2577,  1861,  2012,  2013, -2577,
    2015,   618,   618,  2019,  1323,  4981, -2577, -2577,   618, -2577,
     618, -2577,   -11,  1014,   618,  2020, -2577,   618, -2577, -2577,
    4734, -2577, -2577,  2022,  2025,  2028,  2029,  2031,  1323, -2577,
    1014,  1014,  1014,  1323, -2577,  1014,   -11,  1014,  1014,  1323,
   -2577,  1014,  1014,  1014,  1323, -2577,  1014,  1014,  1323,  4981,
    1014,  1323,  1014,  1014,  1323,  1014,  1323, -2577, -2577,  2033,
    4734,  2036, -2577,   618, -2577, -2577, -2577, -2577,  2039, -2577,
   -2577, -2577, -2577,   769,    92, -2577, -2577, -2577, -2577, -2577,
   -2577,  2040, -2577, -2577,    92,  2041,  2043,  2044,    92,    92,
     -33,  2046,  2048,  2050,  2051,  2052,  2053,    92,    92,   -33,
    2055,  2056,  2057,  2058,  2059,  2060,    92,    92,   -33,  2064,
    2065,  2066,    92,   769,   769,   769,   769,   769,  2068,   769,
     769,  2069,    92,    92,   769,   769,   769,   769,   769,  2070,
     769,   769,  2071,    92,    92, -2577, -2577, -2577, -2577, -2577,
    2072, -2577, -2577,  2073,    92, -2577, -2577, -2577, -2577, -2577,
    2074, -2577, -2577,    92, -2577,    92,  2077, -2577,  2078,  2079,
   -2577,  4890, -2577,  1014,  2081,  4981,  1014,   618,  4981,  2083,
   -2577,  1014, -2577, -2577,  1014, -2577,  4981,  2085,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618, -2577,
   -2577, -2577,  4981,  1014,   618,  4981,  2087, -2577,  1334,  1334,
    4981,  1334,  1334,  4981,  4981,  1334,  1334,   618,   618,   618,
     618,   618,   618,  1314,   618,   618,   618,  1643,  1655,  1735,
    1736,  1738,  1740,  1741,  2573, -2577,  1742, -2577, -2577,  1314,
     618,   618,   618,   618,  1314,   618,   618,   618,   618,   618,
     618,  1323,   618,  1607,  1314,   618,   618, -2577, -2577,   -11,
     213,  4981,  4981, -2577, -2577, -2577,   -11,  1323,  2088, -2577,
   -2577, -2577, -2577,   618, -2577, -2577,  1334,   618, -2577, -2577,
   -2577,  1260,  2089,  2090, -2577,   618,  2100,  1076, -2577,  1014,
   -2577, -2577, -2577, -2577,  2101, -2577, -2577,  1323,  2103,  2104,
    2106,  2107,  4981,  2108, -2577, -2577, -2577, -2577, -2577, -2577,
   -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577,
     -11,  1014, -2577,   -11, -2577, -2577,   -11, -2577,   -11,  2109,
    1323,  2111, -2577,   618, -2577, -2577,   769,    92, -2577,   769,
     769,   769,   769,   769,  2115,   769,   769,    92,   769,   769,
     769,   769,   769,  2117,   769,   769,    92,   769,   769,   769,
     769,   769,  2118,   769,   769,    92,   769, -2577, -2577, -2577,
   -2577, -2577,    92, -2577, -2577,  2119,   769,   769, -2577, -2577,
   -2577, -2577, -2577,    92, -2577, -2577,  2120,   769, -2577,    92,
    2121, -2577,    92, -2577, -2577,    92, -2577, -2577,  1323, -2577,
    4981,  1014, -2577,  2123,  1323,   618, -2577, -2577,  1323,   618,
   -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577,   618,
     618,  1014, -2577,  2124,  1323,   618,  1334, -2577,  1014,   618,
    1334,  1014,  1014,  4981, -2577,   618,  2126,  2126,   618,   618,
    2126,  1314,  2126, -2577,  4981,  2510,  2127,  2129,  2130,  2131,
    2132,  2134, -2577,   213,  1314,  2126,  2126,   618,   618,  1314,
     618,   618,   618,   618,   618, -2577,  1334,   618,  2135, -2577,
   -2577,   618,  2126,   213,    61,  1323,  1323,   213,   -11,  2137,
   -2577, -2577, -2577,  2139,   618, -2577,  2140,  2138,  2099,   618,
   -2577, -2577,  2145,     0,  4981, -2577,  2147,     3,  4981, -2577,
   -2577, -2577, -2577, -2577, -2577,  2146,     0,   618, -2577, -2577,
   -2577, -2577, -2577, -2577, -2577,    92, -2577, -2577,   769, -2577,
   -2577, -2577, -2577, -2577,    92, -2577, -2577,   769, -2577, -2577,
   -2577, -2577, -2577,    92, -2577, -2577,   769, -2577,   769,    92,
   -2577, -2577,   769,    92, -2577, -2577,    92, -2577, -2577,   618,
    1014, -2577,  4981,  4981,   618,  4981,   618, -2577, -2577, -2577,
    4981,  4981,   618, -2577, -2577,  4981, -2577, -2577, -2577,  1014,
    2150, -2577, -2577, -2577,  1314,   618, -2577,  2153, -2577, -2577,
    1323,  2154, -2577,  2156, -2577, -2577, -2577, -2577, -2577,  2157,
   -2577, -2577,  1314,   618,  2159, -2577, -2577,   618,  4981, -2577,
   -2577, -2577, -2577, -2577, -2577, -2577,    61,  1818,  1878, -2577,
   -2577, -2577,   213,  2160,  2164,  2165, -2577,  2102,  2167,    48,
       0, -2577, -2577, -2577, -2577,  2168,  4981, -2577, -2577, -2577,
   -2577, -2577,     0, -2577,  2169,   769, -2577,   769, -2577,   769,
   -2577, -2577,   769, -2577,   769, -2577,  4890, -2577,  1014,  1014,
     618,  1014,  2170,  1014,  1014,   618,  1014,   618, -2577, -2577,
   -2577, -2577,  2171, -2577,   618, -2577, -2577,  2173, -2577,   618,
   -2577, -2577, -2577,  2175,   618, -2577, -2577, -2577,  1323, -2577,
   -2577, -2577,  1818, -2577,  1838,  1797,  1878, -2577, -2577, -2577,
    2176,  2179,  2181, -2577, -2577, -2577, -2577,   629,   629, -2577,
   -2577,  1323, -2577, -2577, -2577, -2577, -2577, -2577, -2577,  1014,
   -2577, -2577,  2182, -2577,  4734, -2577, -2577,  2183, -2577,  1314,
   -2577, -2577,  1314,   618, -2577, -2577,   618, -2577,  1314,   618,
   -2577,  4981, -2577,  1838, -2577,   213, -2577,  2184,  2186, -2577,
     618,   618,   618,   618,     3,  2187,  4734,  1323, -2577,  4734,
   -2577, -2577,   618,  2190, -2577,   618,  1014, -2577, -2577, -2577,
    2191,  2193,   618,  2194,   618, -2577, -2577,  1323, -2577, -2577,
    1323, -2577, -2577,  2196, -2577, -2577,  2197,  2200, -2577, -2577,
    2201, -2577,  2202, -2577, -2577,  1314, -2577,  1314, -2577, -2577,
   -2577, -2577, -2577, -2577, -2577, -2577
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2577, -2577,    -3, -2577,   699,  -898, -1620,  -981,  1638, -2577,
     810,  -313,  1553,   -48,   195, -2577, -2577, -1663,  1674,  1822,
    -782,   946,  -840,   718,  1556, -2577, -1050, -2577,  -774, -1153,
   -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577,
   -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577,
   -2577, -2577, -2577, -2577,  -510,  -471, -2577, -2577, -2577, -2577,
   -2577, -2577, -2577, -1527, -2577, -2577, -2577, -2577, -2577, -2577,
   -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577,
   -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577,
   -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577,
   -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577,
   -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577,
   -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577,
   -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577,
   -2577, -2577, -2577, -2577, -2577, -1468, -2577, -2577, -2577, -2577,
   -2577,  -665, -2577, -2577, -2577, -2577, -2577, -2577,    44, -2577,
   -2577, -2577, -2577,   -84,  -663, -1945,  -448, -2577, -2577, -2577,
   -2577, -2577,  -508,  -503, -2577, -2577, -2576, -2577, -2577, -2577,
   -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577,
   -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577,  1463,
   -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577,
   -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577, -2577,
   -2577, -2577
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1257
static const yytype_int16 yytable[] =
{
      68,  1904,  1269,   355,  1520,  1091,  1094,  2048,   105,  2050,
      65,    66,  1117,   107,   299,  1593,   901,  1598,  1134,   872,
      65,    66,    65,    66,    65,    66,    65,    66,  1971,   645,
     295,  1452,  2651,  1425,   110,  2657,    65,    66,   319,    65,
      66,   576,   376,  1628,  1629,  1630,  1707,   349,  1077,   792,
     360,    65,    66,   367,   907,  1485,  1923,   373,   795,  1724,
     380, -1101,   628,   107,   383,   385,    94,  1741,   395,    65,
      66,   402,   406,   100,   591,   409,    65,    66,  1924,   413,
    1125,  1925,   312,    95,   414,  1755,    65,    66,  1219,    65,
      66,   777,  1926,   101,   865,  1874,   727,   427,   431,   436,
     437,   441,   443,  1427,    65,    66,  1261,  1262,  1263,  1372,
    1491,   107,   877,   107,  1135,  1927,  1656,    77,   447,  1096,
    1136,   544,  1510,  1097,  1080,  1155,   241,    65,    66,   107,
     363,   112,   851,  1928,    65,    66,  1359,  1502,  2764,   107,
     261,   861,   854,    65,    66,  1376,   102,   173,  1379,  1230,
     624,   161,   619,   456,   162,   219,  1486,  1231,  1121,   577,
      55,  1489,   158,    96,   996,  1410,   415,   313,  1490,  1340,
     468,   692,   220,   410,  1345,  1453,   768,   878,   489,   176,
     398,   112,   902,   510,   163,   259,   908,  2787,  1086,  1126,
    1875,  2652,   164,   866,  2658,  1717,  1098,  1081,  1156,   862,
     118,  1722,   262,   403,  1570,  1725,   174,    97,   317,   251,
     728,   391,   269,  1742,   545,   311,  1571,   107,   115,   399,
    1099,    65,    66,  1511,   263,  1428,   116,   117,   297,   112,
     482,   112,  1892,  1002,   103,  1127,   483,   997,  1492,    65,
      66,  1360,  2724,    98,  1876,   559,   626,   112,   285,   581,
    1454,   572,  1341,   717,   165,  1373,   107,   112,   107,  1220,
     582,   592,   652,   653,  1726,  1894,   578,   625,   115,  1333,
     364,  1708,  1743,   867,   778,   484,   116,   117,   699,   264,
     701,  1003,  1128,   386,  1100,  1082,  1157,   583,   703,   706,
    2653,   709,   713,  2659,   715,  1455,   579,   107,   782,  1078,
     377,   485,   404,   646,   725,  1950,   166,  1756,   318,   446,
    1712,   629,  1521,   120,   735,   737,   115,  1897,   115,   300,
    1487,   771,    67,  1137,   116,   117,   116,   117,   392,   301,
     104,   167,   903,   168,   115,   112,  1972,   780,   781,   783,
     793,   785,   116,   117,   115,   788,   789,   486,   620,   796,
    1657,   909,   116,   117, -1101,  1067,   801,   803,  1158,  2725,
     774,   169,   150,   120,   804,  1129,   584,   151,   152,   807,
     809,   693,   393,   394,   112,  1494,   112,   810,   694,   695,
     811,   511,   405,   519,  1101,   524,   528,  1512,  1503,  1929,
    1087,   487,   488,  1514,   556,   416,   314,  1068,   812,   821,
     822,  1150,   348,   487,  2726,   585,   826,   827,   828,   589,
     829,   120,   150,   120,   696,   112,  1004,   151,   152,   315,
    1718,  1122,   115,   411,   836,  1552,  1723,   170,   837,   120,
     116,   117,   359,   842,   843,   844,   845,   846,   847,   120,
     848,   372,   431,   852,   853,   265,  2006,  1123,   335,  1873,
    1955,  1327,   431,   855,  1713,    56,  1564,  1893,  1321,   336,
     150,   115,   150,   115,   813,   151,   152,   151,   152,   116,
     117,   116,   117,  1088,   586,   309,  1889,  1675,   150,   387,
     573,  1449,   916,   151,   152,  1679,   337,  1483,   150,   711,
    1895,  1005,   266,   151,   152,   968,   969,    57,   327,  1918,
    1504,  1006,   115,   574,  1118,    65,    66,   884,   885,   554,
     116,   117,   739,   344,   758,    58,   897,   120,   334,  1176,
    1067,   697,    65,    66,   357,   893,   587,  1185,  2609,  1714,
     388,    78,  1007,  1731,  1069,   814,  1249,   389,   920,   921,
     362,  1067,  1898,   970,   955,    59,   633,  1131,   328,   858,
    1070,  1071,   601,   919,  2633,  1681,   120,   329,   120,  1090,
    1850,   110,  1068,  1853,    60,   338,   150,    79,    61,   110,
     555,   151,   152,   740,  1715,   759,   424,  1119,  1728,  1265,
    1177,   369,    62,  1068,  1093,  1729,   950,   993,   330,   869,
      65,    66,  1732,  1322,   370,   922,   602,   120,  1060,   917,
    1186,   923,   425,  1450,   339,   150,  1012,   150,   110,   371,
     151,   152,   151,   152,    65,    66,  1768,  1769,  1178,  1477,
     979,    65,    66,   967,  1061,  1160,   815,   375,   870,   980,
     981,   816,    65,    66,   277,  1788,  1789,   345,   859,   850,
      80,   271,  1072,  1073,   110,  1734,   150,   408,  1323,  1011,
     924,   151,   152,   278,  2519,   279,  1744,  2689,  2690,  1733,
     634,  2693,  1394,  2695,  1770,  1120,  1089,   925,   418,  1102,
     420,  1395,  1396,   340,  1324,  2700,  2701,   982,   971,   972,
    2705,  2706,   926,  1790,  2709,   496,   746,  1181,   927,  2710,
    2711,   422,  1484,   928,   497,   764,  1141,  1187,  1161,  1069,
    1142,  1143,  1144,  1145,   741,  1505,  1146,   603,  1148,   341,
    1149,   431,  1151,   160,   172,  1070,  1071,  1335,   272,  1397,
    1069,   242,   346,   401,  1496,   342,   267,   118,    81,   898,
    1835,  1836,   742,   302,   760,   118,  1070,  1071,   379,  1179,
     635,  1478,  1212,  2750,    63,  1192,  2751,   748,  1182,   929,
     331,  2754,   457,   973,   365,   444,  1594,  2757,  1188,  1062,
    1600, -1256,  2760,   974,   975,  1634,   939,   718,   930,  1606,
     765,   397,   869,   931,   118,   932,   280,  1614,  1837,  1203,
    1204,    82,  1205,  1207,  1209,  1210,  1162,  1704,  1710,  2125,
    2126,   469,  1587,  1588,   976,   636,  2062,  1222,  1223,  1771,
    1772,   933,   934,   719,  1227,  1228,  1193,  1072,  1073,   935,
     118,   870,   983,   984,  1063,   492,   273,  1595,  1791,  1792,
     637,  1601,  1497,  1802,  1234,  1235,  1236,   936,  1072,  1073,
    1607,   274,  1803,  1804,  1576,   281,  2802,  2127,  1615,  2805,
    1064,  1244,  1245,  1246,  1618,  1248,   431,  1250,  1415,  1251,
    2299,  2300,  2301,  1211,  1398,  1399,  1316,   720,  1163,  2816,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
    1254,   766,  1256,  2823,  1773,   560,  2824,  2825,   304,   282,
    1805,  1498,  1258,   937,  1774,  1775,   550,   985,   283,   431,
    1266,  2051,  2209,  1793,   275,  1268,   561,   986,   987,  1877,
    1994,  1719,   988,  1794,  1795,  1619,   754,  1183,  2217,  1705,
    1711,   562,  1281,  1838,  1839,  1776,  1285,  1189,   252,   470,
     321,  1416,  1317,  1326,  1328,  1331,  1589,  1590,   989,  1400,
    1355,  1336,   480,  2108,  1796,   521,  1342,  2236,   686,  1401,
    1402,    65,    66,  1385,  1403,   286,   494,  1343,  1318,   831,
     832,  1676,   547,  2121,   548,  1591,    84,   639,   549,  1356,
      65,    66,   650,   651,  1351,  1194,   721,   558,  2158,   551,
    1404,  2161,  2128,  2129,  1330,   640,  1596,  2134,  2135,  2169,
    1602,   305,  2172,   569,  2691,    65,    66,   568,  1840,  1608,
    2180,   590,   708,  2183,  1878,  1417,  1418,  1616,  1841,  1842,
    2190,   571,  2702,   552,    65,  1206,   253,  2611,   322,  2663,
    1419,   596,    65,    66,   597,  1806,  1807,   563,  1813,   599,
     254,   687,   323,  1720,  1824,  2136,   618,  1814,  1815,  1843,
    1319,  1488,   622,  1825,  1826,   769,   772,   775,  1684,  1685,
     623,  2302,   627,    65,    66,    65,    66,  2130,  1879,   704,
    1735,   631,  1513,  1420,   808,   255,   641,  2131,  2132,   643,
     306,  1519,    65,    66,  1620,   382,  2143,  2144,  1255,   307,
      65,    66,    65,    66,  1866,  1816,   564,  1547,   108,  1548,
     438,  1827,  1320,    85,  1549,  1550,  1551,   287,  2133,  1736,
    1808,  1213,  1214,   288,  1557,   289,   648,  1558,   291,  1560,
    1809,  1810,    65,    66,    84,  1811,   256,    86,   324,   800,
     649,    87,   688,  1686,  2145,  1562,   110,  1563,   654,   257,
     565,   325,   705,  2729,   691,  1567,  1568,   366,   605,   566,
     689,  1812,  2781,    65,    66,  2732,   243,   702,  2784,   733,
    1574,  1575,  1226,   716,   431,  1577,  1578,   723,  1737,    65,
      66,  1870,  1580,   439,  1581,  1216,  1217,  1583,   724,  1584,
    2137,  2138,   111,  1637,    88,   244,   726,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,  2821,  1631,  2822,   730,   606,
    1632,  2290,  1633,   732,  1695,    89,  1636,  1738,    65,  1280,
    1817,  1818,   734,    90,    91,   738,  1828,  1829,  1555,  1556,
     113,  1642,   762,  1645,   744,  1647,  1648,  1649,  1651,  1910,
    1911,    85,  1654,  1655,   763,  2139,    65,    66,  1915,   245,
    1663,   440,   607,   839,   840,  2140,  2141,  1669,   786,  2146,
    2147,  1670,  1671,  1672,   246,    86,    65,    66,   787,  2047,
     292,   431,  1677,    65,    66,  1680,   790,   798,   805,   819,
    2322,  1688,  2471,  1690,   806,  1691,  2142,  1696,  1693,   820,
     608,   823,   118,   824,   825,  1819,   108,   119,  2484,   830,
    2374,  1830,   471,  2489,  2340,  1820,  1821,    70,   293,  2383,
    1822,  1831,  1832,    71,   833,   835,  1833,   428,  2392,   856,
     472,   857,    88,  1650,   430,   864,   247,    65,    66,   963,
    2513,  1422,  1423,  1746,  2148,  1747,  1823,   473,  1748,  1749,
     873,  1750,  1834,  1751,  2149,  2150,   875,    65,    66,  1753,
     474,  1754,    72,   428,   429,   430,   880,   882,  1760,   895,
     900,  1697,  1698,    89,   911,   905,   912,   248,   448,   475,
     294,    90,    91,   476,   914,  2151,  1699,   249,    73,   915,
     111,   940,   941,  1105,   942,   944,   946,   477,  1132,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   948,   951,  1700,
     957,  1466,  1458,   953,    74,   962,   964,  2603,   478,  1644,
    2606,   965,  2608,  1867,   966,  1869,  1871,   977,   113,   978,
     990,   449,   998,  1000,  1001,  2620,  2621,  1008,  1009,  1467,
    1459,  1010,  1468,  1460,  1066,  1469,  1084,  1882,  1075,  1085,
    1140,  1885,  2635,  1138,   450,   451,    65,    66,  1872,    75,
    1422,  1423,  1139,   452,  1682,    65,    66,  1888,  1152,  1422,
    1423,  1154,  1470,  1461,  1165,  1914,  1916,  1166,  1167,  1168,
    1169,   453,  1702,  1170,  1173,  1922,  1171,  1172,  1174,  1933,
    2607,   454,  1191,  1283,  1196,   119,  1939,  1197,  1198,  1199,
    1215,  1471,  1462,  2619,  1472,  1463,  1200,  2503,  2624,  1201,
    1944,  1202,  1218,  1232,  2507,  1946,  1225,  1224,  1233,  1948,
    1237,  1951,  1952,  1239,  1954,  1956,  1957,  1229,  1960,  1240,
    1238,  1963,  1964,  1965,  1966,  1967,  1968,  1969,  1970,  1973,
    1975,  1976,  1252,  1253,  1978,  1979,  1980,  1981,    65,    66,
    1917,  1271,  1422,  1423,  1987,  1988,  1272,  1278,  1990,  1991,
    1992,  1273,  1275,  1276,  1995,  1996,  1277,  1279,  2529,  1284,
    1338,  2531,  1332,  1334,  2532,  1344,  2533,  1999,  2000,   746,
    2001,  2002,  1348,  1426,  1349,  1352,   296,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,  1353,  1354,  1362,  1363,  1377,
    1865,  2241,  1364,  1473,  1464,  1365,  1367,  1369,  2022,  2023,
    2024,  1370,  1368,  2025,  1371,  1378,   747,  1380,  2027,  2030,
     748,  2032,  2033,  2034,  1381,  2035,  2036,  1387,  2038,  1389,
    1390,  2041,  2042,  1392,  1405,  1406,  1474,  1465,  1407,  1408,
    2045,  1411,  1429,  1412,  1413,  1430,  1451,   445,  2049,  1456,
    1476,  1457,  1479,  2054,  2055,  1480,  2293,  1481,   749,  2057,
    1482,  1495,  1475,  1499,  1500,  1501,  1506,  1509,  2060,  1507,
    1508,  1515,  1517,  1518,  1582,  1554,  1565,  1566,  1572,  1573,
    1579,  1585,  1375,  1586,  -456,  1599,  1604,  1605,   530,  1610,
    1641,  1611,  1612,  1613,  1652,  1622,   750,  1623,  2308,  1625,
    1624,  1703,  1626,   531,  2089,  1627,  2642,  1639,  1640,  1653,
    1646,  1659,  1664,  1665,   222,  1666,  1678,  1692,   508,  1683,
     515,   518,  1694,   523,   527,   532,  2097,  2098,  1706,  1716,
    1727,  2100,  1730,  1721,  1739,  1740,   223,  2103,  1745,   224,
    1516,  1758,  1752,  1759,  1764,   533,  1783,   751,  2780,  1786,
    1844,   752,   594,  1797,  1799,  1801,  1845,  1846,  1847,  1851,
    1852,  1855,   534,  1854,  1856,  1859,   535,  1862,  1880,  1884,
    1890,   610,   616,   225,  1891,  1896,   753,  1899,  1901,   754,
     226,  1900,  1902,  1903,  1905,  1906,  1907,  1912,  1908,   755,
    1909,   227,   228,  1931,   536,   537,  1561,  1936,   229,  1947,
    1984,  1949,  1953,  1961,  1962,  1977,  1997,  1985,  1986,  1998,
    1569,  2003,  2004,  2005,  2009,   700,  2029,  2007,  2008,  2010,
    2011,  2152,  2012,   230,  2013,  2014,  2015,   710,  2016,  2017,
    2018,  2040,  2019,  2020,  2021,  2163,  2037,  2039,  2043,  2056,
    2061,   231,  2063,  2064,  2204,  2065,  2205,   731,  2207,   538,
    2066,  2067,  2099,  2311,  2101,   232,   233,  2102,  2109,   539,
    2105,  2106,   234,  2174,  2107,  2110,  2114,  2218,  2219,  2220,
    2221,  2222,  2223,  2224,  2225,  2226,  2111,  2116,  2117,  2118,
    2122,  2123,  2074,  2124,   235,  2153,  2154,  2155,  2159,  2160,
    2170,  2232,  2080,  2234,  2162,  2164,  2165,  2085,  2166,  2171,
    2498,  2173,  2175,  2176,  2177,  2456,  2457,  2181,  2459,  2460,
    2240,   431,  2463,  2464,  2182,  2191,  2244,  2184,  1660,  1661,
    2185,   540,   541,   236,  2186,  2247,  2248,  2249,  2250,  2251,
    2252,  2253,  2254,  2255,  2256,  1049,  2187,  2269,  2270,  2271,
    2272,  2273,  2274,  2275,  2276,  2277,  2278,  2279,  2280,  1050,
    2283,  1106,  2284,  2285,  2286,  2715,  2192,   834,  1051,  1107,
    2193,  2195,  2196,  2198,  2199,  1108,   431,  2294,   841,  1052,
    2201,  2208,  2210,  2511,  2213,  2216,   237,   849,  2227,  2228,
    2795,  2229,  2230,  2231,  2475,  2235,   238,  2282,  1109,  2287,
    2288,  2295,   542,  2291,  2292,  2298,  2476,  2312,  2313,  2314,
    2303,  1053,  2304,  2317,  2305,  2325,  2307,  2329,   431,  2309,
    2330,  2310,  1110,  2331,  2332,   239,  2333,  2359,  2315,  2316,
    1111,  2362,  1054,  2364,  2367,  2320,  2369,  2321,  2370,  2371,
    2375,  2324,  2376,  2715,  2326,  2377,  2378,  2379,  2380,  2384,
    2385,   818,  2386,  2387,  2388,  2389,   886,   887,  2393,  2394,
     838,  2395,  2402,  2405,  2413,  2416,  2419,  2420,  2422,   891,
    1112,  2425,  2426,  2427,   894,  2430,  1777,  2435,  1113,  2439,
    1055,  2455,  2509,   906,  2515,  2516,  2477,  2478,  1787,  2479,
    2363,  2480,  2481,  2483,  2518,  2648,  2521,  2523,  2722,  2524,
    2525, -1119,  2526,  2528,  2534,  2536,  1848,  1849,   714,  2545,
    1863,  2554,  2563,  2569,  2573,  2576,  1868,  2582,  2590,  1056,
    2601,  2261,  2612,  2613,  1114,  2614,  2615,  2616,  2617,  2728,
    2632,  2643,  2647,  2593,  2644,  2646,  1115,  2596,  1881,  2650,
    2662,  1883,  2656,  2428,  2688,  1887,  1057,  2694,  2765,  2697,
    2698,  2699,  1116,  2704,  2719,   958,   959,   960,   961,  2720,
    2721,  2723,  2730,  2733,  2744,  2752,  1913,   799,  2755,  2758,
    2482,  2767,  1919,  2630,  2768,  2769,  2776,  2779,  2712,  2789,
    1932,  2790,  2796,  1935,  2804,  1058,  2808,  1059,  2809,  2811,
    2815,  2817,  1940,  1941,  2433,  2818,  2819,  2820,  2766,  2762,
       0,     0,  1175,  1945,     0,  2440,  2441,  2442,  2443,  2444,
    2445,  2446,  2447,  2448,  2449,  2450,  1104,     0,     0,     0,
       0,  2453,     0,     0,     0,   431,   431,     0,   431,   431,
       0,     0,   431,   431,  2465,  2466,  2467,  2468,  2469,  2470,
       0,  2472,  2473,  2474,     0,  2328,  2771,  2773,     0,     0,
       0,     0,   655,   656,     0,     0,     0,  2485,  2486,  2487,
    2488,     0,  2490,  2491,  2492,  2493,  2494,  2495,     0,  2497,
       0,     0,  2501,  2502,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2361,     0,     0,     0,     0,
    2510,     0,     0,   431,  2512,     0,     0,     0,  2514,     0,
       0,     0,  2517,     0,     0,     0,     0,     0,     0,   657,
       0,     0,     0,     0,     0,   658,     0,     0,     0,     0,
     883,     0,   659,     0,   660,     0,     0,   888,     0,   661,
     889,     0,   662,     0,     0,   890,     0,     0,   663,   892,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   664,
    2537,     0,     0,     0,     0,   665,     0,     0,     0,     0,
       0,     0,     0,     0,   666,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1242,     0,
       0,   667,     0,     0,     0,     0,     0,     0,     0,     0,
    1247,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   668,     0,  1522,     0,   956,     0,     0,  1523,
       0,     0,     0,     0,     0,     0,     0,   669,     0,     0,
       0,     0,  2584,     0,     0,     0,  2586,  1257,   670,   671,
       0,  1524,  1525,     0,  1526,  1527,  2587,  2588,     0,     0,
       0,     0,  2592,   431,     0,  1528,  2595,   431,     0,     0,
     672,     0,  2600,     0,     0,  2604,  2605,  1529,  1530,     0,
       0,     0,     0,     0,     0,  1531,     0,     0,  1532,     0,
       0,     0,     0,   673,  2622,  2623,     0,  2625,  2626,  2627,
    2628,  2629,     0,   431,  2631,     0,  1533,   674,  2634,   675,
       0,  2113,     0,  1534,  1535,     0,     0,  1536,     0,  2119,
    2120,  2645,     0,     0,   676,  1347,  2649,     0,     0,   677,
       0,     0,     0,     0,  2156,  2157,   678,     0,  1358,     0,
       0,     0,  1147,   679,  2664,  2167,  2168,     0,     0,  1153,
       0,     0,     0,     0,     0,     0,  2178,  2179,     0,     0,
    1431,   680,     0,     0,     0,     0,  2188,  2189,     0,     0,
    1409,     0,  2194,     0,   681,   682,     0,   683,     0,     0,
    1537,     0,  2197,     0,     0,     0,  2676,  1432,     0,     0,
       0,  2680,  2212,  2682,     0,     0,     0,     0,     0,  2685,
    1493,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2692,     0,     0,     0,     0,   684,     0,     0,
       0,  1433,     0,     0,     0,     0,     0,  1434,  2237,     0,
    2703,     0,     0,  1435,  2707,     0,  1538,     0,  2739,  2257,
       0,     0,  1539,     0,     0,     0,     0,     0,     0,     0,
    2258,     0,     0,  1436,  1553,     0,  2727,     0,     0,  1540,
       0,     0,     0,     0,  1559,     0,  1241,     0,     0,  1541,
       0,     0,     0,  1243,  1437,     0,  1106,  2259,     0,     0,
       0,     0,     0,     0,  1107,     0,     0,  2742,     0,  1438,
    1108,     0,  2747,     0,  2749,     0,  1542,  1543,     0,     0,
       0,  2753,     0,     0,     0,     0,  2756,     0,     0,     0,
       0,  2759,     0,  1109,     0,     0,  2260,  1544,  1259,  1260,
       0,     0,  1439,  1264,     0,     0,  1267,     0,     0,     0,
       0,     0,     0,     0,  2770,  2772,     0,  1110,  1274,     0,
       0,     0,     0,     0,     0,  1111,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2782,  1440,  1545,  2783,     0,     0,  2785,     0,     0,     0,
    1635,     0,     0,     0,     0,     0,  1441,  2791,  2792,  2793,
    2794,     0,     0,     0,     0,  1112,     0,  1643,  1442,  2803,
       0,     0,  2806,  1113,     0,     0,     0,     0,     0,  2810,
       0,  2812,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1668,     0,     0,     0,  1443,     0,     0,     0,     0,
       0,  1674,     0,     0,     0,     0,     0,  1444,     0,  1445,
    1446,     0,     0,     0,     0,     0,     0,     0,  1689,  1114,
       0,     0,  2366,     0,  1414,     0,     0,     0,     0,     0,
    1701,  1115,  2368,     0,     0,  1709,  2372,  2373,     0,     0,
       0,     0,     0,     0,     0,  2381,  2382,  1116,     0,  1447,
       0,     0,     0,     0,  2390,  2391,  2261,     0,  2262,     0,
    2396,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2406,  2407,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2417,  2418,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2421,     0,     0,     0,     0,     0,  1761,  1762,
    1763,  2423,     0,  2424,     0,     0,     0,     0,  1765,  1766,
    1767,     0,  2263,     0,     0,  1778,  1779,  1780,     0,     0,
    1781,  1782,     0,  1784,  1785,     0,     0,     0,     0,  2778,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1857,  1858,     0,     0,  1860,  1861,     0,
       0,  2798,     0,     0,  2801,     0,     0,     0,  1864,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2504,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2323,
       0,     0,     0,     0,     0,     0,     0,     0,  1886,     0,
       0,     0,     0,     0,     0,     0,  2335,  2336,  2337,     0,
       0,  2339,     0,  2341,  2342,     0,     0,  2344,  2345,  2346,
      65,    66,  2348,  2349,  1638,     0,  2352,  1920,  2354,  2355,
    1921,  2357,     0,     0,     0,     0,   108,     0,     0,     0,
    1937,  1938,     0,     0,     0,     0,     0,     0,  1942,     0,
       0,     0,     0,     0,  1662,  1943,     0,     0,     0,  1667,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1673,
       0,     0,     0,     0,   110,  2539,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2548,     0,     0,     0,     0,
       0,     0,     0,     0,  2557,  1982,     0,     0,     0,     0,
       0,     0,     0,  2566,     0,     0,     0,  1993,     0,     0,
    2568,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     111,  2572,     0,     0,     0,     0,     0,  2575,     0,     0,
    2577,     0,     0,  2578,     0,     0,     0,     0,     0,  2429,
       0,     0,  2432,     0,     0,     0,     0,  2436,     0,     0,
    2437,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2452,
       0,     0,  2618,     0,     0,     0,     0,     0,   113,     0,
       0,     0,     0,     0,  2028,     0,     0,     0,     0,     0,
       0,     0,  2636,     0,     0,     0,  2641,     0,     0,     0,
       0,     0,  2044,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2053,     0,
       0,    65,    66,     0,     0,     0,     0,     0,     0,     0,
       0,  2058,     0,  2059,     0,     0,     0,   108,     0,     0,
     118,     0,     0,  2068,     0,   119,  2070,     0,  2071,  2072,
    2073,  2075,     0,  2665,  2077,  2520,     0,  2078,     0,     0,
    2079,  2081,  2667,  2082,  2083,  2084,  2086,     0,  2087,  2088,
       0,  2669,     0,     0,  2090,  2091,  2092,  2672,     0,  2093,
    2094,  2674,     0,     0,  2675,  2095,  2096,  2530,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1934,     0,     0,     0,     0,
    2104,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,     0,  2112,     0,     0,     0,     0,     0,     0,
       0,  2718,     0,  2115,     0,     0,     0,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,  1983,     0,  2581,     0,     0,
       0,  1989,     0,     0,     0,     0,     0,     0,     0,   113,
       0,     0,     0,     0,     0,     0,     0,  2589,     0,     0,
       0,     0,     0,     0,  2594,     0,     0,  2597,  2598,     0,
       0,     0,     0,     0,     0,  2200,     0,     0,     0,  2203,
       0,     0,     0,  2206,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2211,     0,     0,  2214,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,     0,     0,  2026,
       0,     0,     0,     0,  2788,  2031,     0,     0,  2233,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2046,     0,     0,     0,     0,     0,  2052,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2069,  2281,     0,  2677,     0,     0,     0,
       0,  2076,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2687,     0,  2297,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2319,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2327,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2740,  2741,     0,  2743,     0,  2745,
    2746,     0,  2748,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2351,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2360,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2365,
       0,     0,   526,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2775,  2202,   108,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2215,  2397,
    2398,  2399,  2400,  2401,     0,  2403,  2404,     0,     0,     0,
    2408,  2409,  2410,  2411,  2412,   110,  2414,  2415,     0,     0,
       0,     0,  2807,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2238,  2239,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2431,  2242,
    2243,  2434,     0,     0,  2245,  2246,     0,     0,     0,  2438,
       0,   111,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2451,     0,     0,  2454,     0,
       0,     0,     0,  2458,     0,     0,  2461,  2462,     0,     0,
       0,     0,     0,     0,  2289,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2296,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2505,  2506,     0,     0,     0,     0,
    2306,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2318,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2527,     0,     0,     0,     0,
    2334,   118,     0,     0,     0,  2338,   119,     0,     0,     0,
       0,  2343,     0,     0,     0,     0,  2347,     0,     0,     0,
    2350,     0,     0,  2353,     0,     0,  2356,     0,  2358,     0,
       0,     0,  2538,     0,     0,  2540,  2541,  2542,  2543,  2544,
       0,  2546,  2547,     0,  2549,  2550,  2551,  2552,  2553,     0,
    2555,  2556,     0,  2558,  2559,  2560,  2561,  2562,     0,  2564,
    2565,     0,  2567,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2570,  2571,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2574,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2580,     0,     0,     0,     0,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,  2599,     0,     0,   107,
       0,     0,     0,     0,     0,     0,     0,  2610,     0,     0,
       0,     0,     0,     0,   108,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   109,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   351,   110,     0,     0,     0,     0,  2655,   352,     0,
       0,  2661,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2496,  2666,     0,     0,     0,     0,     0,
       0,     0,     0,  2668,     0,     0,     0,     0,   111,  2508,
       0,     0,  2670,     0,  2671,     0,     0,     0,  2673,     0,
       0,     0,     0,     0,     0,  2678,  2679,   112,  2681,     0,
       0,     0,     0,  2683,  2684,     0,     0,     0,  2686,  2522,
       0,     0,     0,     0,     0,   611,   108,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,     0,     0,     0,
       0,  2708,  2535,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   612,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2731,
       0,     0,     0,     0,     0,     0,   114,     0,     0,     0,
       0,  2734,     0,  2735,   115,  2736,     0,     0,  2737,     0,
    2738,     0,   116,   117,     0,     0,     0,     0,   118,     0,
     111,     0,     0,   119,     0,     0,     0,     0,     0,     0,
    2579,     0,     0,     0,   613,     0,  2583,     0,     0,     0,
    2585,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2591,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2777,   113,     0,
       0,     0,     0,     0,   353,     0,     0,   354,     0,     0,
       0,     0,     0,     0,  2786,     0,   614,     0,     0,   120,
       0,     0,     0,     0,     0,     0,     0,  2639,  2640,  2797,
       0,     0,  2800,     0,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   108,     0,   119,     0,     0,   150,     0,
       0,     0,     0,   151,   152,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,     0,     0,     0,     0,     0,     0,     0,
     499,   500,     0,     0,   501,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2696,     0,   615,     0,     0,   502,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   111,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,     0,     0,     0,     0,     0,
       0,     0,  1286,  1287,  1288,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   503,     0,
       0,  1289,  1290,     0,     0,  1291,     0,     0,     0,     0,
    2761,     0,  1292,     0,     0,  1293,     0,   504,     0,  1294,
       0,     0,     0,     0,     0,     0,     0,  1295,  1296,     0,
       0,     0,     0,  2774,     0,  1297,     0,     0,     0,   505,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1298,  1299,     0,     0,  1300,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2799,
       0,     0,     0,     0,     0,  1301,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2813,
       0,     0,  2814,     0,     0,   506,  1302,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1303,     0,     0,     0,     0,     0,     0,     0,     0,  1304,
       0,     0,     0,     0,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,     0,   507,  1013,  1014,  1015,     0,     0,     0,
       0,     0,     0,     0,  1305,     0,  1306,     0,     0,     0,
       0,     0,  1307,  1308,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1016,  1017,   108,     0,  1018,     0,  1309,
    1019,     0,     0,     0,     0,     0,     0,  1020,     0,     0,
    1310,  1021,     0,     0,     0,     0,     0,     0,     0,  1022,
    1023,     0,     0,   108,     0,     0,     0,  1024,  1025,     0,
       0,     0,     0,   110,     0,  1311,     0,  1312,     0,     0,
       0,     0,     0,     0,     0,  1026,     0,  1313,     0,     0,
       0,  1027,     0,     0,     0,  1028,  1029,  1314,     0,  1030,
       0,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   108,     0,     0,  1031,     0,   111,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1315,     0,     0,     0,     0,     0,     0,  1032,     0,
       0,     0,     0,     0,     0,     0,     0,   111,     0,     0,
       0,     0,     0,     0,     0,   513,     0,     0,     0,     0,
       0,     0,  1033,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,     0,     0,
       0,     0,     0,     0,   108,     0,  1034,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   111,     0,
       0,     0,     0,     0,     0,   113,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1035,     0,  1036,     0,
       0,     0,  1346,     0,  1037,  1038,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
    1039,  1040,     0,     0,   119,     0,     0,     0,     0,     0,
       0,  1041,  1042,     0,     0,     0,   113,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,   111,     0,
       0,     0,   119,     0,     0,     0,     0,  1043,     0,  1044,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1045,     0,  1046,     0,   991,     0,     0,     0,  1047,
     992,     0,     0,     0,     0,   517,     0,     0,     0,     0,
     108,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,     0,     0,   113,     0,     0,     0,
       0,     0,     0,  1048,     0,     0,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   514,   119,   111,  1383,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,     0,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,     0,     0,     0,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,     0,     0,     0,     0,     0,     0,   119,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,  1384,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,     1,
       0,     0,     2,     0,     0,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,     0,
       0,     0,     0,     5,     6,     0,     7,     8,     9,     0,
       0,     0,     0,     0,     0,     0,    10,     0,     0,     0,
       0,     0,     0,    11,     0,    12,    13,     0,     0,     0,
       0,     0,     0,     0,     0,    14,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   178,
       0,     0,   179,     0,     0,   180,     0,     0,    16,     0,
       0,     0,     0,     0,     0,     0,     0,    17,     0,     0,
       0,     0,     0,     0,   181,     0,   182,   183,   184,     0,
      18,     0,     0,     0,    19,     0,   185,    20,   186,     0,
       0,    21,    22,   187,     0,   188,   189,   190,    23,     0,
       0,     0,     0,   191,    24,   192,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
       0,     0,    26,    27,    28,     0,     0,    29,    30,     0,
       0,     0,     0,     0,     0,     0,   193,     0,     0,     0,
       0,     0,    31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   194,     0,     0,     0,     0,    32,
      33,    34,   195,     0,   196,   197,     0,     0,   198,     0,
       0,     0,   199,    35,   200,    36,     0,     0,     0,     0,
       0,     0,    37,     0,     0,     0,    38,     0,     0,     0,
      39,     0,    40,     0,    41,     0,     0,   201,   202,    42,
       0,     0,   203,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   204,    43,     0,     0,     0,     0,     0,    44,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   205,
     206,     0,     0,     0,    45,    46,     0,   207,     0,     0,
       0,     0,     0,     0,     0,     0,    47,     0,    48,     0,
       0,     0,     0,     0,    49,     0,     0,    50,    51,     0,
       0,     0,   208,     0,   209,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    52,   210,
       0,     0,     0,     0,     0,    53,     0,     0,     0,     0,
       0,     0,     0,     0,   211,   212,     0,     0,     0,     0,
       0,     0,     0,   213,     0,     0,     0,     0,     0,     0,
     214,     0,     0,     0,     0,     0,   215,     0,   216,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   217
};

static const yytype_int16 yycheck[] =
{
       3,  1469,   900,    51,     5,   670,   671,  1670,    11,  1672,
       3,     4,   675,     4,     5,  1168,     4,  1170,     5,   490,
       3,     4,     3,     4,     3,     4,     3,     4,     5,     5,
      33,    27,    32,  1014,    57,    32,     3,     4,    41,     3,
       4,    21,    32,  1196,  1197,  1198,    21,    50,    17,     4,
      53,     3,     4,    56,     4,    36,    27,    60,     4,    27,
      63,     0,     5,     4,    67,    68,    84,    27,    71,     3,
       4,    74,    75,    40,    16,    78,     3,     4,    49,    82,
      17,    52,    38,   101,    87,    20,     3,     4,    99,     3,
       4,    13,    63,    60,    79,   107,   154,   100,   101,   102,
     103,   104,   105,   124,     3,     4,   888,   889,   890,    17,
     124,     4,   200,     4,   101,    86,    47,   293,   121,    36,
     107,   220,    36,    40,    40,    40,    67,     3,     4,     4,
       5,   122,   445,   104,     3,     4,   169,     5,  2714,     4,
       5,   200,   455,     3,     4,   985,   113,     6,   988,     4,
       6,    44,     4,   156,    47,    84,   137,    12,     5,   139,
      67,   271,    33,   181,    88,  1005,     5,    62,   278,    17,
     173,     4,   101,     4,   956,   171,    67,   265,   181,   149,
     143,   122,   170,   186,    77,   238,   136,  2763,    17,   126,
     202,   191,    85,   178,   191,    21,   113,   113,   113,   258,
     223,    21,    67,    79,     5,   173,    65,   225,   201,    16,
     268,   194,     5,   173,   313,    89,    17,     4,   209,   182,
     137,     3,     4,   137,    89,   246,   217,   218,    33,   122,
     194,   122,    21,    14,   201,   172,   200,   161,   252,     3,
       4,   274,   194,   261,   256,   201,   249,   122,    67,    37,
     246,    62,   100,   301,   147,   163,     4,   122,     4,   270,
      48,   203,   265,   266,   232,    21,   246,   123,   209,   932,
     145,   246,   232,   258,   196,   239,   217,   218,   281,   144,
     283,    62,   219,     4,   201,   201,   201,    75,   291,   292,
     290,   294,   295,   290,   297,   291,   276,     4,   232,   268,
     290,   265,   178,   279,   307,   232,   199,   242,   301,   114,
      27,   254,   313,   304,   317,   318,   209,    21,   209,   310,
     301,    67,   301,   310,   217,   218,   217,   218,   311,   320,
     297,   224,   320,   226,   209,   122,   313,   340,   341,   342,
     295,   344,   217,   218,   209,   348,   349,   311,   200,   295,
     281,   301,   217,   218,   293,    64,   359,   360,   273,   311,
      67,   254,   353,   304,   367,   302,   154,   358,   359,   372,
     373,   204,   355,   356,   122,  1038,   122,   380,   211,   212,
     383,   186,   258,   188,   301,   190,   191,   301,   256,   360,
     219,   355,   356,  1056,   199,   234,   291,   106,    30,   402,
     403,   714,   301,   355,   356,   193,   409,   410,   411,   214,
     413,   304,   353,   304,   247,   122,   197,   358,   359,   314,
     246,   268,   209,   254,   427,  1090,   246,   320,   431,   304,
     217,   218,   301,   436,   437,   438,   439,   440,   441,   304,
     443,   301,   445,   446,   447,   310,  1599,   294,    37,  1430,
     232,   215,   455,   456,   171,    12,  1121,   246,    30,    48,
     353,   209,   353,   209,    96,   358,   359,   358,   359,   217,
     218,   217,   218,   302,   262,     4,  1457,  1259,   353,   200,
     291,   124,   138,   358,   359,  1267,    75,    27,   353,   294,
     246,   272,   357,   358,   359,    14,    15,    54,    51,  1480,
      27,   282,   209,   314,    40,     3,     4,   510,   511,     5,
     217,   218,    62,     4,    62,    72,     4,   304,     4,    62,
      64,   354,     3,     4,   238,   528,   314,    88,  2473,   246,
     251,     4,   313,   173,   243,   167,   849,   258,     4,     5,
       0,    64,   246,    62,   592,   102,     5,   295,   101,   105,
     259,   260,    44,   556,  2499,     4,   304,   110,   304,   268,
    1400,    57,   106,  1403,   121,   154,   353,    40,   125,    57,
      66,   358,   359,   123,   291,   123,     5,   113,   271,   892,
     123,   278,   139,   106,   128,   278,   589,   635,   141,   143,
       3,     4,   232,   165,     5,    61,    88,   304,     4,   255,
     161,    67,    31,   246,   193,   353,   654,   353,    57,     4,
     358,   359,   358,   359,     3,     4,    14,    15,   161,   124,
       5,     3,     4,   626,    30,    40,   258,     5,   182,    14,
      15,   263,     3,     4,    46,    14,    15,   128,   194,   444,
     113,    58,   351,   352,    57,  1308,   353,     5,   220,   652,
     116,   358,   359,    65,  2317,    67,  1319,  2602,  2603,   299,
     119,  2606,     5,  2608,    62,   201,   669,   133,    31,   672,
       5,    14,    15,   262,   246,  2620,  2621,    62,   197,   198,
    2625,  2626,   148,    62,  2629,   174,    62,    62,   154,  2634,
    2635,     5,   232,   159,   183,    34,   699,    62,   113,   243,
     703,   704,   705,   706,   254,   232,   709,   199,   711,   298,
     713,   714,   715,    14,    15,   259,   260,   215,   135,    62,
     243,    22,   213,   204,   134,   314,    27,   223,   201,   534,
      14,    15,   282,    34,   282,   223,   259,   260,   127,   282,
     199,   246,   790,  2688,   301,    62,  2691,   123,   123,   215,
     303,  2696,     4,   272,    55,   201,    62,  2702,   123,   165,
      62,     0,  2707,   282,   283,     4,   571,    55,   234,    62,
     109,    72,   143,   239,   223,   241,   188,    62,    62,   782,
     783,   254,   785,   786,   787,   788,   201,   124,   124,    14,
      15,   119,    42,    43,   313,   254,  1694,   800,   801,   197,
     198,   267,   268,    91,   807,   808,   123,   351,   352,   275,
     223,   182,   197,   198,   220,   293,   233,   123,   197,   198,
     279,   123,   232,     5,   827,   828,   829,   293,   351,   352,
     123,   248,    14,    15,  1147,   247,  2781,    62,   123,  2784,
     246,   844,   845,   846,    62,   848,   849,   850,    83,   852,
    2003,  2004,  2005,     6,   197,   198,    67,   145,   273,  2804,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     873,   210,   875,  2818,   272,    46,  2821,  2822,    71,   291,
      62,   291,   885,   349,   282,   283,     6,   272,   300,   892,
     893,  1673,  1873,   272,   311,   898,    67,   282,   283,   107,
    1565,   124,   287,   282,   283,   123,   282,   282,  1889,   246,
     246,    82,   915,   197,   198,   313,   919,   282,    26,    67,
      26,   156,   133,   926,   927,   928,   176,   177,   313,   272,
     161,   934,   121,  1773,   313,    33,   939,  1918,    92,   282,
     283,     3,     4,   991,   287,   210,   174,   950,   159,     4,
       5,  1264,    67,  1793,     5,   205,    28,    95,    90,   190,
       3,     4,   263,   264,   967,   282,   254,    16,  1808,    89,
     313,  1811,   197,   198,    17,   113,   282,    14,    15,  1819,
     282,   174,  1822,   239,  2604,     3,     4,    67,   272,   282,
    1830,    90,   293,  1833,   202,   230,   231,   282,   282,   283,
    1840,   292,  2622,   123,     3,     4,   114,  2475,   114,  2536,
     245,    67,     3,     4,    73,   197,   198,   188,     5,    31,
     128,   175,   128,   246,     5,    62,     5,    14,    15,   313,
     241,  1034,     5,    14,    15,   336,   337,   338,    24,    25,
       4,  2022,     4,     3,     4,     3,     4,   272,   256,    40,
     134,     5,  1055,   288,    12,   163,   194,   282,   283,     5,
     253,  1064,     3,     4,   282,   127,    14,    15,   873,   262,
       3,     4,     3,     4,     5,    62,   247,  1080,    19,  1082,
      40,    62,   293,   155,  1087,  1088,  1089,   352,   313,   173,
     272,     4,     5,   358,  1097,   360,     4,  1100,    39,  1102,
     282,   283,     3,     4,    28,   287,   214,   179,   214,   127,
       5,   183,   266,    99,    62,  1118,    57,  1120,     5,   227,
     291,   227,   113,  2650,     5,  1128,  1129,    60,   154,   300,
     284,   313,  2752,     3,     4,  2662,    89,     5,  2758,    40,
    1143,  1144,    12,     4,  1147,  1148,  1149,     4,   232,     3,
       4,     5,  1155,   113,  1157,     4,     5,  1160,     4,  1162,
     197,   198,   103,  1211,   236,   118,     4,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,  2815,  1199,  2817,     5,   225,
    1203,  1983,  1205,     4,    83,   277,  1209,   291,     3,     4,
     197,   198,   113,   285,   286,    99,   197,   198,     4,     5,
     161,  1224,     5,  1226,   123,  1228,  1229,  1230,  1231,     4,
       5,   155,  1235,  1236,     4,   272,     3,     4,     5,   192,
    1243,   201,   268,   433,   434,   282,   283,  1250,   279,   197,
     198,  1254,  1255,  1256,   207,   179,     3,     4,     4,   183,
     201,  1264,  1265,     3,     4,  1268,     4,     4,     4,     4,
    2052,     4,  2253,  1276,     5,  1278,   313,   156,  1281,   204,
     306,     4,   223,     4,     4,   272,    19,   228,  2269,     4,
    2130,   272,    54,  2274,  2076,   282,   283,   194,   239,  2139,
     287,   282,   283,   200,     5,     5,   287,     9,  2148,     5,
      72,   278,   236,    60,    11,   174,   269,     3,     4,   620,
      60,     7,     8,  1326,   272,  1328,   313,    89,  1331,  1332,
       4,  1334,   313,  1336,   282,   283,     4,     3,     4,  1342,
     102,  1344,   239,     9,    10,    11,   183,   174,  1351,     4,
     203,   230,   231,   277,     5,   203,     5,   310,    35,   121,
     301,   285,   286,   125,     4,   313,   245,   320,   265,   203,
     103,   195,   195,   674,    67,    67,    67,   139,   679,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   232,     5,   288,
       5,    22,    22,   233,   311,     4,     4,  2467,   180,  1224,
    2470,     4,  2472,  1426,   203,  1428,  1429,    88,   161,     5,
      88,   108,     5,     4,     4,  2485,  2486,     5,     5,    50,
      50,     4,    53,    53,     5,    56,     4,  1450,   101,     5,
       4,  1454,  2502,    17,   131,   132,     3,     4,     5,   356,
       7,     8,    17,   140,  1269,     3,     4,     5,     4,     7,
       8,     4,    83,    83,     4,  1478,  1479,    99,     5,     5,
      88,   158,  1287,     4,    88,  1488,     5,     5,     5,  1492,
    2471,   168,     4,    38,     5,   228,  1499,     5,     4,     4,
       4,   112,   112,  2484,   115,   115,     5,  2289,  2489,     5,
    1513,     5,     4,     4,  2296,  1518,     5,    12,     4,  1522,
       4,  1524,  1525,     4,  1527,  1528,  1529,    12,  1531,     4,
     831,  1534,  1535,  1536,  1537,  1538,  1539,  1540,  1541,  1542,
    1543,  1544,     5,     5,  1547,  1548,  1549,  1550,     3,     4,
       5,   170,     7,     8,  1557,  1558,     5,     5,  1561,  1562,
    1563,     4,   161,   161,  1567,  1568,     4,     4,  2350,    38,
     295,  2353,   267,   267,  2356,     5,  2358,  1580,  1581,    62,
    1583,  1584,     4,   246,     5,     5,    33,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,     5,     5,     4,     4,     4,
    1425,  1934,     5,   234,   234,     5,   280,     5,  1631,  1632,
    1633,     5,   280,  1636,     5,     4,   119,     5,  1641,  1642,
     123,  1644,  1645,  1646,     5,  1648,  1649,     5,  1651,     5,
       5,  1654,  1655,     5,     4,     4,   267,   267,     5,     5,
    1663,     4,   246,     5,     5,   107,     5,   114,  1671,   143,
      40,   107,   246,  1676,  1677,   107,  1989,     5,   161,  1682,
     219,    40,   293,   252,   219,     5,     4,   219,  1691,     5,
       5,   219,     4,     4,   113,     5,     5,     5,     5,     5,
       4,   113,   984,     4,     0,     5,     5,     5,    45,     4,
      12,     5,     5,     4,     6,     5,   199,     5,  2031,     5,
       4,   246,     5,    60,  1727,     4,  2508,     5,     5,     4,
      12,     5,     4,     4,    19,     4,     4,     4,   185,     5,
     187,   188,     5,   190,   191,    82,  1749,  1750,   246,   143,
     173,  1754,   124,   246,     4,   256,    41,  1760,   215,    44,
    1061,     4,   203,     4,     4,   102,     4,   250,  2749,     4,
     280,   254,   219,     5,     5,     5,     5,     5,     5,     4,
       4,     4,   119,     5,     4,     4,   123,     5,     5,     5,
     246,   238,   239,    78,   246,   246,   279,   317,     4,   282,
      85,   317,     4,     4,     4,     4,     4,     4,   317,   292,
     317,    96,    97,     4,   151,   152,  1117,     5,   103,     5,
       5,   232,   232,   232,   232,   232,     5,     4,     4,     4,
    1131,     5,     5,     4,     4,   282,  1641,     5,     5,     4,
       4,   280,     5,   128,     5,     4,     4,   294,     5,     5,
       4,     6,     5,     5,     4,   280,     5,     4,     4,     4,
       4,   146,     5,     5,  1867,     5,  1869,   314,  1871,   206,
       5,     5,     4,    12,     5,   160,   161,     4,     4,   216,
       5,     5,   167,   280,     5,     4,     4,  1890,  1891,  1892,
    1893,  1894,  1895,  1896,  1897,  1898,     5,     5,     5,     5,
       4,     4,  1707,     5,   189,     5,     5,     5,     4,     4,
       4,  1914,  1717,  1916,     5,     5,     5,  1722,     5,     4,
     313,     5,     5,     5,     5,  2238,  2239,     4,  2241,  2242,
    1933,  1934,  2245,  2246,     4,     4,  1939,     5,  1239,  1240,
       5,   278,   279,   228,     5,  1948,  1949,  1950,  1951,  1952,
    1953,  1954,  1955,  1956,  1957,    67,     5,  1960,  1961,  1962,
    1963,  1964,  1965,  1966,  1967,  1968,  1969,  1970,  1971,    81,
    1973,    93,  1975,  1976,  1977,  2638,     4,   424,    90,   101,
       5,     4,     4,     4,     4,   107,  1989,  1990,   435,   101,
       5,     5,     5,  2306,     5,     5,   281,   444,     4,     4,
    2774,     5,     4,     4,   361,     5,   291,     5,   130,     4,
       4,     4,   349,     5,     5,     4,   361,     5,     5,     4,
    2023,   133,  2025,     4,  2027,     5,  2029,     5,  2031,  2032,
       5,  2034,   154,     5,     5,   320,     5,     4,  2041,  2042,
     162,     5,   154,     4,     4,  2048,     5,  2050,     5,     5,
       4,  2054,     4,  2716,  2057,     5,     5,     5,     5,     4,
       4,   387,     5,     5,     5,     5,   513,   514,     4,     4,
     432,     5,     4,     4,     4,     4,     4,     4,     4,   526,
     202,     4,     4,     4,   531,     4,  1368,     4,   210,     4,
     202,     4,     4,   540,     5,     5,   361,   361,  1380,   361,
    2103,   361,   361,   361,     4,     6,     5,     4,     6,     5,
       4,   293,     5,     5,     5,     4,  1398,  1399,   296,     4,
    1421,     4,     4,     4,     4,     4,  1427,     4,     4,   241,
       4,   293,     5,     4,   256,     5,     5,     5,     4,  2649,
       5,     4,     4,  2456,     5,     5,   268,  2460,  1449,     4,
       4,  1452,     5,  2201,     4,  1456,   268,     4,   361,     5,
       4,     4,   284,     4,     4,   612,   613,   614,   615,     5,
       5,     4,     4,     4,     4,     4,  1477,   355,     5,     4,
    2264,     5,  1483,  2496,     5,     4,     4,     4,  2636,     5,
    1491,     5,     5,  1494,     4,   307,     5,   309,     5,     5,
       4,     4,  1503,  1504,  2207,     5,     5,     5,  2716,  2712,
      -1,    -1,   749,  1514,    -1,  2218,  2219,  2220,  2221,  2222,
    2223,  2224,  2225,  2226,  2227,  2228,   673,    -1,    -1,    -1,
      -1,  2234,    -1,    -1,    -1,  2238,  2239,    -1,  2241,  2242,
      -1,    -1,  2245,  2246,  2247,  2248,  2249,  2250,  2251,  2252,
      -1,  2254,  2255,  2256,    -1,  2060,  2727,  2728,    -1,    -1,
      -1,    -1,     4,     5,    -1,    -1,    -1,  2270,  2271,  2272,
    2273,    -1,  2275,  2276,  2277,  2278,  2279,  2280,    -1,  2282,
      -1,    -1,  2285,  2286,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2100,    -1,    -1,    -1,    -1,
    2303,    -1,    -1,  2306,  2307,    -1,    -1,    -1,  2311,    -1,
      -1,    -1,  2315,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
     508,    -1,    74,    -1,    76,    -1,    -1,   515,    -1,    81,
     518,    -1,    84,    -1,    -1,   523,    -1,    -1,    90,   527,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
    2363,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   835,    -1,
      -1,   133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     847,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   154,    -1,    22,    -1,   594,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,
      -1,    -1,  2435,    -1,    -1,    -1,  2439,   884,   180,   181,
      -1,    49,    50,    -1,    52,    53,  2449,  2450,    -1,    -1,
      -1,    -1,  2455,  2456,    -1,    63,  2459,  2460,    -1,    -1,
     202,    -1,  2465,    -1,    -1,  2468,  2469,    75,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    86,    -1,
      -1,    -1,    -1,   225,  2487,  2488,    -1,  2490,  2491,  2492,
    2493,  2494,    -1,  2496,  2497,    -1,   104,   239,  2501,   241,
      -1,  1783,    -1,   111,   112,    -1,    -1,   115,    -1,  1791,
    1792,  2514,    -1,    -1,   256,   962,  2519,    -1,    -1,   261,
      -1,    -1,    -1,    -1,  1806,  1807,   268,    -1,   972,    -1,
      -1,    -1,   710,   275,  2537,  1817,  1818,    -1,    -1,   717,
      -1,    -1,    -1,    -1,    -1,    -1,  1828,  1829,    -1,    -1,
      40,   293,    -1,    -1,    -1,    -1,  1838,  1839,    -1,    -1,
    1004,    -1,  1844,    -1,   306,   307,    -1,   309,    -1,    -1,
     178,    -1,  1854,    -1,    -1,    -1,  2579,    67,    -1,    -1,
      -1,  2584,  1883,  2586,    -1,    -1,    -1,    -1,    -1,  2592,
    1037,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2605,    -1,    -1,    -1,    -1,   349,    -1,    -1,
      -1,   101,    -1,    -1,    -1,    -1,    -1,   107,  1919,    -1,
    2623,    -1,    -1,   113,  2627,    -1,   234,    -1,  2676,    56,
      -1,    -1,   240,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    -1,   133,  1091,    -1,  2649,    -1,    -1,   257,
      -1,    -1,    -1,    -1,  1101,    -1,   834,    -1,    -1,   267,
      -1,    -1,    -1,   841,   154,    -1,    93,    94,    -1,    -1,
      -1,    -1,    -1,    -1,   101,    -1,    -1,  2680,    -1,   169,
     107,    -1,  2685,    -1,  2687,    -1,   294,   295,    -1,    -1,
      -1,  2694,    -1,    -1,    -1,    -1,  2699,    -1,    -1,    -1,
      -1,  2704,    -1,   130,    -1,    -1,   133,   315,   886,   887,
      -1,    -1,   202,   891,    -1,    -1,   894,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2727,  2728,    -1,   154,   906,    -1,
      -1,    -1,    -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2753,   241,   360,  2756,    -1,    -1,  2759,    -1,    -1,    -1,
    1207,    -1,    -1,    -1,    -1,    -1,   256,  2770,  2771,  2772,
    2773,    -1,    -1,    -1,    -1,   202,    -1,  1224,   268,  2782,
      -1,    -1,  2785,   210,    -1,    -1,    -1,    -1,    -1,  2792,
      -1,  2794,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1248,    -1,    -1,    -1,   295,    -1,    -1,    -1,    -1,
      -1,  1258,    -1,    -1,    -1,    -1,    -1,   307,    -1,   309,
     310,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1275,   256,
      -1,    -1,  2114,    -1,  1012,    -1,    -1,    -1,    -1,    -1,
    1287,   268,  2124,    -1,    -1,  1292,  2128,  2129,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2137,  2138,   284,    -1,   349,
      -1,    -1,    -1,    -1,  2146,  2147,   293,    -1,   295,    -1,
    2152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2162,  2163,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2173,  2174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2184,    -1,    -1,    -1,    -1,    -1,  1352,  1353,
    1354,  2193,    -1,  2195,    -1,    -1,    -1,    -1,  1362,  1363,
    1364,    -1,   349,    -1,    -1,  1369,  1370,  1371,    -1,    -1,
    1374,  1375,    -1,  1377,  1378,    -1,    -1,    -1,    -1,  2744,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1407,  1408,    -1,    -1,  1411,  1412,    -1,
      -1,  2776,    -1,    -1,  2779,    -1,    -1,    -1,  1425,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2290,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2053,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1455,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2070,  2071,  2072,    -1,
      -1,  2075,    -1,  2077,  2078,    -1,    -1,  2081,  2082,  2083,
       3,     4,  2086,  2087,  1212,    -1,  2090,  1484,  2092,  2093,
    1487,  2095,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
    1497,  1498,    -1,    -1,    -1,    -1,    -1,    -1,  1505,    -1,
      -1,    -1,    -1,    -1,  1242,  1512,    -1,    -1,    -1,  1247,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1257,
      -1,    -1,    -1,    -1,    57,  2367,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2377,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2386,  1552,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2395,    -1,    -1,    -1,  1564,    -1,    -1,
    2402,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     103,  2413,    -1,    -1,    -1,    -1,    -1,  2419,    -1,    -1,
    2422,    -1,    -1,  2425,    -1,    -1,    -1,    -1,    -1,  2203,
      -1,    -1,  2206,    -1,    -1,    -1,    -1,  2211,    -1,    -1,
    2214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2233,
      -1,    -1,  2483,    -1,    -1,    -1,    -1,    -1,   161,    -1,
      -1,    -1,    -1,    -1,  1641,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2503,    -1,    -1,    -1,  2507,    -1,    -1,    -1,
      -1,    -1,  1659,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1675,    -1,
      -1,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1688,    -1,  1690,    -1,    -1,    -1,    19,    -1,    -1,
     223,    -1,    -1,  1700,    -1,   228,  1703,    -1,  1705,  1706,
    1707,  1708,    -1,  2545,  1711,  2319,    -1,  1714,    -1,    -1,
    1717,  1718,  2554,  1720,  1721,  1722,  1723,    -1,  1725,  1726,
      -1,  2563,    -1,    -1,  1731,  1732,  1733,  2569,    -1,  1736,
    1737,  2573,    -1,    -1,  2576,  1742,  1743,  2351,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1493,    -1,    -1,    -1,    -1,
    1764,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    -1,  1777,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2642,    -1,  1787,    -1,    -1,    -1,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,  1553,    -1,  2431,    -1,    -1,
      -1,  1559,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2451,    -1,    -1,
      -1,    -1,    -1,    -1,  2458,    -1,    -1,  2461,  2462,    -1,
      -1,    -1,    -1,    -1,    -1,  1859,    -1,    -1,    -1,  1866,
      -1,    -1,    -1,  1870,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1882,    -1,    -1,  1885,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,  1637,
      -1,    -1,    -1,    -1,  2765,  1643,    -1,    -1,  1915,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1668,    -1,    -1,    -1,    -1,    -1,  1674,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1701,  1971,    -1,  2580,    -1,    -1,    -1,
      -1,  1709,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2599,    -1,  1994,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2045,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2060,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2678,  2679,    -1,  2681,    -1,  2683,
    2684,    -1,  2686,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2089,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2113,
      -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2739,  1864,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1886,  2153,
    2154,  2155,  2156,  2157,    -1,  2159,  2160,    -1,    -1,    -1,
    2164,  2165,  2166,  2167,  2168,    57,  2170,  2171,    -1,    -1,
      -1,    -1,  2786,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1920,  1921,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2205,  1937,
    1938,  2208,    -1,    -1,  1942,  1943,    -1,    -1,    -1,  2216,
      -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2232,    -1,    -1,  2235,    -1,
      -1,    -1,    -1,  2240,    -1,    -1,  2243,  2244,    -1,    -1,
      -1,    -1,    -1,    -1,  1982,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1993,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2291,  2292,    -1,    -1,    -1,    -1,
    2028,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2044,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2332,    -1,    -1,    -1,    -1,
    2068,   223,    -1,    -1,    -1,  2073,   228,    -1,    -1,    -1,
      -1,  2079,    -1,    -1,    -1,    -1,  2084,    -1,    -1,    -1,
    2088,    -1,    -1,  2091,    -1,    -1,  2094,    -1,  2096,    -1,
      -1,    -1,  2366,    -1,    -1,  2369,  2370,  2371,  2372,  2373,
      -1,  2375,  2376,    -1,  2378,  2379,  2380,  2381,  2382,    -1,
    2384,  2385,    -1,  2387,  2388,  2389,  2390,  2391,    -1,  2393,
    2394,    -1,  2396,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2406,  2407,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2417,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2430,    -1,    -1,    -1,    -1,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,  2463,    -1,    -1,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2474,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    57,    -1,    -1,    -1,    -1,  2524,    23,    -1,
      -1,  2528,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2281,  2548,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2557,    -1,    -1,    -1,    -1,   103,  2297,
      -1,    -1,  2566,    -1,  2568,    -1,    -1,    -1,  2572,    -1,
      -1,    -1,    -1,    -1,    -1,  2582,  2583,   122,  2585,    -1,
      -1,    -1,    -1,  2590,  2591,    -1,    -1,    -1,  2595,  2327,
      -1,    -1,    -1,    -1,    -1,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,    -1,    -1,
      -1,  2628,  2360,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2656,
      -1,    -1,    -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,
      -1,  2665,    -1,  2667,   209,  2669,    -1,    -1,  2672,    -1,
    2674,    -1,   217,   218,    -1,    -1,    -1,    -1,   223,    -1,
     103,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,
    2428,    -1,    -1,    -1,   117,    -1,  2434,    -1,    -1,    -1,
    2438,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2454,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2744,   161,    -1,
      -1,    -1,    -1,    -1,   249,    -1,    -1,   252,    -1,    -1,
      -1,    -1,    -1,    -1,  2761,    -1,   179,    -1,    -1,   304,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2505,  2506,  2776,
      -1,    -1,  2779,    -1,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,    19,    -1,   228,    -1,    -1,   353,    -1,
      -1,    -1,    -1,   358,   359,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    67,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2610,    -1,   297,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   161,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,
      -1,    49,    50,    -1,    -1,    53,    -1,    -1,    -1,    -1,
    2708,    -1,    60,    -1,    -1,    63,    -1,   193,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,
      -1,    -1,    -1,  2731,    -1,    83,    -1,    -1,    -1,   215,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   111,   112,    -1,    -1,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2777,
      -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2797,
      -1,    -1,  2800,    -1,    -1,   281,   154,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,
      -1,    -1,    -1,    -1,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,    -1,   349,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   232,    -1,   234,    -1,    -1,    -1,
      -1,    -1,   240,   241,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    19,    -1,    53,    -1,   257,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
     268,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    -1,    -1,    19,    -1,    -1,    -1,    83,    84,    -1,
      -1,    -1,    -1,    57,    -1,   293,    -1,   295,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,   305,    -1,    -1,
      -1,   107,    -1,    -1,    -1,   111,   112,   315,    -1,   115,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,   133,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   349,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    -1,   178,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,   202,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,    -1,    -1,    -1,   161,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   232,    -1,   234,    -1,
      -1,    -1,    57,    -1,   240,   241,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   223,
     256,   257,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,
      -1,   267,   268,    -1,    -1,    -1,   161,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   223,   103,    -1,
      -1,    -1,   228,    -1,    -1,    -1,    -1,   293,    -1,   295,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   307,    -1,   309,    -1,   161,    -1,    -1,    -1,   315,
     166,    -1,    -1,    -1,    -1,   289,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   228,    -1,    -1,   161,    -1,    -1,    -1,
      -1,    -1,    -1,   349,    -1,    -1,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   297,   228,   103,   166,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   161,    -1,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,    -1,    -1,    -1,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,    -1,    -1,    -1,    -1,    -1,    -1,   228,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,    -1,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,    41,
      -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    -1,    -1,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    44,    -1,    -1,    47,    -1,    -1,   120,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,    -1,
     142,    -1,    -1,    -1,   146,    -1,    78,   149,    80,    -1,
      -1,   153,   154,    85,    -1,    87,    88,    89,   160,    -1,
      -1,    -1,    -1,    95,   166,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,
      -1,    -1,   184,   185,   186,    -1,    -1,   189,   190,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   128,    -1,    -1,    -1,
      -1,    -1,   204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,   221,
     222,   223,   154,    -1,   156,   157,    -1,    -1,   160,    -1,
      -1,    -1,   164,   235,   166,   237,    -1,    -1,    -1,    -1,
      -1,    -1,   244,    -1,    -1,    -1,   248,    -1,    -1,    -1,
     252,    -1,   254,    -1,   256,    -1,    -1,   189,   190,   261,
      -1,    -1,   194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   204,   275,    -1,    -1,    -1,    -1,    -1,   281,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     222,    -1,    -1,    -1,   296,   297,    -1,   229,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,   310,    -1,
      -1,    -1,    -1,    -1,   316,    -1,    -1,   319,   320,    -1,
      -1,    -1,   254,    -1,   256,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   350,   281,
      -1,    -1,    -1,    -1,    -1,   357,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   296,   297,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,
     312,    -1,    -1,    -1,    -1,    -1,   318,    -1,   320,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   357
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
     374,   364,     5,   364,    40,   113,   364,   544,   366,   364,
     374,   376,   543,   364,   381,   364,     4,   375,    55,    91,
     145,   254,   548,     4,     4,   364,     4,   154,   268,   549,
       5,   374,     4,    40,   113,   364,   556,   364,    99,    62,
     123,   254,   282,   558,   123,   571,    62,   119,   123,   161,
     199,   250,   254,   279,   282,   292,   560,   561,    62,   123,
     282,   570,     5,     4,    34,   109,   210,   553,    67,   366,
     393,    67,   366,   394,    67,   366,   395,    13,   196,   552,
     364,   364,   232,   364,   396,   364,   279,     4,   364,   364,
       4,   580,     4,   295,   578,     4,   295,   579,     4,   381,
     127,   364,   583,   364,   364,     4,     5,   364,    12,   364,
     364,   364,    30,    96,   167,   258,   263,   380,   380,     4,
     204,   364,   364,     4,     4,     4,   364,   364,   364,   364,
       4,     4,     5,     5,   374,     5,   364,   364,   370,   372,
     372,   374,   364,   364,   364,   364,   364,   364,   364,   374,
     376,   373,   364,   364,   373,   364,     5,   278,   105,   194,
     432,   200,   258,   435,   174,    79,   178,   258,   436,   143,
     182,   417,   417,     4,   439,     4,   441,   200,   265,   443,
     183,   444,   174,   381,   364,   364,   374,   374,   381,   381,
     381,   374,   381,   364,   374,     4,   457,     4,   376,   455,
     203,     4,   170,   320,   456,   203,   374,     4,   136,   301,
     459,     5,     5,   429,     4,   203,   138,   255,   367,   364,
       4,     5,    61,    67,   116,   133,   148,   154,   159,   215,
     234,   239,   241,   267,   268,   275,   293,   349,   514,   376,
     195,   195,    67,   466,    67,   467,    67,   468,   232,   469,
     364,     5,   430,   233,   471,   375,   381,     5,   374,   374,
     374,   374,     4,   366,     4,     4,   203,   364,    14,    15,
      62,   197,   198,   272,   282,   283,   313,    88,     5,     5,
      14,    15,    62,   197,   198,   272,   282,   283,   287,   313,
      88,   161,   166,   375,   491,   496,    88,   161,     5,   489,
       4,     4,    14,    62,   197,   272,   282,   313,     5,     5,
       4,   364,   375,    20,    21,    22,    49,    50,    53,    56,
      63,    67,    75,    76,    83,    84,   101,   107,   111,   112,
     115,   133,   154,   178,   202,   232,   234,   240,   241,   256,
     257,   267,   268,   293,   295,   307,   309,   315,   349,    67,
      81,    90,   101,   133,   154,   202,   241,   268,   307,   309,
       4,    30,   165,   220,   246,   508,     5,    64,   106,   243,
     259,   260,   351,   352,   513,   101,   506,    17,   268,   511,
      40,   113,   201,   512,     4,     5,    17,   219,   302,   364,
     268,   513,   521,   128,   513,   522,    36,    40,   113,   137,
     201,   301,   364,   523,   374,   366,    93,   101,   107,   130,
     154,   162,   202,   210,   256,   268,   284,   526,    40,   113,
     201,     5,   268,   294,   530,    17,   126,   172,   219,   302,
     531,   295,   366,   532,     5,   101,   107,   310,    17,    17,
       4,   364,   364,   364,   364,   364,   364,   381,   364,   364,
     373,   364,     4,   381,     4,    40,   113,   201,   273,   550,
      40,   113,   201,   273,   551,     4,    99,     5,     5,    88,
       4,     5,     5,    88,     5,   561,    62,   123,   161,   282,
     565,    62,   123,   282,   569,    88,   161,    62,   123,   282,
     563,     4,    62,   123,   282,   562,     5,     5,     4,     4,
       5,     5,     5,   364,   364,   364,     4,   364,   575,   364,
     364,     6,   375,     4,     5,     4,     4,     5,     4,    99,
     270,   382,   364,   364,    12,     5,    12,   364,   364,    12,
       4,    12,     4,     4,   364,   364,   364,     4,   366,     4,
       4,   381,   374,   381,   364,   364,   364,   374,   364,   373,
     364,   364,     5,     5,   364,   376,   364,   374,   364,   381,
     381,   382,   382,   382,   381,   373,   364,   381,   364,   367,
     458,   170,     5,     4,   381,   161,   161,     4,     5,     4,
       4,   364,   453,    38,    38,   364,    20,    21,    22,    49,
      50,    53,    60,    63,    67,    75,    76,    83,   111,   112,
     115,   133,   154,   178,   187,   232,   234,   240,   241,   257,
     268,   293,   295,   305,   315,   349,    67,   133,   159,   241,
     293,    30,   165,   220,   246,   515,   364,   215,   364,   516,
      17,   364,   267,   526,   267,   215,   364,   517,   295,   518,
      17,   100,   364,   364,     5,   382,    57,   374,     4,     5,
     482,   364,     5,     5,     5,   161,   190,   386,   386,   169,
     274,   384,     4,     4,     5,     5,   486,   280,   280,     5,
       5,     5,    17,   163,   385,   385,   384,     4,     4,   384,
       5,     5,   490,   166,   348,   375,   494,     5,   493,     5,
       5,   497,     5,   498,     5,    14,    15,    62,   197,   198,
     272,   282,   283,   287,   313,     4,     4,     5,     5,   386,
     384,     4,     5,     5,   381,    83,   156,   230,   231,   245,
     288,   389,     7,     8,   364,   369,   246,   124,   246,   246,
     107,    40,    67,   101,   107,   113,   133,   154,   169,   202,
     241,   256,   268,   295,   307,   309,   310,   349,   507,   124,
     246,     5,    27,   171,   246,   291,   143,   107,    22,    50,
      53,    83,   112,   115,   234,   267,    22,    50,    53,    56,
      83,   112,   115,   234,   267,   293,    40,   124,   246,   246,
     107,     5,   219,    27,   232,    36,   137,   301,   364,   271,
     278,   124,   252,   374,   526,    40,   134,   232,   291,   252,
     219,     5,     5,   256,    27,   232,     4,     5,     5,   219,
      36,   137,   301,   364,   526,   219,   366,     4,     4,   364,
       5,   313,    22,    27,    49,    50,    52,    53,    63,    75,
      76,    83,    86,   104,   111,   112,   115,   178,   234,   240,
     257,   267,   294,   295,   315,   360,   509,   364,   364,   364,
     364,   364,   513,   374,     5,     4,     5,   364,   364,   374,
     364,   366,   364,   364,   513,     5,     5,   364,   364,   366,
       5,    17,     5,     5,   364,   364,   373,   364,   364,     4,
     364,   364,   113,   364,   364,   113,     4,    42,    43,   176,
     177,   205,   391,   391,    62,   123,   282,   559,   391,     5,
      62,   123,   282,   564,     5,     5,    62,   123,   282,   566,
       4,     5,     5,     4,    62,   123,   282,   568,    62,   123,
     282,   567,     5,     5,     4,     5,     5,     4,   391,   391,
     391,   364,   364,   364,     4,   374,   364,   375,   381,     5,
       5,    12,   364,   374,   376,   364,    12,   364,   364,   364,
      60,   364,     6,     4,   364,   364,    47,   281,   418,     5,
     366,   366,   381,   364,     4,     4,     4,   381,   374,   364,
     364,   364,   364,   381,   374,   382,   373,   364,     4,   382,
     364,     4,   376,     5,    24,    25,    99,   383,     4,   374,
     364,   364,     4,   364,     5,    83,   156,   230,   231,   245,
     288,   374,   376,   246,   124,   246,   246,    21,   246,   374,
     124,   246,    27,   171,   246,   291,   143,    21,   246,   124,
     246,   246,    21,   246,    27,   173,   232,   173,   271,   278,
     124,   173,   232,   299,   526,   134,   173,   232,   291,     4,
     256,    27,   173,   232,   526,   215,   364,   364,   364,   364,
     364,   364,   203,   364,   364,    20,   242,   474,     4,     4,
     364,   386,   386,   386,     4,   386,   386,   386,    14,    15,
      62,   197,   198,   272,   282,   283,   313,   385,   386,   386,
     386,   386,   386,     4,   386,   386,     4,   385,    14,    15,
      62,   197,   198,   272,   282,   283,   313,     5,   492,     5,
     495,     5,     5,    14,    15,    62,   197,   198,   272,   282,
     283,   287,   313,     5,    14,    15,    62,   197,   198,   272,
     282,   283,   287,   313,     5,    14,    15,    62,   197,   198,
     272,   282,   283,   287,   313,    14,    15,    62,   197,   198,
     272,   282,   283,   313,   280,     5,     5,     5,   385,   385,
     384,     4,     4,   384,     5,     4,     4,   386,   386,     4,
     386,   386,     5,   366,   374,   376,     5,   364,   366,   364,
       5,   364,     5,   369,   107,   202,   256,   107,   202,   256,
       5,   366,   364,   366,     5,   364,   374,   366,     5,   369,
     246,   246,    21,   246,    21,   246,   246,    21,   246,   317,
     317,     4,     4,     4,   507,     4,     4,     4,   317,   317,
       4,     5,     4,   366,   364,     5,   364,     5,   369,   366,
     374,   374,   364,    27,    49,    52,    63,    86,   104,   360,
     387,     4,   366,   364,   381,   366,     5,   374,   374,   364,
     366,   366,   374,   374,   364,   366,   364,     5,   364,   232,
     232,   364,   364,   232,   364,   232,   364,   364,   519,   527,
     364,   232,   232,   364,   364,   364,   364,   364,   364,   364,
     364,     5,   313,   364,   510,   364,   364,   232,   364,   364,
     364,   364,   374,   381,     5,     4,     4,   364,   364,   381,
     364,   364,   364,   374,   513,   364,   364,     5,     4,   364,
     364,   364,   364,     5,     5,     4,   391,     5,     5,     4,
       4,     4,     5,     5,     4,     4,     5,     5,     4,     5,
       5,     4,   364,   364,   364,   364,   381,   364,   374,   376,
     364,   381,   364,   364,   364,   364,   364,     5,   364,     4,
       6,   364,   364,     4,   374,   364,   381,   183,   379,   364,
     379,   382,   381,   374,   364,   364,     4,   364,   374,   374,
     364,     4,   367,     5,     5,     5,     5,     5,   374,   381,
     374,   374,   374,   374,   376,   374,   381,   374,   374,   374,
     376,   374,   374,   374,   374,   376,   374,   374,   374,   364,
     374,   374,   374,   374,   374,   374,   374,   364,   364,     4,
     364,     5,     4,   364,   386,     5,     5,     5,   384,     4,
       4,     5,   386,   385,     4,   386,     5,     5,     5,   385,
     385,   384,     4,     4,     5,    14,    15,    62,   197,   198,
     272,   282,   283,   313,    14,    15,    62,   197,   198,   272,
     282,   283,   313,    14,    15,    62,   197,   198,   272,   282,
     283,   313,   280,     5,     5,     5,   385,   385,   384,     4,
       4,   384,     5,   280,     5,     5,     5,   385,   385,   384,
       4,     4,   384,     5,   280,     5,     5,     5,   385,   385,
     384,     4,     4,   384,     5,     5,     5,     5,   385,   385,
     384,     4,     4,     5,   385,     4,     4,   385,     4,     4,
     386,     5,   381,   374,   364,   364,   374,   364,     5,   369,
       5,   374,   366,     5,   374,   381,     5,   369,   364,   364,
     364,   364,   364,   364,   364,   364,   364,     4,     4,     5,
       4,     4,   364,   374,   364,     5,   369,   366,   381,   381,
     364,   373,   381,   381,   364,   381,   381,   364,   364,   364,
     364,   364,   364,   364,   364,   364,   364,    56,    67,    94,
     133,   293,   295,   349,   524,   525,   526,   538,   539,   364,
     364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   374,     5,   364,   364,   364,   364,     4,     4,   381,
     382,     5,     5,   373,   364,     4,   381,   374,     4,   391,
     391,   391,   369,   364,   364,   364,   381,   364,   373,   364,
     364,    12,     5,     5,     4,   364,   364,     4,   381,   374,
     364,   364,   382,   383,   364,     5,   364,   374,   376,     5,
       5,     5,     5,     5,   381,   383,   383,   383,   381,   383,
     382,   383,   383,   381,   383,   383,   383,   381,   383,   383,
     381,   374,   383,   381,   383,   383,   381,   383,   381,     4,
     374,   376,     5,   364,     4,   386,   385,     4,   385,     5,
       5,     5,   385,   385,   384,     4,     4,     5,     5,     5,
       5,   385,   385,   384,     4,     4,     5,     5,     5,     5,
     385,   385,   384,     4,     4,     5,   385,   386,   386,   386,
     386,   386,     4,   386,   386,     4,   385,   385,   386,   386,
     386,   386,   386,     4,   386,   386,     4,   385,   385,     4,
       4,   385,     4,   385,   385,     4,     4,     4,   375,   383,
       4,   374,   383,   364,   374,     4,   383,   383,   374,     4,
     364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   374,   383,   364,   374,     4,   373,   373,   374,   373,
     373,   374,   374,   373,   373,   364,   364,   364,   364,   364,
     364,   369,   364,   364,   364,   361,   361,   361,   361,   361,
     361,   361,   525,   361,   369,   364,   364,   364,   364,   369,
     364,   364,   364,   364,   364,   364,   381,   364,   313,   368,
     369,   364,   364,   382,   366,   374,   374,   382,   381,     4,
     364,   373,   364,    60,   364,     5,     5,   364,     4,   379,
     383,     5,   381,     4,     5,     4,     5,   374,     5,   382,
     383,   382,   382,   382,     5,   381,     4,   364,   386,   385,
     386,   386,   386,   386,   386,     4,   386,   386,   385,   386,
     386,   386,   386,   386,     4,   386,   386,   385,   386,   386,
     386,   386,   386,     4,   386,   386,   385,   386,   385,     4,
     386,   386,   385,     4,   386,   385,     4,   385,   385,   381,
     374,   383,     4,   381,   364,   381,   364,   364,   364,   383,
       4,   381,   364,   373,   383,   364,   373,   383,   383,   374,
     364,     4,   388,   388,   364,   364,   388,   369,   388,   527,
     374,   507,     5,     4,     5,     5,     5,     4,   366,   369,
     388,   388,   364,   364,   369,   364,   364,   364,   364,   364,
     373,   364,     5,   527,   364,   388,   366,   528,   529,   381,
     381,   366,   382,     4,     5,   364,     5,     4,     6,   364,
       4,    32,   191,   290,   425,   374,     5,    32,   191,   290,
     390,   374,     4,   425,   364,   385,   386,   385,   386,   385,
     386,   386,   385,   386,   385,   385,   364,   383,   374,   374,
     364,   374,   364,   374,   374,   364,   374,   383,     4,   527,
     527,   368,   364,   527,     4,   527,   381,     5,     4,     4,
     527,   527,   368,   364,     4,   527,   527,   364,   374,   527,
     527,   527,   528,   535,   536,   526,   533,   534,   366,     4,
       5,     5,     6,     4,   194,   311,   356,   364,   416,   425,
       4,   374,   425,     4,   386,   386,   386,   386,   386,   375,
     383,   383,   364,   383,     4,   383,   383,   364,   383,   364,
     527,   527,     4,   364,   527,     5,   364,   527,     4,   364,
     527,   381,   535,   537,   538,   361,   534,     5,     5,     4,
     364,   417,   364,   417,   381,   383,     4,   374,   376,     4,
     369,   368,   364,   364,   368,   364,   374,   538,   366,     5,
       5,   364,   364,   364,   364,   390,     5,   374,   376,   381,
     374,   376,   527,   364,     4,   527,   364,   383,     5,     5,
     364,     5,   364,   381,   381,     4,   527,     4,     5,     5,
       5,   368,   368,   527,   527,   527
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

  case 39:
#line 504 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 42:
#line 507 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 47:
#line 512 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 49:
#line 514 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 51:
#line 516 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 53:
#line 518 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 58:
#line 525 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 59:
#line 526 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 60:
#line 529 "frame/parser.Y"
    {yydebug=(yyvsp[(1) - (1)].integer);;}
    break;

  case 61:
#line 530 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 62:
#line 531 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 532 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 533 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 534 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 535 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 536 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 537 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 538 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 539 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 542 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 72:
#line 544 "frame/parser.Y"
    {(yyval.integer)=1;;}
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
#line 549 "frame/parser.Y"
    {(yyval.integer)=0;;}
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
#line 555 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 81:
#line 556 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 82:
#line 557 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 83:
#line 558 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 84:
#line 559 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 85:
#line 562 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 86:
#line 563 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 87:
#line 566 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 88:
#line 567 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 89:
#line 568 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 90:
#line 571 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 91:
#line 574 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 92:
#line 577 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 93:
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

  case 94:
#line 593 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 95:
#line 600 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 96:
#line 607 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 97:
#line 614 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 98:
#line 615 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 99:
#line 616 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 100:
#line 617 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 101:
#line 618 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 102:
#line 621 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 103:
#line 622 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 104:
#line 623 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 105:
#line 624 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 106:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 107:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 108:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 109:
#line 628 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 110:
#line 629 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 111:
#line 630 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 112:
#line 631 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 113:
#line 632 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 114:
#line 633 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 115:
#line 634 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 116:
#line 635 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 117:
#line 636 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 118:
#line 637 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 119:
#line 638 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 120:
#line 639 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 121:
#line 640 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 122:
#line 641 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 123:
#line 642 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 124:
#line 643 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 125:
#line 644 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 126:
#line 645 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 127:
#line 646 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 128:
#line 647 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 129:
#line 648 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 130:
#line 651 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 131:
#line 652 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 132:
#line 655 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 133:
#line 656 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 134:
#line 657 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 135:
#line 658 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 136:
#line 659 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 137:
#line 660 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 138:
#line 663 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 139:
#line 664 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 140:
#line 665 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 141:
#line 666 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 142:
#line 667 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 143:
#line 670 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 144:
#line 671 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 145:
#line 672 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 146:
#line 673 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 147:
#line 674 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 148:
#line 675 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 149:
#line 676 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 150:
#line 677 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 151:
#line 680 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 152:
#line 681 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 153:
#line 682 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 154:
#line 683 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 155:
#line 684 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 156:
#line 687 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 157:
#line 688 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 158:
#line 689 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 159:
#line 690 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 160:
#line 691 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 161:
#line 692 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 162:
#line 693 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 163:
#line 694 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 164:
#line 697 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 165:
#line 698 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 166:
#line 699 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 167:
#line 702 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 168:
#line 703 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 169:
#line 704 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 170:
#line 705 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 171:
#line 708 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 172:
#line 709 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 173:
#line 710 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 174:
#line 713 "frame/parser.Y"
    {;}
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
#line 718 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 178:
#line 719 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 179:
#line 720 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 180:
#line 723 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 181:
#line 724 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 182:
#line 725 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 183:
#line 726 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 184:
#line 727 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 185:
#line 728 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 186:
#line 729 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 187:
#line 730 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 188:
#line 733 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 189:
#line 734 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 190:
#line 737 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 191:
#line 738 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 192:
#line 739 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 193:
#line 740 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 194:
#line 741 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 195:
#line 742 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 196:
#line 745 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 197:
#line 746 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 198:
#line 747 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 199:
#line 748 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 200:
#line 751 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 201:
#line 752 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 202:
#line 753 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 203:
#line 754 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 204:
#line 755 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 205:
#line 756 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 210:
#line 763 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 211:
#line 764 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 212:
#line 765 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 213:
#line 767 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 214:
#line 770 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 215:
#line 771 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 216:
#line 774 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 217:
#line 775 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 218:
#line 778 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 219:
#line 779 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 220:
#line 782 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 221:
#line 784 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 223:
#line 788 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 224:
#line 789 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 227:
#line 792 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 229:
#line 794 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 230:
#line 797 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 231:
#line 798 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 232:
#line 801 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 233:
#line 802 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 234:
#line 804 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 235:
#line 806 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 236:
#line 807 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 237:
#line 808 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 238:
#line 810 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 239:
#line 812 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 240:
#line 815 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 241:
#line 816 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 242:
#line 819 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 243:
#line 821 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 244:
#line 824 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 245:
#line 826 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 246:
#line 829 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 247:
#line 833 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 248:
#line 834 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 250:
#line 838 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 251:
#line 839 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 252:
#line 840 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 256:
#line 846 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 257:
#line 847 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 259:
#line 850 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 260:
#line 855 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 261:
#line 856 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 262:
#line 859 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 263:
#line 860 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 264:
#line 861 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 265:
#line 862 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 266:
#line 863 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 267:
#line 866 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 268:
#line 867 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 269:
#line 868 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 270:
#line 869 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 271:
#line 872 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 272:
#line 874 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 273:
#line 879 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 274:
#line 884 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 275:
#line 891 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 276:
#line 893 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 277:
#line 894 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 279:
#line 896 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 280:
#line 900 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 281:
#line 902 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 282:
#line 904 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 283:
#line 905 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 289:
#line 916 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 290:
#line 918 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 291:
#line 920 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 292:
#line 925 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 293:
#line 929 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 294:
#line 932 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 295:
#line 933 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 296:
#line 936 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 297:
#line 937 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 298:
#line 939 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 299:
#line 945 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 300:
#line 946 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 301:
#line 947 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 302:
#line 948 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 303:
#line 951 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 304:
#line 952 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 305:
#line 955 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 306:
#line 956 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 307:
#line 959 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 308:
#line 960 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 309:
#line 964 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 310:
#line 966 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 311:
#line 969 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 312:
#line 971 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 313:
#line 974 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 315:
#line 976 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 316:
#line 977 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 317:
#line 978 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 318:
#line 981 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 319:
#line 983 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 320:
#line 984 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 321:
#line 985 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 322:
#line 986 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 323:
#line 990 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 324:
#line 992 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 325:
#line 993 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 326:
#line 994 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 327:
#line 997 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 328:
#line 999 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 329:
#line 1001 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 330:
#line 1003 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 331:
#line 1006 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 332:
#line 1009 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 333:
#line 1010 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 334:
#line 1011 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 335:
#line 1012 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 336:
#line 1015 "frame/parser.Y"
    {fr->fadeCmd((void*)(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].real));;}
    break;

  case 337:
#line 1016 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 338:
#line 1019 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 339:
#line 1022 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 340:
#line 1023 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 354:
#line 1037 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 357:
#line 1040 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 358:
#line 1041 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 362:
#line 1045 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 363:
#line 1046 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 366:
#line 1049 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 367:
#line 1050 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 369:
#line 1053 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 371:
#line 1055 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 373:
#line 1057 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 375:
#line 1059 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 376:
#line 1061 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 379:
#line 1064 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 380:
#line 1068 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 381:
#line 1070 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 382:
#line 1074 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 383:
#line 1076 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 384:
#line 1079 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 385:
#line 1080 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 386:
#line 1081 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 387:
#line 1082 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 388:
#line 1083 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 389:
#line 1084 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 391:
#line 1086 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 392:
#line 1089 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 393:
#line 1090 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 394:
#line 1091 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 395:
#line 1094 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 396:
#line 1097 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 397:
#line 1099 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 398:
#line 1101 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 399:
#line 1102 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 400:
#line 1103 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 402:
#line 1105 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 404:
#line 1108 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 405:
#line 1114 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 406:
#line 1115 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 407:
#line 1118 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 408:
#line 1119 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 409:
#line 1120 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 410:
#line 1123 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 411:
#line 1124 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 413:
#line 1130 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 414:
#line 1132 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 415:
#line 1134 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 416:
#line 1137 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 418:
#line 1139 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 419:
#line 1143 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 420:
#line 1147 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 422:
#line 1149 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 423:
#line 1150 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 424:
#line 1151 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 425:
#line 1152 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 426:
#line 1153 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 428:
#line 1155 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 429:
#line 1156 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 430:
#line 1159 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 431:
#line 1160 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 432:
#line 1161 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 433:
#line 1164 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 434:
#line 1165 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 435:
#line 1169 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 436:
#line 1171 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 437:
#line 1179 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 438:
#line 1181 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 439:
#line 1183 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 440:
#line 1186 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 441:
#line 1188 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 442:
#line 1189 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 443:
#line 1192 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 444:
#line 1195 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 445:
#line 1197 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 446:
#line 1201 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 447:
#line 1203 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 448:
#line 1206 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 449:
#line 1210 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 450:
#line 1211 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 451:
#line 1213 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 452:
#line 1216 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 453:
#line 1217 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 455:
#line 1221 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 456:
#line 1222 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 457:
#line 1223 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 458:
#line 1226 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 459:
#line 1228 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 460:
#line 1229 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 462:
#line 1231 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 466:
#line 1235 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 467:
#line 1236 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 468:
#line 1237 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 469:
#line 1239 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 471:
#line 1241 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 472:
#line 1244 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 473:
#line 1246 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 474:
#line 1248 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 475:
#line 1249 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 476:
#line 1250 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 477:
#line 1251 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 478:
#line 1254 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 479:
#line 1255 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 480:
#line 1259 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 481:
#line 1261 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 482:
#line 1264 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 483:
#line 1267 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 484:
#line 1268 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 485:
#line 1270 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 486:
#line 1272 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 487:
#line 1274 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 488:
#line 1277 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 489:
#line 1278 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 490:
#line 1279 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 491:
#line 1282 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 492:
#line 1283 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 493:
#line 1284 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 494:
#line 1285 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 495:
#line 1286 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 496:
#line 1287 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 497:
#line 1288 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 498:
#line 1291 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 499:
#line 1294 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 500:
#line 1295 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 501:
#line 1296 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 502:
#line 1299 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 503:
#line 1300 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 504:
#line 1301 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 505:
#line 1302 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 506:
#line 1303 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 507:
#line 1304 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 512:
#line 1311 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 513:
#line 1312 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 514:
#line 1313 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 515:
#line 1316 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 516:
#line 1317 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 517:
#line 1320 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 518:
#line 1321 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 519:
#line 1324 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 520:
#line 1325 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 521:
#line 1328 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 522:
#line 1329 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 523:
#line 1332 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 525:
#line 1334 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 526:
#line 1337 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 527:
#line 1338 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 529:
#line 1342 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 530:
#line 1346 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 531:
#line 1349 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 532:
#line 1356 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 533:
#line 1357 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 534:
#line 1360 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 535:
#line 1361 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 538:
#line 1364 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 539:
#line 1365 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 540:
#line 1366 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 541:
#line 1367 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 543:
#line 1369 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 544:
#line 1370 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 545:
#line 1371 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 547:
#line 1373 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 548:
#line 1374 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 549:
#line 1375 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 550:
#line 1376 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 552:
#line 1380 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 553:
#line 1383 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 554:
#line 1384 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 555:
#line 1387 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 556:
#line 1388 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 557:
#line 1389 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 558:
#line 1390 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 559:
#line 1393 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 560:
#line 1394 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 561:
#line 1395 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 562:
#line 1396 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 563:
#line 1399 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 564:
#line 1400 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 565:
#line 1401 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 566:
#line 1402 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 567:
#line 1403 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 568:
#line 1404 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 569:
#line 1407 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 570:
#line 1408 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 571:
#line 1409 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 574:
#line 1413 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 575:
#line 1414 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 576:
#line 1417 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 577:
#line 1420 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 578:
#line 1421 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 579:
#line 1425 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 580:
#line 1427 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 581:
#line 1428 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 588:
#line 1440 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 589:
#line 1442 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 590:
#line 1444 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 591:
#line 1445 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 592:
#line 1447 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 593:
#line 1449 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 594:
#line 1451 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 595:
#line 1453 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 596:
#line 1455 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 598:
#line 1459 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 599:
#line 1460 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 600:
#line 1461 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 601:
#line 1462 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 602:
#line 1463 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 603:
#line 1465 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 604:
#line 1466 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 605:
#line 1467 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 606:
#line 1468 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 607:
#line 1471 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 608:
#line 1475 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 609:
#line 1477 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 610:
#line 1479 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 611:
#line 1481 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 612:
#line 1483 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 613:
#line 1485 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 614:
#line 1487 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 615:
#line 1489 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 616:
#line 1492 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 617:
#line 1494 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 618:
#line 1496 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 624:
#line 1504 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 625:
#line 1505 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 626:
#line 1506 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 627:
#line 1507 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 628:
#line 1508 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 629:
#line 1509 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 630:
#line 1511 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 631:
#line 1513 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 632:
#line 1514 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 633:
#line 1515 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 634:
#line 1516 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 635:
#line 1519 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 636:
#line 1520 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 637:
#line 1521 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 638:
#line 1522 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 639:
#line 1523 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 640:
#line 1525 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 641:
#line 1526 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 642:
#line 1527 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 643:
#line 1528 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 649:
#line 1539 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 650:
#line 1542 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 651:
#line 1545 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 652:
#line 1548 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 653:
#line 1551 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 654:
#line 1554 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 655:
#line 1557 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 656:
#line 1560 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 657:
#line 1563 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 658:
#line 1568 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 659:
#line 1571 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 660:
#line 1574 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 661:
#line 1577 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 662:
#line 1580 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 663:
#line 1583 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 664:
#line 1586 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 665:
#line 1589 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 666:
#line 1592 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 667:
#line 1595 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 668:
#line 1598 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 669:
#line 1603 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 670:
#line 1606 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 671:
#line 1609 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 672:
#line 1612 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 673:
#line 1615 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 674:
#line 1618 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 675:
#line 1621 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 676:
#line 1624 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 677:
#line 1627 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 678:
#line 1632 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 679:
#line 1634 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 680:
#line 1636 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 681:
#line 1638 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 682:
#line 1640 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 683:
#line 1642 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 684:
#line 1647 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 685:
#line 1649 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 686:
#line 1651 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 687:
#line 1655 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 688:
#line 1658 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 689:
#line 1661 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 690:
#line 1664 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 691:
#line 1667 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 692:
#line 1670 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 693:
#line 1673 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 694:
#line 1676 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 695:
#line 1679 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 696:
#line 1682 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 697:
#line 1685 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 698:
#line 1689 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 699:
#line 1690 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 700:
#line 1691 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 701:
#line 1692 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 702:
#line 1693 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 703:
#line 1694 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 704:
#line 1696 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 705:
#line 1698 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 706:
#line 1699 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 707:
#line 1700 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 708:
#line 1701 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 709:
#line 1704 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 710:
#line 1705 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 711:
#line 1706 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 712:
#line 1707 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 713:
#line 1708 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 714:
#line 1710 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 715:
#line 1711 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 716:
#line 1712 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 717:
#line 1713 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 718:
#line 1717 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 719:
#line 1719 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 720:
#line 1720 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 721:
#line 1722 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 722:
#line 1724 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 723:
#line 1726 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 724:
#line 1729 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 725:
#line 1730 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 726:
#line 1733 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 727:
#line 1734 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 728:
#line 1735 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 729:
#line 1738 "frame/parser.Y"
    {;}
    break;

  case 730:
#line 1741 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 731:
#line 1742 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 732:
#line 1743 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 733:
#line 1744 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 734:
#line 1745 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 735:
#line 1746 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 736:
#line 1747 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 737:
#line 1751 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 739:
#line 1759 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 740:
#line 1760 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 741:
#line 1762 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 742:
#line 1764 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 743:
#line 1765 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 744:
#line 1766 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 746:
#line 1767 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 749:
#line 1770 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 750:
#line 1771 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 751:
#line 1773 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 752:
#line 1775 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 753:
#line 1777 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 754:
#line 1780 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 755:
#line 1782 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 756:
#line 1783 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 757:
#line 1785 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 758:
#line 1788 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 759:
#line 1791 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 760:
#line 1793 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 761:
#line 1796 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 762:
#line 1799 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 763:
#line 1802 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 764:
#line 1805 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 765:
#line 1809 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 766:
#line 1813 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 767:
#line 1818 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 768:
#line 1822 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 769:
#line 1823 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
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
#line 1893 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 807:
#line 1895 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 808:
#line 1899 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 809:
#line 1902 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 810:
#line 1905 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 811:
#line 1909 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 812:
#line 1913 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 813:
#line 1918 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
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
#line 1948 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 828:
#line 1951 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 829:
#line 1955 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 830:
#line 1957 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 831:
#line 1958 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 832:
#line 1960 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 833:
#line 1963 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 834:
#line 1966 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 835:
#line 1967 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 836:
#line 1969 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 837:
#line 1970 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 838:
#line 1971 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 839:
#line 1973 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 840:
#line 1974 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 841:
#line 1976 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 842:
#line 1979 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 843:
#line 1982 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 844:
#line 1984 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 845:
#line 1985 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 849:
#line 1990 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 850:
#line 1991 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 851:
#line 1993 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 852:
#line 1995 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 853:
#line 1997 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 854:
#line 1998 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 858:
#line 2004 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 859:
#line 2005 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 860:
#line 2006 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 861:
#line 2007 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
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
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2084 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2093 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2101 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
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
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 960:
#line 2312 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 961:
#line 2315 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 962:
#line 2317 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 963:
#line 2319 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 964:
#line 2321 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 965:
#line 2323 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 966:
#line 2325 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 967:
#line 2327 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 968:
#line 2328 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 969:
#line 2329 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 970:
#line 2331 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 971:
#line 2333 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 972:
#line 2335 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
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
#line 2350 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 981:
#line 2352 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 982:
#line 2353 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 983:
#line 2354 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 984:
#line 2355 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 985:
#line 2357 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 986:
#line 2358 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 987:
#line 2359 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 988:
#line 2360 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 989:
#line 2361 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 990:
#line 2363 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 991:
#line 2365 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 992:
#line 2366 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 993:
#line 2368 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 994:
#line 2370 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 995:
#line 2372 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 996:
#line 2373 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 997:
#line 2375 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 998:
#line 2377 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 999:
#line 2378 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1000:
#line 2379 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1001:
#line 2380 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1002:
#line 2382 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1003:
#line 2384 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1004:
#line 2387 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1005:
#line 2390 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1006:
#line 2391 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1007:
#line 2392 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1008:
#line 2394 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1009:
#line 2397 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1010:
#line 2400 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1011:
#line 2401 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1012:
#line 2402 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1013:
#line 2403 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1014:
#line 2405 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1015:
#line 2407 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1016:
#line 2409 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1017:
#line 2410 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1018:
#line 2412 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1019:
#line 2413 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1020:
#line 2414 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1021:
#line 2415 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1022:
#line 2416 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1023:
#line 2418 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1024:
#line 2420 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1025:
#line 2422 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1026:
#line 2424 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1028:
#line 2426 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1029:
#line 2427 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1030:
#line 2429 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1031:
#line 2431 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1032:
#line 2432 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1033:
#line 2433 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1035:
#line 2435 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1037:
#line 2439 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1038:
#line 2440 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1039:
#line 2441 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1040:
#line 2442 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1041:
#line 2443 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1042:
#line 2444 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1043:
#line 2446 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1044:
#line 2447 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1045:
#line 2449 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1046:
#line 2452 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1047:
#line 2453 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1048:
#line 2454 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1049:
#line 2455 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1050:
#line 2458 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1051:
#line 2459 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1052:
#line 2462 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1053:
#line 2463 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1054:
#line 2466 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1055:
#line 2467 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1056:
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

  case 1057:
#line 2483 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1058:
#line 2484 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1059:
#line 2488 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1060:
#line 2489 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1061:
#line 2493 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1062:
#line 2494 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1063:
#line 2499 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1064:
#line 2503 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1065:
#line 2508 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1066:
#line 2510 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1067:
#line 2513 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1068:
#line 2515 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1069:
#line 2518 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1070:
#line 2520 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1071:
#line 2523 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1072:
#line 2524 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1073:
#line 2525 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1074:
#line 2526 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1075:
#line 2527 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1076:
#line 2528 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1077:
#line 2530 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1080:
#line 2537 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1081:
#line 2538 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1082:
#line 2539 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1083:
#line 2540 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1084:
#line 2541 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1085:
#line 2542 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1088:
#line 2547 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1089:
#line 2548 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1090:
#line 2549 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1091:
#line 2550 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1092:
#line 2551 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1093:
#line 2552 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1094:
#line 2553 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1095:
#line 2554 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1096:
#line 2555 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1097:
#line 2556 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1098:
#line 2557 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1101:
#line 2564 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1102:
#line 2565 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1104:
#line 2569 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1105:
#line 2571 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1106:
#line 2572 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1107:
#line 2575 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1108:
#line 2576 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1109:
#line 2577 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1110:
#line 2578 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1111:
#line 2579 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1112:
#line 2580 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1113:
#line 2583 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1114:
#line 2584 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1117:
#line 2592 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1118:
#line 2595 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1119:
#line 2596 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1123:
#line 2603 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1124:
#line 2606 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1125:
#line 2610 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1126:
#line 2611 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1127:
#line 2612 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1128:
#line 2613 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1129:
#line 2614 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1130:
#line 2615 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1131:
#line 2616 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1132:
#line 2617 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1133:
#line 2623 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1134:
#line 2624 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1135:
#line 2625 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1136:
#line 2626 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1137:
#line 2630 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1138:
#line 2631 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1139:
#line 2633 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1140:
#line 2638 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1142:
#line 2640 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1144:
#line 2642 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1145:
#line 2645 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1146:
#line 2647 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1147:
#line 2652 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1148:
#line 2655 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1149:
#line 2656 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1150:
#line 2657 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1151:
#line 2660 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1152:
#line 2662 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1153:
#line 2666 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1154:
#line 2667 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1155:
#line 2671 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1156:
#line 2672 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1157:
#line 2673 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1158:
#line 2674 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1159:
#line 2680 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1160:
#line 2681 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1161:
#line 2687 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1162:
#line 2688 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1163:
#line 2689 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1164:
#line 2690 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1167:
#line 2698 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1168:
#line 2700 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1169:
#line 2701 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1170:
#line 2702 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1171:
#line 2706 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1172:
#line 2707 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1173:
#line 2708 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1174:
#line 2709 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1175:
#line 2712 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1176:
#line 2713 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1177:
#line 2716 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1178:
#line 2717 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1179:
#line 2718 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1180:
#line 2721 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1181:
#line 2722 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1182:
#line 2723 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1183:
#line 2726 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1184:
#line 2727 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1186:
#line 2729 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1187:
#line 2730 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1188:
#line 2733 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1189:
#line 2734 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1190:
#line 2735 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1195:
#line 2742 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1196:
#line 2746 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1197:
#line 2748 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1198:
#line 2750 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1200:
#line 2755 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1201:
#line 2757 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1202:
#line 2759 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1212:
#line 2772 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1213:
#line 2773 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1214:
#line 2774 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1215:
#line 2777 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1216:
#line 2778 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1217:
#line 2779 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1218:
#line 2782 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1219:
#line 2783 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1220:
#line 2784 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1221:
#line 2787 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1222:
#line 2788 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1223:
#line 2789 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1225:
#line 2793 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1226:
#line 2794 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1227:
#line 2795 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1228:
#line 2798 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1229:
#line 2799 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1230:
#line 2800 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1231:
#line 2803 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1232:
#line 2804 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1233:
#line 2805 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1234:
#line 2808 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1235:
#line 2809 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1236:
#line 2810 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1237:
#line 2813 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1238:
#line 2814 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1239:
#line 2815 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1240:
#line 2819 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1241:
#line 2821 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1242:
#line 2823 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1243:
#line 2827 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1244:
#line 2831 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1245:
#line 2833 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1246:
#line 2837 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1247:
#line 2840 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1248:
#line 2841 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1249:
#line 2842 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1250:
#line 2843 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1251:
#line 2846 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1252:
#line 2848 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1253:
#line 2849 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1254:
#line 2851 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1256:
#line 2855 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1257:
#line 2856 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1258:
#line 2857 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1259:
#line 2860 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1260:
#line 2861 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1261:
#line 2865 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1263:
#line 2867 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1266:
#line 2872 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1267:
#line 2873 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1268:
#line 2874 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1269:
#line 2877 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1270:
#line 2878 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1271:
#line 2879 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1272:
#line 2882 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1273:
#line 2884 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1274:
#line 2889 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1275:
#line 2892 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1276:
#line 2899 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1277:
#line 2901 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1278:
#line 2903 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1279:
#line 2908 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1281:
#line 2912 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1282:
#line 2913 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1283:
#line 2914 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1284:
#line 2916 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1285:
#line 2918 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1286:
#line 2923 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11098 "frame/parser.C"
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

