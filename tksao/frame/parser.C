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
     SYNC_ = 545,
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
#define SYNC_ 545
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
#define YYFINAL  363
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5867

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  362
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  222
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1282
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2813

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
     484,   487,   490,   493,   496,   499,   502,   504,   507,   509,
     512,   514,   517,   520,   527,   530,   535,   538,   541,   544,
     548,   551,   554,   556,   559,   561,   564,   569,   575,   578,
     582,   588,   595,   597,   599,   601,   609,   621,   630,   643,
     645,   648,   651,   653,   655,   658,   661,   664,   667,   671,
     675,   678,   681,   683,   685,   687,   689,   691,   693,   695,
     698,   701,   704,   706,   710,   713,   716,   719,   725,   735,
     737,   740,   742,   748,   758,   760,   763,   766,   769,   772,
     775,   778,   792,   806,   819,   832,   834,   835,   837,   839,
     844,   851,   853,   855,   857,   859,   861,   863,   865,   867,
     869,   874,   878,   883,   884,   891,   900,   903,   907,   911,
     915,   916,   921,   926,   931,   936,   940,   944,   946,   950,
     956,   961,   966,   970,   973,   974,   976,   978,   980,   982,
     984,   988,   989,   992,   995,   998,  1001,  1004,  1007,  1010,
    1013,  1016,  1019,  1022,  1025,  1028,  1031,  1033,  1036,  1039,
    1042,  1047,  1051,  1054,  1057,  1060,  1062,  1066,  1069,  1072,
    1074,  1077,  1086,  1089,  1091,  1094,  1096,  1099,  1101,  1106,
    1110,  1113,  1115,  1123,  1132,  1140,  1149,  1151,  1153,  1155,
    1158,  1160,  1162,  1165,  1167,  1168,  1171,  1174,  1176,  1177,
    1180,  1183,  1185,  1187,  1190,  1193,  1196,  1198,  1200,  1202,
    1204,  1206,  1208,  1209,  1211,  1214,  1216,  1221,  1227,  1228,
    1231,  1233,  1239,  1242,  1245,  1247,  1249,  1251,  1254,  1256,
    1259,  1261,  1263,  1264,  1266,  1268,  1269,  1271,  1277,  1284,
    1288,  1295,  1299,  1301,  1305,  1307,  1309,  1311,  1315,  1322,
    1330,  1336,  1339,  1341,  1347,  1352,  1354,  1358,  1359,  1361,
    1364,  1366,  1371,  1373,  1376,  1378,  1381,  1385,  1388,  1390,
    1393,  1395,  1400,  1403,  1405,  1407,  1411,  1413,  1416,  1420,
    1423,  1424,  1426,  1428,  1433,  1436,  1437,  1439,  1443,  1448,
    1453,  1454,  1456,  1458,  1460,  1462,  1464,  1466,  1468,  1470,
    1472,  1474,  1476,  1478,  1480,  1482,  1484,  1487,  1489,  1492,
    1494,  1497,  1500,  1503,  1506,  1508,  1510,  1512,  1513,  1515,
    1516,  1518,  1519,  1521,  1522,  1524,  1525,  1528,  1531,  1532,
    1534,  1537,  1539,  1546,  1552,  1554,  1556,  1558,  1561,  1564,
    1567,  1569,  1571,  1573,  1575,  1578,  1580,  1582,  1584,  1587,
    1589,  1591,  1593,  1596,  1599,  1602,  1603,  1605,  1606,  1608,
    1610,  1612,  1614,  1616,  1618,  1620,  1622,  1625,  1628,  1631,
    1633,  1636,  1640,  1642,  1645,  1648,  1653,  1659,  1661,  1672,
    1674,  1677,  1681,  1685,  1688,  1691,  1694,  1697,  1700,  1703,
    1706,  1711,  1716,  1721,  1725,  1729,  1735,  1740,  1745,  1750,
    1754,  1758,  1762,  1766,  1769,  1772,  1777,  1781,  1785,  1789,
    1793,  1798,  1803,  1808,  1813,  1819,  1824,  1831,  1839,  1844,
    1849,  1855,  1858,  1862,  1866,  1870,  1873,  1877,  1881,  1885,
    1889,  1894,  1898,  1904,  1911,  1915,  1919,  1924,  1928,  1932,
    1936,  1940,  1944,  1950,  1954,  1958,  1963,  1967,  1970,  1973,
    1975,  1979,  1984,  1989,  1994,  1999,  2004,  2011,  2016,  2021,
    2027,  2032,  2037,  2042,  2047,  2053,  2058,  2065,  2073,  2078,
    2083,  2089,  2095,  2101,  2107,  2113,  2119,  2127,  2133,  2139,
    2146,  2151,  2156,  2161,  2166,  2171,  2178,  2183,  2188,  2194,
    2200,  2206,  2212,  2218,  2225,  2231,  2239,  2248,  2254,  2260,
    2267,  2271,  2275,  2279,  2283,  2288,  2292,  2298,  2305,  2309,
    2313,  2318,  2322,  2326,  2330,  2334,  2338,  2344,  2348,  2352,
    2357,  2362,  2367,  2371,  2377,  2382,  2387,  2390,  2394,  2401,
    2408,  2410,  2412,  2414,  2417,  2420,  2423,  2427,  2431,  2434,
    2447,  2450,  2453,  2455,  2459,  2464,  2467,  2468,  2472,  2474,
    2477,  2480,  2483,  2486,  2489,  2494,  2499,  2504,  2508,  2513,
    2519,  2528,  2535,  2545,  2552,  2560,  2571,  2583,  2596,  2606,
    2612,  2619,  2623,  2629,  2635,  2642,  2648,  2653,  2663,  2674,
    2686,  2696,  2703,  2710,  2717,  2724,  2731,  2738,  2745,  2752,
    2759,  2767,  2775,  2778,  2783,  2788,  2793,  2798,  2804,  2809,
    2814,  2820,  2826,  2830,  2835,  2840,  2845,  2853,  2863,  2870,
    2881,  2893,  2906,  2916,  2920,  2923,  2927,  2933,  2941,  2946,
    2950,  2954,  2961,  2969,  2977,  2982,  2987,  2997,  3002,  3006,
    3011,  3019,  3027,  3030,  3034,  3038,  3042,  3047,  3050,  3053,
    3058,  3069,  3073,  3075,  3079,  3082,  3085,  3088,  3091,  3095,
    3101,  3106,  3112,  3115,  3118,  3121,  3124,  3128,  3131,  3134,
    3137,  3141,  3144,  3148,  3153,  3157,  3161,  3168,  3173,  3176,
    3180,  3183,  3186,  3191,  3195,  3199,  3202,  3206,  3208,  3211,
    3213,  3216,  3219,  3222,  3224,  3226,  3228,  3230,  3233,  3235,
    3238,  3241,  3243,  3246,  3249,  3251,  3254,  3256,  3258,  3260,
    3262,  3264,  3266,  3268,  3270,  3271,  3273,  3276,  3279,  3282,
    3286,  3292,  3300,  3308,  3315,  3322,  3329,  3336,  3342,  3349,
    3356,  3363,  3370,  3377,  3384,  3391,  3403,  3411,  3419,  3427,
    3437,  3447,  3458,  3471,  3484,  3487,  3490,  3494,  3499,  3504,
    3509,  3510,  3512,  3514,  3519,  3524,  3526,  3528,  3530,  3532,
    3534,  3536,  3538,  3540,  3543,  3545,  3547,  3549,  3553,  3557,
    3566,  3573,  3584,  3592,  3600,  3606,  3609,  3612,  3616,  3621,
    3627,  3633,  3639,  3643,  3648,  3654,  3660,  3666,  3672,  3675,
    3679,  3683,  3689,  3693,  3697,  3701,  3706,  3712,  3718,  3724,
    3730,  3734,  3739,  3745,  3751,  3754,  3757,  3761,  3767,  3774,
    3781,  3785,  3789,  3796,  3802,  3808,  3811,  3815,  3819,  3825,
    3832,  3836,  3839,  3842,  3846,  3849,  3853,  3856,  3860,  3866,
    3873,  3876,  3879,  3882,  3884,  3889,  3894,  3896,  3899,  3902,
    3905,  3908,  3911,  3914,  3917,  3921,  3924,  3928,  3931,  3935,
    3937,  3939,  3941,  3943,  3945,  3946,  3949,  3950,  3953,  3954,
    3956,  3957,  3958,  3960,  3962,  3964,  3966,  3968,  3976,  3985,
    3988,  3995,  3998,  4005,  4008,  4012,  4015,  4017,  4019,  4023,
    4027,  4029,  4034,  4037,  4039,  4043,  4047,  4052,  4056,  4060,
    4064,  4066,  4068,  4070,  4072,  4074,  4076,  4078,  4080,  4082,
    4084,  4086,  4088,  4090,  4092,  4094,  4097,  4098,  4099,  4102,
    4109,  4117,  4120,  4122,  4126,  4128,  4132,  4134,  4136,  4138,
    4141,  4144,  4146,  4150,  4151,  4152,  4155,  4158,  4160,  4164,
    4170,  4172,  4175,  4178,  4182,  4185,  4188,  4191,  4194,  4196,
    4198,  4200,  4202,  4207,  4210,  4214,  4218,  4221,  4225,  4228,
    4231,  4234,  4238,  4242,  4246,  4249,  4253,  4255,  4259,  4263,
    4265,  4268,  4271,  4274,  4277,  4287,  4294,  4296,  4298,  4300,
    4302,  4305,  4308,  4312,  4316,  4318,  4321,  4325,  4329,  4331,
    4334,  4336,  4338,  4340,  4342,  4344,  4347,  4350,  4355,  4357,
    4360,  4363,  4366,  4370,  4372,  4374,  4376,  4379,  4382,  4385,
    4388,  4391,  4395,  4399,  4403,  4407,  4411,  4415,  4419,  4421,
    4424,  4427,  4430,  4434,  4437,  4441,  4445,  4448,  4451,  4454,
    4457,  4460,  4463,  4466,  4469,  4472,  4475,  4478,  4481,  4484,
    4487,  4491,  4495,  4499,  4502,  4505,  4508,  4511,  4514,  4517,
    4520,  4523,  4526,  4529,  4532,  4535,  4539,  4543,  4547,  4552,
    4559,  4562,  4564,  4566,  4568,  4570,  4572,  4573,  4579,  4581,
    4588,  4592,  4594,  4597,  4600,  4603,  4607,  4611,  4614,  4617,
    4620,  4623,  4626,  4629,  4633,  4636,  4639,  4643,  4645,  4649,
    4654,  4657,  4659,  4662,  4668,  4675,  4682,  4685,  4687,  4690,
    4693,  4699,  4706
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     363,     0,    -1,    97,   365,    -1,    43,   397,    -1,    40,
      66,     5,    -1,    40,    66,   144,    -1,    40,    66,   366,
      -1,    46,   402,    -1,    59,    -1,    64,    -1,    65,   404,
      -1,    67,   293,     5,    -1,    68,   409,    -1,    69,   411,
      -1,    77,   412,    -1,    84,   421,    -1,    86,   423,    -1,
      87,   424,    -1,    96,   366,    -1,   119,   426,    -1,   128,
     427,    -1,   141,   428,    -1,   145,   472,    -1,   148,   475,
      -1,   152,    -1,   153,   366,    -1,   153,    66,     5,    -1,
     159,   481,    -1,   165,    15,     4,    -1,   180,   484,    -1,
     183,   502,    -1,   184,   503,    -1,   185,   504,    -1,   188,
     520,   505,    -1,   189,   540,    -1,   203,    66,     5,    -1,
     203,    66,   144,    -1,   220,   541,    -1,   221,   542,    -1,
     222,   545,    -1,   243,    88,    -1,   236,   547,    -1,   234,
     546,    -1,   251,    -1,   247,   520,   549,    -1,   253,   554,
      -1,   255,   555,    -1,   260,   557,    -1,   274,    -1,   280,
     572,    -1,   296,     4,    -1,   297,   392,    -1,   308,    -1,
     310,   574,    -1,   316,    -1,   319,   576,    -1,   320,   577,
      -1,   350,   581,    -1,   357,   582,    -1,     3,    -1,     4,
      -1,   366,    -1,   198,   366,    -1,   223,   366,    -1,   225,
     366,    -1,   320,   366,    -1,    43,   366,    -1,    46,   366,
      -1,    76,   366,    -1,    84,   366,    -1,   146,   366,    -1,
     253,   366,    -1,     4,    -1,   353,    -1,   358,    -1,   217,
      -1,   304,    -1,   208,    -1,   359,    -1,   216,    -1,   121,
      -1,    -1,   254,    37,    -1,   137,    37,    -1,   254,    -1,
     137,    -1,    -1,   369,    -1,   364,    -1,     6,    -1,     7,
      -1,     8,    -1,     9,    -1,    10,    -1,   370,   370,    -1,
     371,   372,    -1,   372,   372,    -1,   364,   364,    -1,   160,
      -1,   227,    -1,   102,    -1,    18,    -1,   375,    -1,   320,
      -1,   321,    -1,   322,    -1,   323,    -1,   324,    -1,   325,
      -1,   326,    -1,   327,    -1,   328,    -1,   329,    -1,   330,
      -1,   331,    -1,   332,    -1,   333,    -1,   334,    -1,   335,
      -1,   336,    -1,   337,    -1,   338,    -1,   339,    -1,   340,
      -1,   341,    -1,   342,    -1,   343,    -1,   344,    -1,   345,
      -1,   346,    -1,   347,    -1,    56,    -1,   222,    -1,    -1,
     354,    -1,   211,    -1,   203,    -1,   210,    -1,   246,    -1,
      -1,   283,    -1,   265,    -1,    91,    -1,   174,    -1,   178,
      -1,   182,    -1,   235,    -1,   284,    -1,   285,    -1,    27,
      -1,   276,    -1,   154,    -1,    29,    -1,   262,    -1,   257,
      -1,    95,    -1,   166,    -1,    -1,   130,    -1,    34,    -1,
     131,    -1,   167,    -1,   157,    -1,   139,    -1,   107,    -1,
      -1,    98,    -1,   269,    -1,    -1,    98,    -1,    23,    -1,
      24,    -1,    -1,   273,    -1,   168,    -1,    -1,    16,    -1,
     162,    -1,    -1,   160,    -1,   189,    -1,    -1,    62,    -1,
      48,    -1,   103,    -1,    85,    -1,   360,    -1,    26,    -1,
      51,    -1,    -1,     4,    -1,    82,    -1,   155,    -1,   229,
      -1,   230,    -1,   244,    -1,   287,    -1,    -1,    31,    -1,
     289,    -1,   190,    -1,    -1,   204,    -1,    41,    -1,    42,
      -1,   175,    -1,   176,    -1,   314,   396,    -1,    47,   393,
      -1,    74,   394,    -1,   153,   395,    -1,   192,   552,    -1,
      36,   553,    -1,   261,   364,    -1,   290,     4,    -1,   298,
     364,    -1,   366,    -1,    66,     5,    -1,   366,    -1,    66,
       5,    -1,   366,    -1,    66,     5,    -1,   364,   364,    -1,
     231,   364,   364,   364,   364,   364,    -1,    11,   398,    -1,
      71,     5,     5,     5,    -1,   101,     4,    -1,   120,   399,
      -1,   138,   400,    -1,    53,   277,     4,    -1,   301,   401,
      -1,   124,     5,    -1,    59,    -1,   364,   364,    -1,   364,
      -1,   364,   364,    -1,   364,    11,   364,   364,    -1,   364,
     364,    11,   364,   364,    -1,   301,   364,    -1,   301,   364,
     364,    -1,   301,   364,    11,   364,   364,    -1,   301,   364,
     364,    11,   364,   364,    -1,    31,    -1,   289,    -1,   126,
      -1,   364,   364,    11,    59,     5,     5,     5,    -1,   364,
     364,     4,   364,   364,    11,    59,     5,     5,     5,     5,
      -1,   364,   364,    11,   364,   364,     5,     5,     5,    -1,
     364,   364,     4,   364,   364,    11,   364,   364,     5,     5,
       5,     5,    -1,   364,    -1,   364,   364,    -1,   301,   403,
      -1,   126,    -1,   364,    -1,   364,   364,    -1,   264,   405,
      -1,   199,   406,    -1,   193,   407,    -1,   311,   364,   364,
      -1,   311,   203,   203,    -1,   356,   408,    -1,   238,   366,
      -1,   142,    -1,   181,    -1,   364,    -1,   193,    -1,   356,
      -1,   355,    -1,   311,    -1,     4,   380,    -1,   199,   380,
      -1,   257,     4,    -1,   250,    -1,   364,     4,     4,    -1,
      78,   364,    -1,   257,     4,    -1,   177,     4,    -1,     4,
     364,   364,     4,     4,    -1,   253,   364,   364,   364,   364,
     364,   364,     4,     4,    -1,    39,    -1,   200,   410,    -1,
     112,    -1,     4,   364,   364,     4,     4,    -1,   253,   364,
     364,   364,   364,   364,   364,     4,     4,    -1,   379,    -1,
     182,   364,    -1,    83,   413,    -1,   100,   414,    -1,   180,
     415,    -1,   224,   419,    -1,   260,   420,    -1,     5,     4,
       4,   418,     4,     4,   379,   364,   416,   417,   364,   364,
       5,    -1,     5,     4,     4,   418,     4,     4,   379,   364,
     364,   417,   364,   364,     5,    -1,     5,     4,     4,   418,
       4,     4,   379,   364,   416,   364,   364,     5,    -1,     5,
       4,     4,   418,     4,     4,   379,   364,   364,   364,   364,
       5,    -1,   233,    -1,    -1,    30,    -1,     5,    -1,     5,
       5,     4,   366,    -1,     5,     4,   366,     5,   374,   381,
      -1,   193,    -1,   356,    -1,   355,    -1,   311,    -1,   142,
      -1,   181,    -1,   280,    -1,    46,    -1,     5,    -1,     5,
       5,     4,   366,    -1,     5,   374,   381,    -1,    30,     5,
     374,   381,    -1,    -1,   364,   364,   364,   364,   374,   381,
      -1,    59,   373,   374,   381,   364,   364,   374,   383,    -1,
     297,   422,    -1,    39,   364,   364,    -1,   200,   364,   364,
      -1,   112,   364,   364,    -1,    -1,   364,   364,   374,   381,
      -1,    39,   364,   364,     4,    -1,   200,   364,   364,     4,
      -1,   112,   364,   364,     4,    -1,   376,   364,   364,    -1,
     374,   381,   373,    -1,   366,    -1,   319,   364,   364,    -1,
      39,   200,   376,   364,   364,    -1,   200,   376,   364,   364,
      -1,    39,   200,   374,   373,    -1,   200,   374,   373,    -1,
      32,     4,    -1,    -1,    31,    -1,   289,    -1,   190,    -1,
     364,    -1,    64,    -1,   148,   118,     5,    -1,    -1,    40,
      66,    -1,    43,   431,    -1,    46,   433,    -1,    65,   434,
      -1,    68,   438,    -1,    67,   437,    -1,    69,   440,    -1,
      77,   442,    -1,    79,   445,    -1,    84,   446,    -1,    86,
     447,    -1,    88,   449,    -1,    87,   448,    -1,    94,   450,
      -1,    96,    -1,   127,   454,    -1,   145,   460,    -1,   153,
      66,    -1,   155,     5,     5,     4,    -1,   156,    89,   429,
      -1,   159,   452,    -1,   163,   451,    -1,   165,    15,    -1,
     193,    -1,   188,   520,   514,    -1,   189,   461,    -1,   203,
      66,    -1,   220,    -1,   221,   462,    -1,   228,   292,   376,
     364,   364,     4,     4,     5,    -1,   253,   463,    -1,   255,
      -1,   280,   464,    -1,   296,    -1,   297,   465,    -1,   305,
      -1,   312,   376,   364,   364,    -1,   318,    89,   430,    -1,
     320,   470,    -1,   357,    -1,     5,     5,   364,   364,   376,
       4,   425,    -1,     5,     5,   364,   364,   374,   381,     4,
     425,    -1,     5,     5,   364,   364,   376,     4,   425,    -1,
       5,     5,   364,   364,   374,   381,     4,   425,    -1,   101,
      -1,   120,    -1,   138,    -1,    53,   277,    -1,    88,    -1,
     124,    -1,    71,   432,    -1,   179,    -1,    -1,   193,     5,
      -1,   104,     5,    -1,   120,    -1,    -1,   416,   417,    -1,
     364,   417,    -1,   264,    -1,   199,    -1,   193,   435,    -1,
     311,   173,    -1,   356,   436,    -1,   238,    -1,   199,    -1,
     257,    -1,    78,    -1,   257,    -1,   177,    -1,    -1,   293,
      -1,   173,   439,    -1,     4,    -1,     4,   376,   364,   364,
      -1,     4,   364,   364,   379,   364,    -1,    -1,   173,   441,
      -1,   182,    -1,     4,   364,   364,   379,   364,    -1,   374,
     381,    -1,    65,   443,    -1,    66,    -1,    92,    -1,   173,
      -1,   214,   173,    -1,   192,    -1,    69,   444,    -1,   280,
      -1,   349,    -1,    -1,   199,    -1,   264,    -1,    -1,   182,
      -1,   364,   364,   374,   381,   382,    -1,   376,   364,   364,
     374,   381,   382,    -1,   374,   381,   382,    -1,    59,   374,
     381,   382,   374,   383,    -1,   297,   374,   381,    -1,   376,
      -1,   374,   381,   382,    -1,   288,    -1,    32,    -1,   376,
      -1,   374,   381,   382,    -1,   374,   381,   373,   364,   364,
       5,    -1,     4,   374,   381,   373,   364,   364,     5,    -1,
     376,   364,   364,     4,     4,    -1,     5,   367,    -1,    65,
      -1,   376,   364,   364,     5,   367,    -1,     4,     4,     4,
       4,    -1,    88,    -1,   122,   202,   453,    -1,    -1,     4,
      -1,   364,   364,    -1,   205,    -1,    59,   374,   381,   382,
      -1,    81,    -1,   101,   457,    -1,    44,    -1,   118,   455,
      -1,   122,   202,   458,    -1,   150,   456,    -1,   151,    -1,
     215,   202,    -1,   277,    -1,   277,   374,   381,   383,    -1,
     278,   459,    -1,   349,    -1,     4,    -1,   376,   364,   364,
      -1,     4,    -1,   169,     5,    -1,     4,   169,     5,    -1,
     320,     4,    -1,    -1,     4,    -1,   367,    -1,   367,   376,
     364,   364,    -1,   367,     4,    -1,    -1,     4,    -1,   135,
     160,   374,    -1,   135,   160,     4,   374,    -1,   301,   160,
     364,   374,    -1,    -1,   219,    -1,   313,    -1,    66,    -1,
     187,    -1,   246,    -1,   291,    -1,   300,    -1,    81,    -1,
      45,    -1,   238,    -1,    61,    -1,   291,    -1,   314,    -1,
     138,    -1,   245,    -1,   245,   194,    -1,   275,    -1,   275,
     194,    -1,    20,    -1,   314,   469,    -1,    47,   466,    -1,
      74,   467,    -1,   153,   468,    -1,   192,    -1,    36,    -1,
     261,    -1,    -1,    66,    -1,    -1,    66,    -1,    -1,    66,
      -1,    -1,   231,    -1,    -1,    15,   471,    -1,   202,   375,
      -1,    -1,   232,    -1,    83,   473,    -1,   100,    -1,   374,
     381,   382,   474,     5,     5,    -1,   374,   381,   382,   474,
       5,    -1,    19,    -1,   241,    -1,    18,    -1,    40,    66,
      -1,    43,   476,    -1,    77,   477,    -1,    84,    -1,    95,
      -1,    96,    -1,   102,    -1,   127,   478,    -1,   145,    -1,
     159,    -1,   166,    -1,   188,   479,    -1,   227,    -1,   160,
      -1,   280,    -1,   291,   374,    -1,   320,   480,    -1,    72,
       5,    -1,    -1,    30,    -1,    -1,    43,    -1,    87,    -1,
     198,    -1,   153,    -1,   267,    -1,   224,    -1,   306,    -1,
     374,    -1,    58,   374,    -1,   116,   374,    -1,   178,   374,
      -1,    17,    -1,   297,   374,    -1,   206,     4,     4,    -1,
     117,    -1,   191,     5,    -1,    88,   483,    -1,   268,   122,
     202,   482,    -1,   268,     4,     4,     4,     4,    -1,   310,
      -1,   320,   364,   364,   364,   364,   364,   364,   364,   364,
       4,    -1,     5,    -1,     5,     4,    -1,     4,     4,    56,
      -1,     4,     4,   374,    -1,   199,   366,    -1,    25,   485,
      -1,   113,   487,    -1,   127,   488,    -1,   162,   501,    -1,
     213,   499,    -1,   226,   500,    -1,     5,    13,     5,   386,
      -1,     5,    14,     5,   386,    -1,     5,    61,     5,   386,
      -1,     5,   196,   386,    -1,     5,   197,   386,    -1,     5,
     271,   384,     4,   386,    -1,     5,   281,     4,   386,    -1,
       5,   282,     4,   386,    -1,     5,   313,     5,   386,    -1,
     253,    87,   486,    -1,     5,    13,     5,    -1,     5,    14,
       5,    -1,     5,    61,     5,    -1,     5,   196,    -1,     5,
     197,    -1,     5,   271,   384,     4,    -1,     5,   281,     4,
      -1,     5,   282,     4,    -1,     5,   313,     5,    -1,     5,
       5,   279,    -1,     5,    13,     5,   386,    -1,     5,    14,
       5,   386,    -1,     5,    61,     5,   386,    -1,     5,   196,
     385,   386,    -1,     5,     5,   279,   385,   386,    -1,     5,
     197,   385,   386,    -1,     5,   271,   384,     4,   385,   386,
      -1,     5,   286,   384,     4,     4,   385,   386,    -1,     5,
     281,     4,   386,    -1,     5,   282,     4,   386,    -1,     5,
     313,     5,   385,   386,    -1,   278,   489,    -1,   118,    87,
     490,    -1,   253,   160,   498,    -1,   253,    87,   497,    -1,
     198,   491,    -1,     5,    13,     5,    -1,     5,    14,     5,
      -1,     5,    61,     5,    -1,     5,   196,   385,    -1,     5,
       5,   279,   385,    -1,     5,   197,   385,    -1,     5,   271,
     384,     4,   385,    -1,     5,   286,   384,     4,     4,   385,
      -1,     5,   281,     4,    -1,     5,   282,     4,    -1,     5,
     313,     5,   385,    -1,     5,    13,     5,    -1,     5,    14,
       5,    -1,     5,    61,     5,    -1,     5,   196,   385,    -1,
       5,   197,   385,    -1,     5,   271,   384,     4,   385,    -1,
       5,   281,     4,    -1,     5,   282,     4,    -1,     5,   313,
       5,   385,    -1,   160,   165,   492,    -1,   165,   493,    -1,
     160,   494,    -1,   496,    -1,   160,   348,   495,    -1,     5,
      13,     5,   386,    -1,     5,    14,     5,   386,    -1,     5,
      61,     5,   386,    -1,     5,   196,   385,   386,    -1,     5,
     197,   385,   386,    -1,     5,   271,   384,     4,   385,   386,
      -1,     5,   281,     4,   386,    -1,     5,   282,     4,   386,
      -1,     5,   313,     5,   385,   386,    -1,     5,    13,     5,
     386,    -1,     5,    14,     5,   386,    -1,     5,    61,     5,
     386,    -1,     5,   196,   385,   386,    -1,     5,     5,   279,
     385,   386,    -1,     5,   197,   385,   386,    -1,     5,   271,
     384,     4,   385,   386,    -1,     5,   286,   384,     4,     4,
     385,   386,    -1,     5,   281,     4,   386,    -1,     5,   282,
       4,   386,    -1,     5,   313,     5,   385,   386,    -1,   375,
       5,    13,     5,   386,    -1,   375,     5,    14,     5,   386,
      -1,   375,     5,    61,     5,   386,    -1,   375,     5,   196,
     385,   386,    -1,   375,     5,   197,   385,   386,    -1,   375,
       5,   271,   384,     4,   385,   386,    -1,   375,     5,   281,
       4,   386,    -1,   375,     5,   282,     4,   386,    -1,   375,
       5,   313,     5,   385,   386,    -1,     5,    13,     5,   386,
      -1,     5,    14,     5,   386,    -1,     5,    61,     5,   386,
      -1,     5,   196,   385,   386,    -1,     5,   197,   385,   386,
      -1,     5,   271,   384,     4,   385,   386,    -1,     5,   281,
       4,   386,    -1,     5,   282,     4,   386,    -1,     5,   313,
       5,   385,   386,    -1,   375,     5,    13,     5,   386,    -1,
     375,     5,    14,     5,   386,    -1,   375,     5,    61,     5,
     386,    -1,   375,     5,   196,   385,   386,    -1,   375,     5,
       5,   279,   385,   386,    -1,   375,     5,   197,   385,   386,
      -1,   375,     5,   271,   384,     4,   385,   386,    -1,   375,
       5,   286,   384,     4,     4,   385,   386,    -1,   375,     5,
     281,     4,   386,    -1,   375,     5,   282,     4,   386,    -1,
     375,     5,   313,     5,   385,   386,    -1,     5,    13,     5,
      -1,     5,    14,     5,    -1,     5,    61,     5,    -1,     5,
     196,   385,    -1,     5,     5,   279,   385,    -1,     5,   197,
     385,    -1,     5,   271,   384,     4,   385,    -1,     5,   286,
     384,     4,     4,   385,    -1,     5,   281,     4,    -1,     5,
     282,     4,    -1,     5,   313,     5,   385,    -1,     5,    13,
       5,    -1,     5,    14,     5,    -1,     5,    61,     5,    -1,
       5,   196,   385,    -1,     5,   197,   385,    -1,     5,   271,
     384,     4,   385,    -1,     5,   281,     4,    -1,     5,   282,
       4,    -1,     5,   313,     5,   385,    -1,     5,    13,     5,
     386,    -1,     5,    61,     5,   386,    -1,     5,   196,   386,
      -1,     5,   271,   384,     4,   386,    -1,     5,   281,     4,
     386,    -1,     5,   313,     5,   386,    -1,     5,     5,    -1,
     278,     5,     5,    -1,    94,     4,     4,     4,     4,     4,
      -1,   193,     4,     4,     4,     4,     4,    -1,   112,    -1,
     237,    -1,   366,    -1,   143,   366,    -1,    88,   366,    -1,
      66,     5,    -1,     5,     4,     4,    -1,   310,   364,   364,
      -1,   357,   364,    -1,     5,     5,   375,   381,     5,     5,
     375,   381,   364,   375,   383,     5,    -1,    60,   508,    -1,
      66,     5,    -1,    80,    -1,    73,   513,     5,    -1,    73,
     513,   313,     5,    -1,    75,   100,    -1,    -1,    83,   506,
     509,    -1,    89,    -1,   100,   511,    -1,   106,   512,    -1,
     115,     4,    -1,   132,     5,    -1,   153,    16,    -1,   153,
     218,   364,   364,    -1,   153,   302,   364,   364,    -1,     4,
      19,   389,   366,    -1,     4,    20,   369,    -1,     4,    20,
     369,   376,    -1,     4,    20,   369,   374,   381,    -1,     4,
      21,   245,   364,   364,     4,   374,   383,    -1,     4,    21,
     245,     5,   374,   383,    -1,     4,    49,   245,   364,   364,
     364,     4,   374,   383,    -1,     4,    49,   245,     5,   374,
     383,    -1,     4,    48,   245,   364,   364,   374,   383,    -1,
       4,    52,   106,   369,   369,     4,   364,   364,   364,     4,
      -1,     4,    52,   106,   369,   369,     4,   364,   364,   364,
       4,   376,    -1,     4,    52,   106,   369,   369,     4,   364,
     364,   364,     4,   374,   381,    -1,     4,    52,   106,     5,
       5,   374,   381,   374,   383,    -1,     4,    55,   507,     5,
       5,    -1,     4,    62,   245,   364,   374,   383,    -1,     4,
      66,     5,    -1,     4,    74,    26,   366,   366,    -1,     4,
      74,   170,     5,     5,    -1,     4,    74,   245,   364,   374,
     383,    -1,     4,    74,   291,   374,   381,    -1,     4,    75,
     142,   366,    -1,     4,    82,   106,   369,   369,     4,   364,
     364,     4,    -1,     4,    82,   106,   369,   369,     4,   364,
     364,     4,   376,    -1,     4,    82,   106,   369,   369,     4,
     364,   364,     4,   374,   381,    -1,     4,    82,   106,     5,
       5,   374,   381,   374,   383,    -1,     4,    83,    21,   245,
     364,   364,    -1,     4,    83,    49,   245,   364,   364,    -1,
       4,    83,    52,    20,   364,   364,    -1,     4,    83,    52,
     245,   364,   364,    -1,     4,    83,   111,   245,   364,   364,
      -1,     4,    83,   114,    20,   364,   364,    -1,     4,    83,
     114,   245,   364,   364,    -1,     4,    83,    82,    20,   364,
     364,    -1,     4,    83,    82,   245,   364,   364,    -1,     4,
      83,   233,   317,     4,   364,   364,    -1,     4,    83,   266,
     317,     4,   364,   364,    -1,     4,   100,    -1,     4,   100,
      21,     4,    -1,     4,   100,    49,     4,    -1,     4,   100,
      52,     4,    -1,     4,   100,   111,     4,    -1,     4,   100,
      55,   507,     5,    -1,     4,   100,   114,     4,    -1,     4,
     100,    82,     4,    -1,     4,   100,   233,   317,     4,    -1,
       4,   100,   266,   317,     4,    -1,     4,   100,   293,    -1,
       4,   100,   293,     5,    -1,     4,   100,   293,     4,    -1,
       4,   106,    39,     4,    -1,     4,   110,   245,   364,   364,
     374,   383,    -1,     4,   111,   245,   364,   364,   364,     4,
     374,   383,    -1,     4,   111,   245,     5,   374,   383,    -1,
       4,   114,   106,   369,   369,     4,   364,   364,   364,     4,
      -1,     4,   114,   106,   369,   369,     4,   364,   364,   364,
       4,   376,    -1,     4,   114,   106,   369,   369,     4,   364,
     364,   364,     4,   374,   381,    -1,     4,   114,   106,     5,
       5,   374,   381,   374,   383,    -1,     4,   132,     5,    -1,
       4,   153,    -1,     4,   153,   218,    -1,     4,   177,    26,
     366,   366,    -1,     4,   177,   231,   374,   381,   373,   373,
      -1,     4,   201,   364,   364,    -1,     4,   201,   136,    -1,
       4,   201,    35,    -1,     4,   201,   301,   374,   381,   373,
      -1,     4,   233,   251,   364,   364,   374,   383,    -1,     4,
     266,   251,   364,   364,   374,   383,    -1,     4,   231,   270,
     387,    -1,     4,   231,   277,     4,    -1,     4,   239,   374,
     381,   373,   373,   364,   374,   383,    -1,     4,   240,   526,
     366,    -1,     4,   255,    39,    -1,     4,   256,   133,     5,
      -1,     4,   256,   231,   374,   381,   373,   373,    -1,     4,
     256,   291,   374,   381,   374,   383,    -1,     4,   267,    -1,
       4,   267,   218,    -1,     4,   293,     5,    -1,     4,   295,
       5,    -1,     4,   295,   255,   366,    -1,     4,   307,    -1,
       4,   309,    -1,     4,   315,    26,   366,    -1,     4,   315,
     231,   374,   381,   373,   374,   383,   364,   369,    -1,     4,
     349,     4,    -1,   168,    -1,   168,   364,   364,    -1,   179,
     521,    -1,   180,   522,    -1,   201,   523,    -1,   238,   366,
      -1,   240,   526,   366,    -1,   240,   526,   366,   364,   364,
      -1,   255,    39,   364,   364,    -1,   255,   200,   364,   364,
       4,    -1,   255,   112,    -1,   260,   530,    -1,   267,   531,
      -1,   274,   532,    -1,     5,    66,     5,    -1,     5,    80,
      -1,     5,   100,    -1,     5,    89,    -1,     5,   132,     5,
      -1,     5,   153,    -1,     5,   153,   218,    -1,     5,   201,
     364,   364,    -1,     5,   201,   136,    -1,     5,   201,    35,
      -1,     5,   201,   301,   374,   381,   373,    -1,     5,   240,
     526,   366,    -1,     5,   267,    -1,     5,   267,   218,    -1,
       5,   307,    -1,     5,   309,    -1,   293,   106,     5,     5,
      -1,   293,   100,     5,    -1,   293,   100,    16,    -1,   293,
       5,    -1,   293,   310,     5,    -1,   224,    -1,   224,   374,
      -1,   306,    -1,   307,    16,    -1,   309,    16,    -1,   349,
       4,    -1,   267,    -1,   309,    -1,   153,    -1,   307,    -1,
      39,   201,    -1,   201,    -1,   112,   201,    -1,    39,   106,
      -1,   106,    -1,   112,   106,    -1,    39,   255,    -1,   255,
      -1,   112,   255,    -1,   100,    -1,   295,    -1,    66,    -1,
     349,    -1,   240,    -1,   132,    -1,   168,    -1,   310,    -1,
      -1,     4,    -1,    29,   366,    -1,   245,   364,    -1,   164,
       4,    -1,   219,     4,   364,    -1,    62,   364,   364,   364,
     527,    -1,   110,   364,   364,   364,   364,   368,   527,    -1,
      48,   364,   364,   364,   364,   368,   527,    -1,   233,   364,
     364,   364,   364,   527,    -1,   266,   364,   364,   364,   364,
     527,    -1,   177,   364,   364,   364,   364,   527,    -1,   315,
     364,   364,   364,   364,   527,    -1,   295,   364,   364,   368,
     527,    -1,    62,   231,   364,   364,   388,   527,    -1,    48,
     231,   364,   364,   388,   527,    -1,   103,   231,   364,   364,
     388,   527,    -1,    85,   231,   364,   364,   388,   527,    -1,
     360,   231,   364,   364,   388,   527,    -1,    26,   231,   364,
     364,   388,   527,    -1,    51,   231,   364,   364,   388,   527,
      -1,   256,   364,   364,   364,   364,   374,   381,   374,   383,
       5,   527,    -1,    74,   364,   364,   364,   374,   381,   527,
      -1,   239,   364,   364,   364,   364,   364,   527,    -1,    21,
     364,   364,   364,   364,     4,   527,    -1,   111,   364,   364,
     364,   364,   364,     4,   368,   527,    -1,    49,   364,   364,
     364,   364,   364,     4,   368,   527,    -1,    82,   364,   364,
     369,   369,     4,   364,   364,     4,   527,    -1,   114,   364,
     364,   369,   369,     4,   364,   364,   364,     4,   368,   527,
      -1,    52,   364,   364,   369,   369,     4,   364,   364,   364,
       4,   368,   527,    -1,    75,   527,    -1,   294,   510,    -1,
       5,   364,   364,    -1,   313,     5,   364,   364,    -1,   364,
     364,   313,     5,    -1,     5,   374,   381,   373,    -1,    -1,
     267,    -1,    16,    -1,    39,   364,   364,     4,    -1,   200,
     364,   364,     4,    -1,   112,    -1,   105,    -1,   351,    -1,
      63,    -1,   259,    -1,   258,    -1,   242,    -1,   352,    -1,
      60,   515,    -1,    66,    -1,   132,    -1,   115,    -1,   147,
     364,   364,    -1,   158,   364,   364,    -1,     4,    19,    82,
       5,     5,     5,   374,     4,    -1,     4,    19,   155,     5,
       5,     4,    -1,     4,    19,   229,     5,     5,     5,     5,
     374,   381,   390,    -1,     4,    19,   230,     5,     5,   374,
     390,    -1,     4,    19,   244,     5,     5,     5,   374,    -1,
       4,    19,   287,   374,   381,    -1,   158,    16,    -1,     4,
      20,    -1,     4,    20,   376,    -1,     4,    20,   374,   381,
      -1,     4,    21,   245,   374,   383,    -1,     4,    49,   245,
     374,   383,    -1,     4,    48,   245,   374,   383,    -1,     4,
      52,    20,    -1,     4,    52,    20,   376,    -1,     4,    52,
      20,   374,   381,    -1,     4,    52,   245,   374,   383,    -1,
       4,    59,   374,   381,   382,    -1,     4,    62,   245,   374,
     383,    -1,     4,    66,    -1,     4,    74,    26,    -1,     4,
      74,   170,    -1,     4,    74,   245,   374,   383,    -1,     4,
      74,   291,    -1,     4,    75,   142,    -1,     4,    82,    20,
      -1,     4,    82,    20,   376,    -1,     4,    82,    20,   374,
     381,    -1,     4,    82,   245,   374,   383,    -1,     4,   110,
     245,   374,   383,    -1,     4,   111,   245,   374,   383,    -1,
       4,   114,    20,    -1,     4,   114,    20,   376,    -1,     4,
     114,    20,   374,   381,    -1,     4,   114,   245,   374,   383,
      -1,     4,   132,    -1,     4,   153,    -1,     4,   177,    26,
      -1,     4,   177,   172,   374,   383,    -1,     4,   177,   231,
     374,   381,   382,    -1,     4,   186,   172,   364,   374,   383,
      -1,     4,   231,   270,    -1,     4,   231,   277,    -1,     4,
     239,   231,   374,   381,   382,    -1,     4,   239,   172,   374,
     383,    -1,     4,   239,   299,   374,   383,    -1,     4,   240,
      -1,     4,   240,   526,    -1,     4,   256,   133,    -1,     4,
     256,   172,   374,   383,    -1,     4,   256,   231,   374,   381,
     382,    -1,     4,   256,   291,    -1,     4,   267,    -1,     4,
     293,    -1,     4,   293,     4,    -1,     4,   295,    -1,     4,
     295,   255,    -1,     4,   305,    -1,     4,   315,    26,    -1,
       4,   315,   172,   374,   383,    -1,     4,   315,   231,   374,
     381,   382,    -1,     4,   349,    -1,   153,   516,    -1,   153,
     214,    -1,   214,    -1,   233,   266,   364,   364,    -1,   266,
     266,   364,   364,    -1,   238,    -1,   240,   526,    -1,   267,
     517,    -1,   267,   214,    -1,   274,   518,    -1,     5,    66,
      -1,     5,   132,    -1,     5,   158,    -1,     5,   240,   526,
      -1,     5,   293,    -1,     5,   293,   214,    -1,   293,    16,
      -1,   293,    99,   202,    -1,   349,    -1,    29,    -1,   245,
      -1,   164,    -1,   219,    -1,    -1,   364,   364,    -1,    -1,
     364,   364,    -1,    -1,   295,    -1,    -1,    -1,   232,    -1,
     247,    -1,   311,    -1,    57,    -1,   134,    -1,   513,   374,
     381,   382,   366,   528,   535,    -1,   267,   513,   374,   381,
     382,   366,   528,   535,    -1,   513,     5,    -1,   513,     5,
       4,     5,   374,   381,    -1,   513,     4,    -1,   513,     4,
       4,     5,   374,   381,    -1,   127,     5,    -1,   127,     5,
       5,    -1,   364,   364,    -1,   136,    -1,    35,    -1,    39,
     364,   364,    -1,   200,   364,   364,    -1,   112,    -1,   301,
     374,   381,   373,    -1,   524,   525,    -1,   525,    -1,   526,
     361,   366,    -1,    66,   361,     5,    -1,    93,   361,     4,
       4,    -1,   349,   361,     4,    -1,   132,   361,     5,    -1,
     295,   361,     5,    -1,   538,    -1,   539,    -1,   209,    -1,
     267,    -1,   153,    -1,    92,    -1,   129,    -1,   106,    -1,
     201,    -1,   255,    -1,   100,    -1,   161,    -1,   283,    -1,
     123,    -1,   519,    -1,   519,   524,    -1,    -1,    -1,   529,
     533,    -1,     5,   513,   374,   381,   382,   366,    -1,   267,
       5,   513,   374,   381,   382,   366,    -1,   294,     5,    -1,
      16,    -1,   218,   364,   364,    -1,   302,    -1,   302,   364,
     364,    -1,   125,    -1,   171,    -1,   366,    -1,   295,   366,
      -1,   533,   534,    -1,   534,    -1,   526,   361,   366,    -1,
      -1,    -1,   536,   537,    -1,   537,   538,    -1,   538,    -1,
     293,   361,     5,    -1,    55,   361,   507,     5,     5,    -1,
      64,    -1,    66,     5,    -1,   187,   377,    -1,   246,   364,
     364,    -1,   291,   374,    -1,   300,   364,    -1,    45,   378,
      -1,   187,     4,    -1,   360,    -1,   358,    -1,   352,    -1,
     209,    -1,   364,   364,   364,   364,    -1,   364,   364,    -1,
     376,   364,   364,    -1,   374,   381,   373,    -1,   301,   543,
      -1,    38,   364,   364,    -1,   200,   544,    -1,   238,   366,
      -1,   364,   364,    -1,   376,   364,   364,    -1,   374,   381,
     373,    -1,    39,   364,   364,    -1,   364,   364,    -1,   112,
     364,   364,    -1,   366,    -1,   320,   375,   381,    -1,     5,
       4,     4,    -1,   310,    -1,    70,   548,    -1,   173,     4,
      -1,   252,     4,    -1,   261,   364,    -1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,    -1,     4,     4,     4,
       4,     4,     4,    -1,    54,    -1,   144,    -1,   253,    -1,
      90,    -1,   153,   550,    -1,   267,   551,    -1,    39,   364,
     364,    -1,   200,   364,   364,    -1,   112,    -1,   272,   112,
      -1,    39,   364,   364,    -1,   200,   364,   364,    -1,   112,
      -1,   272,   112,    -1,   195,    -1,    12,    -1,   209,    -1,
      33,    -1,   108,    -1,    61,     5,    -1,   291,   374,    -1,
     314,     4,     4,     4,    -1,   364,    -1,   364,    98,    -1,
     200,   556,    -1,   301,   364,    -1,   301,   364,    98,    -1,
      39,    -1,   364,    -1,   112,    -1,    25,   558,    -1,   127,
     560,    -1,   213,   570,    -1,   113,   571,    -1,   226,     5,
      -1,   122,     5,   391,    -1,    61,     5,   391,    -1,   281,
       4,   391,    -1,   253,    87,   559,    -1,   122,     5,   391,
      -1,    61,     5,   391,    -1,   281,     4,   391,    -1,   561,
      -1,   160,   561,    -1,   292,   562,    -1,   278,   563,    -1,
     118,    87,   564,    -1,   198,   565,    -1,   253,   160,   567,
      -1,   253,    87,   568,    -1,   249,   569,    -1,   122,     5,
      -1,    61,     5,    -1,   281,     4,    -1,   122,     5,    -1,
      61,     5,    -1,   281,     4,    -1,   122,     5,    -1,    61,
       5,    -1,   281,     4,    -1,   122,     5,    -1,    61,     5,
      -1,   281,     4,    -1,   160,   566,    -1,   122,     5,     4,
      -1,    61,     5,     4,    -1,   281,     4,     4,    -1,   122,
       5,    -1,    61,     5,    -1,   281,     4,    -1,   122,     5,
      -1,    61,     5,    -1,   281,     4,    -1,   122,     5,    -1,
      61,     5,    -1,   281,     4,    -1,   122,     5,    -1,    61,
       5,    -1,   281,     4,    -1,   122,     5,   391,    -1,    61,
       5,   391,    -1,   281,     4,   391,    -1,   122,     5,     5,
     391,    -1,   573,     4,     4,   364,   364,   369,    -1,   573,
       4,    -1,   100,    -1,    50,    -1,   303,    -1,   140,    -1,
     109,    -1,    -1,     4,   364,   364,   364,   364,    -1,   212,
      -1,   212,     4,   364,   364,   364,   364,    -1,   127,   278,
     575,    -1,     4,    -1,     4,     4,    -1,   364,   374,    -1,
     364,   364,    -1,   301,   364,   364,    -1,   375,   381,   382,
      -1,    15,   580,    -1,   251,     4,    -1,   248,   579,    -1,
      22,   578,    -1,     4,     4,    -1,     4,     5,    -1,   295,
       4,     5,    -1,     4,     4,    -1,     4,     5,    -1,   295,
       4,     5,    -1,     4,    -1,     4,   375,   381,    -1,   301,
       4,   375,   381,    -1,   232,    64,    -1,   237,    -1,   364,
     364,    -1,   364,   364,    11,   364,   364,    -1,   364,   364,
      11,   376,   364,   364,    -1,   364,   364,    11,   374,   381,
     373,    -1,   301,   583,    -1,   126,    -1,   126,   364,    -1,
     364,   364,    -1,   364,   364,    11,   364,   364,    -1,   364,
     364,    11,   376,   364,   364,    -1,   364,   364,    11,   374,
     381,   373,    -1
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
     762,   763,   764,   765,   766,   767,   771,   772,   775,   776,
     779,   780,   783,   784,   788,   789,   790,   791,   792,   793,
     794,   795,   798,   799,   802,   803,   804,   806,   808,   809,
     810,   812,   816,   817,   820,   821,   823,   826,   828,   834,
     835,   836,   839,   840,   841,   844,   845,   846,   847,   848,
     849,   850,   856,   857,   860,   861,   862,   863,   864,   867,
     868,   869,   870,   873,   874,   879,   884,   891,   893,   895,
     896,   897,   900,   902,   905,   906,   909,   910,   911,   912,
     913,   916,   918,   920,   925,   930,   933,   934,   937,   938,
     939,   946,   947,   948,   949,   952,   953,   956,   957,   960,
     961,   964,   966,   970,   971,   974,   976,   977,   978,   979,
     982,   983,   985,   986,   987,   990,   992,   994,   995,   997,
     999,  1001,  1003,  1007,  1010,  1011,  1012,  1013,  1016,  1017,
    1020,  1023,  1024,  1025,  1026,  1027,  1028,  1029,  1030,  1031,
    1032,  1033,  1034,  1035,  1036,  1037,  1038,  1039,  1040,  1041,
    1042,  1043,  1044,  1045,  1046,  1047,  1048,  1049,  1050,  1051,
    1052,  1053,  1055,  1056,  1057,  1058,  1059,  1060,  1061,  1063,
    1064,  1065,  1068,  1070,  1074,  1076,  1080,  1081,  1082,  1083,
    1084,  1085,  1086,  1087,  1090,  1091,  1092,  1095,  1098,  1099,
    1101,  1103,  1104,  1105,  1106,  1107,  1108,  1115,  1116,  1119,
    1120,  1121,  1124,  1125,  1128,  1131,  1132,  1134,  1138,  1139,
    1140,  1143,  1147,  1149,  1150,  1151,  1152,  1153,  1154,  1155,
    1156,  1157,  1160,  1161,  1162,  1165,  1166,  1169,  1171,  1179,
    1181,  1183,  1187,  1188,  1190,  1193,  1196,  1197,  1201,  1203,
    1206,  1211,  1212,  1213,  1217,  1218,  1219,  1222,  1223,  1224,
    1227,  1228,  1230,  1231,  1232,  1233,  1234,  1235,  1236,  1237,
    1238,  1239,  1241,  1242,  1245,  1246,  1249,  1250,  1251,  1252,
    1255,  1256,  1259,  1261,  1264,  1268,  1269,  1270,  1272,  1274,
    1278,  1279,  1280,  1283,  1284,  1285,  1286,  1287,  1288,  1289,
    1292,  1295,  1296,  1297,  1300,  1301,  1302,  1303,  1304,  1305,
    1308,  1309,  1310,  1311,  1312,  1313,  1314,  1317,  1318,  1321,
    1322,  1325,  1326,  1329,  1330,  1333,  1334,  1335,  1338,  1339,
    1342,  1343,  1346,  1349,  1357,  1358,  1361,  1362,  1363,  1364,
    1365,  1366,  1367,  1368,  1369,  1370,  1371,  1372,  1373,  1374,
    1375,  1376,  1377,  1378,  1381,  1384,  1385,  1388,  1389,  1390,
    1391,  1394,  1395,  1396,  1397,  1400,  1401,  1402,  1403,  1404,
    1405,  1408,  1409,  1410,  1411,  1412,  1413,  1415,  1416,  1421,
    1422,  1425,  1427,  1429,  1432,  1433,  1434,  1435,  1436,  1437,
    1440,  1442,  1444,  1446,  1447,  1449,  1451,  1453,  1455,  1457,
    1460,  1461,  1462,  1463,  1464,  1465,  1467,  1468,  1469,  1472,
    1475,  1477,  1479,  1481,  1483,  1485,  1487,  1489,  1492,  1494,
    1496,  1498,  1499,  1500,  1501,  1502,  1505,  1506,  1507,  1508,
    1509,  1510,  1511,  1513,  1515,  1516,  1517,  1520,  1521,  1522,
    1523,  1524,  1525,  1527,  1528,  1529,  1532,  1533,  1534,  1535,
    1536,  1539,  1542,  1545,  1548,  1551,  1554,  1557,  1560,  1563,
    1568,  1571,  1574,  1577,  1580,  1583,  1586,  1589,  1592,  1595,
    1598,  1603,  1606,  1609,  1612,  1615,  1618,  1621,  1624,  1627,
    1632,  1634,  1636,  1638,  1640,  1642,  1647,  1649,  1651,  1655,
    1658,  1661,  1664,  1667,  1670,  1673,  1676,  1679,  1682,  1685,
    1690,  1691,  1692,  1693,  1694,  1695,  1696,  1698,  1700,  1701,
    1702,  1705,  1706,  1707,  1708,  1709,  1710,  1712,  1713,  1714,
    1717,  1719,  1721,  1722,  1724,  1726,  1730,  1731,  1734,  1735,
    1736,  1739,  1742,  1743,  1744,  1745,  1746,  1747,  1748,  1751,
    1759,  1760,  1761,  1762,  1764,  1766,  1767,  1767,  1768,  1769,
    1770,  1771,  1772,  1774,  1775,  1777,  1780,  1783,  1784,  1785,
    1788,  1791,  1794,  1798,  1801,  1804,  1807,  1811,  1816,  1821,
    1823,  1825,  1826,  1828,  1830,  1832,  1834,  1835,  1837,  1839,
    1843,  1848,  1850,  1852,  1854,  1856,  1858,  1860,  1862,  1864,
    1866,  1868,  1871,  1872,  1874,  1876,  1877,  1879,  1881,  1882,
    1883,  1885,  1887,  1888,  1889,  1891,  1892,  1895,  1899,  1902,
    1905,  1909,  1914,  1920,  1921,  1922,  1924,  1925,  1929,  1931,
    1932,  1933,  1936,  1939,  1942,  1944,  1946,  1951,  1954,  1955,
    1956,  1959,  1963,  1964,  1966,  1967,  1968,  1970,  1971,  1973,
    1974,  1979,  1981,  1982,  1984,  1985,  1986,  1987,  1988,  1989,
    1991,  1993,  1995,  1996,  1997,  1999,  2001,  2002,  2003,  2004,
    2005,  2006,  2007,  2008,  2009,  2010,  2011,  2013,  2015,  2016,
    2017,  2018,  2020,  2021,  2022,  2023,  2024,  2026,  2027,  2028,
    2029,  2030,  2031,  2034,  2035,  2036,  2037,  2038,  2039,  2040,
    2041,  2042,  2043,  2044,  2045,  2046,  2047,  2048,  2049,  2050,
    2051,  2052,  2053,  2054,  2057,  2058,  2059,  2060,  2061,  2062,
    2070,  2077,  2086,  2095,  2102,  2109,  2117,  2125,  2132,  2137,
    2142,  2147,  2152,  2157,  2162,  2168,  2178,  2188,  2198,  2205,
    2215,  2225,  2234,  2246,  2259,  2264,  2267,  2269,  2271,  2276,
    2280,  2281,  2282,  2288,  2290,  2292,  2295,  2296,  2297,  2298,
    2299,  2300,  2301,  2304,  2305,  2306,  2307,  2308,  2309,  2311,
    2313,  2315,  2317,  2319,  2321,  2324,  2325,  2326,  2327,  2329,
    2332,  2334,  2336,  2337,  2338,  2340,  2343,  2346,  2348,  2349,
    2350,  2351,  2353,  2354,  2355,  2356,  2357,  2359,  2361,  2363,
    2366,  2367,  2368,  2370,  2373,  2374,  2375,  2376,  2378,  2381,
    2385,  2386,  2387,  2390,  2393,  2395,  2396,  2397,  2398,  2400,
    2403,  2404,  2406,  2407,  2408,  2409,  2410,  2412,  2413,  2415,
    2418,  2419,  2420,  2421,  2422,  2424,  2426,  2427,  2428,  2429,
    2431,  2433,  2434,  2435,  2436,  2437,  2438,  2440,  2441,  2443,
    2446,  2447,  2448,  2449,  2452,  2453,  2456,  2457,  2460,  2461,
    2464,  2477,  2478,  2482,  2483,  2487,  2488,  2491,  2495,  2501,
    2503,  2506,  2508,  2511,  2513,  2517,  2518,  2519,  2520,  2521,
    2522,  2523,  2527,  2528,  2531,  2532,  2533,  2534,  2535,  2536,
    2537,  2538,  2541,  2542,  2543,  2544,  2545,  2546,  2547,  2548,
    2549,  2550,  2551,  2552,  2555,  2556,  2559,  2560,  2560,  2563,
    2565,  2567,  2570,  2571,  2572,  2573,  2574,  2575,  2578,  2579,
    2582,  2583,  2586,  2590,  2591,  2591,  2594,  2595,  2598,  2601,
    2605,  2606,  2607,  2608,  2609,  2610,  2611,  2612,  2618,  2619,
    2620,  2621,  2624,  2626,  2627,  2632,  2634,  2635,  2636,  2637,
    2640,  2641,  2646,  2650,  2651,  2652,  2655,  2656,  2661,  2662,
    2665,  2667,  2668,  2669,  2674,  2676,  2682,  2683,  2684,  2685,
    2688,  2689,  2692,  2694,  2696,  2697,  2700,  2702,  2703,  2704,
    2707,  2708,  2711,  2712,  2713,  2716,  2717,  2718,  2721,  2722,
    2723,  2724,  2725,  2728,  2729,  2730,  2733,  2734,  2735,  2736,
    2737,  2740,  2742,  2744,  2746,  2749,  2751,  2753,  2756,  2757,
    2758,  2759,  2760,  2761,  2762,  2763,  2764,  2767,  2768,  2769,
    2772,  2773,  2774,  2777,  2778,  2779,  2782,  2783,  2784,  2787,
    2788,  2789,  2790,  2793,  2794,  2795,  2798,  2799,  2800,  2803,
    2804,  2805,  2808,  2809,  2810,  2813,  2815,  2817,  2821,  2825,
    2827,  2832,  2835,  2836,  2837,  2838,  2841,  2842,  2845,  2847,
    2849,  2852,  2853,  2854,  2857,  2858,  2861,  2863,  2864,  2865,
    2866,  2869,  2870,  2871,  2874,  2875,  2876,  2879,  2880,  2885,
    2887,  2890,  2897,  2898,  2900,  2905,  2907,  2910,  2911,  2912,
    2913,  2915,  2920
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
  "SYNC_", "SYSTEM_", "TABLE_", "TAG_", "TEMPLATE_", "TEXT_", "THREADS_",
  "THREED_", "THRESHOLD_", "THICK_", "TRANSPARENCY_", "TO_", "TOGGLE_",
  "TOPHAT_", "TRUE_", "TYPE_", "UNDO_", "UNHIGHLITE_", "UNLOAD_",
  "UNSELECT_", "UPDATE_", "USER_", "VALUE_", "VAR_", "VIEW_", "VECTOR_",
  "VERSION_", "VERTEX_", "VERTICAL_", "WARP_", "WCS_", "WCSA_", "WCSB_",
  "WCSC_", "WCSD_", "WCSE_", "WCSF_", "WCSG_", "WCSH_", "WCSI_", "WCSJ_",
  "WCSK_", "WCSL_", "WCSM_", "WCSN_", "WCSO_", "WCSP_", "WCSQ_", "WCSR_",
  "WCSS_", "WCST_", "WCSU_", "WCSV_", "WCSW_", "WCSX_", "WCSY_", "WCSZ_",
  "WCS0_", "WFPC2_", "WIDTH_", "WIN32_", "XML_", "XY_", "YES_", "ZERO_",
  "ZMAX_", "ZSCALE_", "ZOOM_", "'Y'", "'N'", "'X'", "'='", "$accept",
  "command", "numeric", "debug", "yesno", "fileNameType", "optangle",
  "angle", "sexagesimal", "hms", "dms", "coord", "coordSystem",
  "wcsSystem", "internalSystem", "maskType", "maskBlend", "scaleType",
  "minmaxMode", "skyFrame", "skyFormat", "skyDist", "shmType", "incrLoad",
  "layerType", "pointShape", "pointSize", "analysisTask", "analysisMethod",
  "endian", "threed", "threedBorder", "threedCompass", "threedHighlite",
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
     392,   392,   392,   392,   392,   392,   393,   393,   394,   394,
     395,   395,   396,   396,   397,   397,   397,   397,   397,   397,
     397,   397,   398,   398,   399,   399,   399,   399,   399,   399,
     399,   399,   400,   400,   401,   401,   401,   401,   401,   402,
     402,   402,   403,   403,   403,   404,   404,   404,   404,   404,
     404,   404,   405,   405,   406,   406,   406,   406,   406,   407,
     407,   407,   407,   408,   408,   408,   408,   409,   409,   409,
     409,   409,   410,   410,   411,   411,   412,   412,   412,   412,
     412,   413,   413,   413,   413,   413,   414,   414,   415,   415,
     415,   416,   416,   416,   416,   417,   417,   418,   418,   419,
     419,   420,   420,   421,   421,   421,   421,   421,   421,   421,
     422,   422,   422,   422,   422,   423,   423,   423,   423,   423,
     423,   423,   423,   424,   425,   425,   425,   425,   426,   426,
     427,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   429,   429,   430,   430,   431,   431,   431,   431,
     431,   431,   431,   431,   432,   432,   432,   433,   434,   434,
     434,   434,   434,   434,   434,   434,   434,   435,   435,   436,
     436,   436,   437,   437,   438,   439,   439,   439,   440,   440,
     440,   441,   442,   442,   442,   442,   442,   442,   442,   442,
     442,   442,   443,   443,   443,   444,   444,   445,   445,   446,
     446,   446,   447,   447,   447,   448,   449,   449,   450,   450,
     450,   451,   451,   451,   452,   452,   452,   453,   453,   453,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   455,   455,   456,   456,   456,   456,
     457,   457,   458,   458,   458,   459,   459,   459,   459,   459,
     460,   460,   460,   461,   461,   461,   461,   461,   461,   461,
     462,   463,   463,   463,   464,   464,   464,   464,   464,   464,
     465,   465,   465,   465,   465,   465,   465,   466,   466,   467,
     467,   468,   468,   469,   469,   470,   470,   470,   471,   471,
     472,   472,   473,   473,   474,   474,   475,   475,   475,   475,
     475,   475,   475,   475,   475,   475,   475,   475,   475,   475,
     475,   475,   475,   475,   476,   477,   477,   478,   478,   478,
     478,   479,   479,   479,   479,   480,   480,   480,   480,   480,
     480,   481,   481,   481,   481,   481,   481,   481,   481,   482,
     482,   483,   483,   483,   484,   484,   484,   484,   484,   484,
     485,   485,   485,   485,   485,   485,   485,   485,   485,   485,
     486,   486,   486,   486,   486,   486,   486,   486,   486,   487,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   491,   491,   491,   491,
     491,   492,   492,   492,   492,   492,   492,   492,   492,   492,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   496,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     499,   499,   499,   499,   499,   499,   500,   500,   501,   501,
     501,   502,   503,   503,   503,   503,   503,   503,   503,   504,
     505,   505,   505,   505,   505,   505,   506,   505,   505,   505,
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
     505,   505,   505,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   508,   508,   508,   508,   508,   508,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   510,   510,   510,   510,
     511,   511,   511,   512,   512,   512,   513,   513,   513,   513,
     513,   513,   513,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     514,   514,   514,   514,   514,   514,   514,   514,   514,   514,
     515,   515,   515,   515,   516,   516,   517,   517,   518,   518,
     519,   520,   520,   520,   520,   520,   520,   521,   521,   522,
     522,   522,   522,   522,   522,   523,   523,   523,   523,   523,
     523,   523,   524,   524,   525,   525,   525,   525,   525,   525,
     525,   525,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   527,   527,   528,   529,   528,   530,
     530,   530,   531,   531,   531,   531,   531,   531,   532,   532,
     533,   533,   534,   535,   536,   535,   537,   537,   538,   539,
     540,   540,   540,   540,   540,   540,   540,   540,   541,   541,
     541,   541,   542,   542,   542,   542,   542,   542,   542,   542,
     543,   543,   543,   544,   544,   544,   545,   545,   545,   545,
     546,   546,   546,   546,   547,   547,   548,   548,   548,   548,
     549,   549,   550,   550,   550,   550,   551,   551,   551,   551,
     552,   552,   553,   553,   553,   554,   554,   554,   555,   555,
     555,   555,   555,   556,   556,   556,   557,   557,   557,   557,
     557,   558,   558,   558,   558,   559,   559,   559,   560,   560,
     560,   560,   560,   560,   560,   560,   560,   561,   561,   561,
     562,   562,   562,   563,   563,   563,   564,   564,   564,   565,
     565,   565,   565,   566,   566,   566,   567,   567,   567,   568,
     568,   568,   569,   569,   569,   570,   570,   570,   571,   572,
     572,   572,   573,   573,   573,   573,   574,   574,   574,   574,
     574,   575,   575,   575,   576,   576,   577,   577,   577,   577,
     577,   578,   578,   578,   579,   579,   579,   580,   580,   580,
     580,   581,   582,   582,   582,   582,   582,   583,   583,   583,
     583,   583,   583
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
       2,     2,     2,     2,     2,     2,     1,     2,     1,     2,
       1,     2,     2,     6,     2,     4,     2,     2,     2,     3,
       2,     2,     1,     2,     1,     2,     4,     5,     2,     3,
       5,     6,     1,     1,     1,     7,    11,     8,    12,     1,
       2,     2,     1,     1,     2,     2,     2,     2,     3,     3,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     1,     3,     2,     2,     2,     5,     9,     1,
       2,     1,     5,     9,     1,     2,     2,     2,     2,     2,
       2,    13,    13,    12,    12,     1,     0,     1,     1,     4,
       6,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     3,     4,     0,     6,     8,     2,     3,     3,     3,
       0,     4,     4,     4,     4,     3,     3,     1,     3,     5,
       4,     4,     3,     2,     0,     1,     1,     1,     1,     1,
       3,     0,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     2,     2,
       4,     3,     2,     2,     2,     1,     3,     2,     2,     1,
       2,     8,     2,     1,     2,     1,     2,     1,     4,     3,
       2,     1,     7,     8,     7,     8,     1,     1,     1,     2,
       1,     1,     2,     1,     0,     2,     2,     1,     0,     2,
       2,     1,     1,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     0,     1,     2,     1,     4,     5,     0,     2,
       1,     5,     2,     2,     1,     1,     1,     2,     1,     2,
       1,     1,     0,     1,     1,     0,     1,     5,     6,     3,
       6,     3,     1,     3,     1,     1,     1,     3,     6,     7,
       5,     2,     1,     5,     4,     1,     3,     0,     1,     2,
       1,     4,     1,     2,     1,     2,     3,     2,     1,     2,
       1,     4,     2,     1,     1,     3,     1,     2,     3,     2,
       0,     1,     1,     4,     2,     0,     1,     3,     4,     4,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     1,
       2,     2,     2,     2,     1,     1,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     2,     2,     0,     1,
       2,     1,     6,     5,     1,     1,     1,     2,     2,     2,
       1,     1,     1,     1,     2,     1,     1,     1,     2,     1,
       1,     1,     2,     2,     2,     0,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     1,
       2,     3,     1,     2,     2,     4,     5,     1,    10,     1,
       2,     3,     3,     2,     2,     2,     2,     2,     2,     2,
       4,     4,     4,     3,     3,     5,     4,     4,     4,     3,
       3,     3,     3,     2,     2,     4,     3,     3,     3,     3,
       4,     4,     4,     4,     5,     4,     6,     7,     4,     4,
       5,     2,     3,     3,     3,     2,     3,     3,     3,     3,
       4,     3,     5,     6,     3,     3,     4,     3,     3,     3,
       3,     3,     5,     3,     3,     4,     3,     2,     2,     1,
       3,     4,     4,     4,     4,     4,     6,     4,     4,     5,
       4,     4,     4,     4,     5,     4,     6,     7,     4,     4,
       5,     5,     5,     5,     5,     5,     7,     5,     5,     6,
       4,     4,     4,     4,     4,     6,     4,     4,     5,     5,
       5,     5,     5,     6,     5,     7,     8,     5,     5,     6,
       3,     3,     3,     3,     4,     3,     5,     6,     3,     3,
       4,     3,     3,     3,     3,     3,     5,     3,     3,     4,
       4,     4,     3,     5,     4,     4,     2,     3,     6,     6,
       1,     1,     1,     2,     2,     2,     3,     3,     2,    12,
       2,     2,     1,     3,     4,     2,     0,     3,     1,     2,
       2,     2,     2,     2,     4,     4,     4,     3,     4,     5,
       8,     6,     9,     6,     7,    10,    11,    12,     9,     5,
       6,     3,     5,     5,     6,     5,     4,     9,    10,    11,
       9,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       7,     7,     2,     4,     4,     4,     4,     5,     4,     4,
       5,     5,     3,     4,     4,     4,     7,     9,     6,    10,
      11,    12,     9,     3,     2,     3,     5,     7,     4,     3,
       3,     6,     7,     7,     4,     4,     9,     4,     3,     4,
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
       5,     5,     3,     4,     5,     5,     5,     5,     2,     3,
       3,     5,     3,     3,     3,     4,     5,     5,     5,     5,
       3,     4,     5,     5,     2,     2,     3,     5,     6,     6,
       3,     3,     6,     5,     5,     2,     3,     3,     5,     6,
       3,     2,     2,     3,     2,     3,     2,     3,     5,     6,
       2,     2,     2,     1,     4,     4,     1,     2,     2,     2,
       2,     2,     2,     2,     3,     2,     3,     2,     3,     1,
       1,     1,     1,     1,     0,     2,     0,     2,     0,     1,
       0,     0,     1,     1,     1,     1,     1,     7,     8,     2,
       6,     2,     6,     2,     3,     2,     1,     1,     3,     3,
       1,     4,     2,     1,     3,     3,     4,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     0,     0,     2,     6,
       7,     2,     1,     3,     1,     3,     1,     1,     1,     2,
       2,     1,     3,     0,     0,     2,     2,     1,     3,     5,
       1,     2,     2,     3,     2,     2,     2,     2,     1,     1,
       1,     1,     4,     2,     3,     3,     2,     3,     2,     2,
       2,     3,     3,     3,     2,     3,     1,     3,     3,     1,
       2,     2,     2,     2,     9,     6,     1,     1,     1,     1,
       2,     2,     3,     3,     1,     2,     3,     3,     1,     2,
       1,     1,     1,     1,     1,     2,     2,     4,     1,     2,
       2,     2,     3,     1,     1,     1,     2,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     1,     2,
       2,     2,     3,     2,     3,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     3,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     3,     3,     3,     4,     6,
       2,     1,     1,     1,     1,     1,     0,     5,     1,     6,
       3,     1,     2,     2,     2,     3,     3,     2,     2,     2,
       2,     2,     2,     3,     2,     2,     3,     1,     3,     4,
       2,     1,     2,     5,     6,     6,     2,     1,     2,     2,
       5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     8,     9,     0,     0,     0,     0,
       0,   313,     0,     0,     0,     0,     0,     0,   341,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     0,  1051,
       0,     0,     0,     0,     0,     0,     0,     0,  1051,    43,
       0,     0,     0,    48,     0,     0,     0,    52,  1246,    54,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     3,    59,    60,     0,   249,     7,
       0,     0,     0,     0,     0,     0,    10,     0,     0,   279,
     281,     0,     0,    12,   149,   151,   144,   145,   146,   150,
     147,   148,   284,    13,     0,   296,     0,     0,     0,    14,
       0,     0,     0,     0,   320,     0,    15,    72,   101,     0,
     131,   100,    80,    98,     0,    77,    79,    75,   132,    99,
      76,     0,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
      73,    74,    78,   327,   157,   102,     0,    16,     0,    17,
      18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,    61,   339,   338,    19,     0,    20,     0,     0,
       0,   398,   412,     0,   418,     0,     0,     0,     0,     0,
       0,     0,   356,     0,   490,     0,     0,     0,     0,     0,
       0,  1051,     0,   365,     0,   369,     0,     0,     0,   373,
       0,   375,     0,   377,     0,     0,   525,   381,    21,     0,
     531,    22,   536,     0,     0,   555,   540,   541,   542,   543,
     557,   545,   546,   550,   547,     0,   549,   551,     0,     0,
      23,     0,    25,     0,   572,     0,     0,     0,   577,     0,
      27,     0,     0,     0,     0,     0,     0,     0,    29,   731,
      30,     0,     0,     0,     0,     0,     0,   732,    31,     0,
      32,  1055,  1056,  1052,  1053,  1054,     0,   139,  1120,     0,
     133,     0,     0,     0,    34,     0,  1131,  1130,  1129,  1128,
      37,     0,     0,     0,     0,     0,   157,     0,    38,     0,
    1149,     0,  1146,    39,     0,     0,     0,     0,    42,     0,
      41,    40,     0,     0,     0,     0,    45,     0,     0,  1178,
      46,     0,     0,     0,     0,     0,    47,  1242,  1241,  1245,
    1244,  1243,    49,     0,    50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,  1248,    53,     0,
       0,    55,     0,     0,     0,     0,   157,    56,  1271,    57,
       0,     0,    58,     1,     4,     5,     6,   232,     0,   224,
       0,     0,   226,     0,   234,   227,   231,   242,   243,   228,
     244,     0,   230,   252,   253,   251,   250,     0,     0,   272,
       0,   257,   265,   268,   267,   266,   264,   256,   261,   262,
     263,   255,     0,     0,     0,     0,     0,     0,   260,    11,
       0,     0,     0,   280,     0,   285,     0,   295,   286,   297,
     287,   298,   288,   309,   289,     0,     0,   290,     0,    91,
      92,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   316,     0,     0,     0,     0,     0,   159,
     164,   158,   160,   163,   162,   161,     0,     0,   333,    66,
      67,    68,    69,    70,    62,    63,    64,    71,    65,     0,
     342,     0,   394,   390,   386,   387,   391,   388,   393,   343,
     397,   344,   301,   402,   406,   401,   304,   303,   302,     0,
       0,   345,   413,   347,     0,   346,     0,   420,   348,   432,
     424,   435,   425,   426,   428,     0,   430,   431,   157,   349,
       0,     0,   350,     0,     0,   157,   351,   444,   157,   442,
     352,   445,   354,   157,   446,   353,     0,   157,     0,   355,
     464,     0,   462,   480,     0,     0,     0,   468,   460,     0,
     470,   485,   473,   357,   491,   492,   358,   359,     0,     0,
       0,   455,     0,   362,    81,   452,     0,   363,   364,     0,
     499,   493,   498,   494,   495,   496,   497,   367,   368,   500,
     370,     0,   501,   502,   503,   372,   509,   504,   505,   507,
     374,   515,   517,   519,   521,   514,   516,   523,   376,     0,
       0,   528,     0,   380,   157,   530,   537,     0,   538,   556,
     539,   558,   559,   560,   544,   561,   563,   562,   564,   548,
     552,   569,     0,     0,     0,     0,   565,   553,    26,     0,
       0,   574,   573,     0,     0,     0,     0,    28,     0,     0,
     584,     0,   585,     0,     0,     0,     0,     0,   586,     0,
     730,     0,   587,     0,   588,     0,     0,   589,     0,   735,
     734,   733,     0,   738,     0,     0,     0,   904,     0,     0,
       0,   742,   746,   748,   940,     0,     0,     0,     0,   842,
       0,     0,     0,   877,     0,     0,     0,     0,     0,     0,
       0,   879,     0,     0,     0,    33,   142,   143,   141,   140,
    1126,  1121,  1127,   136,   137,   135,   138,   134,  1122,     0,
    1124,  1125,    35,    36,     0,     0,     0,     0,  1138,  1139,
       0,   157,     0,  1136,  1133,     0,     0,     0,   157,  1156,
    1159,  1157,  1158,  1150,  1151,  1152,  1153,     0,     0,     0,
      44,  1175,  1176,     0,  1183,  1185,  1184,  1180,  1181,  1179,
       0,     0,     0,     0,  1186,     0,  1189,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1187,  1198,     0,
       0,     0,  1188,  1190,  1240,  1173,  1174,  1172,   212,     0,
     216,   208,     0,   218,   209,     0,   220,   210,  1171,  1170,
     211,   213,   214,   215,     0,     0,   207,     0,     0,     0,
       0,  1254,  1267,     0,     0,  1257,     0,     0,  1260,     0,
       0,  1259,  1258,   165,  1277,     0,  1276,  1272,   233,   229,
       0,   238,     0,   235,     0,   254,   152,   155,   156,   154,
     153,   269,   270,   271,   259,   258,   274,   276,   275,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   157,     0,
     317,    97,    94,    95,    96,   157,   319,   318,     0,     0,
       0,     0,     0,     0,     0,   332,     0,   328,   326,   325,
     340,   389,     0,     0,   392,   407,   408,   403,   404,   409,
     411,   410,   405,   305,   306,   400,   399,   415,   414,     0,
     419,   433,   434,   423,   436,   429,   427,   422,     0,     0,
     157,   157,   165,   165,   165,   157,     0,     0,   157,   481,
     463,   474,     0,   465,    81,   476,     0,     0,   467,   469,
     157,   486,     0,     0,   472,     0,     0,   361,     0,   457,
      85,    84,   451,     0,     0,     0,     0,   954,   956,   955,
       0,  1044,     0,  1023,     0,  1026,     0,     0,  1046,  1048,
       0,  1039,   366,     0,   506,   508,   518,   511,   520,   512,
     522,   513,   524,   510,     0,     0,   379,   529,   526,   527,
     165,   554,   566,   567,   568,   570,     0,   583,   571,     0,
       0,     0,     0,     0,     0,   178,   178,   172,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   175,   175,   172,
       0,     0,   172,     0,     0,     0,     0,     0,   625,   649,
       0,     0,     0,   621,     0,     0,     0,     0,   178,   172,
       0,     0,   726,     0,   736,   737,   157,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     792,     0,     0,     0,     0,     0,   814,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   832,     0,     0,   837,
     838,     0,     0,     0,   857,   859,   858,     0,   861,     0,
       0,   868,   870,   871,   905,     0,     0,     0,     0,   740,
     741,   948,   946,   951,   950,   949,   947,   952,     0,   745,
       0,   942,   941,   749,     0,   945,     0,   750,   751,   752,
     753,     0,     0,     0,     0,     0,   844,     0,     0,   845,
    1067,     0,  1070,  1066,     0,     0,     0,   846,   878,   847,
    1085,  1090,  1087,  1093,  1086,  1084,  1091,  1088,  1082,  1089,
    1083,  1092,     0,     0,   852,     0,     0,     0,     0,   853,
    1102,  1106,  1107,     0,  1104,   854,     0,  1108,   855,   875,
       0,     0,     0,   880,   881,   882,  1123,  1137,     0,     0,
    1144,  1140,     0,     0,     0,  1135,  1134,  1148,  1147,     0,
       0,  1164,     0,     0,  1160,     0,  1168,     0,     0,  1161,
       0,  1182,   201,   201,     0,   201,     0,  1208,     0,  1207,
    1199,     0,     0,     0,     0,  1203,     0,     0,     0,  1206,
       0,     0,     0,     0,     0,  1201,  1209,     0,     0,     0,
    1200,   201,   201,   201,     0,   217,   219,   221,     0,   222,
       0,    60,     0,  1250,     0,  1255,   157,  1270,     0,  1261,
    1262,     0,  1264,  1265,     0,   166,   167,  1256,  1278,  1279,
       0,   225,     0,   239,     0,     0,     0,     0,   273,     0,
       0,     0,     0,     0,     0,     0,     0,   311,   157,     0,
       0,     0,     0,   157,     0,   331,     0,   330,   396,   395,
       0,     0,     0,   157,     0,   165,   441,   439,   443,   447,
       0,     0,     0,   165,     0,   482,   466,     0,   477,   479,
     168,     0,     0,   360,     0,     0,    60,     0,   456,    83,
      82,     0,     0,   966,     0,     0,     0,     0,     0,     0,
     978,     0,     0,     0,     0,     0,     0,   994,   995,     0,
       0,     0,     0,  1005,     0,  1011,  1012,  1014,  1016,     0,
    1020,  1031,  1032,  1033,     0,  1035,  1040,  1042,  1043,  1041,
     953,     0,  1022,     0,  1021,   965,     0,     0,  1027,     0,
    1029,     0,  1028,  1049,  1030,  1037,     0,     0,   378,     0,
       0,   581,   582,     0,   579,   575,     0,   178,   178,   178,
     179,   180,   593,   594,   174,   173,     0,   178,   178,   178,
       0,   599,   609,   175,   178,   178,   178,   176,   177,   178,
     178,     0,   178,   178,     0,   175,     0,   622,     0,     0,
       0,   648,     0,   647,     0,     0,   624,     0,   623,     0,
       0,     0,     0,   175,   175,   172,     0,     0,   172,     0,
       0,     0,   178,   178,   722,     0,   178,   178,   727,     0,
     191,   192,   193,   194,   195,   196,     0,    89,    90,    88,
     757,     0,     0,     0,     0,     0,   898,   896,   891,     0,
     901,   885,   902,   888,   900,   894,   883,   897,   886,   884,
     903,   899,     0,     0,   771,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   802,     0,
       0,     0,     0,   813,   815,     0,     0,   820,   819,     0,
       0,   181,     0,     0,   157,     0,   828,     0,     0,     0,
       0,   833,   834,   835,     0,     0,     0,   841,   856,   860,
     862,   865,   864,     0,     0,     0,   869,   906,   908,     0,
     907,   743,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1050,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   747,     0,     0,
       0,     0,   843,     0,   157,  1063,  1061,  1059,     0,     0,
     157,  1065,   848,     0,     0,     0,     0,  1101,     0,     0,
    1109,   873,   874,     0,   876,  1143,  1145,  1142,  1141,  1132,
       0,     0,     0,  1165,     0,     0,  1169,  1177,   203,   204,
     205,   206,   202,  1192,  1191,     0,     0,     0,  1194,  1193,
     201,     0,     0,     0,  1202,     0,     0,     0,     0,     0,
    1219,     0,  1233,  1232,  1234,     0,     0,     0,  1205,     0,
       0,     0,  1204,  1214,  1213,  1215,  1211,  1210,  1212,  1236,
    1235,  1237,     0,     0,     0,  1252,  1253,     0,  1268,   157,
    1263,  1266,     0,     0,   157,     0,     0,     0,   236,     0,
       0,     0,     0,   277,     0,     0,     0,   308,   307,     0,
       0,   299,   310,   312,     0,   322,   324,   323,   321,   157,
     329,     0,     0,     0,   165,   157,     0,     0,     0,     0,
     461,   475,   484,     0,   478,   170,   171,   169,   471,     0,
     487,     0,     0,   454,   459,    81,     0,     0,     0,     0,
       0,     0,   157,   967,     0,     0,     0,   972,     0,   157,
       0,   979,   980,     0,   982,   983,   984,     0,     0,     0,
     990,     0,   996,     0,     0,     0,  1000,  1001,     0,     0,
       0,  1006,  1007,     0,     0,  1010,  1013,  1015,  1017,     0,
       0,  1034,  1036,   957,  1045,   958,     0,     0,  1047,  1038,
       0,     0,   534,   535,     0,   576,   580,     0,   590,   591,
     592,   178,   596,   597,   598,     0,     0,     0,   603,   604,
     172,     0,     0,     0,   178,   610,   611,   612,   613,   615,
     175,   618,   619,     0,   178,     0,     0,     0,   175,   175,
     172,     0,     0,     0,     0,   646,     0,   650,     0,     0,
       0,     0,     0,   175,   175,   172,     0,     0,   172,     0,
       0,     0,     0,     0,   175,   175,   172,     0,     0,   172,
       0,     0,     0,     0,     0,   175,   175,   172,     0,     0,
     172,     0,     0,     0,     0,   175,   175,   172,     0,     0,
       0,   175,   626,   627,   628,   629,   631,     0,   634,   635,
       0,   175,     0,     0,   720,   721,   178,   724,   725,     0,
     756,   157,   758,     0,     0,     0,     0,     0,     0,     0,
     890,   887,   893,   892,   889,   895,     0,     0,     0,     0,
       0,   157,   776,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   793,   794,   795,     0,
     799,   796,   798,     0,     0,   804,   803,   805,     0,     0,
       0,     0,     0,     0,   157,   157,   818,   187,   183,   188,
     182,   185,   184,   186,   824,   825,     0,     0,   827,   829,
     157,   157,     0,   836,   839,   157,   157,   863,   867,   909,
     744,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1094,   934,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   935,     0,     0,
       0,     0,     0,   754,   755,   157,   165,  1064,     0,     0,
    1068,  1069,     0,     0,   850,     0,   157,     0,  1103,  1105,
     872,     0,  1162,  1163,  1166,  1167,   201,   201,   201,  1238,
    1217,  1216,  1218,  1221,  1220,  1224,  1223,  1225,  1222,  1230,
    1229,  1231,  1227,  1226,  1228,     0,     0,  1247,     0,  1269,
       0,   157,     0,  1273,     0,     0,   240,     0,   237,     0,
       0,     0,   282,     0,     0,     0,   157,     0,   314,   145,
       0,   416,     0,   437,   165,   168,     0,     0,   450,     0,
     488,   489,     0,   453,     0,     0,     0,     0,     0,   157,
     968,   168,   168,   168,   157,   973,   168,   165,   168,   168,
     157,   985,   168,   168,   168,   157,   991,   168,   168,   157,
       0,   168,   157,   168,   168,   157,   168,   157,  1024,  1025,
       0,     0,   533,     0,   595,   600,   601,   602,     0,   606,
     607,   608,   614,   178,   175,   620,   637,   638,   639,   640,
     641,     0,   643,   644,   175,     0,     0,     0,   175,   175,
     172,     0,     0,     0,     0,     0,     0,   175,   175,   172,
       0,     0,     0,     0,     0,     0,   175,   175,   172,     0,
       0,     0,   175,   178,   178,   178,   178,   178,     0,   178,
     178,     0,   175,   175,   178,   178,   178,   178,   178,     0,
     178,   178,     0,   175,   175,   700,   701,   702,   703,   705,
       0,   708,   709,     0,   175,   711,   712,   713,   714,   715,
       0,   717,   718,   175,   630,   175,     0,   636,     0,     0,
     723,     0,   759,   168,     0,     0,   168,     0,     0,     0,
     769,   168,   772,   773,   168,   775,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   797,
     800,   801,     0,   168,     0,     0,     0,   816,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1095,  1073,     0,  1080,  1081,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   157,     0,     0,    86,     0,     0,   943,   944,   165,
       0,     0,     0,  1071,   849,   851,   165,   157,  1155,  1196,
    1195,  1197,  1239,     0,  1249,  1280,     0,     0,  1275,  1274,
     241,     0,     0,     0,     0,     0,     0,   300,   168,   417,
     421,   438,   440,     0,   448,   483,   157,     0,     0,     0,
       0,     0,     0,   964,   969,   971,   970,   974,   975,   976,
     977,   981,   986,   987,   988,   989,   992,   993,   997,   165,
     168,  1003,   165,  1004,  1008,   165,  1018,   165,     0,   157,
       0,   532,     0,   605,   616,   178,   175,   645,   178,   178,
     178,   178,   178,     0,   178,   178,   175,   178,   178,   178,
     178,   178,     0,   178,   178,   175,   178,   178,   178,   178,
     178,     0,   178,   178,   175,   178,   660,   661,   662,   663,
     665,   175,   668,   669,     0,   178,   178,   689,   690,   691,
     692,   694,   175,   697,   698,     0,   178,   704,   175,     0,
     710,   175,   719,   632,   175,   728,   729,   157,   761,     0,
     168,   763,     0,   157,     0,   770,   774,   157,     0,   781,
     782,   783,   784,   788,   789,   785,   786,   787,     0,     0,
     168,   808,     0,   157,     0,     0,   821,   168,     0,     0,
     168,   168,     0,   866,     0,   189,   189,     0,     0,   189,
       0,   189,  1050,     0,     0,     0,     0,     0,     0,     0,
       0,  1072,     0,     0,   189,   189,     0,     0,     0,     0,
       0,     0,     0,     0,   936,     0,     0,     0,  1050,    87,
       0,   189,     0,  1097,   157,   157,     0,   165,     0,   223,
    1282,  1281,     0,     0,   245,     0,     0,     0,     0,   315,
     449,     0,   334,     0,   960,     0,   197,     0,   998,   999,
    1002,  1009,  1019,   371,     0,   334,     0,   617,   642,   651,
     652,   653,   654,   655,   175,   657,   658,   178,   680,   681,
     682,   683,   684,   175,   686,   687,   178,   671,   672,   673,
     674,   675,   175,   677,   678,   178,   664,   178,   175,   670,
     693,   178,   175,   699,   706,   175,   716,   633,     0,   168,
     764,     0,     0,     0,     0,     0,   790,   791,   806,     0,
       0,     0,   817,   822,     0,   830,   831,   823,   168,     0,
     190,  1050,  1050,    86,     0,  1050,     0,  1050,   910,   157,
       0,  1075,     0,  1078,  1118,  1079,  1077,  1074,     0,  1050,
    1050,    86,     0,     0,  1050,  1050,     0,     0,  1050,   939,
     937,   938,   917,  1050,  1050,  1097,  1113,     0,  1062,  1060,
    1099,     0,     0,     0,     0,   247,     0,   278,     0,   334,
     335,   337,   336,   382,     0,     0,   198,   200,   199,   962,
     963,   334,   384,     0,   178,   659,   178,   688,   178,   679,
     666,   178,   695,   178,   707,     0,   760,   168,   168,     0,
     168,     0,   168,   168,     0,   168,     0,  1050,   923,   919,
    1050,     0,   924,     0,   918,  1050,     0,  1076,     0,   921,
     920,  1050,     0,     0,   915,   913,  1050,   157,   914,   916,
     922,  1113,  1057,     0,     0,  1098,  1111,  1100,  1154,     0,
       0,   283,   301,   304,   302,     0,     0,   383,   959,   157,
     385,   578,   656,   685,   676,   667,   696,   168,   762,   768,
       0,   780,   777,   807,   812,     0,   826,     0,   928,   912,
      86,     0,   926,  1119,     0,   911,    86,     0,   927,     0,
    1058,  1115,  1117,     0,  1110,     0,     0,     0,     0,     0,
       0,   197,     0,   765,   157,   778,   809,   840,  1050,     0,
       0,  1050,     0,   168,  1116,  1112,   246,     0,     0,     0,
       0,     0,   961,   739,   157,   766,   779,   157,   810,   930,
       0,  1050,   929,     0,     0,   248,   294,     0,   293,     0,
     767,   811,    86,   931,    86,  1050,   292,   291,  1050,  1050,
     925,   933,   932
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    54,  1429,   171,   153,   922,  2488,  2489,   433,   434,
     435,   436,   154,   155,   156,   698,   690,    92,   821,   456,
    1227,  1688,  1366,  1379,  1362,  1924,  2591,  1426,  2649,  1593,
     344,   771,   774,   777,   786,    64,   369,   375,   379,   382,
      69,   385,    76,   401,   397,   391,   408,    83,   413,    93,
      99,   418,   420,   422,   490,   875,  1659,   424,   427,   106,
     443,   157,   159,  2643,   175,   177,   218,   917,   956,   479,
     864,   481,   491,   867,   872,   493,   495,   878,   498,   880,
     509,   883,   885,   512,   516,   520,   522,   525,   529,   557,
     553,  1288,   543,   903,   908,   900,  1276,   914,   546,   567,
     570,   575,   580,   588,   947,   949,   951,   953,   593,   958,
     221,   595,  1754,   240,   598,   600,   604,   609,   617,   250,
    1355,   621,   258,   630,  1371,   632,   638,  1003,  1387,   998,
    1795,  1393,  1391,  1797,   999,  1396,  1398,   644,   647,   642,
     260,   268,   270,   685,  1080,  1452,  1069,  1547,  1967,  1083,
    1087,  1078,   942,  1330,  1334,  1342,  1344,  1951,   276,  1096,
    1099,  1107,  2254,  2255,  2256,  1952,  2626,  2627,  1129,  1135,
    1138,  2705,  2706,  2702,  2703,  2751,  2257,  2258,   284,   290,
     298,   713,   708,   303,   308,   310,   723,   730,  1164,  1169,
     780,   768,   316,   320,   737,   326,   744,  1598,   757,   758,
    1200,  1195,  1604,  1185,  1610,  1622,  1618,  1189,   762,   746,
     332,   333,   348,  1213,   351,   357,   798,   801,   795,   359,
     362,   806
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2567
static const yytype_int16 yypact[] =
{
    5352,    29,   534,   126, -2567, -2567,  1024,  -154,   337,   756,
     795,   183,  2728,   122,   205,    31,   142,    -4,  5510,   515,
    2366, -2567,    59,  1037,   181,  1291,   -65,   116,   193,   -29,
     452,   145,   709,  3469,    44,   358,   217,   380,   -29, -2567,
     173,    33,  1195, -2567,    41,   478,  1150, -2567,    62, -2567,
     155,  2473,   259,   157,   506,    27,  1019,   255,   539,   568,
     165,   562,    -2,   855, -2567, -2567, -2567,   877,   863, -2567,
     279,     0,   205,   482,   172,   130, -2567,   570,   863, -2567,
   -2567,   120,   863, -2567, -2567, -2567, -2567,   863, -2567, -2567,
   -2567, -2567, -2567, -2567,    75,   588,   591,   659,   121, -2567,
     863,  1416,   863,   863,  1215,   863, -2567, -2567, -2567,   520,
   -2567, -2567, -2567, -2567,  4797, -2567, -2567, -2567, -2567, -2567,
   -2567,   863, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567,
   -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567,
   -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567,
   -2567, -2567, -2567, -2567,  1445, -2567,   863, -2567,   720, -2567,
   -2567,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205, -2567, -2567, -2567, -2567, -2567,   612, -2567,   669,  1497,
     637,   266,   512,   615,   366,  4326,   128,  4848,  4768,   787,
    4797,  3907, -2567,   490,   -63,   774,   850,   807,   800,   808,
     885,   -29,   446, -2567,   848, -2567,   681,   644,   229, -2567,
     339, -2567,   464, -2567,   354,   864,    63, -2567, -2567,  5044,
   -2567, -2567, -2567,   876,   884,   928, -2567, -2567, -2567, -2567,
     492, -2567, -2567, -2567, -2567,   943, -2567, -2567,  5044,  4387,
   -2567,   969, -2567,    50, -2567,   994,   998,    72, -2567,   863,
   -2567,  1009,    57,  1034,   383,   906,  1041,    35, -2567, -2567,
   -2567,  1046,  1061,   205,   205,   863,   863, -2567, -2567,  1063,
   -2567, -2567, -2567, -2567, -2567, -2567,  3140,   678, -2567,  1067,
      20,   863,  5044,   863, -2567,   168, -2567, -2567, -2567, -2567,
   -2567,   863,   921,   205,  1488,   863,  1445,   863, -2567,  1072,
   -2567,  4952, -2567, -2567,   833,  1076,  1081,   863, -2567,  1091,
   -2567, -2567,   -10,  1095,  5044,  1100, -2567,  1270,   863,  1012,
   -2567,   632,   990,  1160,   460,  1118, -2567, -2567, -2567, -2567,
   -2567, -2567, -2567,  1115, -2567,   519,    89,   198,   215,    46,
     863,  1122,   863,   486, -2567,   863,   851,  1134, -2567,   863,
     863, -2567,    21,    22,    30,  1149,  1445, -2567, -2567, -2567,
    1039,   863, -2567, -2567, -2567, -2567, -2567, -2567,   863, -2567,
    1152,  1158, -2567,   863,  1059, -2567, -2567, -2567, -2567, -2567,
   -2567,   863, -2567, -2567,   863, -2567, -2567,   459,   459, -2567,
    1165, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567,
   -2567, -2567,   968,   863,   863,  1170,  1179,  1181, -2567, -2567,
     863,   863,   863, -2567,   863, -2567,  1183, -2567, -2567, -2567,
   -2567,   627, -2567,  1171, -2567,  5044,  1184, -2567,   863, -2567,
   -2567, -2567,   863,  1186,  1190,  1190,  5044,   863,   863,   863,
     863,   863,   863, -2567,   863,  4797,  1416,   863,   863, -2567,
   -2567, -2567, -2567, -2567, -2567, -2567,  1416,   863, -2567, -2567,
   -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567,  1217,
   -2567,   914,   -31, -2567, -2567, -2567, -2567, -2567, -2567, -2567,
   -2567, -2567,   395, -2567, -2567, -2567,  1031, -2567,   542,   566,
     566, -2567, -2567, -2567,  1231, -2567,  1237, -2567, -2567,   -90,
   -2567,  1062, -2567, -2567, -2567,  1074, -2567, -2567,  1445, -2567,
     863,   863, -2567,  5044,  5044,  1445, -2567, -2567,  1445, -2567,
   -2567, -2567, -2567,  1445, -2567, -2567,  5044,  1445,   863, -2567,
   -2567,  5044, -2567,  1246,   551,  1053,    10, -2567, -2567,  1087,
    5044,    65, -2567, -2567, -2567, -2567, -2567, -2567,  1256,  1258,
    1289, -2567,  1102, -2567,   -34, -2567,   863, -2567, -2567,  1209,
   -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567,
   -2567,   354, -2567, -2567, -2567, -2567, -2567, -2567,  1112,  1127,
   -2567, -2567,  1247,  1263,  1265, -2567, -2567,  1106, -2567,   863,
    1334,  1108,  4952, -2567,  1445, -2567, -2567,  1338, -2567, -2567,
   -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567,
   -2567, -2567,  5044,  5044,  5044,  5044, -2567, -2567, -2567,  1341,
     205, -2567, -2567,  1351,  1356,  1159,   863, -2567,   288,  1279,
   -2567,  1369, -2567,   666,  1294,  4886,   363,  1384, -2567,  1387,
   -2567,  1402, -2567,    81, -2567,  1405,  1409, -2567,  1413, -2567,
   -2567, -2567,   863, -2567,  4952,  4716,  1284,   656,  1417,   423,
    1331, -2567, -2567, -2567,    36,   563,  1428,  1430,    80,   863,
     409,   388,   160,  5044,   205,  1596,   845,   152,   174,   188,
      17, -2567,  1420,  1423,  1429, -2567, -2567, -2567, -2567, -2567,
   -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567,   863,
   -2567, -2567, -2567, -2567,   863,   863,   863,   863, -2567, -2567,
     863,  1445,   863, -2567,   863,  1416,   863,  1439,  1445, -2567,
   -2567, -2567, -2567, -2567, -2567, -2567, -2567,  1440,     7,   494,
   -2567, -2567, -2567,  1441, -2567, -2567, -2567, -2567,  1348, -2567,
    1446,  1450,  1375,  1462, -2567,  1464, -2567,  1465,  1380,  1467,
     489,   418,   531,   435,   555,  1470,   567, -2567, -2567,  1475,
    1477,  1480, -2567, -2567,  1482, -2567, -2567, -2567, -2567,  1483,
   -2567, -2567,  1484, -2567, -2567,  1490, -2567, -2567, -2567, -2567,
   -2567, -2567, -2567, -2567,   863,   863, -2567,   863,   967,   863,
     863, -2567,  4952,  1432,  1489, -2567,  1138,  1496, -2567,  1221,
    1499, -2567, -2567,    49,   863,   863, -2567,  1494, -2567, -2567,
    1502,  1205,   863,  1498,   806, -2567, -2567, -2567, -2567, -2567,
   -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567,  1504,
    1506,   863,   863,   863,  1509,   205,  1510,  1511,  1445,  5044,
   -2567, -2567, -2567, -2567, -2567,  1445, -2567, -2567,   863,   863,
     863,  5044,   863,  1416,   863, -2567,   863, -2567, -2567, -2567,
   -2567, -2567,  1513,  1514, -2567, -2567, -2567, -2567, -2567, -2567,
   -2567, -2567, -2567, -2567, -2567, -2567, -2567,   128, -2567,   863,
   -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567,  5044,   863,
    1445,  1445,    49,    49,    49,  1445,  1416,   863,  1445, -2567,
   -2567, -2567,   863, -2567,   -34,  1332,  1516,  1524, -2567, -2567,
    1445, -2567,  1370,  1389, -2567,  1539,  1549, -2567,  1553,  1262,
    1525,  1526, -2567,   863,  4735,   451,   832, -2567, -2567, -2567,
     863,   124,  1199, -2567,  1298, -2567,  1596,  1301,   558,  1275,
     133, -2567, -2567,   863, -2567, -2567, -2567, -2567, -2567, -2567,
   -2567, -2567, -2567, -2567,   863,  1566, -2567, -2567, -2567, -2567,
      49, -2567, -2567, -2567, -2567, -2567,  4920, -2567, -2567,  1569,
    1572,   863,  1575,  1578,  1581,    37,    37,   -60,  1585,  1588,
    1589,  1591,  1318,  1320,  1595,  1598,  1600,    66,    66,   -60,
    1597,  1602,   -60,  1603,  1604,  4983,  1609,  1614, -2567, -2567,
    1615,  1617,   673, -2567,  1620,  1621,  1622,  1623,    37,   -60,
    1628,  1631, -2567,  1632, -2567, -2567,  1445,   444,  1345,  1362,
    1381,  1388,  1532,  1005,  1396,  1640,   335,  1508,  1545,   946,
    1066,  1616,  1411,  1412,  1548,  1653,  1442,    90,    52,   699,
    1408,  5044,  1596,  1624,   710,  1414,  1444,  1659,    38, -2567,
   -2567,   112,  1662,  1666, -2567, -2567, -2567,  1667,  1449,   132,
    1596,  1455, -2567, -2567, -2567,   205,  1673,  1674,   863, -2567,
   -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567,    16, -2567,
    2073, -2567, -2567, -2567,   863, -2567,   863, -2567, -2567, -2567,
   -2567,   863,   863,   863,   423,  5044, -2567,  1676,  1272, -2567,
   -2567,   863, -2567, -2567,   863,  5044,   863, -2567, -2567, -2567,
   -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567,
   -2567, -2567,   205,   863, -2567,   863,   423,  1677,  1678, -2567,
   -2567, -2567, -2567,   863,   863, -2567,   205, -2567, -2567, -2567,
     584,  1679,  1680, -2567, -2567, -2567, -2567, -2567,   863,   863,
   -2567, -2567,  1416,   863,   863, -2567, -2567, -2567, -2567,  1675,
     863, -2567,   863,  1574, -2567,   863, -2567,   863,  1579, -2567,
    1683, -2567,  1119,  1119,   596,  1119,  1685, -2567,   623, -2567,
   -2567,  1687,  1689,   636,  1691, -2567,  1692,  1693,  1695, -2567,
     692,   716,  1696,  1698,  1700, -2567, -2567,  1701,  1702,  1704,
   -2567,  1119,  1119,  1119,   863, -2567, -2567, -2567,   863, -2567,
     863,   166,  5044, -2567,   863, -2567,  1445, -2567,  4952, -2567,
   -2567,  1706, -2567, -2567,  1707, -2567, -2567, -2567, -2567,  1694,
    1488, -2567,   863,  1703,   863,   863,   863,  1050, -2567,  1705,
    1709,   863,   863,     5,  1712,   205,   205, -2567,  1445,   863,
    1714,  1716,  1717,  1445,  5044, -2567,   863, -2567, -2567, -2567,
     863,   863,   863,  1445,  5044,    49, -2567, -2567, -2567, -2567,
    1416,   863,  1719,    49,   863,   589, -2567,  1721, -2567, -2567,
    1172,  4028,   863, -2567,   863,  1720,  1727,   863, -2567, -2567,
   -2567,  1723,   829,  4797,  1485,  1486,  1487,    13,  5044,  1491,
   -2567,   343,  1558,   171,  1492,  1493,   195, -2567, -2567,   498,
    1557,   715,   853,  1596,   961, -2567,  1730,  1500, -2567,   684,
   -2567, -2567, -2567, -2567,  1596,  1521, -2567, -2567, -2567, -2567,
   -2567,   863, -2567,   863, -2567, -2567,   863,   863, -2567,   863,
   -2567,   863, -2567, -2567, -2567, -2567,  1537,   863, -2567,   863,
      87, -2567, -2567,  1736,  1737, -2567,   863,    37,    37,    37,
   -2567, -2567, -2567, -2567, -2567, -2567,  1741,    37,    37,    37,
     552, -2567, -2567,    66,    37,    37,    37, -2567, -2567,    37,
      37,  1743,    37,    37,  1747,    66,   793, -2567,  1748,  1751,
    1754, -2567,   701, -2567,   766,   811, -2567,   917, -2567,  1473,
    1755,  1756,  1757,    66,    66,   -60,  1759,  1761,   -60,  1762,
    1764,  1765,    37,    37, -2567,  1766,    37,    37, -2567,  1767,
   -2567, -2567, -2567, -2567, -2567, -2567,   205, -2567, -2567, -2567,
    4797,  1293,   863,  1374,  1365,   725, -2567, -2567, -2567,   738,
   -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567,
   -2567, -2567,  1768,   863, -2567,   205,  1769,   863,  5044,   205,
    1394,  1530,  1531,   207,   218,  1533,   225,  1460,  1463,  1775,
    1777,  1778,  1005,  1779,  1781,  1782,  1471,  1472,  1282,  1783,
     863,  1383,  1454, -2567, -2567,   205,  5044, -2567, -2567,  5044,
     863,    19,  1786,   863,  1445,   205, -2567,  1787,  5044,  5044,
     863, -2567, -2567, -2567,   205,   205,  5044, -2567, -2567, -2567,
   -2567, -2567, -2567,  5044,   863,   205, -2567, -2567, -2567,   863,
   -2567, -2567,  1788,   863,  1535,   491,   863,  1540,   863,   495,
     863, -2567,   863,  1560,  1563,   863,   863,   863,   863,   863,
     863,   863,   863,    85,   863,   863,  1564, -2567,   863,   863,
     863,   863, -2567,  5044,  1445,  1791,  1794,  1797,   863,   863,
    1445, -2567,   863,   863,   863,  5044,   423, -2567,   863,   863,
   -2567, -2567, -2567,  1799, -2567, -2567, -2567, -2567, -2567, -2567,
    1832,   863,   863, -2567,   863,   863, -2567, -2567, -2567, -2567,
   -2567, -2567, -2567, -2567, -2567,  1833,  1834,  1836, -2567, -2567,
    1119,  1837,  1838,  1840, -2567,  1841,  1842,  1843,  1844,  1846,
   -2567,  1848, -2567, -2567, -2567,  1849,  1850,  1852, -2567,  1853,
    1854,  1856, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567,
   -2567, -2567,   863,   863,   863, -2567, -2567,   863, -2567,  1445,
   -2567, -2567,  1488,   863,  1445,   863,   863,   863, -2567,   863,
     863,  1860,   863, -2567,  1862,   863,   863, -2567, -2567,  1864,
    5044, -2567, -2567, -2567,   863, -2567, -2567, -2567, -2567,  1445,
   -2567,   856,   863,   856,    49,  1445,  5044,   863,   863,  1865,
   -2567, -2567, -2567,   863, -2567, -2567, -2567, -2567, -2567,  5044,
   -2567,  5044,   863, -2567, -2567,   -34,  1866,  1867,  1870,  1871,
    1872,  5044,  1445, -2567,  5044,  5044,  5044,  4797,  5044,  1445,
    5044, -2567, -2567,  5044, -2567, -2567,  4797,  5044,  5044,  5044,
    4797,  5044, -2567,  5044,  5044,   863, -2567, -2567,  5044,  5044,
    5044, -2567, -2567,  5044,  5044, -2567, -2567, -2567, -2567,  5044,
    5044, -2567, -2567, -2567, -2567, -2567,   863,   863, -2567, -2567,
    1874,   863, -2567, -2567,  1875, -2567, -2567,   863, -2567, -2567,
   -2567,    37, -2567, -2567, -2567,  1876,  1886,  1887, -2567, -2567,
     -60,  1889,  1890,  1891,    37, -2567, -2567, -2567, -2567, -2567,
      66, -2567, -2567,  1893,    37,  1894,  1895,  1896,    66,    66,
     -60,  1898,  1899,  1901,  1094, -2567,  1114, -2567,  1121,  1562,
    1903,  1904,  1906,    66,    66,   -60,  1900,  1908,   -60,  1909,
    1568,  1910,  1911,  1912,    66,    66,   -60,  1914,  1915,   -60,
    1916,  1619,  1917,  1920,  1921,    66,    66,   -60,  1923,  1924,
     -60,  1925,  1926,  1927,  1928,    66,    66,   -60,  1930,  1931,
    1932,    66, -2567, -2567, -2567, -2567, -2567,  1944, -2567, -2567,
    1945,    66,  1960,  1964, -2567, -2567,    37, -2567, -2567,  1965,
   -2567,  1445, -2567,  5044,   863,   863,  5044,   863,  1966,  1345,
   -2567, -2567, -2567, -2567, -2567, -2567,  1967,  5044,   205,  1968,
    5044,  1445, -2567,  1969,  1345,   863,   863,   863,   863,   863,
     863,   863,   863,   863,  1971,  1972, -2567, -2567, -2567,  1973,
   -2567, -2567, -2567,  1977,  1978, -2567, -2567, -2567,   863,  5044,
     863,  1979,  1345,   205,  1445,  1445, -2567, -2567, -2567, -2567,
   -2567, -2567, -2567, -2567, -2567, -2567,   863,  1416, -2567, -2567,
    1445,  1445,   863, -2567, -2567,  1445,  1445, -2567, -2567, -2567,
   -2567,   863,   863,   863,   863,   863,   863,   863,   863,   863,
     863,  2570, -2567,   863,   863,   863,   863,   863,   863,   863,
     863,   863,   863,   863,  3879,  1980,   863, -2567,   863,   863,
     863,  1982,  1983, -2567, -2567,  1445,    49, -2567,  1984,  1985,
   -2567, -2567,  1416,   863, -2567,  1988,  1445,  5044, -2567, -2567,
   -2567,  1989, -2567, -2567, -2567, -2567,  1119,  1119,  1119, -2567,
   -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567,
   -2567, -2567, -2567, -2567, -2567,  1345,   863, -2567,   863, -2567,
     863,  1445,   863, -2567,  1416,   863, -2567,   863, -2567,  1826,
    1990,  1991, -2567,   863,   863,  1993,  1445,  5044, -2567, -2567,
     863, -2567,   863, -2567,    49,  1172,   863,  1994, -2567,   863,
   -2567, -2567,  4797, -2567,  1995,  1996,  1997,  1998,  1999,  1445,
   -2567,  1172,  1172,  1172,  1445, -2567,  1172,    49,  1172,  1172,
    1445, -2567,  1172,  1172,  1172,  1445, -2567,  1172,  1172,  1445,
    5044,  1172,  1445,  1172,  1172,  1445,  1172,  1445, -2567, -2567,
    2001,  4797,  2002,   863, -2567, -2567, -2567, -2567,  2004, -2567,
   -2567, -2567, -2567,    37,    66, -2567, -2567, -2567, -2567, -2567,
   -2567,  2005, -2567, -2567,    66,  2006,  2007,  2009,    66,    66,
     -60,  2014,  2019,  2020,  2021,  2022,  2023,    66,    66,   -60,
    2025,  2028,  2029,  2030,  2031,  2033,    66,    66,   -60,  2037,
    2038,  2039,    66,    37,    37,    37,    37,    37,  2041,    37,
      37,  2043,    66,    66,    37,    37,    37,    37,    37,  2044,
      37,    37,  2045,    66,    66, -2567, -2567, -2567, -2567, -2567,
    2046, -2567, -2567,  2047,    66, -2567, -2567, -2567, -2567, -2567,
    2048, -2567, -2567,    66, -2567,    66,  2049, -2567,  2051,  2053,
   -2567,  4952, -2567,  1172,  2054,  5044,  1172,   863,  5044,  2055,
   -2567,  1172, -2567, -2567,  1172, -2567,  5044,  2056,   863,   863,
     863,   863,   863,   863,   863,   863,   863,   863,   863, -2567,
   -2567, -2567,  5044,  1172,   863,  5044,  2057, -2567,  1416,  1416,
    5044,  1416,  1416,  5044,  5044,  1416,  1416,   863,   863,   863,
     863,   863,   863,  1345,   863,   863,   863,  1534,  1552,  1559,
    1608,  1627,  1633,  1637,  2570, -2567,  1645, -2567, -2567,  1345,
     863,   863,   863,   863,  1345,   863,   863,   863,   863,   863,
     863,  1445,   863,  1544,  1345,   863,   863, -2567, -2567,    49,
     205,  5044,  5044, -2567, -2567, -2567,    49,  1445,  2059, -2567,
   -2567, -2567, -2567,   863, -2567, -2567,  1416,   863, -2567, -2567,
   -2567,  1233,  2061,  2064,   863,  2066,   856, -2567,  1172, -2567,
   -2567, -2567, -2567,  2067, -2567, -2567,  1445,  2069,  2070,  2072,
    2074,  5044,  2075, -2567, -2567, -2567, -2567, -2567, -2567, -2567,
   -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567,    49,
    1172, -2567,    49, -2567, -2567,    49, -2567,    49,  2076,  1445,
    2078, -2567,   863, -2567, -2567,    37,    66, -2567,    37,    37,
      37,    37,    37,  2080,    37,    37,    66,    37,    37,    37,
      37,    37,  2081,    37,    37,    66,    37,    37,    37,    37,
      37,  2082,    37,    37,    66,    37, -2567, -2567, -2567, -2567,
   -2567,    66, -2567, -2567,  2084,    37,    37, -2567, -2567, -2567,
   -2567, -2567,    66, -2567, -2567,  2085,    37, -2567,    66,  2087,
   -2567,    66, -2567, -2567,    66, -2567, -2567,  1445, -2567,  5044,
    1172, -2567,  2088,  1445,   863, -2567, -2567,  1445,   863, -2567,
   -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567,   863,   863,
    1172, -2567,  2089,  1445,   863,  1416, -2567,  1172,   863,  1416,
    1172,  1172,  5044, -2567,   863,  2091,  2091,   863,   863,  2091,
    1345,  2091, -2567,  5044,  1005,  2092,  2094,  2095,  2096,  2097,
    2099, -2567,   205,  1345,  2091,  2091,   863,   863,  1345,   863,
     863,   863,   863,   863, -2567,  1416,   863,  2100, -2567, -2567,
     863,  2091,   205,    23,  1445,  1445,   205,    49,  2102, -2567,
   -2567, -2567,  2103,   863, -2567,  2104,  2106,  2107,   863, -2567,
   -2567,  2108,    11,  5044, -2567,  2109,    83,  5044, -2567, -2567,
   -2567, -2567, -2567, -2567,  2114,    11,   863, -2567, -2567, -2567,
   -2567, -2567, -2567, -2567,    66, -2567, -2567,    37, -2567, -2567,
   -2567, -2567, -2567,    66, -2567, -2567,    37, -2567, -2567, -2567,
   -2567, -2567,    66, -2567, -2567,    37, -2567,    37,    66, -2567,
   -2567,    37,    66, -2567, -2567,    66, -2567, -2567,   863,  1172,
   -2567,  5044,  5044,   863,  5044,   863, -2567, -2567, -2567,  5044,
    5044,   863, -2567, -2567,  5044, -2567, -2567, -2567,  1172,  2115,
   -2567, -2567, -2567,  1345,   863, -2567,  2116, -2567, -2567,  1445,
    2121, -2567,  2123, -2567, -2567, -2567, -2567, -2567,  2124, -2567,
   -2567,  1345,   863,  2125, -2567, -2567,   863,  5044, -2567, -2567,
   -2567, -2567, -2567, -2567, -2567,    23,  1577,  1596, -2567, -2567,
   -2567,   205,  2126,  2129,  2131, -2567,  2127, -2567,    12,    11,
   -2567, -2567, -2567, -2567,  2133,  5044, -2567, -2567, -2567, -2567,
   -2567,    11, -2567,  2134,    37, -2567,    37, -2567,    37, -2567,
   -2567,    37, -2567,    37, -2567,  4952, -2567,  1172,  1172,   863,
    1172,  2135,  1172,  1172,   863,  1172,   863, -2567, -2567, -2567,
   -2567,  2136, -2567,   863, -2567, -2567,  2137, -2567,   863, -2567,
   -2567, -2567,  2140,   863, -2567, -2567, -2567,  1445, -2567, -2567,
   -2567,  1577, -2567,  1643,  1649,  1596, -2567, -2567, -2567,  2141,
    2144, -2567, -2567, -2567, -2567,   634,   634, -2567, -2567,  1445,
   -2567, -2567, -2567, -2567, -2567, -2567, -2567,  1172, -2567, -2567,
    2146, -2567,  4797, -2567, -2567,  2147, -2567,  1345, -2567, -2567,
    1345,   863, -2567, -2567,   863, -2567,  1345,   863, -2567,  5044,
   -2567,  1643, -2567,   205, -2567,  2148,  2149,   863,   863,   863,
     863,    83,  2151,  4797,  1445, -2567,  4797, -2567, -2567,   863,
    2153, -2567,   863,  1172, -2567, -2567, -2567,  2155,  2156,   863,
    2157,   863, -2567, -2567,  1445, -2567, -2567,  1445, -2567, -2567,
    2159, -2567, -2567,  2160,  2161, -2567, -2567,  2162, -2567,  2163,
   -2567, -2567,  1345, -2567,  1345, -2567, -2567, -2567, -2567, -2567,
   -2567, -2567, -2567
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2567, -2567,    -3, -2567,   628,  -892, -1562,  -979,  1550, -2567,
     891,  -429,  1877,   -50,    26, -2567, -2567, -1662,  1686,  1986,
    -874, -1057,  -948,   796,  1618, -2567,  -887, -2567,  -908, -1090,
   -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567,
   -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567,
   -2567, -2567, -2567, -2567,  -661,  -485, -2567, -2567, -2567, -2567,
   -2567, -2567, -2567, -2415, -2567, -2567, -2567, -2567, -2567, -2567,
   -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567,
   -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567,
   -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567,
   -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567,
   -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567,
   -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567,
   -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567,
   -2567, -2567, -2567, -2567, -2567, -1470, -2567, -2567, -2567, -2567,
   -2567,  -664, -2567, -2567, -2567, -2567, -2567, -2567,    54, -2567,
   -2567, -2567, -2567,  -221,  -665, -1859,  -554, -2567, -2567, -2567,
   -2567, -2567,  -628,  -597, -2567, -2567, -2566, -2567, -2567, -2567,
   -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567,
   -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567,  1357,
   -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567,
   -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567, -2567,
   -2567, -2567
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1252
static const yytype_int16 yytable[] =
{
      68,   356,  1899,    65,    66,   876,  1095,  1098,   105,  2040,
    1122,  2042,  1275,   174,   905,    65,    66,   855,  1267,  1268,
    1269,  1521,  1139, -1096,   692,   792,   796,   858,   271,   377,
     295,   107,   364,  1707,   799,   107,    65,    66,   319,  1430,
     645,  1381,  2640,  1503,  1384,  1917,  1160,   350,   107,   299,
     361,  1657,  1081,   368,   619,    65,    66,   374,   778,   297,
     381,  1415,   628,   107,   384,   386,   345,  1918,   396,   911,
    1919,   403,   407,   862,   161,   410,   624,   162,   591,   414,
     416,  1920,  1377,  1594,   415,  1599,  1350,  1487,    65,    66,
    1964,   327,   312,   107,  1006,    55,  1090,   428,   432,   437,
     438,   442,   444,   920,  1921,   272,  1752,   163,  1364,   881,
    2652,  1629,  1630,  1631,  2646,   164,  1485,  1140,   448,  1161,
     107,   261,  1922,  1141,   411,   241,   425,    65,    66,    65,
      66,    65,    66,    65,    66,    65,    66,  2752,  1505,    77,
     447,   328,  1007,   728,   176,    65,    66,  1225,   112,  1345,
     329,   426,   112,   457,   158,   769,   544,  1126,    65,    66,
      65,    66,   863,    65,    66,   112, -1251,  1511,    65,    66,
    1635,   365,   259,   702,   882,    65,    66,   165,   489,   906,
     112,   330,   262,   510,   110,  2774,    65,    66,  1488,   346,
    1130,  1716,   107,   392,   625,  1100,   251,  1360,   269,  1101,
     912,  2641,   107,   273,   263,  2712,   173,  1162,   404,   107,
     112,   285,   511,  1365,   519,  1720,   524,   528,   274,   107,
     921,   309,   100,   693,  2717,   556,  1361,  1887,  1378,   166,
     694,   695,  1346,   317,   313,   115,  2720,   112,  1889,   115,
     589,   779,   101,   116,   117,  1892,   626,   116,   117,   620,
     545,   718,   115,   793,   167,   559,   168,   729,  1708,   264,
     116,   117,   652,   653,   772,   592,   696,   115,  1512,    65,
      66,  1338,  1102,  2647,   347,   116,   117,  1008,   699,  1163,
     701,   775,   275,   387,   169,  1658,  1155,   378,   704,   707,
     572,   710,   714,  1504,   716,   102,  1103,   115,  1091,  1131,
    2642,   972,   973,  1082,   726,   116,   117,   405,   417,   112,
     629,   393,   703,   646,   736,   738, -1096,   797,  1226,   112,
     712,  1486,   794,  2713,   115,   800,   112,  1142,  1753,  1522,
     907,   120,   116,   117,   318,   120,   112,   781,  1332,   783,
     785,    78,   787,  1506,   331,  1132,   790,   791,   120,   974,
     118,   170,  1009,  1489,   300,   394,   395,   805,   807,   576,
    1104,  1455,  1010,   120,   301,   808,   913,   487,  2714,  1711,
     811,   813,  2648,   412,   697,   402,    79,  1495,   814,  1923,
     150,   815,  1092,   103,   150,   151,   152,   406,   633,   151,
     152,  1676,  1133,   120,  1011,  1515,   115,   150,  1965,  1680,
     825,   826,   151,   152,   116,   117,   115,   830,   831,   832,
     110,   833,   150,   115,   116,   117,  1717,   151,   152,  1127,
     120,   116,   117,   115,  1255,   840,   265,    67,   304,   841,
    1553,   116,   117,  1513,   846,   847,   848,   849,   850,   851,
    1721,   852,   150,   432,   856,   857,  1128,   151,   152,    80,
    1000,  1071,  1888,   432,   859,  1869,   349,  1847,   360,   482,
    1850,  1105,  1565,  1890,   314,   483,   373,  1271,   311,   150,
    1893,   854,  1071,   266,   151,   152,  1134,   577,   388,  1181,
     104,  1884,   334,  1136,   975,   976,  1071,   315,   816,    65,
      66,   560,   120,  1072,    65,    66,   358,   277,    65,    66,
     581,   634,   120,  1912,   484,  1456,   363,   888,   889,   120,
    1999,   582,   561,  1712,  1072,  1097,   278,  1321,   279,   120,
     573,   759,  1190,  1001,  1722,   897,  1420,   562,  1072,   389,
     485,   305,   370,  1165,   530,   601,   390,    81,   583,   496,
    1182,   150,   959,   574,   371,    56,   151,   152,   497,   531,
     747,   150,   765,   923,   817,   901,   151,   152,   150,   977,
     902,    65,    66,   151,   152,  1765,  1766,   376,   150,   978,
     979,   532,   372,   151,   152,   409,   118,   486,  1183,   602,
    1457,   635,   760,  1322,   578,   997,   954,    57,  1713,  1571,
      82,   533,  1186,  1682,   865,  1191,   421,   943,   219,  1421,
    1572,   980,  1084,  2598,  1016,    58,  1166,   110,   534,  1323,
     306,   749,   535,  1767,   579,   220,  1192,   584,   419,   307,
     869,   487,   488,   971,   399,   818,  1458,   766,  1197,  2622,
    1073,   835,   836,   563,  1714,    59,   636,    65,    66,   280,
     536,   537,   160,   172,  2508,   110,  1074,  1075,  1731,  1015,
     242,  1073,   866,  1187,    60,   267,   585,  1595,    61,  1741,
    1064,   637,   302,   400,   423,  1073,  1093,  1074,  1075,  1106,
    1723,   983,    62,  1422,  1423,  1085,  1094,  1193,  1399,   984,
     985,  1074,  1075,   366,  1601,  1065,  1400,  1401,  1424,  1198,
     603,  1324,   564,   740,  1167,   538,  1146,  1607,   281,  1184,
     398,  1147,  1148,  1149,  1150,   539,  1799,  1151,   873,  1153,
    1738,  1154,   432,  1156,  1800,  1801,   819,   784,  1596,   870,
     445,   820,  1943,  1577,   458,   586,  1948,   986,   767,  1724,
     469,  1425,  2678,  2679,  1402,   470,  2682,   565,  2684,  1076,
    1077,   761,  1216,   282,  1325,  1602,   566,   874,  1768,  1769,
    2689,  2690,   283,  1615,   741,  2694,  2695,   480,  1608,  2698,
    1076,  1077,  1802,  1086,  2699,  2700,  1168,   540,   541,   686,
     755,  1810,  1340,   118,  1076,  1077,   873,  1619,   587,  1811,
    1812,  1208,  1209,    84,  1210,  1212,  1214,  1215,   494,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   871,
    2043,  1228,  1229,  2053,   550,   492,  1785,  1786,  1233,  1234,
    1236,   118,  1188,   554,  1616,   874,  1821,  1237,  2738,   521,
    1066,  2739,  2098,  1770,  1822,  1823,  2742,  1813,  1240,  1241,
    1242,  1870,  2745,  1771,  1772,    63,  1194,  2748,  1620,   542,
     547,  1677,  2111,  1497,  1873,  1250,  1251,  1252,  1199,  1254,
     432,  1256,   687,  1257,  1787,   548,  1739,  2148,    65,    66,
    2151,  1326,   987,   988,   110,  1773,    65,    66,  2159,  1403,
    1404,  2162,  1824,   555,  1260,  1067,  1262,  1597,    94,  2170,
      65,    66,  2173,    84,  1123,   742,  1264,   719,   551,  2180,
    2199,   650,   651,   432,  1272,    95,   549,  1803,  1804,  1274,
     558,  1068,  1987,  1261,  1603,  2207,  2289,  2290,  2291,  2789,
      85,  1696,  2792,   743,   568,  1740,  1287,  1609,   286,   569,
    1291,   709,   552,   720,    65,    66,  1871,  1331,  1333,  1336,
    1832,  1833,  2803,  2226,    86,  1341,   571,   989,    87,  1874,
    1347,  1498,   596,   688,  1405,  1390,  2810,   990,   991,  2811,
    2812,  1348,   992,   590,  1406,  1407,   597,  1124,   599,  1408,
     705,   689,  1814,  1815,   770,   773,   776,  1461,  1356,  1491,
      65,  1211,  1805,  1617,   618,    96,  1492,   721,  1834,   993,
    1872,   380,  1806,  1807,  1697,  1726,  1409,  1808,  2312,  1788,
    1789,    88,  1727,  1875,  2600,  1462,  1327,  1621,  1463,   622,
     639,  1499,   623,   383,  2324,  2325,  2326,  1825,  1826,  2328,
      85,  2330,  2331,   627,  1809,  2333,  2334,  2335,   640,    97,
    2337,  2338,    65,    66,  2341,  1728,  2343,  2344,  1464,  2346,
     118,  2680,    89,   706,    86,  1490,  2292,  1816,  2039,   631,
      90,    91,    65,    66,  1435,  1125,   643,  1817,  1818,  2691,
     648,  1328,  1819,    65,    66,    98,  1514,  1465,  1698,  1699,
    1466,   287,    65,    66,  1790,  1520,   649,   288,   654,   289,
     812,  1436,   691,  1700,  1791,  1792,   717,  1329,   367,  1820,
     724,  1548,  1827,  1549,  1729,   725,   722,  1469,  1550,  1551,
    1552,    88,  1828,  1829,  1732,   727,   605,  1830,  1558,   641,
     731,  1559,  2280,  1561,   733,  1437,  1793,  2115,  2116,  1651,
     739,  1438,   745,  1835,  1836,  1470,  1701,  1439,  1471,   764,
    1563,  1472,  1564,   763,  1831,   243,   782,  2124,  2125,   788,
    1568,  1569,    89,  1733,  2133,  2134,  2418,  1440,   789,  2421,
      90,    91,  1219,  1220,  2425,  1575,  1576,  2426,  1473,   432,
    1578,  1579,  1730,   802,   244,  2117,   809,  1581,  1441,  1582,
    1588,  1589,  1584,   810,  1585,   804,  2441,   606,  1639,   823,
    2311,   824,  2363,  1442,   827,  2126,   837,  1474,  2768,  1467,
    1475,  2372,  2135,   828,  2771,   829,   335,   834,  1837,   839,
    2381,   861,  1734,  2329,   429,  1685,  1686,   336,  1838,  1839,
     431,  1632,    65,    66,   868,  1633,  1443,  1634,    65,    66,
     607,  1637,  1468,   924,   925,  1335,  1232,    70,    65,    66,
     321,   747,   860,    71,   337,  1222,  1223,  1643,   245,  1646,
    1840,  1648,  1649,  1650,  1652,   877,    65,    66,  1655,  1656,
    2808,   879,  2809,   246,   884,  1444,  1664,   886,   967,   608,
     899,  2509,  1735,  1670,   439,   904,  1645,  1671,  1672,  1673,
    1445,   915,    72,   916,  2460,    65,  1286,   432,  1678,   926,
    1687,  1681,  1446,    65,    66,   927,  1556,  1557,   748,  1691,
    2473,  1692,   749,  2519,  1694,  2478,  1905,  1906,    73,   909,
    2118,  2119,  2502,   918,  1590,  1591,    65,    66,  1863,  1476,
    1447,  1683,  1109,   338,   919,   247,   944,  1137,   322,   734,
    2127,  2128,  1448,   946,  1449,  1450,   252,  2136,  2137,  1703,
     750,   945,   323,  1592,   928,   843,   844,   440,  1743,   948,
    1744,   950,  1477,  1745,  1746,    74,  1747,   952,  1748,   955,
     957,   929,   339,   961,  1750,   966,  1751,   248,    65,    66,
    1053,  1427,  1428,  1757,  1451,   968,   930,   249,   751,  1478,
     969,   970,   931,  2570,  1054,  2120,   981,   932,    65,    66,
    1868,  1427,  1428,  1055,   982,  2121,  2122,    65,    66,  1866,
      75,   994,   735,  2578,  1056,  2129,    65,    66,  1909,  1002,
    2583,  1004,  2138,  2586,  2587,  2130,  2131,    65,    66,  1883,
    1427,  1428,  2139,  2140,   253,  2492,  1005,  2123,   324,   752,
    1012,   340,  2496,   753,  1013,   441,  1057,  1014,   254,    65,
      66,   325,  1070,   933,   429,   430,   431,  2132,  1864,  1865,
    1867,  1079,  1088,  1145,  2141,  1089,  1143,  1058,   754,  1144,
     341,   755,   934,  1157,  1159,  1170,  1171,   935,   342,   936,
    1877,  1172,   756,   255,  1880,  1173,  1862,    65,    66,  1911,
    1427,  1428,  1174,  1244,   343,  2518,  1175,  1178,  2520,  1176,
    1177,  2521,  1179,  2522,  1196,   937,   938,  1908,  1910,   449,
    1201,  2596,  1202,   939,  1203,  1059,  1204,  1916,  1205,  1206,
    1926,    65,    66,  1218,  2608,  1207,  1217,  1932,  2231,  2613,
    1221,  1277,   940,  1224,   256,  1230,   108,  1231,  1238,  1235,
    1239,  1937,  2666,  1243,  1245,  1246,  1939,   257,  1258,  1259,
    1941,  1278,  1944,  1945,  1060,  1947,  1949,  1950,  1279,  1953,
    1281,  2676,  1956,  1957,  1958,  1959,  1960,  1961,  1962,  1963,
    1966,  1968,  1969,  1283,   110,  1971,  1972,  1973,  1974,  1282,
     471,  1061,   450,  2283,  1284,  1980,  1981,  1285,   941,  1983,
    1984,  1985,  1289,  1290,  1337,  1988,  1989,  1339,   472,  2592,
    1343,  1349,  2595,  1353,  2597,   451,   452,  1354,  1992,  1993,
    1357,  1994,  1995,  1358,   453,   473,  1359,  2609,  2610,  1367,
     111,  1062,  1368,  1063,  1369,  2298,  1370,  1372,   474,  1373,
    1374,  1382,   454,  1375,  2624,  1376,  1383,  1431,  1385,  1386,
    2728,  2729,   455,  2731,  1392,  2733,  2734,   475,  2736,  1394,
    1395,   476,  1397,  2631,  1410,  1411,  1432,  1412,  1413,  2015,
    2016,  2017,  1416,  1433,  2018,   477,  1417,  1418,  1434,  2020,
    2023,  1453,  2025,  2026,  2027,  1454,  2028,  2029,   113,  2031,
    1459,  1460,  2033,  2034,  1482,  1479,  1480,  1481,  1483,  1493,
    1484,  2037,  1501,  1496,  1502,  1500,  1507,  1510,  2022,  2041,
    2762,  1508,  1509,  1516,  2046,  2047,   478,  1518,  1519,  1580,
    2049,  1555,  1566,  1567,  1573,  1574,  1583,  1587,  1110,  2052,
    1600,  1586,  1605,  1517,  1606,  1611,  1111,  1612,  1613,  1614,
    1715,  1623,  1112,  1624,  1625,  1642,  1626,  1627,  1628,  1653,
     118,  1640,  1641,  1654,  1647,   119,  2794,  1660,  1665,  1113,
    1666,  1667,  2080,  1679,  1693,  1114,  1684,  -458,  1695,  1725,
    1704,  1705,  1706,  2065,  1736,  1742,  1710,  1718,  1719,  1749,
    1755,  1756,  2071,  2088,  2089,  1761,  2076,  1780,  2091,  1115,
    1562,  1783,  1841,  1794,  2093,  1737,  1796,  1116,  2767,  1798,
    1842,  1843,  1844,  1848,  1570,  1849,  1942,  1851,  1852,  1853,
    1856,  1946,  1859,  1876,  1879,  1885,  1886,  1894,  1891,  1896,
    1895,  1897,  1898,  1900,  1380,  1901,  1902,  1907,  1903,  1904,
    1925,  1954,  1929,  1940,  1955,  1970,  1977,  1117,  1978,  2445,
    2446,  1979,  2448,  2449,  1990,  1118,  2452,  2453,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,  1991,  2301,  1996,  1997,
    1998,  2142,  2000,  2001,  2002,  2003,  2004,  2153,  2005,  2006,
    2007,  1119,  2008,  2782,  2009,  2010,  2011,  2487,  2012,  2013,
    2014,  2194,  2195,  1120,  2197,  2030,  2032,  2500,  2035,  2048,
   -1114,  2054,  2055,  1661,  1662,  2056,  2057,  2058,  2090,  1121,
    2092,  2095,  2208,  2209,  2210,  2211,  2212,  2213,  2214,  2215,
    2216,  2096,  2097,  2099,  2100,  2464,  2101,  2104,  2164,  2106,
    2107,  2108,  2112,  2113,  2149,  2222,  2114,  2224,  2143,  2144,
     296,  2145,  2150,  2465,  2152,  2154,  2155,  2156,  2160,  2161,
    2466,  2163,  2165,  2230,   432,  2166,  2167,  2171,  2172,  2234,
    2174,  2175,  2176,  2177,  2181,  2182,  2251,  2183,  2237,  2238,
    2239,  2240,  2241,  2242,  2243,  2244,  2245,  2246,  2185,  2186,
    2259,  2260,  2261,  2262,  2263,  2264,  2265,  2266,  2267,  2268,
    2269,  2270,  2704,  2273,  2188,  2274,  2275,  2276,  2189,  2467,
    2191,  2198,  2200,  2203,  2206,  2217,  2218,  2716,  2219,   432,
    2284,  2220,  2221,   842,  2225,  2272,  2277,  2278,  2468,  2281,
    2282,   446,  2285,  2288,  2469,  2302,  2303,  2306,  2470,  2314,
    2318,  2319,  2320,  2321,  2322,  2348,  2472,  2351,  2353,  2356,
    2753,  2358,  2359,  2293,  2360,  2294,  2582,  2295,  2364,  2297,
    2585,   432,  2299,  2365,  2300,  2366,  2367,  2368,  2369,  2373,
    2304,  2305,  2374,  2471,  2375,  2376,  2377,  2309,  2378,  2310,
    2704,  2382,  2383,  2313,  2384,  2391,  2315,  2394,  2402,  2405,
    2408,  2409,  2411,  2414,  1860,  2415,  2619,  2416,  2419,  2424,
    2428,  2444,   508,  2498,   515,   518,  2504,   523,   527,  2505,
    2507,  2701,  2510,  2512,   822,  2513,  2514,  2754,  2317,  2515,
    2517,  2523,  2525,  1878,  2534,  2543,  2552,  1882,  2558,  2562,
    2352,  2565,  2571,  2579,  1523,  2590,   594,  2601,  2602,  1524,
    2603,  2604,  2605,  2606,  2750,  2621,  2632,  1180,  2633,  2635,
    2636,  2637,  2639,  1913,  2645,   610,   616,  2350,  2651,  2677,
    2683,  1525,  1526,  1928,  1527,  1528,  2686,  2687,  2688,  2693,
    2708,  2711,  1933,  1934,  2709,  1529,  2710,  2718,  2721,  2732,
    2740,  2417,  2743,  1938,  2746,     0,  2755,  1530,  1531,  2756,
    2763,  2766,     0,  2776,  2777,  1532,  2783,  2791,  1533,   700,
    2795,  2796,  2798,  2802,  2804,     0,  2805,  2806,  2807,  1774,
       0,   711,     0,     0,     0,     0,  1534,     0,     0,     0,
       0,  1784,     0,  1535,  1536,     0,     0,  1537,     0,     0,
       0,   732,     0,     0,  2422,     0,     0,     0,     0,  1845,
    1846,     0,     0,     0,     0,  2429,  2430,  2431,  2432,  2433,
    2434,  2435,  2436,  2437,  2438,  2439,     0,     0,     0,     0,
       0,  2442,     0,     0,     0,   432,   432,     0,   432,   432,
    2758,  2760,   432,   432,  2454,  2455,  2456,  2457,  2458,  2459,
       0,  2461,  2462,  2463,     0,     0,     0,     0,     0,     0,
    1538,     0,     0,     0,     0,     0,     0,  2474,  2475,  2476,
    2477,     0,  2479,  2480,  2481,  2482,  2483,  2484,     0,  2486,
       0,     0,  2490,  2491,     0,     0,     0,     0,     0,     0,
       0,     0,   715,     0,     0,     0,     0,     0,     0,     0,
    2499,     0,     0,   432,  2501,     0,     0,     0,  2503,     0,
       0,  2506,   838,     0,     0,     0,  1539,     0,     0,     0,
       0,     0,  1540,   845,     0,     0,     0,     0,     0,     0,
       0,     0,   853,     0,     0,     0,     0,     0,     0,  1541,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1542,
       0,     0,   803,     0,     0,     0,     0,     0,     0,  2526,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1543,  1544,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   222,     0,     0,     0,  1545,     0,
     890,   891,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   895,     0,     0,   223,     0,   898,   224,
       0,     0,     0,     0,     0,     0,     0,   910,     0,     0,
       0,  2573,     0,     0,     0,  2575,     0,     0,     0,     0,
       0,     0,     0,  1546,     0,  2576,  2577,     0,     0,     0,
       0,  2581,   432,   225,     0,  2584,   432,     0,     0,     0,
     226,  2589,     0,     0,  2593,  2594,     0,     0,     0,     0,
       0,   227,   228,     0,     0,     0,     0,     0,   229,     0,
       0,     0,     0,  2611,  2612,     0,  2614,  2615,  2616,  2617,
    2618,     0,   432,  2620,     0,     0,     0,  2623,   352,   962,
     963,   964,   965,   230,   887,   353,     0,     0,     0,     0,
    2634,   892,     0,     0,   893,  2638,  2202,     0,     0,   894,
       0,   231,     0,   896,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2653,     0,   232,   233,     0,     0,     0,
       0,     0,   234,     0,     0,     0,     0,     0,     0,     0,
       0,  2227,     0,     0,     0,     0,     0,     0,     0,     0,
    1108,     0,     0,     0,   235,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2665,     0,     0,     0,     0,
    2669,     0,  2671,     0,     0,     0,  2103,     0,  2674,     0,
     960,     0,     0,     0,  2109,  2110,     0,     0,     0,     0,
       0,  2681,     0,   236,  1363,     0,     0,     0,     0,  2146,
    2147,     0,     0,     0,     0,     0,     0,     0,     0,  2692,
    2157,  2158,     0,  2696,     0,  2727,     0,     0,     0,     0,
       0,  2168,  2169,     0,     0,  2247,  1414,     0,     0,     0,
       0,  2178,  2179,     0,     0,  2715,  2248,  2184,     0,     0,
       0,     0,     0,     0,     0,     0,   237,  2187,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   238,     0,     0,
       0,     0,  1110,  2249,     0,     0,  2730,     0,     0,     0,
    1111,  2735,     0,  2737,     0,     0,  1112,     0,     0,     0,
    2741,     0,     0,     0,     0,  2744,   239,     0,     0,     0,
    2747,     0,     0,  1113,     0,     0,     0,  1152,     0,  1114,
       0,     0,  2250,     0,  1158,     0,     0,     0,     0,     0,
       0,     0,  2757,  2759,     0,     0,  1248,     0,     0,     0,
       0,   354,     0,  1115,   355,     0,     0,     0,  1253,     0,
       0,  1116,   107,     0,     0,     0,     0,     0,  2769,     0,
       0,  2770,     0,     0,  2772,     0,   108,     0,     0,     0,
       0,     0,     0,     0,  2778,  2779,  2780,  2781,  2765,     0,
       0,     0,     0,     0,     0,  1263,  2790,   109,     0,  2793,
       0,  1117,     0,     0,     0,     0,  2797,     0,  2799,  1118,
       0,     0,     0,     0,   110,     0,     0,     0,     0,  2785,
       0,     0,  2788,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,     0,     0,     0,  1247,  1119,     0,     0,     0,     0,
     111,  1249,     0,     0,     0,     0,     0,  1120,     0,     0,
       0,     0,     0,  1352,     0,     0,     0,     0,     0,   112,
       0,     0,     0,  1121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2251,     0,  2252,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1265,  1266,     0,     0,
       0,  1270,     0,     0,  1273,     0,     0,     0,   113,     0,
       0,     0,     0,     0,     0,     0,  1280,     0,     0,     0,
    2355,     0,     0,     0,     0,     0,     0,     0,  2493,     0,
    2357,     0,     0,     0,  2361,  2362,     0,     0,  1494,  2253,
       0,     0,     0,  2370,  2371,     0,     0,     0,   114,     0,
       0,     0,  2379,  2380,     0,     0,   115,     0,  2385,     0,
       0,     0,     0,     0,   116,   117,     0,     0,  2395,  2396,
     118,     0,     0,     0,     0,   119,     0,     0,     0,  2406,
    2407,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2410,     0,  1554,     0,     0,  1758,  1759,  1760,     0,  2412,
       0,  2413,  1560,     0,     0,  1762,  1763,  1764,     0,     0,
       0,     0,  1775,  1776,  1777,     0,     0,  1778,  1779,     0,
    1781,  1782,  1419,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1854,  1855,   120,     0,  1857,  1858,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,     0,     0,     0,     0,
       0,   150,     0,     0,     0,     0,   151,   152,     0,  1636,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2607,     0,     0,     0,     0,     0,     0,  1644,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2625,     0,     0,     0,  2630,     0,     0,     0,     0,     0,
       0,  1669,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1675,     0,     0,   655,   656,     0,     0,     0,     0,
       0,     0,  2528,     0,     0,     0,     0,     0,  1690,     0,
       0,     0,  2537,     0,     0,     0,     0,     0,     0,     0,
    1702,  2546,     0,     0,     0,  1709,     0,     0,     0,     0,
    2555,     0,     0,     0,     0,     0,     0,  2557,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2561,     0,
     657,     0,  1638,     0,  2564,     0,   658,  2566,     0,     0,
    2567,     0,     0,   659,     0,   660,     0,     0,     0,     0,
     661,     0,     0,   662,     0,     0,     0,     0,     0,   663,
       0,     0,     0,     0,  1663,     0,     0,     0,     0,  1668,
     664,     0,     0,     0,     0,     0,   665,     0,     0,  1674,
       0,     0,     0,     0,     0,   666,     0,     0,     0,  2707,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   667,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   668,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1861,   669,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   670,
     671,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2654,     0,     0,     0,     0,  1881,     0,     0,     0,  2656,
       0,   672,     0,     0,     0,     0,     0,     0,  2658,     0,
       0,     0,     0,     0,  2661,     0,     0,     0,  2663,     0,
       0,  2664,     0,  1914,   673,     0,  1915,     0,     0,     0,
       0,     0,     0,     0,     0,  1930,  1931,     0,   674,  2094,
     675,  2775,     0,  1935,     0,     0,     0,     0,     0,     0,
    1936,     0,  2102,     0,     0,   676,     0,     0,     0,     0,
     677,     0,  2105,     0,     0,     0,     0,   678,     0,     0,
       0,     0,     0,     0,   679,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1975,     0,     0,   680,     0,     0,     0,     0,     0,     0,
       0,     0,  1986,     0,     0,     0,   681,   682,     0,   683,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,  2190,     0,     0,     0,     0,     0,
    1927,     0,     0,     0,     0,     0,     0,   108,     0,   684,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   291,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2021,
       0,     0,     0,     0,     0,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2036,     0,     0,
    1976,     0,     0,     0,     0,     0,  1982,     0,     0,     0,
       0,     0,     0,  2045,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2050,     0,  2051,     0,
       0,   111,     0,     0,     0,     0,     0,     0,  2059,     0,
       0,  2061,  2062,  2063,  2064,  2066,     0,  2068,     0,     0,
    2069,     0,     0,  2070,  2072,  2073,  2074,  2075,  2077,     0,
    2078,  2079,     0,     0,     0,  2081,  2082,  2083,     0,     0,
    2084,  2085,     0,     0,     0,     0,  2086,  2087,     0,     0,
       0,     0,     0,     0,     0,  2019,     0,     0,     0,   113,
    2024,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2038,     0,     0,     0,     0,
       0,  2044,     0,     0,     0,     0,     0,     0,     0,   292,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2060,     0,
       0,   118,     0,     0,     0,  2067,   119,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   293,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2354,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2193,     0,     0,  2196,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2201,     0,     0,  2204,     0,     0,
       0,  2386,  2387,  2388,  2389,  2390,     0,  2392,  2393,     0,
     294,     0,  2397,  2398,  2399,  2400,  2401,     0,  2403,  2404,
       0,     0,     0,     0,     0,     0,  2223,     0,     0,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2271,     0,     0,     0,     0,     0,  2192,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2287,     0,     0,  2205,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    65,    66,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   108,     0,     0,
    2228,  2229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   526,     0,     0,  2308,     0,  2232,  2233,     0,     0,
       0,  2235,  2236,     0,     0,   108,     0,     0,     0,  2316,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2340,     0,     0,
       0,  2279,     0,   110,     0,     0,     0,     0,  2349,     0,
       0,     0,  2286,  2527,     0,     0,  2529,  2530,  2531,  2532,
    2533,   111,  2535,  2536,     0,  2538,  2539,  2540,  2541,  2542,
       0,  2544,  2545,     0,  2547,  2548,  2549,  2550,  2551,     0,
    2553,  2554,     0,  2556,     0,     0,     0,  2296,     0,   111,
       0,     0,     0,  2559,  2560,     0,     0,     0,     0,     0,
       0,     0,  2307,     0,  2563,     0,     0,     0,     0,     0,
       0,     0,  1689,     0,     0,     0,     0,     0,     0,   113,
       0,     0,     0,     0,     0,  2323,   108,     0,     0,     0,
    2327,     0,     0,     0,     0,     0,  2332,     0,     0,     0,
       0,  2336,     0,     0,     0,  2339,     0,   113,  2342,     0,
       0,  2345,  2420,  2347,     0,  2423,     0,     0,     0,     0,
       0,     0,     0,  2427,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2440,
       0,     0,  2443,     0,     0,     0,   119,  2447,     0,     0,
    2450,  2451,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
     111,     0,     0,     0,   119,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2655,     0,     0,  2494,  2495,
       0,     0,     0,     0,  2657,     0,     0,     0,     0,     0,
       0,     0,     0,  2659,     0,  2660,     0,     0,     0,  2662,
       0,     0,     0,     0,     0,     0,     0,     0,   113,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2516,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   119,     0,  2485,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2722,  2497,  2723,     0,  2724,     0,     0,  2725,
       0,  2726,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2569,     0,     0,     0,
       0,     0,  2511,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2588,
       0,     0,     0,     0,     0,  2524,     0,     0,     0,     0,
    2599,     0,     0,     0,   108,     0,     0,     0,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2644,   499,   500,     0,  2650,   501,     0,     0,     0,     0,
       0,     0,     0,  2568,   611,   108,     0,     0,     0,  2572,
       0,     0,     0,  2574,     0,     0,     0,     0,   502,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   111,  2580,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   612,     0,     0,  2667,  2668,
       0,  2670,     0,     0,     0,     0,  2672,  2673,     0,     0,
       0,  2675,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2628,  2629,     0,     0,     0,     0,   113,     0,     0,   111,
       0,     0,     0,     0,  2697,     0,     0,     0,     0,   503,
       0,     0,     0,   613,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   504,     0,
       0,     0,  2719,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     505,     0,     0,     0,     0,     0,     0,   113,     0,     0,
       0,     0,     0,   119,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   614,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2685,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   506,     0,     0,  2764,
       0,     0,     0,     0,   119,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2773,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2784,     0,     0,  2787,     0,     0,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,     0,   507,     0,     0,     0,     0,
       0,     0,     0,  2749,   615,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2761,     0,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,  1017,  1018,  1019,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2786,     0,     0,     0,  1292,  1293,  1294,     0,     0,     0,
       0,     0,     0,     0,  1020,  1021,     0,     0,  1022,     0,
    2800,  1023,     0,  2801,     0,     0,     0,     0,  1024,     0,
       0,     0,  1025,  1295,  1296,     0,   108,  1297,     0,     0,
    1026,  1027,     0,     0,  1298,     0,     0,  1299,  1028,  1029,
       0,  1300,     0,     0,     0,     0,     0,     0,     0,  1301,
    1302,     0,     0,     0,     0,   108,  1030,  1303,     0,     0,
       0,     0,  1031,     0,   110,     0,  1032,  1033,     0,     0,
    1034,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1304,  1305,     0,  1035,  1306,
       0,     0,     0,   110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   108,  1307,     0,  1036,
     111,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1308,     0,
       0,     0,     0,  1037,     0,     0,     0,     0,     0,   111,
       0,     0,     0,     0,     0,     0,     0,   513,     0,     0,
       0,     0,  1309,     0,     0,     0,     0,  1038,     0,     0,
       0,  1310,     0,     0,     0,     0,     0,     0,   113,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   108,     0,
       0,     0,     0,     0,     0,     0,     0,  1039,     0,  1040,
     111,     0,     0,     0,     0,  1041,  1042,   113,     0,     0,
       0,     0,     0,     0,     0,     0,  1311,     0,     0,     0,
       0,  1043,  1044,     0,  1312,  1313,  1351,     0,     0,     0,
       0,     0,  1045,  1046,     0,     0,     0,     0,     0,     0,
     118,  1314,     0,     0,     0,   119,     0,     0,     0,     0,
       0,     0,  1315,     0,     0,     0,     0,     0,   113,  1047,
       0,  1048,     0,     0,     0,     0,     0,     0,     0,   118,
       0,     0,   111,  1049,   119,  1050,     0,     0,  1316,     0,
    1317,  1051,     0,     0,     0,     0,     0,     0,     0,     0,
    1318,     0,     0,     0,     0,     0,   995,     0,     0,     0,
    1319,   996,     0,     0,     0,     0,   517,     0,     0,     0,
       0,     0,   108,     0,     0,  1052,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,     0,     0,     0,     0,
     113,     0,     0,     0,  1320,     0,     0,     0,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,     0,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   514,   111,   119,  1388,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,     0,     0,     0,     0,
       0,     0,     0,     0,   113,     0,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,     0,     0,     0,     0,     0,     0,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,     0,     0,
       0,   119,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
       0,     0,     0,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,  1389,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,     1,     0,     0,     2,     0,     0,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     0,     0,     0,     0,     5,     6,     0,     7,
       8,     9,     0,     0,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,     0,    11,     0,    12,    13,
       0,     0,     0,     0,     0,     0,     0,     0,    14,    15,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    16,     0,     0,     0,     0,     0,     0,     0,     0,
      17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,     0,     0,     0,    19,     0,     0,
      20,     0,     0,     0,    21,    22,     0,     0,     0,     0,
       0,    23,     0,     0,     0,     0,     0,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,     0,     0,    26,    27,    28,     0,     0,
      29,    30,     0,     0,     0,     0,     0,     0,     0,     0,
     178,     0,     0,   179,     0,    31,   180,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    33,    34,   181,     0,   182,   183,   184,
       0,     0,     0,     0,     0,     0,    35,   185,    36,   186,
       0,     0,     0,     0,   187,    37,   188,   189,   190,    38,
       0,     0,     0,    39,   191,    40,   192,    41,     0,     0,
       0,     0,    42,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    43,     0,     0,     0,
       0,     0,    44,     0,     0,     0,     0,   193,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    45,    46,
       0,     0,     0,     0,     0,   194,     0,     0,     0,     0,
      47,     0,    48,   195,     0,   196,   197,     0,    49,   198,
       0,    50,    51,   199,     0,   200,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   201,   202,
       0,     0,    52,   203,     0,     0,     0,     0,     0,    53,
       0,     0,     0,   204,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     205,   206,     0,     0,     0,     0,     0,     0,   207,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   208,     0,   209,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     210,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   211,   212,     0,     0,
       0,     0,     0,     0,     0,   213,     0,     0,     0,     0,
       0,     0,   214,     0,     0,     0,     0,     0,   215,     0,
     216,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   217
};

static const yytype_int16 yycheck[] =
{
       3,    51,  1472,     3,     4,   490,   670,   671,    11,  1671,
     675,  1673,   904,    16,     4,     3,     4,   446,   892,   893,
     894,     5,     5,     0,     4,     4,     4,   456,    57,    31,
      33,     4,     5,    20,     4,     4,     3,     4,    41,  1018,
       5,   989,    31,     5,   992,    26,    39,    50,     4,     5,
      53,    46,    16,    56,     4,     3,     4,    60,    12,    33,
      63,  1009,     5,     4,    67,    68,     4,    48,    71,     4,
      51,    74,    75,   104,    43,    78,     4,    46,    15,    82,
       5,    62,    16,  1173,    87,  1175,   960,    35,     3,     4,
       5,    50,    38,     4,    13,    66,    16,   100,   101,   102,
     103,   104,   105,   137,    85,   134,    19,    76,   168,   199,
    2525,  1201,  1202,  1203,    31,    84,    26,   100,   121,   112,
       4,     5,   103,   106,     4,    66,     5,     3,     4,     3,
       4,     3,     4,     3,     4,     3,     4,  2703,    26,   293,
     114,   100,    61,   153,   148,     3,     4,    98,   121,    16,
     109,    30,   121,   156,    32,    66,   219,     5,     3,     4,
       3,     4,   193,     3,     4,   121,     0,    35,     3,     4,
       4,   144,   237,     5,   264,     3,     4,   146,   181,   169,
     121,   140,    66,   186,    56,  2751,     3,     4,   136,   127,
      16,    20,     4,   193,   122,    35,    15,   160,     5,    39,
     135,   190,     4,   232,    88,   193,    64,   200,    78,     4,
     121,    66,   186,   273,   188,    20,   190,   191,   247,     4,
     254,     4,    39,   203,  2639,   199,   189,    20,   162,   198,
     210,   211,    99,   200,    61,   208,  2651,   121,    20,   208,
     214,   195,    59,   216,   217,    20,   249,   216,   217,   199,
     313,   301,   208,   232,   223,   201,   225,   267,   245,   143,
     216,   217,   265,   266,    66,   202,   246,   208,   136,     3,
       4,   936,   112,   190,   212,   216,   217,   196,   281,   272,
     283,    66,   311,     4,   253,   280,   715,   289,   291,   292,
      61,   294,   295,   255,   297,   112,   136,   208,   218,   125,
     289,    13,    14,   267,   307,   216,   217,   177,   233,   121,
     253,   311,   144,   278,   317,   318,   293,   295,   269,   121,
     294,   231,   301,   311,   208,   295,   121,   310,   241,   313,
     320,   304,   216,   217,   301,   304,   121,   340,   214,   342,
     343,     4,   345,   231,   303,   171,   349,   350,   304,    61,
     222,   320,   271,   301,   310,   355,   356,   360,   361,    20,
     200,    26,   281,   304,   320,   368,   301,   355,   356,    26,
     373,   374,   289,   253,   354,   203,    39,  1042,   381,   360,
     353,   384,   302,   200,   353,   358,   359,   257,     5,   358,
     359,  1265,   218,   304,   313,  1060,   208,   353,   313,  1273,
     403,   404,   358,   359,   216,   217,   208,   410,   411,   412,
      56,   414,   353,   208,   216,   217,   245,   358,   359,   267,
     304,   216,   217,   208,   853,   428,   310,   301,    70,   432,
    1094,   216,   217,   301,   437,   438,   439,   440,   441,   442,
     245,   444,   353,   446,   447,   448,   294,   358,   359,   112,
      87,    63,   245,   456,   457,  1434,   301,  1405,   301,   193,
    1408,   301,  1126,   245,   291,   199,   301,   896,    88,   353,
     245,   445,    63,   357,   358,   359,   302,   138,   199,    61,
     297,  1460,     4,   295,   196,   197,    63,   314,    29,     3,
       4,    45,   304,   105,     3,     4,   237,    45,     3,     4,
      36,   118,   304,  1482,   238,   170,     0,   510,   511,   304,
    1600,    47,    66,   170,   105,   127,    64,    66,    66,   304,
     291,    61,    87,   160,    26,   528,    82,    81,   105,   250,
     264,   173,   277,    39,    44,    43,   257,   200,    74,   173,
     122,   353,   592,   314,     5,    11,   358,   359,   182,    59,
      61,   353,    33,   556,    95,     4,   358,   359,   353,   271,
     534,     3,     4,   358,   359,    13,    14,     5,   353,   281,
     282,    81,     4,   358,   359,     5,   222,   311,   160,    87,
     245,   198,   122,   132,   245,   635,   589,    53,   245,     5,
     253,   101,    61,     4,   199,   160,     5,   571,    83,   155,
      16,   313,    39,  2462,   654,    71,   112,    56,   118,   158,
     252,   122,   122,    61,   275,   100,    61,   153,    30,   261,
      78,   355,   356,   626,   142,   166,   291,   108,    61,  2488,
     242,     4,     5,   187,   291,   101,   253,     3,     4,   187,
     150,   151,    14,    15,  2306,    56,   258,   259,  1313,   652,
      22,   242,   257,   122,   120,    27,   192,    61,   124,  1324,
       4,   278,    34,   181,     5,   242,   669,   258,   259,   672,
     172,     5,   138,   229,   230,   112,   267,   122,     5,    13,
      14,   258,   259,    55,    61,    29,    13,    14,   244,   122,
     198,   240,   246,    61,   200,   205,   699,    61,   246,   281,
      72,   704,   705,   706,   707,   215,     5,   710,   142,   712,
      26,   714,   715,   716,    13,    14,   257,   231,   122,   177,
     200,   262,   231,  1152,     4,   261,   231,    61,   209,   231,
     118,   287,  2591,  2592,    61,    66,  2595,   291,  2597,   351,
     352,   281,   792,   291,   293,   122,   300,   181,   196,   197,
    2609,  2610,   300,    61,   122,  2614,  2615,   120,   122,  2618,
     351,   352,    61,   200,  2623,  2624,   272,   277,   278,    91,
     281,     5,   214,   222,   351,   352,   142,    61,   314,    13,
      14,   784,   785,    27,   787,   788,   789,   790,   173,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   257,
    1674,   804,   805,  1695,     4,   293,    13,    14,   811,   812,
       4,   222,   281,     5,   122,   181,     5,    11,  2677,    32,
     164,  2680,  1770,   271,    13,    14,  2685,    61,   831,   832,
     833,   106,  2691,   281,   282,   301,   281,  2696,   122,   349,
      66,  1270,  1790,   133,   106,   848,   849,   850,   281,   852,
     853,   854,   174,   856,    61,     5,   172,  1805,     3,     4,
    1808,    29,   196,   197,    56,   313,     3,     4,  1816,   196,
     197,  1819,    61,    65,   877,   219,   879,   281,    83,  1827,
       3,     4,  1830,    27,    39,   253,   889,    54,    88,  1837,
    1869,   263,   264,   896,   897,   100,    89,   196,   197,   902,
      15,   245,  1566,   877,   281,  1884,  1996,  1997,  1998,  2768,
     154,    82,  2771,   281,    66,   231,   919,   281,   209,   238,
     923,   293,   122,    90,     3,     4,   201,   930,   931,   932,
      13,    14,  2791,  1912,   178,   938,   292,   271,   182,   201,
     943,   231,    66,   265,   271,   995,  2805,   281,   282,  2808,
    2809,   954,   286,    89,   281,   282,    72,   112,    30,   286,
      39,   283,   196,   197,   336,   337,   338,    21,   971,   270,
       3,     4,   271,   281,     5,   180,   277,   144,    61,   313,
     255,   126,   281,   282,   155,   270,   313,   286,  2045,   196,
     197,   235,   277,   255,  2464,    49,   164,   281,    52,     5,
      94,   291,     4,   126,  2061,  2062,  2063,   196,   197,  2066,
     154,  2068,  2069,     4,   313,  2072,  2073,  2074,   112,   224,
    2077,  2078,     3,     4,  2081,   172,  2083,  2084,    82,  2086,
     222,  2593,   276,   112,   178,  1038,  2015,   271,   182,     5,
     284,   285,     3,     4,    39,   200,     5,   281,   282,  2611,
       4,   219,   286,     3,     4,   260,  1059,   111,   229,   230,
     114,   352,     3,     4,   271,  1068,     5,   358,     5,   360,
      11,    66,     5,   244,   281,   282,     4,   245,    59,   313,
       4,  1084,   271,  1086,   231,     4,   253,    21,  1091,  1092,
    1093,   235,   281,   282,   133,     4,   153,   286,  1101,   193,
       5,  1104,  1976,  1106,     4,   100,   313,    13,    14,    59,
      98,   106,   122,   196,   197,    49,   287,   112,    52,     4,
    1123,    55,  1125,     5,   313,    88,     4,    13,    14,   278,
    1133,  1134,   276,   172,    13,    14,  2193,   132,     4,  2196,
     284,   285,     4,     5,  2201,  1148,  1149,  2204,    82,  1152,
    1153,  1154,   299,     4,   117,    61,     4,  1160,   153,  1162,
      41,    42,  1165,     5,  1167,   126,  2223,   224,  1218,     4,
    2044,   203,  2120,   168,     4,    61,     5,   111,  2740,   233,
     114,  2129,    61,     4,  2746,     4,    36,     4,   271,     5,
    2138,   277,   231,  2067,     8,    23,    24,    47,   281,   282,
      10,  1204,     3,     4,   173,  1208,   201,  1210,     3,     4,
     267,  1214,   266,     4,     5,    16,    11,   193,     3,     4,
      25,    61,     5,   199,    74,     4,     5,  1230,   191,  1232,
     313,  1234,  1235,  1236,  1237,     4,     3,     4,  1241,  1242,
    2802,     4,  2804,   206,   182,   240,  1249,   173,   620,   306,
       4,  2308,   291,  1256,    39,   202,  1230,  1260,  1261,  1262,
     255,     5,   238,     5,  2243,     3,     4,  1270,  1271,    60,
      98,  1274,   267,     3,     4,    66,     4,     5,   118,  1282,
    2259,  1284,   122,  2340,  1287,  2264,     4,     5,   264,   202,
     196,   197,    59,     4,   175,   176,     3,     4,     5,   233,
     295,  1275,   674,   153,   202,   268,   194,   679,   113,    39,
     196,   197,   307,    66,   309,   310,    25,   196,   197,  1293,
     160,   194,   127,   204,   115,   434,   435,   112,  1331,    66,
    1333,    66,   266,  1336,  1337,   311,  1339,   231,  1341,     5,
     232,   132,   192,     5,  1347,     4,  1349,   310,     3,     4,
      66,     6,     7,  1356,   349,     4,   147,   320,   198,   293,
       4,   202,   153,  2420,    80,   271,    87,   158,     3,     4,
       5,     6,     7,    89,     5,   281,   282,     3,     4,     5,
     356,    87,   112,  2440,   100,   271,     3,     4,     5,     5,
    2447,     4,   271,  2450,  2451,   281,   282,     3,     4,     5,
       6,     7,   281,   282,   113,  2279,     4,   313,   213,   249,
       5,   261,  2286,   253,     5,   200,   132,     4,   127,     3,
       4,   226,     5,   214,     8,     9,    10,   313,  1431,  1432,
    1433,   100,     4,     4,   313,     5,    16,   153,   278,    16,
     290,   281,   233,     4,     4,     4,    98,   238,   298,   240,
    1453,     5,   292,   162,  1457,     5,  1430,     3,     4,     5,
       6,     7,    87,   835,   314,  2339,     4,    87,  2342,     5,
       5,  2345,     5,  2347,     4,   266,   267,  1480,  1481,    34,
       5,  2460,     5,   274,     4,   201,     4,  1490,     5,     5,
    1493,     3,     4,     4,  2473,     5,    64,  1500,  1927,  2478,
       4,   169,   293,     4,   213,    11,    18,     5,     4,    11,
       4,  1514,  2569,     4,     4,     4,  1519,   226,     5,     5,
    1523,     5,  1525,  1526,   240,  1528,  1529,  1530,     4,  1532,
     160,  2588,  1535,  1536,  1537,  1538,  1539,  1540,  1541,  1542,
    1543,  1544,  1545,     4,    56,  1548,  1549,  1550,  1551,   160,
      53,   267,   107,  1982,     5,  1558,  1559,     4,   349,  1562,
    1563,  1564,    37,    37,   266,  1568,  1569,   266,    71,  2456,
     295,     5,  2459,     4,  2461,   130,   131,     5,  1581,  1582,
       5,  1584,  1585,     5,   139,    88,     5,  2474,  2475,     4,
     102,   307,     4,   309,     5,  2024,     5,   279,   101,   279,
       5,     4,   157,     5,  2491,     5,     4,   245,     5,     5,
    2667,  2668,   167,  2670,     5,  2672,  2673,   120,  2675,     5,
       5,   124,     5,  2497,     4,     4,   245,     5,     5,  1632,
    1633,  1634,     4,   245,  1637,   138,     5,     5,   106,  1642,
    1643,   245,  1645,  1646,  1647,     5,  1649,  1650,   160,  1652,
     142,   106,  1655,  1656,   106,    39,   245,   245,     5,   251,
     218,  1664,   218,    39,     5,   251,     4,   218,  1642,  1672,
    2727,     5,     5,   218,  1677,  1678,   179,     4,     4,     4,
    1683,     5,     5,     5,     5,     5,   112,     4,    92,  1692,
       5,   112,     5,  1065,     5,     4,   100,     5,     5,     4,
     142,     5,   106,     5,     4,    11,     5,     5,     4,     4,
     222,     5,     5,     4,    11,   227,  2773,     5,     4,   123,
       4,     4,  1725,     4,     4,   129,     5,     0,     5,   172,
     245,   245,   245,  1707,     4,   214,   245,   245,   245,   202,
       4,     4,  1716,  1746,  1747,     4,  1720,     4,  1751,   153,
    1122,     4,   279,     5,  1757,   255,     5,   161,  2737,     5,
       5,     5,     5,     4,  1136,     4,   231,     5,     4,     4,
       4,   231,     5,     5,     5,   245,   245,   317,   245,     4,
     317,     4,     4,     4,   988,     4,     4,     4,   317,   317,
       4,   231,     5,     5,   231,   231,     5,   201,     4,  2228,
    2229,     4,  2231,  2232,     5,   209,  2235,  2236,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,     4,    11,     5,     5,
       4,   279,     5,     5,     4,     4,     4,   279,     5,     5,
       4,   255,     4,  2761,     5,     5,     4,   313,     5,     5,
       4,  1864,  1865,   267,  1867,     5,     4,  2296,     4,     4,
     293,     5,     5,  1245,  1246,     5,     5,     5,     4,   283,
       5,     5,  1885,  1886,  1887,  1888,  1889,  1890,  1891,  1892,
    1893,     5,     5,     4,     4,   361,     5,     4,   279,     5,
       5,     5,     4,     4,     4,  1908,     5,  1910,     5,     5,
      33,     5,     4,   361,     5,     5,     5,     5,     4,     4,
     361,     5,     5,  1926,  1927,     5,     5,     4,     4,  1932,
       5,     5,     5,     5,     4,     4,   293,     5,  1941,  1942,
    1943,  1944,  1945,  1946,  1947,  1948,  1949,  1950,     4,     4,
    1953,  1954,  1955,  1956,  1957,  1958,  1959,  1960,  1961,  1962,
    1963,  1964,  2627,  1966,     4,  1968,  1969,  1970,     4,   361,
       5,     5,     5,     5,     5,     4,     4,  2638,     5,  1982,
    1983,     4,     4,   433,     5,     5,     4,     4,   361,     5,
       5,   114,     4,     4,   361,     5,     5,     4,   361,     5,
       5,     5,     5,     5,     5,     4,   361,     5,     4,     4,
     361,     5,     5,  2016,     5,  2018,  2445,  2020,     4,  2022,
    2449,  2024,  2025,     4,  2027,     5,     5,     5,     5,     4,
    2033,  2034,     4,  2254,     5,     5,     5,  2040,     5,  2042,
    2705,     4,     4,  2046,     5,     4,  2049,     4,     4,     4,
       4,     4,     4,     4,  1426,     4,  2485,     4,     4,     4,
       4,     4,   185,     4,   187,   188,     5,   190,   191,     5,
       4,  2625,     5,     4,   388,     5,     4,  2705,  2052,     5,
       5,     5,     4,  1455,     4,     4,     4,  1459,     4,     4,
    2093,     4,     4,     4,    21,     4,   219,     5,     4,    26,
       5,     5,     5,     4,  2701,     5,     4,   750,     5,     5,
       4,     4,     4,  1485,     5,   238,   239,  2091,     4,     4,
       4,    48,    49,  1495,    51,    52,     5,     4,     4,     4,
       4,     4,  1504,  1505,     5,    62,     5,     4,     4,     4,
       4,  2191,     5,  1515,     4,    -1,     5,    74,    75,     5,
       4,     4,    -1,     5,     5,    82,     5,     4,    85,   282,
       5,     5,     5,     4,     4,    -1,     5,     5,     5,  1373,
      -1,   294,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,
      -1,  1385,    -1,   110,   111,    -1,    -1,   114,    -1,    -1,
      -1,   314,    -1,    -1,  2197,    -1,    -1,    -1,    -1,  1403,
    1404,    -1,    -1,    -1,    -1,  2208,  2209,  2210,  2211,  2212,
    2213,  2214,  2215,  2216,  2217,  2218,    -1,    -1,    -1,    -1,
      -1,  2224,    -1,    -1,    -1,  2228,  2229,    -1,  2231,  2232,
    2715,  2716,  2235,  2236,  2237,  2238,  2239,  2240,  2241,  2242,
      -1,  2244,  2245,  2246,    -1,    -1,    -1,    -1,    -1,    -1,
     177,    -1,    -1,    -1,    -1,    -1,    -1,  2260,  2261,  2262,
    2263,    -1,  2265,  2266,  2267,  2268,  2269,  2270,    -1,  2272,
      -1,    -1,  2275,  2276,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2293,    -1,    -1,  2296,  2297,    -1,    -1,    -1,  2301,    -1,
      -1,  2304,   425,    -1,    -1,    -1,   233,    -1,    -1,    -1,
      -1,    -1,   239,   436,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   445,    -1,    -1,    -1,    -1,    -1,    -1,   256,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   266,
      -1,    -1,   356,    -1,    -1,    -1,    -1,    -1,    -1,  2352,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   294,   295,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,   315,    -1,
     513,   514,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   526,    -1,    -1,    40,    -1,   531,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   540,    -1,    -1,
      -1,  2424,    -1,    -1,    -1,  2428,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   360,    -1,  2438,  2439,    -1,    -1,    -1,
      -1,  2444,  2445,    77,    -1,  2448,  2449,    -1,    -1,    -1,
      84,  2454,    -1,    -1,  2457,  2458,    -1,    -1,    -1,    -1,
      -1,    95,    96,    -1,    -1,    -1,    -1,    -1,   102,    -1,
      -1,    -1,    -1,  2476,  2477,    -1,  2479,  2480,  2481,  2482,
    2483,    -1,  2485,  2486,    -1,    -1,    -1,  2490,    15,   612,
     613,   614,   615,   127,   508,    22,    -1,    -1,    -1,    -1,
    2503,   515,    -1,    -1,   518,  2508,  1878,    -1,    -1,   523,
      -1,   145,    -1,   527,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2526,    -1,   159,   160,    -1,    -1,    -1,
      -1,    -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1913,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     673,    -1,    -1,    -1,   188,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2568,    -1,    -1,    -1,    -1,
    2573,    -1,  2575,    -1,    -1,    -1,  1780,    -1,  2581,    -1,
     594,    -1,    -1,    -1,  1788,  1789,    -1,    -1,    -1,    -1,
      -1,  2594,    -1,   227,   976,    -1,    -1,    -1,    -1,  1803,
    1804,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2612,
    1814,  1815,    -1,  2616,    -1,  2665,    -1,    -1,    -1,    -1,
      -1,  1825,  1826,    -1,    -1,    55,  1008,    -1,    -1,    -1,
      -1,  1835,  1836,    -1,    -1,  2638,    66,  1841,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   280,  1851,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   291,    -1,    -1,
      -1,    -1,    92,    93,    -1,    -1,  2669,    -1,    -1,    -1,
     100,  2674,    -1,  2676,    -1,    -1,   106,    -1,    -1,    -1,
    2683,    -1,    -1,    -1,    -1,  2688,   320,    -1,    -1,    -1,
    2693,    -1,    -1,   123,    -1,    -1,    -1,   711,    -1,   129,
      -1,    -1,   132,    -1,   718,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2715,  2716,    -1,    -1,   839,    -1,    -1,    -1,
      -1,   248,    -1,   153,   251,    -1,    -1,    -1,   851,    -1,
      -1,   161,     4,    -1,    -1,    -1,    -1,    -1,  2741,    -1,
      -1,  2744,    -1,    -1,  2747,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2757,  2758,  2759,  2760,  2732,    -1,
      -1,    -1,    -1,    -1,    -1,   888,  2769,    39,    -1,  2772,
      -1,   201,    -1,    -1,    -1,    -1,  2779,    -1,  2781,   209,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,  2763,
      -1,    -1,  2766,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,    -1,    -1,    -1,   838,   255,    -1,    -1,    -1,    -1,
     102,   845,    -1,    -1,    -1,    -1,    -1,   267,    -1,    -1,
      -1,    -1,    -1,   966,    -1,    -1,    -1,    -1,    -1,   121,
      -1,    -1,    -1,   283,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   293,    -1,   295,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   890,   891,    -1,    -1,
      -1,   895,    -1,    -1,   898,    -1,    -1,    -1,   160,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   910,    -1,    -1,    -1,
    2104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2280,    -1,
    2114,    -1,    -1,    -1,  2118,  2119,    -1,    -1,  1041,   349,
      -1,    -1,    -1,  2127,  2128,    -1,    -1,    -1,   200,    -1,
      -1,    -1,  2136,  2137,    -1,    -1,   208,    -1,  2142,    -1,
      -1,    -1,    -1,    -1,   216,   217,    -1,    -1,  2152,  2153,
     222,    -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,  2163,
    2164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2174,    -1,  1095,    -1,    -1,  1357,  1358,  1359,    -1,  2183,
      -1,  2185,  1105,    -1,    -1,  1367,  1368,  1369,    -1,    -1,
      -1,    -1,  1374,  1375,  1376,    -1,    -1,  1379,  1380,    -1,
    1382,  1383,  1016,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1412,  1413,   304,    -1,  1416,  1417,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,    -1,    -1,    -1,    -1,
      -1,   353,    -1,    -1,    -1,    -1,   358,   359,    -1,  1212,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2472,    -1,    -1,    -1,    -1,    -1,    -1,  1230,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2492,    -1,    -1,    -1,  2496,    -1,    -1,    -1,    -1,    -1,
      -1,  1254,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1264,    -1,    -1,     4,     5,    -1,    -1,    -1,    -1,
      -1,    -1,  2356,    -1,    -1,    -1,    -1,    -1,  1281,    -1,
      -1,    -1,  2366,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1293,  2375,    -1,    -1,    -1,  1298,    -1,    -1,    -1,    -1,
    2384,    -1,    -1,    -1,    -1,    -1,    -1,  2391,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2402,    -1,
      60,    -1,  1216,    -1,  2408,    -1,    66,  2411,    -1,    -1,
    2414,    -1,    -1,    73,    -1,    75,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,  1248,    -1,    -1,    -1,    -1,  1253,
     100,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,  1263,
      -1,    -1,    -1,    -1,    -1,   115,    -1,    -1,    -1,  2631,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1430,   168,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,
     180,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2534,    -1,    -1,    -1,    -1,  1458,    -1,    -1,    -1,  2543,
      -1,   201,    -1,    -1,    -1,    -1,    -1,    -1,  2552,    -1,
      -1,    -1,    -1,    -1,  2558,    -1,    -1,    -1,  2562,    -1,
      -1,  2565,    -1,  1486,   224,    -1,  1489,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1498,  1499,    -1,   238,  1761,
     240,  2753,    -1,  1506,    -1,    -1,    -1,    -1,    -1,    -1,
    1513,    -1,  1774,    -1,    -1,   255,    -1,    -1,    -1,    -1,
     260,    -1,  1784,    -1,    -1,    -1,    -1,   267,    -1,    -1,
      -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1553,    -1,    -1,   293,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1565,    -1,    -1,    -1,   306,   307,    -1,   309,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,  1856,    -1,    -1,    -1,    -1,    -1,
    1494,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,   349,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1642,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1660,    -1,    -1,
    1554,    -1,    -1,    -1,    -1,    -1,  1560,    -1,    -1,    -1,
      -1,    -1,    -1,  1676,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1689,    -1,  1691,    -1,
      -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,  1701,    -1,
      -1,  1704,  1705,  1706,  1707,  1708,    -1,  1710,    -1,    -1,
    1713,    -1,    -1,  1716,  1717,  1718,  1719,  1720,  1721,    -1,
    1723,  1724,    -1,    -1,    -1,  1728,  1729,  1730,    -1,    -1,
    1733,  1734,    -1,    -1,    -1,    -1,  1739,  1740,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1639,    -1,    -1,    -1,   160,
    1644,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1669,    -1,    -1,    -1,    -1,
      -1,  1675,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   200,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1702,    -1,
      -1,   222,    -1,    -1,    -1,  1709,   227,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1863,    -1,    -1,  1866,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1877,    -1,    -1,  1880,    -1,    -1,
      -1,  2143,  2144,  2145,  2146,  2147,    -1,  2149,  2150,    -1,
     301,    -1,  2154,  2155,  2156,  2157,  2158,    -1,  2160,  2161,
      -1,    -1,    -1,    -1,    -1,    -1,  1909,    -1,    -1,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1964,    -1,    -1,    -1,    -1,    -1,  1861,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1987,    -1,    -1,  1881,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,
    1914,  1915,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,    -1,    -1,  2037,    -1,  1930,  1931,    -1,    -1,
      -1,  1935,  1936,    -1,    -1,    18,    -1,    -1,    -1,  2052,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2080,    -1,    -1,
      -1,  1975,    -1,    56,    -1,    -1,    -1,    -1,  2091,    -1,
      -1,    -1,  1986,  2355,    -1,    -1,  2358,  2359,  2360,  2361,
    2362,   102,  2364,  2365,    -1,  2367,  2368,  2369,  2370,  2371,
      -1,  2373,  2374,    -1,  2376,  2377,  2378,  2379,  2380,    -1,
    2382,  2383,    -1,  2385,    -1,    -1,    -1,  2021,    -1,   102,
      -1,    -1,    -1,  2395,  2396,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2036,    -1,  2406,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,   160,
      -1,    -1,    -1,    -1,    -1,  2059,    18,    -1,    -1,    -1,
    2064,    -1,    -1,    -1,    -1,    -1,  2070,    -1,    -1,    -1,
      -1,  2075,    -1,    -1,    -1,  2079,    -1,   160,  2082,    -1,
      -1,  2085,  2195,  2087,    -1,  2198,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2206,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2222,
      -1,    -1,  2225,    -1,    -1,    -1,   227,  2230,    -1,    -1,
    2233,  2234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   222,
     102,    -1,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2537,    -1,    -1,  2281,  2282,
      -1,    -1,    -1,    -1,  2546,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2555,    -1,  2557,    -1,    -1,    -1,  2561,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2321,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   227,    -1,  2271,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2654,  2287,  2656,    -1,  2658,    -1,    -1,  2661,
      -1,  2663,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2419,    -1,    -1,    -1,
      -1,    -1,  2316,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2452,
      -1,    -1,    -1,    -1,    -1,  2349,    -1,    -1,    -1,    -1,
    2463,    -1,    -1,    -1,    18,    -1,    -1,    -1,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2513,    65,    66,    -1,  2517,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2417,    17,    18,    -1,    -1,    -1,  2423,
      -1,    -1,    -1,  2427,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,  2443,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,  2571,  2572,
      -1,  2574,    -1,    -1,    -1,    -1,  2579,  2580,    -1,    -1,
      -1,  2584,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2494,  2495,    -1,    -1,    -1,    -1,   160,    -1,    -1,   102,
      -1,    -1,    -1,    -1,  2617,    -1,    -1,    -1,    -1,   173,
      -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,    -1,
      -1,    -1,  2645,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     214,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,
      -1,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   178,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2599,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   280,    -1,    -1,  2732,
      -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2749,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2763,    -1,    -1,  2766,    -1,    -1,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,    -1,   349,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2697,   297,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2719,    -1,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2764,    -1,    -1,    -1,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    52,    -1,
    2784,    55,    -1,  2787,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    66,    48,    49,    -1,    18,    52,    -1,    -1,
      74,    75,    -1,    -1,    59,    -1,    -1,    62,    82,    83,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    -1,    -1,    -1,    -1,    18,   100,    82,    -1,    -1,
      -1,    -1,   106,    -1,    56,    -1,   110,   111,    -1,    -1,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   110,   111,    -1,   132,   114,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,   132,    -1,   153,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,
      -1,    -1,    -1,   177,    -1,    -1,    -1,    -1,    -1,   102,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,
      -1,    -1,   177,    -1,    -1,    -1,    -1,   201,    -1,    -1,
      -1,   186,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,    -1,   233,
     102,    -1,    -1,    -1,    -1,   239,   240,   160,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   231,    -1,    -1,    -1,
      -1,   255,   256,    -1,   239,   240,    56,    -1,    -1,    -1,
      -1,    -1,   266,   267,    -1,    -1,    -1,    -1,    -1,    -1,
     222,   256,    -1,    -1,    -1,   227,    -1,    -1,    -1,    -1,
      -1,    -1,   267,    -1,    -1,    -1,    -1,    -1,   160,   293,
      -1,   295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   222,
      -1,    -1,   102,   307,   227,   309,    -1,    -1,   293,    -1,
     295,   315,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     305,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,    -1,
     315,   165,    -1,    -1,    -1,    -1,   288,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    -1,   349,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   227,    -1,    -1,    -1,    -1,
     160,    -1,    -1,    -1,   349,    -1,    -1,    -1,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,    -1,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   297,   102,   227,   165,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   160,    -1,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,    -1,    -1,    -1,    -1,    -1,    -1,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,    -1,    -1,
      -1,   227,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
      -1,    -1,    -1,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,    40,    -1,    -1,    43,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    -1,    64,    65,    -1,    67,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    86,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,    -1,    -1,    -1,   145,    -1,    -1,
     148,    -1,    -1,    -1,   152,   153,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   180,    -1,    -1,   183,   184,   185,    -1,    -1,
     188,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    43,    -1,   203,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   220,   221,   222,    65,    -1,    67,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,   234,    77,   236,    79,
      -1,    -1,    -1,    -1,    84,   243,    86,    87,    88,   247,
      -1,    -1,    -1,   251,    94,   253,    96,   255,    -1,    -1,
      -1,    -1,   260,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,
      -1,    -1,   280,    -1,    -1,    -1,    -1,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   296,   297,
      -1,    -1,    -1,    -1,    -1,   145,    -1,    -1,    -1,    -1,
     308,    -1,   310,   153,    -1,   155,   156,    -1,   316,   159,
      -1,   319,   320,   163,    -1,   165,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   188,   189,
      -1,    -1,   350,   193,    -1,    -1,    -1,    -1,    -1,   357,
      -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     220,   221,    -1,    -1,    -1,    -1,    -1,    -1,   228,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   253,    -1,   255,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     280,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   296,   297,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,
      -1,    -1,   312,    -1,    -1,    -1,    -1,    -1,   318,    -1,
     320,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   357
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    40,    43,    46,    59,    64,    65,    67,    68,    69,
      77,    84,    86,    87,    96,    97,   119,   128,   141,   145,
     148,   152,   153,   159,   165,   180,   183,   184,   185,   188,
     189,   203,   220,   221,   222,   234,   236,   243,   247,   251,
     253,   255,   260,   274,   280,   296,   297,   308,   310,   316,
     319,   320,   350,   357,   363,    66,    11,    53,    71,   101,
     120,   124,   138,   301,   397,     3,     4,   301,   364,   402,
     193,   199,   238,   264,   311,   356,   404,   293,     4,    39,
     112,   200,   253,   409,    27,   154,   178,   182,   235,   276,
     284,   285,   379,   411,    83,   100,   180,   224,   260,   412,
      39,    59,   112,   200,   297,   364,   421,     4,    18,    39,
      56,   102,   121,   160,   200,   208,   216,   217,   222,   227,
     304,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     353,   358,   359,   366,   374,   375,   376,   423,    32,   424,
     366,    43,    46,    76,    84,   146,   198,   223,   225,   253,
     320,   365,   366,    64,   364,   426,   148,   427,    40,    43,
      46,    65,    67,    68,    69,    77,    79,    84,    86,    87,
      88,    94,    96,   127,   145,   153,   155,   156,   159,   163,
     165,   188,   189,   193,   203,   220,   221,   228,   253,   255,
     280,   296,   297,   305,   312,   318,   320,   357,   428,    83,
     100,   472,    18,    40,    43,    77,    84,    95,    96,   102,
     127,   145,   159,   160,   166,   188,   227,   280,   291,   320,
     475,    66,   366,    88,   117,   191,   206,   268,   310,   320,
     481,    15,    25,   113,   127,   162,   213,   226,   484,   237,
     502,     5,    66,    88,   143,   310,   357,   366,   503,     5,
     504,    57,   134,   232,   247,   311,   520,    45,    64,    66,
     187,   246,   291,   300,   540,    66,   209,   352,   358,   360,
     541,    38,   200,   238,   301,   364,   374,   376,   542,     5,
     310,   320,   366,   545,    70,   173,   252,   261,   546,     4,
     547,    88,   520,    61,   291,   314,   554,   200,   301,   364,
     555,    25,   113,   127,   213,   226,   557,    50,   100,   109,
     140,   303,   572,   573,     4,    36,    47,    74,   153,   192,
     261,   290,   298,   314,   392,     4,   127,   212,   574,   301,
     364,   576,    15,    22,   248,   251,   375,   577,   237,   581,
     301,   364,   582,     0,     5,   144,   366,    59,   364,   398,
     277,     5,     4,   301,   364,   399,     5,    31,   289,   400,
     126,   364,   401,   126,   364,   403,   364,     4,   199,   250,
     257,   407,   193,   311,   355,   356,   364,   406,   366,   142,
     181,   405,   203,   364,    78,   177,   257,   364,   408,     5,
     364,     4,   253,   410,   364,   364,     5,   233,   413,    30,
     414,     5,   415,     5,   419,     5,    30,   420,   364,     8,
       9,    10,   364,   370,   371,   372,   373,   364,   364,    39,
     112,   200,   364,   422,   364,   200,   374,   376,   364,    34,
     107,   130,   131,   139,   157,   167,   381,   364,     4,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   118,
      66,    53,    71,    88,   101,   120,   124,   138,   179,   431,
     120,   433,   193,   199,   238,   264,   311,   355,   356,   364,
     416,   434,   293,   437,   173,   438,   173,   182,   440,    65,
      66,    69,    92,   173,   192,   214,   280,   349,   374,   442,
     364,   376,   445,    59,   297,   374,   446,   288,   374,   376,
     447,    32,   448,   374,   376,   449,     4,   374,   376,   450,
      44,    59,    81,   101,   118,   122,   150,   151,   205,   215,
     277,   278,   349,   454,   219,   313,   460,    66,     5,    89,
       4,    88,   122,   452,     5,    65,   376,   451,    15,   520,
      45,    66,    81,   187,   246,   291,   300,   461,    66,   238,
     462,   292,    61,   291,   314,   463,    20,   138,   245,   275,
     464,    36,    47,    74,   153,   192,   261,   314,   465,   376,
      89,    15,   202,   470,   374,   473,    66,    72,   476,    30,
     477,    43,    87,   198,   478,   153,   224,   267,   306,   479,
     374,    17,    58,   116,   178,   297,   374,   480,     5,     4,
     199,   483,     5,     4,     4,   122,   364,     4,     5,   253,
     485,     5,   487,     5,   118,   198,   253,   278,   488,    94,
     112,   193,   501,     5,   499,     5,   278,   500,     4,     5,
     366,   366,   364,   364,     5,     4,     5,    60,    66,    73,
      75,    80,    83,    89,   100,   106,   115,   132,   153,   168,
     179,   180,   201,   224,   238,   240,   255,   260,   267,   274,
     293,   306,   307,   309,   349,   505,    91,   174,   265,   283,
     378,     5,     4,   203,   210,   211,   246,   354,   377,   364,
     374,   364,     5,   144,   364,    39,   112,   364,   544,   366,
     364,   374,   376,   543,   364,   381,   364,     4,   375,    54,
      90,   144,   253,   548,     4,     4,   364,     4,   153,   267,
     549,     5,   374,     4,    39,   112,   364,   556,   364,    98,
      61,   122,   253,   281,   558,   122,   571,    61,   118,   122,
     160,   198,   249,   253,   278,   281,   292,   560,   561,    61,
     122,   281,   570,     5,     4,    33,   108,   209,   553,    66,
     366,   393,    66,   366,   394,    66,   366,   395,    12,   195,
     552,   364,     4,   364,   231,   364,   396,   364,   278,     4,
     364,   364,     4,   232,   301,   580,     4,   295,   578,     4,
     295,   579,     4,   381,   126,   364,   583,   364,   364,     4,
       5,   364,    11,   364,   364,   364,    29,    95,   166,   257,
     262,   380,   380,     4,   203,   364,   364,     4,     4,     4,
     364,   364,   364,   364,     4,     4,     5,     5,   374,     5,
     364,   364,   370,   372,   372,   374,   364,   364,   364,   364,
     364,   364,   364,   374,   376,   373,   364,   364,   373,   364,
       5,   277,   104,   193,   432,   199,   257,   435,   173,    78,
     177,   257,   436,   142,   181,   417,   417,     4,   439,     4,
     441,   199,   264,   443,   182,   444,   173,   381,   364,   364,
     374,   374,   381,   381,   381,   374,   381,   364,   374,     4,
     457,     4,   376,   455,   202,     4,   169,   320,   456,   202,
     374,     4,   135,   301,   459,     5,     5,   429,     4,   202,
     137,   254,   367,   364,     4,     5,    60,    66,   115,   132,
     147,   153,   158,   214,   233,   238,   240,   266,   267,   274,
     293,   349,   514,   376,   194,   194,    66,   466,    66,   467,
      66,   468,   231,   469,   364,     5,   430,   232,   471,   375,
     381,     5,   374,   374,   374,   374,     4,   366,     4,     4,
     202,   364,    13,    14,    61,   196,   197,   271,   281,   282,
     313,    87,     5,     5,    13,    14,    61,   196,   197,   271,
     281,   282,   286,   313,    87,   160,   165,   375,   491,   496,
      87,   160,     5,   489,     4,     4,    13,    61,   196,   271,
     281,   313,     5,     5,     4,   364,   375,    19,    20,    21,
      48,    49,    52,    55,    62,    66,    74,    75,    82,    83,
     100,   106,   110,   111,   114,   132,   153,   177,   201,   231,
     233,   239,   240,   255,   256,   266,   267,   293,   295,   307,
     309,   315,   349,    66,    80,    89,   100,   132,   153,   201,
     240,   267,   307,   309,     4,    29,   164,   219,   245,   508,
       5,    63,   105,   242,   258,   259,   351,   352,   513,   100,
     506,    16,   267,   511,    39,   112,   200,   512,     4,     5,
      16,   218,   302,   364,   267,   513,   521,   127,   513,   522,
      35,    39,   112,   136,   200,   301,   364,   523,   374,   366,
      92,   100,   106,   123,   129,   153,   161,   201,   209,   255,
     267,   283,   526,    39,   112,   200,     5,   267,   294,   530,
      16,   125,   171,   218,   302,   531,   295,   366,   532,     5,
     100,   106,   310,    16,    16,     4,   364,   364,   364,   364,
     364,   364,   381,   364,   364,   373,   364,     4,   381,     4,
      39,   112,   200,   272,   550,    39,   112,   200,   272,   551,
       4,    98,     5,     5,    87,     4,     5,     5,    87,     5,
     561,    61,   122,   160,   281,   565,    61,   122,   281,   569,
      87,   160,    61,   122,   281,   563,     4,    61,   122,   281,
     562,     5,     5,     4,     4,     5,     5,     5,   364,   364,
     364,     4,   364,   575,   364,   364,   375,    64,     4,     4,
       5,     4,     4,     5,     4,    98,   269,   382,   364,   364,
      11,     5,    11,   364,   364,    11,     4,    11,     4,     4,
     364,   364,   364,     4,   366,     4,     4,   381,   374,   381,
     364,   364,   364,   374,   364,   373,   364,   364,     5,     5,
     364,   376,   364,   374,   364,   381,   381,   382,   382,   382,
     381,   373,   364,   381,   364,   367,   458,   169,     5,     4,
     381,   160,   160,     4,     5,     4,     4,   364,   453,    37,
      37,   364,    19,    20,    21,    48,    49,    52,    59,    62,
      66,    74,    75,    82,   110,   111,   114,   132,   153,   177,
     186,   231,   239,   240,   256,   267,   293,   295,   305,   315,
     349,    66,   132,   158,   240,   293,    29,   164,   219,   245,
     515,   364,   214,   364,   516,    16,   364,   266,   526,   266,
     214,   364,   517,   295,   518,    16,    99,   364,   364,     5,
     382,    56,   374,     4,     5,   482,   364,     5,     5,     5,
     160,   189,   386,   386,   168,   273,   384,     4,     4,     5,
       5,   486,   279,   279,     5,     5,     5,    16,   162,   385,
     385,   384,     4,     4,   384,     5,     5,   490,   165,   348,
     375,   494,     5,   493,     5,     5,   497,     5,   498,     5,
      13,    14,    61,   196,   197,   271,   281,   282,   286,   313,
       4,     4,     5,     5,   386,   384,     4,     5,     5,   381,
      82,   155,   229,   230,   244,   287,   389,     6,     7,   364,
     369,   245,   245,   245,   106,    39,    66,   100,   106,   112,
     132,   153,   168,   201,   240,   255,   267,   295,   307,   309,
     310,   349,   507,   245,     5,    26,   170,   245,   291,   142,
     106,    21,    49,    52,    82,   111,   114,   233,   266,    21,
      49,    52,    55,    82,   111,   114,   233,   266,   293,    39,
     245,   245,   106,     5,   218,    26,   231,    35,   136,   301,
     364,   270,   277,   251,   374,   526,    39,   133,   231,   291,
     251,   218,     5,     5,   255,    26,   231,     4,     5,     5,
     218,    35,   136,   301,   364,   526,   218,   366,     4,     4,
     364,     5,   313,    21,    26,    48,    49,    51,    52,    62,
      74,    75,    82,    85,   103,   110,   111,   114,   177,   233,
     239,   256,   266,   294,   295,   315,   360,   509,   364,   364,
     364,   364,   364,   513,   374,     5,     4,     5,   364,   364,
     374,   364,   366,   364,   364,   513,     5,     5,   364,   364,
     366,     5,    16,     5,     5,   364,   364,   373,   364,   364,
       4,   364,   364,   112,   364,   364,   112,     4,    41,    42,
     175,   176,   204,   391,   391,    61,   122,   281,   559,   391,
       5,    61,   122,   281,   564,     5,     5,    61,   122,   281,
     566,     4,     5,     5,     4,    61,   122,   281,   568,    61,
     122,   281,   567,     5,     5,     4,     5,     5,     4,   391,
     391,   391,   364,   364,   364,     4,   374,   364,   381,   375,
       5,     5,    11,   364,   374,   376,   364,    11,   364,   364,
     364,    59,   364,     4,     4,   364,   364,    46,   280,   418,
       5,   366,   366,   381,   364,     4,     4,     4,   381,   374,
     364,   364,   364,   364,   381,   374,   382,   373,   364,     4,
     382,   364,     4,   376,     5,    23,    24,    98,   383,     4,
     374,   364,   364,     4,   364,     5,    82,   155,   229,   230,
     244,   287,   374,   376,   245,   245,   245,    20,   245,   374,
     245,    26,   170,   245,   291,   142,    20,   245,   245,   245,
      20,   245,    26,   172,   231,   172,   270,   277,   172,   231,
     299,   526,   133,   172,   231,   291,     4,   255,    26,   172,
     231,   526,   214,   364,   364,   364,   364,   364,   364,   202,
     364,   364,    19,   241,   474,     4,     4,   364,   386,   386,
     386,     4,   386,   386,   386,    13,    14,    61,   196,   197,
     271,   281,   282,   313,   385,   386,   386,   386,   386,   386,
       4,   386,   386,     4,   385,    13,    14,    61,   196,   197,
     271,   281,   282,   313,     5,   492,     5,   495,     5,     5,
      13,    14,    61,   196,   197,   271,   281,   282,   286,   313,
       5,    13,    14,    61,   196,   197,   271,   281,   282,   286,
     313,     5,    13,    14,    61,   196,   197,   271,   281,   282,
     286,   313,    13,    14,    61,   196,   197,   271,   281,   282,
     313,   279,     5,     5,     5,   385,   385,   384,     4,     4,
     384,     5,     4,     4,   386,   386,     4,   386,   386,     5,
     366,   374,   376,     5,   364,   364,     5,   364,     5,   369,
     106,   201,   255,   106,   201,   255,     5,   364,   366,     5,
     364,   374,   366,     5,   369,   245,   245,    20,   245,    20,
     245,   245,    20,   245,   317,   317,     4,     4,     4,   507,
       4,     4,     4,   317,   317,     4,     5,     4,   364,     5,
     364,     5,   369,   366,   374,   374,   364,    26,    48,    51,
      62,    85,   103,   360,   387,     4,   364,   381,   366,     5,
     374,   374,   364,   366,   366,   374,   374,   364,   366,   364,
       5,   364,   231,   231,   364,   364,   231,   364,   231,   364,
     364,   519,   527,   364,   231,   231,   364,   364,   364,   364,
     364,   364,   364,   364,     5,   313,   364,   510,   364,   364,
     231,   364,   364,   364,   364,   374,   381,     5,     4,     4,
     364,   364,   381,   364,   364,   364,   374,   513,   364,   364,
       5,     4,   364,   364,   364,   364,     5,     5,     4,   391,
       5,     5,     4,     4,     4,     5,     5,     4,     4,     5,
       5,     4,     5,     5,     4,   364,   364,   364,   364,   381,
     364,   374,   376,   364,   381,   364,   364,   364,   364,   364,
       5,   364,     4,   364,   364,     4,   374,   364,   381,   182,
     379,   364,   379,   382,   381,   374,   364,   364,     4,   364,
     374,   374,   364,   367,     5,     5,     5,     5,     5,   374,
     381,   374,   374,   374,   374,   376,   374,   381,   374,   374,
     374,   376,   374,   374,   374,   374,   376,   374,   374,   374,
     364,   374,   374,   374,   374,   374,   374,   374,   364,   364,
       4,   364,     5,   364,   386,     5,     5,     5,   384,     4,
       4,     5,   386,   385,     4,   386,     5,     5,     5,   385,
     385,   384,     4,     4,     5,    13,    14,    61,   196,   197,
     271,   281,   282,   313,    13,    14,    61,   196,   197,   271,
     281,   282,   313,    13,    14,    61,   196,   197,   271,   281,
     282,   313,   279,     5,     5,     5,   385,   385,   384,     4,
       4,   384,     5,   279,     5,     5,     5,   385,   385,   384,
       4,     4,   384,     5,   279,     5,     5,     5,   385,   385,
     384,     4,     4,   384,     5,     5,     5,     5,   385,   385,
     384,     4,     4,     5,   385,     4,     4,   385,     4,     4,
     386,     5,   381,   374,   364,   364,   374,   364,     5,   369,
       5,   374,   366,     5,   374,   381,     5,   369,   364,   364,
     364,   364,   364,   364,   364,   364,   364,     4,     4,     5,
       4,     4,   364,   374,   364,     5,   369,   366,   381,   381,
     364,   373,   381,   381,   364,   381,   381,   364,   364,   364,
     364,   364,   364,   364,   364,   364,   364,    55,    66,    93,
     132,   293,   295,   349,   524,   525,   526,   538,   539,   364,
     364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   374,     5,   364,   364,   364,   364,     4,     4,   381,
     382,     5,     5,   373,   364,     4,   381,   374,     4,   391,
     391,   391,   369,   364,   364,   364,   381,   364,   373,   364,
     364,    11,     5,     5,   364,   364,     4,   381,   374,   364,
     364,   382,   383,   364,     5,   364,   374,   376,     5,     5,
       5,     5,     5,   381,   383,   383,   383,   381,   383,   382,
     383,   383,   381,   383,   383,   383,   381,   383,   383,   381,
     374,   383,   381,   383,   383,   381,   383,   381,     4,   374,
     376,     5,   364,     4,   386,   385,     4,   385,     5,     5,
       5,   385,   385,   384,     4,     4,     5,     5,     5,     5,
     385,   385,   384,     4,     4,     5,     5,     5,     5,   385,
     385,   384,     4,     4,     5,   385,   386,   386,   386,   386,
     386,     4,   386,   386,     4,   385,   385,   386,   386,   386,
     386,   386,     4,   386,   386,     4,   385,   385,     4,     4,
     385,     4,   385,   385,     4,     4,     4,   375,   383,     4,
     374,   383,   364,   374,     4,   383,   383,   374,     4,   364,
     364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     374,   383,   364,   374,     4,   373,   373,   374,   373,   373,
     374,   374,   373,   373,   364,   364,   364,   364,   364,   364,
     369,   364,   364,   364,   361,   361,   361,   361,   361,   361,
     361,   525,   361,   369,   364,   364,   364,   364,   369,   364,
     364,   364,   364,   364,   364,   381,   364,   313,   368,   369,
     364,   364,   382,   366,   374,   374,   382,   381,     4,   364,
     373,   364,    59,   364,     5,     5,   364,     4,   379,   383,
       5,   381,     4,     5,     4,     5,   374,     5,   382,   383,
     382,   382,   382,     5,   381,     4,   364,   386,   385,   386,
     386,   386,   386,   386,     4,   386,   386,   385,   386,   386,
     386,   386,   386,     4,   386,   386,   385,   386,   386,   386,
     386,   386,     4,   386,   386,   385,   386,   385,     4,   386,
     386,   385,     4,   386,   385,     4,   385,   385,   381,   374,
     383,     4,   381,   364,   381,   364,   364,   364,   383,     4,
     381,   364,   373,   383,   364,   373,   383,   383,   374,   364,
       4,   388,   388,   364,   364,   388,   369,   388,   527,   374,
     507,     5,     4,     5,     5,     5,     4,   366,   369,   388,
     388,   364,   364,   369,   364,   364,   364,   364,   364,   373,
     364,     5,   527,   364,   388,   366,   528,   529,   381,   381,
     366,   382,     4,     5,   364,     5,     4,     4,   364,     4,
      31,   190,   289,   425,   374,     5,    31,   190,   289,   390,
     374,     4,   425,   364,   385,   386,   385,   386,   385,   386,
     386,   385,   386,   385,   385,   364,   383,   374,   374,   364,
     374,   364,   374,   374,   364,   374,   383,     4,   527,   527,
     368,   364,   527,     4,   527,   381,     5,     4,     4,   527,
     527,   368,   364,     4,   527,   527,   364,   374,   527,   527,
     527,   528,   535,   536,   526,   533,   534,   366,     4,     5,
       5,     4,   193,   311,   356,   364,   416,   425,     4,   374,
     425,     4,   386,   386,   386,   386,   386,   375,   383,   383,
     364,   383,     4,   383,   383,   364,   383,   364,   527,   527,
       4,   364,   527,     5,   364,   527,     4,   364,   527,   381,
     535,   537,   538,   361,   534,     5,     5,   364,   417,   364,
     417,   381,   383,     4,   374,   376,     4,   369,   368,   364,
     364,   368,   364,   374,   538,   366,     5,     5,   364,   364,
     364,   364,   390,     5,   374,   376,   381,   374,   376,   527,
     364,     4,   527,   364,   383,     5,     5,   364,     5,   364,
     381,   381,     4,   527,     4,     5,     5,     5,   368,   368,
     527,   527,   527
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
#line 766 "frame/parser.Y"
    {fr->set3dSyncCmd((yyvsp[(2) - (2)].integer));}
    break;

  case 215:
#line 768 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 216:
#line 771 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 217:
#line 772 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 218:
#line 775 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 219:
#line 776 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 220:
#line 779 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 221:
#line 780 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 222:
#line 783 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 223:
#line 785 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 225:
#line 789 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 226:
#line 790 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 229:
#line 793 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 231:
#line 795 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 232:
#line 798 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 233:
#line 799 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 234:
#line 802 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 235:
#line 803 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 236:
#line 805 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 237:
#line 807 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 238:
#line 808 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 239:
#line 809 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 240:
#line 811 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 241:
#line 813 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 242:
#line 816 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 243:
#line 817 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 244:
#line 820 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 245:
#line 822 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 246:
#line 825 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 247:
#line 827 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 248:
#line 830 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 249:
#line 834 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 250:
#line 835 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 252:
#line 839 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 253:
#line 840 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 254:
#line 841 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 258:
#line 847 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 259:
#line 848 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 261:
#line 851 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 262:
#line 856 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 263:
#line 857 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 264:
#line 860 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 265:
#line 861 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 266:
#line 862 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 267:
#line 863 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 268:
#line 864 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 269:
#line 867 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 270:
#line 868 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 271:
#line 869 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 272:
#line 870 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 273:
#line 873 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 274:
#line 875 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 275:
#line 880 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 276:
#line 885 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 277:
#line 892 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 278:
#line 894 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 279:
#line 895 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 281:
#line 897 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 282:
#line 901 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 283:
#line 903 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 284:
#line 905 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 285:
#line 906 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 291:
#line 917 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 292:
#line 919 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 293:
#line 921 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 294:
#line 926 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 295:
#line 930 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 296:
#line 933 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 297:
#line 934 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 298:
#line 937 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 299:
#line 938 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 300:
#line 940 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 301:
#line 946 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 302:
#line 947 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 303:
#line 948 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 304:
#line 949 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 305:
#line 952 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 306:
#line 953 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 307:
#line 956 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 308:
#line 957 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 309:
#line 960 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 310:
#line 961 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 311:
#line 965 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 312:
#line 967 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 313:
#line 970 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 314:
#line 972 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 315:
#line 975 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 317:
#line 977 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 318:
#line 978 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 319:
#line 979 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 320:
#line 982 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 321:
#line 984 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 322:
#line 985 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 323:
#line 986 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 324:
#line 987 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 325:
#line 991 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 326:
#line 993 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 327:
#line 994 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 328:
#line 995 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 329:
#line 998 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 330:
#line 1000 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 331:
#line 1002 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 332:
#line 1004 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 333:
#line 1007 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 334:
#line 1010 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 335:
#line 1011 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 336:
#line 1012 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 337:
#line 1013 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 338:
#line 1016 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 339:
#line 1017 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 340:
#line 1020 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 341:
#line 1023 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 342:
#line 1024 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 356:
#line 1038 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 359:
#line 1041 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 360:
#line 1042 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 364:
#line 1046 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 365:
#line 1047 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 368:
#line 1050 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 369:
#line 1051 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 371:
#line 1054 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 373:
#line 1056 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 375:
#line 1058 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 377:
#line 1060 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 378:
#line 1062 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 381:
#line 1065 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 382:
#line 1069 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 383:
#line 1071 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 384:
#line 1075 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 385:
#line 1077 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 386:
#line 1080 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 387:
#line 1081 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 388:
#line 1082 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 389:
#line 1083 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 390:
#line 1084 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 391:
#line 1085 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 393:
#line 1087 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 394:
#line 1090 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 395:
#line 1091 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 396:
#line 1092 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 397:
#line 1095 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 398:
#line 1098 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 399:
#line 1100 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 400:
#line 1102 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 401:
#line 1103 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 402:
#line 1104 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 404:
#line 1106 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 406:
#line 1109 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 407:
#line 1115 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 408:
#line 1116 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 409:
#line 1119 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 410:
#line 1120 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 411:
#line 1121 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 412:
#line 1124 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 413:
#line 1125 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 415:
#line 1131 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 416:
#line 1133 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 417:
#line 1135 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 418:
#line 1138 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 420:
#line 1140 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 421:
#line 1144 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 422:
#line 1148 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 424:
#line 1150 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 425:
#line 1151 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 426:
#line 1152 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 427:
#line 1153 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 428:
#line 1154 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 430:
#line 1156 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 431:
#line 1157 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 432:
#line 1160 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 433:
#line 1161 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 434:
#line 1162 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 435:
#line 1165 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 436:
#line 1166 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 437:
#line 1170 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 438:
#line 1172 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 439:
#line 1180 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 440:
#line 1182 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 441:
#line 1184 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 442:
#line 1187 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 443:
#line 1189 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 444:
#line 1190 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 445:
#line 1193 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 446:
#line 1196 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 447:
#line 1198 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 448:
#line 1202 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 449:
#line 1204 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 450:
#line 1207 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 451:
#line 1211 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 452:
#line 1212 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 453:
#line 1214 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 454:
#line 1217 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 455:
#line 1218 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 457:
#line 1222 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 458:
#line 1223 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 459:
#line 1224 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 460:
#line 1227 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 461:
#line 1229 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 462:
#line 1230 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 464:
#line 1232 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 468:
#line 1236 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 469:
#line 1237 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 470:
#line 1238 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 471:
#line 1240 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 473:
#line 1242 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 474:
#line 1245 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 475:
#line 1247 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 476:
#line 1249 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 477:
#line 1250 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 478:
#line 1251 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 479:
#line 1252 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 480:
#line 1255 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 481:
#line 1256 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 482:
#line 1260 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 483:
#line 1262 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 484:
#line 1265 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 485:
#line 1268 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 486:
#line 1269 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 487:
#line 1271 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 488:
#line 1273 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 489:
#line 1275 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 490:
#line 1278 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 491:
#line 1279 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 492:
#line 1280 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 493:
#line 1283 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 494:
#line 1284 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 495:
#line 1285 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 496:
#line 1286 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 497:
#line 1287 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 498:
#line 1288 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 499:
#line 1289 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 500:
#line 1292 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 501:
#line 1295 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 502:
#line 1296 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 503:
#line 1297 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 504:
#line 1300 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 505:
#line 1301 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 506:
#line 1302 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 507:
#line 1303 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 508:
#line 1304 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 509:
#line 1305 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 514:
#line 1312 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 515:
#line 1313 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 516:
#line 1314 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 517:
#line 1317 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 518:
#line 1318 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 519:
#line 1321 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 520:
#line 1322 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 521:
#line 1325 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 522:
#line 1326 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 523:
#line 1329 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 524:
#line 1330 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 525:
#line 1333 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 527:
#line 1335 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 528:
#line 1338 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 529:
#line 1339 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 531:
#line 1343 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 532:
#line 1347 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 533:
#line 1350 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 534:
#line 1357 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 535:
#line 1358 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 536:
#line 1361 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 537:
#line 1362 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 540:
#line 1365 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 541:
#line 1366 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 542:
#line 1367 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 543:
#line 1368 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 545:
#line 1370 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 546:
#line 1371 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 547:
#line 1372 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 549:
#line 1374 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 550:
#line 1375 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 551:
#line 1376 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 552:
#line 1377 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 554:
#line 1381 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 555:
#line 1384 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 556:
#line 1385 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 557:
#line 1388 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 558:
#line 1389 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 559:
#line 1390 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 560:
#line 1391 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 561:
#line 1394 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 562:
#line 1395 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 563:
#line 1396 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 564:
#line 1397 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 565:
#line 1400 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 566:
#line 1401 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 567:
#line 1402 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 568:
#line 1403 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 569:
#line 1404 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 570:
#line 1405 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 571:
#line 1408 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 572:
#line 1409 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 573:
#line 1410 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 576:
#line 1414 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 577:
#line 1415 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 578:
#line 1418 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 579:
#line 1421 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 580:
#line 1422 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 581:
#line 1426 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 582:
#line 1428 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 583:
#line 1429 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 590:
#line 1441 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 591:
#line 1443 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 592:
#line 1445 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 593:
#line 1446 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 594:
#line 1448 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 595:
#line 1450 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 596:
#line 1452 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 597:
#line 1454 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 598:
#line 1456 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 600:
#line 1460 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 601:
#line 1461 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 602:
#line 1462 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 603:
#line 1463 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 604:
#line 1464 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 605:
#line 1466 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 606:
#line 1467 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 607:
#line 1468 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 608:
#line 1469 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 609:
#line 1472 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 610:
#line 1476 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 611:
#line 1478 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 612:
#line 1480 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 613:
#line 1482 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 614:
#line 1484 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 615:
#line 1486 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 616:
#line 1488 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 617:
#line 1490 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 618:
#line 1493 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 619:
#line 1495 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 620:
#line 1497 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 626:
#line 1505 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 627:
#line 1506 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 628:
#line 1507 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 629:
#line 1508 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 630:
#line 1509 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 631:
#line 1510 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 632:
#line 1512 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 633:
#line 1514 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 634:
#line 1515 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 635:
#line 1516 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 636:
#line 1517 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 637:
#line 1520 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 638:
#line 1521 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 639:
#line 1522 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 640:
#line 1523 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 641:
#line 1524 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 642:
#line 1526 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 643:
#line 1527 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 644:
#line 1528 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 645:
#line 1529 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 651:
#line 1540 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 652:
#line 1543 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 653:
#line 1546 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 654:
#line 1549 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 655:
#line 1552 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 656:
#line 1555 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 657:
#line 1558 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 658:
#line 1561 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 659:
#line 1564 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 660:
#line 1569 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 661:
#line 1572 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 662:
#line 1575 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 663:
#line 1578 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 664:
#line 1581 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 665:
#line 1584 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 666:
#line 1587 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 667:
#line 1590 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 668:
#line 1593 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 669:
#line 1596 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 670:
#line 1599 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 671:
#line 1604 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 672:
#line 1607 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 673:
#line 1610 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 674:
#line 1613 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 675:
#line 1616 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 676:
#line 1619 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 677:
#line 1622 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 678:
#line 1625 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 679:
#line 1628 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 680:
#line 1633 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 681:
#line 1635 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 682:
#line 1637 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 683:
#line 1639 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 684:
#line 1641 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 685:
#line 1643 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 686:
#line 1648 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 687:
#line 1650 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 688:
#line 1652 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 689:
#line 1656 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 690:
#line 1659 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 691:
#line 1662 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 692:
#line 1665 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 693:
#line 1668 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 694:
#line 1671 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 695:
#line 1674 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 696:
#line 1677 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 697:
#line 1680 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 698:
#line 1683 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 699:
#line 1686 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 700:
#line 1690 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 701:
#line 1691 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 702:
#line 1692 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 703:
#line 1693 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 704:
#line 1694 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 705:
#line 1695 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 706:
#line 1697 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 707:
#line 1699 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 708:
#line 1700 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 709:
#line 1701 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 710:
#line 1702 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 711:
#line 1705 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 712:
#line 1706 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 713:
#line 1707 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 714:
#line 1708 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 715:
#line 1709 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 716:
#line 1711 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 717:
#line 1712 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 718:
#line 1713 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 719:
#line 1714 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 720:
#line 1718 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 721:
#line 1720 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 722:
#line 1721 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 723:
#line 1723 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 724:
#line 1725 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 725:
#line 1727 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 726:
#line 1730 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 727:
#line 1731 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 728:
#line 1734 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 729:
#line 1735 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 730:
#line 1736 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 731:
#line 1739 "frame/parser.Y"
    {;}
    break;

  case 732:
#line 1742 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 733:
#line 1743 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 734:
#line 1744 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 735:
#line 1745 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 736:
#line 1746 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 737:
#line 1747 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 738:
#line 1748 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 739:
#line 1752 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 741:
#line 1760 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 742:
#line 1761 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 743:
#line 1763 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 744:
#line 1765 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 745:
#line 1766 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 746:
#line 1767 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 748:
#line 1768 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 751:
#line 1771 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 752:
#line 1772 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 753:
#line 1774 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 754:
#line 1776 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 755:
#line 1778 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 756:
#line 1781 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 757:
#line 1783 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 758:
#line 1784 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 759:
#line 1786 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 760:
#line 1789 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 761:
#line 1792 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
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
#line 1824 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 771:
#line 1825 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 772:
#line 1827 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 773:
#line 1829 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 774:
#line 1831 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 775:
#line 1833 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 776:
#line 1834 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 777:
#line 1836 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 778:
#line 1838 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 779:
#line 1841 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 780:
#line 1845 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 781:
#line 1849 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 782:
#line 1851 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 783:
#line 1853 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 784:
#line 1855 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 785:
#line 1857 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 786:
#line 1859 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 787:
#line 1861 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 788:
#line 1863 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 789:
#line 1865 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 790:
#line 1867 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 791:
#line 1869 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 792:
#line 1871 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 793:
#line 1873 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 794:
#line 1875 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 795:
#line 1876 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 796:
#line 1878 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 797:
#line 1880 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 798:
#line 1881 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 799:
#line 1882 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 800:
#line 1884 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 801:
#line 1886 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 802:
#line 1887 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 803:
#line 1888 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 804:
#line 1889 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 805:
#line 1891 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 806:
#line 1893 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 807:
#line 1897 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 808:
#line 1900 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 809:
#line 1903 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 810:
#line 1907 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 811:
#line 1911 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 812:
#line 1916 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 813:
#line 1920 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 814:
#line 1921 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 815:
#line 1922 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 816:
#line 1924 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 817:
#line 1926 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 818:
#line 1930 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 819:
#line 1931 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 820:
#line 1932 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 821:
#line 1934 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 822:
#line 1937 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 823:
#line 1940 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 824:
#line 1943 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 825:
#line 1944 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 826:
#line 1948 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 827:
#line 1952 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 828:
#line 1954 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 829:
#line 1955 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 830:
#line 1957 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 831:
#line 1960 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 832:
#line 1963 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 833:
#line 1964 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 834:
#line 1966 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 835:
#line 1967 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 836:
#line 1968 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 837:
#line 1970 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 838:
#line 1971 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 839:
#line 1973 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 840:
#line 1976 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 841:
#line 1979 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 842:
#line 1981 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 843:
#line 1982 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 847:
#line 1987 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 848:
#line 1988 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 849:
#line 1990 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 850:
#line 1992 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 851:
#line 1994 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 852:
#line 1995 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 856:
#line 2001 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 857:
#line 2002 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 858:
#line 2003 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 859:
#line 2004 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 860:
#line 2005 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 861:
#line 2006 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 862:
#line 2007 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 863:
#line 2008 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 864:
#line 2009 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 865:
#line 2010 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 866:
#line 2012 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 867:
#line 2014 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 868:
#line 2015 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 869:
#line 2016 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 870:
#line 2017 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 871:
#line 2018 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 872:
#line 2020 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 873:
#line 2021 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 874:
#line 2022 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 875:
#line 2023 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 876:
#line 2024 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 877:
#line 2026 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 878:
#line 2027 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 879:
#line 2028 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 880:
#line 2029 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 881:
#line 2030 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 882:
#line 2031 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 883:
#line 2034 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 884:
#line 2035 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 885:
#line 2036 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 886:
#line 2037 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 887:
#line 2038 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 888:
#line 2039 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 889:
#line 2040 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 890:
#line 2041 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 891:
#line 2042 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 892:
#line 2043 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 893:
#line 2044 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 894:
#line 2045 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 895:
#line 2046 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 896:
#line 2047 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 897:
#line 2048 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 898:
#line 2049 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 899:
#line 2050 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 900:
#line 2051 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 901:
#line 2052 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 902:
#line 2053 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 903:
#line 2054 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 904:
#line 2057 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 905:
#line 2058 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 906:
#line 2059 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 907:
#line 2060 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 908:
#line 2061 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 909:
#line 2063 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 910:
#line 2073 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 911:
#line 2081 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 912:
#line 2090 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2098 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2105 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2112 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2120 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2128 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2133 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2138 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2143 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2148 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 922:
#line 2153 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 923:
#line 2158 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 924:
#line 2163 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 925:
#line 2172 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 926:
#line 2182 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 927:
#line 2192 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 928:
#line 2201 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 929:
#line 2209 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 930:
#line 2219 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 931:
#line 2229 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 932:
#line 2239 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 933:
#line 2251 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 934:
#line 2260 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 936:
#line 2268 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 937:
#line 2270 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 938:
#line 2272 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 939:
#line 2277 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 940:
#line 2280 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 941:
#line 2281 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 942:
#line 2282 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 943:
#line 2289 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 944:
#line 2291 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 945:
#line 2292 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 946:
#line 2295 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 947:
#line 2296 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 948:
#line 2297 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 949:
#line 2298 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 950:
#line 2299 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 951:
#line 2300 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 952:
#line 2301 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 954:
#line 2305 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 955:
#line 2306 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 956:
#line 2307 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 957:
#line 2308 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 958:
#line 2309 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 959:
#line 2312 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 960:
#line 2314 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 961:
#line 2316 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 962:
#line 2318 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 963:
#line 2320 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 964:
#line 2322 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 965:
#line 2324 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 966:
#line 2325 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 967:
#line 2326 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 968:
#line 2328 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 969:
#line 2330 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 970:
#line 2333 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 971:
#line 2335 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 972:
#line 2336 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 973:
#line 2337 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 974:
#line 2339 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 975:
#line 2341 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 976:
#line 2344 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 977:
#line 2347 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 978:
#line 2348 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 979:
#line 2349 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 980:
#line 2350 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 981:
#line 2352 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 982:
#line 2353 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 983:
#line 2354 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 984:
#line 2355 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 985:
#line 2356 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 986:
#line 2358 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 987:
#line 2360 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 988:
#line 2362 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 989:
#line 2364 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 990:
#line 2366 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 991:
#line 2367 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 992:
#line 2369 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 993:
#line 2371 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 994:
#line 2373 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 995:
#line 2374 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 996:
#line 2375 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 997:
#line 2377 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 998:
#line 2379 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 999:
#line 2382 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1000:
#line 2385 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1001:
#line 2386 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1002:
#line 2388 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1003:
#line 2391 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1004:
#line 2394 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1005:
#line 2395 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1006:
#line 2396 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1007:
#line 2397 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1008:
#line 2399 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1009:
#line 2401 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1010:
#line 2403 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1011:
#line 2404 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1012:
#line 2406 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1013:
#line 2407 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1014:
#line 2408 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1015:
#line 2409 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1016:
#line 2410 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1017:
#line 2412 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1018:
#line 2414 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1019:
#line 2416 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1020:
#line 2418 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1022:
#line 2420 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1023:
#line 2421 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1024:
#line 2423 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1025:
#line 2425 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1026:
#line 2426 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1027:
#line 2427 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1029:
#line 2429 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1031:
#line 2433 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1032:
#line 2434 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1033:
#line 2435 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1034:
#line 2436 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1035:
#line 2437 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1036:
#line 2438 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1037:
#line 2440 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1038:
#line 2441 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1039:
#line 2443 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1040:
#line 2446 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1041:
#line 2447 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1042:
#line 2448 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1043:
#line 2449 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1044:
#line 2452 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1045:
#line 2453 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1046:
#line 2456 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1047:
#line 2457 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1048:
#line 2460 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1049:
#line 2461 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1050:
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

  case 1051:
#line 2477 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1052:
#line 2478 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1053:
#line 2482 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1054:
#line 2483 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1055:
#line 2487 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1056:
#line 2488 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1057:
#line 2493 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1058:
#line 2497 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1059:
#line 2502 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1060:
#line 2504 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1061:
#line 2507 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1062:
#line 2509 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1063:
#line 2512 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1064:
#line 2514 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1065:
#line 2517 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1066:
#line 2518 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1067:
#line 2519 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1068:
#line 2520 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1069:
#line 2521 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1070:
#line 2522 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1071:
#line 2524 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1074:
#line 2531 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1075:
#line 2532 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1076:
#line 2533 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1077:
#line 2534 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1078:
#line 2535 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1079:
#line 2536 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1082:
#line 2541 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1083:
#line 2542 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1084:
#line 2543 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1085:
#line 2544 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1086:
#line 2545 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1087:
#line 2546 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1088:
#line 2547 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1089:
#line 2548 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1090:
#line 2549 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1091:
#line 2550 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1092:
#line 2551 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1093:
#line 2552 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1096:
#line 2559 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1097:
#line 2560 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1099:
#line 2564 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1100:
#line 2566 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1101:
#line 2567 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1102:
#line 2570 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1103:
#line 2571 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1104:
#line 2572 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1105:
#line 2573 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1106:
#line 2574 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1107:
#line 2575 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1108:
#line 2578 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1109:
#line 2579 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1112:
#line 2587 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1113:
#line 2590 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1114:
#line 2591 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1118:
#line 2598 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1119:
#line 2601 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1120:
#line 2605 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1121:
#line 2606 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1122:
#line 2607 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1123:
#line 2608 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1124:
#line 2609 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1125:
#line 2610 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1126:
#line 2611 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1127:
#line 2612 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1128:
#line 2618 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1129:
#line 2619 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1130:
#line 2620 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1131:
#line 2621 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1132:
#line 2625 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1133:
#line 2626 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1134:
#line 2628 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1135:
#line 2633 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1137:
#line 2635 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1139:
#line 2637 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1140:
#line 2640 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1141:
#line 2642 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1142:
#line 2647 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1143:
#line 2650 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1144:
#line 2651 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1145:
#line 2652 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1146:
#line 2655 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1147:
#line 2657 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1148:
#line 2661 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1149:
#line 2662 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1150:
#line 2666 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1151:
#line 2667 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1152:
#line 2668 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1153:
#line 2669 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1154:
#line 2675 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1155:
#line 2676 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1156:
#line 2682 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1157:
#line 2683 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1158:
#line 2684 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1159:
#line 2685 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1162:
#line 2693 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1163:
#line 2695 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1164:
#line 2696 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1165:
#line 2697 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1166:
#line 2701 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1167:
#line 2702 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1168:
#line 2703 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1169:
#line 2704 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1170:
#line 2707 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1171:
#line 2708 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1172:
#line 2711 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1173:
#line 2712 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1174:
#line 2713 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1175:
#line 2716 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1176:
#line 2717 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1177:
#line 2718 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1178:
#line 2721 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1179:
#line 2722 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1181:
#line 2724 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1182:
#line 2725 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1183:
#line 2728 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1184:
#line 2729 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1185:
#line 2730 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1190:
#line 2737 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1191:
#line 2741 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1192:
#line 2743 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1193:
#line 2745 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1195:
#line 2750 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1196:
#line 2752 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1197:
#line 2754 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1207:
#line 2767 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1208:
#line 2768 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1209:
#line 2769 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1210:
#line 2772 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1211:
#line 2773 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1212:
#line 2774 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1213:
#line 2777 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1214:
#line 2778 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1215:
#line 2779 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1216:
#line 2782 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1217:
#line 2783 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1218:
#line 2784 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1220:
#line 2788 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1221:
#line 2789 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1222:
#line 2790 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1223:
#line 2793 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1224:
#line 2794 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1225:
#line 2795 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1226:
#line 2798 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1227:
#line 2799 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1228:
#line 2800 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1229:
#line 2803 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1230:
#line 2804 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1231:
#line 2805 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1232:
#line 2808 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1233:
#line 2809 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1234:
#line 2810 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1235:
#line 2814 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1236:
#line 2816 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1237:
#line 2818 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1238:
#line 2822 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1239:
#line 2826 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1240:
#line 2828 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1241:
#line 2832 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1242:
#line 2835 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1243:
#line 2836 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1244:
#line 2837 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1245:
#line 2838 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1246:
#line 2841 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1247:
#line 2843 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1248:
#line 2845 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1249:
#line 2848 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1251:
#line 2852 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1252:
#line 2853 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1253:
#line 2854 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1254:
#line 2857 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1255:
#line 2858 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1256:
#line 2862 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1258:
#line 2864 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1261:
#line 2869 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1262:
#line 2870 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1263:
#line 2871 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1264:
#line 2874 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1265:
#line 2875 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1266:
#line 2876 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1267:
#line 2879 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1268:
#line 2881 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1269:
#line 2886 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1270:
#line 2887 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1271:
#line 2890 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1272:
#line 2897 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1273:
#line 2899 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1274:
#line 2901 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1275:
#line 2906 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1277:
#line 2910 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1278:
#line 2911 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1279:
#line 2912 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1280:
#line 2914 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1281:
#line 2916 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1282:
#line 2921 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11101 "frame/parser.C"
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


#line 2925 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

