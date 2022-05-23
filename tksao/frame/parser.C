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
     LENGTH_ = 426,
     LEVEL_ = 427,
     LIGHTEN_ = 428,
     LITTLE_ = 429,
     LITTLEENDIAN_ = 430,
     LINE_ = 431,
     LINEAR_ = 432,
     LIST_ = 433,
     LOAD_ = 434,
     LOCAL_ = 435,
     LOG_ = 436,
     MACOSX_ = 437,
     MAGNIFIER_ = 438,
     MATCH_ = 439,
     MAP_ = 440,
     MARK_ = 441,
     MARKER_ = 442,
     MASK_ = 443,
     MEDIAN_ = 444,
     MESSAGE_ = 445,
     METHOD_ = 446,
     MINMAX_ = 447,
     MINOR_ = 448,
     MIP_ = 449,
     MMAP_ = 450,
     MMAPINCR_ = 451,
     MOSAIC_ = 452,
     MODE_ = 453,
     MOTION_ = 454,
     MOVE_ = 455,
     NAME_ = 456,
     NAN_ = 457,
     NATIVE_ = 458,
     NAXES_ = 459,
     NEW_ = 460,
     NEXT_ = 461,
     NO_ = 462,
     NONE_ = 463,
     NONNAN_ = 464,
     NONZERO_ = 465,
     NOW_ = 466,
     NRRD_ = 467,
     NUMBER_ = 468,
     OBJECT_ = 469,
     OFF_ = 470,
     ON_ = 471,
     ONLY_ = 472,
     OPTION_ = 473,
     ORIENT_ = 474,
     PAN_ = 475,
     PANNER_ = 476,
     PARSER_ = 477,
     PASTE_ = 478,
     PERF_ = 479,
     PHOTO_ = 480,
     PHYSICAL_ = 481,
     PIXEL_ = 482,
     PLOT2D_ = 483,
     PLOT3D_ = 484,
     POINT_ = 485,
     POINTER_ = 486,
     POLYGON_ = 487,
     POSTSCRIPT_ = 488,
     POW_ = 489,
     PRECISION_ = 490,
     PRINT_ = 491,
     PRESERVE_ = 492,
     PROJECTION_ = 493,
     PROPERTY_ = 494,
     PUBLICATION_ = 495,
     PROS_ = 496,
     QUERY_ = 497,
     RADIAL_ = 498,
     RADIUS_ = 499,
     RANGE_ = 500,
     REGION_ = 501,
     REPLACE_ = 502,
     RESAMPLE_ = 503,
     RESCAN_ = 504,
     RESET_ = 505,
     RESOLUTION_ = 506,
     RGB_ = 507,
     ROOT_ = 508,
     ROTATE_ = 509,
     RULER_ = 510,
     SAMPLE_ = 511,
     SAOIMAGE_ = 512,
     SAOTNG_ = 513,
     SAVE_ = 514,
     SCALE_ = 515,
     SCAN_ = 516,
     SCIENTIFIC_ = 517,
     SCOPE_ = 518,
     SCREEN_ = 519,
     SEGMENT_ = 520,
     SELECT_ = 521,
     SET_ = 522,
     SEXAGESIMAL_ = 523,
     SHAPE_ = 524,
     SHARED_ = 525,
     SHIFT_ = 526,
     SHMID_ = 527,
     SHOW_ = 528,
     SIGMA_ = 529,
     SINH_ = 530,
     SIZE_ = 531,
     SLICE_ = 532,
     SMMAP_ = 533,
     SMOOTH_ = 534,
     SOCKET_ = 535,
     SOCKETGZ_ = 536,
     SOURCE_ = 537,
     SQRT_ = 538,
     SQUARED_ = 539,
     SSHARED_ = 540,
     STATS_ = 541,
     STATUS_ = 542,
     SUM_ = 543,
     SYSTEM_ = 544,
     TABLE_ = 545,
     TAG_ = 546,
     TEMPLATE_ = 547,
     TEXT_ = 548,
     THREADS_ = 549,
     THREED_ = 550,
     THRESHOLD_ = 551,
     THICK_ = 552,
     TRANSPARENCY_ = 553,
     TO_ = 554,
     TOGGLE_ = 555,
     TOPHAT_ = 556,
     TRUE_ = 557,
     TYPE_ = 558,
     UNDO_ = 559,
     UNHIGHLITE_ = 560,
     UNLOAD_ = 561,
     UNSELECT_ = 562,
     UPDATE_ = 563,
     USER_ = 564,
     VALUE_ = 565,
     VAR_ = 566,
     VIEW_ = 567,
     VECTOR_ = 568,
     VERSION_ = 569,
     VERTEX_ = 570,
     VERTICAL_ = 571,
     WARP_ = 572,
     WCS_ = 573,
     WCSA_ = 574,
     WCSB_ = 575,
     WCSC_ = 576,
     WCSD_ = 577,
     WCSE_ = 578,
     WCSF_ = 579,
     WCSG_ = 580,
     WCSH_ = 581,
     WCSI_ = 582,
     WCSJ_ = 583,
     WCSK_ = 584,
     WCSL_ = 585,
     WCSM_ = 586,
     WCSN_ = 587,
     WCSO_ = 588,
     WCSP_ = 589,
     WCSQ_ = 590,
     WCSR_ = 591,
     WCSS_ = 592,
     WCST_ = 593,
     WCSU_ = 594,
     WCSV_ = 595,
     WCSW_ = 596,
     WCSX_ = 597,
     WCSY_ = 598,
     WCSZ_ = 599,
     WCS0_ = 600,
     WFPC2_ = 601,
     WIDTH_ = 602,
     WIN32_ = 603,
     XML_ = 604,
     XY_ = 605,
     YES_ = 606,
     ZERO_ = 607,
     ZMAX_ = 608,
     ZSCALE_ = 609,
     ZOOM_ = 610
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
#define LENGTH_ 426
#define LEVEL_ 427
#define LIGHTEN_ 428
#define LITTLE_ 429
#define LITTLEENDIAN_ 430
#define LINE_ 431
#define LINEAR_ 432
#define LIST_ 433
#define LOAD_ 434
#define LOCAL_ 435
#define LOG_ 436
#define MACOSX_ 437
#define MAGNIFIER_ 438
#define MATCH_ 439
#define MAP_ 440
#define MARK_ 441
#define MARKER_ 442
#define MASK_ 443
#define MEDIAN_ 444
#define MESSAGE_ 445
#define METHOD_ 446
#define MINMAX_ 447
#define MINOR_ 448
#define MIP_ 449
#define MMAP_ 450
#define MMAPINCR_ 451
#define MOSAIC_ 452
#define MODE_ 453
#define MOTION_ 454
#define MOVE_ 455
#define NAME_ 456
#define NAN_ 457
#define NATIVE_ 458
#define NAXES_ 459
#define NEW_ 460
#define NEXT_ 461
#define NO_ 462
#define NONE_ 463
#define NONNAN_ 464
#define NONZERO_ 465
#define NOW_ 466
#define NRRD_ 467
#define NUMBER_ 468
#define OBJECT_ 469
#define OFF_ 470
#define ON_ 471
#define ONLY_ 472
#define OPTION_ 473
#define ORIENT_ 474
#define PAN_ 475
#define PANNER_ 476
#define PARSER_ 477
#define PASTE_ 478
#define PERF_ 479
#define PHOTO_ 480
#define PHYSICAL_ 481
#define PIXEL_ 482
#define PLOT2D_ 483
#define PLOT3D_ 484
#define POINT_ 485
#define POINTER_ 486
#define POLYGON_ 487
#define POSTSCRIPT_ 488
#define POW_ 489
#define PRECISION_ 490
#define PRINT_ 491
#define PRESERVE_ 492
#define PROJECTION_ 493
#define PROPERTY_ 494
#define PUBLICATION_ 495
#define PROS_ 496
#define QUERY_ 497
#define RADIAL_ 498
#define RADIUS_ 499
#define RANGE_ 500
#define REGION_ 501
#define REPLACE_ 502
#define RESAMPLE_ 503
#define RESCAN_ 504
#define RESET_ 505
#define RESOLUTION_ 506
#define RGB_ 507
#define ROOT_ 508
#define ROTATE_ 509
#define RULER_ 510
#define SAMPLE_ 511
#define SAOIMAGE_ 512
#define SAOTNG_ 513
#define SAVE_ 514
#define SCALE_ 515
#define SCAN_ 516
#define SCIENTIFIC_ 517
#define SCOPE_ 518
#define SCREEN_ 519
#define SEGMENT_ 520
#define SELECT_ 521
#define SET_ 522
#define SEXAGESIMAL_ 523
#define SHAPE_ 524
#define SHARED_ 525
#define SHIFT_ 526
#define SHMID_ 527
#define SHOW_ 528
#define SIGMA_ 529
#define SINH_ 530
#define SIZE_ 531
#define SLICE_ 532
#define SMMAP_ 533
#define SMOOTH_ 534
#define SOCKET_ 535
#define SOCKETGZ_ 536
#define SOURCE_ 537
#define SQRT_ 538
#define SQUARED_ 539
#define SSHARED_ 540
#define STATS_ 541
#define STATUS_ 542
#define SUM_ 543
#define SYSTEM_ 544
#define TABLE_ 545
#define TAG_ 546
#define TEMPLATE_ 547
#define TEXT_ 548
#define THREADS_ 549
#define THREED_ 550
#define THRESHOLD_ 551
#define THICK_ 552
#define TRANSPARENCY_ 553
#define TO_ 554
#define TOGGLE_ 555
#define TOPHAT_ 556
#define TRUE_ 557
#define TYPE_ 558
#define UNDO_ 559
#define UNHIGHLITE_ 560
#define UNLOAD_ 561
#define UNSELECT_ 562
#define UPDATE_ 563
#define USER_ 564
#define VALUE_ 565
#define VAR_ 566
#define VIEW_ 567
#define VECTOR_ 568
#define VERSION_ 569
#define VERTEX_ 570
#define VERTICAL_ 571
#define WARP_ 572
#define WCS_ 573
#define WCSA_ 574
#define WCSB_ 575
#define WCSC_ 576
#define WCSD_ 577
#define WCSE_ 578
#define WCSF_ 579
#define WCSG_ 580
#define WCSH_ 581
#define WCSI_ 582
#define WCSJ_ 583
#define WCSK_ 584
#define WCSL_ 585
#define WCSM_ 586
#define WCSN_ 587
#define WCSO_ 588
#define WCSP_ 589
#define WCSQ_ 590
#define WCSR_ 591
#define WCSS_ 592
#define WCST_ 593
#define WCSU_ 594
#define WCSV_ 595
#define WCSW_ 596
#define WCSX_ 597
#define WCSY_ 598
#define WCSZ_ 599
#define WCS0_ 600
#define WFPC2_ 601
#define WIDTH_ 602
#define WIN32_ 603
#define XML_ 604
#define XY_ 605
#define YES_ 606
#define ZERO_ 607
#define ZMAX_ 608
#define ZSCALE_ 609
#define ZOOM_ 610




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
#line 868 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 881 "frame/parser.C"

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
#define YYFINAL  361
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5418

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  360
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  221
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1282
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2823

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   610

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
       2,   359,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   357,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   358,   356,
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
     355
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    13,    17,    21,    24,    26,
      28,    31,    35,    38,    41,    44,    47,    50,    53,    56,
      60,    63,    66,    69,    72,    74,    77,    81,    84,    88,
      91,    94,    97,   100,   104,   107,   111,   114,   117,   120,
     123,   126,   129,   131,   135,   138,   141,   144,   146,   149,
     152,   155,   157,   160,   162,   165,   168,   171,   174,   176,
     178,   180,   182,   185,   188,   191,   194,   197,   200,   203,
     206,   209,   212,   214,   216,   218,   220,   222,   224,   226,
     228,   230,   231,   234,   237,   239,   241,   242,   244,   246,
     248,   250,   252,   254,   256,   259,   262,   265,   268,   270,
     272,   274,   276,   278,   280,   282,   284,   286,   288,   290,
     292,   294,   296,   298,   300,   302,   304,   306,   308,   310,
     312,   314,   316,   318,   320,   322,   324,   326,   328,   330,
     332,   334,   336,   338,   339,   341,   343,   345,   347,   349,
     350,   352,   354,   356,   358,   360,   362,   364,   366,   368,
     370,   372,   374,   376,   378,   380,   382,   384,   385,   387,
     389,   391,   393,   395,   397,   399,   400,   402,   404,   405,
     407,   409,   411,   412,   414,   416,   417,   419,   421,   422,
     424,   426,   427,   429,   431,   433,   435,   437,   439,   441,
     442,   444,   446,   448,   450,   452,   454,   456,   457,   459,
     461,   463,   464,   466,   468,   470,   472,   474,   477,   480,
     483,   486,   489,   492,   495,   498,   500,   503,   505,   508,
     510,   513,   516,   523,   526,   531,   534,   537,   540,   544,
     547,   550,   552,   555,   557,   560,   565,   571,   574,   578,
     584,   591,   593,   595,   597,   605,   617,   626,   639,   641,
     644,   647,   649,   651,   654,   657,   660,   663,   667,   671,
     674,   677,   679,   681,   683,   685,   687,   689,   691,   694,
     697,   700,   702,   706,   709,   712,   715,   722,   733,   735,
     738,   740,   747,   758,   760,   763,   766,   769,   772,   775,
     778,   792,   806,   819,   832,   834,   835,   837,   839,   844,
     851,   853,   855,   857,   859,   861,   863,   865,   867,   869,
     874,   878,   883,   884,   891,   900,   903,   907,   911,   915,
     916,   921,   926,   931,   936,   940,   944,   946,   950,   956,
     961,   966,   970,   973,   974,   976,   978,   980,   984,   987,
     990,   993,   996,   999,  1002,  1005,  1008,  1011,  1014,  1017,
    1020,  1023,  1026,  1028,  1031,  1034,  1037,  1042,  1046,  1049,
    1052,  1055,  1057,  1061,  1064,  1067,  1069,  1072,  1081,  1084,
    1086,  1089,  1091,  1094,  1096,  1101,  1105,  1108,  1110,  1118,
    1127,  1135,  1144,  1146,  1148,  1150,  1153,  1155,  1157,  1160,
    1162,  1163,  1166,  1169,  1171,  1172,  1175,  1178,  1180,  1182,
    1185,  1188,  1191,  1193,  1195,  1197,  1199,  1201,  1203,  1204,
    1206,  1209,  1211,  1216,  1222,  1223,  1226,  1228,  1234,  1237,
    1240,  1242,  1244,  1246,  1249,  1251,  1254,  1256,  1258,  1259,
    1261,  1263,  1264,  1266,  1272,  1279,  1283,  1290,  1294,  1296,
    1300,  1302,  1304,  1306,  1310,  1317,  1325,  1331,  1334,  1336,
    1342,  1348,  1350,  1354,  1355,  1357,  1360,  1362,  1367,  1369,
    1372,  1374,  1377,  1381,  1384,  1386,  1389,  1391,  1396,  1399,
    1401,  1403,  1407,  1409,  1412,  1416,  1419,  1420,  1422,  1424,
    1429,  1432,  1433,  1435,  1439,  1444,  1449,  1450,  1452,  1454,
    1456,  1458,  1460,  1462,  1464,  1466,  1468,  1470,  1472,  1474,
    1476,  1478,  1480,  1483,  1485,  1488,  1490,  1493,  1496,  1499,
    1502,  1504,  1506,  1508,  1509,  1511,  1512,  1514,  1515,  1517,
    1518,  1520,  1521,  1524,  1527,  1528,  1530,  1533,  1535,  1542,
    1548,  1550,  1552,  1554,  1557,  1560,  1563,  1565,  1567,  1569,
    1571,  1574,  1576,  1578,  1580,  1583,  1585,  1587,  1589,  1592,
    1595,  1598,  1599,  1601,  1602,  1604,  1606,  1608,  1610,  1612,
    1614,  1616,  1618,  1621,  1624,  1627,  1629,  1632,  1636,  1638,
    1641,  1644,  1649,  1656,  1658,  1669,  1671,  1674,  1678,  1682,
    1685,  1688,  1691,  1694,  1697,  1700,  1703,  1708,  1713,  1718,
    1722,  1726,  1732,  1737,  1742,  1747,  1751,  1755,  1759,  1763,
    1766,  1769,  1774,  1778,  1782,  1786,  1790,  1795,  1800,  1805,
    1810,  1816,  1821,  1828,  1836,  1841,  1846,  1852,  1855,  1859,
    1863,  1867,  1870,  1874,  1878,  1882,  1886,  1891,  1895,  1901,
    1908,  1912,  1916,  1921,  1925,  1929,  1933,  1937,  1941,  1947,
    1951,  1955,  1960,  1964,  1967,  1970,  1972,  1976,  1981,  1986,
    1991,  1996,  2001,  2008,  2013,  2018,  2024,  2029,  2034,  2039,
    2044,  2050,  2055,  2062,  2070,  2075,  2080,  2086,  2092,  2098,
    2104,  2110,  2116,  2124,  2130,  2136,  2143,  2148,  2153,  2158,
    2163,  2168,  2175,  2180,  2185,  2191,  2197,  2203,  2209,  2215,
    2222,  2228,  2236,  2245,  2251,  2257,  2264,  2268,  2272,  2276,
    2280,  2285,  2289,  2295,  2302,  2306,  2310,  2315,  2319,  2323,
    2327,  2331,  2335,  2341,  2345,  2349,  2354,  2359,  2364,  2368,
    2374,  2379,  2384,  2387,  2391,  2398,  2405,  2407,  2409,  2411,
    2414,  2417,  2420,  2424,  2428,  2431,  2444,  2447,  2450,  2452,
    2456,  2461,  2464,  2465,  2469,  2471,  2474,  2477,  2480,  2483,
    2486,  2491,  2496,  2501,  2505,  2510,  2516,  2525,  2532,  2537,
    2547,  2554,  2562,  2573,  2585,  2598,  2608,  2614,  2619,  2626,
    2630,  2636,  2642,  2649,  2655,  2660,  2670,  2681,  2693,  2703,
    2710,  2717,  2724,  2731,  2738,  2745,  2752,  2759,  2766,  2774,
    2782,  2785,  2790,  2795,  2800,  2805,  2811,  2816,  2821,  2827,
    2833,  2837,  2842,  2847,  2852,  2857,  2865,  2875,  2882,  2893,
    2905,  2918,  2928,  2932,  2935,  2939,  2945,  2953,  2958,  2962,
    2966,  2973,  2981,  2989,  2994,  2999,  3004,  3014,  3019,  3023,
    3028,  3036,  3044,  3047,  3051,  3055,  3059,  3064,  3067,  3070,
    3075,  3086,  3090,  3092,  3096,  3099,  3102,  3105,  3108,  3112,
    3118,  3123,  3129,  3132,  3135,  3138,  3141,  3145,  3148,  3151,
    3154,  3158,  3161,  3165,  3170,  3174,  3178,  3185,  3190,  3193,
    3197,  3200,  3203,  3208,  3212,  3216,  3219,  3223,  3225,  3228,
    3230,  3233,  3236,  3239,  3241,  3243,  3245,  3247,  3250,  3252,
    3255,  3258,  3260,  3263,  3266,  3268,  3271,  3273,  3275,  3277,
    3279,  3281,  3283,  3285,  3287,  3288,  3290,  3293,  3296,  3299,
    3303,  3309,  3317,  3325,  3332,  3339,  3346,  3353,  3359,  3366,
    3373,  3380,  3387,  3394,  3401,  3408,  3420,  3428,  3436,  3444,
    3454,  3464,  3475,  3488,  3501,  3504,  3507,  3511,  3516,  3521,
    3526,  3527,  3529,  3531,  3536,  3541,  3543,  3545,  3547,  3549,
    3551,  3553,  3555,  3557,  3560,  3562,  3564,  3566,  3570,  3574,
    3583,  3590,  3601,  3609,  3617,  3623,  3626,  3629,  3633,  3638,
    3644,  3648,  3654,  3660,  3664,  3669,  3675,  3681,  3687,  3691,
    3697,  3700,  3704,  3708,  3714,  3718,  3722,  3726,  3731,  3737,
    3743,  3747,  3753,  3759,  3763,  3768,  3774,  3780,  3783,  3786,
    3790,  3796,  3803,  3810,  3814,  3818,  3822,  3829,  3835,  3841,
    3844,  3848,  3852,  3858,  3865,  3869,  3872,  3875,  3879,  3882,
    3886,  3889,  3893,  3899,  3906,  3909,  3912,  3915,  3917,  3922,
    3927,  3929,  3932,  3935,  3938,  3941,  3944,  3947,  3950,  3954,
    3957,  3961,  3964,  3968,  3970,  3972,  3974,  3976,  3978,  3979,
    3982,  3983,  3986,  3987,  3989,  3990,  3991,  3993,  3995,  3997,
    3999,  4001,  4009,  4018,  4021,  4028,  4031,  4038,  4041,  4045,
    4048,  4050,  4052,  4056,  4060,  4062,  4067,  4070,  4072,  4076,
    4080,  4085,  4089,  4093,  4097,  4099,  4101,  4103,  4105,  4107,
    4109,  4111,  4113,  4115,  4117,  4119,  4121,  4123,  4125,  4128,
    4129,  4130,  4133,  4140,  4148,  4151,  4153,  4157,  4159,  4163,
    4165,  4168,  4171,  4173,  4177,  4178,  4179,  4182,  4185,  4187,
    4191,  4197,  4199,  4202,  4205,  4209,  4212,  4215,  4218,  4221,
    4223,  4225,  4227,  4229,  4234,  4237,  4241,  4245,  4248,  4252,
    4255,  4258,  4261,  4265,  4269,  4273,  4276,  4280,  4282,  4286,
    4290,  4292,  4295,  4298,  4301,  4304,  4314,  4321,  4323,  4325,
    4327,  4329,  4332,  4335,  4339,  4343,  4345,  4348,  4352,  4356,
    4358,  4361,  4363,  4365,  4367,  4369,  4371,  4374,  4377,  4382,
    4384,  4387,  4390,  4393,  4397,  4399,  4401,  4403,  4406,  4409,
    4412,  4415,  4418,  4422,  4426,  4430,  4434,  4438,  4442,  4446,
    4448,  4451,  4454,  4457,  4461,  4464,  4468,  4472,  4475,  4478,
    4481,  4484,  4487,  4490,  4493,  4496,  4499,  4502,  4505,  4508,
    4511,  4514,  4518,  4522,  4526,  4529,  4532,  4535,  4538,  4541,
    4544,  4547,  4550,  4553,  4556,  4559,  4562,  4566,  4570,  4574,
    4579,  4586,  4589,  4591,  4593,  4595,  4597,  4599,  4600,  4606,
    4608,  4615,  4619,  4621,  4624,  4627,  4630,  4634,  4638,  4641,
    4644,  4647,  4650,  4653,  4656,  4660,  4663,  4666,  4670,  4672,
    4676,  4681,  4683,  4686,  4692,  4699,  4706,  4709,  4711,  4714,
    4717,  4723,  4730
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     361,     0,    -1,    98,   363,    -1,    44,   395,    -1,    41,
      67,     5,    -1,    41,    67,   144,    -1,    41,    67,   364,
      -1,    47,   400,    -1,    60,    -1,    65,    -1,    66,   402,
      -1,    68,   291,     5,    -1,    69,   407,    -1,    70,   409,
      -1,    78,   410,    -1,    85,   419,    -1,    87,   421,    -1,
      88,   422,    -1,    97,   364,    -1,   120,     5,   362,    -1,
     128,   424,    -1,   141,   425,    -1,   145,   469,    -1,   148,
     472,    -1,   152,    -1,   153,   364,    -1,   153,    67,     5,
      -1,   159,   478,    -1,   165,    16,     4,    -1,   179,   481,
      -1,   182,   499,    -1,   183,   500,    -1,   184,   501,    -1,
     187,   517,   502,    -1,   188,   537,    -1,   202,    67,     5,
      -1,   219,   538,    -1,   220,   539,    -1,   221,   542,    -1,
     242,    89,    -1,   235,   544,    -1,   233,   543,    -1,   250,
      -1,   246,   517,   546,    -1,   252,   551,    -1,   254,   552,
      -1,   259,   554,    -1,   273,    -1,   279,   569,    -1,   294,
       4,    -1,   295,   390,    -1,   306,    -1,   308,   571,    -1,
     314,    -1,   317,   573,    -1,   318,   574,    -1,   348,   578,
      -1,   355,   579,    -1,     3,    -1,     4,    -1,   216,    -1,
     215,    -1,   197,   364,    -1,   222,   364,    -1,   224,   364,
      -1,   318,   364,    -1,    44,   364,    -1,    47,   364,    -1,
      77,   364,    -1,    85,   364,    -1,   146,   364,    -1,   252,
     364,    -1,     4,    -1,   351,    -1,   356,    -1,   216,    -1,
     302,    -1,   207,    -1,   357,    -1,   215,    -1,   122,    -1,
      -1,   253,    38,    -1,   137,    38,    -1,   253,    -1,   137,
      -1,    -1,   367,    -1,   362,    -1,     7,    -1,     8,    -1,
       9,    -1,    10,    -1,    11,    -1,   368,   368,    -1,   369,
     370,    -1,   370,   370,    -1,   362,   362,    -1,   160,    -1,
     226,    -1,   103,    -1,    19,    -1,   373,    -1,   318,    -1,
     319,    -1,   320,    -1,   321,    -1,   322,    -1,   323,    -1,
     324,    -1,   325,    -1,   326,    -1,   327,    -1,   328,    -1,
     329,    -1,   330,    -1,   331,    -1,   332,    -1,   333,    -1,
     334,    -1,   335,    -1,   336,    -1,   337,    -1,   338,    -1,
     339,    -1,   340,    -1,   341,    -1,   342,    -1,   343,    -1,
     344,    -1,   345,    -1,    57,    -1,   221,    -1,    -1,   352,
      -1,   210,    -1,   202,    -1,   209,    -1,   245,    -1,    -1,
     282,    -1,   264,    -1,    92,    -1,   173,    -1,   177,    -1,
     181,    -1,   234,    -1,   283,    -1,   284,    -1,    28,    -1,
     275,    -1,   154,    -1,    30,    -1,   261,    -1,   256,    -1,
      96,    -1,   166,    -1,    -1,   130,    -1,    35,    -1,   131,
      -1,   167,    -1,   157,    -1,   139,    -1,   108,    -1,    -1,
      99,    -1,   268,    -1,    -1,    99,    -1,    24,    -1,    25,
      -1,    -1,   272,    -1,   168,    -1,    -1,    17,    -1,   162,
      -1,    -1,   160,    -1,   188,    -1,    -1,    63,    -1,    49,
      -1,   104,    -1,    86,    -1,   358,    -1,    27,    -1,    52,
      -1,    -1,     4,    -1,    83,    -1,   155,    -1,   228,    -1,
     229,    -1,   243,    -1,   286,    -1,    -1,    32,    -1,   288,
      -1,   189,    -1,    -1,   203,    -1,    42,    -1,    43,    -1,
     174,    -1,   175,    -1,   312,   394,    -1,    48,   391,    -1,
      75,   392,    -1,   153,   393,    -1,   191,   549,    -1,    37,
     550,    -1,   260,   362,    -1,   296,   362,    -1,   364,    -1,
      67,     5,    -1,   364,    -1,    67,     5,    -1,   364,    -1,
      67,     5,    -1,   362,   362,    -1,   230,   362,   362,   362,
     362,   362,    -1,    12,   396,    -1,    72,     5,     5,     5,
      -1,   102,     4,    -1,   121,   397,    -1,   138,   398,    -1,
      54,   276,     4,    -1,   299,   399,    -1,   125,     5,    -1,
      60,    -1,   362,   362,    -1,   362,    -1,   362,   362,    -1,
     362,    12,   362,   362,    -1,   362,   362,    12,   362,   362,
      -1,   299,   362,    -1,   299,   362,   362,    -1,   299,   362,
      12,   362,   362,    -1,   299,   362,   362,    12,   362,   362,
      -1,    32,    -1,   288,    -1,   126,    -1,   362,   362,    12,
      60,     5,     5,     5,    -1,   362,   362,     4,   362,   362,
      12,    60,     5,     5,     5,     5,    -1,   362,   362,    12,
     362,   362,     5,     5,     5,    -1,   362,   362,     4,   362,
     362,    12,   362,   362,     5,     5,     5,     5,    -1,   362,
      -1,   362,   362,    -1,   299,   401,    -1,   126,    -1,   362,
      -1,   362,   362,    -1,   263,   403,    -1,   198,   404,    -1,
     192,   405,    -1,   309,   362,   362,    -1,   309,   202,   202,
      -1,   354,   406,    -1,   237,   364,    -1,   142,    -1,   180,
      -1,   362,    -1,   192,    -1,   354,    -1,   353,    -1,   309,
      -1,     4,   378,    -1,   198,   378,    -1,   256,     4,    -1,
     249,    -1,   362,     4,     4,    -1,    79,   362,    -1,   256,
       4,    -1,   176,     4,    -1,     4,   362,   362,     4,     6,
       4,    -1,   252,   362,   362,   362,   362,   362,   362,     4,
       6,     4,    -1,    40,    -1,   199,   408,    -1,   113,    -1,
       4,   362,   362,     4,     6,     4,    -1,   252,   362,   362,
     362,   362,   362,   362,     4,     6,     4,    -1,   377,    -1,
     181,   362,    -1,    84,   411,    -1,   101,   412,    -1,   179,
     413,    -1,   223,   417,    -1,   259,   418,    -1,     5,     4,
       4,   416,     4,     4,   377,   362,   414,   415,   362,   362,
       5,    -1,     5,     4,     4,   416,     4,     4,   377,   362,
     362,   415,   362,   362,     5,    -1,     5,     4,     4,   416,
       4,     4,   377,   362,   414,   362,   362,     5,    -1,     5,
       4,     4,   416,     4,     4,   377,   362,   362,   362,   362,
       5,    -1,   232,    -1,    -1,    31,    -1,     5,    -1,     5,
       5,     4,   364,    -1,     5,     4,   364,     5,   372,   379,
      -1,   192,    -1,   354,    -1,   353,    -1,   309,    -1,   142,
      -1,   180,    -1,   279,    -1,    47,    -1,     5,    -1,     5,
       5,     4,   364,    -1,     5,   372,   379,    -1,    31,     5,
     372,   379,    -1,    -1,   362,   362,   362,   362,   372,   379,
      -1,    60,   371,   372,   379,   362,   362,   372,   381,    -1,
     295,   420,    -1,    40,   362,   362,    -1,   199,   362,   362,
      -1,   113,   362,   362,    -1,    -1,   362,   362,   372,   379,
      -1,    40,   362,   362,     4,    -1,   199,   362,   362,     4,
      -1,   113,   362,   362,     4,    -1,   374,   362,   362,    -1,
     372,   379,   371,    -1,   364,    -1,   317,   362,   362,    -1,
      40,   199,   374,   362,   362,    -1,   199,   374,   362,   362,
      -1,    40,   199,   372,   371,    -1,   199,   372,   371,    -1,
      33,     4,    -1,    -1,    32,    -1,   288,    -1,   189,    -1,
     148,   119,     5,    -1,    41,    67,    -1,    44,   428,    -1,
      47,   430,    -1,    66,   431,    -1,    69,   435,    -1,    68,
     434,    -1,    70,   437,    -1,    78,   439,    -1,    80,   442,
      -1,    85,   443,    -1,    87,   444,    -1,    89,   446,    -1,
      88,   445,    -1,    95,   447,    -1,    97,    -1,   127,   451,
      -1,   145,   457,    -1,   153,    67,    -1,   155,     5,     5,
       4,    -1,   156,    90,   426,    -1,   159,   449,    -1,   163,
     448,    -1,   165,    16,    -1,   192,    -1,   187,   517,   511,
      -1,   188,   458,    -1,   202,    67,    -1,   219,    -1,   220,
     459,    -1,   227,   290,   374,   362,   362,     4,     4,     5,
      -1,   252,   460,    -1,   254,    -1,   279,   461,    -1,   294,
      -1,   295,   462,    -1,   303,    -1,   310,   374,   362,   362,
      -1,   316,    90,   427,    -1,   318,   467,    -1,   355,    -1,
       5,     5,   362,   362,   374,     4,   423,    -1,     5,     5,
     362,   362,   372,   379,     4,   423,    -1,     5,     5,   362,
     362,   374,     4,   423,    -1,     5,     5,   362,   362,   372,
     379,     4,   423,    -1,   102,    -1,   121,    -1,   138,    -1,
      54,   276,    -1,    89,    -1,   125,    -1,    72,   429,    -1,
     178,    -1,    -1,   192,     5,    -1,   105,     5,    -1,   121,
      -1,    -1,   414,   415,    -1,   362,   415,    -1,   263,    -1,
     198,    -1,   192,   432,    -1,   309,   172,    -1,   354,   433,
      -1,   237,    -1,   198,    -1,   256,    -1,    79,    -1,   256,
      -1,   176,    -1,    -1,   291,    -1,   172,   436,    -1,     4,
      -1,     4,   374,   362,   362,    -1,     4,   362,   362,   377,
     362,    -1,    -1,   172,   438,    -1,   181,    -1,     4,   362,
     362,   377,   362,    -1,   372,   379,    -1,    66,   440,    -1,
      67,    -1,    93,    -1,   172,    -1,   213,   172,    -1,   191,
      -1,    70,   441,    -1,   279,    -1,   347,    -1,    -1,   198,
      -1,   263,    -1,    -1,   181,    -1,   362,   362,   372,   379,
     380,    -1,   374,   362,   362,   372,   379,   380,    -1,   372,
     379,   380,    -1,    60,   372,   379,   380,   372,   381,    -1,
     295,   372,   379,    -1,   374,    -1,   372,   379,   380,    -1,
     287,    -1,    33,    -1,   374,    -1,   372,   379,   380,    -1,
     372,   379,   371,   362,   362,     5,    -1,     4,   372,   379,
     371,   362,   362,     5,    -1,   374,   362,   362,     4,     4,
      -1,     5,   365,    -1,    66,    -1,   374,   362,   362,     5,
     365,    -1,     6,     4,     4,     4,     4,    -1,    89,    -1,
     123,   201,   450,    -1,    -1,     4,    -1,   362,   362,    -1,
     204,    -1,    60,   372,   379,   380,    -1,    82,    -1,   102,
     454,    -1,    45,    -1,   119,   452,    -1,   123,   201,   455,
      -1,   150,   453,    -1,   151,    -1,   214,   201,    -1,   276,
      -1,   276,   372,   379,   381,    -1,   277,   456,    -1,   347,
      -1,     4,    -1,   374,   362,   362,    -1,     4,    -1,   169,
       5,    -1,     4,   169,     5,    -1,   318,     4,    -1,    -1,
       4,    -1,   365,    -1,   365,   374,   362,   362,    -1,   365,
       4,    -1,    -1,     4,    -1,   135,   160,   372,    -1,   135,
     160,     4,   372,    -1,   299,   160,   362,   372,    -1,    -1,
     218,    -1,   311,    -1,    67,    -1,   186,    -1,   245,    -1,
     289,    -1,   298,    -1,    82,    -1,    46,    -1,   237,    -1,
      62,    -1,   289,    -1,   312,    -1,   138,    -1,   244,    -1,
     244,   193,    -1,   274,    -1,   274,   193,    -1,    21,    -1,
     312,   466,    -1,    48,   463,    -1,    75,   464,    -1,   153,
     465,    -1,   191,    -1,    37,    -1,   260,    -1,    -1,    67,
      -1,    -1,    67,    -1,    -1,    67,    -1,    -1,   230,    -1,
      -1,    16,   468,    -1,   201,   373,    -1,    -1,   231,    -1,
      84,   470,    -1,   101,    -1,   372,   379,   380,   471,     5,
       5,    -1,   372,   379,   380,   471,     5,    -1,    20,    -1,
     240,    -1,    19,    -1,    41,    67,    -1,    44,   473,    -1,
      78,   474,    -1,    85,    -1,    96,    -1,    97,    -1,   103,
      -1,   127,   475,    -1,   145,    -1,   159,    -1,   166,    -1,
     187,   476,    -1,   226,    -1,   160,    -1,   279,    -1,   289,
     372,    -1,   318,   477,    -1,    73,     5,    -1,    -1,    31,
      -1,    -1,    44,    -1,    88,    -1,   197,    -1,   153,    -1,
     266,    -1,   223,    -1,   304,    -1,   372,    -1,    59,   372,
      -1,   117,   372,    -1,   177,   372,    -1,    18,    -1,   295,
     372,    -1,   205,     4,     4,    -1,   118,    -1,   190,     5,
      -1,    89,   480,    -1,   267,   123,   201,   479,    -1,   267,
       6,     4,     4,     4,     4,    -1,   308,    -1,   318,   362,
     362,   362,   362,   362,   362,   362,   362,     4,    -1,     5,
      -1,     5,     4,    -1,     4,     4,    57,    -1,     4,     4,
     372,    -1,   198,   364,    -1,    26,   482,    -1,   114,   484,
      -1,   127,   485,    -1,   162,   498,    -1,   212,   496,    -1,
     225,   497,    -1,     5,    14,     5,   384,    -1,     5,    15,
       5,   384,    -1,     5,    62,     5,   384,    -1,     5,   195,
     384,    -1,     5,   196,   384,    -1,     5,   270,   382,     4,
     384,    -1,     5,   280,     4,   384,    -1,     5,   281,     4,
     384,    -1,     5,   311,     5,   384,    -1,   252,    88,   483,
      -1,     5,    14,     5,    -1,     5,    15,     5,    -1,     5,
      62,     5,    -1,     5,   195,    -1,     5,   196,    -1,     5,
     270,   382,     4,    -1,     5,   280,     4,    -1,     5,   281,
       4,    -1,     5,   311,     5,    -1,     5,     5,   278,    -1,
       5,    14,     5,   384,    -1,     5,    15,     5,   384,    -1,
       5,    62,     5,   384,    -1,     5,   195,   383,   384,    -1,
       5,     5,   278,   383,   384,    -1,     5,   196,   383,   384,
      -1,     5,   270,   382,     4,   383,   384,    -1,     5,   285,
     382,     4,     4,   383,   384,    -1,     5,   280,     4,   384,
      -1,     5,   281,     4,   384,    -1,     5,   311,     5,   383,
     384,    -1,   277,   486,    -1,   119,    88,   487,    -1,   252,
     160,   495,    -1,   252,    88,   494,    -1,   197,   488,    -1,
       5,    14,     5,    -1,     5,    15,     5,    -1,     5,    62,
       5,    -1,     5,   195,   383,    -1,     5,     5,   278,   383,
      -1,     5,   196,   383,    -1,     5,   270,   382,     4,   383,
      -1,     5,   285,   382,     4,     4,   383,    -1,     5,   280,
       4,    -1,     5,   281,     4,    -1,     5,   311,     5,   383,
      -1,     5,    14,     5,    -1,     5,    15,     5,    -1,     5,
      62,     5,    -1,     5,   195,   383,    -1,     5,   196,   383,
      -1,     5,   270,   382,     4,   383,    -1,     5,   280,     4,
      -1,     5,   281,     4,    -1,     5,   311,     5,   383,    -1,
     160,   165,   489,    -1,   165,   490,    -1,   160,   491,    -1,
     493,    -1,   160,   346,   492,    -1,     5,    14,     5,   384,
      -1,     5,    15,     5,   384,    -1,     5,    62,     5,   384,
      -1,     5,   195,   383,   384,    -1,     5,   196,   383,   384,
      -1,     5,   270,   382,     4,   383,   384,    -1,     5,   280,
       4,   384,    -1,     5,   281,     4,   384,    -1,     5,   311,
       5,   383,   384,    -1,     5,    14,     5,   384,    -1,     5,
      15,     5,   384,    -1,     5,    62,     5,   384,    -1,     5,
     195,   383,   384,    -1,     5,     5,   278,   383,   384,    -1,
       5,   196,   383,   384,    -1,     5,   270,   382,     4,   383,
     384,    -1,     5,   285,   382,     4,     4,   383,   384,    -1,
       5,   280,     4,   384,    -1,     5,   281,     4,   384,    -1,
       5,   311,     5,   383,   384,    -1,   373,     5,    14,     5,
     384,    -1,   373,     5,    15,     5,   384,    -1,   373,     5,
      62,     5,   384,    -1,   373,     5,   195,   383,   384,    -1,
     373,     5,   196,   383,   384,    -1,   373,     5,   270,   382,
       4,   383,   384,    -1,   373,     5,   280,     4,   384,    -1,
     373,     5,   281,     4,   384,    -1,   373,     5,   311,     5,
     383,   384,    -1,     5,    14,     5,   384,    -1,     5,    15,
       5,   384,    -1,     5,    62,     5,   384,    -1,     5,   195,
     383,   384,    -1,     5,   196,   383,   384,    -1,     5,   270,
     382,     4,   383,   384,    -1,     5,   280,     4,   384,    -1,
       5,   281,     4,   384,    -1,     5,   311,     5,   383,   384,
      -1,   373,     5,    14,     5,   384,    -1,   373,     5,    15,
       5,   384,    -1,   373,     5,    62,     5,   384,    -1,   373,
       5,   195,   383,   384,    -1,   373,     5,     5,   278,   383,
     384,    -1,   373,     5,   196,   383,   384,    -1,   373,     5,
     270,   382,     4,   383,   384,    -1,   373,     5,   285,   382,
       4,     4,   383,   384,    -1,   373,     5,   280,     4,   384,
      -1,   373,     5,   281,     4,   384,    -1,   373,     5,   311,
       5,   383,   384,    -1,     5,    14,     5,    -1,     5,    15,
       5,    -1,     5,    62,     5,    -1,     5,   195,   383,    -1,
       5,     5,   278,   383,    -1,     5,   196,   383,    -1,     5,
     270,   382,     4,   383,    -1,     5,   285,   382,     4,     4,
     383,    -1,     5,   280,     4,    -1,     5,   281,     4,    -1,
       5,   311,     5,   383,    -1,     5,    14,     5,    -1,     5,
      15,     5,    -1,     5,    62,     5,    -1,     5,   195,   383,
      -1,     5,   196,   383,    -1,     5,   270,   382,     4,   383,
      -1,     5,   280,     4,    -1,     5,   281,     4,    -1,     5,
     311,     5,   383,    -1,     5,    14,     5,   384,    -1,     5,
      62,     5,   384,    -1,     5,   195,   384,    -1,     5,   270,
     382,     4,   384,    -1,     5,   280,     4,   384,    -1,     5,
     311,     5,   384,    -1,     5,     5,    -1,   277,     5,     5,
      -1,    95,     4,     4,     4,     4,     4,    -1,   192,     4,
       4,     4,     4,     4,    -1,   113,    -1,   236,    -1,   364,
      -1,   143,   364,    -1,    89,   364,    -1,    67,     5,    -1,
       5,     4,     4,    -1,   308,   362,   362,    -1,   355,   362,
      -1,     5,     5,   373,   379,     5,     5,   373,   379,   362,
     373,   381,     5,    -1,    61,   505,    -1,    67,     5,    -1,
      81,    -1,    74,   510,     5,    -1,    74,   510,   311,     5,
      -1,    76,   101,    -1,    -1,    84,   503,   506,    -1,    90,
      -1,   101,   508,    -1,   107,   509,    -1,   116,     4,    -1,
     132,     5,    -1,   153,    17,    -1,   153,   217,   362,   362,
      -1,   153,   300,   362,   362,    -1,     4,    20,   387,   364,
      -1,     4,    21,   367,    -1,     4,    21,   367,   374,    -1,
       4,    21,   367,   372,   379,    -1,     4,    22,   244,   362,
     362,     4,   372,   381,    -1,     4,    22,   244,     5,   372,
     381,    -1,     4,    49,   124,   364,    -1,     4,    50,   244,
     362,   362,   362,     4,   372,   381,    -1,     4,    50,   244,
       5,   372,   381,    -1,     4,    49,   244,   362,   362,   372,
     381,    -1,     4,    53,   107,   367,   367,     4,   362,   362,
     362,     4,    -1,     4,    53,   107,   367,   367,     4,   362,
     362,   362,     4,   374,    -1,     4,    53,   107,   367,   367,
       4,   362,   362,   362,     4,   372,   379,    -1,     4,    53,
     107,     5,     5,   372,   379,   372,   381,    -1,     4,    56,
     504,     5,     5,    -1,     4,    63,   124,   364,    -1,     4,
      63,   244,   362,   372,   381,    -1,     4,    67,     5,    -1,
       4,    75,    27,   364,   364,    -1,     4,    75,   170,     5,
       5,    -1,     4,    75,   244,   362,   372,   381,    -1,     4,
      75,   289,   372,   379,    -1,     4,    76,   142,   364,    -1,
       4,    83,   107,   367,   367,     4,   362,   362,     4,    -1,
       4,    83,   107,   367,   367,     4,   362,   362,     4,   374,
      -1,     4,    83,   107,   367,   367,     4,   362,   362,     4,
     372,   379,    -1,     4,    83,   107,     5,     5,   372,   379,
     372,   381,    -1,     4,    84,    22,   244,   362,   362,    -1,
       4,    84,    50,   244,   362,   362,    -1,     4,    84,    53,
      21,   362,   362,    -1,     4,    84,    53,   244,   362,   362,
      -1,     4,    84,   112,   244,   362,   362,    -1,     4,    84,
     115,    21,   362,   362,    -1,     4,    84,   115,   244,   362,
     362,    -1,     4,    84,    83,    21,   362,   362,    -1,     4,
      84,    83,   244,   362,   362,    -1,     4,    84,   232,   315,
       4,   362,   362,    -1,     4,    84,   265,   315,     4,   362,
     362,    -1,     4,   101,    -1,     4,   101,    22,     4,    -1,
       4,   101,    50,     4,    -1,     4,   101,    53,     4,    -1,
       4,   101,   112,     4,    -1,     4,   101,    56,   504,     5,
      -1,     4,   101,   115,     4,    -1,     4,   101,    83,     4,
      -1,     4,   101,   232,   315,     4,    -1,     4,   101,   265,
     315,     4,    -1,     4,   101,   291,    -1,     4,   101,   291,
       5,    -1,     4,   101,   291,     4,    -1,     4,   107,    40,
       4,    -1,     4,   111,   124,   364,    -1,     4,   111,   244,
     362,   362,   372,   381,    -1,     4,   112,   244,   362,   362,
     362,     4,   372,   381,    -1,     4,   112,   244,     5,   372,
     381,    -1,     4,   115,   107,   367,   367,     4,   362,   362,
     362,     4,    -1,     4,   115,   107,   367,   367,     4,   362,
     362,   362,     4,   374,    -1,     4,   115,   107,   367,   367,
       4,   362,   362,   362,     4,   372,   379,    -1,     4,   115,
     107,     5,     5,   372,   379,   372,   381,    -1,     4,   132,
       5,    -1,     4,   153,    -1,     4,   153,   217,    -1,     4,
     176,    27,   364,   364,    -1,     4,   176,   230,   372,   379,
     371,   371,    -1,     4,   200,   362,   362,    -1,     4,   200,
     136,    -1,     4,   200,    36,    -1,     4,   200,   299,   372,
     379,   371,    -1,     4,   232,   250,   362,   362,   372,   381,
      -1,     4,   265,   250,   362,   362,   372,   381,    -1,     4,
     230,   269,   385,    -1,     4,   230,   276,     4,    -1,     4,
     232,   124,   364,    -1,     4,   238,   372,   379,   371,   371,
     362,   372,   381,    -1,     4,   239,   523,   364,    -1,     4,
     254,    40,    -1,     4,   255,   133,     5,    -1,     4,   255,
     230,   372,   379,   371,   371,    -1,     4,   255,   289,   372,
     379,   372,   381,    -1,     4,   266,    -1,     4,   266,   217,
      -1,     4,   291,     5,    -1,     4,   293,     5,    -1,     4,
     293,   254,   364,    -1,     4,   305,    -1,     4,   307,    -1,
       4,   313,    27,   364,    -1,     4,   313,   230,   372,   379,
     371,   372,   381,   362,   367,    -1,     4,   347,     4,    -1,
     168,    -1,   168,   362,   362,    -1,   178,   518,    -1,   179,
     519,    -1,   200,   520,    -1,   237,   364,    -1,   239,   523,
     364,    -1,   239,   523,   364,   362,   362,    -1,   254,    40,
     362,   362,    -1,   254,   199,   362,   362,     4,    -1,   254,
     113,    -1,   259,   527,    -1,   266,   528,    -1,   273,   529,
      -1,     5,    67,     5,    -1,     5,    81,    -1,     5,   101,
      -1,     5,    90,    -1,     5,   132,     5,    -1,     5,   153,
      -1,     5,   153,   217,    -1,     5,   200,   362,   362,    -1,
       5,   200,   136,    -1,     5,   200,    36,    -1,     5,   200,
     299,   372,   379,   371,    -1,     5,   239,   523,   364,    -1,
       5,   266,    -1,     5,   266,   217,    -1,     5,   305,    -1,
       5,   307,    -1,   291,   107,     5,     5,    -1,   291,   101,
       5,    -1,   291,   101,    17,    -1,   291,     5,    -1,   291,
     308,     5,    -1,   223,    -1,   223,   372,    -1,   304,    -1,
     305,    17,    -1,   307,    17,    -1,   347,     4,    -1,   266,
      -1,   307,    -1,   153,    -1,   305,    -1,    40,   200,    -1,
     200,    -1,   113,   200,    -1,    40,   107,    -1,   107,    -1,
     113,   107,    -1,    40,   254,    -1,   254,    -1,   113,   254,
      -1,   101,    -1,   293,    -1,    67,    -1,   347,    -1,   239,
      -1,   132,    -1,   168,    -1,   308,    -1,    -1,     4,    -1,
      30,   364,    -1,   244,   362,    -1,   164,     4,    -1,   218,
       4,   362,    -1,    63,   362,   362,   362,   524,    -1,   111,
     362,   362,   362,   362,   366,   524,    -1,    49,   362,   362,
     362,   362,   366,   524,    -1,   232,   362,   362,   362,   362,
     524,    -1,   265,   362,   362,   362,   362,   524,    -1,   176,
     362,   362,   362,   362,   524,    -1,   313,   362,   362,   362,
     362,   524,    -1,   293,   362,   362,   366,   524,    -1,    63,
     230,   362,   362,   386,   524,    -1,    49,   230,   362,   362,
     386,   524,    -1,   104,   230,   362,   362,   386,   524,    -1,
      86,   230,   362,   362,   386,   524,    -1,   358,   230,   362,
     362,   386,   524,    -1,    27,   230,   362,   362,   386,   524,
      -1,    52,   230,   362,   362,   386,   524,    -1,   255,   362,
     362,   362,   362,   372,   379,   372,   381,     5,   524,    -1,
      75,   362,   362,   362,   372,   379,   524,    -1,   238,   362,
     362,   362,   362,   362,   524,    -1,    22,   362,   362,   362,
     362,     4,   524,    -1,   112,   362,   362,   362,   362,   362,
       4,   366,   524,    -1,    50,   362,   362,   362,   362,   362,
       4,   366,   524,    -1,    83,   362,   362,   367,   367,     4,
     362,   362,     4,   524,    -1,   115,   362,   362,   367,   367,
       4,   362,   362,   362,     4,   366,   524,    -1,    53,   362,
     362,   367,   367,     4,   362,   362,   362,     4,   366,   524,
      -1,    76,   524,    -1,   292,   507,    -1,     5,   362,   362,
      -1,   311,     5,   362,   362,    -1,   362,   362,   311,     5,
      -1,     5,   372,   379,   371,    -1,    -1,   266,    -1,    17,
      -1,    40,   362,   362,     4,    -1,   199,   362,   362,     4,
      -1,   113,    -1,   106,    -1,   349,    -1,    64,    -1,   258,
      -1,   257,    -1,   241,    -1,   350,    -1,    61,   512,    -1,
      67,    -1,   132,    -1,   116,    -1,   147,   362,   362,    -1,
     158,   362,   362,    -1,     4,    20,    83,     5,     5,     5,
     372,     4,    -1,     4,    20,   155,     5,     5,     4,    -1,
       4,    20,   228,     5,     5,     5,     5,   372,   379,   388,
      -1,     4,    20,   229,     5,     5,   372,   388,    -1,     4,
      20,   243,     5,     5,     5,   372,    -1,     4,    20,   286,
     372,   379,    -1,   158,    17,    -1,     4,    21,    -1,     4,
      21,   374,    -1,     4,    21,   372,   379,    -1,     4,    22,
     244,   372,   381,    -1,     4,    49,   124,    -1,     4,    50,
     244,   372,   381,    -1,     4,    49,   244,   372,   381,    -1,
       4,    53,    21,    -1,     4,    53,    21,   374,    -1,     4,
      53,    21,   372,   379,    -1,     4,    53,   244,   372,   381,
      -1,     4,    60,   372,   379,   380,    -1,     4,    63,   124,
      -1,     4,    63,   244,   372,   381,    -1,     4,    67,    -1,
       4,    75,    27,    -1,     4,    75,   170,    -1,     4,    75,
     244,   372,   381,    -1,     4,    75,   289,    -1,     4,    76,
     142,    -1,     4,    83,    21,    -1,     4,    83,    21,   374,
      -1,     4,    83,    21,   372,   379,    -1,     4,    83,   244,
     372,   381,    -1,     4,   111,   124,    -1,     4,   111,   244,
     372,   381,    -1,     4,   112,   244,   372,   381,    -1,     4,
     115,    21,    -1,     4,   115,    21,   374,    -1,     4,   115,
      21,   372,   379,    -1,     4,   115,   244,   372,   381,    -1,
       4,   132,    -1,     4,   153,    -1,     4,   176,    27,    -1,
       4,   176,   171,   372,   381,    -1,     4,   176,   230,   372,
     379,   380,    -1,     4,   185,   171,   362,   372,   381,    -1,
       4,   232,   124,    -1,     4,   230,   269,    -1,     4,   230,
     276,    -1,     4,   238,   230,   372,   379,   380,    -1,     4,
     238,   171,   372,   381,    -1,     4,   238,   297,   372,   381,
      -1,     4,   239,    -1,     4,   239,   523,    -1,     4,   255,
     133,    -1,     4,   255,   171,   372,   381,    -1,     4,   255,
     230,   372,   379,   380,    -1,     4,   255,   289,    -1,     4,
     266,    -1,     4,   291,    -1,     4,   291,     4,    -1,     4,
     293,    -1,     4,   293,   254,    -1,     4,   303,    -1,     4,
     313,    27,    -1,     4,   313,   171,   372,   381,    -1,     4,
     313,   230,   372,   379,   380,    -1,     4,   347,    -1,   153,
     513,    -1,   153,   213,    -1,   213,    -1,   232,   265,   362,
     362,    -1,   265,   265,   362,   362,    -1,   237,    -1,   239,
     523,    -1,   266,   514,    -1,   266,   213,    -1,   273,   515,
      -1,     5,    67,    -1,     5,   132,    -1,     5,   158,    -1,
       5,   239,   523,    -1,     5,   291,    -1,     5,   291,   213,
      -1,   291,    17,    -1,   291,   100,   201,    -1,   347,    -1,
      30,    -1,   244,    -1,   164,    -1,   218,    -1,    -1,   362,
     362,    -1,    -1,   362,   362,    -1,    -1,   293,    -1,    -1,
      -1,   231,    -1,   246,    -1,   309,    -1,    58,    -1,   134,
      -1,   510,   372,   379,   380,   364,   525,   532,    -1,   266,
     510,   372,   379,   380,   364,   525,   532,    -1,   510,     5,
      -1,   510,     5,     4,     5,   372,   379,    -1,   510,     4,
      -1,   510,     4,     4,     5,   372,   379,    -1,   127,     5,
      -1,   127,     5,     5,    -1,   362,   362,    -1,   136,    -1,
      36,    -1,    40,   362,   362,    -1,   199,   362,   362,    -1,
     113,    -1,   299,   372,   379,   371,    -1,   521,   522,    -1,
     522,    -1,   523,   359,   364,    -1,    67,   359,     5,    -1,
      94,   359,     4,     4,    -1,   347,   359,     4,    -1,   132,
     359,     5,    -1,   293,   359,     5,    -1,   535,    -1,   536,
      -1,   208,    -1,   266,    -1,   153,    -1,    93,    -1,   129,
      -1,   107,    -1,   200,    -1,   254,    -1,   101,    -1,   161,
      -1,   282,    -1,   516,    -1,   516,   521,    -1,    -1,    -1,
     526,   530,    -1,     5,   510,   372,   379,   380,   364,    -1,
     266,     5,   510,   372,   379,   380,   364,    -1,   292,     5,
      -1,    17,    -1,   217,   362,   362,    -1,   300,    -1,   300,
     362,   362,    -1,   364,    -1,   293,   364,    -1,   530,   531,
      -1,   531,    -1,   523,   359,   364,    -1,    -1,    -1,   533,
     534,    -1,   534,   535,    -1,   535,    -1,   291,   359,     5,
      -1,    56,   359,   504,     5,     5,    -1,    65,    -1,    67,
       5,    -1,   186,   375,    -1,   245,   362,   362,    -1,   289,
     372,    -1,   298,   362,    -1,    46,   376,    -1,   186,     4,
      -1,   358,    -1,   356,    -1,   350,    -1,   208,    -1,   362,
     362,   362,   362,    -1,   362,   362,    -1,   374,   362,   362,
      -1,   372,   379,   371,    -1,   299,   540,    -1,    39,   362,
     362,    -1,   199,   541,    -1,   237,   364,    -1,   362,   362,
      -1,   374,   362,   362,    -1,   372,   379,   371,    -1,    40,
     362,   362,    -1,   362,   362,    -1,   113,   362,   362,    -1,
     364,    -1,   318,   373,   379,    -1,     5,     4,     4,    -1,
     308,    -1,    71,   545,    -1,   172,     4,    -1,   251,     4,
      -1,   260,   362,    -1,     4,     4,     4,     4,     4,     4,
       4,     4,     4,    -1,     4,     4,     4,     4,     4,     4,
      -1,    55,    -1,   144,    -1,   252,    -1,    91,    -1,   153,
     547,    -1,   266,   548,    -1,    40,   362,   362,    -1,   199,
     362,   362,    -1,   113,    -1,   271,   113,    -1,    40,   362,
     362,    -1,   199,   362,   362,    -1,   113,    -1,   271,   113,
      -1,   194,    -1,    13,    -1,   208,    -1,    34,    -1,   109,
      -1,    62,     5,    -1,   289,   372,    -1,   312,     4,     4,
       4,    -1,   362,    -1,   362,    99,    -1,   199,   553,    -1,
     299,   362,    -1,   299,   362,    99,    -1,    40,    -1,   362,
      -1,   113,    -1,    26,   555,    -1,   127,   557,    -1,   212,
     567,    -1,   114,   568,    -1,   225,     5,    -1,   123,     5,
     389,    -1,    62,     5,   389,    -1,   280,     4,   389,    -1,
     252,    88,   556,    -1,   123,     5,   389,    -1,    62,     5,
     389,    -1,   280,     4,   389,    -1,   558,    -1,   160,   558,
      -1,   290,   559,    -1,   277,   560,    -1,   119,    88,   561,
      -1,   197,   562,    -1,   252,   160,   564,    -1,   252,    88,
     565,    -1,   248,   566,    -1,   123,     5,    -1,    62,     5,
      -1,   280,     4,    -1,   123,     5,    -1,    62,     5,    -1,
     280,     4,    -1,   123,     5,    -1,    62,     5,    -1,   280,
       4,    -1,   123,     5,    -1,    62,     5,    -1,   280,     4,
      -1,   160,   563,    -1,   123,     5,     4,    -1,    62,     5,
       4,    -1,   280,     4,     4,    -1,   123,     5,    -1,    62,
       5,    -1,   280,     4,    -1,   123,     5,    -1,    62,     5,
      -1,   280,     4,    -1,   123,     5,    -1,    62,     5,    -1,
     280,     4,    -1,   123,     5,    -1,    62,     5,    -1,   280,
       4,    -1,   123,     5,   389,    -1,    62,     5,   389,    -1,
     280,     4,   389,    -1,   123,     5,     5,   389,    -1,   570,
       4,     4,   362,   362,   367,    -1,   570,     4,    -1,   101,
      -1,    51,    -1,   301,    -1,   140,    -1,   110,    -1,    -1,
       4,   362,   362,   362,   362,    -1,   211,    -1,   211,     4,
     362,   362,   362,   362,    -1,   127,   277,   572,    -1,     4,
      -1,     4,     4,    -1,   362,   372,    -1,   362,   362,    -1,
     299,   362,   362,    -1,   373,   379,   380,    -1,    16,   577,
      -1,   250,     4,    -1,   247,   576,    -1,    23,   575,    -1,
       4,     4,    -1,     4,     5,    -1,   293,     4,     5,    -1,
       4,     4,    -1,     4,     5,    -1,   293,     4,     5,    -1,
       4,    -1,     4,   373,   379,    -1,     4,     6,   373,   379,
      -1,   236,    -1,   362,   362,    -1,   362,   362,    12,   362,
     362,    -1,   362,   362,    12,   374,   362,   362,    -1,   362,
     362,    12,   372,   379,   371,    -1,   299,   580,    -1,   126,
      -1,   126,   362,    -1,   362,   362,    -1,   362,   362,    12,
     362,   362,    -1,   362,   362,    12,   374,   362,   362,    -1,
     362,   362,    12,   372,   379,   371,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   465,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   523,   524,
     527,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   541,   543,   544,   545,   546,   548,   549,   550,
     551,   554,   555,   556,   557,   558,   561,   562,   565,   566,
     567,   570,   573,   576,   579,   591,   598,   605,   613,   614,
     615,   616,   617,   620,   621,   622,   623,   624,   625,   626,
     627,   628,   629,   630,   631,   632,   633,   634,   635,   636,
     637,   638,   639,   640,   641,   642,   643,   644,   645,   646,
     647,   650,   651,   654,   655,   656,   657,   658,   659,   662,
     663,   664,   665,   666,   669,   670,   671,   672,   673,   674,
     675,   676,   679,   680,   681,   682,   683,   686,   687,   688,
     689,   690,   691,   692,   693,   696,   697,   698,   701,   702,
     703,   704,   707,   708,   709,   712,   713,   714,   717,   718,
     719,   722,   723,   724,   725,   726,   727,   728,   729,   732,
     733,   736,   737,   738,   739,   740,   741,   744,   745,   746,
     747,   750,   751,   752,   753,   754,   755,   758,   759,   760,
     761,   762,   763,   764,   765,   769,   770,   773,   774,   777,
     778,   781,   782,   786,   787,   788,   789,   790,   791,   792,
     793,   796,   797,   800,   801,   802,   804,   806,   807,   808,
     810,   814,   815,   818,   819,   821,   824,   826,   832,   833,
     834,   837,   838,   839,   842,   843,   844,   845,   846,   847,
     848,   854,   855,   858,   859,   860,   861,   862,   865,   866,
     867,   868,   871,   872,   877,   882,   889,   891,   893,   894,
     895,   898,   900,   903,   904,   907,   908,   909,   910,   911,
     914,   916,   918,   923,   928,   931,   932,   935,   936,   937,
     944,   945,   946,   947,   950,   951,   954,   955,   958,   959,
     962,   964,   968,   969,   972,   974,   975,   976,   977,   980,
     981,   983,   984,   985,   988,   990,   992,   993,   995,   997,
     999,  1001,  1005,  1008,  1009,  1010,  1011,  1014,  1017,  1018,
    1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,  1027,  1028,
    1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,  1038,
    1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,  1048,  1049,
    1050,  1051,  1052,  1053,  1054,  1056,  1057,  1058,  1061,  1063,
    1067,  1069,  1073,  1074,  1075,  1076,  1077,  1078,  1079,  1080,
    1083,  1084,  1085,  1088,  1091,  1092,  1094,  1096,  1097,  1098,
    1099,  1100,  1101,  1108,  1109,  1112,  1113,  1114,  1117,  1118,
    1121,  1124,  1125,  1127,  1131,  1132,  1133,  1136,  1140,  1142,
    1143,  1144,  1145,  1146,  1147,  1148,  1149,  1150,  1153,  1154,
    1155,  1158,  1159,  1162,  1164,  1172,  1174,  1176,  1180,  1181,
    1183,  1186,  1189,  1190,  1194,  1196,  1199,  1204,  1205,  1206,
    1210,  1211,  1212,  1215,  1216,  1217,  1220,  1221,  1223,  1224,
    1225,  1226,  1227,  1228,  1229,  1230,  1231,  1232,  1234,  1235,
    1238,  1239,  1242,  1243,  1244,  1245,  1248,  1249,  1252,  1254,
    1257,  1261,  1262,  1263,  1265,  1267,  1271,  1272,  1273,  1276,
    1277,  1278,  1279,  1280,  1281,  1282,  1285,  1288,  1289,  1290,
    1293,  1294,  1295,  1296,  1297,  1298,  1301,  1302,  1303,  1304,
    1305,  1306,  1307,  1310,  1311,  1314,  1315,  1318,  1319,  1322,
    1323,  1326,  1327,  1328,  1331,  1332,  1335,  1336,  1339,  1342,
    1350,  1351,  1354,  1355,  1356,  1357,  1358,  1359,  1360,  1361,
    1362,  1363,  1364,  1365,  1366,  1367,  1368,  1369,  1370,  1371,
    1374,  1377,  1378,  1381,  1382,  1383,  1384,  1387,  1388,  1389,
    1390,  1393,  1394,  1395,  1396,  1397,  1398,  1401,  1402,  1403,
    1404,  1405,  1406,  1408,  1409,  1414,  1415,  1418,  1420,  1422,
    1425,  1426,  1427,  1428,  1429,  1430,  1433,  1435,  1437,  1439,
    1440,  1442,  1444,  1446,  1448,  1450,  1453,  1454,  1455,  1456,
    1457,  1458,  1460,  1461,  1462,  1465,  1468,  1470,  1472,  1474,
    1476,  1478,  1480,  1482,  1485,  1487,  1489,  1491,  1492,  1493,
    1494,  1495,  1498,  1499,  1500,  1501,  1502,  1503,  1504,  1506,
    1508,  1509,  1510,  1513,  1514,  1515,  1516,  1517,  1518,  1520,
    1521,  1522,  1525,  1526,  1527,  1528,  1529,  1532,  1535,  1538,
    1541,  1544,  1547,  1550,  1553,  1556,  1561,  1564,  1567,  1570,
    1573,  1576,  1579,  1582,  1585,  1588,  1591,  1596,  1599,  1602,
    1605,  1608,  1611,  1614,  1617,  1620,  1625,  1627,  1629,  1631,
    1633,  1635,  1640,  1642,  1644,  1648,  1651,  1654,  1657,  1660,
    1663,  1666,  1669,  1672,  1675,  1678,  1683,  1684,  1685,  1686,
    1687,  1688,  1689,  1691,  1693,  1694,  1695,  1698,  1699,  1700,
    1701,  1702,  1703,  1705,  1706,  1707,  1710,  1712,  1714,  1715,
    1717,  1719,  1723,  1724,  1727,  1728,  1729,  1732,  1735,  1736,
    1737,  1738,  1739,  1740,  1741,  1744,  1752,  1753,  1754,  1755,
    1757,  1759,  1760,  1760,  1761,  1762,  1763,  1764,  1765,  1767,
    1768,  1770,  1773,  1776,  1777,  1778,  1781,  1784,  1787,  1788,
    1792,  1795,  1798,  1801,  1805,  1810,  1815,  1817,  1818,  1820,
    1821,  1823,  1825,  1827,  1829,  1830,  1832,  1834,  1838,  1843,
    1845,  1847,  1849,  1851,  1853,  1855,  1857,  1859,  1861,  1863,
    1866,  1867,  1869,  1871,  1872,  1874,  1876,  1877,  1878,  1880,
    1882,  1883,  1884,  1886,  1887,  1888,  1891,  1895,  1898,  1901,
    1905,  1910,  1916,  1917,  1918,  1920,  1921,  1925,  1927,  1928,
    1929,  1932,  1935,  1938,  1940,  1942,  1943,  1948,  1951,  1952,
    1953,  1956,  1960,  1961,  1963,  1964,  1965,  1967,  1968,  1970,
    1971,  1976,  1978,  1979,  1981,  1982,  1983,  1984,  1985,  1986,
    1988,  1990,  1992,  1993,  1994,  1996,  1998,  1999,  2000,  2001,
    2002,  2003,  2004,  2005,  2006,  2007,  2008,  2010,  2012,  2013,
    2014,  2015,  2017,  2018,  2019,  2020,  2021,  2023,  2024,  2025,
    2026,  2027,  2028,  2031,  2032,  2033,  2034,  2035,  2036,  2037,
    2038,  2039,  2040,  2041,  2042,  2043,  2044,  2045,  2046,  2047,
    2048,  2049,  2050,  2051,  2054,  2055,  2056,  2057,  2058,  2059,
    2067,  2074,  2083,  2092,  2099,  2106,  2114,  2122,  2129,  2134,
    2139,  2144,  2149,  2154,  2159,  2165,  2175,  2185,  2195,  2202,
    2212,  2222,  2231,  2243,  2256,  2261,  2264,  2266,  2268,  2273,
    2277,  2278,  2279,  2285,  2287,  2289,  2292,  2293,  2294,  2295,
    2296,  2297,  2298,  2301,  2302,  2303,  2304,  2305,  2306,  2308,
    2310,  2312,  2314,  2316,  2318,  2321,  2322,  2323,  2324,  2326,
    2329,  2330,  2332,  2334,  2335,  2336,  2338,  2341,  2344,  2345,
    2347,  2348,  2349,  2350,  2352,  2353,  2354,  2355,  2356,  2358,
    2360,  2361,  2363,  2366,  2367,  2368,  2370,  2372,  2373,  2374,
    2375,  2377,  2380,  2384,  2385,  2386,  2387,  2390,  2393,  2395,
    2396,  2397,  2398,  2400,  2403,  2404,  2406,  2407,  2408,  2409,
    2410,  2412,  2413,  2415,  2418,  2419,  2420,  2421,  2422,  2424,
    2426,  2427,  2428,  2429,  2431,  2433,  2434,  2435,  2436,  2437,
    2438,  2440,  2441,  2443,  2446,  2447,  2448,  2449,  2452,  2453,
    2456,  2457,  2460,  2461,  2464,  2477,  2478,  2482,  2483,  2487,
    2488,  2491,  2495,  2501,  2503,  2506,  2508,  2511,  2513,  2517,
    2518,  2519,  2520,  2521,  2522,  2523,  2527,  2528,  2531,  2532,
    2533,  2534,  2535,  2536,  2537,  2538,  2541,  2542,  2543,  2544,
    2545,  2546,  2547,  2548,  2549,  2550,  2551,  2554,  2555,  2558,
    2559,  2559,  2562,  2564,  2566,  2569,  2570,  2571,  2572,  2575,
    2576,  2579,  2580,  2583,  2587,  2588,  2588,  2591,  2592,  2595,
    2598,  2602,  2603,  2604,  2605,  2606,  2607,  2608,  2609,  2615,
    2616,  2617,  2618,  2621,  2623,  2624,  2629,  2631,  2632,  2633,
    2634,  2637,  2638,  2643,  2647,  2648,  2649,  2652,  2653,  2658,
    2659,  2662,  2664,  2665,  2666,  2671,  2673,  2679,  2680,  2681,
    2682,  2685,  2686,  2689,  2691,  2693,  2694,  2697,  2699,  2700,
    2701,  2704,  2705,  2708,  2709,  2710,  2713,  2714,  2715,  2718,
    2719,  2720,  2721,  2722,  2725,  2726,  2727,  2730,  2731,  2732,
    2733,  2734,  2737,  2739,  2741,  2743,  2746,  2748,  2750,  2753,
    2754,  2755,  2756,  2757,  2758,  2759,  2760,  2761,  2764,  2765,
    2766,  2769,  2770,  2771,  2774,  2775,  2776,  2779,  2780,  2781,
    2784,  2785,  2786,  2787,  2790,  2791,  2792,  2795,  2796,  2797,
    2800,  2801,  2802,  2805,  2806,  2807,  2810,  2812,  2814,  2818,
    2822,  2824,  2829,  2832,  2833,  2834,  2835,  2838,  2839,  2841,
    2842,  2844,  2847,  2848,  2849,  2852,  2853,  2856,  2858,  2859,
    2860,  2861,  2864,  2865,  2866,  2869,  2870,  2871,  2874,  2875,
    2880,  2884,  2891,  2892,  2894,  2899,  2901,  2904,  2905,  2906,
    2907,  2909,  2914
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
  "FACTOR_", "FALSE_", "FILE_", "FILL_", "FILTER_", "FIT_", "FITS_",
  "FITSY_", "FIXED_", "FK4_", "FK5_", "FONT_", "FORMAT_", "FOOTPRINT_",
  "FROM_", "FRONT_", "FULL_", "FUNCTION_", "GALACTIC_", "GAUSSIAN_",
  "GET_", "GLOBAL_", "GRAPHICS_", "GRAY_", "GRID_", "GZ_", "HANDLE_",
  "HAS_", "HEAD_", "HEADER_", "HEIGHT_", "HIDE_", "HIGHLITE_", "HISTEQU_",
  "HISTOGRAM_", "HORIZONTAL_", "ICRS_", "ID_", "IIS_", "IMAGE_",
  "INCLUDE_", "INCR_", "INFO_", "ITERATION_", "IRAF_", "IRAFMIN_",
  "J2000_", "KEY_", "KEYWORD_", "LABEL_", "LENGTH_", "LEVEL_", "LIGHTEN_",
  "LITTLE_", "LITTLEENDIAN_", "LINE_", "LINEAR_", "LIST_", "LOAD_",
  "LOCAL_", "LOG_", "MACOSX_", "MAGNIFIER_", "MATCH_", "MAP_", "MARK_",
  "MARKER_", "MASK_", "MEDIAN_", "MESSAGE_", "METHOD_", "MINMAX_",
  "MINOR_", "MIP_", "MMAP_", "MMAPINCR_", "MOSAIC_", "MODE_", "MOTION_",
  "MOVE_", "NAME_", "NAN_", "NATIVE_", "NAXES_", "NEW_", "NEXT_", "NO_",
  "NONE_", "NONNAN_", "NONZERO_", "NOW_", "NRRD_", "NUMBER_", "OBJECT_",
  "OFF_", "ON_", "ONLY_", "OPTION_", "ORIENT_", "PAN_", "PANNER_",
  "PARSER_", "PASTE_", "PERF_", "PHOTO_", "PHYSICAL_", "PIXEL_", "PLOT2D_",
  "PLOT3D_", "POINT_", "POINTER_", "POLYGON_", "POSTSCRIPT_", "POW_",
  "PRECISION_", "PRINT_", "PRESERVE_", "PROJECTION_", "PROPERTY_",
  "PUBLICATION_", "PROS_", "QUERY_", "RADIAL_", "RADIUS_", "RANGE_",
  "REGION_", "REPLACE_", "RESAMPLE_", "RESCAN_", "RESET_", "RESOLUTION_",
  "RGB_", "ROOT_", "ROTATE_", "RULER_", "SAMPLE_", "SAOIMAGE_", "SAOTNG_",
  "SAVE_", "SCALE_", "SCAN_", "SCIENTIFIC_", "SCOPE_", "SCREEN_",
  "SEGMENT_", "SELECT_", "SET_", "SEXAGESIMAL_", "SHAPE_", "SHARED_",
  "SHIFT_", "SHMID_", "SHOW_", "SIGMA_", "SINH_", "SIZE_", "SLICE_",
  "SMMAP_", "SMOOTH_", "SOCKET_", "SOCKETGZ_", "SOURCE_", "SQRT_",
  "SQUARED_", "SSHARED_", "STATS_", "STATUS_", "SUM_", "SYSTEM_", "TABLE_",
  "TAG_", "TEMPLATE_", "TEXT_", "THREADS_", "THREED_", "THRESHOLD_",
  "THICK_", "TRANSPARENCY_", "TO_", "TOGGLE_", "TOPHAT_", "TRUE_", "TYPE_",
  "UNDO_", "UNHIGHLITE_", "UNLOAD_", "UNSELECT_", "UPDATE_", "USER_",
  "VALUE_", "VAR_", "VIEW_", "VECTOR_", "VERSION_", "VERTEX_", "VERTICAL_",
  "WARP_", "WCS_", "WCSA_", "WCSB_", "WCSC_", "WCSD_", "WCSE_", "WCSF_",
  "WCSG_", "WCSH_", "WCSI_", "WCSJ_", "WCSK_", "WCSL_", "WCSM_", "WCSN_",
  "WCSO_", "WCSP_", "WCSQ_", "WCSR_", "WCSS_", "WCST_", "WCSU_", "WCSV_",
  "WCSW_", "WCSX_", "WCSY_", "WCSZ_", "WCS0_", "WFPC2_", "WIDTH_",
  "WIN32_", "XML_", "XY_", "YES_", "ZERO_", "ZMAX_", "ZSCALE_", "ZOOM_",
  "'Y'", "'N'", "'X'", "'='", "$accept", "command", "numeric", "debug",
  "yesno", "fileNameType", "optangle", "angle", "sexagesimal", "hms",
  "dms", "coord", "coordSystem", "wcsSystem", "internalSystem", "maskType",
  "maskBlend", "scaleType", "minmaxMode", "skyFrame", "skyFormat",
  "skyDist", "shmType", "incrLoad", "layerType", "pointShape", "pointSize",
  "analysisMethod", "analysisParam", "endian", "threed", "threedBorder",
  "threedCompass", "threedHighlite", "threedView", "bin", "binAbout",
  "binFactor", "binFunction", "binTo", "block", "blockTo", "clip",
  "clipScope", "clipMode", "clipMinMax", "clipZScale", "colormap",
  "colormapMotion", "colorscale", "contour", "contourCreate",
  "contourDelete", "contourLoad", "contourClipMode", "contourClipScope",
  "contourMethod", "contourPaste", "contourSave", "crop", "crop3d",
  "crosshair", "cube", "cutMethod", "fitsy", "get", "getHorzCut",
  "getVertCut", "getBin", "getBinCols", "getBlock", "getClip",
  "getClipMinMax", "getClipZScale", "getColorbar", "getColorMap",
  "getColorMapLevel", "getColorScale", "getColorScaleLevel", "getContour",
  "getContourClip", "getContourColorScale", "getCoord", "getCrop",
  "getCrosshair", "getCube", "getCursor", "getData", "getInfo", "getiis",
  "getIISFileName", "getFits", "getFitsExt", "getFitsHeader",
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
     605,   606,   607,   608,   609,   610,    89,    78,    88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   360,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   362,   362,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   365,   365,   365,   365,   365,   366,   366,   367,   367,
     367,   368,   369,   370,   371,   371,   371,   371,   372,   372,
     372,   372,   372,   373,   373,   373,   373,   373,   373,   373,
     373,   373,   373,   373,   373,   373,   373,   373,   373,   373,
     373,   373,   373,   373,   373,   373,   373,   373,   373,   373,
     373,   374,   374,   375,   375,   375,   375,   375,   375,   376,
     376,   376,   376,   376,   377,   377,   377,   377,   377,   377,
     377,   377,   378,   378,   378,   378,   378,   379,   379,   379,
     379,   379,   379,   379,   379,   380,   380,   380,   381,   381,
     381,   381,   382,   382,   382,   383,   383,   383,   384,   384,
     384,   385,   385,   385,   385,   385,   385,   385,   385,   386,
     386,   387,   387,   387,   387,   387,   387,   388,   388,   388,
     388,   389,   389,   389,   389,   389,   389,   390,   390,   390,
     390,   390,   390,   390,   390,   391,   391,   392,   392,   393,
     393,   394,   394,   395,   395,   395,   395,   395,   395,   395,
     395,   396,   396,   397,   397,   397,   397,   397,   397,   397,
     397,   398,   398,   399,   399,   399,   399,   399,   400,   400,
     400,   401,   401,   401,   402,   402,   402,   402,   402,   402,
     402,   403,   403,   404,   404,   404,   404,   404,   405,   405,
     405,   405,   406,   406,   406,   406,   407,   407,   407,   407,
     407,   408,   408,   409,   409,   410,   410,   410,   410,   410,
     411,   411,   411,   411,   411,   412,   412,   413,   413,   413,
     414,   414,   414,   414,   415,   415,   416,   416,   417,   417,
     418,   418,   419,   419,   419,   419,   419,   419,   419,   420,
     420,   420,   420,   420,   421,   421,   421,   421,   421,   421,
     421,   421,   422,   423,   423,   423,   423,   424,   425,   425,
     425,   425,   425,   425,   425,   425,   425,   425,   425,   425,
     425,   425,   425,   425,   425,   425,   425,   425,   425,   425,
     425,   425,   425,   425,   425,   425,   425,   425,   425,   425,
     425,   425,   425,   425,   425,   425,   425,   425,   426,   426,
     427,   427,   428,   428,   428,   428,   428,   428,   428,   428,
     429,   429,   429,   430,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   432,   432,   433,   433,   433,   434,   434,
     435,   436,   436,   436,   437,   437,   437,   438,   439,   439,
     439,   439,   439,   439,   439,   439,   439,   439,   440,   440,
     440,   441,   441,   442,   442,   443,   443,   443,   444,   444,
     444,   445,   446,   446,   447,   447,   447,   448,   448,   448,
     449,   449,   449,   450,   450,   450,   451,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     452,   452,   453,   453,   453,   453,   454,   454,   455,   455,
     455,   456,   456,   456,   456,   456,   457,   457,   457,   458,
     458,   458,   458,   458,   458,   458,   459,   460,   460,   460,
     461,   461,   461,   461,   461,   461,   462,   462,   462,   462,
     462,   462,   462,   463,   463,   464,   464,   465,   465,   466,
     466,   467,   467,   467,   468,   468,   469,   469,   470,   470,
     471,   471,   472,   472,   472,   472,   472,   472,   472,   472,
     472,   472,   472,   472,   472,   472,   472,   472,   472,   472,
     473,   474,   474,   475,   475,   475,   475,   476,   476,   476,
     476,   477,   477,   477,   477,   477,   477,   478,   478,   478,
     478,   478,   478,   478,   478,   479,   479,   480,   480,   480,
     481,   481,   481,   481,   481,   481,   482,   482,   482,   482,
     482,   482,   482,   482,   482,   482,   483,   483,   483,   483,
     483,   483,   483,   483,   483,   484,   485,   485,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   485,   485,   485,
     485,   485,   486,   486,   486,   486,   486,   486,   486,   486,
     486,   486,   486,   487,   487,   487,   487,   487,   487,   487,
     487,   487,   488,   488,   488,   488,   488,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   496,   496,   496,   496,
     496,   496,   497,   497,   498,   498,   498,   499,   500,   500,
     500,   500,   500,   500,   500,   501,   502,   502,   502,   502,
     502,   502,   503,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   505,   505,   505,   505,   505,   505,
     506,   506,   506,   506,   506,   506,   506,   506,   506,   506,
     506,   506,   506,   506,   506,   506,   506,   506,   506,   506,
     506,   506,   506,   506,   506,   506,   507,   507,   507,   507,
     508,   508,   508,   509,   509,   509,   510,   510,   510,   510,
     510,   510,   510,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   512,   512,   512,   512,   513,   513,
     514,   514,   515,   515,   516,   517,   517,   517,   517,   517,
     517,   518,   518,   519,   519,   519,   519,   519,   519,   520,
     520,   520,   520,   520,   520,   520,   521,   521,   522,   522,
     522,   522,   522,   522,   522,   522,   523,   523,   523,   523,
     523,   523,   523,   523,   523,   523,   523,   524,   524,   525,
     526,   525,   527,   527,   527,   528,   528,   528,   528,   529,
     529,   530,   530,   531,   532,   533,   532,   534,   534,   535,
     536,   537,   537,   537,   537,   537,   537,   537,   537,   538,
     538,   538,   538,   539,   539,   539,   539,   539,   539,   539,
     539,   540,   540,   540,   541,   541,   541,   542,   542,   542,
     542,   543,   543,   543,   543,   544,   544,   545,   545,   545,
     545,   546,   546,   547,   547,   547,   547,   548,   548,   548,
     548,   549,   549,   550,   550,   550,   551,   551,   551,   552,
     552,   552,   552,   552,   553,   553,   553,   554,   554,   554,
     554,   554,   555,   555,   555,   555,   556,   556,   556,   557,
     557,   557,   557,   557,   557,   557,   557,   557,   558,   558,
     558,   559,   559,   559,   560,   560,   560,   561,   561,   561,
     562,   562,   562,   562,   563,   563,   563,   564,   564,   564,
     565,   565,   565,   566,   566,   566,   567,   567,   567,   568,
     569,   569,   569,   570,   570,   570,   570,   571,   571,   571,
     571,   571,   572,   572,   572,   573,   573,   574,   574,   574,
     574,   574,   575,   575,   575,   576,   576,   576,   577,   577,
     577,   578,   579,   579,   579,   579,   579,   580,   580,   580,
     580,   580,   580
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     3,     3,     2,     1,     1,
       2,     3,     2,     2,     2,     2,     2,     2,     2,     3,
       2,     2,     2,     2,     1,     2,     3,     2,     3,     2,
       2,     2,     2,     3,     2,     3,     2,     2,     2,     2,
       2,     2,     1,     3,     2,     2,     2,     1,     2,     2,
       2,     1,     2,     1,     2,     2,     2,     2,     1,     1,
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
       4,     3,     2,     0,     1,     1,     1,     3,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     2,     2,     4,     3,     2,     2,
       2,     1,     3,     2,     2,     1,     2,     8,     2,     1,
       2,     1,     2,     1,     4,     3,     2,     1,     7,     8,
       7,     8,     1,     1,     1,     2,     1,     1,     2,     1,
       0,     2,     2,     1,     0,     2,     2,     1,     1,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     0,     1,
       2,     1,     4,     5,     0,     2,     1,     5,     2,     2,
       1,     1,     1,     2,     1,     2,     1,     1,     0,     1,
       1,     0,     1,     5,     6,     3,     6,     3,     1,     3,
       1,     1,     1,     3,     6,     7,     5,     2,     1,     5,
       5,     1,     3,     0,     1,     2,     1,     4,     1,     2,
       1,     2,     3,     2,     1,     2,     1,     4,     2,     1,
       1,     3,     1,     2,     3,     2,     0,     1,     1,     4,
       2,     0,     1,     3,     4,     4,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     1,     2,     2,     2,     2,
       1,     1,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     2,     2,     0,     1,     2,     1,     6,     5,
       1,     1,     1,     2,     2,     2,     1,     1,     1,     1,
       2,     1,     1,     1,     2,     1,     1,     1,     2,     2,
       2,     0,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     1,     2,     3,     1,     2,
       2,     4,     6,     1,    10,     1,     2,     3,     3,     2,
       2,     2,     2,     2,     2,     2,     4,     4,     4,     3,
       3,     5,     4,     4,     4,     3,     3,     3,     3,     2,
       2,     4,     3,     3,     3,     3,     4,     4,     4,     4,
       5,     4,     6,     7,     4,     4,     5,     2,     3,     3,
       3,     2,     3,     3,     3,     3,     4,     3,     5,     6,
       3,     3,     4,     3,     3,     3,     3,     3,     5,     3,
       3,     4,     3,     2,     2,     1,     3,     4,     4,     4,
       4,     4,     6,     4,     4,     5,     4,     4,     4,     4,
       5,     4,     6,     7,     4,     4,     5,     5,     5,     5,
       5,     5,     7,     5,     5,     6,     4,     4,     4,     4,
       4,     6,     4,     4,     5,     5,     5,     5,     5,     6,
       5,     7,     8,     5,     5,     6,     3,     3,     3,     3,
       4,     3,     5,     6,     3,     3,     4,     3,     3,     3,
       3,     3,     5,     3,     3,     4,     4,     4,     3,     5,
       4,     4,     2,     3,     6,     6,     1,     1,     1,     2,
       2,     2,     3,     3,     2,    12,     2,     2,     1,     3,
       4,     2,     0,     3,     1,     2,     2,     2,     2,     2,
       4,     4,     4,     3,     4,     5,     8,     6,     4,     9,
       6,     7,    10,    11,    12,     9,     5,     4,     6,     3,
       5,     5,     6,     5,     4,     9,    10,    11,     9,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     7,     7,
       2,     4,     4,     4,     4,     5,     4,     4,     5,     5,
       3,     4,     4,     4,     4,     7,     9,     6,    10,    11,
      12,     9,     3,     2,     3,     5,     7,     4,     3,     3,
       6,     7,     7,     4,     4,     4,     9,     4,     3,     4,
       7,     7,     2,     3,     3,     3,     4,     2,     2,     4,
      10,     3,     1,     3,     2,     2,     2,     2,     3,     5,
       4,     5,     2,     2,     2,     2,     3,     2,     2,     2,
       3,     2,     3,     4,     3,     3,     6,     4,     2,     3,
       2,     2,     4,     3,     3,     2,     3,     1,     2,     1,
       2,     2,     2,     1,     1,     1,     1,     2,     1,     2,
       2,     1,     2,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     2,     2,     2,     3,
       5,     7,     7,     6,     6,     6,     6,     5,     6,     6,
       6,     6,     6,     6,     6,    11,     7,     7,     7,     9,
       9,    10,    12,    12,     2,     2,     3,     4,     4,     4,
       0,     1,     1,     4,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     3,     3,     8,
       6,    10,     7,     7,     5,     2,     2,     3,     4,     5,
       3,     5,     5,     3,     4,     5,     5,     5,     3,     5,
       2,     3,     3,     5,     3,     3,     3,     4,     5,     5,
       3,     5,     5,     3,     4,     5,     5,     2,     2,     3,
       5,     6,     6,     3,     3,     3,     6,     5,     5,     2,
       3,     3,     5,     6,     3,     2,     2,     3,     2,     3,
       2,     3,     5,     6,     2,     2,     2,     1,     4,     4,
       1,     2,     2,     2,     2,     2,     2,     2,     3,     2,
       3,     2,     3,     1,     1,     1,     1,     1,     0,     2,
       0,     2,     0,     1,     0,     0,     1,     1,     1,     1,
       1,     7,     8,     2,     6,     2,     6,     2,     3,     2,
       1,     1,     3,     3,     1,     4,     2,     1,     3,     3,
       4,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     0,
       0,     2,     6,     7,     2,     1,     3,     1,     3,     1,
       2,     2,     1,     3,     0,     0,     2,     2,     1,     3,
       5,     1,     2,     2,     3,     2,     2,     2,     2,     1,
       1,     1,     1,     4,     2,     3,     3,     2,     3,     2,
       2,     2,     3,     3,     3,     2,     3,     1,     3,     3,
       1,     2,     2,     2,     2,     9,     6,     1,     1,     1,
       1,     2,     2,     3,     3,     1,     2,     3,     3,     1,
       2,     1,     1,     1,     1,     1,     2,     2,     4,     1,
       2,     2,     2,     3,     1,     1,     1,     2,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     1,
       2,     2,     2,     3,     2,     3,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     3,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     3,     3,     4,
       6,     2,     1,     1,     1,     1,     1,     0,     5,     1,
       6,     3,     1,     2,     2,     2,     3,     3,     2,     2,
       2,     2,     2,     2,     3,     2,     2,     3,     1,     3,
       4,     1,     2,     5,     6,     6,     2,     1,     2,     2,
       5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     8,     9,     0,     0,     0,     0,
       0,   312,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     0,  1055,
       0,     0,     0,     0,     0,     0,     0,     0,  1055,    42,
       0,     0,     0,    47,     0,     0,     0,    51,  1247,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     3,    58,    59,     0,   248,     7,
       0,     0,     0,     0,     0,     0,    10,     0,     0,   278,
     280,     0,     0,    12,   149,   151,   144,   145,   146,   150,
     147,   148,   283,    13,     0,   295,     0,     0,     0,    14,
       0,     0,     0,     0,   319,     0,    15,    72,   101,     0,
     131,   100,    80,    98,     0,    77,    79,    75,   132,    99,
      76,     0,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
      73,    74,    78,   326,   157,   102,     0,    16,     0,    17,
      18,     0,     0,     0,     0,     0,     0,    61,    60,     0,
       0,     0,     0,     2,     0,     0,    20,     0,     0,     0,
     394,   408,     0,   414,     0,     0,     0,     0,     0,     0,
       0,   352,     0,   486,     0,     0,     0,     0,     0,     0,
    1055,     0,   361,     0,   365,     0,     0,     0,   369,     0,
     371,     0,   373,     0,     0,   521,   377,    21,     0,   527,
      22,   532,     0,     0,   551,   536,   537,   538,   539,   553,
     541,   542,   546,   543,     0,   545,   547,     0,     0,    23,
       0,    25,     0,   568,     0,     0,     0,   573,     0,    27,
       0,     0,     0,     0,     0,     0,     0,    29,   727,    30,
       0,     0,     0,     0,     0,     0,   728,    31,     0,    32,
    1059,  1060,  1056,  1057,  1058,     0,   139,  1121,     0,   133,
       0,     0,     0,    34,     0,  1132,  1131,  1130,  1129,    36,
       0,     0,     0,     0,     0,   157,     0,    37,     0,  1150,
       0,  1147,    38,     0,     0,     0,     0,    41,     0,    40,
      39,     0,     0,     0,     0,    44,     0,     0,  1179,    45,
       0,     0,     0,     0,     0,    46,  1243,  1242,  1246,  1245,
    1244,    48,     0,    49,     0,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     0,  1249,    52,     0,     0,    54,
       0,     0,     0,     0,   157,    55,  1271,    56,     0,     0,
      57,     1,     4,     5,     6,   231,     0,   223,     0,     0,
     225,     0,   233,   226,   230,   241,   242,   227,   243,     0,
     229,   251,   252,   250,   249,     0,     0,   271,     0,   256,
     264,   267,   266,   265,   263,   255,   260,   261,   262,   254,
       0,     0,     0,     0,     0,     0,   259,    11,     0,     0,
       0,   279,     0,   284,     0,   294,   285,   296,   286,   297,
     287,   308,   288,     0,     0,   289,     0,    91,    92,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   315,     0,     0,     0,     0,     0,   159,   164,   158,
     160,   163,   162,   161,     0,     0,   332,    66,    67,    68,
      69,    70,    62,    63,    64,    71,    65,    19,     0,   338,
       0,   390,   386,   382,   383,   387,   384,   389,   339,   393,
     340,   300,   398,   402,   397,   303,   302,   301,     0,     0,
     341,   409,   343,     0,   342,     0,   416,   344,   428,   420,
     431,   421,   422,   424,     0,   426,   427,   157,   345,     0,
       0,   346,     0,     0,   157,   347,   440,   157,   438,   348,
     441,   350,   157,   442,   349,     0,   157,     0,   351,   460,
       0,   458,   476,     0,     0,     0,   464,   456,     0,   466,
     481,   469,   353,   487,   488,   354,   355,     0,     0,     0,
     451,     0,   358,    81,   448,     0,   359,   360,     0,   495,
     489,   494,   490,   491,   492,   493,   363,   364,   496,   366,
       0,   497,   498,   499,   368,   505,   500,   501,   503,   370,
     511,   513,   515,   517,   510,   512,   519,   372,     0,     0,
     524,     0,   376,   157,   526,   533,     0,   534,   552,   535,
     554,   555,   556,   540,   557,   559,   558,   560,   544,   548,
     565,     0,     0,     0,     0,   561,   549,    26,     0,     0,
     570,   569,     0,     0,     0,     0,    28,     0,     0,   580,
       0,   581,     0,     0,     0,     0,     0,   582,     0,   726,
       0,   583,     0,   584,     0,     0,   585,     0,   731,   730,
     729,     0,   734,     0,     0,     0,   904,     0,     0,     0,
     738,   742,   744,   940,     0,     0,     0,     0,   842,     0,
       0,     0,   877,     0,     0,     0,     0,     0,     0,     0,
     879,     0,     0,     0,    33,   142,   143,   141,   140,  1127,
    1122,  1128,   136,   137,   135,   138,   134,  1123,     0,  1125,
    1126,    35,     0,     0,     0,     0,  1139,  1140,     0,   157,
       0,  1137,  1134,     0,     0,     0,   157,  1157,  1160,  1158,
    1159,  1151,  1152,  1153,  1154,     0,     0,     0,    43,  1176,
    1177,     0,  1184,  1186,  1185,  1181,  1182,  1180,     0,     0,
       0,     0,  1187,     0,  1190,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1188,  1199,     0,     0,     0,
    1189,  1191,  1241,  1174,  1175,  1173,   212,     0,   215,   208,
       0,   217,   209,     0,   219,   210,  1172,  1171,   211,   213,
     214,     0,     0,   207,     0,     0,     0,     0,  1255,  1268,
    1258,     0,     0,  1261,     0,     0,  1260,  1259,   165,  1277,
       0,  1276,  1272,   232,   228,     0,   237,     0,   234,     0,
     253,   152,   155,   156,   154,   153,   268,   269,   270,   258,
     257,   273,   275,   274,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   157,     0,   316,    97,    94,    95,    96,
     157,   318,   317,     0,     0,     0,     0,     0,     0,     0,
     331,     0,   327,   325,   324,   337,   385,     0,     0,   388,
     403,   404,   399,   400,   405,   407,   406,   401,   304,   305,
     396,   395,   411,   410,     0,   415,   429,   430,   419,   432,
     425,   423,   418,     0,     0,   157,   157,   165,   165,   165,
     157,     0,     0,   157,   477,   459,   470,     0,   461,    81,
     472,     0,     0,   463,   465,   157,   482,     0,     0,   468,
       0,     0,   357,     0,   453,    85,    84,   447,     0,     0,
       0,     0,   954,   956,   955,     0,  1048,     0,  1027,     0,
    1030,     0,     0,  1050,  1052,     0,  1043,   362,     0,   502,
     504,   514,   507,   516,   508,   518,   509,   520,   506,     0,
       0,   375,   525,   522,   523,   165,   550,   562,   563,   564,
     566,     0,   579,   567,     0,     0,     0,     0,     0,     0,
     178,   178,   172,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   175,   175,   172,     0,     0,   172,     0,     0,
       0,     0,     0,   621,   645,     0,     0,     0,   617,     0,
       0,     0,     0,   178,   172,     0,     0,   722,     0,   732,
     733,   157,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   790,     0,     0,     0,     0,
       0,   813,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   832,     0,     0,   837,   838,     0,     0,     0,   857,
     859,   858,     0,   861,     0,     0,   868,   870,   871,   905,
       0,     0,     0,     0,   736,   737,   948,   946,   951,   950,
     949,   947,   952,     0,   741,     0,   942,   941,   745,     0,
     945,     0,   746,   747,   748,   749,     0,     0,     0,     0,
       0,   844,     0,     0,   845,  1071,     0,  1074,  1070,     0,
       0,     0,   846,   878,   847,  1089,  1094,  1091,  1090,  1088,
    1095,  1092,  1086,  1093,  1087,  1096,     0,     0,   852,     0,
       0,     0,     0,   853,  1105,     0,  1107,   854,     0,  1109,
     855,   875,     0,     0,     0,   880,   881,   882,  1124,  1138,
       0,     0,  1145,  1141,     0,     0,     0,  1136,  1135,  1149,
    1148,     0,     0,  1165,     0,     0,  1161,     0,  1169,     0,
       0,  1162,     0,  1183,   201,   201,     0,   201,     0,  1209,
       0,  1208,  1200,     0,     0,     0,     0,  1204,     0,     0,
       0,  1207,     0,     0,     0,     0,     0,  1202,  1210,     0,
       0,     0,  1201,   201,   201,   201,     0,   216,   218,   220,
       0,   221,     0,    59,     0,  1251,     0,  1256,     0,   157,
    1262,  1263,     0,  1265,  1266,     0,   166,   167,  1257,  1278,
    1279,     0,   224,     0,   238,     0,     0,     0,     0,   272,
       0,     0,     0,     0,     0,     0,     0,     0,   310,   157,
       0,     0,     0,     0,   157,     0,   330,     0,   329,   392,
     391,     0,     0,     0,   157,     0,   165,   437,   435,   439,
     443,     0,     0,     0,   165,     0,   478,   462,     0,   473,
     475,   168,     0,     0,   356,     0,     0,    59,     0,   452,
      83,    82,     0,     0,   966,     0,     0,     0,     0,     0,
       0,   980,     0,     0,     0,     0,     0,     0,   997,   998,
       0,     0,     0,     0,     0,  1009,     0,  1015,  1016,  1018,
    1020,     0,  1024,  1035,  1036,  1037,     0,  1039,  1044,  1046,
    1047,  1045,   953,     0,  1026,     0,  1025,   965,     0,     0,
    1031,     0,  1033,     0,  1032,  1053,  1034,  1041,     0,     0,
     374,     0,     0,   577,   578,     0,   575,   571,     0,   178,
     178,   178,   179,   180,   589,   590,   174,   173,     0,   178,
     178,   178,     0,   595,   605,   175,   178,   178,   178,   176,
     177,   178,   178,     0,   178,   178,     0,   175,     0,   618,
       0,     0,     0,   644,     0,   643,     0,     0,   620,     0,
     619,     0,     0,     0,     0,   175,   175,   172,     0,     0,
     172,     0,     0,     0,   178,   178,   718,     0,   178,   178,
     723,     0,   191,   192,   193,   194,   195,   196,     0,    89,
      90,    88,   753,     0,     0,     0,     0,     0,     0,   898,
     896,   891,     0,   901,   885,   902,   888,   900,   894,   883,
     897,   886,   884,   903,   899,     0,     0,     0,   769,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   800,     0,     0,     0,     0,     0,   812,   814,
       0,     0,   819,   818,     0,     0,   181,     0,     0,     0,
     157,     0,   828,     0,     0,     0,     0,   833,   834,   835,
       0,     0,     0,   841,   856,   860,   862,   865,   864,     0,
       0,     0,   869,   906,   908,     0,   907,   739,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1054,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   743,     0,     0,     0,     0,   843,     0,
     157,  1067,  1065,  1063,     0,     0,   157,  1069,   848,     0,
       0,     0,     0,  1104,     0,     0,  1110,   873,   874,     0,
     876,  1144,  1146,  1143,  1142,  1133,     0,     0,     0,  1166,
       0,     0,  1170,  1178,   203,   204,   205,   206,   202,  1193,
    1192,     0,     0,     0,  1195,  1194,   201,     0,     0,     0,
    1203,     0,     0,     0,     0,     0,  1220,     0,  1234,  1233,
    1235,     0,     0,     0,  1206,     0,     0,     0,  1205,  1215,
    1214,  1216,  1212,  1211,  1213,  1237,  1236,  1238,     0,     0,
       0,  1253,  1254,     0,   157,  1269,  1264,  1267,     0,     0,
     157,     0,     0,     0,   235,     0,     0,     0,     0,     0,
       0,     0,     0,   307,   306,     0,     0,   298,   309,   311,
       0,   321,   323,   322,   320,   157,   328,     0,     0,     0,
     165,   157,     0,     0,     0,     0,   457,   471,   480,     0,
     474,   170,   171,   169,   467,     0,   483,     0,     0,     0,
     455,    81,     0,     0,     0,     0,     0,     0,   157,   967,
       0,   970,     0,     0,   973,     0,   157,   978,     0,   981,
     982,     0,   984,   985,   986,     0,   990,     0,     0,   993,
       0,   999,     0,     0,     0,  1004,  1005,  1003,     0,     0,
       0,  1010,  1011,     0,     0,  1014,  1017,  1019,  1021,     0,
       0,  1038,  1040,   957,  1049,   958,     0,     0,  1051,  1042,
       0,     0,   530,   531,     0,     0,   576,     0,   586,   587,
     588,   178,   592,   593,   594,     0,     0,     0,   599,   600,
     172,     0,     0,     0,   178,   606,   607,   608,   609,   611,
     175,   614,   615,     0,   178,     0,     0,     0,   175,   175,
     172,     0,     0,     0,     0,   642,     0,   646,     0,     0,
       0,     0,     0,   175,   175,   172,     0,     0,   172,     0,
       0,     0,     0,     0,   175,   175,   172,     0,     0,   172,
       0,     0,     0,     0,     0,   175,   175,   172,     0,     0,
     172,     0,     0,     0,     0,   175,   175,   172,     0,     0,
       0,   175,   622,   623,   624,   625,   627,     0,   630,   631,
       0,   175,     0,     0,   716,   717,   178,   720,   721,     0,
     752,   157,   754,     0,     0,   758,     0,     0,     0,     0,
       0,   890,   887,   893,   892,   889,   895,     0,   767,     0,
       0,     0,     0,   157,   774,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   791,   792,
     793,     0,   797,   794,   796,     0,     0,   802,   801,   803,
     804,     0,     0,     0,     0,     0,     0,   157,   157,   817,
     187,   183,   188,   182,   185,   184,   186,   823,   824,   825,
       0,     0,   827,   829,   157,   157,     0,   836,   839,   157,
     157,   863,   867,   909,   740,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1097,   934,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   935,     0,     0,     0,     0,     0,   750,   751,   157,
     165,  1068,     0,     0,  1072,  1073,     0,     0,   850,     0,
     157,     0,  1106,  1108,   872,     0,  1163,  1164,  1167,  1168,
     201,   201,   201,  1239,  1218,  1217,  1219,  1222,  1221,  1225,
    1224,  1226,  1223,  1231,  1230,  1232,  1228,  1227,  1229,     0,
       0,  1248,     0,  1270,     0,   157,     0,  1273,     0,     0,
     239,     0,   236,     0,     0,     0,   276,     0,     0,     0,
       0,   157,     0,   313,   145,     0,   412,     0,   433,   165,
     168,     0,     0,   446,     0,   484,   485,     0,   450,   449,
       0,     0,     0,     0,     0,   157,   968,   168,   168,   168,
     157,   974,   168,   165,   168,   168,   157,   987,   168,   168,
     168,   157,   994,   168,   168,   157,     0,   168,   157,   168,
     168,   157,   168,   157,  1028,  1029,     0,     0,   529,   572,
       0,   591,   596,   597,   598,     0,   602,   603,   604,   610,
     178,   175,   616,   633,   634,   635,   636,   637,     0,   639,
     640,   175,     0,     0,     0,   175,   175,   172,     0,     0,
       0,     0,     0,     0,   175,   175,   172,     0,     0,     0,
       0,     0,     0,   175,   175,   172,     0,     0,     0,   175,
     178,   178,   178,   178,   178,     0,   178,   178,     0,   175,
     175,   178,   178,   178,   178,   178,     0,   178,   178,     0,
     175,   175,   696,   697,   698,   699,   701,     0,   704,   705,
       0,   175,   707,   708,   709,   710,   711,     0,   713,   714,
     175,   626,   175,     0,   632,     0,     0,   719,     0,   755,
     168,     0,     0,   168,     0,     0,     0,   766,   168,   770,
     771,   168,   773,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   795,   798,   799,     0,
     168,     0,     0,     0,   815,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1098,  1077,     0,  1084,  1085,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   157,     0,
       0,    86,     0,     0,   943,   944,   165,     0,     0,     0,
    1075,   849,   851,   165,   157,  1156,  1197,  1196,  1198,  1240,
       0,  1250,  1280,     0,     0,  1275,  1274,   240,     0,     0,
       0,   281,     0,     0,     0,   299,   168,   413,   417,   434,
     436,     0,   444,   479,   157,     0,     0,     0,     0,     0,
       0,   964,   969,   972,   971,   975,   976,   977,   979,   983,
     988,   989,   991,   992,   995,   996,  1000,   165,   168,  1007,
     165,  1008,  1012,   165,  1022,   165,     0,   157,     0,   528,
       0,   601,   612,   178,   175,   641,   178,   178,   178,   178,
     178,     0,   178,   178,   175,   178,   178,   178,   178,   178,
       0,   178,   178,   175,   178,   178,   178,   178,   178,     0,
     178,   178,   175,   178,   656,   657,   658,   659,   661,   175,
     664,   665,     0,   178,   178,   685,   686,   687,   688,   690,
     175,   693,   694,     0,   178,   700,   175,     0,   706,   175,
     715,   628,   175,   724,   725,   157,   757,     0,   168,   760,
       0,   157,     0,   768,   772,   157,     0,   779,   780,   781,
     782,   786,   787,   783,   784,   785,     0,     0,   168,   807,
       0,   157,     0,     0,   820,   168,     0,     0,   168,   168,
       0,   866,     0,   189,   189,     0,     0,   189,     0,   189,
    1054,     0,     0,     0,     0,     0,     0,     0,     0,  1076,
       0,     0,   189,   189,     0,     0,     0,     0,     0,     0,
       0,     0,   936,     0,     0,     0,  1054,    87,     0,   189,
       0,  1100,   157,   157,     0,   165,     0,   222,  1282,  1281,
       0,     0,   244,     0,     0,     0,     0,   314,   445,     0,
     333,     0,   960,     0,   197,     0,  1001,  1002,  1006,  1013,
    1023,   367,     0,   333,     0,   613,   638,   647,   648,   649,
     650,   651,   175,   653,   654,   178,   676,   677,   678,   679,
     680,   175,   682,   683,   178,   667,   668,   669,   670,   671,
     175,   673,   674,   178,   660,   178,   175,   666,   689,   178,
     175,   695,   702,   175,   712,   629,     0,   168,   761,     0,
       0,     0,     0,     0,   788,   789,   805,     0,     0,     0,
     816,   821,     0,   830,   831,   822,   168,     0,   190,  1054,
    1054,    86,     0,  1054,     0,  1054,   910,   157,     0,  1079,
       0,  1082,  1119,  1083,  1081,  1078,     0,  1054,  1054,    86,
       0,     0,  1054,  1054,     0,     0,  1054,   939,   937,   938,
     917,  1054,  1054,  1100,  1114,     0,  1066,  1064,  1102,     0,
       0,     0,     0,   246,     0,     0,     0,   333,   334,   336,
     335,   378,     0,     0,   198,   200,   199,   962,   963,   333,
     380,     0,   178,   655,   178,   684,   178,   675,   662,   178,
     691,   178,   703,     0,   756,   168,   168,     0,   168,     0,
     168,   168,     0,   168,     0,  1054,   923,   919,  1054,     0,
     924,     0,   918,  1054,     0,  1080,     0,   921,   920,  1054,
       0,     0,   915,   913,  1054,   157,   914,   916,   922,  1114,
    1061,     0,     0,  1101,  1112,  1103,  1155,     0,     0,     0,
     277,   300,   303,   301,     0,     0,   379,   959,   157,   381,
     574,   652,   681,   672,   663,   692,   168,   759,   765,     0,
     778,   775,   806,   811,     0,   826,     0,   928,   912,    86,
       0,   926,  1120,     0,   911,    86,     0,   927,     0,  1062,
    1116,  1118,     0,  1111,     0,     0,   282,     0,     0,     0,
       0,   197,     0,   762,   157,   776,   808,   840,  1054,     0,
       0,  1054,     0,   168,  1117,  1113,   245,     0,     0,     0,
       0,     0,   961,   735,   157,   763,   777,   157,   809,   930,
       0,  1054,   929,     0,     0,   247,   293,     0,   292,     0,
     764,   810,    86,   931,    86,  1054,   291,   290,  1054,  1054,
     925,   933,   932
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    54,  1421,   173,   153,   917,  2496,  2497,   431,   432,
     433,   434,   154,   155,   156,   697,   689,    92,   816,   454,
    1218,  1684,  1358,  1371,  1354,  1927,  2599,  1418,  2657,  1589,
     342,   769,   772,   775,   783,    64,   367,   373,   377,   380,
      69,   383,    76,   399,   395,   389,   406,    83,   411,    93,
      99,   416,   418,   420,   489,   870,  1655,   422,   425,   106,
     441,   157,   159,  2651,   176,   217,   912,   951,   478,   859,
     480,   490,   862,   867,   492,   494,   873,   497,   875,   508,
     878,   880,   511,   515,   519,   521,   524,   528,   556,   552,
    1279,   542,   898,   903,   895,  1267,   909,   545,   566,   569,
     574,   579,   587,   942,   944,   946,   948,   592,   953,   220,
     594,  1754,   239,   597,   599,   603,   608,   616,   249,  1347,
     620,   257,   629,  1363,   631,   637,   998,  1379,   993,  1795,
    1385,  1383,  1797,   994,  1388,  1390,   643,   646,   641,   259,
     267,   269,   684,  1075,  1445,  1064,  1543,  1971,  1078,  1082,
    1073,   937,  1322,  1326,  1334,  1336,  1955,   275,  1091,  1094,
    1102,  2261,  2262,  2263,  1956,  2634,  2635,  1123,  1127,  1130,
    2713,  2714,  2710,  2711,  2760,  2264,  2265,   283,   289,   297,
     711,   706,   302,   307,   309,   721,   728,  1156,  1161,   778,
     766,   315,   319,   735,   325,   742,  1594,   755,   756,  1192,
    1187,  1600,  1177,  1606,  1618,  1614,  1181,   760,   744,   331,
     332,   346,  1205,   349,   355,   793,   796,   790,   357,   360,
     801
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2574
static const yytype_int16 yypact[] =
{
    4998,    90,   537,    55, -2574, -2574,  1014,  -152,   259,  1264,
    1090,   470,  2721,   139,   197,  2486,   491,   373,  5034,    67,
    2568, -2574,   255,   839,   512,  1071,   334,   108,   577,   -27,
     841,   543,   708,  1068,     9,   347,   646,   607,   -27, -2574,
     -23,    74,  1086, -2574,   107,   677,   568, -2574,   591, -2574,
      88,  3144,   390,    92,   706,    39,  1115,   446,   726,   752,
     116,   742,    10,   132, -2574, -2574, -2574,   786,   189, -2574,
     252,   151,   197,   570,   105,   513, -2574,   757,   189, -2574,
   -2574,    42,   189, -2574, -2574, -2574, -2574,   189, -2574, -2574,
   -2574, -2574, -2574, -2574,    84,   745,   768,   790,   596, -2574,
     189,  1366,   189,   189,   892,   189, -2574, -2574, -2574,   616,
   -2574, -2574, -2574, -2574,  3587, -2574, -2574, -2574, -2574, -2574,
   -2574,   189, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574,  1204, -2574,   189, -2574,   796, -2574,
   -2574,   197,   197,   197,   197,   197,   197, -2574, -2574,   197,
     197,   197,   197, -2574,   189,   703, -2574,   776,  1614,   747,
     182,   602,   732,   -29,  4076,   176,  4611,  4365,   888,  3587,
    2873, -2574,   427,  -133,   864,   939,   868,   730,   424,   925,
     -27,   673, -2574,   893, -2574,   766,   716,   164, -2574,     4,
   -2574,   622, -2574,   461,   943,   366, -2574, -2574,  4693, -2574,
   -2574, -2574,   945,   970,  1022, -2574, -2574, -2574, -2574,   405,
   -2574, -2574, -2574, -2574,   738, -2574, -2574,  4693,  4163, -2574,
    1050, -2574,   223, -2574,  1052,  1055,   514, -2574,   189, -2574,
    1061,    69,  1069,   342,   936,  1072,    19, -2574, -2574, -2574,
    1088,  1094,   197,   197,   189,   189, -2574, -2574,  1119, -2574,
   -2574, -2574, -2574, -2574, -2574,  2278,   922, -2574,  1122,    29,
     189,  4693,   189, -2574,  1135, -2574, -2574, -2574, -2574, -2574,
     189,  1035,   197,   657,   189,  1204,   189, -2574,  1116, -2574,
    4536, -2574, -2574,   874,  1146,  1157,   189, -2574,  1172, -2574,
   -2574,   422,  1173,  4693,  1188, -2574,  1130,   189,  1103, -2574,
     352,  1082,  1793,    26,  1206, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574,  1210, -2574,   535,   279,   316,   381,    98,   189,
     189,   122, -2574,   189,   940,  1215, -2574,   189,   189, -2574,
    1217,    25,    36,  1222,  1204, -2574, -2574, -2574,   846,   189,
   -2574, -2574, -2574, -2574, -2574, -2574,   189, -2574,  1223,  1226,
   -2574,   189,   144, -2574, -2574, -2574, -2574, -2574, -2574,   189,
   -2574, -2574,   189, -2574, -2574,   532,   532, -2574,  1228, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
    1036,   189,   189,  1237,  1238,  1243, -2574, -2574,   189,   189,
     189, -2574,   189, -2574,  1251, -2574, -2574, -2574, -2574,   230,
   -2574,  1255, -2574,  4693,  1258, -2574,   189, -2574, -2574, -2574,
     189,  1257,  1260,  1260,  4693,   189,   189,   189,   189,   189,
     189, -2574,   189,  3587,  1366,   189,   189, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574,  1366,   189, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,  1263, -2574,
     998,   364, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574,   -61, -2574, -2574, -2574,  1104, -2574,   645,   587,   587,
   -2574, -2574, -2574,  1274, -2574,  1275, -2574, -2574,   -34, -2574,
    1105, -2574, -2574, -2574,  1112, -2574, -2574,  1204, -2574,   189,
     189, -2574,  4693,  4693,  1204, -2574, -2574,  1204, -2574, -2574,
   -2574, -2574,  1204, -2574, -2574,  4693,  1204,   189, -2574, -2574,
    4693, -2574,  1283,   589,  1092,     7, -2574, -2574,  1096,  4693,
      72, -2574, -2574, -2574, -2574, -2574, -2574,  1290,  1294,  1302,
   -2574,  1106, -2574,   534, -2574,   189, -2574, -2574,   619, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
     461, -2574, -2574, -2574, -2574, -2574, -2574,  1111,  1123, -2574,
   -2574,  1241,  1250,  1252, -2574, -2574,  1079, -2574,   189,  1316,
    1093,  4536, -2574,  1204, -2574, -2574,  1322, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574,  4693,  4693,  4693,  4693, -2574, -2574, -2574,  1325,   197,
   -2574, -2574,  1333,  1342,  1150,   189, -2574,   851,  1268, -2574,
    1347, -2574,   483,  1271,  5036,     5,  1355, -2574,  1359, -2574,
    1360, -2574,   288, -2574,  1367,  1368, -2574,  1361, -2574, -2574,
   -2574,   189, -2574,  4536,  4017,  1594,   510,  1373,   376,  1278,
   -2574, -2574, -2574,    34,    76,  1377,  1378,    53,   189,   314,
     436,    33,  4693,   197,  2211,   600,    18,    64,   187,    27,
   -2574,  1365,  1399,  1380, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,   189, -2574,
   -2574, -2574,   189,   189,   189,   189, -2574, -2574,   189,  1204,
     189, -2574,   189,  1366,   189,  1381,  1204, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574,  1413,    77,   452, -2574, -2574,
   -2574,  1415, -2574, -2574, -2574, -2574,  1328, -2574,  1419,  1423,
    1341,  1426, -2574,  1431, -2574,  1434,  1352,  1437,   453,   362,
     464,    62,   567,  1439,   592, -2574, -2574,  1441,  1442,  1445,
   -2574, -2574,  1446, -2574, -2574, -2574, -2574,  1447, -2574, -2574,
    1448, -2574, -2574,  1450, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574,   189,   189, -2574,   189,   617,   189,   189, -2574,  1781,
   -2574,   850,  1453, -2574,  1017,  1458, -2574, -2574,   158,   189,
     189, -2574,  1454, -2574, -2574,  1460,  1013,   189,  1457,   913,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574,  1466,  1470,   189,   189,   189,  1473,
     197,  1480,  1481,  1204,  4693, -2574, -2574, -2574, -2574, -2574,
    1204, -2574, -2574,   189,   189,   189,  4693,   189,  1366,   189,
   -2574,   189, -2574, -2574, -2574, -2574, -2574,  1482,  1483, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574,   176, -2574,   189, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574,  4693,   189,  1204,  1204,   158,   158,   158,
    1204,  1366,   189,  1204, -2574, -2574, -2574,   189, -2574,   534,
    1282,  1489,  1488, -2574, -2574,  1204, -2574,  1337,  1339, -2574,
    1497,  1498, -2574,  1501,  1107,  1464,  1471, -2574,   189,  4491,
     -26,   715, -2574, -2574, -2574,   189,   233,   933, -2574,  1245,
   -2574,  2211,  1246,   474,  1234,   112, -2574, -2574,   189, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,   189,
    1503, -2574, -2574, -2574, -2574,   158, -2574, -2574, -2574, -2574,
   -2574,  4656, -2574, -2574,  1511,  1519,   189,  1535,  1540,  1541,
     632,   632,   -28,  1545,  1549,  1554,  1555,  1276,  1285,  1559,
    1560,  1561,   106,   106,   -28,  1564,  1567,   -28,  1568,  1571,
    5072,  1580,  1581, -2574, -2574,  1586,  1587,   546, -2574,  1589,
    1593,  1595,  1600,   632,   -28,  1604,  1609, -2574,  1613, -2574,
   -2574,  1204,   860,  1165,  1375,    -2,  1376,  1465,  2494,   330,
    1618,   258,  1462,  1517,  1467,  1235,  1588,   409,  1388,  1534,
    1639,  1429,   201,    31,   601,   -10,  4693,  2211,  1610,   -46,
    1401,  1435,  1648,    43, -2574, -2574,   225,  1650,  1651, -2574,
   -2574, -2574,  1653,  1443,    58,  2211,  1449, -2574, -2574, -2574,
     197,  1655,  1658,   189, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574,    17, -2574,  3058, -2574, -2574, -2574,   189,
   -2574,   189, -2574, -2574, -2574, -2574,   189,   189,   189,   376,
    4693, -2574,  1662,  1140, -2574, -2574,   189, -2574, -2574,   189,
    4693,   189, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574,   197,   189, -2574,   189,
     376,  1668,  1673, -2574, -2574,   189,   189, -2574,   197, -2574,
   -2574, -2574,   128,  1674,  1675, -2574, -2574, -2574, -2574, -2574,
     189,   189, -2574, -2574,  1366,   189,   189, -2574, -2574, -2574,
   -2574,  1677,   189, -2574,   189,  1569, -2574,   189, -2574,   189,
    1576, -2574,  1686, -2574,   926,   926,   593,   926,  1687, -2574,
     594, -2574, -2574,  1688,  1689,   623,  1696, -2574,  1702,  1706,
    1697, -2574,   629,   668,  1707,  1709,  1713, -2574, -2574,  1714,
    1717,  1721, -2574,   926,   926,   926,   189, -2574, -2574, -2574,
     189, -2574,   189,   833,  4693, -2574,   189, -2574,  4536,  1204,
   -2574, -2574,  1722, -2574, -2574,  1724, -2574, -2574, -2574, -2574,
    1718,   657, -2574,   189,  1719,   189,   189,   189,  1205, -2574,
    1712,  1729,   189,   189,    83,  1732,   197,   197, -2574,  1204,
     189,  1730,  1734,  1736,  1204,  4693, -2574,   189, -2574, -2574,
   -2574,   189,   189,   189,  1204,  4693,   158, -2574, -2574, -2574,
   -2574,  1366,   189,  1737,   158,   189,   609, -2574,  1740, -2574,
   -2574,  1037,  1831,   189, -2574,   189,  1738,  1746,   189, -2574,
   -2574, -2574,  1744,   924,  3587,  1506,   440,  1507,    61,  4693,
     476, -2574,   403,  1611,    89,   490,  1513,   123, -2574, -2574,
      78,  1584,   650,  1634,   578,  2211,   719, -2574,  1755,  1509,
   -2574,   395, -2574, -2574, -2574, -2574,  2211,  1547, -2574, -2574,
   -2574, -2574, -2574,   189, -2574,   189, -2574, -2574,   189,   189,
   -2574,   189, -2574,   189, -2574, -2574, -2574, -2574,  1563,   189,
   -2574,   189,    46, -2574, -2574,  1757,  1762, -2574,   189,   632,
     632,   632, -2574, -2574, -2574, -2574, -2574, -2574,  1763,   632,
     632,   632,   885, -2574, -2574,   106,   632,   632,   632, -2574,
   -2574,   632,   632,  1765,   632,   632,  1766,   106,  1020, -2574,
    1767,  1768,  1769, -2574,   743, -2574,   756,   824, -2574,  1145,
   -2574,  1493,  1770,  1771,  1772,   106,   106,   -28,  1774,  1775,
     -28,  1776,  1778,  1779,   632,   632, -2574,  1784,   632,   632,
   -2574,  1785, -2574, -2574, -2574, -2574, -2574, -2574,   197, -2574,
   -2574, -2574,  3587,  1065,   197,   189,  1231,  1430,   848, -2574,
   -2574, -2574,   863, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574,  1786,   197,   189, -2574,   197,
    1792,   189,  4693,   197,  1456,  1536,  1556,   145,   149,  1590,
     167,  1474,  1521,  1794,  1800,  1833,  2494,  1834,  1835,  1836,
    1526,  1527,  1159,  1839,   197,   189,  1249,  1701, -2574, -2574,
     197,  4693, -2574, -2574,  4693,   189,     0,  1840,   197,   189,
    1204,   197, -2574,  1841,  4693,  4693,   189, -2574, -2574, -2574,
     197,   197,  4693, -2574, -2574, -2574, -2574, -2574, -2574,  4693,
     189,   197, -2574, -2574, -2574,   189, -2574, -2574,  1842,   189,
    1615,   156,   189,  1621,   189,   170,   189, -2574,   189,  1622,
    1623,   189,   189,   189,   189,   189,   189,   189,   189,    15,
     189,   189,  1624, -2574,   189,   189,   189,   189, -2574,  4693,
    1204,  1851,  1853,  1854,   189,   189,  1204, -2574,   189,   189,
     189,  4693,   376, -2574,   189,   189, -2574, -2574, -2574,  1857,
   -2574, -2574, -2574, -2574, -2574, -2574,  1855,   189,   189, -2574,
     189,   189, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574,  1859,  1861,  1863, -2574, -2574,   926,  1864,  1865,  1869,
   -2574,  1872,  1873,  1875,  1876,  1878, -2574,  1879, -2574, -2574,
   -2574,  1888,  1889,  1891, -2574,  1892,  1893,  1896, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,   189,   189,
     189, -2574, -2574,   189,  1204, -2574, -2574, -2574,   657,   189,
    1204,   189,   189,   189, -2574,   189,   189,  1897,   189,  1899,
    1862,   189,   189, -2574, -2574,  1900,  4693, -2574, -2574, -2574,
     189, -2574, -2574, -2574, -2574,  1204, -2574,  1440,   189,  1440,
     158,  1204,  4693,   189,   189,  1901, -2574, -2574, -2574,   189,
   -2574, -2574, -2574, -2574, -2574,  4693, -2574,  4693,   189,  1902,
   -2574,   534,  1904,  1906,  1908,  1909,  1910,  4693,  1204, -2574,
    4693, -2574,  4693,  4693,  3587,  4693,  1204, -2574,  4693, -2574,
   -2574,  4693, -2574, -2574,  3587,  4693, -2574,  4693,  4693,  3587,
    4693, -2574,  4693,  4693,   189, -2574, -2574, -2574,  4693,  4693,
    4693, -2574, -2574,  4693,  4693, -2574, -2574, -2574, -2574,  4693,
    4693, -2574, -2574, -2574, -2574, -2574,   189,   189, -2574, -2574,
    1903,   189, -2574, -2574,  1912,  1914, -2574,   189, -2574, -2574,
   -2574,   632, -2574, -2574, -2574,  1915,  1916,  1917, -2574, -2574,
     -28,  1919,  1920,  1921,   632, -2574, -2574, -2574, -2574, -2574,
     106, -2574, -2574,  1925,   632,  1926,  1927,  1930,   106,   106,
     -28,  1932,  1933,  1935,  1300, -2574,  1318, -2574,  1417,  1641,
    1936,  1947,  1961,   106,   106,   -28,  1934,  1968,   -28,  1969,
    1647,  1970,  1972,  1973,   106,   106,   -28,  1975,  1976,   -28,
    1977,  1652,  1980,  1981,  1982,   106,   106,   -28,  1984,  1985,
     -28,  1987,  1988,  1989,  1990,   106,   106,   -28,  1992,  1993,
    1994,   106, -2574, -2574, -2574, -2574, -2574,  1996, -2574, -2574,
    1997,   106,  1998,  1999, -2574, -2574,   632, -2574, -2574,  2000,
   -2574,  1204, -2574,  4693,   189, -2574,   189,  4693,   189,  2001,
    1165, -2574, -2574, -2574, -2574, -2574, -2574,  2002, -2574,  4693,
     197,  2003,  4693,  1204, -2574,  2004,  1165,   189,   189,   189,
     189,   189,   189,   189,   189,   189,  2006,  2007, -2574, -2574,
   -2574,  2008, -2574, -2574, -2574,  2010,  2011, -2574, -2574, -2574,
   -2574,   189,  4693,   189,  2013,  1165,   197,  1204,  1204, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
     189,  1366, -2574, -2574,  1204,  1204,   189, -2574, -2574,  1204,
    1204, -2574, -2574, -2574, -2574,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,  1502, -2574,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,  1487,  2015,
     189, -2574,   189,   189,   189,  2012,  2018, -2574, -2574,  1204,
     158, -2574,  2019,  2022, -2574, -2574,  1366,   189, -2574,  2025,
    1204,  4693, -2574, -2574, -2574,  2026, -2574, -2574, -2574, -2574,
     926,   926,   926, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,  1165,
     189, -2574,   189, -2574,   189,  1204,   189, -2574,  1366,   189,
   -2574,   189, -2574,  1884,  2027,  2028, -2574,  2030,   189,   189,
    2033,  1204,  4693, -2574, -2574,   189, -2574,   189, -2574,   158,
    1037,   189,  2034, -2574,   189, -2574, -2574,  3587, -2574, -2574,
    2035,  2038,  2042,  2044,  2045,  1204, -2574,  1037,  1037,  1037,
    1204, -2574,  1037,   158,  1037,  1037,  1204, -2574,  1037,  1037,
    1037,  1204, -2574,  1037,  1037,  1204,  4693,  1037,  1204,  1037,
    1037,  1204,  1037,  1204, -2574, -2574,  2048,  3587,  2049, -2574,
     189, -2574, -2574, -2574, -2574,  2051, -2574, -2574, -2574, -2574,
     632,   106, -2574, -2574, -2574, -2574, -2574, -2574,  2052, -2574,
   -2574,   106,  2053,  2054,  2055,   106,   106,   -28,  2057,  2058,
    2059,  2060,  2061,  2062,   106,   106,   -28,  2064,  2065,  2066,
    2067,  2069,  2070,   106,   106,   -28,  2072,  2073,  2074,   106,
     632,   632,   632,   632,   632,  2076,   632,   632,  2077,   106,
     106,   632,   632,   632,   632,   632,  2078,   632,   632,  2080,
     106,   106, -2574, -2574, -2574, -2574, -2574,  2081, -2574, -2574,
    2082,   106, -2574, -2574, -2574, -2574, -2574,  2083, -2574, -2574,
     106, -2574,   106,  2084, -2574,  2086,  2087, -2574,  4536, -2574,
    1037,  2088,  4693,  1037,   189,  4693,  2090, -2574,  1037, -2574,
   -2574,  1037, -2574,  4693,  2091,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189, -2574, -2574, -2574,  4693,
    1037,   189,  4693,  2092, -2574,  1366,  1366,  4693,  1366,  1366,
    4693,  4693,  1366,  1366,   189,   189,   189,   189,   189,   189,
    1165,   189,   189,   189,  1645,  1672,  1679,  1694,  1704,  1739,
    1773,  1502, -2574,  1777, -2574, -2574,  1165,   189,   189,   189,
     189,  1165,   189,   189,   189,   189,   189,   189,  1204,   189,
    1670,  1165,   189,   189, -2574, -2574,   158,   197,  4693,  4693,
   -2574, -2574, -2574,   158,  1204,  2123, -2574, -2574, -2574, -2574,
     189, -2574, -2574,  1366,   189, -2574, -2574, -2574,  1242,  2125,
    2126, -2574,   189,  2124,  1440, -2574,  1037, -2574, -2574, -2574,
   -2574,  2128, -2574, -2574,  1204,  2131,  2132,  2134,  2135,  4693,
    2136, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574,   158,  1037, -2574,
     158, -2574, -2574,   158, -2574,   158,  2137,  1204,  2139, -2574,
     189, -2574, -2574,   632,   106, -2574,   632,   632,   632,   632,
     632,  2140,   632,   632,   106,   632,   632,   632,   632,   632,
    2141,   632,   632,   106,   632,   632,   632,   632,   632,  2143,
     632,   632,   106,   632, -2574, -2574, -2574, -2574, -2574,   106,
   -2574, -2574,  2173,   632,   632, -2574, -2574, -2574, -2574, -2574,
     106, -2574, -2574,  2176,   632, -2574,   106,  2177, -2574,   106,
   -2574, -2574,   106, -2574, -2574,  1204, -2574,  4693,  1037, -2574,
    2178,  1204,   189, -2574, -2574,  1204,   189, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574,   189,   189,  1037, -2574,
    2179,  1204,   189,  1366, -2574,  1037,   189,  1366,  1037,  1037,
    4693, -2574,   189,  2180,  2180,   189,   189,  2180,  1165,  2180,
   -2574,  4693,  2494,  2181,  2183,  2184,  2185,  2186,  2188, -2574,
     197,  1165,  2180,  2180,   189,   189,  1165,   189,   189,   189,
     189,   189, -2574,  1366,   189,  2189, -2574, -2574,   189,  2180,
     197,    21,  1204,  1204,   197,   158,  2191, -2574, -2574, -2574,
    2192,   189, -2574,  2193,  2195,  1967,   189, -2574, -2574,  2196,
      13,  4693, -2574,  2197,    71,  4693, -2574, -2574, -2574, -2574,
   -2574, -2574,  2199,    13,   189, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574,   106, -2574, -2574,   632, -2574, -2574, -2574, -2574,
   -2574,   106, -2574, -2574,   632, -2574, -2574, -2574, -2574, -2574,
     106, -2574, -2574,   632, -2574,   632,   106, -2574, -2574,   632,
     106, -2574, -2574,   106, -2574, -2574,   189,  1037, -2574,  4693,
    4693,   189,  4693,   189, -2574, -2574, -2574,  4693,  4693,   189,
   -2574, -2574,  4693, -2574, -2574, -2574,  1037,  2200, -2574, -2574,
   -2574,  1165,   189, -2574,  2201, -2574, -2574,  1204,  2202, -2574,
    2204, -2574, -2574, -2574, -2574, -2574,  2205, -2574, -2574,  1165,
     189,  2206, -2574, -2574,   189,  4693, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574,    21,  1894,  2211, -2574, -2574, -2574,   197,
    2207,  2218,  2219, -2574,  2182,  2221,   159,    13, -2574, -2574,
   -2574, -2574,  2222,  4693, -2574, -2574, -2574, -2574, -2574,    13,
   -2574,  2223,   632, -2574,   632, -2574,   632, -2574, -2574,   632,
   -2574,   632, -2574,  4536, -2574,  1037,  1037,   189,  1037,  2225,
    1037,  1037,   189,  1037,   189, -2574, -2574, -2574, -2574,  2226,
   -2574,   189, -2574, -2574,  2229, -2574,   189, -2574, -2574, -2574,
    2227,   189, -2574, -2574, -2574,  1204, -2574, -2574, -2574,  1894,
   -2574,  1905,  1847,  2211, -2574, -2574, -2574,  2242,  2246,  2248,
   -2574, -2574, -2574, -2574,   831,   831, -2574, -2574,  1204, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574,  1037, -2574, -2574,  2249,
   -2574,  3587, -2574, -2574,  2252, -2574,  1165, -2574, -2574,  1165,
     189, -2574, -2574,   189, -2574,  1165,   189, -2574,  4693, -2574,
    1905, -2574,   197, -2574,  2253,  2255, -2574,   189,   189,   189,
     189,    71,  2256,  3587,  1204, -2574,  3587, -2574, -2574,   189,
    2258, -2574,   189,  1037, -2574, -2574, -2574,  2263,  2270,   189,
    2272,   189, -2574, -2574,  1204, -2574, -2574,  1204, -2574, -2574,
    2259, -2574, -2574,  2274,  2276, -2574, -2574,  2279, -2574,  2280,
   -2574, -2574,  1165, -2574,  1165, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2574, -2574,    -3, -2574,  1018,  -890, -1699, -1010,  1826, -2574,
     762,  -364,  2145,   -50,    82, -2574, -2574, -1657,  1612,  2021,
    -872, -1869,  -863,   993,  1599, -2574, -1125, -2574,  -759, -1139,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574,  -453,  -487, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2406, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -1462, -2574, -2574, -2574, -2574, -2574,
    -664, -2574, -2574, -2574, -2574, -2574, -2574,   266, -2574, -2574,
   -2574, -2574,    28,  -667, -1016,  -347, -2574, -2574, -2574, -2574,
   -2574,  -426,  -421, -2574, -2574, -2573, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,  1542, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574, -2574,
   -2574
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1253
static const yytype_int16 yytable[] =
{
      68,   354,   871,  1422,  1901,  1090,  1093,  1116,   105,  1266,
    2045,   900,  2047,   107,   298,  1258,  1259,  1260,    65,    66,
    1968, -1099,  1517,  1120,   644,   575,  1590,  1920,  1595,   791,
     294,   270,  1131,   691,    65,    66,    65,    66,   318,   312,
     794,  1313,   375,   107,   362,  2648,   409,   348,  1499,  1921,
     359,  1076,  1922,   366,  1625,  1626,  1627,   372,    65,    66,
     379,    65,    66,  1923,   382,   384,  1752,  1482,   394,  1095,
    1085,   401,   405,  1096,   627,   408,   906,    65,    66,   412,
     850,  1124,  1704,  1342,   413,   543,  1924,  1493,   757,   414,
     853,    65,    66,   995,  1507,    65,    66,   426,   430,   435,
     436,   440,   442,  2654,  1925,  1721,  1314,   271,    65,    66,
    1714,   776,   107,   260,  1488,   296,  1079,  1152,   446,    65,
      66,  1373,  1424,  1369,  1376,    65,    66,  2660,  1132,  1337,
    1653,   112,  1315,  1567,  1133,    65,    66,   860,  2761,    77,
    1356,  1407,   576,   495,  1719,  1568,  1097,    65,    66,   758,
    1182,   218,   496,   455,    65,    66,   807,    55,   326,    65,
      66,   112,    65,    66,   876,   996,  1889,  1483,   219,  1098,
    1891,   467,   158,    65,    66,   261,   901,   488,   544,    65,
      66,  2320,   509,   363,  1494,    65,    66,  2784,  1894,  1080,
    1153,   107,    65,    66,  1508,   861,   445,   262,  2332,  2333,
    2334,   107,  2649,  2336,   272,  2338,  2339,   907,   327,  2341,
    2342,  2343,  1338,  1316,  2345,  2346,   115,   328,  2349,   273,
    2351,  2352,  1183,  2354,   116,   117,   571,   618,  1480,   877,
     112,   692,  1099,   110,   830,   831,    65,    66,   693,   694,
    1489,  2726,  1425,  1495,  1357,   625,   115,   329,   577,  1722,
     716,   263,  1501,  2729,   116,   117,   385,  1216,   378,   107,
    2655,   651,   652,    78,  1330,  1317,   313,   510,  1370,   518,
    1086,   523,   527,   316,   695,  1081,  1154,   698,   578,   700,
     555,  1125,   274,   107,  1121,  1449,  1753,   702,   705,   314,
     708,   712,   777,   714,   410,   588,   645,  1500,   376,    79,
    1077,  2650,  1001,   724,   311,  1705,   759,   400,  1723,   112,
    1122,   120, -1099,   734,   736,   115,   415,   299,   792,   112,
     107,   628,   240,   116,   117,   902,  1969,   300,  1518,   795,
    1484,  2426,  1100,  1715,  2429,  1134,   779,   780,   782,  2433,
     784,   120,  2434,   390,   787,   788,   767,   632,  1155,  1147,
    1002,  2721,   781,  1087,    67,   800,   802,  1509,  1926,  2656,
     150,  2449,  1654,   803,  1126,   151,   152,  1720,   806,   808,
    1491,   908,    80,   317,   481,   710,   809,   112,  1066,   810,
     482,   696,   590,   770,  1672,   107,  1947,   347,  1511,  1890,
     150,   358,  1676,  1892,   115,   151,   152,   118,   820,   821,
    1952,   112,   116,   117,   115,   825,   826,   827,   330,   828,
     120,  1895,   116,   117,   738,   371,   264,  1870,   303,   483,
    1067,   619,  1738,   835,  1173,  1549,  1217,   836,  1450,   553,
    1709,  1481,   841,   842,   843,   844,   845,   846,   112,   847,
    1066,   430,   851,   852,  1886,   484,  1324,  2517,   773,   600,
     386,   430,   854,   572,  1446,  1502,  1561,  2003,    81,   150,
     391,   633,   115,   265,   151,   152,   558,  1915,  2722,   857,
     116,   117,   529,    65,    66,   739,   573,    65,    66,  2527,
    1128,   110,  1067,  1003,  1246,  1174,   115,   530,   978,   120,
     554,   485,  1157,   601,   116,   117,   174,   979,   980,   120,
    1066,   387,  1451,   112,   392,   393,   883,   884,   388,   531,
     100,    82,   486,  2723,  1059,   745,    65,    66,   110,   304,
     623,   175,  1175,   115,   892,   849,  1178,  1262,   250,   532,
     101,   116,   117,  1474,  1847,   486,   487,  1850,   150,   634,
    1060,   954,  1067,   151,   152,   981,   533,  1452,   150,    56,
     534,  1391,   918,   151,   152,  1068,   858,   120,  1004,  2578,
    1392,  1393,   811,  1092,  1701,  1158,  1739,   591,  1005,   763,
     258,  1069,  1070,  1710,  1447,   726,   747,   535,   536,  2586,
    1089,   120,   268,   102,   992,   949,  2591,  1179,   115,  2594,
    2595,    57,   402,   896,   635,   343,   116,   117,   305,  1006,
    1707,   423,   602,  1011,   740,   334,   150,   306,  1394,    58,
     284,   151,   152,  1678,  1716,   897,   335,  1068,   120,   636,
      65,  1203,   966,   919,   920,  1740,   356,   424,   812,  1184,
     150,   537,   741,  1069,  1070,   151,   152,   624,  1731,    59,
    1117,   538,  1176,   336,   764,   118,   110,  1711,  1010,  1741,
     308,  1159,   938,  1475,  1189,  1591,  1597,  2516,    60,   580,
      65,    66,    61,  1071,  1072,  1088,   110,   150,  1101,   103,
     581,   915,   151,   152,  1061,    62,   108,  1068,   982,   983,
     921,   333,   118,   120,  1702,  1603,   922,  1332,   727,   403,
    1185,  1611,  1712,  1069,  1070,  1138,   310,   582,   813,  1139,
    1140,  1141,  1142,   539,   540,  1143,   361,  1145,  2674,  1146,
     430,  1148,   397,  1118,   110,  1190,  1592,  1598,   344,   559,
    1708,   337,   368,  1160,   864,  1071,  1072,  2684,  1062,   868,
    1615,   369,   150,   753,  1717,   923,   549,   151,   152,  1209,
     560,  1395,  1396,   765,  1180,  1318,  1604,   374,  1799,  1728,
     398,   924,  1612,   984,  1063,   561,   370,  1800,  1801,   338,
     111,  1810,   407,   985,   986,   104,   925,   869,   987,   404,
    1811,  1812,   926,   419,   541,   583,   417,   927,  1200,  1201,
    1573,  1202,  1204,  1206,  1207,  1071,  1072,   916,   814,    65,
      66,  1616,  1352,   815,   988,   421,  1219,  1220,  2048,  1119,
     456,  2059,   345,  1224,  1225,  1802,  2737,  2738,  1729,  2740,
     118,  2742,  2743,   584,  2745,   443,  1397,   113,  1813,   550,
    1353,   865,   468,  1231,  1232,  1233,  1398,  1399,   339,  1821,
     118,  1400,   928, -1252,    65,    66,    63,  1631,  1822,  1823,
    1241,  1242,  1243,   469,  1245,   430,  1247,  1186,  1248,    65,
      66,   929,  1732,   551,  1210,  1211,   930,  1401,   931,   562,
    2206,  2296,  2297,  2298,   340,   967,   968,  2772,   479,  1251,
    1486,  1253,  1191,  1593,  1599,  1730,  2214,  1487,   118,  1319,
     341,  1255,   585,   119,   932,   933,  1824,   276,   430,  1263,
    1733,   604,   934,   491,  1265,    65,    66,  1673,  1991,  1765,
    1766,   866,  2688,  1605,   493,  2233,   277,  2105,   278,  1613,
     935,  1278,   381,   969,  2804,  1282,   285,  1227,   563,  1725,
    2699,   520,  1323,  1325,  1328,  1228,  1726,  2118,   242,   717,
    1333,   546,   437,  1320,   586,  1339,    65,    66,  1803,  1804,
    1382,   557,  2155,  1412,   547,  2158,  1340,  1767,  1617,  1734,
    1327,  1814,  1815,  2166,  1252,  1871,  2169,   243,   548,  1321,
     567,   605,   564,  1348,  2177,   718,   936,  2180,  1584,  1585,
    1874,   565,   799,   868,  2187,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   568,   606,   438,   570,  1692,  1735,  2299,
    2608,   869,   595,  1805,   685,  1413,    65,    66,   719,  1825,
    1826,  1213,  1214,  1806,  1807,  1223,  1816,   279,  1808,   244,
    1485,   638,   160,   589,  1785,  1786,  1817,  1818,    65,    66,
     241,  1819,   607,   596,   245,   266,   970,   971,  1872,   639,
    2778,  1510,   301,   598,  1809,   617,  2781,   621,   286,   622,
    1516,  1681,  1682,  1875,   287,   626,   288,  1820,    65,    66,
    1863,    65,    66,   364,   630,   703,  1544,   642,  1545,  1693,
    1768,  1769,  1787,  1546,  1547,  1548,   280,   108,  1414,  1415,
     396,   439,   647,  1554,  1827,   686,  1555,   251,  1557,   648,
    1586,  1587,  1873,  1416,  1828,  1829,   246,   290,  2287,  1830,
      65,  1277,   320,  2818,  1559,  2819,  1560,  1876,    65,    66,
     715,   972,  1564,  1565,   653,   110,   720,   690,   640,  1588,
     281,   973,   974,    65,    66,  1831,  1683,  1571,  1572,   282,
     701,   430,  1574,  1575,  1552,  1553,  1417,   247,   704,  1577,
     722,  1578,  1694,  1695,  1580,  1770,  1581,   248,  1634,  1832,
    1833,   723,   975,  1907,  1908,  1771,  1772,  1696,    65,    66,
     732,   111,  1419,  1420,    94,   365,   725,  2319,   729,   457,
     458,   459,   460,   461,   462,   252,   687,   463,   464,   465,
     466,    95,   731,  1628,   838,   839,  1773,  1629,   253,  1630,
     321,  2337,   737,  1633,   688,   743,    70,  1834,    65,    66,
    1697,   761,    71,   322,   762,  1788,  1789,   785,  1639,   786,
    1642,   789,  1644,  1645,  1646,  1648,   797,   804,   113,  1651,
    1652,   805,   818,   254,    65,    66,  1867,  1660,   819,   447,
    2468,   822,   823,   733,  1666,    65,    66,   824,  1667,  1668,
    1669,    72,    65,    66,  1912,   829,  2481,  1463,   430,  1674,
     832,  2486,  1677,   834,  2371,  1647,   427,   291,   855,    96,
    1687,   429,  1688,  2380,   856,  1690,   863,    73,   872,   874,
     649,   650,  2389,   255,   881,  1464,   879,   894,  1465,   118,
    1790,  1466,    84,   899,   119,   910,   256,   904,   323,   911,
    1791,  1792,  2510,  1641,   939,   292,   913,   914,   941,   947,
     707,   324,   448,    97,  2122,  2123,   940,   943,  1467,   945,
    1743,   950,  1744,    74,   952,  1745,  1746,   956,  1747,   961,
    1748,  1793,  2131,  2132,   449,   450,  1750,   963,  1751,  2600,
    1835,  1836,  2603,   451,  2605,  1757,   964,  1468,  1679,    98,
    1469,   965,   977,   768,   771,   774,   976,  2617,  2618,   989,
     997,   452,  2124,   999,  1000,  1009,  1699,   293,    75,    65,
      66,   453,  1007,  1008,  2632,   427,   428,   429,  1065,  1074,
    2133,  1083,  1135,  1084,  1137,  1149,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,  2500,  1837,  1136,  1151,    85,  1162,
    1864,  2504,  1866,  1868,  1164,  1838,  1839,  1163,  1165,  1166,
    1167,  2140,  2141,    65,    66,  1869,  1168,  1419,  1420,  1169,
    1170,    86,  1171,  1188,  1879,    87,  1193,  1194,  1882,  1195,
    1196,  1268,  1197,  1198,  2606,  1199,  1840,  1212,  2604,    65,
      66,  1885,  1215,  1419,  1420,  1222,  1221,  1470,    84,  1226,
    1229,  2616,  1911,  1913,  1230,  2526,  2621,  1234,  2528,  2142,
    2630,  2529,  1919,  2530,  1236,  1237,  1930,  1249,  1250,  1455,
      65,    66,  1270,  1936,  1269,  2125,  2126,  1272,    88,  1273,
    1471,  1274,  1280,  1275,  1862,  1276,   108,  1941,  1341,  1281,
    1329,  1331,  1943,  2134,  2135,  1345,  1945,  1456,  1948,  1949,
    1457,  1951,  1953,  1954,  1346,  1957,  1472,  1335,  1960,  1961,
    1962,  1963,  1964,  1965,  1966,  1967,  1970,  1972,  1973,    89,
    1349,  1975,  1976,  1977,  1978,  1350,  1351,    90,    91,  1359,
    1458,  1984,  1985,  1360,  1364,  1987,  1988,  1989,  2254,  1361,
    1362,  1992,  1993,  1365,  1366,  1367,  1368,  2238,  1374,  2255,
    2127,  1375,  1427,  1377,  1996,  1997,  1378,  1998,  1999,  1459,
    2128,  2129,  1460,  2686,  2687,  1384,  1386,  2690,  2136,  2692,
     111,  1387,  1389,  1402,    85,  1105,  2256,  1403,  2137,  2138,
    1404,  2697,  2698,  1106,  1453,  1405,  2702,  2703,  1408,  1107,
    2706,  2130,  2143,  2144,  1409,  2707,  2708,    86,  1410,  1423,
    1426,  2044,  2290,  1448,  1454,  2019,  2020,  2021,  1473,  2139,
    2022,  1108,  1476,  2639,  2257,  2024,  2027,   962,  2029,  2030,
    2031,  1477,  2032,  2033,  1478,  2035,  1479,   113,  2038,  2039,
    1492,  1496,  1497,  1498,  1503,  1109,  1504,  2042,  1505,  1514,
    1506,  1048,  1515,  1110,  2305,  2046,  1512,  1551,   470,  2747,
    2051,  2052,  2748,  1562,    88,  1049,  2054,  2751,  1563,  1569,
    1570,  1576,  1579,  2754,  1050,  2057,   471,  2145,  2757,  1582,
    1583,  1104,  1596,  1601,  1602,  1051,  1129,  2146,  2147,  1461,
    1607,  1610,  1111,   472,    65,    66,  1914,  1608,  1419,  1420,
    1112,  1609,  1619,   119,  1620,    89,   473,  1621,  1649,  1622,
    2026,  2086,  1623,    90,    91,  1624,  1052,  1636,  2148,  1637,
    1638,  1643,  1462,  1650,  1661,   474,  2777,  1656,  1662,   475,
    1663,  1675,  1689,  2094,  2095,  1680,  -454,  1053,  2097,  1691,
    1700,  1703,   476,  1713,  2100,  1724,  1113,  1718,  1727,  1736,
    1742,  1755,  2799,  1737,  1749,  2802,  1756,  1761,  1114,  1780,
    1783,  1841,  1794,  1796,  1798,  1842,  1843,  1844,  1848,  1849,
    1887,  1851,  1852,  1853,  1115,  2813,  2071,  1208,  1856,  1896,
    1859,  1877,   477,  2258,  1054,  2259,  2077,  1881,  1898,  2820,
    1888,  2082,  2821,  2822,  1899,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,  1055,  1893,  1685,  1897,  1900,  1902,  1903,
    1904,  1905,  1906,  1909,  1928,  1946,  1933,  1944,  1235,  2260,
     108,  1950,  1958,  1959,  1974,   745,  1981,  1982,  1983,  1995,
    1056,  2201,  1994,  2202,  2000,  2204,  2001,  2002,  2037,  2004,
    2005,  2453,  2454,  2006,  2456,  2457,  2007,  2008,  2460,  2461,
    2009,  2010,  2011,  2012,  2215,  2216,  2217,  2218,  2219,  2220,
    2221,  2222,  2223,  2013,  2014,  2015,  2308,  2016,  2017,  1057,
    2018,  1058,  2034,  2036,  2040,  2053,  2058,  2096,  2229,  2060,
    2231,  2061,   746,  2062,  2063,  2064,   747,  2098,  2099,  2149,
    2102,  2103,  2104,  2106,  2107,  2160,  2108,  2237,   430,  2111,
    2171,  2113,  2114,  2241,   111,  2115,  2119,  2120,  2156,  2508,
    2121,  2150,  2244,  2245,  2246,  2247,  2248,  2249,  2250,  2251,
    2252,  2253,  2151,   748,  2266,  2267,  2268,  2269,  2270,  2271,
    2272,  2273,  2274,  2275,  2276,  2277,  2152,  2280,  2712,  2281,
    2282,  2283,  2157,  2645,  2159,  2161,  1372,  2162,  2163,  2167,
    2168,  2495,  2170,   430,  2291,  2172,  2173,  2174,  2178,  2179,
     749,   113,  2181,  2182,  2183,  2184,  2188,  2189,   817,  2190,
    2192,  2193,  2195,  2196,  2472,  2198,  2205,  2207,  2210,  2213,
    2224,  2225,  2792,  2226,  2227,  2228,  2284,  2300,  2232,  2301,
    2279,  2302,  2285,  2304,  2288,   430,  2306,  2289,  2307,  2292,
    2295,  2473,  2309,  2310,  2311,  2312,  2313,  2314,  2474,  2322,
    2326,   750,  2317,  2327,  2318,   751,  2712,  2328,  2321,  2329,
    2330,  2323,  2356,  2475,  2359,  2361,  2364,   119,  2366,  2367,
    2368,  2372,  2373,  2476,  2374,  2375,  2376,  2377,  2381,  2382,
     752,  2383,  2384,   753,  2385,  2386,  2390,  2391,  1513,  2392,
    2399,  2402,  2410,   754,  2413,  2416,  2417,  2419,  2422,  2590,
    2423,  2424,  2427,  2593,  2432,  2436,  2452,  2360,  2477,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,  2506,  2515,  2627,
    2512,  2513,  2478,  2518,  1558,  2520,  2480,  2521,  2522,  2325,
    2523,  2525,  2531,  2533,  2542,  2551,  1566,  2560,  2425,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,  2566,   295,  2358,
    2570,  2573,  2579,  2587,  2598, -1115,  2609,  2610,  2719,  2611,
    2612,  2613,  2614,  2725,  2629,  2640,  2258,  2641,  2643,  2644,
    2647,  2430,  2653,  2659,  2685,  2691,  2762,  2694,  2695,  2696,
    2701,  2716,  2437,  2438,  2439,  2440,  2441,  2442,  2443,  2444,
    2445,  2446,  2447,  2717,  2718,  2720,  2727,  2730,  2450,  2741,
    2749,  2755,   430,   430,  2752,   430,   430,  2768,  2770,   430,
     430,  2462,  2463,  2464,  2465,  2466,  2467,  2764,  2469,  2470,
    2471,  2765,  2766,  2773,  1657,  1658,  2776,   837,  2786,   444,
    2787,  2793,  2801,  2812,  2482,  2483,  2484,  2485,  2805,  2487,
    2488,  2489,  2490,  2491,  2492,  2806,  2494,  2808,  2814,  2498,
    2499,  2815,   654,   655,  2816,  2817,  2709,  2763,  2759,  2479,
    1172,     0,     0,     0,     0,     0,     0,  2507,     0,     0,
     430,  2509,     0,     0,  1105,  2511,     0,     0,     0,  2514,
       0,     0,  1106,     0,     0,     0,   713,     0,  1107,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   507,
       0,   514,   517,     0,   522,   526,     0,     0,     0,   656,
    1108,     0,     0,     0,     0,   657,     0,     0,     0,     0,
       0,     0,   658,     0,   659,     0,     0,  2534,  1774,   660,
       0,     0,   661,   593,  1109,     0,     0,     0,   662,     0,
    1784,     0,  1110,     0,     0,   798,     0,     0,     0,   663,
       0,     0,   609,   615,     0,   664,     0,     0,  1845,  1846,
       0,     0,     0,     0,   665,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     666,  1111,     0,     0,     0,     0,     0,     0,     0,  1112,
       0,     0,     0,     0,     0,     0,   699,     0,     0,  2581,
       0,   667,     0,  2583,     0,     0,  1860,     0,   709,     0,
       0,     0,  1865,  2584,  2585,     0,   668,     0,     0,  2589,
     430,     0,     0,  2592,   430,     0,   669,   670,   730,  2597,
       0,     0,  2601,  2602,  1878,  1113,     0,  1880,     0,     0,
       0,  1884,     0,     0,     0,     0,     0,  1114,   671,     0,
       0,  2619,  2620,     0,  2622,  2623,  2624,  2625,  2626,     0,
     430,  2628,  1910,  1115,     0,  2631,     0,     0,  1916,     0,
       0,   672,     0,     0,     0,     0,  1929,     0,  2642,  1932,
       0,     0,     0,  2646,     0,   673,     0,   674,  1937,  1938,
       0,     0,     0,     0,     0,     0,     0,     0,   882,  1942,
     161,  2661,   675,   162,  1428,   887,     0,   676,   888,     0,
       0,     0,     0,   889,   677,     0,     0,   891,     0,     0,
       0,   678,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1429,     0,   163,     0,     0,     0,     0,   833,   679,
    1355,   164,     0,  2673,     0,     0,     0,     0,  2677,   840,
    2679,     0,   680,   681,     0,   682,  2682,   221,   848,     0,
       0,     0,     0,     0,     0,  1430,     0,     0,     0,  2689,
       0,  1431,  1406,     0,     0,     0,     0,  1432,     0,   222,
       0,     0,   223,     0,   955,     0,     0,  2700,     0,     0,
       0,  2704,     0,  2736,     0,   683,  1433,     0,     0,     0,
       0,     0,   165,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2724,     0,     0,   224,  1434,     0,     0,
       0,     0,     0,   225,     0,     0,     0,   885,   886,     0,
       0,     0,  1435,     0,   226,   227,     0,     0,     0,     0,
     890,   228,     0,     0,  2739,   893,     0,     0,     0,  2744,
       0,  2746,     0,   166,   905,     0,     0,     0,  2750,     0,
       0,     0,     0,  2753,  1436,   229,     0,     0,  2756,     0,
       0,   167,   168,     0,     0,     0,     0,     0,   169,     0,
     170,     0,     0,   230,     0,     0,     0,     0,     0,     0,
       0,  2767,  2769,     0,     0,   107,     0,   231,   232,     0,
    1144,     0,     0,  1437,   233,     0,     0,  1150,   171,     0,
     108,     0,     0,     0,     0,     0,     0,  2779,  1438,     0,
    2780,     0,     0,  2782,     0,   234,   957,   958,   959,   960,
    1439,   109,     0,     0,  2788,  2789,  2790,  2791,     0,     0,
       0,     0,     0,  2110,     0,     0,  2800,     0,   110,  2803,
       0,  2116,  2117,     0,     0,     0,  2807,  1440,  2809,     0,
       0,     0,     0,     0,   235,     0,  2153,  2154,     0,  1441,
       0,  1442,  1443,     0,   172,     0,     0,  2164,  2165,     0,
       0,     0,     0,     0,     0,     0,     0,  1103,  2175,  2176,
       0,     0,     0,  2775,   111,     0,     0,     0,  2185,  2186,
       0,     0,     0,     0,  2191,     0,     0,     0,     0,     0,
       0,  1444,     0,   112,  2194,     0,     0,   236,     0,     0,
       0,     0,     0,     0,  1238,  2795,     0,   237,  2798,     0,
       0,  1240,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   525,     0,     0,
       0,   113,     0,     0,     0,     0,   238,     0,     0,     0,
       0,     0,   108,     0,     0,     0,     0,     0,  2209,     0,
       0,     0,     0,     0,     0,     0,  1256,  1257,     0,     0,
       0,  1261,     0,     0,  1264,     0,     0,     0,     0,     0,
     114,     0,     0,     0,     0,     0,  1271,     0,   115,     0,
     110,     0,     0,     0,  2234,     0,   116,   117,     0,     0,
       0,     0,   118,     0,     0,     0,     0,   119,  1758,  1759,
    1760,     0,     0,     0,     0,     0,     0,     0,  1762,  1763,
    1764,     0,     0,     0,     0,  1775,  1776,  1777,     0,     0,
    1778,  1779,     0,  1781,  1782,     0,   111,     0,     0,  1239,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1244,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1854,  1855,     0,     0,  1857,  1858,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   120,     0,     0,     0,     0,  1254,     0,
       0,     0,  1411,   113,     0,     0,     0,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,     0,     0,     0,
       0,     0,   150,     0,     0,     0,     0,   151,   152,     0,
    1519,     0,     0,     0,     0,  1520,     0,     0,     0,     0,
       0,     0,     0,     0,   118,     0,     0,     0,     0,   119,
       0,     0,     0,     0,  2363,     0,  1344,  1521,  1522,     0,
    1523,  1524,     0,     0,  2365,     0,     0,     0,  2369,  2370,
       0,  1525,     0,     0,     0,     0,     0,  2378,  2379,     0,
       0,     0,     0,  1526,  1527,     0,  2387,  2388,     0,     0,
       0,  1528,  2393,     0,  1529,     0,     0,     0,     0,     0,
       0,     0,  2403,  2404,     0,     0,     0,     0,     0,     0,
     350,     0,  1530,  2414,  2415,     0,     0,   351,     0,  1531,
    1532,     0,     0,  1533,  2418,     0,     0,     0,     0,     0,
       0,  1490,     0,  2420,     0,  2421,     0,     0,     0,     0,
       0,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1635,     0,     0,     0,  1534,  1550,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1556,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1659,     0,     0,     0,     0,  1664,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1670,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1535,     0,     0,     0,     0,     0,  1536,     0,     0,     0,
       0,     0,     0,     0,     0,  2501,     0,     0,     0,     0,
       0,     0,     0,  1537,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1538,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1632,
    1539,  1540,     0,     0,     0,     0,     0,  2536,     0,     0,
    2101,     0,     0,     0,     0,     0,  1640,  2545,     0,     0,
       0,  1541,     0,  2109,     0,     0,  2554,     0,     0,     0,
       0,     0,     0,  2112,     0,  2563,     0,     0,     0,     0,
    1665,   352,  2565,     0,   353,     0,     0,     0,     0,     0,
    1671,     0,     0,  2569,     0,     0,     0,     0,     0,  2572,
       0,     0,  2574,     0,     0,  2575,  1542,  1686,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1698,
       0,     0,     0,     0,  1706,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2197,     0,     0,     0,     0,
       0,     0,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
       0,     0,     0,     0,     0,     0,     0,     0,  2615,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1931,     0,     0,     0,     0,     0,     0,  2633,     0,
       0,     0,  2638,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2662,     0,     0,     0,     0,
       0,     0,     0,     0,  2664,     0,     0,     0,     0,     0,
       0,     0,     0,  2666,     0,     0,     0,     0,     0,  2669,
       0,     0,     0,  2671,     0,     0,  2672,  1861,     0,     0,
       0,  1980,     0,     0,     0,     0,     0,  1986,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1883,     0,     0,
       0,     0,     0,     0,     0,     0,   108,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1917,     0,     0,  1918,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1934,
    1935,     0,     0,     0,   110,     0,     0,  1939,     0,     0,
       0,     0,     0,     0,  1940,  2023,     0,  2715,     0,     0,
       0,  2028,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2043,     0,     0,     0,
     111,     0,  2049,     0,  1979,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1990,     0,     0,  2362,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2066,
       0,     0,     0,     0,     0,     0,     0,  2073,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,     0,  2394,
    2395,  2396,  2397,  2398,     0,  2400,  2401,     0,     0,     0,
    2405,  2406,  2407,  2408,  2409,     0,  2411,  2412,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2785,     0,     0,  2025,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2041,     0,     0,     0,     0,     0,     0,   118,     0,
       0,     0,     0,   119,     0,     0,     0,  2050,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2055,     0,  2056,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2065,     0,     0,  2067,     0,  2068,  2069,  2070,
    2072,     0,     0,  2074,     0,     0,  2075,     0,     0,  2076,
    2078,     0,  2079,  2080,  2081,  2083,     0,  2084,  2085,     0,
       0,     0,     0,  2087,  2088,  2089,     0,     0,  2090,  2091,
       0,     0,  2199,     0,  2092,  2093,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2212,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,     0,     0,     0,     0,     0,  2235,  2236,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2239,  2240,     0,     0,     0,
    2242,  2243,  2535,     0,     0,  2537,  2538,  2539,  2540,  2541,
       0,  2543,  2544,     0,  2546,  2547,  2548,  2549,  2550,     0,
    2552,  2553,     0,  2555,  2556,  2557,  2558,  2559,     0,  2561,
    2562,     0,  2564,     0,     0,     0,     0,     0,     0,     0,
    2286,     0,  2567,  2568,     0,     0,     0,     0,  2200,     0,
       0,  2293,  2203,  2571,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2208,     0,     0,  2211,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1012,  1013,  1014,
       0,     0,     0,     0,     0,     0,  2303,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2230,     0,     0,
       0,     0,  2315,     0,     0,     0,  1015,  1016,     0,     0,
    1017,     0,     0,  1018,     0,     0,     0,     0,     0,     0,
    1019,     0,     0,     0,  1020,     0,  2331,     0,     0,     0,
       0,  2335,  1021,  1022,     0,   108,     0,  2340,     0,     0,
    1023,  1024,  2344,     0,     0,     0,  2347,     0,     0,  2350,
       0,     0,  2353,  2278,  2355,     0,     0,     0,  1025,     0,
       0,     0,     0,     0,  1026,     0,     0,     0,  1027,  1028,
       0,     0,  1029,     0,     0,     0,  2294,     0,     0,     0,
       0,     0,   498,   499,  2663,     0,   500,     0,     0,  1030,
       0,     0,     0,  2665,     0,     0,     0,     0,     0,     0,
       0,     0,  2667,     0,  2668,     0,     0,     0,  2670,   501,
    1031,     0,     0,     0,     0,     0,     0,     0,     0,   111,
       0,   610,   108,     0,     0,     0,     0,  2316,     0,     0,
       0,     0,     0,  1032,     0,     0,     0,     0,     0,     0,
       0,     0,  2324,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1033,     0,     0,
       0,     0,   611,     0,     0,     0,     0,     0,     0,     0,
       0,  2348,     0,     0,     0,     0,   113,     0,     0,     0,
       0,     0,  2357,     0,     0,     0,     0,  1034,   502,  1035,
       0,     0,     0,     0,     0,  1036,  1037,     0,     0,     0,
       0,  2731,     0,  2732,     0,  2733,   111,   503,  2734,     0,
    2735,  1038,  1039,     0,     0,     0,     0,     0,     0,     0,
     612,     0,  1040,  1041,     0,     0,     0,     0,     0,   504,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2493,
       0,     0,   119,     0,     0,     0,     0,     0,  1042,     0,
    1043,     0,     0,     0,     0,  2505,     0,     0,     0,     0,
       0,     0,  1044,   113,  1045,     0,     0,     0,     0,     0,
    1046,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     613,     0,     0,     0,     0,  2519,     0,  2428,     0,     0,
    2431,     0,     0,     0,     0,   505,     0,     0,  2435,     0,
       0,     0,     0,     0,  1047,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2448,     0,     0,  2451,  2532,     0,
       0,     0,  2455,     0,   108,  2458,  2459,     0,     0,   119,
       0,     0,     0,     0,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   110,   506,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2502,  2503,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2576,     0,     0,     0,
       0,     0,  2580,     0,     0,     0,  2582,     0,   614,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   111,     0,
       0,     0,  2588,     0,  2524,     0,     0,     0,     0,     0,
       0,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,     0,
       0,  1283,  1284,  1285,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2636,  2637,   113,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1286,  1287,     0,     0,  1288,     0,     0,     0,     0,     0,
       0,  1289,     0,     0,  1290,     0,     0,     0,  1291,     0,
       0,     0,     0,     0,     0,     0,  1292,  1293,     0,     0,
       0,     0,  2577,     0,  1294,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   118,     0,     0,     0,
       0,   119,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1295,  1296,     0,  2596,  1297,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2607,     0,     0,     0,
       0,     0,     0,  1298,     0,     0,     0,     0,  2693,     0,
     108,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1299,     0,     0,     0,     0,     0,
       0,     0,   516,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2652,  1300,     0,     0,
    2658,   512,     0,     0,     0,   108,  1301,     0,     0,     0,
       0,     0,     0,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,     0,   108,  1343,   111,     0,     0,     0,     0,     0,
       0,  1302,     0,  1303,  2675,  2676,  2758,  2678,     0,  1304,
    1305,     0,  2680,  2681,     0,     0,     0,  2683,     0,     0,
       0,     0,     0,     0,     0,     0,  1306,     0,     0,  2771,
       0,     0,     0,     0,     0,     0,     0,  1307,     0,   111,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2705,   113,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1308,     0,  1309,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1310,  2796,   111,     0,  2728,     0,
       0,     0,     0,     0,  1311,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2810,   113,     0,  2811,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,  1312,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   119,     0,     0,     0,  2774,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2783,     0,     0,   513,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2794,   119,
       0,  2797,     0,     0,     0,     0,     0,     0,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,     1,
       0,     0,     2,     0,     0,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,     0,
       0,     0,     0,     5,     6,     0,     7,     8,     9,     0,
       0,     0,     0,     0,     0,   177,    10,     0,   178,     0,
       0,   179,     0,    11,     0,    12,    13,     0,     0,     0,
       0,     0,     0,     0,     0,    14,    15,     0,     0,     0,
     180,     0,   181,   182,   183,     0,     0,     0,     0,     0,
       0,     0,   184,     0,   185,     0,     0,     0,    16,   186,
       0,   187,   188,   189,     0,     0,    17,     0,     0,   190,
       0,   191,     0,     0,     0,     0,     0,     0,     0,    18,
       0,     0,     0,    19,     0,     0,    20,     0,     0,     0,
      21,    22,     0,     0,     0,     0,     0,    23,     0,     0,
       0,   192,     0,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,     0,   193,
      26,    27,    28,     0,     0,    29,    30,   194,     0,   195,
     196,     0,     0,   197,     0,     0,   990,   198,     0,   199,
      31,   991,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    32,    33,    34,
       0,   200,   201,     0,     0,     0,   202,     0,     0,     0,
       0,    35,     0,    36,     0,     0,   203,  1380,     0,     0,
      37,     0,     0,     0,    38,     0,     0,     0,    39,     0,
      40,     0,    41,   204,   205,     0,     0,    42,     0,     0,
       0,   206,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    43,     0,     0,     0,     0,     0,    44,     0,     0,
       0,     0,     0,     0,     0,     0,   207,     0,   208,     0,
       0,     0,    45,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,     0,    48,     0,     0,     0,
       0,     0,    49,   209,     0,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   210,   211,
       0,     0,     0,     0,     0,     0,     0,   212,     0,     0,
       0,     0,     0,     0,   213,     0,    52,     0,     0,     0,
     214,     0,   215,    53,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,     0,     0,     0,     0,     0,     0,     0,   216,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,  1381
};

static const yytype_int16 yycheck[] =
{
       3,    51,   489,  1013,  1466,   669,   670,   674,    11,   899,
    1667,     4,  1669,     4,     5,   887,   888,   889,     3,     4,
       5,     0,     5,     5,     5,    21,  1165,    27,  1167,     4,
      33,    58,     5,     4,     3,     4,     3,     4,    41,    62,
       4,    67,    32,     4,     5,    32,     4,    50,     5,    49,
      53,    17,    52,    56,  1193,  1194,  1195,    60,     3,     4,
      63,     3,     4,    63,    67,    68,    20,    36,    71,    36,
      17,    74,    75,    40,     5,    78,     4,     3,     4,    82,
     444,    17,    21,   955,    87,   218,    86,   133,    62,     5,
     454,     3,     4,    88,    36,     3,     4,   100,   101,   102,
     103,   104,   105,    32,   104,    27,   132,   134,     3,     4,
      21,    13,     4,     5,   124,    33,    40,    40,   121,     3,
       4,   984,   124,    17,   987,     3,     4,  2533,   101,    17,
      47,   122,   158,     5,   107,     3,     4,   198,  2711,   291,
     168,  1004,   138,   172,    21,    17,   113,     3,     4,   123,
      88,    84,   181,   156,     3,     4,    12,    67,    51,     3,
       4,   122,     3,     4,   198,   160,    21,   136,   101,   136,
      21,   174,    33,     3,     4,    67,   169,   180,   311,     3,
       4,  2050,   185,   144,   230,     3,     4,  2760,    21,   113,
     113,     4,     3,     4,   136,   256,   114,    89,  2067,  2068,
    2069,     4,   189,  2072,   231,  2074,  2075,   135,   101,  2078,
    2079,  2080,   100,   239,  2083,  2084,   207,   110,  2087,   246,
    2089,  2090,   160,  2092,   215,   216,    62,     4,    27,   263,
     122,   202,   199,    57,     4,     5,     3,     4,   209,   210,
     250,  2647,   244,   289,   272,   248,   207,   140,   244,   171,
     300,   143,    27,  2659,   215,   216,     4,    99,   126,     4,
     189,   264,   265,     4,   931,   291,   289,   185,   162,   187,
     217,   189,   190,   199,   245,   199,   199,   280,   274,   282,
     198,   217,   309,     4,   266,    27,   240,   290,   291,   312,
     293,   294,   194,   296,   252,   213,   277,   254,   288,    40,
     266,   288,    14,   306,    38,   244,   280,   202,   230,   122,
     292,   302,   291,   316,   317,   207,   232,   308,   293,   122,
       4,   252,    67,   215,   216,   318,   311,   318,   311,   293,
     299,  2200,   299,   244,  2203,   308,   339,   340,   341,  2208,
     343,   302,  2211,   192,   347,   348,    67,     5,   271,   713,
      62,   192,   230,   300,   299,   358,   359,   299,   358,   288,
     351,  2230,   279,   366,   300,   356,   357,   244,   371,   372,
    1037,   299,   113,   299,   192,   293,   379,   122,    64,   382,
     198,   352,    16,    67,  1256,     4,   230,   299,  1055,   244,
     351,   299,  1264,   244,   207,   356,   357,   221,   401,   402,
     230,   122,   215,   216,   207,   408,   409,   410,   301,   412,
     302,   244,   215,   216,    62,   299,   308,  1427,    71,   237,
     106,   198,    27,   426,    62,  1089,   268,   430,   170,     5,
      27,   230,   435,   436,   437,   438,   439,   440,   122,   442,
      64,   444,   445,   446,  1454,   263,   213,  2316,    67,    44,
     198,   454,   455,   289,   124,   230,  1120,  1596,   199,   351,
     309,   119,   207,   355,   356,   357,   200,  1477,   309,   105,
     215,   216,    45,     3,     4,   123,   312,     3,     4,  2348,
     293,    57,   106,   195,   848,   123,   207,    60,     5,   302,
      66,   309,    40,    88,   215,   216,     5,    14,    15,   302,
      64,   249,   244,   122,   353,   354,   509,   510,   256,    82,
      40,   252,   353,   354,     4,    62,     3,     4,    57,   172,
       6,   148,   160,   207,   527,   443,    62,   891,    16,   102,
      60,   215,   216,   124,  1397,   353,   354,  1400,   351,   197,
      30,   591,   106,   356,   357,    62,   119,   289,   351,    12,
     123,     5,   555,   356,   357,   241,   192,   302,   270,  2428,
      14,    15,    30,   127,   124,   113,   171,   201,   280,    34,
     236,   257,   258,   170,   244,   153,   123,   150,   151,  2448,
     266,   302,     5,   113,   634,   588,  2455,   123,   207,  2458,
    2459,    54,    79,     4,   252,     4,   215,   216,   251,   311,
     124,     5,   197,   653,   252,    37,   351,   260,    62,    72,
      67,   356,   357,     4,   124,   533,    48,   241,   302,   277,
       3,     4,   625,     4,     5,   230,   236,    31,    96,    62,
     351,   204,   280,   257,   258,   356,   357,   123,  1305,   102,
      40,   214,   280,    75,   109,   221,    57,   244,   651,  1316,
       4,   199,   570,   244,    62,    62,    62,  2314,   121,    37,
       3,     4,   125,   349,   350,   668,    57,   351,   671,   199,
      48,   137,   356,   357,   164,   138,    19,   241,   195,   196,
      61,     4,   221,   302,   244,    62,    67,   213,   266,   176,
     123,    62,   289,   257,   258,   698,    89,    75,   166,   702,
     703,   704,   705,   276,   277,   708,     0,   710,  2577,   712,
     713,   714,   142,   113,    57,   123,   123,   123,   127,    46,
     244,   153,   276,   271,    79,   349,   350,  2596,   218,   142,
      62,     5,   351,   280,   244,   116,     6,   356,   357,   789,
      67,   195,   196,   208,   280,    30,   123,     5,     5,   171,
     180,   132,   123,   270,   244,    82,     4,    14,    15,   191,
     103,     5,     5,   280,   281,   295,   147,   180,   285,   256,
      14,    15,   153,     5,   347,   153,    31,   158,   781,   782,
    1144,   784,   785,   786,   787,   349,   350,   253,   256,     3,
       4,   123,   160,   261,   311,     5,   799,   800,  1670,   199,
       4,  1691,   211,   806,   807,    62,  2675,  2676,   230,  2678,
     221,  2680,  2681,   191,  2683,   199,   270,   160,    62,    89,
     188,   176,   119,   826,   827,   828,   280,   281,   260,     5,
     221,   285,   213,     0,     3,     4,   299,     4,    14,    15,
     843,   844,   845,    67,   847,   848,   849,   280,   851,     3,
       4,   232,   133,   123,     4,     5,   237,   311,   239,   186,
    1870,  2000,  2001,  2002,   296,    14,    15,  2736,   121,   872,
     269,   874,   280,   280,   280,   297,  1886,   276,   221,   164,
     312,   884,   260,   226,   265,   266,    62,    46,   891,   892,
     171,   153,   273,   291,   897,     3,     4,  1261,  1562,    14,
      15,   256,  2601,   280,   172,  1915,    65,  1770,    67,   280,
     291,   914,   126,    62,  2783,   918,   208,     4,   245,   269,
    2619,    33,   925,   926,   927,    12,   276,  1790,    89,    55,
     933,    67,    40,   218,   312,   938,     3,     4,   195,   196,
     990,    16,  1805,    83,     5,  1808,   949,    62,   280,   230,
      17,   195,   196,  1816,   872,   107,  1819,   118,    90,   244,
      67,   223,   289,   966,  1827,    91,   347,  1830,    42,    43,
     107,   298,   126,   142,  1837,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   237,   266,   113,   290,    83,   289,  2019,
    2472,   180,    67,   270,    92,   155,     3,     4,   144,   195,
     196,     4,     5,   280,   281,    12,   270,   186,   285,   190,
    1033,    95,    14,    90,    14,    15,   280,   281,     3,     4,
      22,   285,   304,    73,   205,    27,   195,   196,   200,   113,
    2749,  1054,    34,    31,   311,     5,  2755,     5,   350,     4,
    1063,    24,    25,   200,   356,     4,   358,   311,     3,     4,
       5,     3,     4,    55,     5,    40,  1079,     5,  1081,   155,
     195,   196,    62,  1086,  1087,  1088,   245,    19,   228,   229,
      72,   199,     4,  1096,   270,   173,  1099,    26,  1101,     5,
     174,   175,   254,   243,   280,   281,   267,    39,  1980,   285,
       3,     4,    26,  2812,  1117,  2814,  1119,   254,     3,     4,
       4,   270,  1125,  1126,     5,    57,   252,     5,   192,   203,
     289,   280,   281,     3,     4,   311,    99,  1140,  1141,   298,
       5,  1144,  1145,  1146,     4,     5,   286,   308,   113,  1152,
       4,  1154,   228,   229,  1157,   270,  1159,   318,  1208,    14,
      15,     4,   311,     4,     5,   280,   281,   243,     3,     4,
      40,   103,     7,     8,    84,    60,     4,  2049,     5,   161,
     162,   163,   164,   165,   166,   114,   264,   169,   170,   171,
     172,   101,     4,  1196,   432,   433,   311,  1200,   127,  1202,
     114,  2073,    99,  1206,   282,   123,   192,    62,     3,     4,
     286,     5,   198,   127,     4,   195,   196,   277,  1221,     4,
    1223,     4,  1225,  1226,  1227,  1228,     4,     4,   160,  1232,
    1233,     5,     4,   162,     3,     4,     5,  1240,   202,    35,
    2250,     4,     4,   113,  1247,     3,     4,     4,  1251,  1252,
    1253,   237,     3,     4,     5,     4,  2266,    22,  1261,  1262,
       5,  2271,  1265,     5,  2127,    60,     9,   199,     5,   179,
    1273,    11,  1275,  2136,   276,  1278,   172,   263,     4,     4,
     262,   263,  2145,   212,   172,    50,   181,     4,    53,   221,
     270,    56,    28,   201,   226,     5,   225,   201,   212,     5,
     280,   281,    60,  1221,   193,   237,     4,   201,    67,   230,
     292,   225,   108,   223,    14,    15,   193,    67,    83,    67,
    1323,     5,  1325,   309,   231,  1328,  1329,     5,  1331,     4,
    1333,   311,    14,    15,   130,   131,  1339,     4,  1341,  2464,
     195,   196,  2467,   139,  2469,  1348,     4,   112,  1266,   259,
     115,   201,     5,   335,   336,   337,    88,  2482,  2483,    88,
       5,   157,    62,     4,     4,     4,  1284,   299,   354,     3,
       4,   167,     5,     5,  2499,     9,    10,    11,     5,   101,
      62,     4,    17,     5,     4,     4,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,  2286,   270,    17,     4,   154,     4,
    1423,  2293,  1425,  1426,     5,   280,   281,    99,     5,    88,
       4,    14,    15,     3,     4,     5,     5,     7,     8,     5,
      88,   177,     5,     4,  1447,   181,     5,     5,  1451,     4,
       4,   169,     5,     5,  2470,     5,   311,     4,  2468,     3,
       4,     5,     4,     7,     8,     5,    12,   232,    28,    12,
       4,  2481,  1475,  1476,     4,  2347,  2486,     4,  2350,    62,
    2496,  2353,  1485,  2355,     4,     4,  1489,     5,     5,    22,
       3,     4,     4,  1496,     5,   195,   196,   160,   234,   160,
     265,     4,    38,     5,  1422,     4,    19,  1510,     5,    38,
     265,   265,  1515,   195,   196,     4,  1519,    50,  1521,  1522,
      53,  1524,  1525,  1526,     5,  1528,   291,   293,  1531,  1532,
    1533,  1534,  1535,  1536,  1537,  1538,  1539,  1540,  1541,   275,
       5,  1544,  1545,  1546,  1547,     5,     5,   283,   284,     4,
      83,  1554,  1555,     4,   278,  1558,  1559,  1560,    56,     5,
       5,  1564,  1565,   278,     5,     5,     5,  1931,     4,    67,
     270,     4,   107,     5,  1577,  1578,     5,  1580,  1581,   112,
     280,   281,   115,  2599,  2600,     5,     5,  2603,   270,  2605,
     103,     5,     5,     4,   154,    93,    94,     4,   280,   281,
       5,  2617,  2618,   101,   142,     5,  2622,  2623,     4,   107,
    2626,   311,   195,   196,     5,  2631,  2632,   177,     5,   244,
     244,   181,  1986,     5,   107,  1628,  1629,  1630,    40,   311,
    1633,   129,   244,  2505,   132,  1638,  1639,   619,  1641,  1642,
    1643,   107,  1645,  1646,     5,  1648,   217,   160,  1651,  1652,
      40,   250,   217,     5,     4,   153,     5,  1660,     5,     4,
     217,    67,     4,   161,  2028,  1668,   217,     5,    54,  2685,
    1673,  1674,  2688,     5,   234,    81,  1679,  2693,     5,     5,
       5,     4,   113,  2699,    90,  1688,    72,   270,  2704,   113,
       4,   673,     5,     5,     5,   101,   678,   280,   281,   232,
       4,     4,   200,    89,     3,     4,     5,     5,     7,     8,
     208,     5,     5,   226,     5,   275,   102,     4,     6,     5,
    1638,  1724,     5,   283,   284,     4,   132,     5,   311,     5,
      12,    12,   265,     4,     4,   121,  2746,     5,     4,   125,
       4,     4,     4,  1746,  1747,     5,     0,   153,  1751,     5,
     244,   244,   138,   142,  1757,   171,   254,   244,   124,     4,
     213,     4,  2778,   254,   201,  2781,     4,     4,   266,     4,
       4,   278,     5,     5,     5,     5,     5,     5,     4,     4,
     244,     5,     4,     4,   282,  2801,  1704,     6,     4,   315,
       5,     5,   178,   291,   200,   293,  1714,     5,     4,  2815,
     244,  1719,  2818,  2819,     4,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   239,   244,     4,   315,     4,     4,     4,
       4,   315,   315,     4,     4,   230,     5,     5,   830,   347,
      19,   230,   230,   230,   230,    62,     5,     4,     4,     4,
     266,  1864,     5,  1866,     5,  1868,     5,     4,     6,     5,
       5,  2235,  2236,     4,  2238,  2239,     4,     4,  2242,  2243,
       5,     5,     4,     4,  1887,  1888,  1889,  1890,  1891,  1892,
    1893,  1894,  1895,     5,     5,     4,    12,     5,     5,   305,
       4,   307,     5,     4,     4,     4,     4,     4,  1911,     5,
    1913,     5,   119,     5,     5,     5,   123,     5,     4,   278,
       5,     5,     5,     4,     4,   278,     5,  1930,  1931,     4,
     278,     5,     5,  1936,   103,     5,     4,     4,     4,  2303,
       5,     5,  1945,  1946,  1947,  1948,  1949,  1950,  1951,  1952,
    1953,  1954,     5,   160,  1957,  1958,  1959,  1960,  1961,  1962,
    1963,  1964,  1965,  1966,  1967,  1968,     5,  1970,  2635,  1972,
    1973,  1974,     4,     6,     5,     5,   983,     5,     5,     4,
       4,   311,     5,  1986,  1987,     5,     5,     5,     4,     4,
     197,   160,     5,     5,     5,     5,     4,     4,   386,     5,
       4,     4,     4,     4,   359,     5,     5,     5,     5,     5,
       4,     4,  2771,     5,     4,     4,     4,  2020,     5,  2022,
       5,  2024,     4,  2026,     5,  2028,  2029,     5,  2031,     4,
       4,   359,     5,     5,     4,  2038,  2039,     4,   359,     5,
       5,   248,  2045,     5,  2047,   252,  2713,     5,  2051,     5,
       5,  2054,     4,   359,     5,     4,     4,   226,     5,     5,
       5,     4,     4,   359,     5,     5,     5,     5,     4,     4,
     277,     5,     5,   280,     5,     5,     4,     4,  1060,     5,
       4,     4,     4,   290,     4,     4,     4,     4,     4,  2453,
       4,     4,     4,  2457,     4,     4,     4,  2100,   359,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,     4,     4,  2493,
       5,     5,   359,     5,  1116,     4,   359,     5,     4,  2057,
       5,     5,     5,     4,     4,     4,  1128,     4,  2198,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,     4,    33,  2097,
       4,     4,     4,     4,     4,   291,     5,     4,     6,     5,
       5,     5,     4,  2646,     5,     4,   291,     5,     5,     4,
       4,  2204,     5,     4,     4,     4,   359,     5,     4,     4,
       4,     4,  2215,  2216,  2217,  2218,  2219,  2220,  2221,  2222,
    2223,  2224,  2225,     5,     5,     4,     4,     4,  2231,     4,
       4,     4,  2235,  2236,     5,  2238,  2239,  2724,  2725,  2242,
    2243,  2244,  2245,  2246,  2247,  2248,  2249,     5,  2251,  2252,
    2253,     5,     4,     4,  1236,  1237,     4,   431,     5,   114,
       5,     5,     4,     4,  2267,  2268,  2269,  2270,     5,  2272,
    2273,  2274,  2275,  2276,  2277,     5,  2279,     5,     4,  2282,
    2283,     5,     4,     5,     5,     5,  2633,  2713,  2709,  2261,
     748,    -1,    -1,    -1,    -1,    -1,    -1,  2300,    -1,    -1,
    2303,  2304,    -1,    -1,    93,  2308,    -1,    -1,    -1,  2312,
      -1,    -1,   101,    -1,    -1,    -1,   295,    -1,   107,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,
      -1,   186,   187,    -1,   189,   190,    -1,    -1,    -1,    61,
     129,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    76,    -1,    -1,  2360,  1365,    81,
      -1,    -1,    84,   218,   153,    -1,    -1,    -1,    90,    -1,
    1377,    -1,   161,    -1,    -1,   354,    -1,    -1,    -1,   101,
      -1,    -1,   237,   238,    -1,   107,    -1,    -1,  1395,  1396,
      -1,    -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     132,   200,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   208,
      -1,    -1,    -1,    -1,    -1,    -1,   281,    -1,    -1,  2432,
      -1,   153,    -1,  2436,    -1,    -1,  1418,    -1,   293,    -1,
      -1,    -1,  1424,  2446,  2447,    -1,   168,    -1,    -1,  2452,
    2453,    -1,    -1,  2456,  2457,    -1,   178,   179,   313,  2462,
      -1,    -1,  2465,  2466,  1446,   254,    -1,  1449,    -1,    -1,
      -1,  1453,    -1,    -1,    -1,    -1,    -1,   266,   200,    -1,
      -1,  2484,  2485,    -1,  2487,  2488,  2489,  2490,  2491,    -1,
    2493,  2494,  1474,   282,    -1,  2498,    -1,    -1,  1480,    -1,
      -1,   223,    -1,    -1,    -1,    -1,  1488,    -1,  2511,  1491,
      -1,    -1,    -1,  2516,    -1,   237,    -1,   239,  1500,  1501,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   507,  1511,
      44,  2534,   254,    47,    40,   514,    -1,   259,   517,    -1,
      -1,    -1,    -1,   522,   266,    -1,    -1,   526,    -1,    -1,
      -1,   273,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    77,    -1,    -1,    -1,    -1,   423,   291,
     971,    85,    -1,  2576,    -1,    -1,    -1,    -1,  2581,   434,
    2583,    -1,   304,   305,    -1,   307,  2589,    19,   443,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,  2602,
      -1,   107,  1003,    -1,    -1,    -1,    -1,   113,    -1,    41,
      -1,    -1,    44,    -1,   593,    -1,    -1,  2620,    -1,    -1,
      -1,  2624,    -1,  2673,    -1,   347,   132,    -1,    -1,    -1,
      -1,    -1,   146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2646,    -1,    -1,    78,   153,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    -1,    -1,   512,   513,    -1,
      -1,    -1,   168,    -1,    96,    97,    -1,    -1,    -1,    -1,
     525,   103,    -1,    -1,  2677,   530,    -1,    -1,    -1,  2682,
      -1,  2684,    -1,   197,   539,    -1,    -1,    -1,  2691,    -1,
      -1,    -1,    -1,  2696,   200,   127,    -1,    -1,  2701,    -1,
      -1,   215,   216,    -1,    -1,    -1,    -1,    -1,   222,    -1,
     224,    -1,    -1,   145,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2724,  2725,    -1,    -1,     4,    -1,   159,   160,    -1,
     709,    -1,    -1,   239,   166,    -1,    -1,   716,   252,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,  2750,   254,    -1,
    2753,    -1,    -1,  2756,    -1,   187,   611,   612,   613,   614,
     266,    40,    -1,    -1,  2767,  2768,  2769,  2770,    -1,    -1,
      -1,    -1,    -1,  1780,    -1,    -1,  2779,    -1,    57,  2782,
      -1,  1788,  1789,    -1,    -1,    -1,  2789,   293,  2791,    -1,
      -1,    -1,    -1,    -1,   226,    -1,  1803,  1804,    -1,   305,
      -1,   307,   308,    -1,   318,    -1,    -1,  1814,  1815,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   672,  1825,  1826,
      -1,    -1,    -1,  2741,   103,    -1,    -1,    -1,  1835,  1836,
      -1,    -1,    -1,    -1,  1841,    -1,    -1,    -1,    -1,    -1,
      -1,   347,    -1,   122,  1851,    -1,    -1,   279,    -1,    -1,
      -1,    -1,    -1,    -1,   833,  2773,    -1,   289,  2776,    -1,
      -1,   840,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,
      -1,   160,    -1,    -1,    -1,    -1,   318,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,  1880,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   885,   886,    -1,    -1,
      -1,   890,    -1,    -1,   893,    -1,    -1,    -1,    -1,    -1,
     199,    -1,    -1,    -1,    -1,    -1,   905,    -1,   207,    -1,
      57,    -1,    -1,    -1,  1916,    -1,   215,   216,    -1,    -1,
      -1,    -1,   221,    -1,    -1,    -1,    -1,   226,  1349,  1350,
    1351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1359,  1360,
    1361,    -1,    -1,    -1,    -1,  1366,  1367,  1368,    -1,    -1,
    1371,  1372,    -1,  1374,  1375,    -1,   103,    -1,    -1,   834,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   846,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1404,  1405,    -1,    -1,  1408,  1409,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   302,    -1,    -1,    -1,    -1,   883,    -1,
      -1,    -1,  1011,   160,    -1,    -1,    -1,    -1,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,    -1,    -1,    -1,
      -1,    -1,   351,    -1,    -1,    -1,    -1,   356,   357,    -1,
      22,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   221,    -1,    -1,    -1,    -1,   226,
      -1,    -1,    -1,    -1,  2111,    -1,   961,    49,    50,    -1,
      52,    53,    -1,    -1,  2121,    -1,    -1,    -1,  2125,  2126,
      -1,    63,    -1,    -1,    -1,    -1,    -1,  2134,  2135,    -1,
      -1,    -1,    -1,    75,    76,    -1,  2143,  2144,    -1,    -1,
      -1,    83,  2149,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2159,  2160,    -1,    -1,    -1,    -1,    -1,    -1,
      16,    -1,   104,  2170,  2171,    -1,    -1,    23,    -1,   111,
     112,    -1,    -1,   115,  2181,    -1,    -1,    -1,    -1,    -1,
      -1,  1036,    -1,  2190,    -1,  2192,    -1,    -1,    -1,    -1,
      -1,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1209,    -1,    -1,    -1,   176,  1090,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1100,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1239,    -1,    -1,    -1,    -1,  1244,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1254,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     232,    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2287,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   265,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1204,
     292,   293,    -1,    -1,    -1,    -1,    -1,  2364,    -1,    -1,
    1761,    -1,    -1,    -1,    -1,    -1,  1221,  2374,    -1,    -1,
      -1,   313,    -1,  1774,    -1,    -1,  2383,    -1,    -1,    -1,
      -1,    -1,    -1,  1784,    -1,  2392,    -1,    -1,    -1,    -1,
    1245,   247,  2399,    -1,   250,    -1,    -1,    -1,    -1,    -1,
    1255,    -1,    -1,  2410,    -1,    -1,    -1,    -1,    -1,  2416,
      -1,    -1,  2419,    -1,    -1,  2422,   358,  1272,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1284,
      -1,    -1,    -1,    -1,  1289,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1856,    -1,    -1,    -1,    -1,
      -1,    -1,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2480,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1490,    -1,    -1,    -1,    -1,    -1,    -1,  2500,    -1,
      -1,    -1,  2504,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2542,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2551,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2560,    -1,    -1,    -1,    -1,    -1,  2566,
      -1,    -1,    -1,  2570,    -1,    -1,  2573,  1422,    -1,    -1,
      -1,  1550,    -1,    -1,    -1,    -1,    -1,  1556,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1452,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1481,    -1,    -1,  1484,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1494,
    1495,    -1,    -1,    -1,    57,    -1,    -1,  1502,    -1,    -1,
      -1,    -1,    -1,    -1,  1509,  1634,    -1,  2639,    -1,    -1,
      -1,  1640,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1665,    -1,    -1,    -1,
     103,    -1,  1671,    -1,  1549,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1561,    -1,    -1,  2110,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1698,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1706,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,  2150,
    2151,  2152,  2153,  2154,    -1,  2156,  2157,    -1,    -1,    -1,
    2161,  2162,  2163,  2164,  2165,    -1,  2167,  2168,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2762,    -1,    -1,  1638,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1656,    -1,    -1,    -1,    -1,    -1,    -1,   221,    -1,
      -1,    -1,    -1,   226,    -1,    -1,    -1,  1672,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1685,    -1,  1687,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1697,    -1,    -1,  1700,    -1,  1702,  1703,  1704,
    1705,    -1,    -1,  1708,    -1,    -1,  1711,    -1,    -1,  1714,
    1715,    -1,  1717,  1718,  1719,  1720,    -1,  1722,  1723,    -1,
      -1,    -1,    -1,  1728,  1729,  1730,    -1,    -1,  1733,  1734,
      -1,    -1,  1861,    -1,  1739,  1740,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1883,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,    -1,    -1,    -1,    -1,    -1,  1917,  1918,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1934,  1935,    -1,    -1,    -1,
    1939,  1940,  2363,    -1,    -1,  2366,  2367,  2368,  2369,  2370,
      -1,  2372,  2373,    -1,  2375,  2376,  2377,  2378,  2379,    -1,
    2381,  2382,    -1,  2384,  2385,  2386,  2387,  2388,    -1,  2390,
    2391,    -1,  2393,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1979,    -1,  2403,  2404,    -1,    -1,    -1,    -1,  1863,    -1,
      -1,  1990,  1867,  2414,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1879,    -1,    -1,  1882,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,  2025,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1912,    -1,    -1,
      -1,    -1,  2041,    -1,    -1,    -1,    49,    50,    -1,    -1,
      53,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    67,    -1,  2065,    -1,    -1,    -1,
      -1,  2070,    75,    76,    -1,    19,    -1,  2076,    -1,    -1,
      83,    84,  2081,    -1,    -1,    -1,  2085,    -1,    -1,  2088,
      -1,    -1,  2091,  1968,  2093,    -1,    -1,    -1,   101,    -1,
      -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,   111,   112,
      -1,    -1,   115,    -1,    -1,    -1,  1991,    -1,    -1,    -1,
      -1,    -1,    66,    67,  2545,    -1,    70,    -1,    -1,   132,
      -1,    -1,    -1,  2554,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2563,    -1,  2565,    -1,    -1,    -1,  2569,    93,
     153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,
      -1,    18,    19,    -1,    -1,    -1,    -1,  2042,    -1,    -1,
      -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2057,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   200,    -1,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2086,    -1,    -1,    -1,    -1,   160,    -1,    -1,    -1,
      -1,    -1,  2097,    -1,    -1,    -1,    -1,   230,   172,   232,
      -1,    -1,    -1,    -1,    -1,   238,   239,    -1,    -1,    -1,
      -1,  2662,    -1,  2664,    -1,  2666,   103,   191,  2669,    -1,
    2671,   254,   255,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     117,    -1,   265,   266,    -1,    -1,    -1,    -1,    -1,   213,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2278,
      -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,   291,    -1,
     293,    -1,    -1,    -1,    -1,  2294,    -1,    -1,    -1,    -1,
      -1,    -1,   305,   160,   307,    -1,    -1,    -1,    -1,    -1,
     313,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     177,    -1,    -1,    -1,    -1,  2324,    -1,  2202,    -1,    -1,
    2205,    -1,    -1,    -1,    -1,   279,    -1,    -1,  2213,    -1,
      -1,    -1,    -1,    -1,   347,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2229,    -1,    -1,  2232,  2357,    -1,
      -1,    -1,  2237,    -1,    19,  2240,  2241,    -1,    -1,   226,
      -1,    -1,    -1,    -1,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,    57,   347,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2288,  2289,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2425,    -1,    -1,    -1,
      -1,    -1,  2431,    -1,    -1,    -1,  2435,    -1,   295,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,  2451,    -1,  2329,    -1,    -1,    -1,    -1,    -1,
      -1,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2502,  2503,   160,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    63,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,
      -1,    -1,  2427,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   221,    -1,    -1,    -1,
      -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,   112,    -1,  2460,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2471,    -1,    -1,    -1,
      -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,  2607,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   287,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2521,   176,    -1,    -1,
    2525,    60,    -1,    -1,    -1,    19,   185,    -1,    -1,    -1,
      -1,    -1,    -1,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,    -1,    19,    57,   103,    -1,    -1,    -1,    -1,    -1,
      -1,   230,    -1,   232,  2579,  2580,  2705,  2582,    -1,   238,
     239,    -1,  2587,  2588,    -1,    -1,    -1,  2592,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   255,    -1,    -1,  2728,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   266,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2625,   160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   291,    -1,   293,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   303,  2774,   103,    -1,  2653,    -1,
      -1,    -1,    -1,    -1,   313,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2794,   160,    -1,  2797,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   347,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   160,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   226,    -1,    -1,    -1,  2741,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2758,    -1,    -1,   295,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2773,   226,
      -1,  2776,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,    41,
      -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    -1,    -1,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    78,    -1,    44,    -1,
      -1,    47,    -1,    85,    -1,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    80,    -1,    -1,    -1,   120,    85,
      -1,    87,    88,    89,    -1,    -1,   128,    -1,    -1,    95,
      -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
      -1,    -1,    -1,   145,    -1,    -1,   148,    -1,    -1,    -1,
     152,   153,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,
      -1,   127,    -1,   165,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,    -1,   145,
     182,   183,   184,    -1,    -1,   187,   188,   153,    -1,   155,
     156,    -1,    -1,   159,    -1,    -1,   160,   163,    -1,   165,
     202,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,   220,   221,
      -1,   187,   188,    -1,    -1,    -1,   192,    -1,    -1,    -1,
      -1,   233,    -1,   235,    -1,    -1,   202,   165,    -1,    -1,
     242,    -1,    -1,    -1,   246,    -1,    -1,    -1,   250,    -1,
     252,    -1,   254,   219,   220,    -1,    -1,   259,    -1,    -1,
      -1,   227,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   273,    -1,    -1,    -1,    -1,    -1,   279,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   252,    -1,   254,    -1,
      -1,    -1,   294,   295,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   306,    -1,   308,    -1,    -1,    -1,
      -1,    -1,   314,   279,    -1,   317,   318,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   294,   295,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   303,    -1,    -1,
      -1,    -1,    -1,    -1,   310,    -1,   348,    -1,    -1,    -1,
     316,    -1,   318,   355,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   355,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    41,    44,    47,    60,    65,    66,    68,    69,    70,
      78,    85,    87,    88,    97,    98,   120,   128,   141,   145,
     148,   152,   153,   159,   165,   179,   182,   183,   184,   187,
     188,   202,   219,   220,   221,   233,   235,   242,   246,   250,
     252,   254,   259,   273,   279,   294,   295,   306,   308,   314,
     317,   318,   348,   355,   361,    67,    12,    54,    72,   102,
     121,   125,   138,   299,   395,     3,     4,   299,   362,   400,
     192,   198,   237,   263,   309,   354,   402,   291,     4,    40,
     113,   199,   252,   407,    28,   154,   177,   181,   234,   275,
     283,   284,   377,   409,    84,   101,   179,   223,   259,   410,
      40,    60,   113,   199,   295,   362,   419,     4,    19,    40,
      57,   103,   122,   160,   199,   207,   215,   216,   221,   226,
     302,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     351,   356,   357,   364,   372,   373,   374,   421,    33,   422,
     364,    44,    47,    77,    85,   146,   197,   215,   216,   222,
     224,   252,   318,   363,     5,   148,   424,    41,    44,    47,
      66,    68,    69,    70,    78,    80,    85,    87,    88,    89,
      95,    97,   127,   145,   153,   155,   156,   159,   163,   165,
     187,   188,   192,   202,   219,   220,   227,   252,   254,   279,
     294,   295,   303,   310,   316,   318,   355,   425,    84,   101,
     469,    19,    41,    44,    78,    85,    96,    97,   103,   127,
     145,   159,   160,   166,   187,   226,   279,   289,   318,   472,
      67,   364,    89,   118,   190,   205,   267,   308,   318,   478,
      16,    26,   114,   127,   162,   212,   225,   481,   236,   499,
       5,    67,    89,   143,   308,   355,   364,   500,     5,   501,
      58,   134,   231,   246,   309,   517,    46,    65,    67,   186,
     245,   289,   298,   537,    67,   208,   350,   356,   358,   538,
      39,   199,   237,   299,   362,   372,   374,   539,     5,   308,
     318,   364,   542,    71,   172,   251,   260,   543,     4,   544,
      89,   517,    62,   289,   312,   551,   199,   299,   362,   552,
      26,   114,   127,   212,   225,   554,    51,   101,   110,   140,
     301,   569,   570,     4,    37,    48,    75,   153,   191,   260,
     296,   312,   390,     4,   127,   211,   571,   299,   362,   573,
      16,    23,   247,   250,   373,   574,   236,   578,   299,   362,
     579,     0,     5,   144,   364,    60,   362,   396,   276,     5,
       4,   299,   362,   397,     5,    32,   288,   398,   126,   362,
     399,   126,   362,   401,   362,     4,   198,   249,   256,   405,
     192,   309,   353,   354,   362,   404,   364,   142,   180,   403,
     202,   362,    79,   176,   256,   362,   406,     5,   362,     4,
     252,   408,   362,   362,     5,   232,   411,    31,   412,     5,
     413,     5,   417,     5,    31,   418,   362,     9,    10,    11,
     362,   368,   369,   370,   371,   362,   362,    40,   113,   199,
     362,   420,   362,   199,   372,   374,   362,    35,   108,   130,
     131,   139,   157,   167,   379,   362,     4,   364,   364,   364,
     364,   364,   364,   364,   364,   364,   364,   362,   119,    67,
      54,    72,    89,   102,   121,   125,   138,   178,   428,   121,
     430,   192,   198,   237,   263,   309,   353,   354,   362,   414,
     431,   291,   434,   172,   435,   172,   181,   437,    66,    67,
      70,    93,   172,   191,   213,   279,   347,   372,   439,   362,
     374,   442,    60,   295,   372,   443,   287,   372,   374,   444,
      33,   445,   372,   374,   446,     4,   372,   374,   447,    45,
      60,    82,   102,   119,   123,   150,   151,   204,   214,   276,
     277,   347,   451,   218,   311,   457,    67,     5,    90,     6,
      89,   123,   449,     5,    66,   374,   448,    16,   517,    46,
      67,    82,   186,   245,   289,   298,   458,    67,   237,   459,
     290,    62,   289,   312,   460,    21,   138,   244,   274,   461,
      37,    48,    75,   153,   191,   260,   312,   462,   374,    90,
      16,   201,   467,   372,   470,    67,    73,   473,    31,   474,
      44,    88,   197,   475,   153,   223,   266,   304,   476,   372,
      18,    59,   117,   177,   295,   372,   477,     5,     4,   198,
     480,     5,     4,     6,   123,   362,     4,     5,   252,   482,
       5,   484,     5,   119,   197,   252,   277,   485,    95,   113,
     192,   498,     5,   496,     5,   277,   497,     4,     5,   364,
     364,   362,   362,     5,     4,     5,    61,    67,    74,    76,
      81,    84,    90,   101,   107,   116,   132,   153,   168,   178,
     179,   200,   223,   237,   239,   254,   259,   266,   273,   291,
     304,   305,   307,   347,   502,    92,   173,   264,   282,   376,
       5,     4,   202,   209,   210,   245,   352,   375,   362,   372,
     362,     5,   362,    40,   113,   362,   541,   364,   362,   372,
     374,   540,   362,   379,   362,     4,   373,    55,    91,   144,
     252,   545,     4,     4,   362,     4,   153,   266,   546,     5,
     372,     4,    40,   113,   362,   553,   362,    99,    62,   123,
     252,   280,   555,   123,   568,    62,   119,   123,   160,   197,
     248,   252,   277,   280,   290,   557,   558,    62,   123,   280,
     567,     5,     4,    34,   109,   208,   550,    67,   364,   391,
      67,   364,   392,    67,   364,   393,    13,   194,   549,   362,
     362,   230,   362,   394,   362,   277,     4,   362,   362,     4,
     577,     4,   293,   575,     4,   293,   576,     4,   379,   126,
     362,   580,   362,   362,     4,     5,   362,    12,   362,   362,
     362,    30,    96,   166,   256,   261,   378,   378,     4,   202,
     362,   362,     4,     4,     4,   362,   362,   362,   362,     4,
       4,     5,     5,   372,     5,   362,   362,   368,   370,   370,
     372,   362,   362,   362,   362,   362,   362,   362,   372,   374,
     371,   362,   362,   371,   362,     5,   276,   105,   192,   429,
     198,   256,   432,   172,    79,   176,   256,   433,   142,   180,
     415,   415,     4,   436,     4,   438,   198,   263,   440,   181,
     441,   172,   379,   362,   362,   372,   372,   379,   379,   379,
     372,   379,   362,   372,     4,   454,     4,   374,   452,   201,
       4,   169,   318,   453,   201,   372,     4,   135,   299,   456,
       5,     5,   426,     4,   201,   137,   253,   365,   362,     4,
       5,    61,    67,   116,   132,   147,   153,   158,   213,   232,
     237,   239,   265,   266,   273,   291,   347,   511,   374,   193,
     193,    67,   463,    67,   464,    67,   465,   230,   466,   362,
       5,   427,   231,   468,   373,   379,     5,   372,   372,   372,
     372,     4,   364,     4,     4,   201,   362,    14,    15,    62,
     195,   196,   270,   280,   281,   311,    88,     5,     5,    14,
      15,    62,   195,   196,   270,   280,   281,   285,   311,    88,
     160,   165,   373,   488,   493,    88,   160,     5,   486,     4,
       4,    14,    62,   195,   270,   280,   311,     5,     5,     4,
     362,   373,    20,    21,    22,    49,    50,    53,    56,    63,
      67,    75,    76,    83,    84,   101,   107,   111,   112,   115,
     132,   153,   176,   200,   230,   232,   238,   239,   254,   255,
     265,   266,   291,   293,   305,   307,   313,   347,    67,    81,
      90,   101,   132,   153,   200,   239,   266,   305,   307,     4,
      30,   164,   218,   244,   505,     5,    64,   106,   241,   257,
     258,   349,   350,   510,   101,   503,    17,   266,   508,    40,
     113,   199,   509,     4,     5,    17,   217,   300,   362,   266,
     510,   518,   127,   510,   519,    36,    40,   113,   136,   199,
     299,   362,   520,   372,   364,    93,   101,   107,   129,   153,
     161,   200,   208,   254,   266,   282,   523,    40,   113,   199,
       5,   266,   292,   527,    17,   217,   300,   528,   293,   364,
     529,     5,   101,   107,   308,    17,    17,     4,   362,   362,
     362,   362,   362,   362,   379,   362,   362,   371,   362,     4,
     379,     4,    40,   113,   199,   271,   547,    40,   113,   199,
     271,   548,     4,    99,     5,     5,    88,     4,     5,     5,
      88,     5,   558,    62,   123,   160,   280,   562,    62,   123,
     280,   566,    88,   160,    62,   123,   280,   560,     4,    62,
     123,   280,   559,     5,     5,     4,     4,     5,     5,     5,
     362,   362,   362,     4,   362,   572,   362,   362,     6,   373,
       4,     5,     4,     4,     5,     4,    99,   268,   380,   362,
     362,    12,     5,    12,   362,   362,    12,     4,    12,     4,
       4,   362,   362,   362,     4,   364,     4,     4,   379,   372,
     379,   362,   362,   362,   372,   362,   371,   362,   362,     5,
       5,   362,   374,   362,   372,   362,   379,   379,   380,   380,
     380,   379,   371,   362,   379,   362,   365,   455,   169,     5,
       4,   379,   160,   160,     4,     5,     4,     4,   362,   450,
      38,    38,   362,    20,    21,    22,    49,    50,    53,    60,
      63,    67,    75,    76,    83,   111,   112,   115,   132,   153,
     176,   185,   230,   232,   238,   239,   255,   266,   291,   293,
     303,   313,   347,    67,   132,   158,   239,   291,    30,   164,
     218,   244,   512,   362,   213,   362,   513,    17,   362,   265,
     523,   265,   213,   362,   514,   293,   515,    17,   100,   362,
     362,     5,   380,    57,   372,     4,     5,   479,   362,     5,
       5,     5,   160,   188,   384,   384,   168,   272,   382,     4,
       4,     5,     5,   483,   278,   278,     5,     5,     5,    17,
     162,   383,   383,   382,     4,     4,   382,     5,     5,   487,
     165,   346,   373,   491,     5,   490,     5,     5,   494,     5,
     495,     5,    14,    15,    62,   195,   196,   270,   280,   281,
     285,   311,     4,     4,     5,     5,   384,   382,     4,     5,
       5,   379,    83,   155,   228,   229,   243,   286,   387,     7,
       8,   362,   367,   244,   124,   244,   244,   107,    40,    67,
     101,   107,   113,   132,   153,   168,   200,   239,   254,   266,
     293,   305,   307,   308,   347,   504,   124,   244,     5,    27,
     170,   244,   289,   142,   107,    22,    50,    53,    83,   112,
     115,   232,   265,    22,    50,    53,    56,    83,   112,   115,
     232,   265,   291,    40,   124,   244,   244,   107,     5,   217,
      27,   230,    36,   136,   299,   362,   269,   276,   124,   250,
     372,   523,    40,   133,   230,   289,   250,   217,     5,     5,
     254,    27,   230,     4,     5,     5,   217,    36,   136,   299,
     362,   523,   217,   364,     4,     4,   362,     5,   311,    22,
      27,    49,    50,    52,    53,    63,    75,    76,    83,    86,
     104,   111,   112,   115,   176,   232,   238,   255,   265,   292,
     293,   313,   358,   506,   362,   362,   362,   362,   362,   510,
     372,     5,     4,     5,   362,   362,   372,   362,   364,   362,
     362,   510,     5,     5,   362,   362,   364,     5,    17,     5,
       5,   362,   362,   371,   362,   362,     4,   362,   362,   113,
     362,   362,   113,     4,    42,    43,   174,   175,   203,   389,
     389,    62,   123,   280,   556,   389,     5,    62,   123,   280,
     561,     5,     5,    62,   123,   280,   563,     4,     5,     5,
       4,    62,   123,   280,   565,    62,   123,   280,   564,     5,
       5,     4,     5,     5,     4,   389,   389,   389,   362,   362,
     362,     4,   372,   362,   373,   379,     5,     5,    12,   362,
     372,   374,   362,    12,   362,   362,   362,    60,   362,     6,
       4,   362,   362,    47,   279,   416,     5,   364,   364,   379,
     362,     4,     4,     4,   379,   372,   362,   362,   362,   362,
     379,   372,   380,   371,   362,     4,   380,   362,     4,   374,
       5,    24,    25,    99,   381,     4,   372,   362,   362,     4,
     362,     5,    83,   155,   228,   229,   243,   286,   372,   374,
     244,   124,   244,   244,    21,   244,   372,   124,   244,    27,
     170,   244,   289,   142,    21,   244,   124,   244,   244,    21,
     244,    27,   171,   230,   171,   269,   276,   124,   171,   230,
     297,   523,   133,   171,   230,   289,     4,   254,    27,   171,
     230,   523,   213,   362,   362,   362,   362,   362,   362,   201,
     362,   362,    20,   240,   471,     4,     4,   362,   384,   384,
     384,     4,   384,   384,   384,    14,    15,    62,   195,   196,
     270,   280,   281,   311,   383,   384,   384,   384,   384,   384,
       4,   384,   384,     4,   383,    14,    15,    62,   195,   196,
     270,   280,   281,   311,     5,   489,     5,   492,     5,     5,
      14,    15,    62,   195,   196,   270,   280,   281,   285,   311,
       5,    14,    15,    62,   195,   196,   270,   280,   281,   285,
     311,     5,    14,    15,    62,   195,   196,   270,   280,   281,
     285,   311,    14,    15,    62,   195,   196,   270,   280,   281,
     311,   278,     5,     5,     5,   383,   383,   382,     4,     4,
     382,     5,     4,     4,   384,   384,     4,   384,   384,     5,
     364,   372,   374,     5,   362,   364,   362,     5,   362,     5,
     367,   107,   200,   254,   107,   200,   254,     5,   364,   362,
     364,     5,   362,   372,   364,     5,   367,   244,   244,    21,
     244,    21,   244,   244,    21,   244,   315,   315,     4,     4,
       4,   504,     4,     4,     4,   315,   315,     4,     5,     4,
     364,   362,     5,   362,     5,   367,   364,   372,   372,   362,
      27,    49,    52,    63,    86,   104,   358,   385,     4,   364,
     362,   379,   364,     5,   372,   372,   362,   364,   364,   372,
     372,   362,   364,   362,     5,   362,   230,   230,   362,   362,
     230,   362,   230,   362,   362,   516,   524,   362,   230,   230,
     362,   362,   362,   362,   362,   362,   362,   362,     5,   311,
     362,   507,   362,   362,   230,   362,   362,   362,   362,   372,
     379,     5,     4,     4,   362,   362,   379,   362,   362,   362,
     372,   510,   362,   362,     5,     4,   362,   362,   362,   362,
       5,     5,     4,   389,     5,     5,     4,     4,     4,     5,
       5,     4,     4,     5,     5,     4,     5,     5,     4,   362,
     362,   362,   362,   379,   362,   372,   374,   362,   379,   362,
     362,   362,   362,   362,     5,   362,     4,     6,   362,   362,
       4,   372,   362,   379,   181,   377,   362,   377,   380,   379,
     372,   362,   362,     4,   362,   372,   372,   362,     4,   365,
       5,     5,     5,     5,     5,   372,   379,   372,   372,   372,
     372,   374,   372,   379,   372,   372,   372,   374,   372,   372,
     372,   372,   374,   372,   372,   372,   362,   372,   372,   372,
     372,   372,   372,   372,   362,   362,     4,   362,     5,     4,
     362,   384,     5,     5,     5,   382,     4,     4,     5,   384,
     383,     4,   384,     5,     5,     5,   383,   383,   382,     4,
       4,     5,    14,    15,    62,   195,   196,   270,   280,   281,
     311,    14,    15,    62,   195,   196,   270,   280,   281,   311,
      14,    15,    62,   195,   196,   270,   280,   281,   311,   278,
       5,     5,     5,   383,   383,   382,     4,     4,   382,     5,
     278,     5,     5,     5,   383,   383,   382,     4,     4,   382,
       5,   278,     5,     5,     5,   383,   383,   382,     4,     4,
     382,     5,     5,     5,     5,   383,   383,   382,     4,     4,
       5,   383,     4,     4,   383,     4,     4,   384,     5,   379,
     372,   362,   362,   372,   362,     5,   367,     5,   372,   364,
       5,   372,   379,     5,   367,   362,   362,   362,   362,   362,
     362,   362,   362,   362,     4,     4,     5,     4,     4,   362,
     372,   362,     5,   367,   364,   379,   379,   362,   371,   379,
     379,   362,   379,   379,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,    56,    67,    94,   132,   291,   293,
     347,   521,   522,   523,   535,   536,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   372,     5,
     362,   362,   362,   362,     4,     4,   379,   380,     5,     5,
     371,   362,     4,   379,   372,     4,   389,   389,   389,   367,
     362,   362,   362,   379,   362,   371,   362,   362,    12,     5,
       5,     4,   362,   362,     4,   379,   372,   362,   362,   380,
     381,   362,     5,   362,   372,   374,     5,     5,     5,     5,
       5,   379,   381,   381,   381,   379,   381,   380,   381,   381,
     379,   381,   381,   381,   379,   381,   381,   379,   372,   381,
     379,   381,   381,   379,   381,   379,     4,   372,   374,     5,
     362,     4,   384,   383,     4,   383,     5,     5,     5,   383,
     383,   382,     4,     4,     5,     5,     5,     5,   383,   383,
     382,     4,     4,     5,     5,     5,     5,   383,   383,   382,
       4,     4,     5,   383,   384,   384,   384,   384,   384,     4,
     384,   384,     4,   383,   383,   384,   384,   384,   384,   384,
       4,   384,   384,     4,   383,   383,     4,     4,   383,     4,
     383,   383,     4,     4,     4,   373,   381,     4,   372,   381,
     362,   372,     4,   381,   381,   372,     4,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   372,   381,
     362,   372,     4,   371,   371,   372,   371,   371,   372,   372,
     371,   371,   362,   362,   362,   362,   362,   362,   367,   362,
     362,   362,   359,   359,   359,   359,   359,   359,   359,   522,
     359,   367,   362,   362,   362,   362,   367,   362,   362,   362,
     362,   362,   362,   379,   362,   311,   366,   367,   362,   362,
     380,   364,   372,   372,   380,   379,     4,   362,   371,   362,
      60,   362,     5,     5,   362,     4,   377,   381,     5,   379,
       4,     5,     4,     5,   372,     5,   380,   381,   380,   380,
     380,     5,   379,     4,   362,   384,   383,   384,   384,   384,
     384,   384,     4,   384,   384,   383,   384,   384,   384,   384,
     384,     4,   384,   384,   383,   384,   384,   384,   384,   384,
       4,   384,   384,   383,   384,   383,     4,   384,   384,   383,
       4,   384,   383,     4,   383,   383,   379,   372,   381,     4,
     379,   362,   379,   362,   362,   362,   381,     4,   379,   362,
     371,   381,   362,   371,   381,   381,   372,   362,     4,   386,
     386,   362,   362,   386,   367,   386,   524,   372,   504,     5,
       4,     5,     5,     5,     4,   364,   367,   386,   386,   362,
     362,   367,   362,   362,   362,   362,   362,   371,   362,     5,
     524,   362,   386,   364,   525,   526,   379,   379,   364,   380,
       4,     5,   362,     5,     4,     6,   362,     4,    32,   189,
     288,   423,   372,     5,    32,   189,   288,   388,   372,     4,
     423,   362,   383,   384,   383,   384,   383,   384,   384,   383,
     384,   383,   383,   362,   381,   372,   372,   362,   372,   362,
     372,   372,   362,   372,   381,     4,   524,   524,   366,   362,
     524,     4,   524,   379,     5,     4,     4,   524,   524,   366,
     362,     4,   524,   524,   362,   372,   524,   524,   524,   525,
     532,   533,   523,   530,   531,   364,     4,     5,     5,     6,
       4,   192,   309,   354,   362,   414,   423,     4,   372,   423,
       4,   384,   384,   384,   384,   384,   373,   381,   381,   362,
     381,     4,   381,   381,   362,   381,   362,   524,   524,     4,
     362,   524,     5,   362,   524,     4,   362,   524,   379,   532,
     534,   535,   359,   531,     5,     5,     4,   362,   415,   362,
     415,   379,   381,     4,   372,   374,     4,   367,   366,   362,
     362,   366,   362,   372,   535,   364,     5,     5,   362,   362,
     362,   362,   388,     5,   372,   374,   379,   372,   374,   524,
     362,     4,   524,   362,   381,     5,     5,   362,     5,   362,
     379,   379,     4,   524,     4,     5,     5,     5,   366,   366,
     524,   524,   524
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
#line 467 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 468 "frame/parser.Y"
    {fr->bgColorCmd("gray");;}
    break;

  case 6:
#line 469 "frame/parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 8:
#line 471 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 9:
#line 472 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 11:
#line 474 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 18:
#line 481 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 19:
#line 482 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].real));;}
    break;

  case 24:
#line 487 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 25:
#line 488 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 26:
#line 489 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 28:
#line 491 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 35:
#line 498 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 39:
#line 502 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 42:
#line 505 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 47:
#line 510 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 49:
#line 512 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 51:
#line 514 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 53:
#line 516 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 58:
#line 523 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 59:
#line 524 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 60:
#line 527 "frame/parser.Y"
    {yydebug=1;;}
    break;

  case 61:
#line 528 "frame/parser.Y"
    {yydebug=0;;}
    break;

  case 62:
#line 529 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 530 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 531 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 532 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 533 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 534 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 535 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 536 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 537 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 538 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 72:
#line 541 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 73:
#line 543 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 74:
#line 544 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 75:
#line 545 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 76:
#line 546 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 77:
#line 548 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 78:
#line 549 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 79:
#line 550 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 80:
#line 551 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 81:
#line 554 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 82:
#line 555 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 83:
#line 556 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 84:
#line 557 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 85:
#line 558 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 86:
#line 561 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 87:
#line 562 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 88:
#line 565 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 89:
#line 566 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 90:
#line 567 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 91:
#line 570 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 92:
#line 573 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 93:
#line 576 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 94:
#line 580 "frame/parser.Y"
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
#line 592 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 96:
#line 599 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 97:
#line 606 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 98:
#line 613 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 99:
#line 614 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 100:
#line 615 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 101:
#line 616 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 102:
#line 617 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 103:
#line 620 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 104:
#line 621 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 105:
#line 622 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 106:
#line 623 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 107:
#line 624 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 108:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 109:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 110:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 111:
#line 628 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 112:
#line 629 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 113:
#line 630 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 114:
#line 631 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 115:
#line 632 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 116:
#line 633 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 117:
#line 634 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 118:
#line 635 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 119:
#line 636 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 120:
#line 637 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 121:
#line 638 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 122:
#line 639 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 123:
#line 640 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 124:
#line 641 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 125:
#line 642 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 126:
#line 643 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 127:
#line 644 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 128:
#line 645 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 129:
#line 646 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 130:
#line 647 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 131:
#line 650 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 132:
#line 651 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 133:
#line 654 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 134:
#line 655 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 135:
#line 656 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 136:
#line 657 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 137:
#line 658 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 138:
#line 659 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 139:
#line 662 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 140:
#line 663 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 141:
#line 664 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 142:
#line 665 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 143:
#line 666 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 144:
#line 669 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 145:
#line 670 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 146:
#line 671 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 147:
#line 672 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 148:
#line 673 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 149:
#line 674 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 150:
#line 675 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 151:
#line 676 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 152:
#line 679 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 153:
#line 680 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 154:
#line 681 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 155:
#line 682 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 156:
#line 683 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 157:
#line 686 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 158:
#line 687 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 159:
#line 688 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 160:
#line 689 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 161:
#line 690 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 162:
#line 691 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 163:
#line 692 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 164:
#line 693 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 165:
#line 696 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 166:
#line 697 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 167:
#line 698 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 168:
#line 701 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 169:
#line 702 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 170:
#line 703 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 171:
#line 704 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 172:
#line 707 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 173:
#line 708 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 174:
#line 709 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 175:
#line 712 "frame/parser.Y"
    {;}
    break;

  case 176:
#line 713 "frame/parser.Y"
    {;}
    break;

  case 177:
#line 714 "frame/parser.Y"
    {;}
    break;

  case 178:
#line 717 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 179:
#line 718 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 180:
#line 719 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 181:
#line 722 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 182:
#line 723 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 183:
#line 724 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 184:
#line 725 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 185:
#line 726 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 186:
#line 727 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 187:
#line 728 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 188:
#line 729 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 189:
#line 732 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 190:
#line 733 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 191:
#line 736 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 192:
#line 737 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 193:
#line 738 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 194:
#line 739 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 195:
#line 740 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 196:
#line 741 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 197:
#line 744 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 198:
#line 745 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 199:
#line 746 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 200:
#line 747 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 201:
#line 750 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 202:
#line 751 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 203:
#line 752 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 204:
#line 753 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 205:
#line 754 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 206:
#line 755 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 211:
#line 762 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 212:
#line 763 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 213:
#line 764 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 214:
#line 766 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 215:
#line 769 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 216:
#line 770 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 217:
#line 773 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 218:
#line 774 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 219:
#line 777 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 220:
#line 778 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 221:
#line 781 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 222:
#line 783 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 224:
#line 787 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 225:
#line 788 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 228:
#line 791 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 230:
#line 793 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 231:
#line 796 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 232:
#line 797 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 233:
#line 800 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 234:
#line 801 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 235:
#line 803 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 236:
#line 805 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 237:
#line 806 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 238:
#line 807 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 239:
#line 809 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 240:
#line 811 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 241:
#line 814 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 242:
#line 815 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 243:
#line 818 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 244:
#line 820 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 245:
#line 823 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 246:
#line 825 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 247:
#line 828 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 248:
#line 832 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 249:
#line 833 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 251:
#line 837 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 252:
#line 838 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 253:
#line 839 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 257:
#line 845 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 258:
#line 846 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 260:
#line 849 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 261:
#line 854 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 262:
#line 855 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 263:
#line 858 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 264:
#line 859 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 265:
#line 860 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 266:
#line 861 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 267:
#line 862 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 268:
#line 865 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 269:
#line 866 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 270:
#line 867 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 271:
#line 868 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 272:
#line 871 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 273:
#line 873 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 274:
#line 878 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 275:
#line 883 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 276:
#line 890 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 277:
#line 892 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 278:
#line 893 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 280:
#line 895 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 281:
#line 899 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 282:
#line 901 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 283:
#line 903 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 284:
#line 904 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 290:
#line 915 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 291:
#line 917 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 292:
#line 919 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 293:
#line 924 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 294:
#line 928 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 295:
#line 931 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 296:
#line 932 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 297:
#line 935 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 298:
#line 936 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 299:
#line 938 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 300:
#line 944 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 301:
#line 945 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 302:
#line 946 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 303:
#line 947 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 304:
#line 950 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 305:
#line 951 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 306:
#line 954 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 307:
#line 955 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 308:
#line 958 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 309:
#line 959 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 310:
#line 963 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 311:
#line 965 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 312:
#line 968 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 313:
#line 970 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 314:
#line 973 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 316:
#line 975 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 317:
#line 976 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 318:
#line 977 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 319:
#line 980 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 320:
#line 982 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 321:
#line 983 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 322:
#line 984 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 323:
#line 985 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 324:
#line 989 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 325:
#line 991 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 326:
#line 992 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 327:
#line 993 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 328:
#line 996 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 329:
#line 998 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 330:
#line 1000 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 331:
#line 1002 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 332:
#line 1005 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 333:
#line 1008 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 334:
#line 1009 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 335:
#line 1010 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 336:
#line 1011 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 337:
#line 1014 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 338:
#line 1017 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 352:
#line 1031 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 355:
#line 1034 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 356:
#line 1035 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 360:
#line 1039 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 361:
#line 1040 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 364:
#line 1043 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 365:
#line 1044 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 367:
#line 1047 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 369:
#line 1049 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 371:
#line 1051 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 373:
#line 1053 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 374:
#line 1055 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 377:
#line 1058 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 378:
#line 1062 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 379:
#line 1064 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 380:
#line 1068 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 381:
#line 1070 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 382:
#line 1073 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 383:
#line 1074 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 384:
#line 1075 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 385:
#line 1076 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 386:
#line 1077 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 387:
#line 1078 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 389:
#line 1080 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 390:
#line 1083 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 391:
#line 1084 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 392:
#line 1085 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 393:
#line 1088 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 394:
#line 1091 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 395:
#line 1093 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 396:
#line 1095 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 397:
#line 1096 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 398:
#line 1097 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 400:
#line 1099 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 402:
#line 1102 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 403:
#line 1108 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 404:
#line 1109 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 405:
#line 1112 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 406:
#line 1113 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 407:
#line 1114 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 408:
#line 1117 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 409:
#line 1118 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 411:
#line 1124 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 412:
#line 1126 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 413:
#line 1128 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 414:
#line 1131 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 416:
#line 1133 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 417:
#line 1137 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 418:
#line 1141 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 420:
#line 1143 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 421:
#line 1144 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 422:
#line 1145 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 423:
#line 1146 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 424:
#line 1147 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 426:
#line 1149 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 427:
#line 1150 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 428:
#line 1153 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 429:
#line 1154 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 430:
#line 1155 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 431:
#line 1158 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 432:
#line 1159 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 433:
#line 1163 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 434:
#line 1165 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 435:
#line 1173 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 436:
#line 1175 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 437:
#line 1177 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 438:
#line 1180 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 439:
#line 1182 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 440:
#line 1183 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 441:
#line 1186 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 442:
#line 1189 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 443:
#line 1191 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 444:
#line 1195 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 445:
#line 1197 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 446:
#line 1200 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 447:
#line 1204 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 448:
#line 1205 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 449:
#line 1207 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 450:
#line 1210 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 451:
#line 1211 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 453:
#line 1215 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 454:
#line 1216 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 455:
#line 1217 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 456:
#line 1220 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 457:
#line 1222 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 458:
#line 1223 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 460:
#line 1225 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 464:
#line 1229 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 465:
#line 1230 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 466:
#line 1231 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 467:
#line 1233 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 469:
#line 1235 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 470:
#line 1238 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 471:
#line 1240 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 472:
#line 1242 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 473:
#line 1243 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 474:
#line 1244 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 475:
#line 1245 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 476:
#line 1248 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 477:
#line 1249 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 478:
#line 1253 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 479:
#line 1255 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 480:
#line 1258 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 481:
#line 1261 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 482:
#line 1262 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 483:
#line 1264 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 484:
#line 1266 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 485:
#line 1268 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 486:
#line 1271 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 487:
#line 1272 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 488:
#line 1273 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 489:
#line 1276 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 490:
#line 1277 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 491:
#line 1278 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 492:
#line 1279 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 493:
#line 1280 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 494:
#line 1281 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 495:
#line 1282 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 496:
#line 1285 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 497:
#line 1288 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 498:
#line 1289 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 499:
#line 1290 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 500:
#line 1293 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 501:
#line 1294 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 502:
#line 1295 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 503:
#line 1296 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 504:
#line 1297 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 505:
#line 1298 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 510:
#line 1305 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 511:
#line 1306 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 512:
#line 1307 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 513:
#line 1310 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 514:
#line 1311 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 515:
#line 1314 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 516:
#line 1315 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 517:
#line 1318 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 518:
#line 1319 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 519:
#line 1322 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 520:
#line 1323 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 521:
#line 1326 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 523:
#line 1328 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 524:
#line 1331 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 525:
#line 1332 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 527:
#line 1336 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 528:
#line 1340 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 529:
#line 1343 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 530:
#line 1350 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 531:
#line 1351 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 532:
#line 1354 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 533:
#line 1355 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 536:
#line 1358 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 537:
#line 1359 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 538:
#line 1360 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 539:
#line 1361 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 541:
#line 1363 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 542:
#line 1364 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 543:
#line 1365 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 545:
#line 1367 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 546:
#line 1368 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 547:
#line 1369 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 548:
#line 1370 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 550:
#line 1374 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 551:
#line 1377 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 552:
#line 1378 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 553:
#line 1381 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 554:
#line 1382 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 555:
#line 1383 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 556:
#line 1384 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 557:
#line 1387 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 558:
#line 1388 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 559:
#line 1389 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 560:
#line 1390 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 561:
#line 1393 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 562:
#line 1394 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 563:
#line 1395 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 564:
#line 1396 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 565:
#line 1397 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 566:
#line 1398 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 567:
#line 1401 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 568:
#line 1402 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 569:
#line 1403 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 572:
#line 1407 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 573:
#line 1408 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 574:
#line 1411 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 575:
#line 1414 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 576:
#line 1415 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 577:
#line 1419 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 578:
#line 1421 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 579:
#line 1422 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 586:
#line 1434 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 587:
#line 1436 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 588:
#line 1438 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 589:
#line 1439 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 590:
#line 1441 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 591:
#line 1443 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 592:
#line 1445 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 593:
#line 1447 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 594:
#line 1449 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 596:
#line 1453 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 597:
#line 1454 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 598:
#line 1455 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 599:
#line 1456 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 600:
#line 1457 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 601:
#line 1459 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 602:
#line 1460 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 603:
#line 1461 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 604:
#line 1462 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 605:
#line 1465 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 606:
#line 1469 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 607:
#line 1471 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 608:
#line 1473 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 609:
#line 1475 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 610:
#line 1477 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 611:
#line 1479 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 612:
#line 1481 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 613:
#line 1483 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 614:
#line 1486 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 615:
#line 1488 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 616:
#line 1490 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 622:
#line 1498 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 623:
#line 1499 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 624:
#line 1500 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 625:
#line 1501 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 626:
#line 1502 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 627:
#line 1503 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 628:
#line 1505 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 629:
#line 1507 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 630:
#line 1508 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 631:
#line 1509 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 632:
#line 1510 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 633:
#line 1513 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 634:
#line 1514 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 635:
#line 1515 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 636:
#line 1516 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 637:
#line 1517 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 638:
#line 1519 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 639:
#line 1520 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 640:
#line 1521 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 641:
#line 1522 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 647:
#line 1533 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 648:
#line 1536 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 649:
#line 1539 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 650:
#line 1542 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 651:
#line 1545 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 652:
#line 1548 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 653:
#line 1551 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 654:
#line 1554 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 655:
#line 1557 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 656:
#line 1562 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 657:
#line 1565 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 658:
#line 1568 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 659:
#line 1571 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 660:
#line 1574 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 661:
#line 1577 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 662:
#line 1580 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 663:
#line 1583 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 664:
#line 1586 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 665:
#line 1589 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 666:
#line 1592 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 667:
#line 1597 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 668:
#line 1600 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 669:
#line 1603 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 670:
#line 1606 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 671:
#line 1609 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 672:
#line 1612 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 673:
#line 1615 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 674:
#line 1618 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 675:
#line 1621 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 676:
#line 1626 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 677:
#line 1628 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 678:
#line 1630 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 679:
#line 1632 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 680:
#line 1634 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 681:
#line 1636 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 682:
#line 1641 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 683:
#line 1643 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 684:
#line 1645 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 685:
#line 1649 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 686:
#line 1652 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 687:
#line 1655 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 688:
#line 1658 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 689:
#line 1661 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 690:
#line 1664 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 691:
#line 1667 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 692:
#line 1670 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 693:
#line 1673 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 694:
#line 1676 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 695:
#line 1679 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 696:
#line 1683 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 697:
#line 1684 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 698:
#line 1685 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 699:
#line 1686 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 700:
#line 1687 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 701:
#line 1688 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 702:
#line 1690 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 703:
#line 1692 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 704:
#line 1693 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 705:
#line 1694 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 706:
#line 1695 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 707:
#line 1698 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 708:
#line 1699 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 709:
#line 1700 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 710:
#line 1701 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 711:
#line 1702 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 712:
#line 1704 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 713:
#line 1705 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 714:
#line 1706 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 715:
#line 1707 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 716:
#line 1711 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 717:
#line 1713 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 718:
#line 1714 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 719:
#line 1716 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 720:
#line 1718 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 721:
#line 1720 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 722:
#line 1723 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 723:
#line 1724 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 724:
#line 1727 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 725:
#line 1728 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 726:
#line 1729 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 727:
#line 1732 "frame/parser.Y"
    {;}
    break;

  case 728:
#line 1735 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 729:
#line 1736 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 730:
#line 1737 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 731:
#line 1738 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 732:
#line 1739 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 733:
#line 1740 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 734:
#line 1741 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 735:
#line 1745 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 737:
#line 1753 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 738:
#line 1754 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 739:
#line 1756 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 740:
#line 1758 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 741:
#line 1759 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 742:
#line 1760 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 744:
#line 1761 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 747:
#line 1764 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 748:
#line 1765 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 749:
#line 1767 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 750:
#line 1769 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 751:
#line 1771 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 752:
#line 1774 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 753:
#line 1776 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 754:
#line 1777 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 755:
#line 1779 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 756:
#line 1782 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 757:
#line 1785 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 758:
#line 1787 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 759:
#line 1790 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 760:
#line 1793 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 761:
#line 1796 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 762:
#line 1799 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 763:
#line 1803 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 764:
#line 1807 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 765:
#line 1812 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 766:
#line 1816 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 767:
#line 1817 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 768:
#line 1819 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 769:
#line 1820 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 770:
#line 1822 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 771:
#line 1824 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 772:
#line 1826 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 773:
#line 1828 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 774:
#line 1829 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 775:
#line 1831 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 776:
#line 1833 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 777:
#line 1836 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 778:
#line 1840 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 779:
#line 1844 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 780:
#line 1846 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 781:
#line 1848 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 782:
#line 1850 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 783:
#line 1852 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 784:
#line 1854 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 785:
#line 1856 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 786:
#line 1858 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 787:
#line 1860 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 788:
#line 1862 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 789:
#line 1864 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 790:
#line 1866 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 791:
#line 1868 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 792:
#line 1870 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 793:
#line 1871 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 794:
#line 1873 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 795:
#line 1875 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 796:
#line 1876 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 797:
#line 1877 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 798:
#line 1879 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 799:
#line 1881 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 800:
#line 1882 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 801:
#line 1883 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 802:
#line 1884 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 803:
#line 1886 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 804:
#line 1887 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 805:
#line 1889 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 806:
#line 1893 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 807:
#line 1896 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 808:
#line 1899 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 809:
#line 1903 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 810:
#line 1907 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 811:
#line 1912 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 812:
#line 1916 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 813:
#line 1917 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 814:
#line 1918 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 815:
#line 1920 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 816:
#line 1922 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 817:
#line 1926 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 818:
#line 1927 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 819:
#line 1928 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 820:
#line 1930 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 821:
#line 1933 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 822:
#line 1936 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 823:
#line 1939 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 824:
#line 1940 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 825:
#line 1942 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 826:
#line 1945 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 827:
#line 1949 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 828:
#line 1951 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 829:
#line 1952 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 830:
#line 1954 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 831:
#line 1957 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 832:
#line 1960 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 833:
#line 1961 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 834:
#line 1963 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 835:
#line 1964 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 836:
#line 1965 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 837:
#line 1967 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 838:
#line 1968 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 839:
#line 1970 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 840:
#line 1973 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 841:
#line 1976 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 842:
#line 1978 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 843:
#line 1979 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 847:
#line 1984 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 848:
#line 1985 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 849:
#line 1987 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 850:
#line 1989 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 851:
#line 1991 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 852:
#line 1992 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 856:
#line 1998 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 857:
#line 1999 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 858:
#line 2000 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 859:
#line 2001 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 860:
#line 2002 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 861:
#line 2003 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 862:
#line 2004 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 863:
#line 2005 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 864:
#line 2006 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 865:
#line 2007 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 866:
#line 2009 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 867:
#line 2011 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 868:
#line 2012 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 869:
#line 2013 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 870:
#line 2014 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 871:
#line 2015 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 872:
#line 2017 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 873:
#line 2018 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 874:
#line 2019 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 875:
#line 2020 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 876:
#line 2021 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 877:
#line 2023 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 878:
#line 2024 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 879:
#line 2025 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 880:
#line 2026 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 881:
#line 2027 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 882:
#line 2028 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 883:
#line 2031 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 884:
#line 2032 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 885:
#line 2033 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 886:
#line 2034 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 887:
#line 2035 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 888:
#line 2036 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 889:
#line 2037 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 890:
#line 2038 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 891:
#line 2039 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 892:
#line 2040 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 893:
#line 2041 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 894:
#line 2042 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 895:
#line 2043 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 896:
#line 2044 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 897:
#line 2045 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 898:
#line 2046 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 899:
#line 2047 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 900:
#line 2048 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 901:
#line 2049 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 902:
#line 2050 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 903:
#line 2051 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 904:
#line 2054 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 905:
#line 2055 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 906:
#line 2056 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 907:
#line 2057 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 908:
#line 2058 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 909:
#line 2060 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 910:
#line 2070 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 911:
#line 2078 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 912:
#line 2087 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2095 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2102 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2109 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2117 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2125 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2130 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2135 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2140 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2145 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 922:
#line 2150 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 923:
#line 2155 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 924:
#line 2160 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 925:
#line 2169 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 926:
#line 2179 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 927:
#line 2189 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 928:
#line 2198 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 929:
#line 2206 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 930:
#line 2216 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 931:
#line 2226 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 932:
#line 2236 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 933:
#line 2248 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 934:
#line 2257 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 936:
#line 2265 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 937:
#line 2267 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 938:
#line 2269 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 939:
#line 2274 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 940:
#line 2277 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 941:
#line 2278 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 942:
#line 2279 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 943:
#line 2286 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 944:
#line 2288 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 945:
#line 2289 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 946:
#line 2292 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 947:
#line 2293 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 948:
#line 2294 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 949:
#line 2295 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 950:
#line 2296 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 951:
#line 2297 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 952:
#line 2298 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 954:
#line 2302 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 955:
#line 2303 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 956:
#line 2304 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 957:
#line 2305 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 958:
#line 2306 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 959:
#line 2309 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 960:
#line 2311 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 961:
#line 2313 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 962:
#line 2315 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 963:
#line 2317 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 964:
#line 2319 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 965:
#line 2321 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 966:
#line 2322 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 967:
#line 2323 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 968:
#line 2325 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 969:
#line 2327 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 970:
#line 2329 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 971:
#line 2331 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 972:
#line 2333 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 973:
#line 2334 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 974:
#line 2335 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 975:
#line 2337 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 976:
#line 2339 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 977:
#line 2342 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 978:
#line 2344 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 979:
#line 2346 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 980:
#line 2347 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 981:
#line 2348 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 982:
#line 2349 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 983:
#line 2351 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 984:
#line 2352 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 985:
#line 2353 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 986:
#line 2354 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 987:
#line 2355 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 988:
#line 2357 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 989:
#line 2359 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 990:
#line 2360 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 991:
#line 2362 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 992:
#line 2364 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 993:
#line 2366 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 994:
#line 2367 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 995:
#line 2369 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 996:
#line 2371 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 997:
#line 2372 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 998:
#line 2373 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 999:
#line 2374 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1000:
#line 2376 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1001:
#line 2378 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1002:
#line 2381 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1003:
#line 2384 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1004:
#line 2385 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1005:
#line 2386 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1006:
#line 2388 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1007:
#line 2391 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1008:
#line 2394 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1009:
#line 2395 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1010:
#line 2396 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1011:
#line 2397 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1012:
#line 2399 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1013:
#line 2401 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1014:
#line 2403 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1015:
#line 2404 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1016:
#line 2406 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1017:
#line 2407 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1018:
#line 2408 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1019:
#line 2409 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1020:
#line 2410 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1021:
#line 2412 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1022:
#line 2414 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1023:
#line 2416 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1024:
#line 2418 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1026:
#line 2420 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1027:
#line 2421 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1028:
#line 2423 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1029:
#line 2425 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1030:
#line 2426 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1031:
#line 2427 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1033:
#line 2429 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1035:
#line 2433 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1036:
#line 2434 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1037:
#line 2435 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1038:
#line 2436 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1039:
#line 2437 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1040:
#line 2438 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1041:
#line 2440 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1042:
#line 2441 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1043:
#line 2443 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1044:
#line 2446 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1045:
#line 2447 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1046:
#line 2448 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1047:
#line 2449 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1048:
#line 2452 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1049:
#line 2453 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1050:
#line 2456 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1051:
#line 2457 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1052:
#line 2460 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1053:
#line 2461 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1054:
#line 2464 "frame/parser.Y"
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

  case 1055:
#line 2477 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1056:
#line 2478 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1057:
#line 2482 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1058:
#line 2483 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1059:
#line 2487 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1060:
#line 2488 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1061:
#line 2493 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1062:
#line 2497 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1063:
#line 2502 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1064:
#line 2504 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1065:
#line 2507 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1066:
#line 2509 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1067:
#line 2512 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1068:
#line 2514 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1069:
#line 2517 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1070:
#line 2518 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1071:
#line 2519 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1072:
#line 2520 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1073:
#line 2521 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1074:
#line 2522 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1075:
#line 2524 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1078:
#line 2531 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1079:
#line 2532 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1080:
#line 2533 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1081:
#line 2534 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1082:
#line 2535 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1083:
#line 2536 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1086:
#line 2541 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1087:
#line 2542 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1088:
#line 2543 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1089:
#line 2544 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1090:
#line 2545 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1091:
#line 2546 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1092:
#line 2547 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1093:
#line 2548 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1094:
#line 2549 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1095:
#line 2550 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1096:
#line 2551 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1099:
#line 2558 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1100:
#line 2559 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1102:
#line 2563 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1103:
#line 2565 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1104:
#line 2566 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1105:
#line 2569 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1106:
#line 2570 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1107:
#line 2571 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1108:
#line 2572 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1109:
#line 2575 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1110:
#line 2576 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1113:
#line 2584 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1114:
#line 2587 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1115:
#line 2588 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1119:
#line 2595 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1120:
#line 2598 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1121:
#line 2602 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1122:
#line 2603 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1123:
#line 2604 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1124:
#line 2605 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1125:
#line 2606 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1126:
#line 2607 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1127:
#line 2608 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1128:
#line 2609 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1129:
#line 2615 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1130:
#line 2616 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1131:
#line 2617 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1132:
#line 2618 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1133:
#line 2622 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1134:
#line 2623 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1135:
#line 2625 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1136:
#line 2630 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1138:
#line 2632 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1140:
#line 2634 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1141:
#line 2637 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1142:
#line 2639 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1143:
#line 2644 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1144:
#line 2647 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1145:
#line 2648 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1146:
#line 2649 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1147:
#line 2652 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1148:
#line 2654 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1149:
#line 2658 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1150:
#line 2659 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1151:
#line 2663 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1152:
#line 2664 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1153:
#line 2665 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1154:
#line 2666 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1155:
#line 2672 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1156:
#line 2673 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1157:
#line 2679 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1158:
#line 2680 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1159:
#line 2681 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1160:
#line 2682 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1163:
#line 2690 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1164:
#line 2692 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1165:
#line 2693 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1166:
#line 2694 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1167:
#line 2698 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1168:
#line 2699 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1169:
#line 2700 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1170:
#line 2701 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1171:
#line 2704 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1172:
#line 2705 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1173:
#line 2708 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1174:
#line 2709 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1175:
#line 2710 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1176:
#line 2713 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1177:
#line 2714 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1178:
#line 2715 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1179:
#line 2718 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1180:
#line 2719 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1182:
#line 2721 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1183:
#line 2722 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1184:
#line 2725 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1185:
#line 2726 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1186:
#line 2727 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1191:
#line 2734 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1192:
#line 2738 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1193:
#line 2740 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1194:
#line 2742 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1196:
#line 2747 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1197:
#line 2749 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1198:
#line 2751 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1208:
#line 2764 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1209:
#line 2765 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1210:
#line 2766 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1211:
#line 2769 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1212:
#line 2770 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1213:
#line 2771 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1214:
#line 2774 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1215:
#line 2775 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1216:
#line 2776 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1217:
#line 2779 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1218:
#line 2780 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1219:
#line 2781 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1221:
#line 2785 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1222:
#line 2786 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1223:
#line 2787 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1224:
#line 2790 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1225:
#line 2791 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1226:
#line 2792 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1227:
#line 2795 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1228:
#line 2796 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1229:
#line 2797 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1230:
#line 2800 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1231:
#line 2801 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1232:
#line 2802 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1233:
#line 2805 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1234:
#line 2806 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1235:
#line 2807 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1236:
#line 2811 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1237:
#line 2813 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1238:
#line 2815 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1239:
#line 2819 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1240:
#line 2823 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1241:
#line 2825 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1242:
#line 2829 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1243:
#line 2832 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1244:
#line 2833 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1245:
#line 2834 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1246:
#line 2835 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1247:
#line 2838 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1248:
#line 2840 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1249:
#line 2841 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1250:
#line 2843 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1252:
#line 2847 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1253:
#line 2848 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1254:
#line 2849 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1255:
#line 2852 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1256:
#line 2853 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1257:
#line 2857 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1259:
#line 2859 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1262:
#line 2864 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1263:
#line 2865 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1264:
#line 2866 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1265:
#line 2869 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1266:
#line 2870 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1267:
#line 2871 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1268:
#line 2874 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1269:
#line 2876 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1270:
#line 2881 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1271:
#line 2884 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1272:
#line 2891 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1273:
#line 2893 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1274:
#line 2895 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1275:
#line 2900 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1277:
#line 2904 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1278:
#line 2905 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1279:
#line 2906 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1280:
#line 2908 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1281:
#line 2910 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1282:
#line 2915 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11017 "frame/parser.C"
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


#line 2919 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

