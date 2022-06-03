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
#define YYFINAL  363
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5596

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  360
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  222
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1285
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2825

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
      59,    62,    65,    68,    71,    73,    76,    80,    83,    87,
      90,    93,    96,    99,   103,   106,   110,   113,   116,   119,
     122,   125,   128,   130,   134,   137,   140,   143,   145,   148,
     151,   154,   156,   159,   161,   164,   167,   170,   173,   175,
     177,   179,   181,   184,   187,   190,   193,   196,   199,   202,
     205,   208,   211,   213,   215,   217,   219,   221,   223,   225,
     227,   229,   230,   233,   236,   238,   240,   241,   243,   245,
     247,   249,   251,   253,   255,   258,   261,   264,   267,   269,
     271,   273,   275,   277,   279,   281,   283,   285,   287,   289,
     291,   293,   295,   297,   299,   301,   303,   305,   307,   309,
     311,   313,   315,   317,   319,   321,   323,   325,   327,   329,
     331,   333,   335,   337,   338,   340,   342,   344,   346,   348,
     349,   351,   353,   355,   357,   359,   361,   363,   365,   367,
     369,   371,   373,   375,   377,   379,   381,   383,   384,   386,
     388,   390,   392,   394,   396,   398,   399,   401,   403,   404,
     406,   408,   410,   411,   413,   415,   416,   418,   420,   421,
     423,   425,   426,   428,   430,   432,   434,   436,   438,   440,
     441,   443,   445,   447,   449,   451,   453,   455,   456,   458,
     460,   462,   463,   465,   467,   469,   471,   473,   476,   479,
     482,   485,   488,   491,   494,   497,   499,   502,   504,   507,
     509,   512,   515,   522,   525,   530,   533,   536,   539,   543,
     546,   549,   551,   554,   556,   559,   564,   570,   573,   577,
     583,   590,   592,   594,   596,   604,   616,   625,   638,   640,
     643,   646,   648,   650,   653,   656,   659,   662,   666,   670,
     673,   676,   678,   680,   682,   684,   686,   688,   690,   693,
     696,   699,   701,   705,   708,   711,   714,   721,   732,   734,
     737,   739,   746,   757,   759,   762,   765,   768,   771,   774,
     777,   791,   805,   818,   831,   833,   834,   836,   838,   843,
     850,   852,   854,   856,   858,   860,   862,   864,   866,   868,
     873,   877,   882,   883,   890,   899,   902,   906,   910,   914,
     915,   920,   925,   930,   935,   939,   943,   945,   949,   955,
     960,   965,   969,   972,   973,   975,   977,   979,   982,   984,
     988,   989,   992,   995,   998,  1001,  1004,  1007,  1010,  1013,
    1016,  1019,  1022,  1025,  1028,  1031,  1033,  1036,  1039,  1042,
    1047,  1051,  1054,  1057,  1060,  1062,  1066,  1069,  1072,  1074,
    1077,  1086,  1089,  1091,  1094,  1096,  1099,  1101,  1106,  1110,
    1113,  1115,  1123,  1132,  1140,  1149,  1151,  1153,  1155,  1158,
    1160,  1162,  1165,  1167,  1168,  1171,  1174,  1176,  1177,  1180,
    1183,  1185,  1187,  1190,  1193,  1196,  1198,  1200,  1202,  1204,
    1206,  1208,  1209,  1211,  1214,  1216,  1221,  1227,  1228,  1231,
    1233,  1239,  1242,  1245,  1247,  1249,  1251,  1254,  1256,  1259,
    1261,  1263,  1264,  1266,  1268,  1269,  1271,  1277,  1284,  1288,
    1295,  1299,  1301,  1305,  1307,  1309,  1311,  1315,  1322,  1330,
    1336,  1339,  1341,  1347,  1353,  1355,  1359,  1360,  1362,  1365,
    1367,  1372,  1374,  1377,  1379,  1382,  1386,  1389,  1391,  1394,
    1396,  1401,  1404,  1406,  1408,  1412,  1414,  1417,  1421,  1424,
    1425,  1427,  1429,  1434,  1437,  1438,  1440,  1444,  1449,  1454,
    1455,  1457,  1459,  1461,  1463,  1465,  1467,  1469,  1471,  1473,
    1475,  1477,  1479,  1481,  1483,  1485,  1488,  1490,  1493,  1495,
    1498,  1501,  1504,  1507,  1509,  1511,  1513,  1514,  1516,  1517,
    1519,  1520,  1522,  1523,  1525,  1526,  1529,  1532,  1533,  1535,
    1538,  1540,  1547,  1553,  1555,  1557,  1559,  1562,  1565,  1568,
    1570,  1572,  1574,  1576,  1579,  1581,  1583,  1585,  1588,  1590,
    1592,  1594,  1597,  1600,  1603,  1604,  1606,  1607,  1609,  1611,
    1613,  1615,  1617,  1619,  1621,  1623,  1626,  1629,  1632,  1634,
    1637,  1641,  1643,  1646,  1649,  1654,  1661,  1663,  1674,  1676,
    1679,  1683,  1687,  1690,  1693,  1696,  1699,  1702,  1705,  1708,
    1713,  1718,  1723,  1727,  1731,  1737,  1742,  1747,  1752,  1756,
    1760,  1764,  1768,  1771,  1774,  1779,  1783,  1787,  1791,  1795,
    1800,  1805,  1810,  1815,  1821,  1826,  1833,  1841,  1846,  1851,
    1857,  1860,  1864,  1868,  1872,  1875,  1879,  1883,  1887,  1891,
    1896,  1900,  1906,  1913,  1917,  1921,  1926,  1930,  1934,  1938,
    1942,  1946,  1952,  1956,  1960,  1965,  1969,  1972,  1975,  1977,
    1981,  1986,  1991,  1996,  2001,  2006,  2013,  2018,  2023,  2029,
    2034,  2039,  2044,  2049,  2055,  2060,  2067,  2075,  2080,  2085,
    2091,  2097,  2103,  2109,  2115,  2121,  2129,  2135,  2141,  2148,
    2153,  2158,  2163,  2168,  2173,  2180,  2185,  2190,  2196,  2202,
    2208,  2214,  2220,  2227,  2233,  2241,  2250,  2256,  2262,  2269,
    2273,  2277,  2281,  2285,  2290,  2294,  2300,  2307,  2311,  2315,
    2320,  2324,  2328,  2332,  2336,  2340,  2346,  2350,  2354,  2359,
    2364,  2369,  2373,  2379,  2384,  2389,  2392,  2396,  2403,  2410,
    2412,  2414,  2416,  2419,  2422,  2425,  2429,  2433,  2436,  2449,
    2452,  2455,  2457,  2461,  2466,  2469,  2470,  2474,  2476,  2479,
    2482,  2485,  2488,  2491,  2496,  2501,  2506,  2510,  2515,  2521,
    2530,  2537,  2542,  2552,  2559,  2567,  2578,  2590,  2603,  2613,
    2619,  2624,  2631,  2635,  2641,  2647,  2654,  2660,  2665,  2675,
    2686,  2698,  2708,  2715,  2722,  2729,  2736,  2743,  2750,  2757,
    2764,  2771,  2779,  2787,  2790,  2795,  2800,  2805,  2810,  2816,
    2821,  2826,  2832,  2838,  2842,  2847,  2852,  2857,  2862,  2870,
    2880,  2887,  2898,  2910,  2923,  2933,  2937,  2940,  2944,  2950,
    2958,  2963,  2967,  2971,  2978,  2986,  2994,  2999,  3004,  3009,
    3019,  3024,  3028,  3033,  3041,  3049,  3052,  3056,  3060,  3064,
    3069,  3072,  3075,  3080,  3091,  3095,  3097,  3101,  3104,  3107,
    3110,  3113,  3117,  3123,  3128,  3134,  3137,  3140,  3143,  3146,
    3150,  3153,  3156,  3159,  3163,  3166,  3170,  3175,  3179,  3183,
    3190,  3195,  3198,  3202,  3205,  3208,  3213,  3217,  3221,  3224,
    3228,  3230,  3233,  3235,  3238,  3241,  3244,  3246,  3248,  3250,
    3252,  3255,  3257,  3260,  3263,  3265,  3268,  3271,  3273,  3276,
    3278,  3280,  3282,  3284,  3286,  3288,  3290,  3292,  3293,  3295,
    3298,  3301,  3304,  3308,  3314,  3322,  3330,  3337,  3344,  3351,
    3358,  3364,  3371,  3378,  3385,  3392,  3399,  3406,  3413,  3425,
    3433,  3441,  3449,  3459,  3469,  3480,  3493,  3506,  3509,  3512,
    3516,  3521,  3526,  3531,  3532,  3534,  3536,  3541,  3546,  3548,
    3550,  3552,  3554,  3556,  3558,  3560,  3562,  3565,  3567,  3569,
    3571,  3575,  3579,  3588,  3595,  3606,  3614,  3622,  3628,  3631,
    3634,  3638,  3643,  3649,  3653,  3659,  3665,  3669,  3674,  3680,
    3686,  3692,  3696,  3702,  3705,  3709,  3713,  3719,  3723,  3727,
    3731,  3736,  3742,  3748,  3752,  3758,  3764,  3768,  3773,  3779,
    3785,  3788,  3791,  3795,  3801,  3808,  3815,  3819,  3823,  3827,
    3834,  3840,  3846,  3849,  3853,  3857,  3863,  3870,  3874,  3877,
    3880,  3884,  3887,  3891,  3894,  3898,  3904,  3911,  3914,  3917,
    3920,  3922,  3927,  3932,  3934,  3937,  3940,  3943,  3946,  3949,
    3952,  3955,  3959,  3962,  3966,  3969,  3973,  3975,  3977,  3979,
    3981,  3983,  3984,  3987,  3988,  3991,  3992,  3994,  3995,  3996,
    3998,  4000,  4002,  4004,  4006,  4014,  4023,  4026,  4033,  4036,
    4043,  4046,  4050,  4053,  4055,  4057,  4061,  4065,  4067,  4072,
    4075,  4077,  4081,  4085,  4090,  4094,  4098,  4102,  4104,  4106,
    4108,  4110,  4112,  4114,  4116,  4118,  4120,  4122,  4124,  4126,
    4128,  4130,  4133,  4134,  4135,  4138,  4145,  4153,  4156,  4158,
    4162,  4164,  4168,  4170,  4173,  4176,  4178,  4182,  4183,  4184,
    4187,  4190,  4192,  4196,  4202,  4204,  4207,  4210,  4214,  4217,
    4220,  4223,  4226,  4228,  4230,  4232,  4234,  4239,  4242,  4246,
    4250,  4253,  4257,  4260,  4263,  4266,  4270,  4274,  4278,  4281,
    4285,  4287,  4291,  4295,  4297,  4300,  4303,  4306,  4309,  4319,
    4326,  4328,  4330,  4332,  4334,  4337,  4340,  4344,  4348,  4350,
    4353,  4357,  4361,  4363,  4366,  4368,  4370,  4372,  4374,  4376,
    4379,  4382,  4387,  4389,  4392,  4395,  4398,  4402,  4404,  4406,
    4408,  4411,  4414,  4417,  4420,  4423,  4427,  4431,  4435,  4439,
    4443,  4447,  4451,  4453,  4456,  4459,  4462,  4466,  4469,  4473,
    4477,  4480,  4483,  4486,  4489,  4492,  4495,  4498,  4501,  4504,
    4507,  4510,  4513,  4516,  4519,  4523,  4527,  4531,  4534,  4537,
    4540,  4543,  4546,  4549,  4552,  4555,  4558,  4561,  4564,  4567,
    4571,  4575,  4579,  4584,  4591,  4594,  4596,  4598,  4600,  4602,
    4604,  4605,  4611,  4613,  4620,  4624,  4626,  4629,  4632,  4635,
    4639,  4643,  4646,  4649,  4652,  4655,  4658,  4661,  4665,  4668,
    4671,  4675,  4677,  4681,  4686,  4688,  4691,  4697,  4704,  4711,
    4714,  4716,  4719,  4722,  4728,  4735
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     361,     0,    -1,    98,   363,    -1,    44,   395,    -1,    41,
      67,     5,    -1,    41,    67,   144,    -1,    41,    67,   364,
      -1,    47,   400,    -1,    60,    -1,    65,    -1,    66,   402,
      -1,    68,   291,     5,    -1,    69,   407,    -1,    70,   409,
      -1,    78,   410,    -1,    85,   419,    -1,    87,   421,    -1,
      88,   422,    -1,    97,   364,    -1,   120,   424,    -1,   128,
     425,    -1,   141,   426,    -1,   145,   470,    -1,   148,   473,
      -1,   152,    -1,   153,   364,    -1,   153,    67,     5,    -1,
     159,   479,    -1,   165,    16,     4,    -1,   179,   482,    -1,
     182,   500,    -1,   183,   501,    -1,   184,   502,    -1,   187,
     518,   503,    -1,   188,   538,    -1,   202,    67,     5,    -1,
     219,   539,    -1,   220,   540,    -1,   221,   543,    -1,   242,
      89,    -1,   235,   545,    -1,   233,   544,    -1,   250,    -1,
     246,   518,   547,    -1,   252,   552,    -1,   254,   553,    -1,
     259,   555,    -1,   273,    -1,   279,   570,    -1,   294,     4,
      -1,   295,   390,    -1,   306,    -1,   308,   572,    -1,   314,
      -1,   317,   574,    -1,   318,   575,    -1,   348,   579,    -1,
     355,   580,    -1,     3,    -1,     4,    -1,   216,    -1,   215,
      -1,   197,   364,    -1,   222,   364,    -1,   224,   364,    -1,
     318,   364,    -1,    44,   364,    -1,    47,   364,    -1,    77,
     364,    -1,    85,   364,    -1,   146,   364,    -1,   252,   364,
      -1,     4,    -1,   351,    -1,   356,    -1,   216,    -1,   302,
      -1,   207,    -1,   357,    -1,   215,    -1,   122,    -1,    -1,
     253,    38,    -1,   137,    38,    -1,   253,    -1,   137,    -1,
      -1,   367,    -1,   362,    -1,     7,    -1,     8,    -1,     9,
      -1,    10,    -1,    11,    -1,   368,   368,    -1,   369,   370,
      -1,   370,   370,    -1,   362,   362,    -1,   160,    -1,   226,
      -1,   103,    -1,    19,    -1,   373,    -1,   318,    -1,   319,
      -1,   320,    -1,   321,    -1,   322,    -1,   323,    -1,   324,
      -1,   325,    -1,   326,    -1,   327,    -1,   328,    -1,   329,
      -1,   330,    -1,   331,    -1,   332,    -1,   333,    -1,   334,
      -1,   335,    -1,   336,    -1,   337,    -1,   338,    -1,   339,
      -1,   340,    -1,   341,    -1,   342,    -1,   343,    -1,   344,
      -1,   345,    -1,    57,    -1,   221,    -1,    -1,   352,    -1,
     210,    -1,   202,    -1,   209,    -1,   245,    -1,    -1,   282,
      -1,   264,    -1,    92,    -1,   173,    -1,   177,    -1,   181,
      -1,   234,    -1,   283,    -1,   284,    -1,    28,    -1,   275,
      -1,   154,    -1,    30,    -1,   261,    -1,   256,    -1,    96,
      -1,   166,    -1,    -1,   130,    -1,    35,    -1,   131,    -1,
     167,    -1,   157,    -1,   139,    -1,   108,    -1,    -1,    99,
      -1,   268,    -1,    -1,    99,    -1,    24,    -1,    25,    -1,
      -1,   272,    -1,   168,    -1,    -1,    17,    -1,   162,    -1,
      -1,   160,    -1,   188,    -1,    -1,    63,    -1,    49,    -1,
     104,    -1,    86,    -1,   358,    -1,    27,    -1,    52,    -1,
      -1,     4,    -1,    83,    -1,   155,    -1,   228,    -1,   229,
      -1,   243,    -1,   286,    -1,    -1,    32,    -1,   288,    -1,
     189,    -1,    -1,   203,    -1,    42,    -1,    43,    -1,   174,
      -1,   175,    -1,   312,   394,    -1,    48,   391,    -1,    75,
     392,    -1,   153,   393,    -1,   191,   550,    -1,    37,   551,
      -1,   260,   362,    -1,   296,   362,    -1,   364,    -1,    67,
       5,    -1,   364,    -1,    67,     5,    -1,   364,    -1,    67,
       5,    -1,   362,   362,    -1,   230,   362,   362,   362,   362,
     362,    -1,    12,   396,    -1,    72,     5,     5,     5,    -1,
     102,     4,    -1,   121,   397,    -1,   138,   398,    -1,    54,
     276,     4,    -1,   299,   399,    -1,   125,     5,    -1,    60,
      -1,   362,   362,    -1,   362,    -1,   362,   362,    -1,   362,
      12,   362,   362,    -1,   362,   362,    12,   362,   362,    -1,
     299,   362,    -1,   299,   362,   362,    -1,   299,   362,    12,
     362,   362,    -1,   299,   362,   362,    12,   362,   362,    -1,
      32,    -1,   288,    -1,   126,    -1,   362,   362,    12,    60,
       5,     5,     5,    -1,   362,   362,     4,   362,   362,    12,
      60,     5,     5,     5,     5,    -1,   362,   362,    12,   362,
     362,     5,     5,     5,    -1,   362,   362,     4,   362,   362,
      12,   362,   362,     5,     5,     5,     5,    -1,   362,    -1,
     362,   362,    -1,   299,   401,    -1,   126,    -1,   362,    -1,
     362,   362,    -1,   263,   403,    -1,   198,   404,    -1,   192,
     405,    -1,   309,   362,   362,    -1,   309,   202,   202,    -1,
     354,   406,    -1,   237,   364,    -1,   142,    -1,   180,    -1,
     362,    -1,   192,    -1,   354,    -1,   353,    -1,   309,    -1,
       4,   378,    -1,   198,   378,    -1,   256,     4,    -1,   249,
      -1,   362,     4,     4,    -1,    79,   362,    -1,   256,     4,
      -1,   176,     4,    -1,     4,   362,   362,     4,     6,     4,
      -1,   252,   362,   362,   362,   362,   362,   362,     4,     6,
       4,    -1,    40,    -1,   199,   408,    -1,   113,    -1,     4,
     362,   362,     4,     6,     4,    -1,   252,   362,   362,   362,
     362,   362,   362,     4,     6,     4,    -1,   377,    -1,   181,
     362,    -1,    84,   411,    -1,   101,   412,    -1,   179,   413,
      -1,   223,   417,    -1,   259,   418,    -1,     5,     4,     4,
     416,     4,     4,   377,   362,   414,   415,   362,   362,     5,
      -1,     5,     4,     4,   416,     4,     4,   377,   362,   362,
     415,   362,   362,     5,    -1,     5,     4,     4,   416,     4,
       4,   377,   362,   414,   362,   362,     5,    -1,     5,     4,
       4,   416,     4,     4,   377,   362,   362,   362,   362,     5,
      -1,   232,    -1,    -1,    31,    -1,     5,    -1,     5,     5,
       4,   364,    -1,     5,     4,   364,     5,   372,   379,    -1,
     192,    -1,   354,    -1,   353,    -1,   309,    -1,   142,    -1,
     180,    -1,   279,    -1,    47,    -1,     5,    -1,     5,     5,
       4,   364,    -1,     5,   372,   379,    -1,    31,     5,   372,
     379,    -1,    -1,   362,   362,   362,   362,   372,   379,    -1,
      60,   371,   372,   379,   362,   362,   372,   381,    -1,   295,
     420,    -1,    40,   362,   362,    -1,   199,   362,   362,    -1,
     113,   362,   362,    -1,    -1,   362,   362,   372,   379,    -1,
      40,   362,   362,     4,    -1,   199,   362,   362,     4,    -1,
     113,   362,   362,     4,    -1,   374,   362,   362,    -1,   372,
     379,   371,    -1,   364,    -1,   317,   362,   362,    -1,    40,
     199,   374,   362,   362,    -1,   199,   374,   362,   362,    -1,
      40,   199,   372,   371,    -1,   199,   372,   371,    -1,    33,
       4,    -1,    -1,    32,    -1,   288,    -1,   189,    -1,     6,
     362,    -1,    65,    -1,   148,   119,     5,    -1,    -1,    41,
      67,    -1,    44,   429,    -1,    47,   431,    -1,    66,   432,
      -1,    69,   436,    -1,    68,   435,    -1,    70,   438,    -1,
      78,   440,    -1,    80,   443,    -1,    85,   444,    -1,    87,
     445,    -1,    89,   447,    -1,    88,   446,    -1,    95,   448,
      -1,    97,    -1,   127,   452,    -1,   145,   458,    -1,   153,
      67,    -1,   155,     5,     5,     4,    -1,   156,    90,   427,
      -1,   159,   450,    -1,   163,   449,    -1,   165,    16,    -1,
     192,    -1,   187,   518,   512,    -1,   188,   459,    -1,   202,
      67,    -1,   219,    -1,   220,   460,    -1,   227,   290,   374,
     362,   362,     4,     4,     5,    -1,   252,   461,    -1,   254,
      -1,   279,   462,    -1,   294,    -1,   295,   463,    -1,   303,
      -1,   310,   374,   362,   362,    -1,   316,    90,   428,    -1,
     318,   468,    -1,   355,    -1,     5,     5,   362,   362,   374,
       4,   423,    -1,     5,     5,   362,   362,   372,   379,     4,
     423,    -1,     5,     5,   362,   362,   374,     4,   423,    -1,
       5,     5,   362,   362,   372,   379,     4,   423,    -1,   102,
      -1,   121,    -1,   138,    -1,    54,   276,    -1,    89,    -1,
     125,    -1,    72,   430,    -1,   178,    -1,    -1,   192,     5,
      -1,   105,     5,    -1,   121,    -1,    -1,   414,   415,    -1,
     362,   415,    -1,   263,    -1,   198,    -1,   192,   433,    -1,
     309,   172,    -1,   354,   434,    -1,   237,    -1,   198,    -1,
     256,    -1,    79,    -1,   256,    -1,   176,    -1,    -1,   291,
      -1,   172,   437,    -1,     4,    -1,     4,   374,   362,   362,
      -1,     4,   362,   362,   377,   362,    -1,    -1,   172,   439,
      -1,   181,    -1,     4,   362,   362,   377,   362,    -1,   372,
     379,    -1,    66,   441,    -1,    67,    -1,    93,    -1,   172,
      -1,   213,   172,    -1,   191,    -1,    70,   442,    -1,   279,
      -1,   347,    -1,    -1,   198,    -1,   263,    -1,    -1,   181,
      -1,   362,   362,   372,   379,   380,    -1,   374,   362,   362,
     372,   379,   380,    -1,   372,   379,   380,    -1,    60,   372,
     379,   380,   372,   381,    -1,   295,   372,   379,    -1,   374,
      -1,   372,   379,   380,    -1,   287,    -1,    33,    -1,   374,
      -1,   372,   379,   380,    -1,   372,   379,   371,   362,   362,
       5,    -1,     4,   372,   379,   371,   362,   362,     5,    -1,
     374,   362,   362,     4,     4,    -1,     5,   365,    -1,    66,
      -1,   374,   362,   362,     5,   365,    -1,     6,     4,     4,
       4,     4,    -1,    89,    -1,   123,   201,   451,    -1,    -1,
       4,    -1,   362,   362,    -1,   204,    -1,    60,   372,   379,
     380,    -1,    82,    -1,   102,   455,    -1,    45,    -1,   119,
     453,    -1,   123,   201,   456,    -1,   150,   454,    -1,   151,
      -1,   214,   201,    -1,   276,    -1,   276,   372,   379,   381,
      -1,   277,   457,    -1,   347,    -1,     4,    -1,   374,   362,
     362,    -1,     4,    -1,   169,     5,    -1,     4,   169,     5,
      -1,   318,     4,    -1,    -1,     4,    -1,   365,    -1,   365,
     374,   362,   362,    -1,   365,     4,    -1,    -1,     4,    -1,
     135,   160,   372,    -1,   135,   160,     4,   372,    -1,   299,
     160,   362,   372,    -1,    -1,   218,    -1,   311,    -1,    67,
      -1,   186,    -1,   245,    -1,   289,    -1,   298,    -1,    82,
      -1,    46,    -1,   237,    -1,    62,    -1,   289,    -1,   312,
      -1,   138,    -1,   244,    -1,   244,   193,    -1,   274,    -1,
     274,   193,    -1,    21,    -1,   312,   467,    -1,    48,   464,
      -1,    75,   465,    -1,   153,   466,    -1,   191,    -1,    37,
      -1,   260,    -1,    -1,    67,    -1,    -1,    67,    -1,    -1,
      67,    -1,    -1,   230,    -1,    -1,    16,   469,    -1,   201,
     373,    -1,    -1,   231,    -1,    84,   471,    -1,   101,    -1,
     372,   379,   380,   472,     5,     5,    -1,   372,   379,   380,
     472,     5,    -1,    20,    -1,   240,    -1,    19,    -1,    41,
      67,    -1,    44,   474,    -1,    78,   475,    -1,    85,    -1,
      96,    -1,    97,    -1,   103,    -1,   127,   476,    -1,   145,
      -1,   159,    -1,   166,    -1,   187,   477,    -1,   226,    -1,
     160,    -1,   279,    -1,   289,   372,    -1,   318,   478,    -1,
      73,     5,    -1,    -1,    31,    -1,    -1,    44,    -1,    88,
      -1,   197,    -1,   153,    -1,   266,    -1,   223,    -1,   304,
      -1,   372,    -1,    59,   372,    -1,   117,   372,    -1,   177,
     372,    -1,    18,    -1,   295,   372,    -1,   205,     4,     4,
      -1,   118,    -1,   190,     5,    -1,    89,   481,    -1,   267,
     123,   201,   480,    -1,   267,     6,     4,     4,     4,     4,
      -1,   308,    -1,   318,   362,   362,   362,   362,   362,   362,
     362,   362,     4,    -1,     5,    -1,     5,     4,    -1,     4,
       4,    57,    -1,     4,     4,   372,    -1,   198,   364,    -1,
      26,   483,    -1,   114,   485,    -1,   127,   486,    -1,   162,
     499,    -1,   212,   497,    -1,   225,   498,    -1,     5,    14,
       5,   384,    -1,     5,    15,     5,   384,    -1,     5,    62,
       5,   384,    -1,     5,   195,   384,    -1,     5,   196,   384,
      -1,     5,   270,   382,     4,   384,    -1,     5,   280,     4,
     384,    -1,     5,   281,     4,   384,    -1,     5,   311,     5,
     384,    -1,   252,    88,   484,    -1,     5,    14,     5,    -1,
       5,    15,     5,    -1,     5,    62,     5,    -1,     5,   195,
      -1,     5,   196,    -1,     5,   270,   382,     4,    -1,     5,
     280,     4,    -1,     5,   281,     4,    -1,     5,   311,     5,
      -1,     5,     5,   278,    -1,     5,    14,     5,   384,    -1,
       5,    15,     5,   384,    -1,     5,    62,     5,   384,    -1,
       5,   195,   383,   384,    -1,     5,     5,   278,   383,   384,
      -1,     5,   196,   383,   384,    -1,     5,   270,   382,     4,
     383,   384,    -1,     5,   285,   382,     4,     4,   383,   384,
      -1,     5,   280,     4,   384,    -1,     5,   281,     4,   384,
      -1,     5,   311,     5,   383,   384,    -1,   277,   487,    -1,
     119,    88,   488,    -1,   252,   160,   496,    -1,   252,    88,
     495,    -1,   197,   489,    -1,     5,    14,     5,    -1,     5,
      15,     5,    -1,     5,    62,     5,    -1,     5,   195,   383,
      -1,     5,     5,   278,   383,    -1,     5,   196,   383,    -1,
       5,   270,   382,     4,   383,    -1,     5,   285,   382,     4,
       4,   383,    -1,     5,   280,     4,    -1,     5,   281,     4,
      -1,     5,   311,     5,   383,    -1,     5,    14,     5,    -1,
       5,    15,     5,    -1,     5,    62,     5,    -1,     5,   195,
     383,    -1,     5,   196,   383,    -1,     5,   270,   382,     4,
     383,    -1,     5,   280,     4,    -1,     5,   281,     4,    -1,
       5,   311,     5,   383,    -1,   160,   165,   490,    -1,   165,
     491,    -1,   160,   492,    -1,   494,    -1,   160,   346,   493,
      -1,     5,    14,     5,   384,    -1,     5,    15,     5,   384,
      -1,     5,    62,     5,   384,    -1,     5,   195,   383,   384,
      -1,     5,   196,   383,   384,    -1,     5,   270,   382,     4,
     383,   384,    -1,     5,   280,     4,   384,    -1,     5,   281,
       4,   384,    -1,     5,   311,     5,   383,   384,    -1,     5,
      14,     5,   384,    -1,     5,    15,     5,   384,    -1,     5,
      62,     5,   384,    -1,     5,   195,   383,   384,    -1,     5,
       5,   278,   383,   384,    -1,     5,   196,   383,   384,    -1,
       5,   270,   382,     4,   383,   384,    -1,     5,   285,   382,
       4,     4,   383,   384,    -1,     5,   280,     4,   384,    -1,
       5,   281,     4,   384,    -1,     5,   311,     5,   383,   384,
      -1,   373,     5,    14,     5,   384,    -1,   373,     5,    15,
       5,   384,    -1,   373,     5,    62,     5,   384,    -1,   373,
       5,   195,   383,   384,    -1,   373,     5,   196,   383,   384,
      -1,   373,     5,   270,   382,     4,   383,   384,    -1,   373,
       5,   280,     4,   384,    -1,   373,     5,   281,     4,   384,
      -1,   373,     5,   311,     5,   383,   384,    -1,     5,    14,
       5,   384,    -1,     5,    15,     5,   384,    -1,     5,    62,
       5,   384,    -1,     5,   195,   383,   384,    -1,     5,   196,
     383,   384,    -1,     5,   270,   382,     4,   383,   384,    -1,
       5,   280,     4,   384,    -1,     5,   281,     4,   384,    -1,
       5,   311,     5,   383,   384,    -1,   373,     5,    14,     5,
     384,    -1,   373,     5,    15,     5,   384,    -1,   373,     5,
      62,     5,   384,    -1,   373,     5,   195,   383,   384,    -1,
     373,     5,     5,   278,   383,   384,    -1,   373,     5,   196,
     383,   384,    -1,   373,     5,   270,   382,     4,   383,   384,
      -1,   373,     5,   285,   382,     4,     4,   383,   384,    -1,
     373,     5,   280,     4,   384,    -1,   373,     5,   281,     4,
     384,    -1,   373,     5,   311,     5,   383,   384,    -1,     5,
      14,     5,    -1,     5,    15,     5,    -1,     5,    62,     5,
      -1,     5,   195,   383,    -1,     5,     5,   278,   383,    -1,
       5,   196,   383,    -1,     5,   270,   382,     4,   383,    -1,
       5,   285,   382,     4,     4,   383,    -1,     5,   280,     4,
      -1,     5,   281,     4,    -1,     5,   311,     5,   383,    -1,
       5,    14,     5,    -1,     5,    15,     5,    -1,     5,    62,
       5,    -1,     5,   195,   383,    -1,     5,   196,   383,    -1,
       5,   270,   382,     4,   383,    -1,     5,   280,     4,    -1,
       5,   281,     4,    -1,     5,   311,     5,   383,    -1,     5,
      14,     5,   384,    -1,     5,    62,     5,   384,    -1,     5,
     195,   384,    -1,     5,   270,   382,     4,   384,    -1,     5,
     280,     4,   384,    -1,     5,   311,     5,   384,    -1,     5,
       5,    -1,   277,     5,     5,    -1,    95,     4,     4,     4,
       4,     4,    -1,   192,     4,     4,     4,     4,     4,    -1,
     113,    -1,   236,    -1,   364,    -1,   143,   364,    -1,    89,
     364,    -1,    67,     5,    -1,     5,     4,     4,    -1,   308,
     362,   362,    -1,   355,   362,    -1,     5,     5,   373,   379,
       5,     5,   373,   379,   362,   373,   381,     5,    -1,    61,
     506,    -1,    67,     5,    -1,    81,    -1,    74,   511,     5,
      -1,    74,   511,   311,     5,    -1,    76,   101,    -1,    -1,
      84,   504,   507,    -1,    90,    -1,   101,   509,    -1,   107,
     510,    -1,   116,     4,    -1,   132,     5,    -1,   153,    17,
      -1,   153,   217,   362,   362,    -1,   153,   300,   362,   362,
      -1,     4,    20,   387,   364,    -1,     4,    21,   367,    -1,
       4,    21,   367,   374,    -1,     4,    21,   367,   372,   379,
      -1,     4,    22,   244,   362,   362,     4,   372,   381,    -1,
       4,    22,   244,     5,   372,   381,    -1,     4,    49,   124,
     364,    -1,     4,    50,   244,   362,   362,   362,     4,   372,
     381,    -1,     4,    50,   244,     5,   372,   381,    -1,     4,
      49,   244,   362,   362,   372,   381,    -1,     4,    53,   107,
     367,   367,     4,   362,   362,   362,     4,    -1,     4,    53,
     107,   367,   367,     4,   362,   362,   362,     4,   374,    -1,
       4,    53,   107,   367,   367,     4,   362,   362,   362,     4,
     372,   379,    -1,     4,    53,   107,     5,     5,   372,   379,
     372,   381,    -1,     4,    56,   505,     5,     5,    -1,     4,
      63,   124,   364,    -1,     4,    63,   244,   362,   372,   381,
      -1,     4,    67,     5,    -1,     4,    75,    27,   364,   364,
      -1,     4,    75,   170,     5,     5,    -1,     4,    75,   244,
     362,   372,   381,    -1,     4,    75,   289,   372,   379,    -1,
       4,    76,   142,   364,    -1,     4,    83,   107,   367,   367,
       4,   362,   362,     4,    -1,     4,    83,   107,   367,   367,
       4,   362,   362,     4,   374,    -1,     4,    83,   107,   367,
     367,     4,   362,   362,     4,   372,   379,    -1,     4,    83,
     107,     5,     5,   372,   379,   372,   381,    -1,     4,    84,
      22,   244,   362,   362,    -1,     4,    84,    50,   244,   362,
     362,    -1,     4,    84,    53,    21,   362,   362,    -1,     4,
      84,    53,   244,   362,   362,    -1,     4,    84,   112,   244,
     362,   362,    -1,     4,    84,   115,    21,   362,   362,    -1,
       4,    84,   115,   244,   362,   362,    -1,     4,    84,    83,
      21,   362,   362,    -1,     4,    84,    83,   244,   362,   362,
      -1,     4,    84,   232,   315,     4,   362,   362,    -1,     4,
      84,   265,   315,     4,   362,   362,    -1,     4,   101,    -1,
       4,   101,    22,     4,    -1,     4,   101,    50,     4,    -1,
       4,   101,    53,     4,    -1,     4,   101,   112,     4,    -1,
       4,   101,    56,   505,     5,    -1,     4,   101,   115,     4,
      -1,     4,   101,    83,     4,    -1,     4,   101,   232,   315,
       4,    -1,     4,   101,   265,   315,     4,    -1,     4,   101,
     291,    -1,     4,   101,   291,     5,    -1,     4,   101,   291,
       4,    -1,     4,   107,    40,     4,    -1,     4,   111,   124,
     364,    -1,     4,   111,   244,   362,   362,   372,   381,    -1,
       4,   112,   244,   362,   362,   362,     4,   372,   381,    -1,
       4,   112,   244,     5,   372,   381,    -1,     4,   115,   107,
     367,   367,     4,   362,   362,   362,     4,    -1,     4,   115,
     107,   367,   367,     4,   362,   362,   362,     4,   374,    -1,
       4,   115,   107,   367,   367,     4,   362,   362,   362,     4,
     372,   379,    -1,     4,   115,   107,     5,     5,   372,   379,
     372,   381,    -1,     4,   132,     5,    -1,     4,   153,    -1,
       4,   153,   217,    -1,     4,   176,    27,   364,   364,    -1,
       4,   176,   230,   372,   379,   371,   371,    -1,     4,   200,
     362,   362,    -1,     4,   200,   136,    -1,     4,   200,    36,
      -1,     4,   200,   299,   372,   379,   371,    -1,     4,   232,
     250,   362,   362,   372,   381,    -1,     4,   265,   250,   362,
     362,   372,   381,    -1,     4,   230,   269,   385,    -1,     4,
     230,   276,     4,    -1,     4,   232,   124,   364,    -1,     4,
     238,   372,   379,   371,   371,   362,   372,   381,    -1,     4,
     239,   524,   364,    -1,     4,   254,    40,    -1,     4,   255,
     133,     5,    -1,     4,   255,   230,   372,   379,   371,   371,
      -1,     4,   255,   289,   372,   379,   372,   381,    -1,     4,
     266,    -1,     4,   266,   217,    -1,     4,   291,     5,    -1,
       4,   293,     5,    -1,     4,   293,   254,   364,    -1,     4,
     305,    -1,     4,   307,    -1,     4,   313,    27,   364,    -1,
       4,   313,   230,   372,   379,   371,   372,   381,   362,   367,
      -1,     4,   347,     4,    -1,   168,    -1,   168,   362,   362,
      -1,   178,   519,    -1,   179,   520,    -1,   200,   521,    -1,
     237,   364,    -1,   239,   524,   364,    -1,   239,   524,   364,
     362,   362,    -1,   254,    40,   362,   362,    -1,   254,   199,
     362,   362,     4,    -1,   254,   113,    -1,   259,   528,    -1,
     266,   529,    -1,   273,   530,    -1,     5,    67,     5,    -1,
       5,    81,    -1,     5,   101,    -1,     5,    90,    -1,     5,
     132,     5,    -1,     5,   153,    -1,     5,   153,   217,    -1,
       5,   200,   362,   362,    -1,     5,   200,   136,    -1,     5,
     200,    36,    -1,     5,   200,   299,   372,   379,   371,    -1,
       5,   239,   524,   364,    -1,     5,   266,    -1,     5,   266,
     217,    -1,     5,   305,    -1,     5,   307,    -1,   291,   107,
       5,     5,    -1,   291,   101,     5,    -1,   291,   101,    17,
      -1,   291,     5,    -1,   291,   308,     5,    -1,   223,    -1,
     223,   372,    -1,   304,    -1,   305,    17,    -1,   307,    17,
      -1,   347,     4,    -1,   266,    -1,   307,    -1,   153,    -1,
     305,    -1,    40,   200,    -1,   200,    -1,   113,   200,    -1,
      40,   107,    -1,   107,    -1,   113,   107,    -1,    40,   254,
      -1,   254,    -1,   113,   254,    -1,   101,    -1,   293,    -1,
      67,    -1,   347,    -1,   239,    -1,   132,    -1,   168,    -1,
     308,    -1,    -1,     4,    -1,    30,   364,    -1,   244,   362,
      -1,   164,     4,    -1,   218,     4,   362,    -1,    63,   362,
     362,   362,   525,    -1,   111,   362,   362,   362,   362,   366,
     525,    -1,    49,   362,   362,   362,   362,   366,   525,    -1,
     232,   362,   362,   362,   362,   525,    -1,   265,   362,   362,
     362,   362,   525,    -1,   176,   362,   362,   362,   362,   525,
      -1,   313,   362,   362,   362,   362,   525,    -1,   293,   362,
     362,   366,   525,    -1,    63,   230,   362,   362,   386,   525,
      -1,    49,   230,   362,   362,   386,   525,    -1,   104,   230,
     362,   362,   386,   525,    -1,    86,   230,   362,   362,   386,
     525,    -1,   358,   230,   362,   362,   386,   525,    -1,    27,
     230,   362,   362,   386,   525,    -1,    52,   230,   362,   362,
     386,   525,    -1,   255,   362,   362,   362,   362,   372,   379,
     372,   381,     5,   525,    -1,    75,   362,   362,   362,   372,
     379,   525,    -1,   238,   362,   362,   362,   362,   362,   525,
      -1,    22,   362,   362,   362,   362,     4,   525,    -1,   112,
     362,   362,   362,   362,   362,     4,   366,   525,    -1,    50,
     362,   362,   362,   362,   362,     4,   366,   525,    -1,    83,
     362,   362,   367,   367,     4,   362,   362,     4,   525,    -1,
     115,   362,   362,   367,   367,     4,   362,   362,   362,     4,
     366,   525,    -1,    53,   362,   362,   367,   367,     4,   362,
     362,   362,     4,   366,   525,    -1,    76,   525,    -1,   292,
     508,    -1,     5,   362,   362,    -1,   311,     5,   362,   362,
      -1,   362,   362,   311,     5,    -1,     5,   372,   379,   371,
      -1,    -1,   266,    -1,    17,    -1,    40,   362,   362,     4,
      -1,   199,   362,   362,     4,    -1,   113,    -1,   106,    -1,
     349,    -1,    64,    -1,   258,    -1,   257,    -1,   241,    -1,
     350,    -1,    61,   513,    -1,    67,    -1,   132,    -1,   116,
      -1,   147,   362,   362,    -1,   158,   362,   362,    -1,     4,
      20,    83,     5,     5,     5,   372,     4,    -1,     4,    20,
     155,     5,     5,     4,    -1,     4,    20,   228,     5,     5,
       5,     5,   372,   379,   388,    -1,     4,    20,   229,     5,
       5,   372,   388,    -1,     4,    20,   243,     5,     5,     5,
     372,    -1,     4,    20,   286,   372,   379,    -1,   158,    17,
      -1,     4,    21,    -1,     4,    21,   374,    -1,     4,    21,
     372,   379,    -1,     4,    22,   244,   372,   381,    -1,     4,
      49,   124,    -1,     4,    50,   244,   372,   381,    -1,     4,
      49,   244,   372,   381,    -1,     4,    53,    21,    -1,     4,
      53,    21,   374,    -1,     4,    53,    21,   372,   379,    -1,
       4,    53,   244,   372,   381,    -1,     4,    60,   372,   379,
     380,    -1,     4,    63,   124,    -1,     4,    63,   244,   372,
     381,    -1,     4,    67,    -1,     4,    75,    27,    -1,     4,
      75,   170,    -1,     4,    75,   244,   372,   381,    -1,     4,
      75,   289,    -1,     4,    76,   142,    -1,     4,    83,    21,
      -1,     4,    83,    21,   374,    -1,     4,    83,    21,   372,
     379,    -1,     4,    83,   244,   372,   381,    -1,     4,   111,
     124,    -1,     4,   111,   244,   372,   381,    -1,     4,   112,
     244,   372,   381,    -1,     4,   115,    21,    -1,     4,   115,
      21,   374,    -1,     4,   115,    21,   372,   379,    -1,     4,
     115,   244,   372,   381,    -1,     4,   132,    -1,     4,   153,
      -1,     4,   176,    27,    -1,     4,   176,   171,   372,   381,
      -1,     4,   176,   230,   372,   379,   380,    -1,     4,   185,
     171,   362,   372,   381,    -1,     4,   232,   124,    -1,     4,
     230,   269,    -1,     4,   230,   276,    -1,     4,   238,   230,
     372,   379,   380,    -1,     4,   238,   171,   372,   381,    -1,
       4,   238,   297,   372,   381,    -1,     4,   239,    -1,     4,
     239,   524,    -1,     4,   255,   133,    -1,     4,   255,   171,
     372,   381,    -1,     4,   255,   230,   372,   379,   380,    -1,
       4,   255,   289,    -1,     4,   266,    -1,     4,   291,    -1,
       4,   291,     4,    -1,     4,   293,    -1,     4,   293,   254,
      -1,     4,   303,    -1,     4,   313,    27,    -1,     4,   313,
     171,   372,   381,    -1,     4,   313,   230,   372,   379,   380,
      -1,     4,   347,    -1,   153,   514,    -1,   153,   213,    -1,
     213,    -1,   232,   265,   362,   362,    -1,   265,   265,   362,
     362,    -1,   237,    -1,   239,   524,    -1,   266,   515,    -1,
     266,   213,    -1,   273,   516,    -1,     5,    67,    -1,     5,
     132,    -1,     5,   158,    -1,     5,   239,   524,    -1,     5,
     291,    -1,     5,   291,   213,    -1,   291,    17,    -1,   291,
     100,   201,    -1,   347,    -1,    30,    -1,   244,    -1,   164,
      -1,   218,    -1,    -1,   362,   362,    -1,    -1,   362,   362,
      -1,    -1,   293,    -1,    -1,    -1,   231,    -1,   246,    -1,
     309,    -1,    58,    -1,   134,    -1,   511,   372,   379,   380,
     364,   526,   533,    -1,   266,   511,   372,   379,   380,   364,
     526,   533,    -1,   511,     5,    -1,   511,     5,     4,     5,
     372,   379,    -1,   511,     4,    -1,   511,     4,     4,     5,
     372,   379,    -1,   127,     5,    -1,   127,     5,     5,    -1,
     362,   362,    -1,   136,    -1,    36,    -1,    40,   362,   362,
      -1,   199,   362,   362,    -1,   113,    -1,   299,   372,   379,
     371,    -1,   522,   523,    -1,   523,    -1,   524,   359,   364,
      -1,    67,   359,     5,    -1,    94,   359,     4,     4,    -1,
     347,   359,     4,    -1,   132,   359,     5,    -1,   293,   359,
       5,    -1,   536,    -1,   537,    -1,   208,    -1,   266,    -1,
     153,    -1,    93,    -1,   129,    -1,   107,    -1,   200,    -1,
     254,    -1,   101,    -1,   161,    -1,   282,    -1,   517,    -1,
     517,   522,    -1,    -1,    -1,   527,   531,    -1,     5,   511,
     372,   379,   380,   364,    -1,   266,     5,   511,   372,   379,
     380,   364,    -1,   292,     5,    -1,    17,    -1,   217,   362,
     362,    -1,   300,    -1,   300,   362,   362,    -1,   364,    -1,
     293,   364,    -1,   531,   532,    -1,   532,    -1,   524,   359,
     364,    -1,    -1,    -1,   534,   535,    -1,   535,   536,    -1,
     536,    -1,   291,   359,     5,    -1,    56,   359,   505,     5,
       5,    -1,    65,    -1,    67,     5,    -1,   186,   375,    -1,
     245,   362,   362,    -1,   289,   372,    -1,   298,   362,    -1,
      46,   376,    -1,   186,     4,    -1,   358,    -1,   356,    -1,
     350,    -1,   208,    -1,   362,   362,   362,   362,    -1,   362,
     362,    -1,   374,   362,   362,    -1,   372,   379,   371,    -1,
     299,   541,    -1,    39,   362,   362,    -1,   199,   542,    -1,
     237,   364,    -1,   362,   362,    -1,   374,   362,   362,    -1,
     372,   379,   371,    -1,    40,   362,   362,    -1,   362,   362,
      -1,   113,   362,   362,    -1,   364,    -1,   318,   373,   379,
      -1,     5,     4,     4,    -1,   308,    -1,    71,   546,    -1,
     172,     4,    -1,   251,     4,    -1,   260,   362,    -1,     4,
       4,     4,     4,     4,     4,     4,     4,     4,    -1,     4,
       4,     4,     4,     4,     4,    -1,    55,    -1,   144,    -1,
     252,    -1,    91,    -1,   153,   548,    -1,   266,   549,    -1,
      40,   362,   362,    -1,   199,   362,   362,    -1,   113,    -1,
     271,   113,    -1,    40,   362,   362,    -1,   199,   362,   362,
      -1,   113,    -1,   271,   113,    -1,   194,    -1,    13,    -1,
     208,    -1,    34,    -1,   109,    -1,    62,     5,    -1,   289,
     372,    -1,   312,     4,     4,     4,    -1,   362,    -1,   362,
      99,    -1,   199,   554,    -1,   299,   362,    -1,   299,   362,
      99,    -1,    40,    -1,   362,    -1,   113,    -1,    26,   556,
      -1,   127,   558,    -1,   212,   568,    -1,   114,   569,    -1,
     225,     5,    -1,   123,     5,   389,    -1,    62,     5,   389,
      -1,   280,     4,   389,    -1,   252,    88,   557,    -1,   123,
       5,   389,    -1,    62,     5,   389,    -1,   280,     4,   389,
      -1,   559,    -1,   160,   559,    -1,   290,   560,    -1,   277,
     561,    -1,   119,    88,   562,    -1,   197,   563,    -1,   252,
     160,   565,    -1,   252,    88,   566,    -1,   248,   567,    -1,
     123,     5,    -1,    62,     5,    -1,   280,     4,    -1,   123,
       5,    -1,    62,     5,    -1,   280,     4,    -1,   123,     5,
      -1,    62,     5,    -1,   280,     4,    -1,   123,     5,    -1,
      62,     5,    -1,   280,     4,    -1,   160,   564,    -1,   123,
       5,     4,    -1,    62,     5,     4,    -1,   280,     4,     4,
      -1,   123,     5,    -1,    62,     5,    -1,   280,     4,    -1,
     123,     5,    -1,    62,     5,    -1,   280,     4,    -1,   123,
       5,    -1,    62,     5,    -1,   280,     4,    -1,   123,     5,
      -1,    62,     5,    -1,   280,     4,    -1,   123,     5,   389,
      -1,    62,     5,   389,    -1,   280,     4,   389,    -1,   123,
       5,     5,   389,    -1,   571,     4,     4,   362,   362,   367,
      -1,   571,     4,    -1,   101,    -1,    51,    -1,   301,    -1,
     140,    -1,   110,    -1,    -1,     4,   362,   362,   362,   362,
      -1,   211,    -1,   211,     4,   362,   362,   362,   362,    -1,
     127,   277,   573,    -1,     4,    -1,     4,     4,    -1,   362,
     372,    -1,   362,   362,    -1,   299,   362,   362,    -1,   373,
     379,   380,    -1,    16,   578,    -1,   250,     4,    -1,   247,
     577,    -1,    23,   576,    -1,     4,     4,    -1,     4,     5,
      -1,   293,     4,     5,    -1,     4,     4,    -1,     4,     5,
      -1,   293,     4,     5,    -1,     4,    -1,     4,   373,   379,
      -1,     4,     6,   373,   379,    -1,   236,    -1,   362,   362,
      -1,   362,   362,    12,   362,   362,    -1,   362,   362,    12,
     374,   362,   362,    -1,   362,   362,    12,   372,   379,   371,
      -1,   299,   581,    -1,   126,    -1,   126,   362,    -1,   362,
     362,    -1,   362,   362,    12,   362,   362,    -1,   362,   362,
      12,   374,   362,   362,    -1,   362,   362,    12,   372,   379,
     371,    -1
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
     999,  1001,  1005,  1008,  1009,  1010,  1011,  1014,  1015,  1018,
    1021,  1022,  1023,  1024,  1025,  1026,  1027,  1028,  1029,  1030,
    1031,  1032,  1033,  1034,  1035,  1036,  1037,  1038,  1039,  1040,
    1041,  1042,  1043,  1044,  1045,  1046,  1047,  1048,  1049,  1050,
    1051,  1053,  1054,  1055,  1056,  1057,  1058,  1059,  1061,  1062,
    1063,  1066,  1068,  1072,  1074,  1078,  1079,  1080,  1081,  1082,
    1083,  1084,  1085,  1088,  1089,  1090,  1093,  1096,  1097,  1099,
    1101,  1102,  1103,  1104,  1105,  1106,  1113,  1114,  1117,  1118,
    1119,  1122,  1123,  1126,  1129,  1130,  1132,  1136,  1137,  1138,
    1141,  1145,  1147,  1148,  1149,  1150,  1151,  1152,  1153,  1154,
    1155,  1158,  1159,  1160,  1163,  1164,  1167,  1169,  1177,  1179,
    1181,  1185,  1186,  1188,  1191,  1194,  1195,  1199,  1201,  1204,
    1209,  1210,  1211,  1215,  1216,  1217,  1220,  1221,  1222,  1225,
    1226,  1228,  1229,  1230,  1231,  1232,  1233,  1234,  1235,  1236,
    1237,  1239,  1240,  1243,  1244,  1247,  1248,  1249,  1250,  1253,
    1254,  1257,  1259,  1262,  1266,  1267,  1268,  1270,  1272,  1276,
    1277,  1278,  1281,  1282,  1283,  1284,  1285,  1286,  1287,  1290,
    1293,  1294,  1295,  1298,  1299,  1300,  1301,  1302,  1303,  1306,
    1307,  1308,  1309,  1310,  1311,  1312,  1315,  1316,  1319,  1320,
    1323,  1324,  1327,  1328,  1331,  1332,  1333,  1336,  1337,  1340,
    1341,  1344,  1347,  1355,  1356,  1359,  1360,  1361,  1362,  1363,
    1364,  1365,  1366,  1367,  1368,  1369,  1370,  1371,  1372,  1373,
    1374,  1375,  1376,  1379,  1382,  1383,  1386,  1387,  1388,  1389,
    1392,  1393,  1394,  1395,  1398,  1399,  1400,  1401,  1402,  1403,
    1406,  1407,  1408,  1409,  1410,  1411,  1413,  1414,  1419,  1420,
    1423,  1425,  1427,  1430,  1431,  1432,  1433,  1434,  1435,  1438,
    1440,  1442,  1444,  1445,  1447,  1449,  1451,  1453,  1455,  1458,
    1459,  1460,  1461,  1462,  1463,  1465,  1466,  1467,  1470,  1473,
    1475,  1477,  1479,  1481,  1483,  1485,  1487,  1490,  1492,  1494,
    1496,  1497,  1498,  1499,  1500,  1503,  1504,  1505,  1506,  1507,
    1508,  1509,  1511,  1513,  1514,  1515,  1518,  1519,  1520,  1521,
    1522,  1523,  1525,  1526,  1527,  1530,  1531,  1532,  1533,  1534,
    1537,  1540,  1543,  1546,  1549,  1552,  1555,  1558,  1561,  1566,
    1569,  1572,  1575,  1578,  1581,  1584,  1587,  1590,  1593,  1596,
    1601,  1604,  1607,  1610,  1613,  1616,  1619,  1622,  1625,  1630,
    1632,  1634,  1636,  1638,  1640,  1645,  1647,  1649,  1653,  1656,
    1659,  1662,  1665,  1668,  1671,  1674,  1677,  1680,  1683,  1688,
    1689,  1690,  1691,  1692,  1693,  1694,  1696,  1698,  1699,  1700,
    1703,  1704,  1705,  1706,  1707,  1708,  1710,  1711,  1712,  1715,
    1717,  1719,  1720,  1722,  1724,  1728,  1729,  1732,  1733,  1734,
    1737,  1740,  1741,  1742,  1743,  1744,  1745,  1746,  1749,  1757,
    1758,  1759,  1760,  1762,  1764,  1765,  1765,  1766,  1767,  1768,
    1769,  1770,  1772,  1773,  1775,  1778,  1781,  1782,  1783,  1786,
    1789,  1792,  1793,  1797,  1800,  1803,  1806,  1810,  1815,  1820,
    1822,  1823,  1825,  1826,  1828,  1830,  1832,  1834,  1835,  1837,
    1839,  1843,  1848,  1850,  1852,  1854,  1856,  1858,  1860,  1862,
    1864,  1866,  1868,  1871,  1872,  1874,  1876,  1877,  1879,  1881,
    1882,  1883,  1885,  1887,  1888,  1889,  1891,  1892,  1893,  1896,
    1900,  1903,  1906,  1910,  1915,  1921,  1922,  1923,  1925,  1926,
    1930,  1932,  1933,  1934,  1937,  1940,  1943,  1945,  1947,  1948,
    1953,  1956,  1957,  1958,  1961,  1965,  1966,  1968,  1969,  1970,
    1972,  1973,  1975,  1976,  1981,  1983,  1984,  1986,  1987,  1988,
    1989,  1990,  1991,  1993,  1995,  1997,  1998,  1999,  2001,  2003,
    2004,  2005,  2006,  2007,  2008,  2009,  2010,  2011,  2012,  2013,
    2015,  2017,  2018,  2019,  2020,  2022,  2023,  2024,  2025,  2026,
    2028,  2029,  2030,  2031,  2032,  2033,  2036,  2037,  2038,  2039,
    2040,  2041,  2042,  2043,  2044,  2045,  2046,  2047,  2048,  2049,
    2050,  2051,  2052,  2053,  2054,  2055,  2056,  2059,  2060,  2061,
    2062,  2063,  2064,  2072,  2079,  2088,  2097,  2104,  2111,  2119,
    2127,  2134,  2139,  2144,  2149,  2154,  2159,  2164,  2170,  2180,
    2190,  2200,  2207,  2217,  2227,  2236,  2248,  2261,  2266,  2269,
    2271,  2273,  2278,  2282,  2283,  2284,  2290,  2292,  2294,  2297,
    2298,  2299,  2300,  2301,  2302,  2303,  2306,  2307,  2308,  2309,
    2310,  2311,  2313,  2315,  2317,  2319,  2321,  2323,  2326,  2327,
    2328,  2329,  2331,  2334,  2335,  2337,  2339,  2340,  2341,  2343,
    2346,  2349,  2350,  2352,  2353,  2354,  2355,  2357,  2358,  2359,
    2360,  2361,  2363,  2365,  2366,  2368,  2371,  2372,  2373,  2375,
    2377,  2378,  2379,  2380,  2382,  2385,  2389,  2390,  2391,  2392,
    2395,  2398,  2400,  2401,  2402,  2403,  2405,  2408,  2409,  2411,
    2412,  2413,  2414,  2415,  2417,  2418,  2420,  2423,  2424,  2425,
    2426,  2427,  2429,  2431,  2432,  2433,  2434,  2436,  2438,  2439,
    2440,  2441,  2442,  2443,  2445,  2446,  2448,  2451,  2452,  2453,
    2454,  2457,  2458,  2461,  2462,  2465,  2466,  2469,  2482,  2483,
    2487,  2488,  2492,  2493,  2496,  2500,  2506,  2508,  2511,  2513,
    2516,  2518,  2522,  2523,  2524,  2525,  2526,  2527,  2528,  2532,
    2533,  2536,  2537,  2538,  2539,  2540,  2541,  2542,  2543,  2546,
    2547,  2548,  2549,  2550,  2551,  2552,  2553,  2554,  2555,  2556,
    2559,  2560,  2563,  2564,  2564,  2567,  2569,  2571,  2574,  2575,
    2576,  2577,  2580,  2581,  2584,  2585,  2588,  2592,  2593,  2593,
    2596,  2597,  2600,  2603,  2607,  2608,  2609,  2610,  2611,  2612,
    2613,  2614,  2620,  2621,  2622,  2623,  2626,  2628,  2629,  2634,
    2636,  2637,  2638,  2639,  2642,  2643,  2648,  2652,  2653,  2654,
    2657,  2658,  2663,  2664,  2667,  2669,  2670,  2671,  2676,  2678,
    2684,  2685,  2686,  2687,  2690,  2691,  2694,  2696,  2698,  2699,
    2702,  2704,  2705,  2706,  2709,  2710,  2713,  2714,  2715,  2718,
    2719,  2720,  2723,  2724,  2725,  2726,  2727,  2730,  2731,  2732,
    2735,  2736,  2737,  2738,  2739,  2742,  2744,  2746,  2748,  2751,
    2753,  2755,  2758,  2759,  2760,  2761,  2762,  2763,  2764,  2765,
    2766,  2769,  2770,  2771,  2774,  2775,  2776,  2779,  2780,  2781,
    2784,  2785,  2786,  2789,  2790,  2791,  2792,  2795,  2796,  2797,
    2800,  2801,  2802,  2805,  2806,  2807,  2810,  2811,  2812,  2815,
    2817,  2819,  2823,  2827,  2829,  2834,  2837,  2838,  2839,  2840,
    2843,  2844,  2846,  2847,  2849,  2852,  2853,  2854,  2857,  2858,
    2861,  2863,  2864,  2865,  2866,  2869,  2870,  2871,  2874,  2875,
    2876,  2879,  2880,  2885,  2889,  2896,  2897,  2899,  2904,  2906,
    2909,  2910,  2911,  2912,  2914,  2919
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
  "crosshair", "cube", "cutMethod", "fade", "fitsy", "get", "getHorzCut",
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
     421,   421,   422,   423,   423,   423,   423,   424,   424,   425,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   427,   427,   428,   428,   429,   429,   429,   429,   429,
     429,   429,   429,   430,   430,   430,   431,   432,   432,   432,
     432,   432,   432,   432,   432,   432,   433,   433,   434,   434,
     434,   435,   435,   436,   437,   437,   437,   438,   438,   438,
     439,   440,   440,   440,   440,   440,   440,   440,   440,   440,
     440,   441,   441,   441,   442,   442,   443,   443,   444,   444,
     444,   445,   445,   445,   446,   447,   447,   448,   448,   448,
     449,   449,   449,   450,   450,   450,   451,   451,   451,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   452,   452,
     452,   452,   452,   453,   453,   454,   454,   454,   454,   455,
     455,   456,   456,   456,   457,   457,   457,   457,   457,   458,
     458,   458,   459,   459,   459,   459,   459,   459,   459,   460,
     461,   461,   461,   462,   462,   462,   462,   462,   462,   463,
     463,   463,   463,   463,   463,   463,   464,   464,   465,   465,
     466,   466,   467,   467,   468,   468,   468,   469,   469,   470,
     470,   471,   471,   472,   472,   473,   473,   473,   473,   473,
     473,   473,   473,   473,   473,   473,   473,   473,   473,   473,
     473,   473,   473,   474,   475,   475,   476,   476,   476,   476,
     477,   477,   477,   477,   478,   478,   478,   478,   478,   478,
     479,   479,   479,   479,   479,   479,   479,   479,   480,   480,
     481,   481,   481,   482,   482,   482,   482,   482,   482,   483,
     483,   483,   483,   483,   483,   483,   483,   483,   483,   484,
     484,   484,   484,   484,   484,   484,   484,   484,   485,   486,
     486,   486,   486,   486,   486,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   486,   487,   487,   487,   487,   487,
     487,   487,   487,   487,   487,   487,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   489,   489,   489,   489,   489,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   497,
     497,   497,   497,   497,   497,   498,   498,   499,   499,   499,
     500,   501,   501,   501,   501,   501,   501,   501,   502,   503,
     503,   503,   503,   503,   503,   504,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   503,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   506,   506,   506,
     506,   506,   506,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   508,
     508,   508,   508,   509,   509,   509,   510,   510,   510,   511,
     511,   511,   511,   511,   511,   511,   512,   512,   512,   512,
     512,   512,   512,   512,   512,   512,   512,   512,   512,   512,
     512,   512,   512,   512,   512,   512,   512,   512,   512,   512,
     512,   512,   512,   512,   512,   512,   512,   512,   512,   512,
     512,   512,   512,   512,   512,   512,   512,   512,   512,   512,
     512,   512,   512,   512,   512,   512,   512,   512,   512,   512,
     512,   512,   512,   512,   512,   512,   512,   512,   512,   512,
     512,   512,   512,   512,   512,   512,   512,   512,   512,   512,
     512,   512,   512,   512,   512,   512,   512,   512,   512,   512,
     512,   512,   512,   512,   512,   512,   512,   513,   513,   513,
     513,   514,   514,   515,   515,   516,   516,   517,   518,   518,
     518,   518,   518,   518,   519,   519,   520,   520,   520,   520,
     520,   520,   521,   521,   521,   521,   521,   521,   521,   522,
     522,   523,   523,   523,   523,   523,   523,   523,   523,   524,
     524,   524,   524,   524,   524,   524,   524,   524,   524,   524,
     525,   525,   526,   527,   526,   528,   528,   528,   529,   529,
     529,   529,   530,   530,   531,   531,   532,   533,   534,   533,
     535,   535,   536,   537,   538,   538,   538,   538,   538,   538,
     538,   538,   539,   539,   539,   539,   540,   540,   540,   540,
     540,   540,   540,   540,   541,   541,   541,   542,   542,   542,
     543,   543,   543,   543,   544,   544,   544,   544,   545,   545,
     546,   546,   546,   546,   547,   547,   548,   548,   548,   548,
     549,   549,   549,   549,   550,   550,   551,   551,   551,   552,
     552,   552,   553,   553,   553,   553,   553,   554,   554,   554,
     555,   555,   555,   555,   555,   556,   556,   556,   556,   557,
     557,   557,   558,   558,   558,   558,   558,   558,   558,   558,
     558,   559,   559,   559,   560,   560,   560,   561,   561,   561,
     562,   562,   562,   563,   563,   563,   563,   564,   564,   564,
     565,   565,   565,   566,   566,   566,   567,   567,   567,   568,
     568,   568,   569,   570,   570,   570,   571,   571,   571,   571,
     572,   572,   572,   572,   572,   573,   573,   573,   574,   574,
     575,   575,   575,   575,   575,   576,   576,   576,   577,   577,
     577,   578,   578,   578,   579,   580,   580,   580,   580,   580,
     581,   581,   581,   581,   581,   581
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
       1,     3,     1,     2,     2,     1,     3,     0,     0,     2,
       2,     1,     3,     5,     1,     2,     2,     3,     2,     2,
       2,     2,     1,     1,     1,     1,     4,     2,     3,     3,
       2,     3,     2,     2,     2,     3,     3,     3,     2,     3,
       1,     3,     3,     1,     2,     2,     2,     2,     9,     6,
       1,     1,     1,     1,     2,     2,     3,     3,     1,     2,
       3,     3,     1,     2,     1,     1,     1,     1,     1,     2,
       2,     4,     1,     2,     2,     2,     3,     1,     1,     1,
       2,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     1,     2,     2,     2,     3,     2,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     3,     3,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       3,     3,     4,     6,     2,     1,     1,     1,     1,     1,
       0,     5,     1,     6,     3,     1,     2,     2,     2,     3,
       3,     2,     2,     2,     2,     2,     2,     3,     2,     2,
       3,     1,     3,     4,     1,     2,     5,     6,     6,     2,
       1,     2,     2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     8,     9,     0,     0,     0,     0,
       0,   312,     0,     0,     0,     0,     0,     0,   340,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     0,  1058,
       0,     0,     0,     0,     0,     0,     0,     0,  1058,    42,
       0,     0,     0,    47,     0,     0,     0,    51,  1250,    53,
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
       0,     0,     0,     2,     0,   338,    19,     0,    20,     0,
       0,     0,   397,   411,     0,   417,     0,     0,     0,     0,
       0,     0,     0,   355,     0,   489,     0,     0,     0,     0,
       0,     0,  1058,     0,   364,     0,   368,     0,     0,     0,
     372,     0,   374,     0,   376,     0,     0,   524,   380,    21,
       0,   530,    22,   535,     0,     0,   554,   539,   540,   541,
     542,   556,   544,   545,   549,   546,     0,   548,   550,     0,
       0,    23,     0,    25,     0,   571,     0,     0,     0,   576,
       0,    27,     0,     0,     0,     0,     0,     0,     0,    29,
     730,    30,     0,     0,     0,     0,     0,     0,   731,    31,
       0,    32,  1062,  1063,  1059,  1060,  1061,     0,   139,  1124,
       0,   133,     0,     0,     0,    34,     0,  1135,  1134,  1133,
    1132,    36,     0,     0,     0,     0,     0,   157,     0,    37,
       0,  1153,     0,  1150,    38,     0,     0,     0,     0,    41,
       0,    40,    39,     0,     0,     0,     0,    44,     0,     0,
    1182,    45,     0,     0,     0,     0,     0,    46,  1246,  1245,
    1249,  1248,  1247,    48,     0,    49,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,  1252,    52,     0,
       0,    54,     0,     0,     0,     0,   157,    55,  1274,    56,
       0,     0,    57,     1,     4,     5,     6,   231,     0,   223,
       0,     0,   225,     0,   233,   226,   230,   241,   242,   227,
     243,     0,   229,   251,   252,   250,   249,     0,     0,   271,
       0,   256,   264,   267,   266,   265,   263,   255,   260,   261,
     262,   254,     0,     0,     0,     0,     0,     0,   259,    11,
       0,     0,     0,   279,     0,   284,     0,   294,   285,   296,
     286,   297,   287,   308,   288,     0,     0,   289,     0,    91,
      92,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   315,     0,     0,     0,     0,     0,   159,
     164,   158,   160,   163,   162,   161,     0,     0,   332,    66,
      67,    68,    69,    70,    62,    63,    64,    71,    65,   337,
       0,   341,     0,   393,   389,   385,   386,   390,   387,   392,
     342,   396,   343,   300,   401,   405,   400,   303,   302,   301,
       0,     0,   344,   412,   346,     0,   345,     0,   419,   347,
     431,   423,   434,   424,   425,   427,     0,   429,   430,   157,
     348,     0,     0,   349,     0,     0,   157,   350,   443,   157,
     441,   351,   444,   353,   157,   445,   352,     0,   157,     0,
     354,   463,     0,   461,   479,     0,     0,     0,   467,   459,
       0,   469,   484,   472,   356,   490,   491,   357,   358,     0,
       0,     0,   454,     0,   361,    81,   451,     0,   362,   363,
       0,   498,   492,   497,   493,   494,   495,   496,   366,   367,
     499,   369,     0,   500,   501,   502,   371,   508,   503,   504,
     506,   373,   514,   516,   518,   520,   513,   515,   522,   375,
       0,     0,   527,     0,   379,   157,   529,   536,     0,   537,
     555,   538,   557,   558,   559,   543,   560,   562,   561,   563,
     547,   551,   568,     0,     0,     0,     0,   564,   552,    26,
       0,     0,   573,   572,     0,     0,     0,     0,    28,     0,
       0,   583,     0,   584,     0,     0,     0,     0,     0,   585,
       0,   729,     0,   586,     0,   587,     0,     0,   588,     0,
     734,   733,   732,     0,   737,     0,     0,     0,   907,     0,
       0,     0,   741,   745,   747,   943,     0,     0,     0,     0,
     845,     0,     0,     0,   880,     0,     0,     0,     0,     0,
       0,     0,   882,     0,     0,     0,    33,   142,   143,   141,
     140,  1130,  1125,  1131,   136,   137,   135,   138,   134,  1126,
       0,  1128,  1129,    35,     0,     0,     0,     0,  1142,  1143,
       0,   157,     0,  1140,  1137,     0,     0,     0,   157,  1160,
    1163,  1161,  1162,  1154,  1155,  1156,  1157,     0,     0,     0,
      43,  1179,  1180,     0,  1187,  1189,  1188,  1184,  1185,  1183,
       0,     0,     0,     0,  1190,     0,  1193,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1191,  1202,     0,
       0,     0,  1192,  1194,  1244,  1177,  1178,  1176,   212,     0,
     215,   208,     0,   217,   209,     0,   219,   210,  1175,  1174,
     211,   213,   214,     0,     0,   207,     0,     0,     0,     0,
    1258,  1271,  1261,     0,     0,  1264,     0,     0,  1263,  1262,
     165,  1280,     0,  1279,  1275,   232,   228,     0,   237,     0,
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
     855,     0,     0,     0,     0,   856,  1108,     0,  1110,   857,
       0,  1112,   858,   878,     0,     0,     0,   883,   884,   885,
    1127,  1141,     0,     0,  1148,  1144,     0,     0,     0,  1139,
    1138,  1152,  1151,     0,     0,  1168,     0,     0,  1164,     0,
    1172,     0,     0,  1165,     0,  1186,   201,   201,     0,   201,
       0,  1212,     0,  1211,  1203,     0,     0,     0,     0,  1207,
       0,     0,     0,  1210,     0,     0,     0,     0,     0,  1205,
    1213,     0,     0,     0,  1204,   201,   201,   201,     0,   216,
     218,   220,     0,   221,     0,    59,     0,  1254,     0,  1259,
       0,   157,  1265,  1266,     0,  1268,  1269,     0,   166,   167,
    1260,  1281,  1282,     0,   224,     0,   238,     0,     0,     0,
       0,   272,     0,     0,     0,     0,     0,     0,     0,     0,
     310,   157,     0,     0,     0,     0,   157,     0,   330,     0,
     329,   395,   394,     0,     0,     0,   157,     0,   165,   440,
     438,   442,   446,     0,     0,     0,   165,     0,   481,   465,
       0,   476,   478,   168,     0,     0,   359,     0,     0,    59,
       0,   455,    83,    82,     0,     0,   969,     0,     0,     0,
       0,     0,     0,   983,     0,     0,     0,     0,     0,     0,
    1000,  1001,     0,     0,     0,     0,     0,  1012,     0,  1018,
    1019,  1021,  1023,     0,  1027,  1038,  1039,  1040,     0,  1042,
    1047,  1049,  1050,  1048,   956,     0,  1029,     0,  1028,   968,
       0,     0,  1034,     0,  1036,     0,  1035,  1056,  1037,  1044,
       0,     0,   377,     0,     0,   580,   581,     0,   578,   574,
       0,   178,   178,   178,   179,   180,   592,   593,   174,   173,
       0,   178,   178,   178,     0,   598,   608,   175,   178,   178,
     178,   176,   177,   178,   178,     0,   178,   178,     0,   175,
       0,   621,     0,     0,     0,   647,     0,   646,     0,     0,
     623,     0,   622,     0,     0,     0,     0,   175,   175,   172,
       0,     0,   172,     0,     0,     0,   178,   178,   721,     0,
     178,   178,   726,     0,   191,   192,   193,   194,   195,   196,
       0,    89,    90,    88,   756,     0,     0,     0,     0,     0,
       0,   901,   899,   894,     0,   904,   888,   905,   891,   903,
     897,   886,   900,   889,   887,   906,   902,     0,     0,     0,
     772,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   803,     0,     0,     0,     0,     0,
     815,   817,     0,     0,   822,   821,     0,     0,   181,     0,
       0,     0,   157,     0,   831,     0,     0,     0,     0,   836,
     837,   838,     0,     0,     0,   844,   859,   863,   865,   868,
     867,     0,     0,     0,   872,   909,   911,     0,   910,   742,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1057,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   746,     0,     0,     0,     0,
     846,     0,   157,  1070,  1068,  1066,     0,     0,   157,  1072,
     851,     0,     0,     0,     0,  1107,     0,     0,  1113,   876,
     877,     0,   879,  1147,  1149,  1146,  1145,  1136,     0,     0,
       0,  1169,     0,     0,  1173,  1181,   203,   204,   205,   206,
     202,  1196,  1195,     0,     0,     0,  1198,  1197,   201,     0,
       0,     0,  1206,     0,     0,     0,     0,     0,  1223,     0,
    1237,  1236,  1238,     0,     0,     0,  1209,     0,     0,     0,
    1208,  1218,  1217,  1219,  1215,  1214,  1216,  1240,  1239,  1241,
       0,     0,     0,  1256,  1257,     0,   157,  1272,  1267,  1270,
       0,     0,   157,     0,     0,     0,   235,     0,     0,     0,
       0,     0,     0,     0,     0,   307,   306,     0,     0,   298,
     309,   311,     0,   321,   323,   322,   320,   157,   328,     0,
       0,     0,   165,   157,     0,     0,     0,     0,   460,   474,
     483,     0,   477,   170,   171,   169,   470,     0,   486,     0,
       0,     0,   458,    81,     0,     0,     0,     0,     0,     0,
     157,   970,     0,   973,     0,     0,   976,     0,   157,   981,
       0,   984,   985,     0,   987,   988,   989,     0,   993,     0,
       0,   996,     0,  1002,     0,     0,     0,  1007,  1008,  1006,
       0,     0,     0,  1013,  1014,     0,     0,  1017,  1020,  1022,
    1024,     0,     0,  1041,  1043,   960,  1052,   961,     0,     0,
    1054,  1045,     0,     0,   533,   534,     0,     0,   579,     0,
     589,   590,   591,   178,   595,   596,   597,     0,     0,     0,
     602,   603,   172,     0,     0,     0,   178,   609,   610,   611,
     612,   614,   175,   617,   618,     0,   178,     0,     0,     0,
     175,   175,   172,     0,     0,     0,     0,   645,     0,   649,
       0,     0,     0,     0,     0,   175,   175,   172,     0,     0,
     172,     0,     0,     0,     0,     0,   175,   175,   172,     0,
       0,   172,     0,     0,     0,     0,     0,   175,   175,   172,
       0,     0,   172,     0,     0,     0,     0,   175,   175,   172,
       0,     0,     0,   175,   625,   626,   627,   628,   630,     0,
     633,   634,     0,   175,     0,     0,   719,   720,   178,   723,
     724,     0,   755,   157,   757,     0,     0,   761,     0,     0,
       0,     0,     0,   893,   890,   896,   895,   892,   898,     0,
     770,     0,     0,     0,     0,   157,   777,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     794,   795,   796,     0,   800,   797,   799,     0,     0,   805,
     804,   806,   807,     0,     0,     0,     0,     0,     0,   157,
     157,   820,   187,   183,   188,   182,   185,   184,   186,   826,
     827,   828,     0,     0,   830,   832,   157,   157,     0,   839,
     842,   157,   157,   866,   870,   912,   743,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1100,   937,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   938,     0,     0,     0,     0,     0,   753,
     754,   157,   165,  1071,     0,     0,  1075,  1076,     0,     0,
     853,     0,   157,     0,  1109,  1111,   875,     0,  1166,  1167,
    1170,  1171,   201,   201,   201,  1242,  1221,  1220,  1222,  1225,
    1224,  1228,  1227,  1229,  1226,  1234,  1233,  1235,  1231,  1230,
    1232,     0,     0,  1251,     0,  1273,     0,   157,     0,  1276,
       0,     0,   239,     0,   236,     0,     0,     0,   276,     0,
       0,     0,     0,   157,     0,   313,   145,     0,   415,     0,
     436,   165,   168,     0,     0,   449,     0,   487,   488,     0,
     453,   452,     0,     0,     0,     0,     0,   157,   971,   168,
     168,   168,   157,   977,   168,   165,   168,   168,   157,   990,
     168,   168,   168,   157,   997,   168,   168,   157,     0,   168,
     157,   168,   168,   157,   168,   157,  1031,  1032,     0,     0,
     532,   575,     0,   594,   599,   600,   601,     0,   605,   606,
     607,   613,   178,   175,   619,   636,   637,   638,   639,   640,
       0,   642,   643,   175,     0,     0,     0,   175,   175,   172,
       0,     0,     0,     0,     0,     0,   175,   175,   172,     0,
       0,     0,     0,     0,     0,   175,   175,   172,     0,     0,
       0,   175,   178,   178,   178,   178,   178,     0,   178,   178,
       0,   175,   175,   178,   178,   178,   178,   178,     0,   178,
     178,     0,   175,   175,   699,   700,   701,   702,   704,     0,
     707,   708,     0,   175,   710,   711,   712,   713,   714,     0,
     716,   717,   175,   629,   175,     0,   635,     0,     0,   722,
       0,   758,   168,     0,     0,   168,     0,     0,     0,   769,
     168,   773,   774,   168,   776,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   798,   801,
     802,     0,   168,     0,     0,     0,   818,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1101,  1080,     0,  1087,  1088,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     157,     0,     0,    86,     0,     0,   946,   947,   165,     0,
       0,     0,  1078,   852,   854,   165,   157,  1159,  1200,  1199,
    1201,  1243,     0,  1253,  1283,     0,     0,  1278,  1277,   240,
       0,     0,     0,   281,     0,     0,     0,   299,   168,   416,
     420,   437,   439,     0,   447,   482,   157,     0,     0,     0,
       0,     0,     0,   967,   972,   975,   974,   978,   979,   980,
     982,   986,   991,   992,   994,   995,   998,   999,  1003,   165,
     168,  1010,   165,  1011,  1015,   165,  1025,   165,     0,   157,
       0,   531,     0,   604,   615,   178,   175,   644,   178,   178,
     178,   178,   178,     0,   178,   178,   175,   178,   178,   178,
     178,   178,     0,   178,   178,   175,   178,   178,   178,   178,
     178,     0,   178,   178,   175,   178,   659,   660,   661,   662,
     664,   175,   667,   668,     0,   178,   178,   688,   689,   690,
     691,   693,   175,   696,   697,     0,   178,   703,   175,     0,
     709,   175,   718,   631,   175,   727,   728,   157,   760,     0,
     168,   763,     0,   157,     0,   771,   775,   157,     0,   782,
     783,   784,   785,   789,   790,   786,   787,   788,     0,     0,
     168,   810,     0,   157,     0,     0,   823,   168,     0,     0,
     168,   168,     0,   869,     0,   189,   189,     0,     0,   189,
       0,   189,  1057,     0,     0,     0,     0,     0,     0,     0,
       0,  1079,     0,     0,   189,   189,     0,     0,     0,     0,
       0,     0,     0,     0,   939,     0,     0,     0,  1057,    87,
       0,   189,     0,  1103,   157,   157,     0,   165,     0,   222,
    1285,  1284,     0,     0,   244,     0,     0,     0,     0,   314,
     448,     0,   333,     0,   963,     0,   197,     0,  1004,  1005,
    1009,  1016,  1026,   370,     0,   333,     0,   616,   641,   650,
     651,   652,   653,   654,   175,   656,   657,   178,   679,   680,
     681,   682,   683,   175,   685,   686,   178,   670,   671,   672,
     673,   674,   175,   676,   677,   178,   663,   178,   175,   669,
     692,   178,   175,   698,   705,   175,   715,   632,     0,   168,
     764,     0,     0,     0,     0,     0,   791,   792,   808,     0,
       0,     0,   819,   824,     0,   833,   834,   825,   168,     0,
     190,  1057,  1057,    86,     0,  1057,     0,  1057,   913,   157,
       0,  1082,     0,  1085,  1122,  1086,  1084,  1081,     0,  1057,
    1057,    86,     0,     0,  1057,  1057,     0,     0,  1057,   942,
     940,   941,   920,  1057,  1057,  1103,  1117,     0,  1069,  1067,
    1105,     0,     0,     0,     0,   246,     0,     0,     0,   333,
     334,   336,   335,   381,     0,     0,   198,   200,   199,   965,
     966,   333,   383,     0,   178,   658,   178,   687,   178,   678,
     665,   178,   694,   178,   706,     0,   759,   168,   168,     0,
     168,     0,   168,   168,     0,   168,     0,  1057,   926,   922,
    1057,     0,   927,     0,   921,  1057,     0,  1083,     0,   924,
     923,  1057,     0,     0,   918,   916,  1057,   157,   917,   919,
     925,  1117,  1064,     0,     0,  1104,  1115,  1106,  1158,     0,
       0,     0,   277,   300,   303,   301,     0,     0,   382,   962,
     157,   384,   577,   655,   684,   675,   666,   695,   168,   762,
     768,     0,   781,   778,   809,   814,     0,   829,     0,   931,
     915,    86,     0,   929,  1123,     0,   914,    86,     0,   930,
       0,  1065,  1119,  1121,     0,  1114,     0,     0,   282,     0,
       0,     0,     0,   197,     0,   765,   157,   779,   811,   843,
    1057,     0,     0,  1057,     0,   168,  1120,  1116,   245,     0,
       0,     0,     0,     0,   964,   738,   157,   766,   780,   157,
     812,   933,     0,  1057,   932,     0,     0,   247,   293,     0,
     292,     0,   767,   813,    86,   934,    86,  1057,   291,   290,
    1057,  1057,   928,   936,   935
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    54,  1423,   173,   153,   919,  2498,  2499,   433,   434,
     435,   436,   154,   155,   156,   699,   691,    92,   818,   456,
    1220,  1686,  1360,  1373,  1356,  1929,  2601,  1420,  2659,  1591,
     344,   771,   774,   777,   785,    64,   369,   375,   379,   382,
      69,   385,    76,   401,   397,   391,   408,    83,   413,    93,
      99,   418,   420,   422,   491,   872,  1657,   424,   427,   106,
     443,   157,   159,  2653,   176,   178,   219,   914,   953,   480,
     861,   482,   492,   864,   869,   494,   496,   875,   499,   877,
     510,   880,   882,   513,   517,   521,   523,   526,   530,   558,
     554,  1281,   544,   900,   905,   897,  1269,   911,   547,   568,
     571,   576,   581,   589,   944,   946,   948,   950,   594,   955,
     222,   596,  1756,   241,   599,   601,   605,   610,   618,   251,
    1349,   622,   259,   631,  1365,   633,   639,  1000,  1381,   995,
    1797,  1387,  1385,  1799,   996,  1390,  1392,   645,   648,   643,
     261,   269,   271,   686,  1077,  1447,  1066,  1545,  1973,  1080,
    1084,  1075,   939,  1324,  1328,  1336,  1338,  1957,   277,  1093,
    1096,  1104,  2263,  2264,  2265,  1958,  2636,  2637,  1125,  1129,
    1132,  2715,  2716,  2712,  2713,  2762,  2266,  2267,   285,   291,
     299,   713,   708,   304,   309,   311,   723,   730,  1158,  1163,
     780,   768,   317,   321,   737,   327,   744,  1596,   757,   758,
    1194,  1189,  1602,  1179,  1608,  1620,  1616,  1183,   762,   746,
     333,   334,   348,  1207,   351,   357,   795,   798,   792,   359,
     362,   803
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2572
static const yytype_int16 yypact[] =
{
    5205,    39,   439,    19, -2572, -2572,   884,  -164,   569,   446,
     778,   521,  2490,   127,    12,  1248,   125,    35,  5241,   650,
     970, -2572,    91,   655,   179,   961,   -47,   115,   193,   382,
     694,   346,   820,  1462,    41,   -15,   242,   410,   382, -2572,
     163,    36,   858, -2572,   418,   517,   639, -2572,    89, -2572,
      28,  3634,   330,    55,   591,    23,   773,   300,   596,   607,
      74,   616,   -17,  1040, -2572, -2572, -2572,  1061,  1055, -2572,
     316,    51,    12,   466,   680,   108, -2572,   688,  1055, -2572,
   -2572,    45,  1055, -2572, -2572, -2572, -2572,  1055, -2572, -2572,
   -2572, -2572, -2572, -2572,   130,   702,   744,   757,   876, -2572,
    1055,  1299,  1055,  1055,  1239,  1055, -2572, -2572, -2572,   568,
   -2572, -2572, -2572, -2572,  4714, -2572, -2572, -2572, -2572, -2572,
   -2572,  1055, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572,
   -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572,
   -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572,
   -2572, -2572, -2572, -2572,  1250, -2572,  1055, -2572,   805, -2572,
   -2572,    12,    12,    12,    12,    12,    12, -2572, -2572,    12,
      12,    12,    12, -2572,  1055, -2572, -2572,   663, -2572,   774,
    1760,   730,   320,   613,   740,   454,  4110,   581,  4768,  4563,
     887,  4714,  3699, -2572,   514,  -105,   867,   933,   869,   924,
     783,   946,   382,   978, -2572,   897, -2572,   738,   696,   170,
   -2572,   229, -2572,   641, -2572,   477,   894,    25, -2572, -2572,
    4900, -2572, -2572, -2572,   921,   934,   966, -2572, -2572, -2572,
   -2572,   600, -2572, -2572, -2572, -2572,   -49, -2572, -2572,  4900,
    4353, -2572,  1026, -2572,   281, -2572,  1041,  1059,   538, -2572,
    1055, -2572,  1085,    82,  1091,   263,   841,  1094,    24, -2572,
   -2572, -2572,  1089,  1096,    12,    12,  1055,  1055, -2572, -2572,
    1098, -2572, -2572, -2572, -2572, -2572, -2572,  2911,   570, -2572,
    1115,    32,  1055,  4900,  1055, -2572,  1121, -2572, -2572, -2572,
   -2572, -2572,  1055,  1014,    12,  2902,  1055,  1250,  1055, -2572,
    1124, -2572,  5243, -2572, -2572,   855,  1130,  1148,  1055, -2572,
    1155, -2572, -2572,   389,  1162,  4900,  1178, -2572,  1253,  1055,
    1090, -2572,   484,  1069,   917,   187,  1193, -2572, -2572, -2572,
   -2572, -2572, -2572, -2572,  1196, -2572,   822,   129,   211,   261,
     102,  1055,  1055,   172, -2572,  1055,   929,  1231, -2572,  1055,
    1055, -2572,  1241,    16,    44,  1249,  1250, -2572, -2572, -2572,
    1088,  1055, -2572, -2572, -2572, -2572, -2572, -2572,  1055, -2572,
    1258,  1260, -2572,  1055,  1251, -2572, -2572, -2572, -2572, -2572,
   -2572,  1055, -2572, -2572,  1055, -2572, -2572,   369,   369, -2572,
    1267, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572,
   -2572, -2572,  1071,  1055,  1055,  1277,  1279,  1287, -2572, -2572,
    1055,  1055,  1055, -2572,  1055, -2572,  1290, -2572, -2572, -2572,
   -2572,  1170, -2572,  1292, -2572,  4900,  1295, -2572,  1055, -2572,
   -2572, -2572,  1055,  1296,  1309,  1309,  4900,  1055,  1055,  1055,
    1055,  1055,  1055, -2572,  1055,  4714,  1299,  1055,  1055, -2572,
   -2572, -2572, -2572, -2572, -2572, -2572,  1299,  1055, -2572, -2572,
   -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572,
    1318, -2572,  1050,   -22, -2572, -2572, -2572, -2572, -2572, -2572,
   -2572, -2572, -2572,   -44, -2572, -2572, -2572,  1157, -2572,   419,
     557,   557, -2572, -2572, -2572,  1327, -2572,  1330, -2572, -2572,
     -10, -2572,  1156, -2572, -2572, -2572,  1167, -2572, -2572,  1250,
   -2572,  1055,  1055, -2572,  4900,  4900,  1250, -2572, -2572,  1250,
   -2572, -2572, -2572, -2572,  1250, -2572, -2572,  4900,  1250,  1055,
   -2572, -2572,  4900, -2572,  1349,   174,  1158,     8, -2572, -2572,
    1164,  4900,    30, -2572, -2572, -2572, -2572, -2572, -2572,  1365,
    1371,  1374, -2572,  1186, -2572,   -32, -2572,  1055, -2572, -2572,
     761, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572,
   -2572, -2572,   477, -2572, -2572, -2572, -2572, -2572, -2572,  1197,
    1202, -2572, -2572,  1342,  1345,  1361, -2572, -2572,  1189, -2572,
    1055,  1425,  1206,  5243, -2572,  1250, -2572, -2572,  1434, -2572,
   -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572,
   -2572, -2572, -2572,  4900,  4900,  4900,  4900, -2572, -2572, -2572,
    1440,    12, -2572, -2572,  1443,  1444,  1252,  1055, -2572,   476,
    1366, -2572,  1447, -2572,   490,  1367,  3923,    37,  1451, -2572,
    1445, -2572,  1453, -2572,   226, -2572,  1455,  1456, -2572,  1454,
   -2572, -2572, -2572,  1055, -2572,  5243,  4679,  1612,   807,  1463,
     469,  1368, -2572, -2572, -2572,     4,    68,  1467,  1471,    56,
    1055,   465,     3,    88,  4900,    12,  1618,   564,    84,   149,
     199,     9, -2572,  1465,  1469,  1475, -2572, -2572, -2572, -2572,
   -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572,
    1055, -2572, -2572, -2572,  1055,  1055,  1055,  1055, -2572, -2572,
    1055,  1250,  1055, -2572,  1055,  1299,  1055,  1483,  1250, -2572,
   -2572, -2572, -2572, -2572, -2572, -2572, -2572,  1485,   311,   370,
   -2572, -2572, -2572,  1486, -2572, -2572, -2572, -2572,  1392, -2572,
    1487,  1488,  1406,  1492, -2572,  1494, -2572,  1497,  1409,  1498,
     537,   530,   540,   532,   577,  1500,   585, -2572, -2572,  1501,
    1502,  1504, -2572, -2572,  1506, -2572, -2572, -2572, -2572,  1507,
   -2572, -2572,  1508, -2572, -2572,  1510, -2572, -2572, -2572, -2572,
   -2572, -2572, -2572,  1055,  1055, -2572,  1055,  1339,  1055,  1055,
   -2572,  1276, -2572,  1352,  1513, -2572,  1358,  1518, -2572, -2572,
      -9,  1055,  1055, -2572,  1493, -2572, -2572,  1521,  1286,  1055,
    1516,   190, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572,
   -2572, -2572, -2572, -2572, -2572, -2572,  1537,  1538,  1055,  1055,
    1055,  1543,    12,  1544,  1545,  1250,  4900, -2572, -2572, -2572,
   -2572, -2572,  1250, -2572, -2572,  1055,  1055,  1055,  4900,  1055,
    1299,  1055, -2572,  1055, -2572, -2572, -2572, -2572, -2572,  1546,
    1551, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572,
   -2572, -2572, -2572, -2572,   581, -2572,  1055, -2572, -2572, -2572,
   -2572, -2572, -2572, -2572, -2572,  4900,  1055,  1250,  1250,    -9,
      -9,    -9,  1250,  1299,  1055,  1250, -2572, -2572, -2572,  1055,
   -2572,   -32,  1381,  1555,  1557, -2572, -2572,  1250, -2572,  1402,
    1407, -2572,  1564,  1565, -2572,  1567,  1379,  1531,  1534, -2572,
    1055,  4475,   478,   425, -2572, -2572, -2572,  1055,   576,  1187,
   -2572,  1308, -2572,  1618,  1313,   590,  1281,   470, -2572, -2572,
    1055, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572,
   -2572,  1055,  1576, -2572, -2572, -2572, -2572,    -9, -2572, -2572,
   -2572, -2572, -2572,  4853, -2572, -2572,  1578,  1580,  1055,  1581,
    1582,  1583,   506,   506,   -61,  1579,  1586,  1619,  1620,  1353,
    1355,  1625,  1629,  1631,   100,   100,   -61,  1587,  1635,   -61,
    1638,  1641,  4809,  1643,  1644, -2572, -2572,  1647,  1649,   617,
   -2572,  1651,  1652,  1655,  1657,   506,   -61,  1653,  1658, -2572,
    1659, -2572, -2572,  1250,  1078,  1347,  1421,   304,  1422,  1562,
     349,   634,  1666,    10,  1481,  1568,   956,  1648,  1613,   683,
    1430,  1569,  1672,  1464,    61,    78,   701,   -28,  4900,  1618,
    1640,   515,  1432,  1468,  1679,    65, -2572, -2572,   173,  1682,
    1684, -2572, -2572, -2572,  1685,  1474,   133,  1618,  1477, -2572,
   -2572, -2572,    12,  1688,  1691,  1055, -2572, -2572, -2572, -2572,
   -2572, -2572, -2572, -2572, -2572,     1, -2572,  2084, -2572, -2572,
   -2572,  1055, -2572,  1055, -2572, -2572, -2572, -2572,  1055,  1055,
    1055,   469,  4900, -2572,  1692,  1397, -2572, -2572,  1055, -2572,
   -2572,  1055,  4900,  1055, -2572, -2572, -2572, -2572, -2572, -2572,
   -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572,    12,  1055,
   -2572,  1055,   469,  1695,  1698, -2572, -2572,  1055,  1055, -2572,
      12, -2572, -2572, -2572,  1005,  1700,  1701, -2572, -2572, -2572,
   -2572, -2572,  1055,  1055, -2572, -2572,  1299,  1055,  1055, -2572,
   -2572, -2572, -2572,  1703,  1055, -2572,  1055,  1595, -2572,  1055,
   -2572,  1055,  1596, -2572,  1706, -2572,   793,   793,   670,   793,
    1707, -2572,   762, -2572, -2572,  1709,  1710,   810,  1712, -2572,
    1713,  1715,  1717, -2572,   826,   833,  1721,  1723,  1725, -2572,
   -2572,  1727,  1728,  1726, -2572,   793,   793,   793,  1055, -2572,
   -2572, -2572,  1055, -2572,  1055,   735,  4900, -2572,  1055, -2572,
    5243,  1250, -2572, -2572,  1730, -2572, -2572,  1731, -2572, -2572,
   -2572, -2572,  1705,  2902, -2572,  1055,  1729,  1055,  1055,  1055,
    1012, -2572,  1690,  1733,  1055,  1055,    29,  1735,    12,    12,
   -2572,  1250,  1055,  1734,  1738,  1739,  1250,  4900, -2572,  1055,
   -2572, -2572, -2572,  1055,  1055,  1055,  1250,  4900,    -9, -2572,
   -2572, -2572, -2572,  1299,  1055,  1744,    -9,  1055,   602, -2572,
    1746, -2572, -2572,   124,  3827,  1055, -2572,  1055,  1745,  1752,
    1055, -2572, -2572, -2572,  1748,  1132,  4714,  1511,   750,  1514,
     147,  4900,   791, -2572,    59,  1615,   178,   794,  1515,   253,
   -2572, -2572,   111,  1591,   736,  1630,   317,  1618,   951, -2572,
    1762,  1519, -2572,   524, -2572, -2572, -2572, -2572,  1618,  1554,
   -2572, -2572, -2572, -2572, -2572,  1055, -2572,  1055, -2572, -2572,
    1055,  1055, -2572,  1055, -2572,  1055, -2572, -2572, -2572, -2572,
    1563,  1055, -2572,  1055,    54, -2572, -2572,  1764,  1765, -2572,
    1055,   506,   506,   506, -2572, -2572, -2572, -2572, -2572, -2572,
    1766,   506,   506,   506,   583, -2572, -2572,   100,   506,   506,
     506, -2572, -2572,   506,   506,  1768,   506,   506,  1770,   100,
     967, -2572,  1772,  1773,  1803, -2572,   710, -2572,   824,   861,
   -2572,   988, -2572,  1532,  1804,  1806,  1808,   100,   100,   -61,
    1771,  1811,   -61,  1812,  1815,  1816,   506,   506, -2572,  1817,
     506,   506, -2572,  1818, -2572, -2572, -2572, -2572, -2572, -2572,
      12, -2572, -2572, -2572,  4714,  1145,    12,  1055,  1225,  1341,
     667, -2572, -2572, -2572,   689, -2572, -2572, -2572, -2572, -2572,
   -2572, -2572, -2572, -2572, -2572, -2572, -2572,  1819,    12,  1055,
   -2572,    12,  1820,  1055,  4900,    12,  1364,  1572,  1584,   334,
     375,  1585,   437,  1512,  1520,  1826,  1834,  1835,   349,  1839,
    1840,  1841,  1533,  1535,  1410,  1842,    12,  1055,  1312,  1428,
   -2572, -2572,    12,  4900, -2572, -2572,  4900,  1055,    17,  1843,
      12,  1055,  1250,    12, -2572,  1847,  4900,  4900,  1055, -2572,
   -2572, -2572,    12,    12,  4900, -2572, -2572, -2572, -2572, -2572,
   -2572,  4900,  1055,    12, -2572, -2572, -2572,  1055, -2572, -2572,
    1848,  1055,  1592,   182,  1055,  1624,  1055,   189,  1055, -2572,
    1055,  1626,  1627,  1055,  1055,  1055,  1055,  1055,  1055,  1055,
    1055,    21,  1055,  1055,  1628, -2572,  1055,  1055,  1055,  1055,
   -2572,  4900,  1250,  1850,  1855,  1856,  1055,  1055,  1250, -2572,
    1055,  1055,  1055,  4900,   469, -2572,  1055,  1055, -2572, -2572,
   -2572,  1859, -2572, -2572, -2572, -2572, -2572, -2572,  1857,  1055,
    1055, -2572,  1055,  1055, -2572, -2572, -2572, -2572, -2572, -2572,
   -2572, -2572, -2572,  1861,  1865,  1867, -2572, -2572,   793,  1868,
    1869,  1871, -2572,  1873,  1879,  1890,  1891,  1893, -2572,  1895,
   -2572, -2572, -2572,  1897,  1898,  1901, -2572,  1903,  1904,  1902,
   -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572,
    1055,  1055,  1055, -2572, -2572,  1055,  1250, -2572, -2572, -2572,
    2902,  1055,  1250,  1055,  1055,  1055, -2572,  1055,  1055,  1906,
    1055,  1910,  1909,  1055,  1055, -2572, -2572,  1912,  4900, -2572,
   -2572, -2572,  1055, -2572, -2572, -2572, -2572,  1250, -2572,   677,
    1055,   677,    -9,  1250,  4900,  1055,  1055,  1914, -2572, -2572,
   -2572,  1055, -2572, -2572, -2572, -2572, -2572,  4900, -2572,  4900,
    1055,  1916, -2572,   -32,  1917,  1918,  1919,  1921,  1922,  4900,
    1250, -2572,  4900, -2572,  4900,  4900,  4714,  4900,  1250, -2572,
    4900, -2572, -2572,  4900, -2572, -2572,  4714,  4900, -2572,  4900,
    4900,  4714,  4900, -2572,  4900,  4900,  1055, -2572, -2572, -2572,
    4900,  4900,  4900, -2572, -2572,  4900,  4900, -2572, -2572, -2572,
   -2572,  4900,  4900, -2572, -2572, -2572, -2572, -2572,  1055,  1055,
   -2572, -2572,  1927,  1055, -2572, -2572,  1929,  1928, -2572,  1055,
   -2572, -2572, -2572,   506, -2572, -2572, -2572,  1932,  1935,  1936,
   -2572, -2572,   -61,  1938,  1939,  1949,   506, -2572, -2572, -2572,
   -2572, -2572,   100, -2572, -2572,  1951,   506,  1963,  1969,  1971,
     100,   100,   -61,  1973,  1974,  1975,  1118, -2572,  1123, -2572,
    1140,  1704,  1976,  1979,  1982,   100,   100,   -61,  1984,  1985,
     -61,  1986,  1714,  1988,  1989,  1990,   100,   100,   -61,  1992,
    1993,   -61,  1994,  1720,  1995,  1996,  1997,   100,   100,   -61,
    1999,  2000,   -61,  2002,  2003,  2004,  2005,   100,   100,   -61,
    2001,  2007,  2008,   100, -2572, -2572, -2572, -2572, -2572,  2010,
   -2572, -2572,  2011,   100,  2012,  2013, -2572, -2572,   506, -2572,
   -2572,  2015, -2572,  1250, -2572,  4900,  1055, -2572,  1055,  4900,
    1055,  2017,  1347, -2572, -2572, -2572, -2572, -2572, -2572,  2019,
   -2572,  4900,    12,  2021,  4900,  1250, -2572,  2026,  1347,  1055,
    1055,  1055,  1055,  1055,  1055,  1055,  1055,  1055,  2014,  2028,
   -2572, -2572, -2572,  2029, -2572, -2572, -2572,  2031,  2032, -2572,
   -2572, -2572, -2572,  1055,  4900,  1055,  2034,  1347,    12,  1250,
    1250, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572,
   -2572, -2572,  1055,  1299, -2572, -2572,  1250,  1250,  1055, -2572,
   -2572,  1250,  1250, -2572, -2572, -2572, -2572,  1055,  1055,  1055,
    1055,  1055,  1055,  1055,  1055,  1055,  1055,  1775, -2572,  1055,
    1055,  1055,  1055,  1055,  1055,  1055,  1055,  1055,  1055,  1055,
    3410,  2035,  1055, -2572,  1055,  1055,  1055,  2038,  2039, -2572,
   -2572,  1250,    -9, -2572,  2040,  2042, -2572, -2572,  1299,  1055,
   -2572,  2045,  1250,  4900, -2572, -2572, -2572,  2048, -2572, -2572,
   -2572, -2572,   793,   793,   793, -2572, -2572, -2572, -2572, -2572,
   -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572,
   -2572,  1347,  1055, -2572,  1055, -2572,  1055,  1250,  1055, -2572,
    1299,  1055, -2572,  1055, -2572,  1967,  2049,  2051, -2572,  2054,
    1055,  1055,  2055,  1250,  4900, -2572, -2572,  1055, -2572,  1055,
   -2572,    -9,   124,  1055,  2056, -2572,  1055, -2572, -2572,  4714,
   -2572, -2572,  2057,  2058,  2059,  2060,  2062,  1250, -2572,   124,
     124,   124,  1250, -2572,   124,    -9,   124,   124,  1250, -2572,
     124,   124,   124,  1250, -2572,   124,   124,  1250,  4900,   124,
    1250,   124,   124,  1250,   124,  1250, -2572, -2572,  2065,  4714,
    2066, -2572,  1055, -2572, -2572, -2572, -2572,  2068, -2572, -2572,
   -2572, -2572,   506,   100, -2572, -2572, -2572, -2572, -2572, -2572,
    2069, -2572, -2572,   100,  2070,  2071,  2074,   100,   100,   -61,
    2081,  2082,  2083,  2085,  2087,  2088,   100,   100,   -61,  2090,
    2091,  2092,  2093,  2095,  2096,   100,   100,   -61,  2098,  2099,
    2100,   100,   506,   506,   506,   506,   506,  2103,   506,   506,
    2104,   100,   100,   506,   506,   506,   506,   506,  2106,   506,
     506,  2109,   100,   100, -2572, -2572, -2572, -2572, -2572,  2110,
   -2572, -2572,  2111,   100, -2572, -2572, -2572, -2572, -2572,  2112,
   -2572, -2572,   100, -2572,   100,  2114, -2572,  2115,  2116, -2572,
    5243, -2572,   124,  2117,  4900,   124,  1055,  4900,  2119, -2572,
     124, -2572, -2572,   124, -2572,  4900,  2120,  1055,  1055,  1055,
    1055,  1055,  1055,  1055,  1055,  1055,  1055,  1055, -2572, -2572,
   -2572,  4900,   124,  1055,  4900,  2121, -2572,  1299,  1299,  4900,
    1299,  1299,  4900,  4900,  1299,  1299,  1055,  1055,  1055,  1055,
    1055,  1055,  1347,  1055,  1055,  1055,  1674,  1711,  1737,  1767,
    1769,  1776,  1779,  1775, -2572,  1780, -2572, -2572,  1347,  1055,
    1055,  1055,  1055,  1347,  1055,  1055,  1055,  1055,  1055,  1055,
    1250,  1055,  1610,  1347,  1055,  1055, -2572, -2572,    -9,    12,
    4900,  4900, -2572, -2572, -2572,    -9,  1250,  2123, -2572, -2572,
   -2572, -2572,  1055, -2572, -2572,  1299,  1055, -2572, -2572, -2572,
    1108,  2124,  2125, -2572,  1055,  2136,   677, -2572,   124, -2572,
   -2572, -2572, -2572,  2137, -2572, -2572,  1250,  2139,  2140,  2142,
    2143,  4900,  2144, -2572, -2572, -2572, -2572, -2572, -2572, -2572,
   -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572,    -9,
     124, -2572,    -9, -2572, -2572,    -9, -2572,    -9,  2146,  1250,
    2148, -2572,  1055, -2572, -2572,   506,   100, -2572,   506,   506,
     506,   506,   506,  2149,   506,   506,   100,   506,   506,   506,
     506,   506,  2150,   506,   506,   100,   506,   506,   506,   506,
     506,  2151,   506,   506,   100,   506, -2572, -2572, -2572, -2572,
   -2572,   100, -2572, -2572,  2152,   506,   506, -2572, -2572, -2572,
   -2572, -2572,   100, -2572, -2572,  2153,   506, -2572,   100,  2154,
   -2572,   100, -2572, -2572,   100, -2572, -2572,  1250, -2572,  4900,
     124, -2572,  2157,  1250,  1055, -2572, -2572,  1250,  1055, -2572,
   -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572,  1055,  1055,
     124, -2572,  2158,  1250,  1055,  1299, -2572,   124,  1055,  1299,
     124,   124,  4900, -2572,  1055,  2159,  2159,  1055,  1055,  2159,
    1347,  2159, -2572,  4900,   349,  2161,  2160,  2163,  2164,  2166,
    2168, -2572,    12,  1347,  2159,  2159,  1055,  1055,  1347,  1055,
    1055,  1055,  1055,  1055, -2572,  1299,  1055,  2169, -2572, -2572,
    1055,  2159,    12,    13,  1250,  1250,    12,    -9,  2172, -2572,
   -2572, -2572,  2173,  1055, -2572,  2174,  2176,  2006,  1055, -2572,
   -2572,  2177,    97,  4900, -2572,  2178,   244,  4900, -2572, -2572,
   -2572, -2572, -2572, -2572,  2180,    97,  1055, -2572, -2572, -2572,
   -2572, -2572, -2572, -2572,   100, -2572, -2572,   506, -2572, -2572,
   -2572, -2572, -2572,   100, -2572, -2572,   506, -2572, -2572, -2572,
   -2572, -2572,   100, -2572, -2572,   506, -2572,   506,   100, -2572,
   -2572,   506,   100, -2572, -2572,   100, -2572, -2572,  1055,   124,
   -2572,  4900,  4900,  1055,  4900,  1055, -2572, -2572, -2572,  4900,
    4900,  1055, -2572, -2572,  4900, -2572, -2572, -2572,   124,  2181,
   -2572, -2572, -2572,  1347,  1055, -2572,  2182, -2572, -2572,  1250,
    2184, -2572,  2186, -2572, -2572, -2572, -2572, -2572,  2187, -2572,
   -2572,  1347,  1055,  2188, -2572, -2572,  1055,  4900, -2572, -2572,
   -2572, -2572, -2572, -2572, -2572,    13,  1699,  1618, -2572, -2572,
   -2572,    12,  2189,  2192,  2193, -2572,  2138,  2190,   169,    97,
   -2572, -2572, -2572, -2572,  2196,  4900, -2572, -2572, -2572, -2572,
   -2572,    97, -2572,  2197,   506, -2572,   506, -2572,   506, -2572,
   -2572,   506, -2572,   506, -2572,  5243, -2572,   124,   124,  1055,
     124,  2198,   124,   124,  1055,   124,  1055, -2572, -2572, -2572,
   -2572,  2200, -2572,  1055, -2572, -2572,  2201, -2572,  1055, -2572,
   -2572, -2572,  2204,  1055, -2572, -2572, -2572,  1250, -2572, -2572,
   -2572,  1699, -2572,  1783,  1814,  1618, -2572, -2572, -2572,  2205,
    2206,  2208, -2572, -2572, -2572, -2572,   937,   937, -2572, -2572,
    1250, -2572, -2572, -2572, -2572, -2572, -2572, -2572,   124, -2572,
   -2572,  2209, -2572,  4714, -2572, -2572,  2221, -2572,  1347, -2572,
   -2572,  1347,  1055, -2572, -2572,  1055, -2572,  1347,  1055, -2572,
    4900, -2572,  1783, -2572,    12, -2572,  2222,  2223, -2572,  1055,
    1055,  1055,  1055,   244,  2224,  4714,  1250, -2572,  4714, -2572,
   -2572,  1055,  2227, -2572,  1055,   124, -2572, -2572, -2572,  2228,
    2231,  1055,  2244,  1055, -2572, -2572,  1250, -2572, -2572,  1250,
   -2572, -2572,  2249, -2572, -2572,  2250,  2251, -2572, -2572,  2252,
   -2572,  2253, -2572, -2572,  1347, -2572,  1347, -2572, -2572, -2572,
   -2572, -2572, -2572, -2572, -2572
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2572, -2572,    -3, -2572,  1047,  -898, -1580,  -972,  1654, -2572,
    1006,  -404,  1892,   -50,    18, -2572, -2572, -1664,  1716,  1785,
    -872, -1930,  -863,   948,  1526, -2572, -1058, -2572,  -713, -1134,
   -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572,
   -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572,
   -2572, -2572, -2572, -2572,  -559,  -487, -2572, -2572, -2572, -2572,
   -2572, -2572, -2572, -2441, -2572, -2572, -2572, -2572, -2572, -2572,
   -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572,
   -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572,
   -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572,
   -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572,
   -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572,
   -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572,
   -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572,
   -2572, -2572, -2572, -2572, -2572, -1466, -2572, -2572, -2572, -2572,
   -2572,  -661, -2572, -2572, -2572, -2572, -2572, -2572,   456, -2572,
   -2572, -2572, -2572,   -81,  -667, -1228,  -430, -2572, -2572, -2572,
   -2572, -2572,  -506,  -485, -2572, -2572, -2571, -2572, -2572, -2572,
   -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572,
   -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572,  1482,
   -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572,
   -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572, -2572,
   -2572, -2572
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1256
static const yytype_int16 yytable[] =
{
      68,   356,  1903,  1268,   873,  2047,  1519,  2049,   105,  1118,
    1092,  1095,   902, -1102,  1133,   377,   107,  1260,  1261,  1262,
     793,  1078,    65,    66,    65,    66,  1970,   107,   364,   646,
     296,    65,    66,  1592,   908,  1597,   693,  1451,   320,    65,
      66,   592,   852,  1424,  1922,   107,   300,   350,   796,   411,
     361,   298,   855,   368,    65,    66,   305,   374,    65,    66,
     381,  1627,  1628,  1629,   384,   386,  1923,  1068,   396,  1924,
    1501,   403,   407,  1087,  1754,   410,  1655,    65,    66,   414,
    1925,    65,    66,   859,   415,  1344,  1711,   629,  1482,  1122,
    1218,    65,    66,   345,  2662,   107,  1490,   428,   432,   437,
     438,   442,   444,  1926,   606,   917,    55,  1358,  1081,  1069,
    1134,    65,    66,   545,  1484,   778,  1135,  1371,   448,   107,
     262,  1927,  2322,  1375,  1097,   997,  1378,    77,  1098,  2650,
    1094,   174,   447,   107,   112,   416,    65,    66,  1723,  2334,
    2335,  2336,  2763,  1409,  2338,   112,  2340,  2341,  1683,  1684,
    2343,  2344,  2345,   457,   862,  2347,  2348,   306,   242,  2351,
     158,  2353,  2354,   112,  2356,   909,  1126,   365,  1706,  1509,
     860,   469,    65,    66,   607,    65,    66,   903,   898,   490,
    1452,  1082,   263,   177,   511,    65,    66,   404,   878,   260,
     175,  2786,    65,    66,  1229,   252,   769,   998,   270,  1716,
    1503,  1099,  1230,   107,   264,   512,   546,   520,  2728,   525,
     529,  1359,   863,   112,  1485,   107,   346,   608,   557,   115,
    2731,   918,  1491,  1685,  1100,   314,   593,   116,   117,  1712,
     115,   110,   573,   590,   694,   318,   307,   112,   116,   117,
    1003,   695,   696,   392,  1070,   308,   310,   627,   115,   759,
     577,   112,   718,   879,  1453,   609,   116,   117,   265,  1219,
    1071,  1072,  1372,   653,   654,   107,  1332,  1083,   634,  1510,
    1079,   378,  2428,  1088,  1721,  2431,  2656,   697,   772,   700,
    2435,   702,  1724,  2436,   405,   620,  2651,  1101,  1004,   704,
     707,  1483,   710,   714,  1755,   716,   779,   412,   115,  1454,
     347,   647,  2451,  1713, -1102,   726,   116,   117,  1656,   794,
     760,  1149,  1520,   712,   120,   736,   738,  1136,    67,  1502,
     387,   112,   115,    65,    66,   120,   904,   349,   775,   910,
     116,   117,  1971,   112,   630,   319,   115,   797,   781,   782,
     784,  1725,   786,   120,   116,   117,   789,   790,  1714,   301,
    1123,  1154,  1073,  1074,   360,  1891,  1089,   802,   804,   302,
     393,  2723,   417,   150,   406,   805,  1127,   578,   151,   152,
     808,   810,  1493,   373,   150,  1928,  1124,  1486,   811,   151,
     152,   812,   635,   112,   698,  2652,  1674,  1102,  2519,  1430,
    1513,  1707,   150,   120,  1678,   118,  1893,   151,   152,   813,
     822,   823,   783,  1504,   394,   395,   115,   827,   828,   829,
    1159,   830,  1949,   286,   116,   117,  1431,   120,   115,  1954,
    2529,  1005,  1717,   266,  1155,   837,   116,   117,  1426,   838,
    1551,   120,  1511,  2657,   843,   844,   845,   846,   847,   848,
     272,   849,   150,   432,   853,   854,  1248,   151,   152,  1128,
    1432,    56,   315,   432,   856,  1320,  1433,  1872,  1896,   574,
     636,  1563,  1434,   851,  2005,   814,   150,   761,   115,   328,
     267,   151,   152,   579,    84,   316,   116,   117,  2724,   621,
     150,  1435,   575,  1160,  1888,   151,   152,  1339,  1730,  1264,
     969,   970,  1130,    57,   313,   980,  1006,  1722,   866,   312,
    2580,   120,  1436,   580,   981,   982,  1007,  1917,   885,   886,
    1156,    58,   483,   120,   388,   637,   273,  1437,   484,   329,
    2588,   335,   488,  2725,    65,    66,   894,  2593,   330,  1068,
    2596,  2597,  2658,  1068,   110,   815,  1849,  1008,   971,  1852,
     638,    59,   728,   956,   625,  1315,   740,  1731,  1427,  1438,
     150,  1740,   983,   899,   920,   151,   152,   485,   331,   531,
      60,   100,   150,   120,    61,   389,   358,   151,   152,  1161,
    1340,  1069,   390,    78,   532,  1069,   370,    62,  1892,    65,
      66,   101,  1157,   486,    65,    66,   994,   951,  1439,  1321,
     940,   363,  1175,    65,    66,   867,   533,  1767,  1768,   747,
      85,   371,  1180,  1440,  1119,  1013,  1680,   741,   399,    79,
    1316,   372,   150,   274,  1732,  1441,   534,   151,   152,  1894,
    1184,   376,  1393,    86,   968,   816,   497,    87,   275,   487,
     817,  1394,  1395,   535,   102,   498,  1317,   536,   110,  1186,
    1733,  1162,  1442,  1322,   602,  1769,   400,  1191,  1495,  2676,
    1012,  1743,  2518,  1176,  1443,   729,  1444,  1445,   560,   110,
     749,   626,   687,  1181,   537,   538,  1354,  1090,  2686,  1323,
    1103,   972,   973,   488,   489,   868,   336,  1120,   582,  1396,
      88,  1897,    80,    65,    66,   984,   985,   337,   603,   583,
    1177,   276,  1185,   409,  1355,  1741,  1446,  1140,   118,   870,
    1187,  1141,  1142,  1143,  1144,    84,  1070,  1145,  1192,  1147,
    1070,  1148,   432,  1150,   338,  1801,   584,  1318,   539,   332,
     103,    89,  1071,  1072,  1802,  1803,  1071,  1072,   540,    90,
      91,  1091,  1593,   419,   220, -1255,   742,   871,    63,  1633,
     278,  1211,  1575,   688,   244,  1496,   974,  2739,  2740,   421,
    2742,   221,  2744,  2745,  1742,  2747,   975,   976,  1448,   279,
     986,   280,   423,  1121,   743,   921,   922,   445,    81,  1319,
     987,   988,  1804,   245,  1873,   989,    65,    66,  1770,  1771,
    1202,  1203,   470,  1204,  1206,  1208,  1209,   977,   555,  1326,
     541,   542,   339,  1594,   585,  2061,  1876,   604,  1221,  1222,
    2050,   990,   118,  1334,  1497,  1226,  1227,  1476,  2774,   458,
    1178,  1061,  1397,  1398,  1073,  1074,   104,   755,  1073,  1074,
    1182,    82,   923,   118,  1599,  1233,  1234,  1235,   924,  1812,
     340,    85,   586,   367,   689,  1586,  1587,  1062,  1813,  1814,
     110,   471,  1243,  1244,  1245,   246,  1247,   432,  1249,   556,
    1250,   481,   690,  1772,    86,  2806,   765,  1188,  2046,  1675,
     247,   543,    94,  1773,  1774,  1193,  1823,  1874,  2298,  2299,
    2300,  1253,  1605,  1255,  1703,  1824,  1825,   925,  1449,    95,
     281,   425,   402,  1257,   322,  1600,  1815,  1399,  1613,  1877,
     432,  1265,  1254,   926,  1775,  1617,  1267,  1400,  1401,   341,
    2208,   587,  1402,  1993,   493,  1805,  1806,   426,   927,  2107,
     719,    88,   495,  1280,   928,  1709,  2216,  1284,  1718,   929,
     522,  1875,   248,  1826,  1325,  1327,  1330,  1477,  1403,  2120,
     551,   766,  1335,  1606,   548,   342,   640,  1341,   549,   282,
      65,    66,  1384,  1878,  2157,  2235,   720,  2160,  1342,  1614,
    1595,   343,    89,   588,   641,  2168,  1618,    96,  2171,   550,
      90,    91,   559,   249,   569,  1350,  2179,  1588,  1589,  2182,
    1488,  1063,   323,   250,   930,   570,  2189,  1489,  1457,   747,
    1807,  1787,  1788,   283,   591,   324,   572,   253,   597,   223,
    1808,  1809,   284,   931,  1704,  1810,  1590,   600,   932,   721,
     933,    97,  1834,  1835,   118,  1727,  1458,   598,  2610,  1459,
    1569,   224,  1728,   552,   225,    65,    66,    65,    66,  1816,
    1817,  1811,  1570,  2690,   561,  1064,   934,   935,   287,  1789,
     767,   619,  1487,   642,   936,  1710,   748,    98,  1719,  1460,
     749,  2701,  1601,    65,    66,   562,   623,   553,   226,  2301,
    1836,  1065,   937,  1512,   705,   227,  1827,  1828,    65,    66,
     563,   160,  1518,   624,    65,    66,   228,   229,  1461,   243,
     325,  1462,  1649,   230,   268,   254,    70,   750,  1546,   870,
    1547,   303,    71,   326,  1734,  1548,  1549,  1550,   255,   628,
    1607,    65,    66,   649,  1818,  1556,   632,   231,  1557,   644,
    1559,   650,   366,   655,  1819,  1820,  1615,   722,   938,  1821,
    2289,    65,    66,  1619,   751,   232,  1561,   871,  1562,   398,
     692,    72,  1735,   256,  1566,  1567,   703,   706,   717,   233,
     234,  1829,  2124,  2125,   724,  1822,   235,  2133,  2134,  1573,
    1574,  1830,  1831,   432,  1576,  1577,  1832,    73,    65,    66,
    1865,  1579,   725,  1580,  2142,  2143,  1582,   236,  1583,   727,
    1636,  1414,  1790,  1791,   564,   752,   380,   731,  2512,   753,
     288,  2780,  1833,   257,   832,   833,   289,  2783,   290,  2321,
    2126,  1736,   733,  1837,  1838,  2135,   258,   383,  1463,   739,
      65,    66,   745,    74,   754,  1630,   237,   755,   763,  1631,
     764,  1632,  2144,  2339,  1329,  1635,   787,   756,   459,   460,
     461,   462,   463,   464,   801,  1694,   465,   466,   467,   468,
    1641,  1464,  1644,   565,  1646,  1647,  1648,  1650,    65,    66,
    1869,  1653,  1654,  1415,  2820,   788,  2821,  1792,    75,  1662,
    1737,  1643,    65,    66,  2608,   791,  1668,  1793,  1794,   238,
    1669,  1670,  1671,   799,    65,    66,    65,    66,  1839,   239,
     432,  1676,   806,   809,  1679,   807,  2373,   566,  1840,  1841,
    2632,   820,  1689,   821,  1690,  2382,   567,  1692,  1795,   439,
    2470,   824,  1210,   825,  2391,   449,  1681,  1695,   240,    65,
      66,   826,   161,   734,   831,   162,  2483,   834,  1225,  1842,
     836,  2488,    65,    66,  1701,   429,  1416,  1417,   429,   430,
     431,   651,   652,  2127,  2128,    65,    66,  1914,  2136,  2137,
     431,  1418,  1745,   857,  1746,   163,   858,  1747,  1748,   865,
    1749,   874,  1750,   164,   876,  2145,  2146,   881,  1752,   883,
    1753,   709,    65,  1205,    65,    66,  1871,  1759,  1421,  1422,
      65,    66,   440,   896,  1421,  1422,  1212,  1213,   450,   901,
    1696,  1697,  1215,  1216,  1419,   906,   735,    65,    66,  1887,
     912,  1421,  1422,  2688,  2689,  1698,   913,  2692,   915,  2694,
     451,   452,    65,  1279,   770,   773,   776,   916,  2129,   453,
     941,  2699,  2700,  2138,   165,   942,  2704,  2705,  2130,  2131,
    2708,  1554,  1555,  2139,  2140,  2709,  2710,   454,  2602,   943,
    2147,  2605,   945,  2607,  1909,  1910,  2502,   455,  1699,   949,
    2148,  2149,  1866,  2506,  1868,  1870,  2619,  2620,   947,  2132,
     952,    65,    66,  1916,  2141,  1421,  1422,   954,   441,   958,
     840,   841,  1864,  2634,   963,   166,  1881,   965,   966,  1001,
    1884,  2150,   979,   967,   978,   991,   999,  1002,  1011,  2749,
    1009,  1010,  2750,   167,   168,    65,    66,  2753,  1067,  1076,
     169,  1085,   170,  2756,  1913,  1915,  1086,  2528,  2759,  1139,
    2530,   108,  1137,  2531,  1921,  2532,  1138,  1151,  1932,  1153,
    1164,  1165,  1166,  1167,  1168,  1938,  1169,  1172,  2606,  1170,
     171,   292,  1171,  1173,  1190,  1223,  1195,  1196,  1197,  1943,
    1198,  2618,  1199,  1200,  1945,  1201,  2623,  1214,  1947,   110,
    1950,  1951,  1217,  1953,  1955,  1956,  1224,  1959,  1228,  2240,
    1962,  1963,  1964,  1965,  1966,  1967,  1968,  1969,  1972,  1974,
    1975,  1231,  1232,  1977,  1978,  1979,  1980,  1236,  1238,  1239,
    1270,  1251,  2801,  1986,  1987,  2804,  1252,  1989,  1990,  1991,
    1271,  1272,  1274,  1994,  1995,   111,   172,  1275,  1276,  1282,
    1277,  1278,  1283,  1331,  1337,  2815,  1998,  1999,  1333,  2000,
    2001,  1343,  1347,  1361,  2292,  1348,  1351,  1352,  1353,  2822,
    1362,  1376,  2823,  2824,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   113,  1455,  1363,  1364,  2307,  2021,  2022,  2023,
    1368,  1366,  2024,  1367,  1369,  2641,  1370,  2026,  2029,  1377,
    2031,  2032,  2033,  1379,  2034,  2035,  1380,  2037,  1386,  1388,
    2040,  2041,  1389,  1475,  1391,  1404,  1405,  1410,  2028,  2044,
    1406,   293,  1407,  1411,  1412,  1425,  1428,  2048,   964,  1429,
    1465,  1450,  2053,  2054,  1478,  1456,  1479,  1480,  2056,  1050,
    1494,  1481,  1498,   118,  1500,  1499,  1505,  2059,   119,  1506,
    1507,  1508,  1516,  1051,  1514,  1517,  1651,  1553,  1466,   294,
    1564,  1467,  1052,  1565,  1468,  1571,  1572,  1578,  1581,  1584,
    1585,  1107,  1598,  1053,  1603,  1604,  1609,  1640,  1610,  1108,
    1611,  1612,  1106,  2088,  2073,  1109,  1621,  1131,  1622,  1623,
    1626,  1469,  1624,  1625,  2079,  1638,  1639,  1652,  1663,  2084,
    1658,  1645,  1664,  1665,  1054,  2096,  2097,  1110,  1677,  1691,
    2099,  1682,  -457,  1693,  1729,  1702,  2102,  1715,  1705,  1720,
    1470,   295,  1726,  1471,  1751,  1055,  1738,  1744,  1757,  1758,
    1763,  1111,  1782,  1739,  1785,  1850,  2779,  1796,  1798,  1112,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,  1800,  1844,
    1843,  1845,  1056,  1846,   472,  1851,  1889,  1853,  1113,  1854,
    1855,  1858,  1948,  1861,  1879,  1883,  1114,  1898,  1890,  1895,
    1900,  2256,   473,  2455,  2456,  1899,  2458,  2459,  1901,  1902,
    2462,  2463,  2257,  1904,  1905,  1906,  1911,  1930,  1907,   474,
    1908,  1057,  1935,  1946,  1952,  1983,  1960,  1961,  1976,  1984,
    1985,  1997,   475,  2203,  1996,  2204,  2002,  2206,  1107,  2258,
    2003,  2004,  1115,  2006,  2007,  2008,  1108,  2009,  1058,  1237,
    1472,   476,  1109,  2010,  1116,   477,  2217,  2218,  2219,  2220,
    2221,  2222,  2223,  2224,  2225,  2011,  2012,  2013,   478,  2014,
    1117,  2510,  2015,  2016,  1110,  2017,  2020,  2259,  2018,  2019,
    2231,  2036,  2233,  1473,  2038,  2039,  2042,  1059,  2055,  1060,
    2060,  2497,  2062,  2063,  2064,   297,  2065,  2066,  1111,  2239,
     432,  2098,  2101,  1374,  2100,  2243,  1112,  2104,   479,  1474,
    2105,  2106,  2108,  2109,  2246,  2247,  2248,  2249,  2250,  2251,
    2252,  2253,  2254,  2255,  2110,  2113,  2268,  2269,  2270,  2271,
    2272,  2273,  2274,  2275,  2276,  2277,  2278,  2279,  2115,  2282,
    2714,  2283,  2284,  2285,  2116,  1113,  2117,  2121,  2122,  2310,
    2123,  2152,  2151,  1114,  2153,   432,  2293,  2154,  2158,  2159,
   -1118,  2161,  2162,  2163,  2164,  2165,  2169,  2170,  2173,  2172,
    2174,  2175,  2176,  2180,  2181,  2190,   446,  2183,  2184,  2185,
    2186,  2191,  2647,  2192,  2194,  2195,  2197,  2198,  2226,  2302,
    2200,  2303,  2207,  2304,  2209,  2306,  2212,   432,  2308,  1115,
    2309,  2215,  2227,  2474,  2228,  2229,  2230,  2314,  2315,  2234,
    2281,  1116,  2286,  2287,  2319,  2290,  2320,  2291,  2714,  2294,
    2323,  2592,  2297,  2325,  2311,  2595,  2312,  1117,  2313,  2316,
    2794,  2324,  2328,  2329,  2330,  2331,  2260,  2332,  2261,  2358,
    2475,  2361,  2363,  2366,  2260,  2368,  2369,  2327,   509,  2370,
     516,   519,   715,   524,   528,  2374,  2375,   839,  2376,  2727,
    2377,  2629,  2378,  2379,  2383,  2384,  2476,  2385,  2386,  2362,
    2387,  2388,  2392,  2393,   819,  2394,  1521,  2401,  2404,  1515,
    2412,  1522,   595,  2415,  2418,  2419,  2421,  2360,  2424,  2425,
    2426,  2429,  2262,  2434,  2438,  2454,  2477,  2508,  2478,  2514,
    2515,   611,   617,  1523,  1524,  2479,  1525,  1526,  2480,  2482,
    2517,   800,  2520,  2522,  2721,  2523,  2524,  1527,  2525,  2527,
    2427,  2533,  2535,  2544,  2553,  2562,  2568,  2572,  2575,  1528,
    1529,  2581,  2589,  2600,  2612,  1560,  2611,  1530,  2613,  2614,
    1531,  2615,  2616,  2764,  2631,   701,  2642,  1568,  2643,  2645,
    2646,  2649,  2481,  2655,  2661,  2687,  2693,   711,  1532,  2696,
    2697,  2698,  2703,  2718,  2722,  1533,  1534,  2719,  2720,  1535,
    2729,  2732,  2743,  2432,  2751,  2711,  2754,   732,  2757,  2765,
    2766,  2767,  2768,  2775,  2439,  2440,  2441,  2442,  2443,  2444,
    2445,  2446,  2447,  2448,  2449,  2778,  2761,  2788,  2789,  2795,
    2452,  2803,  1174,  2807,   432,   432,  2808,   432,   432,  2770,
    2772,   432,   432,  2464,  2465,  2466,  2467,  2468,  2469,  2810,
    2471,  2472,  2473,  2814,  2816,     0,  2817,  2818,  2819,     0,
    1536,     0,     0,     0,     0,     0,  2484,  2485,  2486,  2487,
       0,  2489,  2490,  2491,  2492,  2493,  2494,     0,  2496,     0,
       0,  2500,  2501,     0,     0,  1659,  1660,     0,     0,     0,
       0,     0,     0,     0,   884,     0,     0,     0,     0,  2509,
       0,   889,   432,  2511,   890,     0,     0,  2513,     0,   891,
       0,  2516,     0,   893,     0,  1776,  1537,   835,     0,     0,
       0,     0,  1538,     0,     0,     0,     0,  1786,   842,     0,
       0,     0,     0,     0,     0,     0,     0,   850,     0,  1539,
       0,     0,     0,     0,     0,  1847,  1848,     0,     0,  1540,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2536,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1541,  1542,     0,     0,
     957,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1543,     0,     0,
       0,     0,     0,     0,     0,     0,   887,   888,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   892,
       0,     0,     0,     0,   895,     0,     0,     0,     0,     0,
       0,  2583,     0,   907,     0,  2585,     0,     0,     0,     0,
       0,     0,  1544,     0,     0,  2586,  2587,     0,     0,     0,
       0,  2591,   432,     0,     0,  2594,   432,     0,     0,     0,
       0,  2599,     0,     0,  2603,  2604,     0,  1862,     0,     0,
       0,     0,     0,  1867,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2621,  2622,     0,  2624,  2625,  2626,  2627,
    2628,     0,   432,  2630,   107,  1880,  1146,  2633,  1882,  1357,
       0,     0,  1886,  1152,     0,   959,   960,   961,   962,   108,
    2644,     0,     0,     0,     0,  2648,     0,     0,     0,     0,
       0,     0,     0,  1912,     0,     0,     0,     0,     0,  1918,
     109,  1408,     0,  2663,     0,     0,     0,  1931,     0,     0,
    1934,     0,     0,     0,     0,     0,     0,   110,     0,  1939,
    1940,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1944,     0,     0,     0,     0,     0,  1105,     0,     0,     0,
       0,     0,     0,     0,     0,  2675,     0,     0,     0,     0,
    2679,     0,  2681,     0,     0,     0,     0,     0,  2684,     0,
       0,     0,     0,   111,     0,     0,     0,     0,     0,     0,
       0,  2691,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   112,     0,     0,     0,     0,     0,     0,  2702,
    1240,     0,     0,  2706,     0,  2738,     0,  1242,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2726,     0,     0,     0,     0,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1258,  1259,     0,     0,  2741,  1263,     0,     0,
    1266,  2746,     0,  2748,     0,     0,     0,     0,     0,   114,
    2752,     0,  1273,     0,     0,  2755,     0,   115,     0,     0,
    2758,     0,     0,     0,     0,   116,   117,     0,     0,     0,
       0,   118,     0,     0,     0,     0,   119,     0,     0,     0,
       0,     0,     0,  2769,  2771,     0,     0,     0,  1241,     0,
    2112,     0,     0,     0,     0,     0,     0,     0,  2118,  2119,
    1246,     0,     0,     0,     0,     0,     0,     0,     0,  2781,
       0,     0,  2782,  2155,  2156,  2784,     0,     0,     0,     0,
       0,  2777,     0,     0,  2166,  2167,  2790,  2791,  2792,  2793,
       0,     0,     0,     0,     0,  2177,  2178,  1256,  2802,     0,
       0,  2805,     0,     0,     0,  2187,  2188,     0,  2809,     0,
    2811,  2193,   120,  2797,     0,     0,  2800,     0,  1413,     0,
       0,  2196,     0,     0,     0,     0,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,     0,     0,     0,     0,
       0,   150,     0,     0,     0,     0,   151,   152,     0,     0,
       0,     0,     0,     0,     0,  1346,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1760,  1761,  1762,
       0,     0,     0,     0,     0,     0,     0,  1764,  1765,  1766,
       0,     0,     0,     0,  1777,  1778,  1779,     0,     0,  1780,
    1781,     0,  1783,  1784,     0,    65,    66,     0,     0,     0,
       0,     0,     0,     0,     0,   656,   657,     0,     0,     0,
       0,   108,     0,     0,     0,     0,     0,     0,     0,  2211,
    1492,     0,  1856,  1857,     0,     0,  1859,  1860,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   110,
       0,     0,     0,     0,     0,  2236,     0,     0,     0,     0,
       0,     0,   658,     0,     0,     0,     0,     0,   659,     0,
       0,     0,     0,     0,  1552,   660,     0,   661,     0,     0,
       0,     0,   662,     0,  1558,   663,  1637,     0,     0,     0,
       0,   664,     0,     0,     0,   111,     0,     0,     0,     0,
       0,     0,   665,     0,     0,     0,     0,     0,   666,     0,
       0,     0,     0,     0,     0,     0,  1661,   667,     0,     0,
       0,  1666,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1672,     0,   668,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2365,   113,     0,   669,     0,     0,     0,     0,     0,
       0,  2367,     0,     0,     0,  2371,  2372,     0,     0,   670,
       0,     0,     0,     0,  2380,  2381,     0,     0,     0,   671,
     672,     0,     0,  2389,  2390,     0,     0,     0,  1634,  2395,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2405,
    2406,   673,     0,     0,     0,  1642,     0,     0,     0,     0,
    2416,  2417,     0,   118,     0,     0,     0,     0,   119,     0,
       0,  2420,     0,     0,   674,     0,     0,     0,     0,  1667,
    2422,     0,  2423,     0,     0,     0,     0,     0,   675,  1673,
     676,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   677,  1688,     0,     0,     0,
     678,     0,     0,     0,     0,     0,     0,   679,  1700,     0,
       0,     0,     0,  1708,   680,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   681,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   682,   683,     0,   684,     0,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   685,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1933,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2103,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2111,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2114,     0,  2538,     0,  1863,     0,     0,     0,
       0,     0,     0,     0,  2547,     0,     0,     0,     0,     0,
       0,     0,     0,  2556,     0,     0,  2503,  1982,     0,     0,
       0,     0,  2565,  1988,     0,     0,  1885,     0,     0,  2567,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2571,     0,     0,     0,     0,     0,  2574,     0,     0,  2576,
       0,     0,  2577,     0,     0,  1919,     0,     0,  1920,     0,
       0,     0,     0,     0,  2199,     0,     0,     0,  1936,  1937,
       0,     0,     0,     0,     0,     0,  1941,     0,     0,     0,
       0,     0,     0,  1942,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,     0,     0,     0,     0,     0,
       0,  2025,     0,     0,     0,     0,     0,  2030,     0,   108,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1981,     0,     0,     0,     0,     0,     0,
       0,     0,  2045,     0,     0,  1992,     0,     0,  2051,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2068,     0,     0,     0,     0,
       0,     0,  2664,  2075,     0,     0,     0,     0,     0,     0,
       0,  2666,     0,     0,     0,     0,     0,     0,     0,     0,
    2668,     0,     0,   111,     0,     0,  2671,     0,     0,     0,
    2673,     0,     0,  2674,     0,     0,     0,     0,     0,  2617,
       0,     0,  2027,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2635,
    2043,     0,     0,  2640,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2052,     0,     0,     0,
     113,     0,     0,     0,     0,     0,     0,     0,     0,  2057,
       0,  2058,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2067,     0,     0,  2069,     0,  2070,  2071,  2072,  2074,
       0,     0,  2076,     0,     0,  2077,     0,     0,  2078,  2080,
       0,  2081,  2082,  2083,  2085,     0,  2086,  2087,     0,     0,
       0,     0,  2089,  2090,  2091,     0,     0,  2092,  2093,     0,
       0,     0,     0,  2094,  2095,     0,   119,     0,  2364,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2201,     0,
     352,     0,     0,     0,     0,     0,     0,   353,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2214,     0,     0,     0,     0,     0,     0,     0,  2396,  2397,
    2398,  2399,  2400,     0,  2402,  2403,     0,     0,  2717,  2407,
    2408,  2409,  2410,  2411,     0,  2413,  2414,     0,     0,     0,
       0,     0,     0,   527,  2237,  2238,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   108,     0,
       0,  2241,  2242,     0,     0,     0,  2244,  2245,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   110,  2202,     0,     0,
       0,  2205,     0,     0,     0,     0,  2288,     0,     0,     0,
       0,     0,     0,  2210,     0,     0,  2213,  2295,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   111,     0,     0,     0,  2232,     0,     0,     0,
       0,  2787,  2305,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2317,     0,
       0,  1687,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   108,     0,     0,     0,
       0,     0,  2333,     0,     0,     0,     0,  2337,     0,   113,
       0,     0,  2280,  2342,     0,     0,     0,     0,  2346,     0,
       0,     0,  2349,     0,     0,  2352,     0,     0,  2355,     0,
    2357,   354,     0,     0,   355,  2296,     0,     0,     0,     0,
       0,  2537,     0,     0,  2539,  2540,  2541,  2542,  2543,     0,
    2545,  2546,     0,  2548,  2549,  2550,  2551,  2552,     0,  2554,
    2555,     0,  2557,  2558,  2559,  2560,  2561,     0,  2563,  2564,
     118,  2566,     0,     0,     0,   119,     0,     0,     0,     0,
     111,  2569,  2570,     0,     0,     0,  2318,     0,     0,     0,
       0,     0,  2573,     0,     0,     0,     0,     0,     0,     0,
       0,  2326,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
    2350,     0,     0,     0,     0,     0,     0,   113,     0,     0,
       0,  2359,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,     0,     0,     0,     0,     0,
       0,     0,     0,   119,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2495,     0,     0,     0,     0,
       0,     0,     0,  2665,     0,     0,     0,     0,     0,     0,
       0,  2507,  2667,   992,     0,     0,     0,     0,   993,     0,
       0,  2669,     0,  2670,     0,     0,  2430,  2672,     0,  2433,
       0,     0,     0,     0,     0,     0,     0,  2437,     0,     0,
       0,  2521,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2450,     0,     0,  2453,     0,     0,   108,
       0,  2457,     0,     0,  2460,  2461,     0,     0,     0,     0,
       0,     0,     0,     0,  2534,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,     0,     0,     0,   500,   501,     0,     0,
     502,     0,  2504,  2505,     0,     0,     0,     0,     0,     0,
    2733,     0,  2734,     0,  2735,     0,     0,  2736,     0,  2737,
       0,     0,     0,   503,     0,     0,     0,     0,     0,     0,
       0,     0,  2578,   111,     0,     0,     0,     0,  2582,     0,
       0,     0,  2584,  2526,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2590,     0,
       0,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,     0,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   504,     0,     0,     0,     0,     0,     0,  2638,
    2639,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   505,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2579,     0,   506,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2598,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2609,     0,     0,     0,     0,
       0,   612,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   507,
       0,     0,     0,     0,  2695,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   613,     0,     0,  2654,     0,     0,     0,  2660,
       0,     0,     0,     0,     0,     0,     0,     0,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   111,   508,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     614,     0,     0,  2677,  2678,     0,  2680,     0,     0,     0,
       0,  2682,  2683,     0,     0,     0,  2685,     0,     0,     0,
       0,     0,  2760,     0,     0,  1285,  1286,  1287,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,     0,  2773,     0,     0,     0,  2707,
       0,     0,     0,     0,  1288,  1289,     0,     0,  1290,     0,
     615,     0,     0,     0,     0,  1291,     0,     0,  1292,     0,
       0,     0,  1293,     0,     0,     0,     0,  2730,     0,     0,
    1294,  1295,     0,     0,     0,     0,     0,     0,  1296,     0,
       0,  2798,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
       0,  2812,   108,     0,  2813,     0,  1297,  1298,     0,     0,
    1299,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1300,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     110,     0,     0,     0,     0,     0,     0,     0,  1301,     0,
       0,     0,     0,     0,     0,  2776,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   616,     0,
       0,  1302,  2785,     0,     0,     0,     0,     0,     0,     0,
    1303,     0,     0,     0,     0,     0,   111,  2796,     0,     0,
    2799,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,  1014,
    1015,  1016,     0,     0,     0,  1304,     0,  1305,     0,     0,
       0,     0,     0,  1306,  1307,     0,     0,     0,     0,     0,
       0,     0,     0,   113,     0,     0,     0,     0,  1017,  1018,
    1308,     0,  1019,   108,     0,  1020,     0,     0,     0,     0,
       0,  1309,  1021,     0,     0,     0,  1022,     0,     0,     0,
       0,     0,     0,     0,  1023,  1024,     0,     0,     0,     0,
       0,     0,  1025,  1026,     0,     0,  1310,     0,  1311,     0,
       0,   110,     0,     0,     0,     0,     0,     0,  1312,     0,
    1027,     0,     0,     0,   118,     0,  1028,   108,  1313,   119,
    1029,  1030,     0,     0,  1031,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1032,     0,     0,     0,     0,     0,   111,     0,     0,
       0,     0,  1314,     0,     0,     0,     0,     0,   514,     0,
       0,     0,  1033,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     518,     0,     0,     0,     0,  1034,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,   108,     0,   113,     0,     0,     0,     0,  1035,
       0,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,  1036,
    1345,  1037,     0,     0,     0,     0,     0,  1038,  1039,   108,
       0,     0,     0,     0,     0,     0,     0,     0,   113,     0,
       0,     0,     0,  1040,  1041,   118,     0,     0,     0,     0,
     119,     0,     0,     0,  1042,  1043,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   111,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1044,     0,  1045,     0,  1382,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1046,     0,  1047,     0,     0,     0,
       0,     0,  1048,     0,   119,     0,     0,     0,     0,     0,
       0,     0,     0,   111,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1049,     0,     0,     0,
       0,     0,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     113,     0,     0,   515,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
       0,     0,     0,     0,     0,     0,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   119,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,  1383,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,     1,     0,     0,     2,
       0,     0,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     0,     0,     0,     0,
       5,     6,     0,     7,     8,     9,     0,     0,     0,     0,
       0,     0,   179,    10,     0,   180,     0,     0,   181,     0,
      11,     0,    12,    13,     0,     0,     0,     0,     0,     0,
       0,     0,    14,    15,     0,     0,     0,   182,     0,   183,
     184,   185,     0,     0,     0,     0,     0,     0,     0,   186,
       0,   187,     0,     0,     0,    16,   188,     0,   189,   190,
     191,     0,     0,    17,     0,     0,   192,     0,   193,     0,
       0,     0,     0,     0,     0,     0,    18,     0,     0,     0,
      19,     0,     0,    20,     0,     0,     0,    21,    22,     0,
       0,     0,     0,     0,    23,     0,     0,     0,   194,     0,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,     0,   195,    26,    27,    28,
       0,     0,    29,    30,   196,     0,   197,   198,     0,     0,
     199,     0,     0,     0,   200,     0,   201,    31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    33,    34,     0,   202,   203,
       0,     0,     0,   204,     0,     0,     0,     0,    35,     0,
      36,     0,     0,   205,     0,     0,     0,    37,     0,     0,
       0,    38,     0,     0,     0,    39,     0,    40,     0,    41,
     206,   207,     0,     0,    42,     0,     0,     0,   208,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    43,     0,
       0,     0,     0,     0,    44,     0,     0,     0,     0,     0,
       0,     0,     0,   209,     0,   210,     0,     0,     0,    45,
      46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    47,     0,    48,     0,     0,     0,     0,     0,    49,
     211,     0,    50,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   212,   213,     0,     0,     0,
       0,     0,     0,     0,   214,     0,     0,     0,     0,     0,
       0,   215,     0,    52,     0,     0,     0,   216,     0,   217,
      53,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,     0,
       0,     0,     0,     0,     0,     0,   218
};

static const yytype_int16 yycheck[] =
{
       3,    51,  1468,   901,   491,  1669,     5,  1671,    11,   676,
     671,   672,     4,     0,     5,    32,     4,   889,   890,   891,
       4,    17,     3,     4,     3,     4,     5,     4,     5,     5,
      33,     3,     4,  1167,     4,  1169,     4,    27,    41,     3,
       4,    16,   446,  1015,    27,     4,     5,    50,     4,     4,
      53,    33,   456,    56,     3,     4,    71,    60,     3,     4,
      63,  1195,  1196,  1197,    67,    68,    49,    64,    71,    52,
       5,    74,    75,    17,    20,    78,    47,     3,     4,    82,
      63,     3,     4,   105,    87,   957,    27,     5,    27,     5,
      99,     3,     4,     4,  2535,     4,   124,   100,   101,   102,
     103,   104,   105,    86,   153,   137,    67,   168,    40,   106,
     101,     3,     4,   218,    36,    13,   107,    17,   121,     4,
       5,   104,  2052,   986,    36,    88,   989,   291,    40,    32,
     127,     6,   114,     4,   122,     5,     3,     4,    27,  2069,
    2070,  2071,  2713,  1006,  2074,   122,  2076,  2077,    24,    25,
    2080,  2081,  2082,   156,   198,  2085,  2086,   172,    67,  2089,
      33,  2091,  2092,   122,  2094,   135,    17,   144,    21,    36,
     192,   174,     3,     4,   223,     3,     4,   169,     4,   182,
     170,   113,    67,   148,   187,     3,     4,    79,   198,   236,
      65,  2762,     3,     4,     4,    16,    67,   160,     5,    21,
      27,   113,    12,     4,    89,   187,   311,   189,  2649,   191,
     192,   272,   256,   122,   136,     4,   127,   266,   200,   207,
    2661,   253,   250,    99,   136,    62,   201,   215,   216,   170,
     207,    57,    62,   215,   202,   199,   251,   122,   215,   216,
      14,   209,   210,   192,   241,   260,     4,   250,   207,    62,
      21,   122,   302,   263,   244,   304,   215,   216,   143,   268,
     257,   258,   162,   266,   267,     4,   933,   199,     5,   136,
     266,   288,  2202,   217,    21,  2205,    32,   245,    67,   282,
    2210,   284,   171,  2213,   176,     4,   189,   199,    62,   292,
     293,   230,   295,   296,   240,   298,   194,   252,   207,   289,
     211,   277,  2232,   244,   291,   308,   215,   216,   279,   293,
     123,   715,   311,   295,   302,   318,   319,   308,   299,   254,
       4,   122,   207,     3,     4,   302,   318,   299,    67,   299,
     215,   216,   311,   122,   252,   299,   207,   293,   341,   342,
     343,   230,   345,   302,   215,   216,   349,   350,   289,   308,
     266,    40,   349,   350,   299,    21,   300,   360,   361,   318,
     309,   192,   232,   351,   256,   368,   217,   138,   356,   357,
     373,   374,  1039,   299,   351,   358,   292,   299,   381,   356,
     357,   384,   119,   122,   352,   288,  1258,   299,  2318,    40,
    1057,   244,   351,   302,  1266,   221,    21,   356,   357,    30,
     403,   404,   230,   230,   353,   354,   207,   410,   411,   412,
      40,   414,   230,    67,   215,   216,    67,   302,   207,   230,
    2350,   195,   244,   308,   113,   428,   215,   216,   124,   432,
    1091,   302,   299,   189,   437,   438,   439,   440,   441,   442,
      58,   444,   351,   446,   447,   448,   850,   356,   357,   300,
     101,    12,   289,   456,   457,    30,   107,  1429,    21,   289,
     197,  1122,   113,   445,  1598,    96,   351,   280,   207,    51,
     355,   356,   357,   244,    28,   312,   215,   216,   309,   198,
     351,   132,   312,   113,  1456,   356,   357,    17,   171,   893,
      14,    15,   293,    54,    38,     5,   270,   244,    79,    89,
    2430,   302,   153,   274,    14,    15,   280,  1479,   511,   512,
     199,    72,   192,   302,   198,   252,   134,   168,   198,   101,
    2450,     4,   353,   354,     3,     4,   529,  2457,   110,    64,
    2460,  2461,   288,    64,    57,   166,  1399,   311,    62,  1402,
     277,   102,   153,   593,     6,    67,    62,   230,   244,   200,
     351,    27,    62,   535,   557,   356,   357,   237,   140,    45,
     121,    40,   351,   302,   125,   249,   236,   356,   357,   199,
     100,   106,   256,     4,    60,   106,   276,   138,   244,     3,
       4,    60,   271,   263,     3,     4,   636,   590,   239,   164,
     572,     0,    62,     3,     4,   176,    82,    14,    15,    62,
     154,     5,    62,   254,    40,   655,     4,   123,   142,    40,
     132,     4,   351,   231,   297,   266,   102,   356,   357,   244,
      88,     5,     5,   177,   627,   256,   172,   181,   246,   309,
     261,    14,    15,   119,   113,   181,   158,   123,    57,    62,
    1307,   271,   293,   218,    44,    62,   180,    62,   133,  2579,
     653,  1318,  2316,   123,   305,   266,   307,   308,   202,    57,
     123,   123,    92,   123,   150,   151,   160,   670,  2598,   244,
     673,   195,   196,   353,   354,   256,    37,   113,    37,    62,
     234,   244,   113,     3,     4,   195,   196,    48,    88,    48,
     160,   309,   160,     5,   188,   171,   347,   700,   221,   142,
     123,   704,   705,   706,   707,    28,   241,   710,   123,   712,
     241,   714,   715,   716,    75,     5,    75,   239,   204,   301,
     199,   275,   257,   258,    14,    15,   257,   258,   214,   283,
     284,   266,    62,    31,    84,     0,   252,   180,   299,     4,
      46,   791,  1146,   173,    89,   230,   270,  2677,  2678,     5,
    2680,   101,  2682,  2683,   230,  2685,   280,   281,   124,    65,
     270,    67,     5,   199,   280,     4,     5,   199,   199,   291,
     280,   281,    62,   118,   107,   285,     3,     4,   195,   196,
     783,   784,   119,   786,   787,   788,   789,   311,     5,   213,
     276,   277,   153,   123,   153,  1693,   107,   197,   801,   802,
    1672,   311,   221,   213,   289,   808,   809,   124,  2738,     4,
     280,     4,   195,   196,   349,   350,   295,   280,   349,   350,
     280,   252,    61,   221,    62,   828,   829,   830,    67,     5,
     191,   154,   191,    60,   264,    42,    43,    30,    14,    15,
      57,    67,   845,   846,   847,   190,   849,   850,   851,    66,
     853,   121,   282,   270,   177,  2785,    34,   280,   181,  1263,
     205,   347,    84,   280,   281,   280,     5,   200,  2002,  2003,
    2004,   874,    62,   876,   124,    14,    15,   116,   244,   101,
     186,     5,   202,   886,    26,   123,    62,   270,    62,   200,
     893,   894,   874,   132,   311,    62,   899,   280,   281,   260,
    1872,   260,   285,  1564,   291,   195,   196,    31,   147,  1772,
      55,   234,   172,   916,   153,   124,  1888,   920,   124,   158,
      33,   254,   267,    62,   927,   928,   929,   244,   311,  1792,
       6,   109,   935,   123,    67,   296,    95,   940,     5,   245,
       3,     4,   992,   254,  1807,  1917,    91,  1810,   951,   123,
     280,   312,   275,   312,   113,  1818,   123,   179,  1821,    90,
     283,   284,    16,   308,    67,   968,  1829,   174,   175,  1832,
     269,   164,   114,   318,   213,   237,  1839,   276,    22,    62,
     270,    14,    15,   289,    90,   127,   290,    26,    67,    19,
     280,   281,   298,   232,   244,   285,   203,    31,   237,   144,
     239,   223,    14,    15,   221,   269,    50,    73,  2474,    53,
       5,    41,   276,    89,    44,     3,     4,     3,     4,   195,
     196,   311,    17,  2603,    46,   218,   265,   266,   208,    62,
     208,     5,  1035,   192,   273,   244,   119,   259,   244,    83,
     123,  2621,   280,     3,     4,    67,     5,   123,    78,  2021,
      62,   244,   291,  1056,    40,    85,   195,   196,     3,     4,
      82,    14,  1065,     4,     3,     4,    96,    97,   112,    22,
     212,   115,    60,   103,    27,   114,   192,   160,  1081,   142,
    1083,    34,   198,   225,   133,  1088,  1089,  1090,   127,     4,
     280,     3,     4,     4,   270,  1098,     5,   127,  1101,     5,
    1103,     5,    55,     5,   280,   281,   280,   252,   347,   285,
    1982,     3,     4,   280,   197,   145,  1119,   180,  1121,    72,
       5,   237,   171,   162,  1127,  1128,     5,   113,     4,   159,
     160,   270,    14,    15,     4,   311,   166,    14,    15,  1142,
    1143,   280,   281,  1146,  1147,  1148,   285,   263,     3,     4,
       5,  1154,     4,  1156,    14,    15,  1159,   187,  1161,     4,
    1210,    83,   195,   196,   186,   248,   126,     5,    60,   252,
     350,  2751,   311,   212,     4,     5,   356,  2757,   358,  2051,
      62,   230,     4,   195,   196,    62,   225,   126,   232,    99,
       3,     4,   123,   309,   277,  1198,   226,   280,     5,  1202,
       4,  1204,    62,  2075,    17,  1208,   277,   290,   161,   162,
     163,   164,   165,   166,   126,    83,   169,   170,   171,   172,
    1223,   265,  1225,   245,  1227,  1228,  1229,  1230,     3,     4,
       5,  1234,  1235,   155,  2814,     4,  2816,   270,   354,  1242,
     289,  1223,     3,     4,  2472,     4,  1249,   280,   281,   279,
    1253,  1254,  1255,     4,     3,     4,     3,     4,   270,   289,
    1263,  1264,     4,    12,  1267,     5,  2129,   289,   280,   281,
    2498,     4,  1275,   202,  1277,  2138,   298,  1280,   311,    40,
    2252,     4,     6,     4,  2147,    35,  1268,   155,   318,     3,
       4,     4,    44,    40,     4,    47,  2268,     5,    12,   311,
       5,  2273,     3,     4,  1286,     9,   228,   229,     9,    10,
      11,   264,   265,   195,   196,     3,     4,     5,   195,   196,
      11,   243,  1325,     5,  1327,    77,   276,  1330,  1331,   172,
    1333,     4,  1335,    85,     4,   195,   196,   181,  1341,   172,
    1343,   294,     3,     4,     3,     4,     5,  1350,     7,     8,
       3,     4,   113,     4,     7,     8,     4,     5,   108,   201,
     228,   229,     4,     5,   286,   201,   113,     3,     4,     5,
       5,     7,     8,  2601,  2602,   243,     5,  2605,     4,  2607,
     130,   131,     3,     4,   337,   338,   339,   201,   270,   139,
     193,  2619,  2620,   270,   146,   193,  2624,  2625,   280,   281,
    2628,     4,     5,   280,   281,  2633,  2634,   157,  2466,    67,
     270,  2469,    67,  2471,     4,     5,  2288,   167,   286,   230,
     280,   281,  1425,  2295,  1427,  1428,  2484,  2485,    67,   311,
       5,     3,     4,     5,   311,     7,     8,   231,   199,     5,
     434,   435,  1424,  2501,     4,   197,  1449,     4,     4,     4,
    1453,   311,     5,   201,    88,    88,     5,     4,     4,  2687,
       5,     5,  2690,   215,   216,     3,     4,  2695,     5,   101,
     222,     4,   224,  2701,  1477,  1478,     5,  2349,  2706,     4,
    2352,    19,    17,  2355,  1487,  2357,    17,     4,  1491,     4,
       4,    99,     5,     5,    88,  1498,     4,    88,  2470,     5,
     252,    39,     5,     5,     4,    12,     5,     5,     4,  1512,
       4,  2483,     5,     5,  1517,     5,  2488,     4,  1521,    57,
    1523,  1524,     4,  1526,  1527,  1528,     5,  1530,    12,  1933,
    1533,  1534,  1535,  1536,  1537,  1538,  1539,  1540,  1541,  1542,
    1543,     4,     4,  1546,  1547,  1548,  1549,     4,     4,     4,
     169,     5,  2780,  1556,  1557,  2783,     5,  1560,  1561,  1562,
       5,     4,   160,  1566,  1567,   103,   318,   160,     4,    38,
       5,     4,    38,   265,   293,  2803,  1579,  1580,   265,  1582,
    1583,     5,     4,     4,  1988,     5,     5,     5,     5,  2817,
       4,     4,  2820,  2821,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   160,   142,     5,     5,  2030,  1630,  1631,  1632,
       5,   278,  1635,   278,     5,  2507,     5,  1640,  1641,     4,
    1643,  1644,  1645,     5,  1647,  1648,     5,  1650,     5,     5,
    1653,  1654,     5,    40,     5,     4,     4,     4,  1640,  1662,
       5,   199,     5,     5,     5,   244,   244,  1670,   621,   107,
      22,     5,  1675,  1676,   244,   107,   107,     5,  1681,    67,
      40,   217,   250,   221,     5,   217,     4,  1690,   226,     5,
       5,   217,     4,    81,   217,     4,     6,     5,    50,   237,
       5,    53,    90,     5,    56,     5,     5,     4,   113,   113,
       4,    93,     5,   101,     5,     5,     4,    12,     5,   101,
       5,     4,   675,  1726,  1706,   107,     5,   680,     5,     4,
       4,    83,     5,     5,  1716,     5,     5,     4,     4,  1721,
       5,    12,     4,     4,   132,  1748,  1749,   129,     4,     4,
    1753,     5,     0,     5,   124,   244,  1759,   142,   244,   244,
     112,   299,   171,   115,   201,   153,     4,   213,     4,     4,
       4,   153,     4,   254,     4,     4,  2748,     5,     5,   161,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,     5,     5,
     278,     5,   200,     5,    54,     4,   244,     5,   200,     4,
       4,     4,   230,     5,     5,     5,   208,   315,   244,   244,
       4,    56,    72,  2237,  2238,   315,  2240,  2241,     4,     4,
    2244,  2245,    67,     4,     4,     4,     4,     4,   315,    89,
     315,   239,     5,     5,   230,     5,   230,   230,   230,     4,
       4,     4,   102,  1866,     5,  1868,     5,  1870,    93,    94,
       5,     4,   254,     5,     5,     4,   101,     4,   266,   832,
     232,   121,   107,     4,   266,   125,  1889,  1890,  1891,  1892,
    1893,  1894,  1895,  1896,  1897,     5,     5,     4,   138,     4,
     282,  2305,     5,     5,   129,     4,     4,   132,     5,     5,
    1913,     5,  1915,   265,     4,     6,     4,   305,     4,   307,
       4,   311,     5,     5,     5,    33,     5,     5,   153,  1932,
    1933,     4,     4,   985,     5,  1938,   161,     5,   178,   291,
       5,     5,     4,     4,  1947,  1948,  1949,  1950,  1951,  1952,
    1953,  1954,  1955,  1956,     5,     4,  1959,  1960,  1961,  1962,
    1963,  1964,  1965,  1966,  1967,  1968,  1969,  1970,     5,  1972,
    2637,  1974,  1975,  1976,     5,   200,     5,     4,     4,    12,
       5,     5,   278,   208,     5,  1988,  1989,     5,     4,     4,
     291,     5,   278,     5,     5,     5,     4,     4,   278,     5,
       5,     5,     5,     4,     4,     4,   114,     5,     5,     5,
       5,     4,     6,     5,     4,     4,     4,     4,     4,  2022,
       5,  2024,     5,  2026,     5,  2028,     5,  2030,  2031,   254,
    2033,     5,     4,   359,     5,     4,     4,  2040,  2041,     5,
       5,   266,     4,     4,  2047,     5,  2049,     5,  2715,     4,
    2053,  2455,     4,  2056,     5,  2459,     5,   282,     4,     4,
    2773,     5,     5,     5,     5,     5,   291,     5,   293,     4,
     359,     5,     4,     4,   291,     5,     5,  2059,   186,     5,
     188,   189,   297,   191,   192,     4,     4,   433,     5,  2648,
       5,  2495,     5,     5,     4,     4,   359,     5,     5,  2102,
       5,     5,     4,     4,   388,     5,    22,     4,     4,  1062,
       4,    27,   220,     4,     4,     4,     4,  2099,     4,     4,
       4,     4,   347,     4,     4,     4,   359,     4,   359,     5,
       5,   239,   240,    49,    50,   359,    52,    53,   359,   359,
       4,   356,     5,     4,     6,     5,     4,    63,     5,     5,
    2200,     5,     4,     4,     4,     4,     4,     4,     4,    75,
      76,     4,     4,     4,     4,  1118,     5,    83,     5,     5,
      86,     5,     4,   359,     5,   283,     4,  1130,     5,     5,
       4,     4,  2263,     5,     4,     4,     4,   295,   104,     5,
       4,     4,     4,     4,     4,   111,   112,     5,     5,   115,
       4,     4,     4,  2206,     4,  2635,     5,   315,     4,  2715,
       5,     5,     4,     4,  2217,  2218,  2219,  2220,  2221,  2222,
    2223,  2224,  2225,  2226,  2227,     4,  2711,     5,     5,     5,
    2233,     4,   750,     5,  2237,  2238,     5,  2240,  2241,  2726,
    2727,  2244,  2245,  2246,  2247,  2248,  2249,  2250,  2251,     5,
    2253,  2254,  2255,     4,     4,    -1,     5,     5,     5,    -1,
     176,    -1,    -1,    -1,    -1,    -1,  2269,  2270,  2271,  2272,
      -1,  2274,  2275,  2276,  2277,  2278,  2279,    -1,  2281,    -1,
      -1,  2284,  2285,    -1,    -1,  1238,  1239,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   509,    -1,    -1,    -1,    -1,  2302,
      -1,   516,  2305,  2306,   519,    -1,    -1,  2310,    -1,   524,
      -1,  2314,    -1,   528,    -1,  1367,   232,   425,    -1,    -1,
      -1,    -1,   238,    -1,    -1,    -1,    -1,  1379,   436,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   445,    -1,   255,
      -1,    -1,    -1,    -1,    -1,  1397,  1398,    -1,    -1,   265,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2362,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   292,   293,    -1,    -1,
     595,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   313,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   514,   515,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   527,
      -1,    -1,    -1,    -1,   532,    -1,    -1,    -1,    -1,    -1,
      -1,  2434,    -1,   541,    -1,  2438,    -1,    -1,    -1,    -1,
      -1,    -1,   358,    -1,    -1,  2448,  2449,    -1,    -1,    -1,
      -1,  2454,  2455,    -1,    -1,  2458,  2459,    -1,    -1,    -1,
      -1,  2464,    -1,    -1,  2467,  2468,    -1,  1420,    -1,    -1,
      -1,    -1,    -1,  1426,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2486,  2487,    -1,  2489,  2490,  2491,  2492,
    2493,    -1,  2495,  2496,     4,  1448,   711,  2500,  1451,   973,
      -1,    -1,  1455,   718,    -1,   613,   614,   615,   616,    19,
    2513,    -1,    -1,    -1,    -1,  2518,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1476,    -1,    -1,    -1,    -1,    -1,  1482,
      40,  1005,    -1,  2536,    -1,    -1,    -1,  1490,    -1,    -1,
    1493,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,  1502,
    1503,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1513,    -1,    -1,    -1,    -1,    -1,   674,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2578,    -1,    -1,    -1,    -1,
    2583,    -1,  2585,    -1,    -1,    -1,    -1,    -1,  2591,    -1,
      -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2604,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,  2622,
     835,    -1,    -1,  2626,    -1,  2675,    -1,   842,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2648,    -1,    -1,    -1,    -1,
     160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   887,   888,    -1,    -1,  2679,   892,    -1,    -1,
     895,  2684,    -1,  2686,    -1,    -1,    -1,    -1,    -1,   199,
    2693,    -1,   907,    -1,    -1,  2698,    -1,   207,    -1,    -1,
    2703,    -1,    -1,    -1,    -1,   215,   216,    -1,    -1,    -1,
      -1,   221,    -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,
      -1,    -1,    -1,  2726,  2727,    -1,    -1,    -1,   836,    -1,
    1782,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1790,  1791,
     848,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2752,
      -1,    -1,  2755,  1805,  1806,  2758,    -1,    -1,    -1,    -1,
      -1,  2743,    -1,    -1,  1816,  1817,  2769,  2770,  2771,  2772,
      -1,    -1,    -1,    -1,    -1,  1827,  1828,   885,  2781,    -1,
      -1,  2784,    -1,    -1,    -1,  1837,  1838,    -1,  2791,    -1,
    2793,  1843,   302,  2775,    -1,    -1,  2778,    -1,  1013,    -1,
      -1,  1853,    -1,    -1,    -1,    -1,    -1,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,    -1,    -1,    -1,    -1,
      -1,   351,    -1,    -1,    -1,    -1,   356,   357,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   963,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1351,  1352,  1353,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1361,  1362,  1363,
      -1,    -1,    -1,    -1,  1368,  1369,  1370,    -1,    -1,  1373,
    1374,    -1,  1376,  1377,    -1,     3,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     4,     5,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1882,
    1038,    -1,  1406,  1407,    -1,    -1,  1410,  1411,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,  1918,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,  1092,    74,    -1,    76,    -1,    -1,
      -1,    -1,    81,    -1,  1102,    84,  1211,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,   107,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1241,   116,    -1,    -1,
      -1,  1246,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1256,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2113,   160,    -1,   153,    -1,    -1,    -1,    -1,    -1,
      -1,  2123,    -1,    -1,    -1,  2127,  2128,    -1,    -1,   168,
      -1,    -1,    -1,    -1,  2136,  2137,    -1,    -1,    -1,   178,
     179,    -1,    -1,  2145,  2146,    -1,    -1,    -1,  1206,  2151,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2161,
    2162,   200,    -1,    -1,    -1,  1223,    -1,    -1,    -1,    -1,
    2172,  2173,    -1,   221,    -1,    -1,    -1,    -1,   226,    -1,
      -1,  2183,    -1,    -1,   223,    -1,    -1,    -1,    -1,  1247,
    2192,    -1,  2194,    -1,    -1,    -1,    -1,    -1,   237,  1257,
     239,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   254,  1274,    -1,    -1,    -1,
     259,    -1,    -1,    -1,    -1,    -1,    -1,   266,  1286,    -1,
      -1,    -1,    -1,  1291,   273,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   291,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   304,   305,    -1,   307,    -1,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   347,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1492,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1763,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1776,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1786,    -1,  2366,    -1,  1424,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2376,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2385,    -1,    -1,  2289,  1552,    -1,    -1,
      -1,    -1,  2394,  1558,    -1,    -1,  1454,    -1,    -1,  2401,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2412,    -1,    -1,    -1,    -1,    -1,  2418,    -1,    -1,  2421,
      -1,    -1,  2424,    -1,    -1,  1483,    -1,    -1,  1486,    -1,
      -1,    -1,    -1,    -1,  1858,    -1,    -1,    -1,  1496,  1497,
      -1,    -1,    -1,    -1,    -1,    -1,  1504,    -1,    -1,    -1,
      -1,    -1,    -1,  1511,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,    -1,    -1,    -1,    -1,
      -1,  1636,    -1,    -1,    -1,    -1,    -1,  1642,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1551,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1667,    -1,    -1,  1563,    -1,    -1,  1673,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1700,    -1,    -1,    -1,    -1,
      -1,    -1,  2544,  1708,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2553,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2562,    -1,    -1,   103,    -1,    -1,  2568,    -1,    -1,    -1,
    2572,    -1,    -1,  2575,    -1,    -1,    -1,    -1,    -1,  2482,
      -1,    -1,  1640,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2502,
    1658,    -1,    -1,  2506,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1674,    -1,    -1,    -1,
     160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1687,
      -1,  1689,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1699,    -1,    -1,  1702,    -1,  1704,  1705,  1706,  1707,
      -1,    -1,  1710,    -1,    -1,  1713,    -1,    -1,  1716,  1717,
      -1,  1719,  1720,  1721,  1722,    -1,  1724,  1725,    -1,    -1,
      -1,    -1,  1730,  1731,  1732,    -1,    -1,  1735,  1736,    -1,
      -1,    -1,    -1,  1741,  1742,    -1,   226,    -1,  2112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1863,    -1,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1885,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2152,  2153,
    2154,  2155,  2156,    -1,  2158,  2159,    -1,    -1,  2641,  2163,
    2164,  2165,  2166,  2167,    -1,  2169,  2170,    -1,    -1,    -1,
      -1,    -1,    -1,     4,  1919,  1920,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,  1936,  1937,    -1,    -1,    -1,  1941,  1942,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,    57,  1865,    -1,    -1,
      -1,  1869,    -1,    -1,    -1,    -1,  1981,    -1,    -1,    -1,
      -1,    -1,    -1,  1881,    -1,    -1,  1884,  1992,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   103,    -1,    -1,    -1,  1914,    -1,    -1,    -1,
      -1,  2764,  2027,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2043,    -1,
      -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,  2067,    -1,    -1,    -1,    -1,  2072,    -1,   160,
      -1,    -1,  1970,  2078,    -1,    -1,    -1,    -1,  2083,    -1,
      -1,    -1,  2087,    -1,    -1,  2090,    -1,    -1,  2093,    -1,
    2095,   247,    -1,    -1,   250,  1993,    -1,    -1,    -1,    -1,
      -1,  2365,    -1,    -1,  2368,  2369,  2370,  2371,  2372,    -1,
    2374,  2375,    -1,  2377,  2378,  2379,  2380,  2381,    -1,  2383,
    2384,    -1,  2386,  2387,  2388,  2389,  2390,    -1,  2392,  2393,
     221,  2395,    -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,
     103,  2405,  2406,    -1,    -1,    -1,  2044,    -1,    -1,    -1,
      -1,    -1,  2416,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2059,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
    2088,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,
      -1,  2099,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2280,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2547,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2296,  2556,   160,    -1,    -1,    -1,    -1,   165,    -1,
      -1,  2565,    -1,  2567,    -1,    -1,  2204,  2571,    -1,  2207,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2215,    -1,    -1,
      -1,  2326,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2231,    -1,    -1,  2234,    -1,    -1,    19,
      -1,  2239,    -1,    -1,  2242,  2243,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2359,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,    -1,    -1,    -1,    66,    67,    -1,    -1,
      70,    -1,  2290,  2291,    -1,    -1,    -1,    -1,    -1,    -1,
    2664,    -1,  2666,    -1,  2668,    -1,    -1,  2671,    -1,  2673,
      -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2427,   103,    -1,    -1,    -1,    -1,  2433,    -1,
      -1,    -1,  2437,  2331,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2453,    -1,
      -1,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,    -1,
     160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,  2504,
    2505,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   191,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2429,    -1,   213,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2462,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2473,    -1,    -1,    -1,    -1,
      -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   279,
      -1,    -1,    -1,    -1,  2609,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    -1,    -1,  2523,    -1,    -1,    -1,  2527,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   103,   347,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     117,    -1,    -1,  2581,  2582,    -1,  2584,    -1,    -1,    -1,
      -1,  2589,  2590,    -1,    -1,    -1,  2594,    -1,    -1,    -1,
      -1,    -1,  2707,    -1,    -1,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   160,    -1,  2730,    -1,    -1,    -1,  2627,
      -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    53,    -1,
     177,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,  2655,    -1,    -1,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      -1,  2776,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,
      -1,  2796,    19,    -1,  2799,    -1,   111,   112,    -1,    -1,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,
      -1,    -1,    -1,    -1,    -1,  2743,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   295,    -1,
      -1,   176,  2760,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     185,    -1,    -1,    -1,    -1,    -1,   103,  2775,    -1,    -1,
    2778,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,    20,
      21,    22,    -1,    -1,    -1,   230,    -1,   232,    -1,    -1,
      -1,    -1,    -1,   238,   239,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   160,    -1,    -1,    -1,    -1,    49,    50,
     255,    -1,    53,    19,    -1,    56,    -1,    -1,    -1,    -1,
      -1,   266,    63,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    84,    -1,    -1,   291,    -1,   293,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,   303,    -1,
     101,    -1,    -1,    -1,   221,    -1,   107,    19,   313,   226,
     111,   112,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   132,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,
      -1,    -1,   347,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     287,    -1,    -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   103,    19,    -1,   160,    -1,    -1,    -1,    -1,   200,
      -1,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   230,
      57,   232,    -1,    -1,    -1,    -1,    -1,   238,   239,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,
      -1,    -1,    -1,   254,   255,   221,    -1,    -1,    -1,    -1,
     226,    -1,    -1,    -1,   265,   266,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     291,    -1,   293,    -1,   165,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   305,    -1,   307,    -1,    -1,    -1,
      -1,    -1,   313,    -1,   226,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   347,    -1,    -1,    -1,
      -1,    -1,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     160,    -1,    -1,   295,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,
      -1,    -1,    -1,    -1,    -1,    -1,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   226,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,    41,    -1,    -1,    44,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,
      65,    66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    78,    -1,    44,    -1,    -1,    47,    -1,
      85,    -1,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    97,    98,    -1,    -1,    -1,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    80,    -1,    -1,    -1,   120,    85,    -1,    87,    88,
      89,    -1,    -1,   128,    -1,    -1,    95,    -1,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,
     145,    -1,    -1,   148,    -1,    -1,    -1,   152,   153,    -1,
      -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,   127,    -1,
     165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   179,    -1,   145,   182,   183,   184,
      -1,    -1,   187,   188,   153,    -1,   155,   156,    -1,    -1,
     159,    -1,    -1,    -1,   163,    -1,   165,   202,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   219,   220,   221,    -1,   187,   188,
      -1,    -1,    -1,   192,    -1,    -1,    -1,    -1,   233,    -1,
     235,    -1,    -1,   202,    -1,    -1,    -1,   242,    -1,    -1,
      -1,   246,    -1,    -1,    -1,   250,    -1,   252,    -1,   254,
     219,   220,    -1,    -1,   259,    -1,    -1,    -1,   227,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   273,    -1,
      -1,    -1,    -1,    -1,   279,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   252,    -1,   254,    -1,    -1,    -1,   294,
     295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   306,    -1,   308,    -1,    -1,    -1,    -1,    -1,   314,
     279,    -1,   317,   318,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   294,   295,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,
      -1,   310,    -1,   348,    -1,    -1,    -1,   316,    -1,   318,
     355,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   355
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
     224,   252,   318,   363,     6,    65,   424,   148,   425,    41,
      44,    47,    66,    68,    69,    70,    78,    80,    85,    87,
      88,    89,    95,    97,   127,   145,   153,   155,   156,   159,
     163,   165,   187,   188,   192,   202,   219,   220,   227,   252,
     254,   279,   294,   295,   303,   310,   316,   318,   355,   426,
      84,   101,   470,    19,    41,    44,    78,    85,    96,    97,
     103,   127,   145,   159,   160,   166,   187,   226,   279,   289,
     318,   473,    67,   364,    89,   118,   190,   205,   267,   308,
     318,   479,    16,    26,   114,   127,   162,   212,   225,   482,
     236,   500,     5,    67,    89,   143,   308,   355,   364,   501,
       5,   502,    58,   134,   231,   246,   309,   518,    46,    65,
      67,   186,   245,   289,   298,   538,    67,   208,   350,   356,
     358,   539,    39,   199,   237,   299,   362,   372,   374,   540,
       5,   308,   318,   364,   543,    71,   172,   251,   260,   544,
       4,   545,    89,   518,    62,   289,   312,   552,   199,   299,
     362,   553,    26,   114,   127,   212,   225,   555,    51,   101,
     110,   140,   301,   570,   571,     4,    37,    48,    75,   153,
     191,   260,   296,   312,   390,     4,   127,   211,   572,   299,
     362,   574,    16,    23,   247,   250,   373,   575,   236,   579,
     299,   362,   580,     0,     5,   144,   364,    60,   362,   396,
     276,     5,     4,   299,   362,   397,     5,    32,   288,   398,
     126,   362,   399,   126,   362,   401,   362,     4,   198,   249,
     256,   405,   192,   309,   353,   354,   362,   404,   364,   142,
     180,   403,   202,   362,    79,   176,   256,   362,   406,     5,
     362,     4,   252,   408,   362,   362,     5,   232,   411,    31,
     412,     5,   413,     5,   417,     5,    31,   418,   362,     9,
      10,    11,   362,   368,   369,   370,   371,   362,   362,    40,
     113,   199,   362,   420,   362,   199,   372,   374,   362,    35,
     108,   130,   131,   139,   157,   167,   379,   362,     4,   364,
     364,   364,   364,   364,   364,   364,   364,   364,   364,   362,
     119,    67,    54,    72,    89,   102,   121,   125,   138,   178,
     429,   121,   431,   192,   198,   237,   263,   309,   353,   354,
     362,   414,   432,   291,   435,   172,   436,   172,   181,   438,
      66,    67,    70,    93,   172,   191,   213,   279,   347,   372,
     440,   362,   374,   443,    60,   295,   372,   444,   287,   372,
     374,   445,    33,   446,   372,   374,   447,     4,   372,   374,
     448,    45,    60,    82,   102,   119,   123,   150,   151,   204,
     214,   276,   277,   347,   452,   218,   311,   458,    67,     5,
      90,     6,    89,   123,   450,     5,    66,   374,   449,    16,
     518,    46,    67,    82,   186,   245,   289,   298,   459,    67,
     237,   460,   290,    62,   289,   312,   461,    21,   138,   244,
     274,   462,    37,    48,    75,   153,   191,   260,   312,   463,
     374,    90,    16,   201,   468,   372,   471,    67,    73,   474,
      31,   475,    44,    88,   197,   476,   153,   223,   266,   304,
     477,   372,    18,    59,   117,   177,   295,   372,   478,     5,
       4,   198,   481,     5,     4,     6,   123,   362,     4,     5,
     252,   483,     5,   485,     5,   119,   197,   252,   277,   486,
      95,   113,   192,   499,     5,   497,     5,   277,   498,     4,
       5,   364,   364,   362,   362,     5,     4,     5,    61,    67,
      74,    76,    81,    84,    90,   101,   107,   116,   132,   153,
     168,   178,   179,   200,   223,   237,   239,   254,   259,   266,
     273,   291,   304,   305,   307,   347,   503,    92,   173,   264,
     282,   376,     5,     4,   202,   209,   210,   245,   352,   375,
     362,   372,   362,     5,   362,    40,   113,   362,   542,   364,
     362,   372,   374,   541,   362,   379,   362,     4,   373,    55,
      91,   144,   252,   546,     4,     4,   362,     4,   153,   266,
     547,     5,   372,     4,    40,   113,   362,   554,   362,    99,
      62,   123,   252,   280,   556,   123,   569,    62,   119,   123,
     160,   197,   248,   252,   277,   280,   290,   558,   559,    62,
     123,   280,   568,     5,     4,    34,   109,   208,   551,    67,
     364,   391,    67,   364,   392,    67,   364,   393,    13,   194,
     550,   362,   362,   230,   362,   394,   362,   277,     4,   362,
     362,     4,   578,     4,   293,   576,     4,   293,   577,     4,
     379,   126,   362,   581,   362,   362,     4,     5,   362,    12,
     362,   362,   362,    30,    96,   166,   256,   261,   378,   378,
       4,   202,   362,   362,     4,     4,     4,   362,   362,   362,
     362,     4,     4,     5,     5,   372,     5,   362,   362,   368,
     370,   370,   372,   362,   362,   362,   362,   362,   362,   362,
     372,   374,   371,   362,   362,   371,   362,     5,   276,   105,
     192,   430,   198,   256,   433,   172,    79,   176,   256,   434,
     142,   180,   415,   415,     4,   437,     4,   439,   198,   263,
     441,   181,   442,   172,   379,   362,   362,   372,   372,   379,
     379,   379,   372,   379,   362,   372,     4,   455,     4,   374,
     453,   201,     4,   169,   318,   454,   201,   372,     4,   135,
     299,   457,     5,     5,   427,     4,   201,   137,   253,   365,
     362,     4,     5,    61,    67,   116,   132,   147,   153,   158,
     213,   232,   237,   239,   265,   266,   273,   291,   347,   512,
     374,   193,   193,    67,   464,    67,   465,    67,   466,   230,
     467,   362,     5,   428,   231,   469,   373,   379,     5,   372,
     372,   372,   372,     4,   364,     4,     4,   201,   362,    14,
      15,    62,   195,   196,   270,   280,   281,   311,    88,     5,
       5,    14,    15,    62,   195,   196,   270,   280,   281,   285,
     311,    88,   160,   165,   373,   489,   494,    88,   160,     5,
     487,     4,     4,    14,    62,   195,   270,   280,   311,     5,
       5,     4,   362,   373,    20,    21,    22,    49,    50,    53,
      56,    63,    67,    75,    76,    83,    84,   101,   107,   111,
     112,   115,   132,   153,   176,   200,   230,   232,   238,   239,
     254,   255,   265,   266,   291,   293,   305,   307,   313,   347,
      67,    81,    90,   101,   132,   153,   200,   239,   266,   305,
     307,     4,    30,   164,   218,   244,   506,     5,    64,   106,
     241,   257,   258,   349,   350,   511,   101,   504,    17,   266,
     509,    40,   113,   199,   510,     4,     5,    17,   217,   300,
     362,   266,   511,   519,   127,   511,   520,    36,    40,   113,
     136,   199,   299,   362,   521,   372,   364,    93,   101,   107,
     129,   153,   161,   200,   208,   254,   266,   282,   524,    40,
     113,   199,     5,   266,   292,   528,    17,   217,   300,   529,
     293,   364,   530,     5,   101,   107,   308,    17,    17,     4,
     362,   362,   362,   362,   362,   362,   379,   362,   362,   371,
     362,     4,   379,     4,    40,   113,   199,   271,   548,    40,
     113,   199,   271,   549,     4,    99,     5,     5,    88,     4,
       5,     5,    88,     5,   559,    62,   123,   160,   280,   563,
      62,   123,   280,   567,    88,   160,    62,   123,   280,   561,
       4,    62,   123,   280,   560,     5,     5,     4,     4,     5,
       5,     5,   362,   362,   362,     4,   362,   573,   362,   362,
       6,   373,     4,     5,     4,     4,     5,     4,    99,   268,
     380,   362,   362,    12,     5,    12,   362,   362,    12,     4,
      12,     4,     4,   362,   362,   362,     4,   364,     4,     4,
     379,   372,   379,   362,   362,   362,   372,   362,   371,   362,
     362,     5,     5,   362,   374,   362,   372,   362,   379,   379,
     380,   380,   380,   379,   371,   362,   379,   362,   365,   456,
     169,     5,     4,   379,   160,   160,     4,     5,     4,     4,
     362,   451,    38,    38,   362,    20,    21,    22,    49,    50,
      53,    60,    63,    67,    75,    76,    83,   111,   112,   115,
     132,   153,   176,   185,   230,   232,   238,   239,   255,   266,
     291,   293,   303,   313,   347,    67,   132,   158,   239,   291,
      30,   164,   218,   244,   513,   362,   213,   362,   514,    17,
     362,   265,   524,   265,   213,   362,   515,   293,   516,    17,
     100,   362,   362,     5,   380,    57,   372,     4,     5,   480,
     362,     5,     5,     5,   160,   188,   384,   384,   168,   272,
     382,     4,     4,     5,     5,   484,   278,   278,     5,     5,
       5,    17,   162,   383,   383,   382,     4,     4,   382,     5,
       5,   488,   165,   346,   373,   492,     5,   491,     5,     5,
     495,     5,   496,     5,    14,    15,    62,   195,   196,   270,
     280,   281,   285,   311,     4,     4,     5,     5,   384,   382,
       4,     5,     5,   379,    83,   155,   228,   229,   243,   286,
     387,     7,     8,   362,   367,   244,   124,   244,   244,   107,
      40,    67,   101,   107,   113,   132,   153,   168,   200,   239,
     254,   266,   293,   305,   307,   308,   347,   505,   124,   244,
       5,    27,   170,   244,   289,   142,   107,    22,    50,    53,
      83,   112,   115,   232,   265,    22,    50,    53,    56,    83,
     112,   115,   232,   265,   291,    40,   124,   244,   244,   107,
       5,   217,    27,   230,    36,   136,   299,   362,   269,   276,
     124,   250,   372,   524,    40,   133,   230,   289,   250,   217,
       5,     5,   254,    27,   230,     4,     5,     5,   217,    36,
     136,   299,   362,   524,   217,   364,     4,     4,   362,     5,
     311,    22,    27,    49,    50,    52,    53,    63,    75,    76,
      83,    86,   104,   111,   112,   115,   176,   232,   238,   255,
     265,   292,   293,   313,   358,   507,   362,   362,   362,   362,
     362,   511,   372,     5,     4,     5,   362,   362,   372,   362,
     364,   362,   362,   511,     5,     5,   362,   362,   364,     5,
      17,     5,     5,   362,   362,   371,   362,   362,     4,   362,
     362,   113,   362,   362,   113,     4,    42,    43,   174,   175,
     203,   389,   389,    62,   123,   280,   557,   389,     5,    62,
     123,   280,   562,     5,     5,    62,   123,   280,   564,     4,
       5,     5,     4,    62,   123,   280,   566,    62,   123,   280,
     565,     5,     5,     4,     5,     5,     4,   389,   389,   389,
     362,   362,   362,     4,   372,   362,   373,   379,     5,     5,
      12,   362,   372,   374,   362,    12,   362,   362,   362,    60,
     362,     6,     4,   362,   362,    47,   279,   416,     5,   364,
     364,   379,   362,     4,     4,     4,   379,   372,   362,   362,
     362,   362,   379,   372,   380,   371,   362,     4,   380,   362,
       4,   374,     5,    24,    25,    99,   381,     4,   372,   362,
     362,     4,   362,     5,    83,   155,   228,   229,   243,   286,
     372,   374,   244,   124,   244,   244,    21,   244,   372,   124,
     244,    27,   170,   244,   289,   142,    21,   244,   124,   244,
     244,    21,   244,    27,   171,   230,   171,   269,   276,   124,
     171,   230,   297,   524,   133,   171,   230,   289,     4,   254,
      27,   171,   230,   524,   213,   362,   362,   362,   362,   362,
     362,   201,   362,   362,    20,   240,   472,     4,     4,   362,
     384,   384,   384,     4,   384,   384,   384,    14,    15,    62,
     195,   196,   270,   280,   281,   311,   383,   384,   384,   384,
     384,   384,     4,   384,   384,     4,   383,    14,    15,    62,
     195,   196,   270,   280,   281,   311,     5,   490,     5,   493,
       5,     5,    14,    15,    62,   195,   196,   270,   280,   281,
     285,   311,     5,    14,    15,    62,   195,   196,   270,   280,
     281,   285,   311,     5,    14,    15,    62,   195,   196,   270,
     280,   281,   285,   311,    14,    15,    62,   195,   196,   270,
     280,   281,   311,   278,     5,     5,     5,   383,   383,   382,
       4,     4,   382,     5,     4,     4,   384,   384,     4,   384,
     384,     5,   364,   372,   374,     5,   362,   364,   362,     5,
     362,     5,   367,   107,   200,   254,   107,   200,   254,     5,
     364,   362,   364,     5,   362,   372,   364,     5,   367,   244,
     244,    21,   244,    21,   244,   244,    21,   244,   315,   315,
       4,     4,     4,   505,     4,     4,     4,   315,   315,     4,
       5,     4,   364,   362,     5,   362,     5,   367,   364,   372,
     372,   362,    27,    49,    52,    63,    86,   104,   358,   385,
       4,   364,   362,   379,   364,     5,   372,   372,   362,   364,
     364,   372,   372,   362,   364,   362,     5,   362,   230,   230,
     362,   362,   230,   362,   230,   362,   362,   517,   525,   362,
     230,   230,   362,   362,   362,   362,   362,   362,   362,   362,
       5,   311,   362,   508,   362,   362,   230,   362,   362,   362,
     362,   372,   379,     5,     4,     4,   362,   362,   379,   362,
     362,   362,   372,   511,   362,   362,     5,     4,   362,   362,
     362,   362,     5,     5,     4,   389,     5,     5,     4,     4,
       4,     5,     5,     4,     4,     5,     5,     4,     5,     5,
       4,   362,   362,   362,   362,   379,   362,   372,   374,   362,
     379,   362,   362,   362,   362,   362,     5,   362,     4,     6,
     362,   362,     4,   372,   362,   379,   181,   377,   362,   377,
     380,   379,   372,   362,   362,     4,   362,   372,   372,   362,
       4,   365,     5,     5,     5,     5,     5,   372,   379,   372,
     372,   372,   372,   374,   372,   379,   372,   372,   372,   374,
     372,   372,   372,   372,   374,   372,   372,   372,   362,   372,
     372,   372,   372,   372,   372,   372,   362,   362,     4,   362,
       5,     4,   362,   384,     5,     5,     5,   382,     4,     4,
       5,   384,   383,     4,   384,     5,     5,     5,   383,   383,
     382,     4,     4,     5,    14,    15,    62,   195,   196,   270,
     280,   281,   311,    14,    15,    62,   195,   196,   270,   280,
     281,   311,    14,    15,    62,   195,   196,   270,   280,   281,
     311,   278,     5,     5,     5,   383,   383,   382,     4,     4,
     382,     5,   278,     5,     5,     5,   383,   383,   382,     4,
       4,   382,     5,   278,     5,     5,     5,   383,   383,   382,
       4,     4,   382,     5,     5,     5,     5,   383,   383,   382,
       4,     4,     5,   383,     4,     4,   383,     4,     4,   384,
       5,   379,   372,   362,   362,   372,   362,     5,   367,     5,
     372,   364,     5,   372,   379,     5,   367,   362,   362,   362,
     362,   362,   362,   362,   362,   362,     4,     4,     5,     4,
       4,   362,   372,   362,     5,   367,   364,   379,   379,   362,
     371,   379,   379,   362,   379,   379,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,    56,    67,    94,   132,
     291,   293,   347,   522,   523,   524,   536,   537,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     372,     5,   362,   362,   362,   362,     4,     4,   379,   380,
       5,     5,   371,   362,     4,   379,   372,     4,   389,   389,
     389,   367,   362,   362,   362,   379,   362,   371,   362,   362,
      12,     5,     5,     4,   362,   362,     4,   379,   372,   362,
     362,   380,   381,   362,     5,   362,   372,   374,     5,     5,
       5,     5,     5,   379,   381,   381,   381,   379,   381,   380,
     381,   381,   379,   381,   381,   381,   379,   381,   381,   379,
     372,   381,   379,   381,   381,   379,   381,   379,     4,   372,
     374,     5,   362,     4,   384,   383,     4,   383,     5,     5,
       5,   383,   383,   382,     4,     4,     5,     5,     5,     5,
     383,   383,   382,     4,     4,     5,     5,     5,     5,   383,
     383,   382,     4,     4,     5,   383,   384,   384,   384,   384,
     384,     4,   384,   384,     4,   383,   383,   384,   384,   384,
     384,   384,     4,   384,   384,     4,   383,   383,     4,     4,
     383,     4,   383,   383,     4,     4,     4,   373,   381,     4,
     372,   381,   362,   372,     4,   381,   381,   372,     4,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     372,   381,   362,   372,     4,   371,   371,   372,   371,   371,
     372,   372,   371,   371,   362,   362,   362,   362,   362,   362,
     367,   362,   362,   362,   359,   359,   359,   359,   359,   359,
     359,   523,   359,   367,   362,   362,   362,   362,   367,   362,
     362,   362,   362,   362,   362,   379,   362,   311,   366,   367,
     362,   362,   380,   364,   372,   372,   380,   379,     4,   362,
     371,   362,    60,   362,     5,     5,   362,     4,   377,   381,
       5,   379,     4,     5,     4,     5,   372,     5,   380,   381,
     380,   380,   380,     5,   379,     4,   362,   384,   383,   384,
     384,   384,   384,   384,     4,   384,   384,   383,   384,   384,
     384,   384,   384,     4,   384,   384,   383,   384,   384,   384,
     384,   384,     4,   384,   384,   383,   384,   383,     4,   384,
     384,   383,     4,   384,   383,     4,   383,   383,   379,   372,
     381,     4,   379,   362,   379,   362,   362,   362,   381,     4,
     379,   362,   371,   381,   362,   371,   381,   381,   372,   362,
       4,   386,   386,   362,   362,   386,   367,   386,   525,   372,
     505,     5,     4,     5,     5,     5,     4,   364,   367,   386,
     386,   362,   362,   367,   362,   362,   362,   362,   362,   371,
     362,     5,   525,   362,   386,   364,   526,   527,   379,   379,
     364,   380,     4,     5,   362,     5,     4,     6,   362,     4,
      32,   189,   288,   423,   372,     5,    32,   189,   288,   388,
     372,     4,   423,   362,   383,   384,   383,   384,   383,   384,
     384,   383,   384,   383,   383,   362,   381,   372,   372,   362,
     372,   362,   372,   372,   362,   372,   381,     4,   525,   525,
     366,   362,   525,     4,   525,   379,     5,     4,     4,   525,
     525,   366,   362,     4,   525,   525,   362,   372,   525,   525,
     525,   526,   533,   534,   524,   531,   532,   364,     4,     5,
       5,     6,     4,   192,   309,   354,   362,   414,   423,     4,
     372,   423,     4,   384,   384,   384,   384,   384,   373,   381,
     381,   362,   381,     4,   381,   381,   362,   381,   362,   525,
     525,     4,   362,   525,     5,   362,   525,     4,   362,   525,
     379,   533,   535,   536,   359,   532,     5,     5,     4,   362,
     415,   362,   415,   379,   381,     4,   372,   374,     4,   367,
     366,   362,   362,   366,   362,   372,   536,   364,     5,     5,
     362,   362,   362,   362,   388,     5,   372,   374,   379,   372,
     374,   525,   362,     4,   525,   362,   381,     5,     5,   362,
       5,   362,   379,   379,     4,   525,     4,     5,     5,     5,
     366,   366,   525,   525,   525
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
    {fr->fadeCmd((void*)(yyvsp[(1) - (2)].ptr),(yyvsp[(2) - (2)].real));;}
    break;

  case 338:
#line 1015 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 339:
#line 1018 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 340:
#line 1021 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 341:
#line 1022 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 355:
#line 1036 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 358:
#line 1039 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 359:
#line 1040 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 363:
#line 1044 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 364:
#line 1045 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 367:
#line 1048 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 368:
#line 1049 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 370:
#line 1052 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 372:
#line 1054 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 374:
#line 1056 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 376:
#line 1058 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 377:
#line 1060 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 380:
#line 1063 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 381:
#line 1067 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 382:
#line 1069 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 383:
#line 1073 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 384:
#line 1075 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 385:
#line 1078 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 386:
#line 1079 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 387:
#line 1080 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 388:
#line 1081 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 389:
#line 1082 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 390:
#line 1083 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 392:
#line 1085 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 393:
#line 1088 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 394:
#line 1089 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 395:
#line 1090 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 396:
#line 1093 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 397:
#line 1096 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 398:
#line 1098 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 399:
#line 1100 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 400:
#line 1101 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 401:
#line 1102 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 403:
#line 1104 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 405:
#line 1107 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 406:
#line 1113 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 407:
#line 1114 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 408:
#line 1117 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 409:
#line 1118 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 410:
#line 1119 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 411:
#line 1122 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 412:
#line 1123 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 414:
#line 1129 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 415:
#line 1131 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 416:
#line 1133 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 417:
#line 1136 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 419:
#line 1138 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 420:
#line 1142 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 421:
#line 1146 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 423:
#line 1148 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 424:
#line 1149 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 425:
#line 1150 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 426:
#line 1151 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 427:
#line 1152 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 429:
#line 1154 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 430:
#line 1155 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 431:
#line 1158 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 432:
#line 1159 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 433:
#line 1160 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 434:
#line 1163 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 435:
#line 1164 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 436:
#line 1168 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 437:
#line 1170 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 438:
#line 1178 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 439:
#line 1180 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 440:
#line 1182 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 441:
#line 1185 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 442:
#line 1187 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 443:
#line 1188 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 444:
#line 1191 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 445:
#line 1194 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 446:
#line 1196 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 447:
#line 1200 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 448:
#line 1202 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 449:
#line 1205 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 450:
#line 1209 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 451:
#line 1210 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 452:
#line 1212 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 453:
#line 1215 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 454:
#line 1216 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 456:
#line 1220 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 457:
#line 1221 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 458:
#line 1222 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 459:
#line 1225 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 460:
#line 1227 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 461:
#line 1228 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 463:
#line 1230 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 467:
#line 1234 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 468:
#line 1235 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 469:
#line 1236 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 470:
#line 1238 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 472:
#line 1240 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 473:
#line 1243 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 474:
#line 1245 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 475:
#line 1247 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 476:
#line 1248 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 477:
#line 1249 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 478:
#line 1250 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 479:
#line 1253 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 480:
#line 1254 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 481:
#line 1258 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 482:
#line 1260 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 483:
#line 1263 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 484:
#line 1266 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 485:
#line 1267 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 486:
#line 1269 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 487:
#line 1271 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 488:
#line 1273 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 489:
#line 1276 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 490:
#line 1277 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 491:
#line 1278 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 492:
#line 1281 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 493:
#line 1282 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 494:
#line 1283 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 495:
#line 1284 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 496:
#line 1285 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 497:
#line 1286 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 498:
#line 1287 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 499:
#line 1290 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 500:
#line 1293 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 501:
#line 1294 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 502:
#line 1295 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 503:
#line 1298 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 504:
#line 1299 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 505:
#line 1300 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 506:
#line 1301 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 507:
#line 1302 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 508:
#line 1303 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 513:
#line 1310 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 514:
#line 1311 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 515:
#line 1312 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 516:
#line 1315 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 517:
#line 1316 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 518:
#line 1319 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 519:
#line 1320 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 520:
#line 1323 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 521:
#line 1324 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 522:
#line 1327 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 523:
#line 1328 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 524:
#line 1331 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 526:
#line 1333 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 527:
#line 1336 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 528:
#line 1337 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 530:
#line 1341 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 531:
#line 1345 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 532:
#line 1348 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 533:
#line 1355 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 534:
#line 1356 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 535:
#line 1359 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 536:
#line 1360 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 539:
#line 1363 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 540:
#line 1364 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 541:
#line 1365 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 542:
#line 1366 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 544:
#line 1368 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 545:
#line 1369 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 546:
#line 1370 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 548:
#line 1372 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 549:
#line 1373 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 550:
#line 1374 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 551:
#line 1375 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 553:
#line 1379 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 554:
#line 1382 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 555:
#line 1383 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 556:
#line 1386 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 557:
#line 1387 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 558:
#line 1388 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 559:
#line 1389 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 560:
#line 1392 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 561:
#line 1393 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 562:
#line 1394 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 563:
#line 1395 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 564:
#line 1398 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 565:
#line 1399 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 566:
#line 1400 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 567:
#line 1401 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 568:
#line 1402 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 569:
#line 1403 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 570:
#line 1406 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 571:
#line 1407 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 572:
#line 1408 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 575:
#line 1412 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 576:
#line 1413 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 577:
#line 1416 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 578:
#line 1419 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 579:
#line 1420 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 580:
#line 1424 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 581:
#line 1426 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 582:
#line 1427 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 589:
#line 1439 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 590:
#line 1441 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 591:
#line 1443 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 592:
#line 1444 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 593:
#line 1446 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 594:
#line 1448 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 595:
#line 1450 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 596:
#line 1452 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 597:
#line 1454 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 599:
#line 1458 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 600:
#line 1459 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 601:
#line 1460 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 602:
#line 1461 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 603:
#line 1462 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 604:
#line 1464 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 605:
#line 1465 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 606:
#line 1466 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 607:
#line 1467 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 608:
#line 1470 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 609:
#line 1474 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 610:
#line 1476 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 611:
#line 1478 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 612:
#line 1480 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 613:
#line 1482 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 614:
#line 1484 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 615:
#line 1486 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 616:
#line 1488 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 617:
#line 1491 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 618:
#line 1493 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 619:
#line 1495 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 625:
#line 1503 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 626:
#line 1504 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 627:
#line 1505 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 628:
#line 1506 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 629:
#line 1507 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 630:
#line 1508 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 631:
#line 1510 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 632:
#line 1512 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 633:
#line 1513 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 634:
#line 1514 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 635:
#line 1515 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 636:
#line 1518 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 637:
#line 1519 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 638:
#line 1520 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 639:
#line 1521 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 640:
#line 1522 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 641:
#line 1524 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 642:
#line 1525 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 643:
#line 1526 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 644:
#line 1527 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 650:
#line 1538 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 651:
#line 1541 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 652:
#line 1544 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 653:
#line 1547 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 654:
#line 1550 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 655:
#line 1553 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 656:
#line 1556 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 657:
#line 1559 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 658:
#line 1562 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 659:
#line 1567 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 660:
#line 1570 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 661:
#line 1573 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 662:
#line 1576 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 663:
#line 1579 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 664:
#line 1582 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 665:
#line 1585 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 666:
#line 1588 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 667:
#line 1591 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 668:
#line 1594 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 669:
#line 1597 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 670:
#line 1602 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 671:
#line 1605 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 672:
#line 1608 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 673:
#line 1611 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 674:
#line 1614 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 675:
#line 1617 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 676:
#line 1620 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 677:
#line 1623 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 678:
#line 1626 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 679:
#line 1631 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 680:
#line 1633 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 681:
#line 1635 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 682:
#line 1637 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 683:
#line 1639 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 684:
#line 1641 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 685:
#line 1646 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 686:
#line 1648 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 687:
#line 1650 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 688:
#line 1654 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 689:
#line 1657 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 690:
#line 1660 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 691:
#line 1663 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 692:
#line 1666 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 693:
#line 1669 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 694:
#line 1672 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 695:
#line 1675 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 696:
#line 1678 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 697:
#line 1681 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 698:
#line 1684 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 699:
#line 1688 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 700:
#line 1689 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 701:
#line 1690 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 702:
#line 1691 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 703:
#line 1692 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 704:
#line 1693 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 705:
#line 1695 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 706:
#line 1697 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 707:
#line 1698 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 708:
#line 1699 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 709:
#line 1700 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 710:
#line 1703 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 711:
#line 1704 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 712:
#line 1705 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 713:
#line 1706 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 714:
#line 1707 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 715:
#line 1709 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 716:
#line 1710 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 717:
#line 1711 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 718:
#line 1712 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 719:
#line 1716 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 720:
#line 1718 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 721:
#line 1719 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 722:
#line 1721 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 723:
#line 1723 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 724:
#line 1725 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 725:
#line 1728 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 726:
#line 1729 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 727:
#line 1732 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 728:
#line 1733 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 729:
#line 1734 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 730:
#line 1737 "frame/parser.Y"
    {;}
    break;

  case 731:
#line 1740 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 732:
#line 1741 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 733:
#line 1742 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 734:
#line 1743 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 735:
#line 1744 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 736:
#line 1745 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 737:
#line 1746 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 738:
#line 1750 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 740:
#line 1758 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 741:
#line 1759 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 742:
#line 1761 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 743:
#line 1763 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 744:
#line 1764 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 745:
#line 1765 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 747:
#line 1766 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 750:
#line 1769 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 751:
#line 1770 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 752:
#line 1772 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 753:
#line 1774 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 754:
#line 1776 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 755:
#line 1779 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 756:
#line 1781 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 757:
#line 1782 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 758:
#line 1784 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 759:
#line 1787 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 760:
#line 1790 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 761:
#line 1792 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 762:
#line 1795 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 763:
#line 1798 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 764:
#line 1801 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 765:
#line 1804 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 766:
#line 1808 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 767:
#line 1812 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 768:
#line 1817 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 769:
#line 1821 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 770:
#line 1822 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 771:
#line 1824 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 772:
#line 1825 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 773:
#line 1827 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 774:
#line 1829 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 775:
#line 1831 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 776:
#line 1833 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 777:
#line 1834 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 778:
#line 1836 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 779:
#line 1838 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 780:
#line 1841 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 781:
#line 1845 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 782:
#line 1849 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 783:
#line 1851 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 784:
#line 1853 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 785:
#line 1855 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 786:
#line 1857 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 787:
#line 1859 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 788:
#line 1861 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 789:
#line 1863 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 790:
#line 1865 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 791:
#line 1867 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 792:
#line 1869 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 793:
#line 1871 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 794:
#line 1873 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 795:
#line 1875 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 796:
#line 1876 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 797:
#line 1878 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 798:
#line 1880 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 799:
#line 1881 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 800:
#line 1882 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 801:
#line 1884 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 802:
#line 1886 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 803:
#line 1887 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 804:
#line 1888 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 805:
#line 1889 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 806:
#line 1891 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 807:
#line 1892 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 808:
#line 1894 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 809:
#line 1898 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 810:
#line 1901 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 811:
#line 1904 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 812:
#line 1908 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 813:
#line 1912 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 814:
#line 1917 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 815:
#line 1921 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 816:
#line 1922 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 817:
#line 1923 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 818:
#line 1925 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 819:
#line 1927 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 820:
#line 1931 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 821:
#line 1932 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 822:
#line 1933 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 823:
#line 1935 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 824:
#line 1938 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 825:
#line 1941 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 826:
#line 1944 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 827:
#line 1945 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 828:
#line 1947 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 829:
#line 1950 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 830:
#line 1954 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 831:
#line 1956 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 832:
#line 1957 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 833:
#line 1959 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 834:
#line 1962 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 835:
#line 1965 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 836:
#line 1966 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 837:
#line 1968 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 838:
#line 1969 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 839:
#line 1970 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 840:
#line 1972 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 841:
#line 1973 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 842:
#line 1975 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 843:
#line 1978 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 844:
#line 1981 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 845:
#line 1983 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 846:
#line 1984 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 850:
#line 1989 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 851:
#line 1990 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 852:
#line 1992 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 853:
#line 1994 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 854:
#line 1996 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 855:
#line 1997 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 859:
#line 2003 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 860:
#line 2004 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 861:
#line 2005 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 862:
#line 2006 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 863:
#line 2007 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 864:
#line 2008 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 865:
#line 2009 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 866:
#line 2010 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 867:
#line 2011 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 868:
#line 2012 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 869:
#line 2014 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 870:
#line 2016 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 871:
#line 2017 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 872:
#line 2018 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 873:
#line 2019 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 874:
#line 2020 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 875:
#line 2022 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 876:
#line 2023 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 877:
#line 2024 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 878:
#line 2025 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 879:
#line 2026 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 880:
#line 2028 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 881:
#line 2029 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 882:
#line 2030 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 883:
#line 2031 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 884:
#line 2032 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 885:
#line 2033 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 886:
#line 2036 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 887:
#line 2037 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 888:
#line 2038 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 889:
#line 2039 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 890:
#line 2040 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 891:
#line 2041 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 892:
#line 2042 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 893:
#line 2043 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 894:
#line 2044 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 895:
#line 2045 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 896:
#line 2046 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 897:
#line 2047 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 898:
#line 2048 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 899:
#line 2049 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 900:
#line 2050 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 901:
#line 2051 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 902:
#line 2052 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 903:
#line 2053 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 904:
#line 2054 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 905:
#line 2055 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 906:
#line 2056 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 907:
#line 2059 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 908:
#line 2060 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 909:
#line 2061 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 910:
#line 2062 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 911:
#line 2063 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 912:
#line 2065 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 913:
#line 2075 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2083 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2092 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2100 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2107 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2114 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2122 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2130 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2135 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 922:
#line 2140 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 923:
#line 2145 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 924:
#line 2150 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 925:
#line 2155 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 926:
#line 2160 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 927:
#line 2165 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 928:
#line 2174 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 929:
#line 2184 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 930:
#line 2194 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 931:
#line 2203 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 932:
#line 2211 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 933:
#line 2221 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 934:
#line 2231 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 935:
#line 2241 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 936:
#line 2253 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 937:
#line 2262 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 939:
#line 2270 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 940:
#line 2272 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 941:
#line 2274 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 942:
#line 2279 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 943:
#line 2282 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 944:
#line 2283 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 945:
#line 2284 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 946:
#line 2291 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 947:
#line 2293 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 948:
#line 2294 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 949:
#line 2297 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 950:
#line 2298 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 951:
#line 2299 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 952:
#line 2300 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 953:
#line 2301 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 954:
#line 2302 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 955:
#line 2303 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 957:
#line 2307 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 958:
#line 2308 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 959:
#line 2309 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 960:
#line 2310 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 961:
#line 2311 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 962:
#line 2314 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 963:
#line 2316 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 964:
#line 2318 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 965:
#line 2320 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 966:
#line 2322 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 967:
#line 2324 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 968:
#line 2326 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 969:
#line 2327 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 970:
#line 2328 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 971:
#line 2330 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 972:
#line 2332 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 973:
#line 2334 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 974:
#line 2336 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 975:
#line 2338 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 976:
#line 2339 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 977:
#line 2340 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 978:
#line 2342 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 979:
#line 2344 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 980:
#line 2347 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 981:
#line 2349 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 982:
#line 2351 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 983:
#line 2352 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 984:
#line 2353 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 985:
#line 2354 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 986:
#line 2356 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 987:
#line 2357 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 988:
#line 2358 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 989:
#line 2359 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 990:
#line 2360 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 991:
#line 2362 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 992:
#line 2364 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 993:
#line 2365 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 994:
#line 2367 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 995:
#line 2369 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 996:
#line 2371 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 997:
#line 2372 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 998:
#line 2374 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 999:
#line 2376 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1000:
#line 2377 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1001:
#line 2378 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1002:
#line 2379 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1003:
#line 2381 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1004:
#line 2383 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1005:
#line 2386 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1006:
#line 2389 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1007:
#line 2390 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1008:
#line 2391 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1009:
#line 2393 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1010:
#line 2396 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1011:
#line 2399 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1012:
#line 2400 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1013:
#line 2401 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1014:
#line 2402 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1015:
#line 2404 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1016:
#line 2406 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1017:
#line 2408 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1018:
#line 2409 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1019:
#line 2411 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1020:
#line 2412 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1021:
#line 2413 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1022:
#line 2414 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1023:
#line 2415 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1024:
#line 2417 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1025:
#line 2419 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1026:
#line 2421 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1027:
#line 2423 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1029:
#line 2425 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1030:
#line 2426 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1031:
#line 2428 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1032:
#line 2430 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1033:
#line 2431 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1034:
#line 2432 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1036:
#line 2434 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1038:
#line 2438 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1039:
#line 2439 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1040:
#line 2440 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1041:
#line 2441 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1042:
#line 2442 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1043:
#line 2443 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1044:
#line 2445 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1045:
#line 2446 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1046:
#line 2448 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1047:
#line 2451 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1048:
#line 2452 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1049:
#line 2453 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1050:
#line 2454 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1051:
#line 2457 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1052:
#line 2458 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1053:
#line 2461 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1054:
#line 2462 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1055:
#line 2465 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1056:
#line 2466 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1057:
#line 2469 "frame/parser.Y"
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
#line 2482 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1059:
#line 2483 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1060:
#line 2487 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1061:
#line 2488 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1062:
#line 2492 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1063:
#line 2493 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1064:
#line 2498 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1065:
#line 2502 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1066:
#line 2507 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1067:
#line 2509 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1068:
#line 2512 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1069:
#line 2514 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1070:
#line 2517 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1071:
#line 2519 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1072:
#line 2522 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1073:
#line 2523 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1074:
#line 2524 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1075:
#line 2525 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1076:
#line 2526 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1077:
#line 2527 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1078:
#line 2529 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1081:
#line 2536 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1082:
#line 2537 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1083:
#line 2538 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1084:
#line 2539 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1085:
#line 2540 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1086:
#line 2541 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1089:
#line 2546 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1090:
#line 2547 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1091:
#line 2548 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1092:
#line 2549 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1093:
#line 2550 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1094:
#line 2551 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1095:
#line 2552 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1096:
#line 2553 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1097:
#line 2554 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1098:
#line 2555 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1099:
#line 2556 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1102:
#line 2563 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1103:
#line 2564 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1105:
#line 2568 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1106:
#line 2570 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1107:
#line 2571 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1108:
#line 2574 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1109:
#line 2575 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1110:
#line 2576 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1111:
#line 2577 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1112:
#line 2580 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1113:
#line 2581 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1116:
#line 2589 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1117:
#line 2592 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1118:
#line 2593 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1122:
#line 2600 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1123:
#line 2603 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1124:
#line 2607 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1125:
#line 2608 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1126:
#line 2609 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1127:
#line 2610 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1128:
#line 2611 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1129:
#line 2612 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1130:
#line 2613 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1131:
#line 2614 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1132:
#line 2620 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1133:
#line 2621 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1134:
#line 2622 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1135:
#line 2623 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1136:
#line 2627 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1137:
#line 2628 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1138:
#line 2630 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1139:
#line 2635 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1141:
#line 2637 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1143:
#line 2639 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1144:
#line 2642 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1145:
#line 2644 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1146:
#line 2649 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1147:
#line 2652 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1148:
#line 2653 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1149:
#line 2654 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1150:
#line 2657 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1151:
#line 2659 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1152:
#line 2663 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1153:
#line 2664 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1154:
#line 2668 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1155:
#line 2669 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1156:
#line 2670 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1157:
#line 2671 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1158:
#line 2677 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1159:
#line 2678 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1160:
#line 2684 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1161:
#line 2685 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1162:
#line 2686 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1163:
#line 2687 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1166:
#line 2695 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1167:
#line 2697 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1168:
#line 2698 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1169:
#line 2699 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1170:
#line 2703 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1171:
#line 2704 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1172:
#line 2705 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1173:
#line 2706 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1174:
#line 2709 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1175:
#line 2710 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1176:
#line 2713 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1177:
#line 2714 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1178:
#line 2715 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1179:
#line 2718 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1180:
#line 2719 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1181:
#line 2720 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1182:
#line 2723 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1183:
#line 2724 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1185:
#line 2726 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1186:
#line 2727 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1187:
#line 2730 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1188:
#line 2731 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1189:
#line 2732 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1194:
#line 2739 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1195:
#line 2743 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1196:
#line 2745 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1197:
#line 2747 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1199:
#line 2752 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1200:
#line 2754 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1201:
#line 2756 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1211:
#line 2769 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1212:
#line 2770 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1213:
#line 2771 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1214:
#line 2774 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1215:
#line 2775 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1216:
#line 2776 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1217:
#line 2779 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1218:
#line 2780 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1219:
#line 2781 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1220:
#line 2784 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1221:
#line 2785 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1222:
#line 2786 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1224:
#line 2790 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1225:
#line 2791 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1226:
#line 2792 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1227:
#line 2795 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1228:
#line 2796 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1229:
#line 2797 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1230:
#line 2800 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1231:
#line 2801 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1232:
#line 2802 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1233:
#line 2805 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1234:
#line 2806 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1235:
#line 2807 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1236:
#line 2810 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1237:
#line 2811 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1238:
#line 2812 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1239:
#line 2816 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1240:
#line 2818 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1241:
#line 2820 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1242:
#line 2824 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1243:
#line 2828 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1244:
#line 2830 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1245:
#line 2834 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1246:
#line 2837 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1247:
#line 2838 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1248:
#line 2839 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1249:
#line 2840 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1250:
#line 2843 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1251:
#line 2845 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1252:
#line 2846 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1253:
#line 2848 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1255:
#line 2852 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1256:
#line 2853 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1257:
#line 2854 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1258:
#line 2857 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1259:
#line 2858 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1260:
#line 2862 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1262:
#line 2864 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1265:
#line 2869 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1266:
#line 2870 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1267:
#line 2871 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1268:
#line 2874 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1269:
#line 2875 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1270:
#line 2876 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1271:
#line 2879 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1272:
#line 2881 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1273:
#line 2886 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1274:
#line 2889 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1275:
#line 2896 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1276:
#line 2898 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1277:
#line 2900 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1278:
#line 2905 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1280:
#line 2909 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1281:
#line 2910 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1282:
#line 2911 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1283:
#line 2913 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1284:
#line 2915 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1285:
#line 2920 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11064 "frame/parser.C"
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


#line 2924 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

