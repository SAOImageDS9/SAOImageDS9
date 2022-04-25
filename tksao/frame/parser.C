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
     FACTOR_ = 375,
     FALSE_ = 376,
     FILE_ = 377,
     FILL_ = 378,
     FILTER_ = 379,
     FIT_ = 380,
     FITS_ = 381,
     FITSY_ = 382,
     FIXED_ = 383,
     FK4_ = 384,
     FK5_ = 385,
     FONT_ = 386,
     FORMAT_ = 387,
     FOOTPRINT_ = 388,
     FROM_ = 389,
     FRONT_ = 390,
     FULL_ = 391,
     FUNCTION_ = 392,
     GALACTIC_ = 393,
     GAUSSIAN_ = 394,
     GET_ = 395,
     GLOBAL_ = 396,
     GRAPHICS_ = 397,
     GRAY_ = 398,
     GRID_ = 399,
     GZ_ = 400,
     HANDLE_ = 401,
     HAS_ = 402,
     HEAD_ = 403,
     HEADER_ = 404,
     HEIGHT_ = 405,
     HIDE_ = 406,
     HIGHLITE_ = 407,
     HISTEQU_ = 408,
     HISTOGRAM_ = 409,
     HORIZONTAL_ = 410,
     ICRS_ = 411,
     ID_ = 412,
     IIS_ = 413,
     IMAGE_ = 414,
     INCLUDE_ = 415,
     INCR_ = 416,
     INFO_ = 417,
     ITERATION_ = 418,
     IRAF_ = 419,
     IRAFMIN_ = 420,
     J2000_ = 421,
     KEY_ = 422,
     KEYWORD_ = 423,
     LABEL_ = 424,
     LENGTH_ = 425,
     LEVEL_ = 426,
     LIGHTEN_ = 427,
     LITTLE_ = 428,
     LITTLEENDIAN_ = 429,
     LINE_ = 430,
     LINEAR_ = 431,
     LIST_ = 432,
     LOAD_ = 433,
     LOCAL_ = 434,
     LOG_ = 435,
     MACOSX_ = 436,
     MAGNIFIER_ = 437,
     MATCH_ = 438,
     MAP_ = 439,
     MARK_ = 440,
     MARKER_ = 441,
     MASK_ = 442,
     MEDIAN_ = 443,
     MESSAGE_ = 444,
     METHOD_ = 445,
     MINMAX_ = 446,
     MINOR_ = 447,
     MIP_ = 448,
     MMAP_ = 449,
     MMAPINCR_ = 450,
     MOSAIC_ = 451,
     MODE_ = 452,
     MOTION_ = 453,
     MOVE_ = 454,
     NAME_ = 455,
     NAN_ = 456,
     NATIVE_ = 457,
     NAXES_ = 458,
     NEW_ = 459,
     NEXT_ = 460,
     NO_ = 461,
     NONE_ = 462,
     NONNAN_ = 463,
     NONZERO_ = 464,
     NOW_ = 465,
     NRRD_ = 466,
     NUMBER_ = 467,
     OBJECT_ = 468,
     OFF_ = 469,
     ON_ = 470,
     ONLY_ = 471,
     OPTION_ = 472,
     ORIENT_ = 473,
     PAN_ = 474,
     PANNER_ = 475,
     PARSER_ = 476,
     PASTE_ = 477,
     PERF_ = 478,
     PHOTO_ = 479,
     PHYSICAL_ = 480,
     PIXEL_ = 481,
     PLOT2D_ = 482,
     PLOT3D_ = 483,
     POINT_ = 484,
     POINTER_ = 485,
     POLYGON_ = 486,
     POSTSCRIPT_ = 487,
     POW_ = 488,
     PRECISION_ = 489,
     PRINT_ = 490,
     PRESERVE_ = 491,
     PROJECTION_ = 492,
     PROPERTY_ = 493,
     PUBLICATION_ = 494,
     PROS_ = 495,
     QUERY_ = 496,
     RADIAL_ = 497,
     RADIUS_ = 498,
     RANGE_ = 499,
     REGION_ = 500,
     REPLACE_ = 501,
     RESAMPLE_ = 502,
     RESCAN_ = 503,
     RESET_ = 504,
     RESOLUTION_ = 505,
     RGB_ = 506,
     ROOT_ = 507,
     ROTATE_ = 508,
     RULER_ = 509,
     SAMPLE_ = 510,
     SAOIMAGE_ = 511,
     SAOTNG_ = 512,
     SAVE_ = 513,
     SCALE_ = 514,
     SCAN_ = 515,
     SCIENTIFIC_ = 516,
     SCOPE_ = 517,
     SCREEN_ = 518,
     SEGMENT_ = 519,
     SELECT_ = 520,
     SET_ = 521,
     SEXAGESIMAL_ = 522,
     SHAPE_ = 523,
     SHARED_ = 524,
     SHIFT_ = 525,
     SHMID_ = 526,
     SHOW_ = 527,
     SIGMA_ = 528,
     SINH_ = 529,
     SIZE_ = 530,
     SLICE_ = 531,
     SMMAP_ = 532,
     SMOOTH_ = 533,
     SOCKET_ = 534,
     SOCKETGZ_ = 535,
     SOURCE_ = 536,
     SQRT_ = 537,
     SQUARED_ = 538,
     SSHARED_ = 539,
     STATS_ = 540,
     STATUS_ = 541,
     SUM_ = 542,
     SYSTEM_ = 543,
     TABLE_ = 544,
     TAG_ = 545,
     TEMPLATE_ = 546,
     TEXT_ = 547,
     THREADS_ = 548,
     THREED_ = 549,
     THRESHOLD_ = 550,
     THICK_ = 551,
     TRANSPARENCY_ = 552,
     TO_ = 553,
     TOGGLE_ = 554,
     TOPHAT_ = 555,
     TRUE_ = 556,
     TYPE_ = 557,
     UNDO_ = 558,
     UNHIGHLITE_ = 559,
     UNLOAD_ = 560,
     UNSELECT_ = 561,
     UPDATE_ = 562,
     USER_ = 563,
     VALUE_ = 564,
     VAR_ = 565,
     VIEW_ = 566,
     VECTOR_ = 567,
     VERSION_ = 568,
     VERTEX_ = 569,
     VERTICAL_ = 570,
     WARP_ = 571,
     WCS_ = 572,
     WCSA_ = 573,
     WCSB_ = 574,
     WCSC_ = 575,
     WCSD_ = 576,
     WCSE_ = 577,
     WCSF_ = 578,
     WCSG_ = 579,
     WCSH_ = 580,
     WCSI_ = 581,
     WCSJ_ = 582,
     WCSK_ = 583,
     WCSL_ = 584,
     WCSM_ = 585,
     WCSN_ = 586,
     WCSO_ = 587,
     WCSP_ = 588,
     WCSQ_ = 589,
     WCSR_ = 590,
     WCSS_ = 591,
     WCST_ = 592,
     WCSU_ = 593,
     WCSV_ = 594,
     WCSW_ = 595,
     WCSX_ = 596,
     WCSY_ = 597,
     WCSZ_ = 598,
     WCS0_ = 599,
     WFPC2_ = 600,
     WIDTH_ = 601,
     WIN32_ = 602,
     XML_ = 603,
     XY_ = 604,
     YES_ = 605,
     ZERO_ = 606,
     ZMAX_ = 607,
     ZSCALE_ = 608,
     ZOOM_ = 609
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
#define FACTOR_ 375
#define FALSE_ 376
#define FILE_ 377
#define FILL_ 378
#define FILTER_ 379
#define FIT_ 380
#define FITS_ 381
#define FITSY_ 382
#define FIXED_ 383
#define FK4_ 384
#define FK5_ 385
#define FONT_ 386
#define FORMAT_ 387
#define FOOTPRINT_ 388
#define FROM_ 389
#define FRONT_ 390
#define FULL_ 391
#define FUNCTION_ 392
#define GALACTIC_ 393
#define GAUSSIAN_ 394
#define GET_ 395
#define GLOBAL_ 396
#define GRAPHICS_ 397
#define GRAY_ 398
#define GRID_ 399
#define GZ_ 400
#define HANDLE_ 401
#define HAS_ 402
#define HEAD_ 403
#define HEADER_ 404
#define HEIGHT_ 405
#define HIDE_ 406
#define HIGHLITE_ 407
#define HISTEQU_ 408
#define HISTOGRAM_ 409
#define HORIZONTAL_ 410
#define ICRS_ 411
#define ID_ 412
#define IIS_ 413
#define IMAGE_ 414
#define INCLUDE_ 415
#define INCR_ 416
#define INFO_ 417
#define ITERATION_ 418
#define IRAF_ 419
#define IRAFMIN_ 420
#define J2000_ 421
#define KEY_ 422
#define KEYWORD_ 423
#define LABEL_ 424
#define LENGTH_ 425
#define LEVEL_ 426
#define LIGHTEN_ 427
#define LITTLE_ 428
#define LITTLEENDIAN_ 429
#define LINE_ 430
#define LINEAR_ 431
#define LIST_ 432
#define LOAD_ 433
#define LOCAL_ 434
#define LOG_ 435
#define MACOSX_ 436
#define MAGNIFIER_ 437
#define MATCH_ 438
#define MAP_ 439
#define MARK_ 440
#define MARKER_ 441
#define MASK_ 442
#define MEDIAN_ 443
#define MESSAGE_ 444
#define METHOD_ 445
#define MINMAX_ 446
#define MINOR_ 447
#define MIP_ 448
#define MMAP_ 449
#define MMAPINCR_ 450
#define MOSAIC_ 451
#define MODE_ 452
#define MOTION_ 453
#define MOVE_ 454
#define NAME_ 455
#define NAN_ 456
#define NATIVE_ 457
#define NAXES_ 458
#define NEW_ 459
#define NEXT_ 460
#define NO_ 461
#define NONE_ 462
#define NONNAN_ 463
#define NONZERO_ 464
#define NOW_ 465
#define NRRD_ 466
#define NUMBER_ 467
#define OBJECT_ 468
#define OFF_ 469
#define ON_ 470
#define ONLY_ 471
#define OPTION_ 472
#define ORIENT_ 473
#define PAN_ 474
#define PANNER_ 475
#define PARSER_ 476
#define PASTE_ 477
#define PERF_ 478
#define PHOTO_ 479
#define PHYSICAL_ 480
#define PIXEL_ 481
#define PLOT2D_ 482
#define PLOT3D_ 483
#define POINT_ 484
#define POINTER_ 485
#define POLYGON_ 486
#define POSTSCRIPT_ 487
#define POW_ 488
#define PRECISION_ 489
#define PRINT_ 490
#define PRESERVE_ 491
#define PROJECTION_ 492
#define PROPERTY_ 493
#define PUBLICATION_ 494
#define PROS_ 495
#define QUERY_ 496
#define RADIAL_ 497
#define RADIUS_ 498
#define RANGE_ 499
#define REGION_ 500
#define REPLACE_ 501
#define RESAMPLE_ 502
#define RESCAN_ 503
#define RESET_ 504
#define RESOLUTION_ 505
#define RGB_ 506
#define ROOT_ 507
#define ROTATE_ 508
#define RULER_ 509
#define SAMPLE_ 510
#define SAOIMAGE_ 511
#define SAOTNG_ 512
#define SAVE_ 513
#define SCALE_ 514
#define SCAN_ 515
#define SCIENTIFIC_ 516
#define SCOPE_ 517
#define SCREEN_ 518
#define SEGMENT_ 519
#define SELECT_ 520
#define SET_ 521
#define SEXAGESIMAL_ 522
#define SHAPE_ 523
#define SHARED_ 524
#define SHIFT_ 525
#define SHMID_ 526
#define SHOW_ 527
#define SIGMA_ 528
#define SINH_ 529
#define SIZE_ 530
#define SLICE_ 531
#define SMMAP_ 532
#define SMOOTH_ 533
#define SOCKET_ 534
#define SOCKETGZ_ 535
#define SOURCE_ 536
#define SQRT_ 537
#define SQUARED_ 538
#define SSHARED_ 539
#define STATS_ 540
#define STATUS_ 541
#define SUM_ 542
#define SYSTEM_ 543
#define TABLE_ 544
#define TAG_ 545
#define TEMPLATE_ 546
#define TEXT_ 547
#define THREADS_ 548
#define THREED_ 549
#define THRESHOLD_ 550
#define THICK_ 551
#define TRANSPARENCY_ 552
#define TO_ 553
#define TOGGLE_ 554
#define TOPHAT_ 555
#define TRUE_ 556
#define TYPE_ 557
#define UNDO_ 558
#define UNHIGHLITE_ 559
#define UNLOAD_ 560
#define UNSELECT_ 561
#define UPDATE_ 562
#define USER_ 563
#define VALUE_ 564
#define VAR_ 565
#define VIEW_ 566
#define VECTOR_ 567
#define VERSION_ 568
#define VERTEX_ 569
#define VERTICAL_ 570
#define WARP_ 571
#define WCS_ 572
#define WCSA_ 573
#define WCSB_ 574
#define WCSC_ 575
#define WCSD_ 576
#define WCSE_ 577
#define WCSF_ 578
#define WCSG_ 579
#define WCSH_ 580
#define WCSI_ 581
#define WCSJ_ 582
#define WCSK_ 583
#define WCSL_ 584
#define WCSM_ 585
#define WCSN_ 586
#define WCSO_ 587
#define WCSP_ 588
#define WCSQ_ 589
#define WCSR_ 590
#define WCSS_ 591
#define WCST_ 592
#define WCSU_ 593
#define WCSV_ 594
#define WCSW_ 595
#define WCSX_ 596
#define WCSY_ 597
#define WCSZ_ 598
#define WCS0_ 599
#define WFPC2_ 600
#define WIDTH_ 601
#define WIN32_ 602
#define XML_ 603
#define XY_ 604
#define YES_ 605
#define ZERO_ 606
#define ZMAX_ 607
#define ZSCALE_ 608
#define ZOOM_ 609




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
#line 866 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 879 "frame/parser.C"

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
#define YYFINAL  359
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5562

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  359
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  221
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1280
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2817

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   609

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
       2,   358,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   356,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   357,   355,
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
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    13,    17,    21,    24,    26,
      28,    31,    35,    38,    41,    44,    47,    50,    53,    56,
      59,    62,    65,    68,    70,    73,    77,    80,    84,    87,
      90,    93,    96,   100,   103,   107,   110,   113,   116,   119,
     122,   125,   127,   131,   134,   137,   140,   142,   145,   148,
     151,   153,   156,   158,   161,   164,   167,   170,   172,   174,
     176,   178,   181,   184,   187,   190,   193,   196,   199,   202,
     205,   208,   210,   212,   214,   216,   218,   220,   222,   224,
     226,   227,   230,   233,   235,   237,   238,   240,   242,   244,
     246,   248,   250,   252,   255,   258,   261,   264,   266,   268,
     270,   272,   274,   276,   278,   280,   282,   284,   286,   288,
     290,   292,   294,   296,   298,   300,   302,   304,   306,   308,
     310,   312,   314,   316,   318,   320,   322,   324,   326,   328,
     330,   332,   334,   335,   337,   339,   341,   343,   345,   346,
     348,   350,   352,   354,   356,   358,   360,   362,   364,   366,
     368,   370,   372,   374,   376,   378,   380,   381,   383,   385,
     387,   389,   391,   393,   395,   396,   398,   400,   401,   403,
     405,   407,   408,   410,   412,   413,   415,   417,   418,   420,
     422,   423,   425,   427,   429,   431,   433,   435,   437,   438,
     440,   442,   444,   446,   448,   450,   452,   453,   455,   457,
     459,   460,   462,   464,   466,   468,   470,   473,   476,   479,
     482,   485,   488,   491,   494,   496,   499,   501,   504,   506,
     509,   512,   519,   522,   527,   530,   533,   536,   540,   543,
     546,   548,   551,   553,   556,   561,   567,   570,   574,   580,
     587,   589,   591,   593,   601,   613,   622,   635,   637,   640,
     643,   645,   647,   650,   653,   656,   659,   663,   667,   670,
     673,   675,   677,   679,   681,   683,   685,   687,   690,   693,
     696,   698,   702,   705,   708,   711,   718,   729,   731,   734,
     736,   743,   754,   756,   759,   762,   765,   768,   771,   774,
     788,   802,   815,   828,   830,   831,   833,   835,   840,   847,
     849,   851,   853,   855,   857,   859,   861,   863,   865,   870,
     874,   879,   880,   887,   896,   899,   903,   907,   911,   912,
     917,   922,   927,   932,   936,   940,   942,   946,   952,   957,
     962,   966,   969,   970,   972,   974,   978,   981,   984,   987,
     990,   993,   996,   999,  1002,  1005,  1008,  1011,  1014,  1017,
    1020,  1022,  1025,  1028,  1031,  1036,  1040,  1043,  1046,  1049,
    1051,  1055,  1058,  1061,  1063,  1066,  1075,  1078,  1080,  1083,
    1085,  1088,  1090,  1095,  1099,  1102,  1104,  1112,  1121,  1129,
    1138,  1140,  1142,  1144,  1147,  1149,  1151,  1154,  1156,  1157,
    1160,  1163,  1165,  1166,  1169,  1172,  1174,  1176,  1179,  1182,
    1185,  1187,  1189,  1191,  1193,  1195,  1197,  1198,  1200,  1203,
    1205,  1210,  1216,  1217,  1220,  1222,  1228,  1231,  1234,  1236,
    1238,  1240,  1243,  1245,  1248,  1250,  1252,  1253,  1255,  1257,
    1258,  1260,  1266,  1273,  1277,  1284,  1288,  1290,  1294,  1296,
    1298,  1300,  1304,  1311,  1319,  1325,  1327,  1329,  1334,  1340,
    1342,  1346,  1347,  1349,  1352,  1354,  1359,  1361,  1364,  1366,
    1369,  1373,  1376,  1378,  1381,  1383,  1388,  1391,  1393,  1395,
    1399,  1401,  1404,  1408,  1411,  1412,  1414,  1416,  1421,  1424,
    1425,  1427,  1431,  1436,  1441,  1442,  1444,  1446,  1448,  1450,
    1452,  1454,  1456,  1458,  1460,  1462,  1464,  1466,  1468,  1470,
    1472,  1475,  1477,  1480,  1482,  1485,  1488,  1491,  1494,  1496,
    1498,  1500,  1501,  1503,  1504,  1506,  1507,  1509,  1510,  1512,
    1513,  1516,  1519,  1520,  1522,  1525,  1527,  1534,  1540,  1542,
    1544,  1546,  1549,  1552,  1555,  1557,  1559,  1561,  1563,  1566,
    1568,  1570,  1572,  1575,  1577,  1579,  1581,  1584,  1587,  1590,
    1591,  1593,  1594,  1596,  1598,  1600,  1602,  1604,  1606,  1608,
    1610,  1613,  1616,  1619,  1621,  1624,  1628,  1630,  1633,  1636,
    1641,  1648,  1650,  1661,  1663,  1666,  1670,  1674,  1677,  1680,
    1683,  1686,  1689,  1692,  1695,  1700,  1705,  1710,  1714,  1718,
    1724,  1729,  1734,  1739,  1743,  1747,  1751,  1755,  1758,  1761,
    1766,  1770,  1774,  1778,  1782,  1787,  1792,  1797,  1802,  1808,
    1813,  1820,  1828,  1833,  1838,  1844,  1847,  1851,  1855,  1859,
    1862,  1866,  1870,  1874,  1878,  1883,  1887,  1893,  1900,  1904,
    1908,  1913,  1917,  1921,  1925,  1929,  1933,  1939,  1943,  1947,
    1952,  1956,  1959,  1962,  1964,  1968,  1973,  1978,  1983,  1988,
    1993,  2000,  2005,  2010,  2016,  2021,  2026,  2031,  2036,  2042,
    2047,  2054,  2062,  2067,  2072,  2078,  2084,  2090,  2096,  2102,
    2108,  2116,  2122,  2128,  2135,  2140,  2145,  2150,  2155,  2160,
    2167,  2172,  2177,  2183,  2189,  2195,  2201,  2207,  2214,  2220,
    2228,  2237,  2243,  2249,  2256,  2260,  2264,  2268,  2272,  2277,
    2281,  2287,  2294,  2298,  2302,  2307,  2311,  2315,  2319,  2323,
    2327,  2333,  2337,  2341,  2346,  2351,  2356,  2360,  2366,  2371,
    2376,  2379,  2383,  2390,  2397,  2399,  2401,  2403,  2406,  2409,
    2412,  2416,  2420,  2423,  2436,  2439,  2442,  2444,  2448,  2453,
    2456,  2457,  2461,  2463,  2466,  2469,  2472,  2475,  2478,  2483,
    2488,  2493,  2497,  2502,  2508,  2517,  2524,  2529,  2539,  2546,
    2554,  2565,  2577,  2590,  2600,  2606,  2611,  2618,  2622,  2628,
    2634,  2641,  2647,  2652,  2662,  2673,  2685,  2695,  2702,  2709,
    2716,  2723,  2730,  2737,  2744,  2751,  2758,  2766,  2774,  2777,
    2782,  2787,  2792,  2797,  2803,  2808,  2813,  2819,  2825,  2829,
    2834,  2839,  2844,  2849,  2857,  2867,  2874,  2885,  2897,  2910,
    2920,  2924,  2927,  2931,  2937,  2945,  2950,  2954,  2958,  2965,
    2973,  2981,  2986,  2991,  2996,  3006,  3011,  3015,  3020,  3028,
    3036,  3039,  3043,  3047,  3051,  3056,  3059,  3062,  3067,  3078,
    3082,  3084,  3088,  3091,  3094,  3097,  3100,  3104,  3110,  3115,
    3121,  3124,  3127,  3130,  3133,  3137,  3140,  3143,  3146,  3150,
    3153,  3157,  3162,  3166,  3170,  3177,  3182,  3185,  3189,  3192,
    3195,  3200,  3204,  3208,  3211,  3215,  3217,  3220,  3222,  3225,
    3228,  3231,  3233,  3235,  3237,  3239,  3242,  3244,  3247,  3250,
    3252,  3255,  3258,  3260,  3263,  3265,  3267,  3269,  3271,  3273,
    3275,  3277,  3279,  3280,  3282,  3285,  3288,  3291,  3295,  3301,
    3309,  3317,  3324,  3331,  3338,  3345,  3351,  3358,  3365,  3372,
    3379,  3386,  3393,  3400,  3412,  3420,  3428,  3436,  3446,  3456,
    3467,  3480,  3493,  3496,  3499,  3503,  3508,  3513,  3518,  3519,
    3521,  3523,  3528,  3533,  3535,  3537,  3539,  3541,  3543,  3545,
    3547,  3549,  3552,  3554,  3556,  3558,  3562,  3566,  3575,  3582,
    3593,  3601,  3609,  3615,  3618,  3621,  3625,  3630,  3636,  3640,
    3646,  3652,  3656,  3661,  3667,  3673,  3679,  3683,  3689,  3692,
    3696,  3700,  3706,  3710,  3714,  3718,  3723,  3729,  3735,  3739,
    3745,  3751,  3755,  3760,  3766,  3772,  3775,  3778,  3782,  3788,
    3795,  3802,  3806,  3810,  3814,  3821,  3827,  3833,  3836,  3840,
    3844,  3850,  3857,  3861,  3864,  3867,  3871,  3874,  3878,  3881,
    3885,  3891,  3898,  3901,  3904,  3907,  3909,  3914,  3919,  3921,
    3924,  3927,  3930,  3933,  3936,  3939,  3942,  3946,  3949,  3953,
    3956,  3960,  3962,  3964,  3966,  3968,  3970,  3971,  3974,  3975,
    3978,  3979,  3981,  3982,  3983,  3985,  3987,  3989,  3991,  3993,
    4001,  4010,  4013,  4020,  4023,  4030,  4033,  4037,  4040,  4042,
    4044,  4048,  4052,  4054,  4059,  4062,  4064,  4068,  4072,  4077,
    4081,  4085,  4089,  4091,  4093,  4095,  4097,  4099,  4101,  4103,
    4105,  4107,  4109,  4111,  4113,  4115,  4117,  4120,  4121,  4122,
    4125,  4132,  4140,  4143,  4145,  4149,  4151,  4155,  4157,  4160,
    4163,  4165,  4169,  4170,  4171,  4174,  4177,  4179,  4183,  4189,
    4191,  4194,  4197,  4201,  4204,  4207,  4210,  4213,  4215,  4217,
    4219,  4221,  4226,  4229,  4233,  4237,  4240,  4244,  4247,  4250,
    4253,  4257,  4261,  4265,  4268,  4272,  4274,  4278,  4282,  4284,
    4287,  4290,  4293,  4296,  4306,  4313,  4315,  4317,  4319,  4321,
    4324,  4327,  4331,  4335,  4337,  4340,  4344,  4348,  4350,  4353,
    4355,  4357,  4359,  4361,  4363,  4366,  4369,  4374,  4376,  4379,
    4382,  4385,  4389,  4391,  4393,  4395,  4398,  4401,  4404,  4407,
    4410,  4414,  4418,  4422,  4426,  4430,  4434,  4438,  4440,  4443,
    4446,  4449,  4453,  4456,  4460,  4464,  4467,  4470,  4473,  4476,
    4479,  4482,  4485,  4488,  4491,  4494,  4497,  4500,  4503,  4506,
    4510,  4514,  4518,  4521,  4524,  4527,  4530,  4533,  4536,  4539,
    4542,  4545,  4548,  4551,  4554,  4558,  4562,  4566,  4571,  4578,
    4581,  4583,  4585,  4587,  4589,  4591,  4592,  4598,  4600,  4607,
    4611,  4613,  4616,  4619,  4622,  4626,  4630,  4633,  4636,  4639,
    4642,  4645,  4648,  4652,  4655,  4658,  4662,  4664,  4668,  4673,
    4675,  4678,  4684,  4691,  4698,  4701,  4703,  4706,  4709,  4715,
    4722
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     360,     0,    -1,    98,   362,    -1,    44,   394,    -1,    41,
      67,     5,    -1,    41,    67,   143,    -1,    41,    67,   363,
      -1,    47,   399,    -1,    60,    -1,    65,    -1,    66,   401,
      -1,    68,   290,     5,    -1,    69,   406,    -1,    70,   408,
      -1,    78,   409,    -1,    85,   418,    -1,    87,   420,    -1,
      88,   421,    -1,    97,   363,    -1,   127,   423,    -1,   140,
     424,    -1,   144,   468,    -1,   147,   471,    -1,   151,    -1,
     152,   363,    -1,   152,    67,     5,    -1,   158,   477,    -1,
     164,    16,     4,    -1,   178,   480,    -1,   181,   498,    -1,
     182,   499,    -1,   183,   500,    -1,   186,   516,   501,    -1,
     187,   536,    -1,   201,    67,     5,    -1,   218,   537,    -1,
     219,   538,    -1,   220,   541,    -1,   241,    89,    -1,   234,
     543,    -1,   232,   542,    -1,   249,    -1,   245,   516,   545,
      -1,   251,   550,    -1,   253,   551,    -1,   258,   553,    -1,
     272,    -1,   278,   568,    -1,   293,     4,    -1,   294,   389,
      -1,   305,    -1,   307,   570,    -1,   313,    -1,   316,   572,
      -1,   317,   573,    -1,   347,   577,    -1,   354,   578,    -1,
       3,    -1,     4,    -1,   215,    -1,   214,    -1,   196,   363,
      -1,   221,   363,    -1,   223,   363,    -1,   317,   363,    -1,
      44,   363,    -1,    47,   363,    -1,    77,   363,    -1,    85,
     363,    -1,   145,   363,    -1,   251,   363,    -1,     4,    -1,
     350,    -1,   355,    -1,   215,    -1,   301,    -1,   206,    -1,
     356,    -1,   214,    -1,   121,    -1,    -1,   252,    38,    -1,
     136,    38,    -1,   252,    -1,   136,    -1,    -1,   366,    -1,
     361,    -1,     7,    -1,     8,    -1,     9,    -1,    10,    -1,
      11,    -1,   367,   367,    -1,   368,   369,    -1,   369,   369,
      -1,   361,   361,    -1,   159,    -1,   225,    -1,   103,    -1,
      19,    -1,   372,    -1,   317,    -1,   318,    -1,   319,    -1,
     320,    -1,   321,    -1,   322,    -1,   323,    -1,   324,    -1,
     325,    -1,   326,    -1,   327,    -1,   328,    -1,   329,    -1,
     330,    -1,   331,    -1,   332,    -1,   333,    -1,   334,    -1,
     335,    -1,   336,    -1,   337,    -1,   338,    -1,   339,    -1,
     340,    -1,   341,    -1,   342,    -1,   343,    -1,   344,    -1,
      57,    -1,   220,    -1,    -1,   351,    -1,   209,    -1,   201,
      -1,   208,    -1,   244,    -1,    -1,   281,    -1,   263,    -1,
      92,    -1,   172,    -1,   176,    -1,   180,    -1,   233,    -1,
     282,    -1,   283,    -1,    28,    -1,   274,    -1,   153,    -1,
      30,    -1,   260,    -1,   255,    -1,    96,    -1,   165,    -1,
      -1,   129,    -1,    35,    -1,   130,    -1,   166,    -1,   156,
      -1,   138,    -1,   108,    -1,    -1,    99,    -1,   267,    -1,
      -1,    99,    -1,    24,    -1,    25,    -1,    -1,   271,    -1,
     167,    -1,    -1,    17,    -1,   161,    -1,    -1,   159,    -1,
     187,    -1,    -1,    63,    -1,    49,    -1,   104,    -1,    86,
      -1,   357,    -1,    27,    -1,    52,    -1,    -1,     4,    -1,
      83,    -1,   154,    -1,   227,    -1,   228,    -1,   242,    -1,
     285,    -1,    -1,    32,    -1,   287,    -1,   188,    -1,    -1,
     202,    -1,    42,    -1,    43,    -1,   173,    -1,   174,    -1,
     311,   393,    -1,    48,   390,    -1,    75,   391,    -1,   152,
     392,    -1,   190,   548,    -1,    37,   549,    -1,   259,   361,
      -1,   295,   361,    -1,   363,    -1,    67,     5,    -1,   363,
      -1,    67,     5,    -1,   363,    -1,    67,     5,    -1,   361,
     361,    -1,   229,   361,   361,   361,   361,   361,    -1,    12,
     395,    -1,    72,     5,     5,     5,    -1,   102,     4,    -1,
     120,   396,    -1,   137,   397,    -1,    54,   275,     4,    -1,
     298,   398,    -1,   124,     5,    -1,    60,    -1,   361,   361,
      -1,   361,    -1,   361,   361,    -1,   361,    12,   361,   361,
      -1,   361,   361,    12,   361,   361,    -1,   298,   361,    -1,
     298,   361,   361,    -1,   298,   361,    12,   361,   361,    -1,
     298,   361,   361,    12,   361,   361,    -1,    32,    -1,   287,
      -1,   125,    -1,   361,   361,    12,    60,     5,     5,     5,
      -1,   361,   361,     4,   361,   361,    12,    60,     5,     5,
       5,     5,    -1,   361,   361,    12,   361,   361,     5,     5,
       5,    -1,   361,   361,     4,   361,   361,    12,   361,   361,
       5,     5,     5,     5,    -1,   361,    -1,   361,   361,    -1,
     298,   400,    -1,   125,    -1,   361,    -1,   361,   361,    -1,
     262,   402,    -1,   197,   403,    -1,   191,   404,    -1,   308,
     361,   361,    -1,   308,   201,   201,    -1,   353,   405,    -1,
     236,   363,    -1,   141,    -1,   179,    -1,   361,    -1,   191,
      -1,   353,    -1,   352,    -1,   308,    -1,     4,   377,    -1,
     197,   377,    -1,   255,     4,    -1,   248,    -1,   361,     4,
       4,    -1,    79,   361,    -1,   255,     4,    -1,   175,     4,
      -1,     4,   361,   361,     4,     6,     4,    -1,   251,   361,
     361,   361,   361,   361,   361,     4,     6,     4,    -1,    40,
      -1,   198,   407,    -1,   113,    -1,     4,   361,   361,     4,
       6,     4,    -1,   251,   361,   361,   361,   361,   361,   361,
       4,     6,     4,    -1,   376,    -1,   180,   361,    -1,    84,
     410,    -1,   101,   411,    -1,   178,   412,    -1,   222,   416,
      -1,   258,   417,    -1,     5,     4,     4,   415,     4,     4,
     376,   361,   413,   414,   361,   361,     5,    -1,     5,     4,
       4,   415,     4,     4,   376,   361,   361,   414,   361,   361,
       5,    -1,     5,     4,     4,   415,     4,     4,   376,   361,
     413,   361,   361,     5,    -1,     5,     4,     4,   415,     4,
       4,   376,   361,   361,   361,   361,     5,    -1,   231,    -1,
      -1,    31,    -1,     5,    -1,     5,     5,     4,   363,    -1,
       5,     4,   363,     5,   371,   378,    -1,   191,    -1,   353,
      -1,   352,    -1,   308,    -1,   141,    -1,   179,    -1,   278,
      -1,    47,    -1,     5,    -1,     5,     5,     4,   363,    -1,
       5,   371,   378,    -1,    31,     5,   371,   378,    -1,    -1,
     361,   361,   361,   361,   371,   378,    -1,    60,   370,   371,
     378,   361,   361,   371,   380,    -1,   294,   419,    -1,    40,
     361,   361,    -1,   198,   361,   361,    -1,   113,   361,   361,
      -1,    -1,   361,   361,   371,   378,    -1,    40,   361,   361,
       4,    -1,   198,   361,   361,     4,    -1,   113,   361,   361,
       4,    -1,   373,   361,   361,    -1,   371,   378,   370,    -1,
     363,    -1,   316,   361,   361,    -1,    40,   198,   373,   361,
     361,    -1,   198,   373,   361,   361,    -1,    40,   198,   371,
     370,    -1,   198,   371,   370,    -1,    33,     4,    -1,    -1,
      32,    -1,   287,    -1,   147,   119,     5,    -1,    41,    67,
      -1,    44,   427,    -1,    47,   429,    -1,    66,   430,    -1,
      69,   434,    -1,    68,   433,    -1,    70,   436,    -1,    78,
     438,    -1,    80,   441,    -1,    85,   442,    -1,    87,   443,
      -1,    89,   445,    -1,    88,   444,    -1,    95,   446,    -1,
      97,    -1,   126,   450,    -1,   144,   456,    -1,   152,    67,
      -1,   154,     5,     5,     4,    -1,   155,    90,   425,    -1,
     158,   448,    -1,   162,   447,    -1,   164,    16,    -1,   191,
      -1,   186,   516,   510,    -1,   187,   457,    -1,   201,    67,
      -1,   218,    -1,   219,   458,    -1,   226,   289,   373,   361,
     361,     4,     4,     5,    -1,   251,   459,    -1,   253,    -1,
     278,   460,    -1,   293,    -1,   294,   461,    -1,   302,    -1,
     309,   373,   361,   361,    -1,   315,    90,   426,    -1,   317,
     466,    -1,   354,    -1,     5,     5,   361,   361,   373,     4,
     422,    -1,     5,     5,   361,   361,   371,   378,     4,   422,
      -1,     5,     5,   361,   361,   373,     4,   422,    -1,     5,
       5,   361,   361,   371,   378,     4,   422,    -1,   102,    -1,
     120,    -1,   137,    -1,    54,   275,    -1,    89,    -1,   124,
      -1,    72,   428,    -1,   177,    -1,    -1,   191,     5,    -1,
     105,     5,    -1,   120,    -1,    -1,   413,   414,    -1,   361,
     414,    -1,   262,    -1,   197,    -1,   191,   431,    -1,   308,
     171,    -1,   353,   432,    -1,   236,    -1,   197,    -1,   255,
      -1,    79,    -1,   255,    -1,   175,    -1,    -1,   290,    -1,
     171,   435,    -1,     4,    -1,     4,   373,   361,   361,    -1,
       4,   361,   361,   376,   361,    -1,    -1,   171,   437,    -1,
     180,    -1,     4,   361,   361,   376,   361,    -1,   371,   378,
      -1,    66,   439,    -1,    67,    -1,    93,    -1,   171,    -1,
     212,   171,    -1,   190,    -1,    70,   440,    -1,   278,    -1,
     346,    -1,    -1,   197,    -1,   262,    -1,    -1,   180,    -1,
     361,   361,   371,   378,   379,    -1,   373,   361,   361,   371,
     378,   379,    -1,   371,   378,   379,    -1,    60,   371,   378,
     379,   371,   380,    -1,   294,   371,   378,    -1,   373,    -1,
     371,   378,   379,    -1,   286,    -1,    33,    -1,   373,    -1,
     371,   378,   379,    -1,   371,   378,   370,   361,   361,     5,
      -1,     4,   371,   378,   370,   361,   361,     5,    -1,   373,
     361,   361,     4,     4,    -1,     5,    -1,    66,    -1,   373,
     361,   361,     5,    -1,     6,     4,     4,     4,     4,    -1,
      89,    -1,   122,   200,   449,    -1,    -1,     4,    -1,   361,
     361,    -1,   203,    -1,    60,   371,   378,   379,    -1,    82,
      -1,   102,   453,    -1,    45,    -1,   119,   451,    -1,   122,
     200,   454,    -1,   149,   452,    -1,   150,    -1,   213,   200,
      -1,   275,    -1,   275,   371,   378,   380,    -1,   276,   455,
      -1,   346,    -1,     4,    -1,   373,   361,   361,    -1,     4,
      -1,   168,     5,    -1,     4,   168,     5,    -1,   317,     4,
      -1,    -1,     4,    -1,   364,    -1,   364,   373,   361,   361,
      -1,   364,     4,    -1,    -1,     4,    -1,   134,   159,   371,
      -1,   134,   159,     4,   371,    -1,   298,   159,   361,   371,
      -1,    -1,   217,    -1,   310,    -1,    67,    -1,   185,    -1,
     244,    -1,   288,    -1,   297,    -1,    82,    -1,    46,    -1,
     236,    -1,    62,    -1,   288,    -1,   311,    -1,   137,    -1,
     243,    -1,   243,   192,    -1,   273,    -1,   273,   192,    -1,
      21,    -1,   311,   465,    -1,    48,   462,    -1,    75,   463,
      -1,   152,   464,    -1,   190,    -1,    37,    -1,   259,    -1,
      -1,    67,    -1,    -1,    67,    -1,    -1,    67,    -1,    -1,
     229,    -1,    -1,    16,   467,    -1,   200,   372,    -1,    -1,
     230,    -1,    84,   469,    -1,   101,    -1,   371,   378,   379,
     470,     5,     5,    -1,   371,   378,   379,   470,     5,    -1,
      20,    -1,   239,    -1,    19,    -1,    41,    67,    -1,    44,
     472,    -1,    78,   473,    -1,    85,    -1,    96,    -1,    97,
      -1,   103,    -1,   126,   474,    -1,   144,    -1,   158,    -1,
     165,    -1,   186,   475,    -1,   225,    -1,   159,    -1,   278,
      -1,   288,   371,    -1,   317,   476,    -1,    73,     5,    -1,
      -1,    31,    -1,    -1,    44,    -1,    88,    -1,   196,    -1,
     152,    -1,   265,    -1,   222,    -1,   303,    -1,   371,    -1,
      59,   371,    -1,   117,   371,    -1,   176,   371,    -1,    18,
      -1,   294,   371,    -1,   204,     4,     4,    -1,   118,    -1,
     189,     5,    -1,    89,   479,    -1,   266,   122,   200,   478,
      -1,   266,     6,     4,     4,     4,     4,    -1,   307,    -1,
     317,   361,   361,   361,   361,   361,   361,   361,   361,     4,
      -1,     5,    -1,     5,     4,    -1,     4,     4,    57,    -1,
       4,     4,   371,    -1,   197,   363,    -1,    26,   481,    -1,
     114,   483,    -1,   126,   484,    -1,   161,   497,    -1,   211,
     495,    -1,   224,   496,    -1,     5,    14,     5,   383,    -1,
       5,    15,     5,   383,    -1,     5,    62,     5,   383,    -1,
       5,   194,   383,    -1,     5,   195,   383,    -1,     5,   269,
     381,     4,   383,    -1,     5,   279,     4,   383,    -1,     5,
     280,     4,   383,    -1,     5,   310,     5,   383,    -1,   251,
      88,   482,    -1,     5,    14,     5,    -1,     5,    15,     5,
      -1,     5,    62,     5,    -1,     5,   194,    -1,     5,   195,
      -1,     5,   269,   381,     4,    -1,     5,   279,     4,    -1,
       5,   280,     4,    -1,     5,   310,     5,    -1,     5,     5,
     277,    -1,     5,    14,     5,   383,    -1,     5,    15,     5,
     383,    -1,     5,    62,     5,   383,    -1,     5,   194,   382,
     383,    -1,     5,     5,   277,   382,   383,    -1,     5,   195,
     382,   383,    -1,     5,   269,   381,     4,   382,   383,    -1,
       5,   284,   381,     4,     4,   382,   383,    -1,     5,   279,
       4,   383,    -1,     5,   280,     4,   383,    -1,     5,   310,
       5,   382,   383,    -1,   276,   485,    -1,   119,    88,   486,
      -1,   251,   159,   494,    -1,   251,    88,   493,    -1,   196,
     487,    -1,     5,    14,     5,    -1,     5,    15,     5,    -1,
       5,    62,     5,    -1,     5,   194,   382,    -1,     5,     5,
     277,   382,    -1,     5,   195,   382,    -1,     5,   269,   381,
       4,   382,    -1,     5,   284,   381,     4,     4,   382,    -1,
       5,   279,     4,    -1,     5,   280,     4,    -1,     5,   310,
       5,   382,    -1,     5,    14,     5,    -1,     5,    15,     5,
      -1,     5,    62,     5,    -1,     5,   194,   382,    -1,     5,
     195,   382,    -1,     5,   269,   381,     4,   382,    -1,     5,
     279,     4,    -1,     5,   280,     4,    -1,     5,   310,     5,
     382,    -1,   159,   164,   488,    -1,   164,   489,    -1,   159,
     490,    -1,   492,    -1,   159,   345,   491,    -1,     5,    14,
       5,   383,    -1,     5,    15,     5,   383,    -1,     5,    62,
       5,   383,    -1,     5,   194,   382,   383,    -1,     5,   195,
     382,   383,    -1,     5,   269,   381,     4,   382,   383,    -1,
       5,   279,     4,   383,    -1,     5,   280,     4,   383,    -1,
       5,   310,     5,   382,   383,    -1,     5,    14,     5,   383,
      -1,     5,    15,     5,   383,    -1,     5,    62,     5,   383,
      -1,     5,   194,   382,   383,    -1,     5,     5,   277,   382,
     383,    -1,     5,   195,   382,   383,    -1,     5,   269,   381,
       4,   382,   383,    -1,     5,   284,   381,     4,     4,   382,
     383,    -1,     5,   279,     4,   383,    -1,     5,   280,     4,
     383,    -1,     5,   310,     5,   382,   383,    -1,   372,     5,
      14,     5,   383,    -1,   372,     5,    15,     5,   383,    -1,
     372,     5,    62,     5,   383,    -1,   372,     5,   194,   382,
     383,    -1,   372,     5,   195,   382,   383,    -1,   372,     5,
     269,   381,     4,   382,   383,    -1,   372,     5,   279,     4,
     383,    -1,   372,     5,   280,     4,   383,    -1,   372,     5,
     310,     5,   382,   383,    -1,     5,    14,     5,   383,    -1,
       5,    15,     5,   383,    -1,     5,    62,     5,   383,    -1,
       5,   194,   382,   383,    -1,     5,   195,   382,   383,    -1,
       5,   269,   381,     4,   382,   383,    -1,     5,   279,     4,
     383,    -1,     5,   280,     4,   383,    -1,     5,   310,     5,
     382,   383,    -1,   372,     5,    14,     5,   383,    -1,   372,
       5,    15,     5,   383,    -1,   372,     5,    62,     5,   383,
      -1,   372,     5,   194,   382,   383,    -1,   372,     5,     5,
     277,   382,   383,    -1,   372,     5,   195,   382,   383,    -1,
     372,     5,   269,   381,     4,   382,   383,    -1,   372,     5,
     284,   381,     4,     4,   382,   383,    -1,   372,     5,   279,
       4,   383,    -1,   372,     5,   280,     4,   383,    -1,   372,
       5,   310,     5,   382,   383,    -1,     5,    14,     5,    -1,
       5,    15,     5,    -1,     5,    62,     5,    -1,     5,   194,
     382,    -1,     5,     5,   277,   382,    -1,     5,   195,   382,
      -1,     5,   269,   381,     4,   382,    -1,     5,   284,   381,
       4,     4,   382,    -1,     5,   279,     4,    -1,     5,   280,
       4,    -1,     5,   310,     5,   382,    -1,     5,    14,     5,
      -1,     5,    15,     5,    -1,     5,    62,     5,    -1,     5,
     194,   382,    -1,     5,   195,   382,    -1,     5,   269,   381,
       4,   382,    -1,     5,   279,     4,    -1,     5,   280,     4,
      -1,     5,   310,     5,   382,    -1,     5,    14,     5,   383,
      -1,     5,    62,     5,   383,    -1,     5,   194,   383,    -1,
       5,   269,   381,     4,   383,    -1,     5,   279,     4,   383,
      -1,     5,   310,     5,   383,    -1,     5,     5,    -1,   276,
       5,     5,    -1,    95,     4,     4,     4,     4,     4,    -1,
     191,     4,     4,     4,     4,     4,    -1,   113,    -1,   235,
      -1,   363,    -1,   142,   363,    -1,    89,   363,    -1,    67,
       5,    -1,     5,     4,     4,    -1,   307,   361,   361,    -1,
     354,   361,    -1,     5,     5,   372,   378,     5,     5,   372,
     378,   361,   372,   380,     5,    -1,    61,   504,    -1,    67,
       5,    -1,    81,    -1,    74,   509,     5,    -1,    74,   509,
     310,     5,    -1,    76,   101,    -1,    -1,    84,   502,   505,
      -1,    90,    -1,   101,   507,    -1,   107,   508,    -1,   116,
       4,    -1,   131,     5,    -1,   152,    17,    -1,   152,   216,
     361,   361,    -1,   152,   299,   361,   361,    -1,     4,    20,
     386,   363,    -1,     4,    21,   366,    -1,     4,    21,   366,
     373,    -1,     4,    21,   366,   371,   378,    -1,     4,    22,
     243,   361,   361,     4,   371,   380,    -1,     4,    22,   243,
       5,   371,   380,    -1,     4,    49,   123,   363,    -1,     4,
      50,   243,   361,   361,   361,     4,   371,   380,    -1,     4,
      50,   243,     5,   371,   380,    -1,     4,    49,   243,   361,
     361,   371,   380,    -1,     4,    53,   107,   366,   366,     4,
     361,   361,   361,     4,    -1,     4,    53,   107,   366,   366,
       4,   361,   361,   361,     4,   373,    -1,     4,    53,   107,
     366,   366,     4,   361,   361,   361,     4,   371,   378,    -1,
       4,    53,   107,     5,     5,   371,   378,   371,   380,    -1,
       4,    56,   503,     5,     5,    -1,     4,    63,   123,   363,
      -1,     4,    63,   243,   361,   371,   380,    -1,     4,    67,
       5,    -1,     4,    75,    27,   363,   363,    -1,     4,    75,
     169,     5,     5,    -1,     4,    75,   243,   361,   371,   380,
      -1,     4,    75,   288,   371,   378,    -1,     4,    76,   141,
     363,    -1,     4,    83,   107,   366,   366,     4,   361,   361,
       4,    -1,     4,    83,   107,   366,   366,     4,   361,   361,
       4,   373,    -1,     4,    83,   107,   366,   366,     4,   361,
     361,     4,   371,   378,    -1,     4,    83,   107,     5,     5,
     371,   378,   371,   380,    -1,     4,    84,    22,   243,   361,
     361,    -1,     4,    84,    50,   243,   361,   361,    -1,     4,
      84,    53,    21,   361,   361,    -1,     4,    84,    53,   243,
     361,   361,    -1,     4,    84,   112,   243,   361,   361,    -1,
       4,    84,   115,    21,   361,   361,    -1,     4,    84,   115,
     243,   361,   361,    -1,     4,    84,    83,    21,   361,   361,
      -1,     4,    84,    83,   243,   361,   361,    -1,     4,    84,
     231,   314,     4,   361,   361,    -1,     4,    84,   264,   314,
       4,   361,   361,    -1,     4,   101,    -1,     4,   101,    22,
       4,    -1,     4,   101,    50,     4,    -1,     4,   101,    53,
       4,    -1,     4,   101,   112,     4,    -1,     4,   101,    56,
     503,     5,    -1,     4,   101,   115,     4,    -1,     4,   101,
      83,     4,    -1,     4,   101,   231,   314,     4,    -1,     4,
     101,   264,   314,     4,    -1,     4,   101,   290,    -1,     4,
     101,   290,     5,    -1,     4,   101,   290,     4,    -1,     4,
     107,    40,     4,    -1,     4,   111,   123,   363,    -1,     4,
     111,   243,   361,   361,   371,   380,    -1,     4,   112,   243,
     361,   361,   361,     4,   371,   380,    -1,     4,   112,   243,
       5,   371,   380,    -1,     4,   115,   107,   366,   366,     4,
     361,   361,   361,     4,    -1,     4,   115,   107,   366,   366,
       4,   361,   361,   361,     4,   373,    -1,     4,   115,   107,
     366,   366,     4,   361,   361,   361,     4,   371,   378,    -1,
       4,   115,   107,     5,     5,   371,   378,   371,   380,    -1,
       4,   131,     5,    -1,     4,   152,    -1,     4,   152,   216,
      -1,     4,   175,    27,   363,   363,    -1,     4,   175,   229,
     371,   378,   370,   370,    -1,     4,   199,   361,   361,    -1,
       4,   199,   135,    -1,     4,   199,    36,    -1,     4,   199,
     298,   371,   378,   370,    -1,     4,   231,   249,   361,   361,
     371,   380,    -1,     4,   264,   249,   361,   361,   371,   380,
      -1,     4,   229,   268,   384,    -1,     4,   229,   275,     4,
      -1,     4,   231,   123,   363,    -1,     4,   237,   371,   378,
     370,   370,   361,   371,   380,    -1,     4,   238,   522,   363,
      -1,     4,   253,    40,    -1,     4,   254,   132,     5,    -1,
       4,   254,   229,   371,   378,   370,   370,    -1,     4,   254,
     288,   371,   378,   371,   380,    -1,     4,   265,    -1,     4,
     265,   216,    -1,     4,   290,     5,    -1,     4,   292,     5,
      -1,     4,   292,   253,   363,    -1,     4,   304,    -1,     4,
     306,    -1,     4,   312,    27,   363,    -1,     4,   312,   229,
     371,   378,   370,   371,   380,   361,   366,    -1,     4,   346,
       4,    -1,   167,    -1,   167,   361,   361,    -1,   177,   517,
      -1,   178,   518,    -1,   199,   519,    -1,   236,   363,    -1,
     238,   522,   363,    -1,   238,   522,   363,   361,   361,    -1,
     253,    40,   361,   361,    -1,   253,   198,   361,   361,     4,
      -1,   253,   113,    -1,   258,   526,    -1,   265,   527,    -1,
     272,   528,    -1,     5,    67,     5,    -1,     5,    81,    -1,
       5,   101,    -1,     5,    90,    -1,     5,   131,     5,    -1,
       5,   152,    -1,     5,   152,   216,    -1,     5,   199,   361,
     361,    -1,     5,   199,   135,    -1,     5,   199,    36,    -1,
       5,   199,   298,   371,   378,   370,    -1,     5,   238,   522,
     363,    -1,     5,   265,    -1,     5,   265,   216,    -1,     5,
     304,    -1,     5,   306,    -1,   290,   107,     5,     5,    -1,
     290,   101,     5,    -1,   290,   101,    17,    -1,   290,     5,
      -1,   290,   307,     5,    -1,   222,    -1,   222,   371,    -1,
     303,    -1,   304,    17,    -1,   306,    17,    -1,   346,     4,
      -1,   265,    -1,   306,    -1,   152,    -1,   304,    -1,    40,
     199,    -1,   199,    -1,   113,   199,    -1,    40,   107,    -1,
     107,    -1,   113,   107,    -1,    40,   253,    -1,   253,    -1,
     113,   253,    -1,   101,    -1,   292,    -1,    67,    -1,   346,
      -1,   238,    -1,   131,    -1,   167,    -1,   307,    -1,    -1,
       4,    -1,    30,   363,    -1,   243,   361,    -1,   163,     4,
      -1,   217,     4,   361,    -1,    63,   361,   361,   361,   523,
      -1,   111,   361,   361,   361,   361,   365,   523,    -1,    49,
     361,   361,   361,   361,   365,   523,    -1,   231,   361,   361,
     361,   361,   523,    -1,   264,   361,   361,   361,   361,   523,
      -1,   175,   361,   361,   361,   361,   523,    -1,   312,   361,
     361,   361,   361,   523,    -1,   292,   361,   361,   365,   523,
      -1,    63,   229,   361,   361,   385,   523,    -1,    49,   229,
     361,   361,   385,   523,    -1,   104,   229,   361,   361,   385,
     523,    -1,    86,   229,   361,   361,   385,   523,    -1,   357,
     229,   361,   361,   385,   523,    -1,    27,   229,   361,   361,
     385,   523,    -1,    52,   229,   361,   361,   385,   523,    -1,
     254,   361,   361,   361,   361,   371,   378,   371,   380,     5,
     523,    -1,    75,   361,   361,   361,   371,   378,   523,    -1,
     237,   361,   361,   361,   361,   361,   523,    -1,    22,   361,
     361,   361,   361,     4,   523,    -1,   112,   361,   361,   361,
     361,   361,     4,   365,   523,    -1,    50,   361,   361,   361,
     361,   361,     4,   365,   523,    -1,    83,   361,   361,   366,
     366,     4,   361,   361,     4,   523,    -1,   115,   361,   361,
     366,   366,     4,   361,   361,   361,     4,   365,   523,    -1,
      53,   361,   361,   366,   366,     4,   361,   361,   361,     4,
     365,   523,    -1,    76,   523,    -1,   291,   506,    -1,     5,
     361,   361,    -1,   310,     5,   361,   361,    -1,   361,   361,
     310,     5,    -1,     5,   371,   378,   370,    -1,    -1,   265,
      -1,    17,    -1,    40,   361,   361,     4,    -1,   198,   361,
     361,     4,    -1,   113,    -1,   106,    -1,   348,    -1,    64,
      -1,   257,    -1,   256,    -1,   240,    -1,   349,    -1,    61,
     511,    -1,    67,    -1,   131,    -1,   116,    -1,   146,   361,
     361,    -1,   157,   361,   361,    -1,     4,    20,    83,     5,
       5,     5,   371,     4,    -1,     4,    20,   154,     5,     5,
       4,    -1,     4,    20,   227,     5,     5,     5,     5,   371,
     378,   387,    -1,     4,    20,   228,     5,     5,   371,   387,
      -1,     4,    20,   242,     5,     5,     5,   371,    -1,     4,
      20,   285,   371,   378,    -1,   157,    17,    -1,     4,    21,
      -1,     4,    21,   373,    -1,     4,    21,   371,   378,    -1,
       4,    22,   243,   371,   380,    -1,     4,    49,   123,    -1,
       4,    50,   243,   371,   380,    -1,     4,    49,   243,   371,
     380,    -1,     4,    53,    21,    -1,     4,    53,    21,   373,
      -1,     4,    53,    21,   371,   378,    -1,     4,    53,   243,
     371,   380,    -1,     4,    60,   371,   378,   379,    -1,     4,
      63,   123,    -1,     4,    63,   243,   371,   380,    -1,     4,
      67,    -1,     4,    75,    27,    -1,     4,    75,   169,    -1,
       4,    75,   243,   371,   380,    -1,     4,    75,   288,    -1,
       4,    76,   141,    -1,     4,    83,    21,    -1,     4,    83,
      21,   373,    -1,     4,    83,    21,   371,   378,    -1,     4,
      83,   243,   371,   380,    -1,     4,   111,   123,    -1,     4,
     111,   243,   371,   380,    -1,     4,   112,   243,   371,   380,
      -1,     4,   115,    21,    -1,     4,   115,    21,   373,    -1,
       4,   115,    21,   371,   378,    -1,     4,   115,   243,   371,
     380,    -1,     4,   131,    -1,     4,   152,    -1,     4,   175,
      27,    -1,     4,   175,   170,   371,   380,    -1,     4,   175,
     229,   371,   378,   379,    -1,     4,   184,   170,   361,   371,
     380,    -1,     4,   231,   123,    -1,     4,   229,   268,    -1,
       4,   229,   275,    -1,     4,   237,   229,   371,   378,   379,
      -1,     4,   237,   170,   371,   380,    -1,     4,   237,   296,
     371,   380,    -1,     4,   238,    -1,     4,   238,   522,    -1,
       4,   254,   132,    -1,     4,   254,   170,   371,   380,    -1,
       4,   254,   229,   371,   378,   379,    -1,     4,   254,   288,
      -1,     4,   265,    -1,     4,   290,    -1,     4,   290,     4,
      -1,     4,   292,    -1,     4,   292,   253,    -1,     4,   302,
      -1,     4,   312,    27,    -1,     4,   312,   170,   371,   380,
      -1,     4,   312,   229,   371,   378,   379,    -1,     4,   346,
      -1,   152,   512,    -1,   152,   212,    -1,   212,    -1,   231,
     264,   361,   361,    -1,   264,   264,   361,   361,    -1,   236,
      -1,   238,   522,    -1,   265,   513,    -1,   265,   212,    -1,
     272,   514,    -1,     5,    67,    -1,     5,   131,    -1,     5,
     157,    -1,     5,   238,   522,    -1,     5,   290,    -1,     5,
     290,   212,    -1,   290,    17,    -1,   290,   100,   200,    -1,
     346,    -1,    30,    -1,   243,    -1,   163,    -1,   217,    -1,
      -1,   361,   361,    -1,    -1,   361,   361,    -1,    -1,   292,
      -1,    -1,    -1,   230,    -1,   245,    -1,   308,    -1,    58,
      -1,   133,    -1,   509,   371,   378,   379,   363,   524,   531,
      -1,   265,   509,   371,   378,   379,   363,   524,   531,    -1,
     509,     5,    -1,   509,     5,     4,     5,   371,   378,    -1,
     509,     4,    -1,   509,     4,     4,     5,   371,   378,    -1,
     126,     5,    -1,   126,     5,     5,    -1,   361,   361,    -1,
     135,    -1,    36,    -1,    40,   361,   361,    -1,   198,   361,
     361,    -1,   113,    -1,   298,   371,   378,   370,    -1,   520,
     521,    -1,   521,    -1,   522,   358,   363,    -1,    67,   358,
       5,    -1,    94,   358,     4,     4,    -1,   346,   358,     4,
      -1,   131,   358,     5,    -1,   292,   358,     5,    -1,   534,
      -1,   535,    -1,   207,    -1,   265,    -1,   152,    -1,    93,
      -1,   128,    -1,   107,    -1,   199,    -1,   253,    -1,   101,
      -1,   160,    -1,   281,    -1,   515,    -1,   515,   520,    -1,
      -1,    -1,   525,   529,    -1,     5,   509,   371,   378,   379,
     363,    -1,   265,     5,   509,   371,   378,   379,   363,    -1,
     291,     5,    -1,    17,    -1,   216,   361,   361,    -1,   299,
      -1,   299,   361,   361,    -1,   363,    -1,   292,   363,    -1,
     529,   530,    -1,   530,    -1,   522,   358,   363,    -1,    -1,
      -1,   532,   533,    -1,   533,   534,    -1,   534,    -1,   290,
     358,     5,    -1,    56,   358,   503,     5,     5,    -1,    65,
      -1,    67,     5,    -1,   185,   374,    -1,   244,   361,   361,
      -1,   288,   371,    -1,   297,   361,    -1,    46,   375,    -1,
     185,     4,    -1,   357,    -1,   355,    -1,   349,    -1,   207,
      -1,   361,   361,   361,   361,    -1,   361,   361,    -1,   373,
     361,   361,    -1,   371,   378,   370,    -1,   298,   539,    -1,
      39,   361,   361,    -1,   198,   540,    -1,   236,   363,    -1,
     361,   361,    -1,   373,   361,   361,    -1,   371,   378,   370,
      -1,    40,   361,   361,    -1,   361,   361,    -1,   113,   361,
     361,    -1,   363,    -1,   317,   372,   378,    -1,     5,     4,
       4,    -1,   307,    -1,    71,   544,    -1,   171,     4,    -1,
     250,     4,    -1,   259,   361,    -1,     4,     4,     4,     4,
       4,     4,     4,     4,     4,    -1,     4,     4,     4,     4,
       4,     4,    -1,    55,    -1,   143,    -1,   251,    -1,    91,
      -1,   152,   546,    -1,   265,   547,    -1,    40,   361,   361,
      -1,   198,   361,   361,    -1,   113,    -1,   270,   113,    -1,
      40,   361,   361,    -1,   198,   361,   361,    -1,   113,    -1,
     270,   113,    -1,   193,    -1,    13,    -1,   207,    -1,    34,
      -1,   109,    -1,    62,     5,    -1,   288,   371,    -1,   311,
       4,     4,     4,    -1,   361,    -1,   361,    99,    -1,   198,
     552,    -1,   298,   361,    -1,   298,   361,    99,    -1,    40,
      -1,   361,    -1,   113,    -1,    26,   554,    -1,   126,   556,
      -1,   211,   566,    -1,   114,   567,    -1,   224,     5,    -1,
     122,     5,   388,    -1,    62,     5,   388,    -1,   279,     4,
     388,    -1,   251,    88,   555,    -1,   122,     5,   388,    -1,
      62,     5,   388,    -1,   279,     4,   388,    -1,   557,    -1,
     159,   557,    -1,   289,   558,    -1,   276,   559,    -1,   119,
      88,   560,    -1,   196,   561,    -1,   251,   159,   563,    -1,
     251,    88,   564,    -1,   247,   565,    -1,   122,     5,    -1,
      62,     5,    -1,   279,     4,    -1,   122,     5,    -1,    62,
       5,    -1,   279,     4,    -1,   122,     5,    -1,    62,     5,
      -1,   279,     4,    -1,   122,     5,    -1,    62,     5,    -1,
     279,     4,    -1,   159,   562,    -1,   122,     5,     4,    -1,
      62,     5,     4,    -1,   279,     4,     4,    -1,   122,     5,
      -1,    62,     5,    -1,   279,     4,    -1,   122,     5,    -1,
      62,     5,    -1,   279,     4,    -1,   122,     5,    -1,    62,
       5,    -1,   279,     4,    -1,   122,     5,    -1,    62,     5,
      -1,   279,     4,    -1,   122,     5,   388,    -1,    62,     5,
     388,    -1,   279,     4,   388,    -1,   122,     5,     5,   388,
      -1,   569,     4,     4,   361,   361,   366,    -1,   569,     4,
      -1,   101,    -1,    51,    -1,   300,    -1,   139,    -1,   110,
      -1,    -1,     4,   361,   361,   361,   361,    -1,   210,    -1,
     210,     4,   361,   361,   361,   361,    -1,   126,   276,   571,
      -1,     4,    -1,     4,     4,    -1,   361,   371,    -1,   361,
     361,    -1,   298,   361,   361,    -1,   372,   378,   379,    -1,
      16,   576,    -1,   249,     4,    -1,   246,   575,    -1,    23,
     574,    -1,     4,     4,    -1,     4,     5,    -1,   292,     4,
       5,    -1,     4,     4,    -1,     4,     5,    -1,   292,     4,
       5,    -1,     4,    -1,     4,   372,   378,    -1,     4,     6,
     372,   378,    -1,   235,    -1,   361,   361,    -1,   361,   361,
      12,   361,   361,    -1,   361,   361,    12,   373,   361,   361,
      -1,   361,   361,    12,   371,   378,   370,    -1,   298,   579,
      -1,   125,    -1,   125,   361,    -1,   361,   361,    -1,   361,
     361,    12,   361,   361,    -1,   361,   361,    12,   373,   361,
     361,    -1,   361,   361,    12,   371,   378,   370,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   464,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   521,   522,   525,
     526,   527,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   539,   541,   542,   543,   544,   546,   547,   548,   549,
     552,   553,   554,   555,   556,   559,   560,   563,   564,   565,
     568,   571,   574,   577,   589,   596,   603,   611,   612,   613,
     614,   615,   618,   619,   620,   621,   622,   623,   624,   625,
     626,   627,   628,   629,   630,   631,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
     648,   649,   652,   653,   654,   655,   656,   657,   660,   661,
     662,   663,   664,   667,   668,   669,   670,   671,   672,   673,
     674,   677,   678,   679,   680,   681,   684,   685,   686,   687,
     688,   689,   690,   691,   694,   695,   696,   699,   700,   701,
     702,   705,   706,   707,   710,   711,   712,   715,   716,   717,
     720,   721,   722,   723,   724,   725,   726,   727,   730,   731,
     734,   735,   736,   737,   738,   739,   742,   743,   744,   745,
     748,   749,   750,   751,   752,   753,   756,   757,   758,   759,
     760,   761,   762,   763,   767,   768,   771,   772,   775,   776,
     779,   780,   784,   785,   786,   787,   788,   789,   790,   791,
     794,   795,   798,   799,   800,   802,   804,   805,   806,   808,
     812,   813,   816,   817,   819,   822,   824,   830,   831,   832,
     835,   836,   837,   840,   841,   842,   843,   844,   845,   846,
     852,   853,   856,   857,   858,   859,   860,   863,   864,   865,
     866,   869,   870,   875,   880,   887,   889,   891,   892,   893,
     896,   898,   901,   902,   905,   906,   907,   908,   909,   912,
     914,   916,   921,   926,   929,   930,   933,   934,   935,   942,
     943,   944,   945,   948,   949,   952,   953,   956,   957,   960,
     962,   966,   967,   970,   972,   973,   974,   975,   978,   979,
     981,   982,   983,   986,   988,   990,   991,   993,   995,   997,
     999,  1003,  1006,  1007,  1008,  1011,  1014,  1015,  1016,  1017,
    1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,  1027,
    1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,
    1038,  1039,  1040,  1041,  1042,  1043,  1045,  1046,  1047,  1048,
    1049,  1050,  1051,  1053,  1054,  1055,  1058,  1060,  1064,  1066,
    1070,  1071,  1072,  1073,  1074,  1075,  1076,  1077,  1080,  1081,
    1082,  1085,  1088,  1089,  1091,  1093,  1094,  1095,  1096,  1097,
    1098,  1105,  1106,  1109,  1110,  1111,  1114,  1115,  1118,  1121,
    1122,  1124,  1128,  1129,  1130,  1133,  1137,  1139,  1140,  1141,
    1142,  1143,  1144,  1145,  1146,  1147,  1150,  1151,  1152,  1155,
    1156,  1159,  1161,  1169,  1171,  1173,  1177,  1178,  1180,  1183,
    1186,  1187,  1191,  1193,  1196,  1201,  1202,  1203,  1207,  1208,
    1209,  1212,  1213,  1214,  1217,  1218,  1220,  1221,  1222,  1223,
    1224,  1225,  1226,  1227,  1228,  1229,  1231,  1232,  1235,  1236,
    1239,  1240,  1241,  1242,  1245,  1246,  1249,  1251,  1254,  1258,
    1259,  1260,  1262,  1264,  1268,  1269,  1270,  1273,  1274,  1275,
    1276,  1277,  1278,  1279,  1282,  1285,  1286,  1287,  1290,  1291,
    1292,  1293,  1294,  1295,  1298,  1299,  1300,  1301,  1302,  1303,
    1304,  1307,  1308,  1311,  1312,  1315,  1316,  1319,  1320,  1323,
    1324,  1325,  1328,  1329,  1332,  1333,  1336,  1339,  1347,  1348,
    1351,  1352,  1353,  1354,  1355,  1356,  1357,  1358,  1359,  1360,
    1361,  1362,  1363,  1364,  1365,  1366,  1367,  1368,  1371,  1374,
    1375,  1378,  1379,  1380,  1381,  1384,  1385,  1386,  1387,  1390,
    1391,  1392,  1393,  1394,  1395,  1398,  1399,  1400,  1401,  1402,
    1403,  1405,  1406,  1411,  1412,  1415,  1417,  1419,  1422,  1423,
    1424,  1425,  1426,  1427,  1430,  1432,  1434,  1436,  1437,  1439,
    1441,  1443,  1445,  1447,  1450,  1451,  1452,  1453,  1454,  1455,
    1457,  1458,  1459,  1462,  1465,  1467,  1469,  1471,  1473,  1475,
    1477,  1479,  1482,  1484,  1486,  1488,  1489,  1490,  1491,  1492,
    1495,  1496,  1497,  1498,  1499,  1500,  1501,  1503,  1505,  1506,
    1507,  1510,  1511,  1512,  1513,  1514,  1515,  1517,  1518,  1519,
    1522,  1523,  1524,  1525,  1526,  1529,  1532,  1535,  1538,  1541,
    1544,  1547,  1550,  1553,  1558,  1561,  1564,  1567,  1570,  1573,
    1576,  1579,  1582,  1585,  1588,  1593,  1596,  1599,  1602,  1605,
    1608,  1611,  1614,  1617,  1622,  1624,  1626,  1628,  1630,  1632,
    1637,  1639,  1641,  1645,  1648,  1651,  1654,  1657,  1660,  1663,
    1666,  1669,  1672,  1675,  1680,  1681,  1682,  1683,  1684,  1685,
    1686,  1688,  1690,  1691,  1692,  1695,  1696,  1697,  1698,  1699,
    1700,  1702,  1703,  1704,  1707,  1709,  1711,  1712,  1714,  1716,
    1720,  1721,  1724,  1725,  1726,  1729,  1732,  1733,  1734,  1735,
    1736,  1737,  1738,  1741,  1749,  1750,  1751,  1752,  1754,  1756,
    1757,  1757,  1758,  1759,  1760,  1761,  1762,  1764,  1765,  1767,
    1770,  1773,  1774,  1775,  1778,  1781,  1784,  1785,  1789,  1792,
    1795,  1798,  1802,  1807,  1812,  1814,  1815,  1817,  1818,  1820,
    1822,  1824,  1826,  1827,  1829,  1831,  1835,  1840,  1842,  1844,
    1846,  1848,  1850,  1852,  1854,  1856,  1858,  1860,  1863,  1864,
    1866,  1868,  1869,  1871,  1873,  1874,  1875,  1877,  1879,  1880,
    1881,  1883,  1884,  1885,  1888,  1892,  1895,  1898,  1902,  1907,
    1913,  1914,  1915,  1917,  1918,  1922,  1924,  1925,  1926,  1929,
    1932,  1935,  1937,  1939,  1940,  1945,  1948,  1949,  1950,  1953,
    1957,  1958,  1960,  1961,  1962,  1964,  1965,  1967,  1968,  1973,
    1975,  1976,  1978,  1979,  1980,  1981,  1982,  1983,  1985,  1987,
    1989,  1990,  1991,  1993,  1995,  1996,  1997,  1998,  1999,  2000,
    2001,  2002,  2003,  2004,  2005,  2007,  2009,  2010,  2011,  2012,
    2014,  2015,  2016,  2017,  2018,  2020,  2021,  2022,  2023,  2024,
    2025,  2028,  2029,  2030,  2031,  2032,  2033,  2034,  2035,  2036,
    2037,  2038,  2039,  2040,  2041,  2042,  2043,  2044,  2045,  2046,
    2047,  2048,  2051,  2052,  2053,  2054,  2055,  2056,  2064,  2071,
    2080,  2089,  2096,  2103,  2111,  2119,  2126,  2131,  2136,  2141,
    2146,  2151,  2156,  2162,  2172,  2182,  2192,  2199,  2209,  2219,
    2228,  2240,  2253,  2258,  2261,  2263,  2265,  2270,  2274,  2275,
    2276,  2282,  2284,  2286,  2289,  2290,  2291,  2292,  2293,  2294,
    2295,  2298,  2299,  2300,  2301,  2302,  2303,  2305,  2307,  2309,
    2311,  2313,  2315,  2318,  2319,  2320,  2321,  2323,  2326,  2327,
    2329,  2331,  2332,  2333,  2335,  2338,  2341,  2342,  2344,  2345,
    2346,  2347,  2349,  2350,  2351,  2352,  2353,  2355,  2357,  2358,
    2360,  2363,  2364,  2365,  2367,  2369,  2370,  2371,  2372,  2374,
    2377,  2381,  2382,  2383,  2384,  2387,  2390,  2392,  2393,  2394,
    2395,  2397,  2400,  2401,  2403,  2404,  2405,  2406,  2407,  2409,
    2410,  2412,  2415,  2416,  2417,  2418,  2419,  2421,  2423,  2424,
    2425,  2426,  2428,  2430,  2431,  2432,  2433,  2434,  2435,  2437,
    2438,  2440,  2443,  2444,  2445,  2446,  2449,  2450,  2453,  2454,
    2457,  2458,  2461,  2474,  2475,  2479,  2480,  2484,  2485,  2488,
    2492,  2498,  2500,  2503,  2505,  2508,  2510,  2514,  2515,  2516,
    2517,  2518,  2519,  2520,  2524,  2525,  2528,  2529,  2530,  2531,
    2532,  2533,  2534,  2535,  2538,  2539,  2540,  2541,  2542,  2543,
    2544,  2545,  2546,  2547,  2548,  2551,  2552,  2555,  2556,  2556,
    2559,  2561,  2563,  2566,  2567,  2568,  2569,  2572,  2573,  2576,
    2577,  2580,  2584,  2585,  2585,  2588,  2589,  2592,  2595,  2599,
    2600,  2601,  2602,  2603,  2604,  2605,  2606,  2612,  2613,  2614,
    2615,  2618,  2620,  2621,  2626,  2628,  2629,  2630,  2631,  2634,
    2635,  2640,  2644,  2645,  2646,  2649,  2650,  2655,  2656,  2659,
    2661,  2662,  2663,  2668,  2670,  2676,  2677,  2678,  2679,  2682,
    2683,  2686,  2688,  2690,  2691,  2694,  2696,  2697,  2698,  2701,
    2702,  2705,  2706,  2707,  2710,  2711,  2712,  2715,  2716,  2717,
    2718,  2719,  2722,  2723,  2724,  2727,  2728,  2729,  2730,  2731,
    2734,  2736,  2738,  2740,  2743,  2745,  2747,  2750,  2751,  2752,
    2753,  2754,  2755,  2756,  2757,  2758,  2761,  2762,  2763,  2766,
    2767,  2768,  2771,  2772,  2773,  2776,  2777,  2778,  2781,  2782,
    2783,  2784,  2787,  2788,  2789,  2792,  2793,  2794,  2797,  2798,
    2799,  2802,  2803,  2804,  2807,  2809,  2811,  2815,  2819,  2821,
    2826,  2829,  2830,  2831,  2832,  2835,  2836,  2838,  2839,  2841,
    2844,  2845,  2846,  2849,  2850,  2853,  2855,  2856,  2857,  2858,
    2861,  2862,  2863,  2866,  2867,  2868,  2871,  2872,  2877,  2881,
    2888,  2889,  2891,  2896,  2898,  2901,  2902,  2903,  2904,  2906,
    2911
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
  "ENVI_", "EPANDA_", "EPSILON_", "EQUATORIAL_", "ERASE_", "EXT_",
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
     605,   606,   607,   608,   609,    89,    78,    88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   359,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   361,   361,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     364,   364,   364,   364,   364,   365,   365,   366,   366,   366,
     367,   368,   369,   370,   370,   370,   370,   371,   371,   371,
     371,   371,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     373,   373,   374,   374,   374,   374,   374,   374,   375,   375,
     375,   375,   375,   376,   376,   376,   376,   376,   376,   376,
     376,   377,   377,   377,   377,   377,   378,   378,   378,   378,
     378,   378,   378,   378,   379,   379,   379,   380,   380,   380,
     380,   381,   381,   381,   382,   382,   382,   383,   383,   383,
     384,   384,   384,   384,   384,   384,   384,   384,   385,   385,
     386,   386,   386,   386,   386,   386,   387,   387,   387,   387,
     388,   388,   388,   388,   388,   388,   389,   389,   389,   389,
     389,   389,   389,   389,   390,   390,   391,   391,   392,   392,
     393,   393,   394,   394,   394,   394,   394,   394,   394,   394,
     395,   395,   396,   396,   396,   396,   396,   396,   396,   396,
     397,   397,   398,   398,   398,   398,   398,   399,   399,   399,
     400,   400,   400,   401,   401,   401,   401,   401,   401,   401,
     402,   402,   403,   403,   403,   403,   403,   404,   404,   404,
     404,   405,   405,   405,   405,   406,   406,   406,   406,   406,
     407,   407,   408,   408,   409,   409,   409,   409,   409,   410,
     410,   410,   410,   410,   411,   411,   412,   412,   412,   413,
     413,   413,   413,   414,   414,   415,   415,   416,   416,   417,
     417,   418,   418,   418,   418,   418,   418,   418,   419,   419,
     419,   419,   419,   420,   420,   420,   420,   420,   420,   420,
     420,   421,   422,   422,   422,   423,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   425,   425,   426,   426,
     427,   427,   427,   427,   427,   427,   427,   427,   428,   428,
     428,   429,   430,   430,   430,   430,   430,   430,   430,   430,
     430,   431,   431,   432,   432,   432,   433,   433,   434,   435,
     435,   435,   436,   436,   436,   437,   438,   438,   438,   438,
     438,   438,   438,   438,   438,   438,   439,   439,   439,   440,
     440,   441,   441,   442,   442,   442,   443,   443,   443,   444,
     445,   445,   446,   446,   446,   447,   447,   447,   448,   448,
     448,   449,   449,   449,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   451,   451,
     452,   452,   452,   452,   453,   453,   454,   454,   454,   455,
     455,   455,   455,   455,   456,   456,   456,   457,   457,   457,
     457,   457,   457,   457,   458,   459,   459,   459,   460,   460,
     460,   460,   460,   460,   461,   461,   461,   461,   461,   461,
     461,   462,   462,   463,   463,   464,   464,   465,   465,   466,
     466,   466,   467,   467,   468,   468,   469,   469,   470,   470,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   472,   473,
     473,   474,   474,   474,   474,   475,   475,   475,   475,   476,
     476,   476,   476,   476,   476,   477,   477,   477,   477,   477,
     477,   477,   477,   478,   478,   479,   479,   479,   480,   480,
     480,   480,   480,   480,   481,   481,   481,   481,   481,   481,
     481,   481,   481,   481,   482,   482,   482,   482,   482,   482,
     482,   482,   482,   483,   484,   484,   484,   484,   484,   484,
     484,   484,   484,   484,   484,   484,   484,   484,   484,   484,
     485,   485,   485,   485,   485,   485,   485,   485,   485,   485,
     485,   486,   486,   486,   486,   486,   486,   486,   486,   486,
     487,   487,   487,   487,   487,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   492,   492,   492,   492,   492,   492,   492,
     492,   492,   492,   492,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   495,   495,   495,   495,   495,   495,
     496,   496,   497,   497,   497,   498,   499,   499,   499,   499,
     499,   499,   499,   500,   501,   501,   501,   501,   501,   501,
     502,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   501,
     501,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   504,   504,   504,   504,   504,   504,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   506,   506,   506,   506,   507,   507,
     507,   508,   508,   508,   509,   509,   509,   509,   509,   509,
     509,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   511,   511,   511,   511,   512,   512,   513,   513,
     514,   514,   515,   516,   516,   516,   516,   516,   516,   517,
     517,   518,   518,   518,   518,   518,   518,   519,   519,   519,
     519,   519,   519,   519,   520,   520,   521,   521,   521,   521,
     521,   521,   521,   521,   522,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   523,   523,   524,   525,   524,
     526,   526,   526,   527,   527,   527,   527,   528,   528,   529,
     529,   530,   531,   532,   531,   533,   533,   534,   535,   536,
     536,   536,   536,   536,   536,   536,   536,   537,   537,   537,
     537,   538,   538,   538,   538,   538,   538,   538,   538,   539,
     539,   539,   540,   540,   540,   541,   541,   541,   541,   542,
     542,   542,   542,   543,   543,   544,   544,   544,   544,   545,
     545,   546,   546,   546,   546,   547,   547,   547,   547,   548,
     548,   549,   549,   549,   550,   550,   550,   551,   551,   551,
     551,   551,   552,   552,   552,   553,   553,   553,   553,   553,
     554,   554,   554,   554,   555,   555,   555,   556,   556,   556,
     556,   556,   556,   556,   556,   556,   557,   557,   557,   558,
     558,   558,   559,   559,   559,   560,   560,   560,   561,   561,
     561,   561,   562,   562,   562,   563,   563,   563,   564,   564,
     564,   565,   565,   565,   566,   566,   566,   567,   568,   568,
     568,   569,   569,   569,   569,   570,   570,   570,   570,   570,
     571,   571,   571,   572,   572,   573,   573,   573,   573,   573,
     574,   574,   574,   575,   575,   575,   576,   576,   576,   577,
     578,   578,   578,   578,   578,   579,   579,   579,   579,   579,
     579
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     3,     3,     2,     1,     1,
       2,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     2,     3,     2,     3,     2,     2,
       2,     2,     3,     2,     3,     2,     2,     2,     2,     2,
       2,     1,     3,     2,     2,     2,     1,     2,     2,     2,
       1,     2,     1,     2,     2,     2,     2,     1,     1,     1,
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
       3,     2,     0,     1,     1,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     2,     2,     2,     4,     3,     2,     2,     2,     1,
       3,     2,     2,     1,     2,     8,     2,     1,     2,     1,
       2,     1,     4,     3,     2,     1,     7,     8,     7,     8,
       1,     1,     1,     2,     1,     1,     2,     1,     0,     2,
       2,     1,     0,     2,     2,     1,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     0,     1,     2,     1,
       4,     5,     0,     2,     1,     5,     2,     2,     1,     1,
       1,     2,     1,     2,     1,     1,     0,     1,     1,     0,
       1,     5,     6,     3,     6,     3,     1,     3,     1,     1,
       1,     3,     6,     7,     5,     1,     1,     4,     5,     1,
       3,     0,     1,     2,     1,     4,     1,     2,     1,     2,
       3,     2,     1,     2,     1,     4,     2,     1,     1,     3,
       1,     2,     3,     2,     0,     1,     1,     4,     2,     0,
       1,     3,     4,     4,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     1,     2,     2,     2,     2,     1,     1,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       2,     2,     0,     1,     2,     1,     6,     5,     1,     1,
       1,     2,     2,     2,     1,     1,     1,     1,     2,     1,
       1,     1,     2,     1,     1,     1,     2,     2,     2,     0,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     1,     2,     3,     1,     2,     2,     4,
       6,     1,    10,     1,     2,     3,     3,     2,     2,     2,
       2,     2,     2,     2,     4,     4,     4,     3,     3,     5,
       4,     4,     4,     3,     3,     3,     3,     2,     2,     4,
       3,     3,     3,     3,     4,     4,     4,     4,     5,     4,
       6,     7,     4,     4,     5,     2,     3,     3,     3,     2,
       3,     3,     3,     3,     4,     3,     5,     6,     3,     3,
       4,     3,     3,     3,     3,     3,     5,     3,     3,     4,
       3,     2,     2,     1,     3,     4,     4,     4,     4,     4,
       6,     4,     4,     5,     4,     4,     4,     4,     5,     4,
       6,     7,     4,     4,     5,     5,     5,     5,     5,     5,
       7,     5,     5,     6,     4,     4,     4,     4,     4,     6,
       4,     4,     5,     5,     5,     5,     5,     6,     5,     7,
       8,     5,     5,     6,     3,     3,     3,     3,     4,     3,
       5,     6,     3,     3,     4,     3,     3,     3,     3,     3,
       5,     3,     3,     4,     4,     4,     3,     5,     4,     4,
       2,     3,     6,     6,     1,     1,     1,     2,     2,     2,
       3,     3,     2,    12,     2,     2,     1,     3,     4,     2,
       0,     3,     1,     2,     2,     2,     2,     2,     4,     4,
       4,     3,     4,     5,     8,     6,     4,     9,     6,     7,
      10,    11,    12,     9,     5,     4,     6,     3,     5,     5,
       6,     5,     4,     9,    10,    11,     9,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     7,     7,     2,     4,
       4,     4,     4,     5,     4,     4,     5,     5,     3,     4,
       4,     4,     4,     7,     9,     6,    10,    11,    12,     9,
       3,     2,     3,     5,     7,     4,     3,     3,     6,     7,
       7,     4,     4,     4,     9,     4,     3,     4,     7,     7,
       2,     3,     3,     3,     4,     2,     2,     4,    10,     3,
       1,     3,     2,     2,     2,     2,     3,     5,     4,     5,
       2,     2,     2,     2,     3,     2,     2,     2,     3,     2,
       3,     4,     3,     3,     6,     4,     2,     3,     2,     2,
       4,     3,     3,     2,     3,     1,     2,     1,     2,     2,
       2,     1,     1,     1,     1,     2,     1,     2,     2,     1,
       2,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     2,     2,     2,     3,     5,     7,
       7,     6,     6,     6,     6,     5,     6,     6,     6,     6,
       6,     6,     6,    11,     7,     7,     7,     9,     9,    10,
      12,    12,     2,     2,     3,     4,     4,     4,     0,     1,
       1,     4,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     3,     3,     8,     6,    10,
       7,     7,     5,     2,     2,     3,     4,     5,     3,     5,
       5,     3,     4,     5,     5,     5,     3,     5,     2,     3,
       3,     5,     3,     3,     3,     4,     5,     5,     3,     5,
       5,     3,     4,     5,     5,     2,     2,     3,     5,     6,
       6,     3,     3,     3,     6,     5,     5,     2,     3,     3,
       5,     6,     3,     2,     2,     3,     2,     3,     2,     3,
       5,     6,     2,     2,     2,     1,     4,     4,     1,     2,
       2,     2,     2,     2,     2,     2,     3,     2,     3,     2,
       3,     1,     1,     1,     1,     1,     0,     2,     0,     2,
       0,     1,     0,     0,     1,     1,     1,     1,     1,     7,
       8,     2,     6,     2,     6,     2,     3,     2,     1,     1,
       3,     3,     1,     4,     2,     1,     3,     3,     4,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     0,     0,     2,
       6,     7,     2,     1,     3,     1,     3,     1,     2,     2,
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
       0,   311,     0,     0,     0,     0,     0,     0,     0,     0,
      23,     0,     0,     0,     0,     0,     0,     0,  1053,     0,
       0,     0,     0,     0,     0,     0,     0,  1053,    41,     0,
       0,     0,    46,     0,     0,     0,    50,  1245,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,    57,    58,     0,   247,     7,     0,
       0,     0,     0,     0,     0,    10,     0,     0,   277,   279,
       0,     0,    12,   148,   150,   143,   144,   145,   149,   146,
     147,   282,    13,     0,   294,     0,     0,     0,    14,     0,
       0,     0,     0,   318,     0,    15,    71,   100,     0,   130,
      99,    79,    97,     0,    76,    78,    74,   131,    98,    75,
       0,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,    72,
      73,    77,   325,   156,   101,     0,    16,     0,    17,    18,
       0,     0,     0,     0,     0,     0,    60,    59,     0,     0,
       0,     0,     2,     0,    19,     0,     0,     0,   392,   406,
       0,   412,     0,     0,     0,     0,     0,     0,     0,   350,
       0,   484,     0,     0,     0,     0,     0,     0,  1053,     0,
     359,     0,   363,     0,     0,     0,   367,     0,   369,     0,
     371,     0,     0,   519,   375,    20,     0,   525,    21,   530,
       0,     0,   549,   534,   535,   536,   537,   551,   539,   540,
     544,   541,     0,   543,   545,     0,     0,    22,     0,    24,
       0,   566,     0,     0,     0,   571,     0,    26,     0,     0,
       0,     0,     0,     0,     0,    28,   725,    29,     0,     0,
       0,     0,     0,     0,   726,    30,     0,    31,  1057,  1058,
    1054,  1055,  1056,     0,   138,  1119,     0,   132,     0,     0,
       0,    33,     0,  1130,  1129,  1128,  1127,    35,     0,     0,
       0,     0,     0,   156,     0,    36,     0,  1148,     0,  1145,
      37,     0,     0,     0,     0,    40,     0,    39,    38,     0,
       0,     0,     0,    43,     0,     0,  1177,    44,     0,     0,
       0,     0,     0,    45,  1241,  1240,  1244,  1243,  1242,    47,
       0,    48,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,  1247,    51,     0,     0,    53,     0,     0,
       0,     0,   156,    54,  1269,    55,     0,     0,    56,     1,
       4,     5,     6,   230,     0,   222,     0,     0,   224,     0,
     232,   225,   229,   240,   241,   226,   242,     0,   228,   250,
     251,   249,   248,     0,     0,   270,     0,   255,   263,   266,
     265,   264,   262,   254,   259,   260,   261,   253,     0,     0,
       0,     0,     0,     0,   258,    11,     0,     0,     0,   278,
       0,   283,     0,   293,   284,   295,   285,   296,   286,   307,
     287,     0,     0,   288,     0,    90,    91,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   314,
       0,     0,     0,     0,     0,   158,   163,   157,   159,   162,
     161,   160,     0,     0,   331,    65,    66,    67,    68,    69,
      61,    62,    63,    70,    64,     0,   336,     0,   388,   384,
     380,   381,   385,   382,   387,   337,   391,   338,   299,   396,
     400,   395,   302,   301,   300,     0,     0,   339,   407,   341,
       0,   340,     0,   414,   342,   426,   418,   429,   419,   420,
     422,     0,   424,   425,   156,   343,     0,     0,   344,     0,
       0,   156,   345,   438,   156,   436,   346,   439,   348,   156,
     440,   347,     0,   156,     0,   349,   458,     0,   456,   474,
       0,     0,     0,   462,   454,     0,   464,   479,   467,   351,
     485,   486,   352,   353,     0,     0,     0,   449,     0,   356,
     445,   446,     0,   357,   358,     0,   493,   487,   492,   488,
     489,   490,   491,   361,   362,   494,   364,     0,   495,   496,
     497,   366,   503,   498,   499,   501,   368,   509,   511,   513,
     515,   508,   510,   517,   370,     0,     0,   522,     0,   374,
     156,   524,   531,     0,   532,   550,   533,   552,   553,   554,
     538,   555,   557,   556,   558,   542,   546,   563,     0,     0,
       0,     0,   559,   547,    25,     0,     0,   568,   567,     0,
       0,     0,     0,    27,     0,     0,   578,     0,   579,     0,
       0,     0,     0,     0,   580,     0,   724,     0,   581,     0,
     582,     0,     0,   583,     0,   729,   728,   727,     0,   732,
       0,     0,     0,   902,     0,     0,     0,   736,   740,   742,
     938,     0,     0,     0,     0,   840,     0,     0,     0,   875,
       0,     0,     0,     0,     0,     0,     0,   877,     0,     0,
       0,    32,   141,   142,   140,   139,  1125,  1120,  1126,   135,
     136,   134,   137,   133,  1121,     0,  1123,  1124,    34,     0,
       0,     0,     0,  1137,  1138,     0,   156,     0,  1135,  1132,
       0,     0,     0,   156,  1155,  1158,  1156,  1157,  1149,  1150,
    1151,  1152,     0,     0,     0,    42,  1174,  1175,     0,  1182,
    1184,  1183,  1179,  1180,  1178,     0,     0,     0,     0,  1185,
       0,  1188,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1186,  1197,     0,     0,     0,  1187,  1189,  1239,
    1172,  1173,  1171,   211,     0,   214,   207,     0,   216,   208,
       0,   218,   209,  1170,  1169,   210,   212,   213,     0,     0,
     206,     0,     0,     0,     0,  1253,  1266,  1256,     0,     0,
    1259,     0,     0,  1258,  1257,   164,  1275,     0,  1274,  1270,
     231,   227,     0,   236,     0,   233,     0,   252,   151,   154,
     155,   153,   152,   267,   268,   269,   257,   256,   272,   274,
     273,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     156,     0,   315,    96,    93,    94,    95,   156,   317,   316,
       0,     0,     0,     0,     0,     0,     0,   330,     0,   326,
     324,   323,   335,   383,     0,     0,   386,   401,   402,   397,
     398,   403,   405,   404,   399,   303,   304,   394,   393,   409,
     408,     0,   413,   427,   428,   417,   430,   423,   421,   416,
       0,     0,   156,   156,   164,   164,   164,   156,     0,     0,
     156,   475,   457,   468,     0,   459,    80,   470,     0,     0,
     461,   463,   156,   480,     0,     0,   466,     0,     0,   355,
       0,   451,     0,     0,     0,     0,   952,   954,   953,     0,
    1046,     0,  1025,     0,  1028,     0,     0,  1048,  1050,     0,
    1041,   360,     0,   500,   502,   512,   505,   514,   506,   516,
     507,   518,   504,     0,     0,   373,   523,   520,   521,   164,
     548,   560,   561,   562,   564,     0,   577,   565,     0,     0,
       0,     0,     0,     0,   177,   177,   171,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   174,   174,   171,     0,
       0,   171,     0,     0,     0,     0,     0,   619,   643,     0,
       0,     0,   615,     0,     0,     0,     0,   177,   171,     0,
       0,   720,     0,   730,   731,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   788,
       0,     0,     0,     0,     0,   811,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   830,     0,     0,   835,   836,
       0,     0,     0,   855,   857,   856,     0,   859,     0,     0,
     866,   868,   869,   903,     0,     0,     0,     0,   734,   735,
     946,   944,   949,   948,   947,   945,   950,     0,   739,     0,
     940,   939,   743,     0,   943,     0,   744,   745,   746,   747,
       0,     0,     0,     0,     0,   842,     0,     0,   843,  1069,
       0,  1072,  1068,     0,     0,     0,   844,   876,   845,  1087,
    1092,  1089,  1088,  1086,  1093,  1090,  1084,  1091,  1085,  1094,
       0,     0,   850,     0,     0,     0,     0,   851,  1103,     0,
    1105,   852,     0,  1107,   853,   873,     0,     0,     0,   878,
     879,   880,  1122,  1136,     0,     0,  1143,  1139,     0,     0,
       0,  1134,  1133,  1147,  1146,     0,     0,  1163,     0,     0,
    1159,     0,  1167,     0,     0,  1160,     0,  1181,   200,   200,
       0,   200,     0,  1207,     0,  1206,  1198,     0,     0,     0,
       0,  1202,     0,     0,     0,  1205,     0,     0,     0,     0,
       0,  1200,  1208,     0,     0,     0,  1199,   200,   200,   200,
       0,   215,   217,   219,     0,   220,     0,    58,     0,  1249,
       0,  1254,     0,   156,  1260,  1261,     0,  1263,  1264,     0,
     165,   166,  1255,  1276,  1277,     0,   223,     0,   237,     0,
       0,     0,     0,   271,     0,     0,     0,     0,     0,     0,
       0,     0,   309,   156,     0,     0,     0,     0,   156,     0,
     329,     0,   328,   390,   389,     0,     0,     0,   156,     0,
     164,   435,   433,   437,   441,     0,     0,     0,   164,     0,
      84,    83,   476,   460,     0,   471,   473,   167,     0,     0,
     354,     0,     0,    58,     0,   450,     0,     0,   964,     0,
       0,     0,     0,     0,     0,   978,     0,     0,     0,     0,
       0,     0,   995,   996,     0,     0,     0,     0,     0,  1007,
       0,  1013,  1014,  1016,  1018,     0,  1022,  1033,  1034,  1035,
       0,  1037,  1042,  1044,  1045,  1043,   951,     0,  1024,     0,
    1023,   963,     0,     0,  1029,     0,  1031,     0,  1030,  1051,
    1032,  1039,     0,     0,   372,     0,     0,   575,   576,     0,
     573,   569,     0,   177,   177,   177,   178,   179,   587,   588,
     173,   172,     0,   177,   177,   177,     0,   593,   603,   174,
     177,   177,   177,   175,   176,   177,   177,     0,   177,   177,
       0,   174,     0,   616,     0,     0,     0,   642,     0,   641,
       0,     0,   618,     0,   617,     0,     0,     0,     0,   174,
     174,   171,     0,     0,   171,     0,     0,     0,   177,   177,
     716,     0,   177,   177,   721,     0,   190,   191,   192,   193,
     194,   195,     0,    88,    89,    87,   751,     0,     0,     0,
       0,     0,     0,   896,   894,   889,     0,   899,   883,   900,
     886,   898,   892,   881,   895,   884,   882,   901,   897,     0,
       0,     0,   767,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   798,     0,     0,     0,
       0,     0,   810,   812,     0,     0,   817,   816,     0,     0,
     180,     0,     0,     0,   156,     0,   826,     0,     0,     0,
       0,   831,   832,   833,     0,     0,     0,   839,   854,   858,
     860,   863,   862,     0,     0,     0,   867,   904,   906,     0,
     905,   737,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1052,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   741,     0,     0,
       0,     0,   841,     0,   156,  1065,  1063,  1061,     0,     0,
     156,  1067,   846,     0,     0,     0,     0,  1102,     0,     0,
    1108,   871,   872,     0,   874,  1142,  1144,  1141,  1140,  1131,
       0,     0,     0,  1164,     0,     0,  1168,  1176,   202,   203,
     204,   205,   201,  1191,  1190,     0,     0,     0,  1193,  1192,
     200,     0,     0,     0,  1201,     0,     0,     0,     0,     0,
    1218,     0,  1232,  1231,  1233,     0,     0,     0,  1204,     0,
       0,     0,  1203,  1213,  1212,  1214,  1210,  1209,  1211,  1235,
    1234,  1236,     0,     0,     0,  1251,  1252,     0,   156,  1267,
    1262,  1265,     0,     0,   156,     0,     0,     0,   234,     0,
       0,     0,     0,     0,     0,     0,     0,   306,   305,     0,
       0,   297,   308,   310,     0,   320,   322,   321,   319,   156,
     327,     0,     0,     0,   164,   156,     0,     0,     0,     0,
     455,   469,    82,    81,   478,     0,   472,   169,   170,   168,
     465,     0,   481,     0,     0,     0,   453,   447,     0,     0,
       0,     0,     0,     0,   156,   965,     0,   968,     0,     0,
     971,     0,   156,   976,     0,   979,   980,     0,   982,   983,
     984,     0,   988,     0,     0,   991,     0,   997,     0,     0,
       0,  1002,  1003,  1001,     0,     0,     0,  1008,  1009,     0,
       0,  1012,  1015,  1017,  1019,     0,     0,  1036,  1038,   955,
    1047,   956,     0,     0,  1049,  1040,     0,     0,   528,   529,
       0,     0,   574,     0,   584,   585,   586,   177,   590,   591,
     592,     0,     0,     0,   597,   598,   171,     0,     0,     0,
     177,   604,   605,   606,   607,   609,   174,   612,   613,     0,
     177,     0,     0,     0,   174,   174,   171,     0,     0,     0,
       0,   640,     0,   644,     0,     0,     0,     0,     0,   174,
     174,   171,     0,     0,   171,     0,     0,     0,     0,     0,
     174,   174,   171,     0,     0,   171,     0,     0,     0,     0,
       0,   174,   174,   171,     0,     0,   171,     0,     0,     0,
       0,   174,   174,   171,     0,     0,     0,   174,   620,   621,
     622,   623,   625,     0,   628,   629,     0,   174,     0,     0,
     714,   715,   177,   718,   719,     0,   750,   156,   752,     0,
       0,   756,     0,     0,     0,     0,     0,   888,   885,   891,
     890,   887,   893,     0,   765,     0,     0,     0,     0,   156,
     772,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   789,   790,   791,     0,   795,   792,
     794,     0,     0,   800,   799,   801,   802,     0,     0,     0,
       0,     0,     0,   156,   156,   815,   186,   182,   187,   181,
     184,   183,   185,   821,   822,   823,     0,     0,   825,   827,
     156,   156,     0,   834,   837,   156,   156,   861,   865,   907,
     738,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1095,   932,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   933,     0,     0,
       0,     0,     0,   748,   749,   156,   164,  1066,     0,     0,
    1070,  1071,     0,     0,   848,     0,   156,     0,  1104,  1106,
     870,     0,  1161,  1162,  1165,  1166,   200,   200,   200,  1237,
    1216,  1215,  1217,  1220,  1219,  1223,  1222,  1224,  1221,  1229,
    1228,  1230,  1226,  1225,  1227,     0,     0,  1246,     0,  1268,
       0,   156,     0,  1271,     0,     0,   238,     0,   235,     0,
       0,     0,   275,     0,     0,     0,     0,   156,     0,   312,
     144,     0,   410,     0,   431,   164,   167,     0,     0,   444,
       0,   482,   483,     0,   448,     0,     0,     0,     0,     0,
     156,   966,   167,   167,   167,   156,   972,   167,   164,   167,
     167,   156,   985,   167,   167,   167,   156,   992,   167,   167,
     156,     0,   167,   156,   167,   167,   156,   167,   156,  1026,
    1027,     0,     0,   527,   570,     0,   589,   594,   595,   596,
       0,   600,   601,   602,   608,   177,   174,   614,   631,   632,
     633,   634,   635,     0,   637,   638,   174,     0,     0,     0,
     174,   174,   171,     0,     0,     0,     0,     0,     0,   174,
     174,   171,     0,     0,     0,     0,     0,     0,   174,   174,
     171,     0,     0,     0,   174,   177,   177,   177,   177,   177,
       0,   177,   177,     0,   174,   174,   177,   177,   177,   177,
     177,     0,   177,   177,     0,   174,   174,   694,   695,   696,
     697,   699,     0,   702,   703,     0,   174,   705,   706,   707,
     708,   709,     0,   711,   712,   174,   624,   174,     0,   630,
       0,     0,   717,     0,   753,   167,     0,     0,   167,     0,
       0,     0,   764,   167,   768,   769,   167,   771,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   793,   796,   797,     0,   167,     0,     0,     0,   813,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1096,  1075,     0,  1082,
    1083,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   156,     0,     0,    85,     0,     0,   941,
     942,   164,     0,     0,     0,  1073,   847,   849,   164,   156,
    1154,  1195,  1194,  1196,  1238,     0,  1248,  1278,     0,     0,
    1273,  1272,   239,     0,     0,     0,   280,     0,     0,     0,
     298,   167,   411,   415,   432,   434,     0,   442,   477,   156,
       0,     0,     0,     0,     0,     0,   962,   967,   970,   969,
     973,   974,   975,   977,   981,   986,   987,   989,   990,   993,
     994,   998,   164,   167,  1005,   164,  1006,  1010,   164,  1020,
     164,     0,   156,     0,   526,     0,   599,   610,   177,   174,
     639,   177,   177,   177,   177,   177,     0,   177,   177,   174,
     177,   177,   177,   177,   177,     0,   177,   177,   174,   177,
     177,   177,   177,   177,     0,   177,   177,   174,   177,   654,
     655,   656,   657,   659,   174,   662,   663,     0,   177,   177,
     683,   684,   685,   686,   688,   174,   691,   692,     0,   177,
     698,   174,     0,   704,   174,   713,   626,   174,   722,   723,
     156,   755,     0,   167,   758,     0,   156,     0,   766,   770,
     156,     0,   777,   778,   779,   780,   784,   785,   781,   782,
     783,     0,     0,   167,   805,     0,   156,     0,     0,   818,
     167,     0,     0,   167,   167,     0,   864,     0,   188,   188,
       0,     0,   188,     0,   188,  1052,     0,     0,     0,     0,
       0,     0,     0,     0,  1074,     0,     0,   188,   188,     0,
       0,     0,     0,     0,     0,     0,     0,   934,     0,     0,
       0,  1052,    86,     0,   188,     0,  1098,   156,   156,     0,
     164,     0,   221,  1280,  1279,     0,     0,   243,     0,     0,
       0,     0,   313,   443,     0,   332,     0,   958,     0,   196,
       0,   999,  1000,  1004,  1011,  1021,   365,     0,   332,     0,
     611,   636,   645,   646,   647,   648,   649,   174,   651,   652,
     177,   674,   675,   676,   677,   678,   174,   680,   681,   177,
     665,   666,   667,   668,   669,   174,   671,   672,   177,   658,
     177,   174,   664,   687,   177,   174,   693,   700,   174,   710,
     627,     0,   167,   759,     0,     0,     0,     0,     0,   786,
     787,   803,     0,     0,     0,   814,   819,     0,   828,   829,
     820,   167,     0,   189,  1052,  1052,    85,     0,  1052,     0,
    1052,   908,   156,     0,  1077,     0,  1080,  1117,  1081,  1079,
    1076,     0,  1052,  1052,    85,     0,     0,  1052,  1052,     0,
       0,  1052,   937,   935,   936,   915,  1052,  1052,  1098,  1112,
       0,  1064,  1062,  1100,     0,     0,     0,     0,   245,     0,
       0,     0,   332,   333,   334,   376,     0,     0,   197,   199,
     198,   960,   961,   332,   378,     0,   177,   653,   177,   682,
     177,   673,   660,   177,   689,   177,   701,     0,   754,   167,
     167,     0,   167,     0,   167,   167,     0,   167,     0,  1052,
     921,   917,  1052,     0,   922,     0,   916,  1052,     0,  1078,
       0,   919,   918,  1052,     0,     0,   913,   911,  1052,   156,
     912,   914,   920,  1112,  1059,     0,     0,  1099,  1110,  1101,
    1153,     0,     0,     0,   276,   299,   302,   300,     0,     0,
     377,   957,   156,   379,   572,   650,   679,   670,   661,   690,
     167,   757,   763,     0,   776,   773,   804,   809,     0,   824,
       0,   926,   910,    85,     0,   924,  1118,     0,   909,    85,
       0,   925,     0,  1060,  1114,  1116,     0,  1109,     0,     0,
     281,     0,     0,     0,     0,   196,     0,   760,   156,   774,
     806,   838,  1052,     0,     0,  1052,     0,   167,  1115,  1111,
     244,     0,     0,     0,     0,     0,   959,   733,   156,   761,
     775,   156,   807,   928,     0,  1052,   927,     0,     0,   246,
     292,     0,   291,     0,   762,   808,    85,   929,    85,  1052,
     290,   289,  1052,  1052,   923,   931,   930
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,  1415,   172,   152,  1262,  2491,  2492,   429,   430,
     431,   432,   153,   154,   155,   694,   686,    91,   813,   452,
    1212,  1680,  1352,  1365,  1348,  1923,  2594,  1412,  2651,  1583,
     340,   766,   769,   772,   780,    63,   365,   371,   375,   378,
      68,   381,    75,   397,   393,   387,   404,    82,   409,    92,
      98,   414,   416,   418,   486,   867,  1649,   420,   423,   105,
     439,   156,   158,  2645,   174,   215,   909,   945,   475,   856,
     477,   487,   859,   864,   489,   491,   870,   494,   872,   505,
     875,   877,   508,   512,   516,   518,   521,   525,   553,   549,
    1275,   539,   895,   900,   892,  1263,   906,   542,   563,   566,
     571,   576,   584,   936,   938,   940,   942,   589,   947,   218,
     591,  1750,   237,   594,   596,   600,   605,   613,   247,  1341,
     617,   255,   626,  1357,   628,   634,   992,  1373,   987,  1791,
    1379,  1377,  1793,   988,  1382,  1384,   640,   643,   638,   257,
     265,   267,   681,  1069,  1439,  1058,  1537,  1967,  1072,  1076,
    1067,   931,  1316,  1320,  1328,  1330,  1951,   273,  1085,  1088,
    1096,  2256,  2257,  2258,  1952,  2629,  2630,  1117,  1121,  1124,
    2707,  2708,  2704,  2705,  2754,  2259,  2260,   281,   287,   295,
     708,   703,   300,   305,   307,   718,   725,  1150,  1155,   775,
     763,   313,   317,   732,   323,   739,  1588,   752,   753,  1186,
    1181,  1594,  1171,  1600,  1612,  1608,  1175,   757,   741,   329,
     330,   344,  1199,   347,   353,   790,   793,   787,   355,   358,
     798
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2582
static const yytype_int16 yypact[] =
{
    5172,    84,   546,    27, -2582, -2582,  1151,  -134,    47,   483,
    1005,   442,  2605,   173,   277,  1941,    65,  5208,    53,  1619,
   -2582,    58,   859,   386,  1074,   260,   116,   500,   327,   768,
     456,   912,  3394,    20,   998,   540,   459,   327, -2582,    -5,
      50,   748, -2582,    92,   555,   612, -2582,    77, -2582,    35,
    4259,   329,    73,   574,   172,   757,   311,   607,   602,    85,
     623,   -11,   886, -2582, -2582, -2582,   987,   131, -2582,   315,
      16,   277,   -22,   635,    44, -2582,   642,   131, -2582, -2582,
      69,   131, -2582, -2582, -2582, -2582,   131, -2582, -2582, -2582,
   -2582, -2582, -2582,    61,   645,   696,   704,   154, -2582,   131,
    1387,   131,   131,  1057,   131, -2582, -2582, -2582,   515, -2582,
   -2582, -2582, -2582,  4748, -2582, -2582, -2582, -2582, -2582, -2582,
     131, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582,  1273, -2582,   131, -2582,   713, -2582, -2582,
     277,   277,   277,   277,   277,   277, -2582, -2582,   277,   277,
     277,   277, -2582,   600, -2582,   668,  1717,   629,   103,   464,
     598,   416,  4538,   512,  4661,  4597,   755,  4748,  3895, -2582,
    1227,  -102,   740,   806,   742,   961,   480,   814,   327,   916,
   -2582,   789, -2582,   627,   599,   245, -2582,   263, -2582,   702,
   -2582,   462,   815,    74, -2582, -2582,  4868, -2582, -2582, -2582,
     843,   849,   902, -2582, -2582, -2582, -2582,   911, -2582, -2582,
   -2582, -2582,   817, -2582, -2582,  4868,  4506, -2582,   925, -2582,
     143, -2582,   946,   976,    49, -2582,   131, -2582,   999,    39,
     960,   339,   884,  1026,    21, -2582, -2582, -2582,  1043,  1054,
     277,   277,   131,   131, -2582, -2582,  1059, -2582, -2582, -2582,
   -2582, -2582, -2582,  2993,   -59, -2582,  1068,   101,   131,  4868,
     131, -2582,  1075, -2582, -2582, -2582, -2582, -2582,   131,  1152,
     277,  3809,   131,  1273,   131, -2582,  1058, -2582,  4711, -2582,
   -2582,   624,  1080,  1084,   131, -2582,  1087, -2582, -2582,   358,
    1088,  4868,  1094, -2582,  1182,   131,  1012, -2582,   476,   982,
    1472,   365,  1113, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
    1124, -2582,   534,   158,   195,   261,   197,   131,   131,   129,
   -2582,   131,   870,  1155, -2582,   131,   131, -2582,  1158,    54,
      64,  1167,  1273, -2582, -2582, -2582,  1024,   131, -2582, -2582,
   -2582, -2582, -2582, -2582,   131, -2582,  1175,  1185, -2582,   131,
    1177, -2582, -2582, -2582, -2582, -2582, -2582,   131, -2582, -2582,
     131, -2582, -2582,   434,   434, -2582,  1192, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,  1014,   131,
     131,  1195,  1216,  1222, -2582, -2582,   131,   131,   131, -2582,
     131, -2582,  1226, -2582, -2582, -2582, -2582,   646, -2582,  1228,
   -2582,  4868,  1231, -2582,   131, -2582, -2582, -2582,   131,  1237,
    1236,  1236,  4868,   131,   131,   131,   131,   131,   131, -2582,
     131,  4748,  1387,   131,   131, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582,  1387,   131, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582,  1246, -2582,   984,   385, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,  -113, -2582,
   -2582, -2582,  1091, -2582,   420,   -10,   -10, -2582, -2582, -2582,
    1260, -2582,  1269, -2582, -2582,   -61, -2582,  1102, -2582, -2582,
   -2582,  1115, -2582, -2582,  1273, -2582,   131,   131, -2582,  4868,
    4868,  1273, -2582, -2582,  1273, -2582, -2582, -2582, -2582,  1273,
   -2582, -2582,  4868,  1273,   131, -2582, -2582,  4868, -2582,  1285,
      88,  1090,     0, -2582, -2582,  1096,  4868,     6, -2582, -2582,
   -2582, -2582, -2582, -2582,  1286,  1289,  1293, -2582,  1101, -2582,
   -2582, -2582,   131, -2582, -2582,   457, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582,   462, -2582, -2582,
   -2582, -2582, -2582, -2582,  1123,  1125, -2582, -2582,  1251,  1256,
    1258, -2582, -2582,  1097, -2582,   131,  1326,  1104,  4711, -2582,
    1273, -2582, -2582,  1330, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,  4868,  4868,
    4868,  4868, -2582, -2582, -2582,  1337,   277, -2582, -2582,  1340,
    1341,  1156,   131, -2582,   199,  1263, -2582,  1350, -2582,   479,
    1275,  4157,    30,  1359, -2582,  1362, -2582,  1364, -2582,   147,
   -2582,  1373,  1377, -2582,  1365, -2582, -2582, -2582,   131, -2582,
    4711,  1046,  1514,   447,  1378,   516,  1294, -2582, -2582, -2582,
      48,    42,  1395,  1396,    52,   131,   656,   528,   617,  4868,
     277,  1534,   766,    97,   113,   274,     7, -2582,  1383,  1391,
    1411, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582,   131, -2582, -2582, -2582,   131,
     131,   131,   131, -2582, -2582,   131,  1273,   131, -2582,   131,
    1387,   131,  1414,  1273, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582,  1415,   597,   700, -2582, -2582, -2582,  1416, -2582,
   -2582, -2582, -2582,  1322, -2582,  1419,  1420,  1338,  1423, -2582,
    1426, -2582,  1427,  1346,  1430,   407,   778,   439,   432,   463,
    1424,   472, -2582, -2582,  1432,  1436,  1446, -2582, -2582,  1453,
   -2582, -2582, -2582, -2582,  1456, -2582, -2582,  1457, -2582, -2582,
    1458, -2582, -2582, -2582, -2582, -2582, -2582, -2582,   131,   131,
   -2582,   131,  1022,   131,   131, -2582,  4041, -2582,   915,  1454,
   -2582,  1047,  1460, -2582, -2582,   418,   131,   131, -2582,  1459,
   -2582, -2582,  1463,  1191,   131,  1462,   601, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582,  1465,  1473,   131,   131,   131,  1475,   277,  1477,  1478,
    1273,  4868, -2582, -2582, -2582, -2582, -2582,  1273, -2582, -2582,
     131,   131,   131,  4868,   131,  1387,   131, -2582,   131, -2582,
   -2582, -2582, -2582, -2582,  1479,  1480, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,   512,
   -2582,   131, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
    4868,   131,  1273,  1273,   418,   418,   418,  1273,  1387,   131,
    1273, -2582, -2582, -2582,   131, -2582,    17,  1315,  1481,  1484,
   -2582, -2582,  1273, -2582,  1331,  1335, -2582,  1491,  1492, -2582,
    1494,  1148,   131,  2568,   716,   775, -2582, -2582, -2582,   131,
     135,   983, -2582,  1235, -2582,  1534,  1241,   187,  1208,    94,
   -2582, -2582,   131, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582,   131,  1504, -2582, -2582, -2582, -2582,   418,
   -2582, -2582, -2582, -2582, -2582,  4795, -2582, -2582,  1507,  1509,
     131,  1513,  1516,  1528,   -37,   -37,   -51,  1536,  1537,  1539,
    1548,  1277,  1282,  1555,  1556,  1558,    95,    95,   -51,  1560,
    1561,   -51,  1565,  1569,  5210,  1579,  1581, -2582, -2582,  1582,
    1584,   663, -2582,  1562,  1592,  1593,  1594,   -37,   -51,  1596,
    1600, -2582,  1601, -2582, -2582,  1273,   899,  1299,  1354,   -28,
    1358,  1500,   703,   -13,  1604,   255,  1469,  1505,  1321,  1122,
    1571,   324,  1370,  1511,  1609,  1400,    67,    57,   478,   403,
    4868,  1534,  1585,   793,  1379,  1406,  1621,    18, -2582, -2582,
     427,  1642,  1635, -2582, -2582, -2582,  1643,  1433,   145,  1534,
    1437, -2582, -2582, -2582,   277,  1650,  1651,   131, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582,    22, -2582,  2057,
   -2582, -2582, -2582,   131, -2582,   131, -2582, -2582, -2582, -2582,
     131,   131,   131,   516,  4868, -2582,  1652,  1197, -2582, -2582,
     131, -2582, -2582,   131,  4868,   131, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
     277,   131, -2582,   131,   516,  1653,  1656, -2582, -2582,   131,
     131, -2582,   277, -2582, -2582, -2582,   153,  1662,  1664, -2582,
   -2582, -2582, -2582, -2582,   131,   131, -2582, -2582,  1387,   131,
     131, -2582, -2582, -2582, -2582,  1666,   131, -2582,   131,  1543,
   -2582,   131, -2582,   131,  1563, -2582,  1667, -2582,  1131,  1131,
     503,  1131,  1668, -2582,   519, -2582, -2582,  1669,  1670,   622,
    1674, -2582,  1675,  1677,  1679, -2582,   737,   750,  1680,  1684,
    1686, -2582, -2582,  1688,  1690,  1692, -2582,  1131,  1131,  1131,
     131, -2582, -2582, -2582,   131, -2582,   131,   174,  4868, -2582,
     131, -2582,  4711,  1273, -2582, -2582,  1693, -2582, -2582,  1694,
   -2582, -2582, -2582, -2582,  1672,  3809, -2582,   131,  1689,   131,
     131,   131,  1011, -2582,  1673,  1698,   131,   131,   -15,  1700,
     277,   277, -2582,  1273,   131,  1702,  1703,  1704,  1273,  4868,
   -2582,   131, -2582, -2582, -2582,   131,   131,   131,  1273,  4868,
     418, -2582, -2582, -2582, -2582,  1387,   131,  1705,   418,   131,
    1676,  1682,   589, -2582,  1706, -2582, -2582,   977,  3930,   131,
   -2582,   131,  1708,  1710,   131, -2582,  1716,   940,  4748,  1482,
     448,  1483,    83,  4868,   544, -2582,   415,  1583,   163,   582,
    1485,   175, -2582, -2582,   278,  1557,   578,  1608,   -85,  1534,
     826, -2582,  1728,  1489, -2582,   710, -2582, -2582, -2582, -2582,
    1534,  1522, -2582, -2582, -2582, -2582, -2582,   131, -2582,   131,
   -2582, -2582,   131,   131, -2582,   131, -2582,   131, -2582, -2582,
   -2582, -2582,  1535,   131, -2582,   131,    14, -2582, -2582,  1732,
    1734, -2582,   131,   -37,   -37,   -37, -2582, -2582, -2582, -2582,
   -2582, -2582,  1742,   -37,   -37,   -37,   517, -2582, -2582,    95,
     -37,   -37,   -37, -2582, -2582,   -37,   -37,  1743,   -37,   -37,
    1745,    95,   539, -2582,  1748,  1749,  1751, -2582,   666, -2582,
     709,   970, -2582,  1278, -2582,  1488,  1752,  1753,  1755,    95,
      95,   -51,  1758,  1762,   -51,  1763,  1766,  1768,   -37,   -37,
   -2582,  1769,   -37,   -37, -2582,  1770, -2582, -2582, -2582, -2582,
   -2582, -2582,   277, -2582, -2582, -2582,  4748,   787,   277,   131,
    1135,  1402,   -71, -2582, -2582, -2582,    -4, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,  1771,
     277,   131, -2582,   277,  1775,   131,  4868,   277,  1440,  1538,
    1540,   176,   177,  1542,   231,  1468,  1476,  1782,  1787,  1788,
     703,  1789,  1790,  1791,  1486,  1487,  1224,  1793,   277,   131,
    1206,  1448, -2582, -2582,   277,  4868, -2582, -2582,  4868,   131,
      23,  1794,   277,   131,  1273,   277, -2582,  1798,  4868,  4868,
     131, -2582, -2582, -2582,   277,   277,  4868, -2582, -2582, -2582,
   -2582, -2582, -2582,  4868,   131,   277, -2582, -2582, -2582,   131,
   -2582, -2582,  1799,   131,  1578,   160,   131,  1580,   131,   162,
     131, -2582,   131,  1587,  1588,   131,   131,   131,   131,   131,
     131,   131,   131,    13,   131,   131,  1599, -2582,   131,   131,
     131,   131, -2582,  4868,  1273,  1803,  1806,  1807,   131,   131,
    1273, -2582,   131,   131,   131,  4868,   516, -2582,   131,   131,
   -2582, -2582, -2582,  1808, -2582, -2582, -2582, -2582, -2582, -2582,
    1810,   131,   131, -2582,   131,   131, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582,  1816,  1817,  1821, -2582, -2582,
    1131,  1824,  1827,  1829, -2582,  1830,  1832,  1833,  1834,  1836,
   -2582,  1838, -2582, -2582, -2582,  1840,  1841,  1843, -2582,  1844,
    1845,  1847, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582,   131,   131,   131, -2582, -2582,   131,  1273, -2582,
   -2582, -2582,  3809,   131,  1273,   131,   131,   131, -2582,   131,
     131,  1848,   131,  1851,  1842,   131,   131, -2582, -2582,  1852,
    4868, -2582, -2582, -2582,   131, -2582, -2582, -2582, -2582,  1273,
   -2582,   841,   131,   841,   418,  1273,  4868,   131,   131,  1854,
   -2582, -2582, -2582, -2582, -2582,   131, -2582, -2582, -2582, -2582,
   -2582,  4868, -2582,  4868,   131,  1856, -2582, -2582,  1857,  1858,
    1859,  1860,  1861,  4868,  1273, -2582,  4868, -2582,  4868,  4868,
    4748,  4868,  1273, -2582,  4868, -2582, -2582,  4868, -2582, -2582,
    4748,  4868, -2582,  4868,  4868,  4748,  4868, -2582,  4868,  4868,
     131, -2582, -2582, -2582,  4868,  4868,  4868, -2582, -2582,  4868,
    4868, -2582, -2582, -2582, -2582,  4868,  4868, -2582, -2582, -2582,
   -2582, -2582,   131,   131, -2582, -2582,  1863,   131, -2582, -2582,
    1864,  1866, -2582,   131, -2582, -2582, -2582,   -37, -2582, -2582,
   -2582,  1867,  1868,  1869, -2582, -2582,   -51,  1871,  1872,  1873,
     -37, -2582, -2582, -2582, -2582, -2582,    95, -2582, -2582,  1875,
     -37,  1885,  1887,  1888,    95,    95,   -51,  1891,  1892,  1893,
    1298, -2582,  1313, -2582,  1408,  1575,  1894,  1895,  1897,    95,
      95,   -51,  1899,  1901,   -51,  1903,  1591,  1904,  1905,  1906,
      95,    95,   -51,  1908,  1909,   -51,  1910,  1637,  1911,  1914,
    1915,    95,    95,   -51,  1917,  1918,   -51,  1920,  1925,  1926,
    1927,    95,    95,   -51,  1929,  1930,  1932,    95, -2582, -2582,
   -2582, -2582, -2582,  1931, -2582, -2582,  1944,    95,  1945,  1960,
   -2582, -2582,   -37, -2582, -2582,  1963, -2582,  1273, -2582,  4868,
     131, -2582,   131,  4868,   131,  1964,  1299, -2582, -2582, -2582,
   -2582, -2582, -2582,  1965, -2582,  4868,   277,  1966,  4868,  1273,
   -2582,  1967,  1299,   131,   131,   131,   131,   131,   131,   131,
     131,   131,  1969,  1970, -2582, -2582, -2582,  1971, -2582, -2582,
   -2582,  1973,  1974, -2582, -2582, -2582, -2582,   131,  4868,   131,
    1976,  1299,   277,  1273,  1273, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582,   131,  1387, -2582, -2582,
    1273,  1273,   131, -2582, -2582,  1273,  1273, -2582, -2582, -2582,
   -2582,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,  1636, -2582,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,  2987,  1979,   131, -2582,   131,   131,
     131,  1982,  1983, -2582, -2582,  1273,   418, -2582,  1984,  1985,
   -2582, -2582,  1387,   131, -2582,  1987,  1273,  4868, -2582, -2582,
   -2582,  1988, -2582, -2582, -2582, -2582,  1131,  1131,  1131, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582,  1299,   131, -2582,   131, -2582,
     131,  1273,   131, -2582,  1387,   131, -2582,   131, -2582,  1800,
    1989,  1991, -2582,  1993,   131,   131,  1994,  1273,  4868, -2582,
   -2582,   131, -2582,   131, -2582,   418,   977,   131,  1995, -2582,
     131, -2582, -2582,  4748, -2582,  1996,  1997,  1998,  1999,  2000,
    1273, -2582,   977,   977,   977,  1273, -2582,   977,   418,   977,
     977,  1273, -2582,   977,   977,   977,  1273, -2582,   977,   977,
    1273,  4868,   977,  1273,   977,   977,  1273,   977,  1273, -2582,
   -2582,  2002,  4748,  2003, -2582,   131, -2582, -2582, -2582, -2582,
    2006, -2582, -2582, -2582, -2582,   -37,    95, -2582, -2582, -2582,
   -2582, -2582, -2582,  2007, -2582, -2582,    95,  2004,  2009,  2011,
      95,    95,   -51,  2008,  2016,  2018,  2020,  2022,  2023,    95,
      95,   -51,  2026,  2029,  2030,  2031,  2032,  2037,    95,    95,
     -51,  2039,  2042,  2043,    95,   -37,   -37,   -37,   -37,   -37,
    2045,   -37,   -37,  2046,    95,    95,   -37,   -37,   -37,   -37,
     -37,  2047,   -37,   -37,  2048,    95,    95, -2582, -2582, -2582,
   -2582, -2582,  2049, -2582, -2582,  2050,    95, -2582, -2582, -2582,
   -2582, -2582,  2051, -2582, -2582,    95, -2582,    95,  2052, -2582,
    2053,  2054, -2582,  4711, -2582,   977,  2055,  4868,   977,   131,
    4868,  2056, -2582,   977, -2582, -2582,   977, -2582,  4868,  2058,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131, -2582, -2582, -2582,  4868,   977,   131,  4868,  2059, -2582,
    1387,  1387,  4868,  1387,  1387,  4868,  4868,  1387,  1387,   131,
     131,   131,   131,   131,   131,  1299,   131,   131,   131,  1519,
    1617,  1649,  1707,  1709,  1711,  1714,  1636, -2582,  1718, -2582,
   -2582,  1299,   131,   131,   131,   131,  1299,   131,   131,   131,
     131,   131,   131,  1273,   131,  1683,  1299,   131,   131, -2582,
   -2582,   418,   277,  4868,  4868, -2582, -2582, -2582,   418,  1273,
    2060, -2582, -2582, -2582, -2582,   131, -2582, -2582,  1387,   131,
   -2582, -2582, -2582,  1082,  2061,  2070, -2582,   131,  2073,   841,
   -2582,   977, -2582, -2582, -2582, -2582,  2075, -2582, -2582,  1273,
    2074,  2077,  2079,  2080,  4868,  2082, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582,   418,   977, -2582,   418, -2582, -2582,   418, -2582,
     418,  2083,  1273,  2085, -2582,   131, -2582, -2582,   -37,    95,
   -2582,   -37,   -37,   -37,   -37,   -37,  2086,   -37,   -37,    95,
     -37,   -37,   -37,   -37,   -37,  2087,   -37,   -37,    95,   -37,
     -37,   -37,   -37,   -37,  2089,   -37,   -37,    95,   -37, -2582,
   -2582, -2582, -2582, -2582,    95, -2582, -2582,  2090,   -37,   -37,
   -2582, -2582, -2582, -2582, -2582,    95, -2582, -2582,  2091,   -37,
   -2582,    95,  2092, -2582,    95, -2582, -2582,    95, -2582, -2582,
    1273, -2582,  4868,   977, -2582,  2093,  1273,   131, -2582, -2582,
    1273,   131, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582,   131,   131,   977, -2582,  2094,  1273,   131,  1387, -2582,
     977,   131,  1387,   977,   977,  4868, -2582,   131,  2095,  2095,
     131,   131,  2095,  1299,  2095, -2582,  4868,   703,  2096,  2101,
    2103,  2106,  2108,  2110, -2582,   277,  1299,  2095,  2095,   131,
     131,  1299,   131,   131,   131,   131,   131, -2582,  1387,   131,
    2111, -2582, -2582,   131,  2095,   277,    28,  1273,  1273,   277,
     418,  2113, -2582, -2582, -2582,  2114,   131, -2582,  2118,  2120,
    1865,   131, -2582, -2582,  2121,     8,  4868, -2582,  2122,   -21,
    4868, -2582, -2582, -2582, -2582, -2582, -2582,  2124,     8,   131,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582,    95, -2582, -2582,
     -37, -2582, -2582, -2582, -2582, -2582,    95, -2582, -2582,   -37,
   -2582, -2582, -2582, -2582, -2582,    95, -2582, -2582,   -37, -2582,
     -37,    95, -2582, -2582,   -37,    95, -2582, -2582,    95, -2582,
   -2582,   131,   977, -2582,  4868,  4868,   131,  4868,   131, -2582,
   -2582, -2582,  4868,  4868,   131, -2582, -2582,  4868, -2582, -2582,
   -2582,   977,  2125, -2582, -2582, -2582,  1299,   131, -2582,  2126,
   -2582, -2582,  1273,  2129, -2582,  2127, -2582, -2582, -2582, -2582,
   -2582,  2131, -2582, -2582,  1299,   131,  2132, -2582, -2582,   131,
    4868, -2582, -2582, -2582, -2582, -2582, -2582, -2582,    28,  1744,
    1534, -2582, -2582, -2582,   277,  2134,  2136,  2137, -2582,  2109,
    2135,    76,     8, -2582, -2582, -2582,  2140,  4868, -2582, -2582,
   -2582, -2582, -2582,     8, -2582,  2142,   -37, -2582,   -37, -2582,
     -37, -2582, -2582,   -37, -2582,   -37, -2582,  4711, -2582,   977,
     977,   131,   977,  2143,   977,   977,   131,   977,   131, -2582,
   -2582, -2582, -2582,  2144, -2582,   131, -2582, -2582,  2145, -2582,
     131, -2582, -2582, -2582,  2148,   131, -2582, -2582, -2582,  1273,
   -2582, -2582, -2582,  1744, -2582,  1828,  1795,  1534, -2582, -2582,
   -2582,  2149,  2152,  2154, -2582, -2582, -2582, -2582,   879,   879,
   -2582, -2582,  1273, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
     977, -2582, -2582,  2155, -2582,  4748, -2582, -2582,  2156, -2582,
    1299, -2582, -2582,  1299,   131, -2582, -2582,   131, -2582,  1299,
     131, -2582,  4868, -2582,  1828, -2582,   277, -2582,  2158,  2161,
   -2582,   131,   131,   131,   131,   -21,  2162,  4748,  1273, -2582,
    4748, -2582, -2582,   131,  2166, -2582,   131,   977, -2582, -2582,
   -2582,  2168,  2169,   131,  2170,   131, -2582, -2582,  1273, -2582,
   -2582,  1273, -2582, -2582,  2167, -2582, -2582,  2172,  2173, -2582,
   -2582,  2174, -2582,  2175, -2582, -2582,  1299, -2582,  1299, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2582, -2582,    -3, -2582,   873, -2582, -1703,  -985,  1632, -2582,
     810,  -407,  1886,   -48,    59, -2582, -2582, -1654,  1765,  2005,
    -698, -1846,  -852,  1052,  1639, -2582, -1105, -2582,  -665, -1146,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582,  -515,  -472, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -1981, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -1459, -2582, -2582, -2582, -2582, -2582,
    -661, -2582, -2582, -2582, -2582, -2582, -2582,   217, -2582, -2582,
   -2582, -2582,   -75,  -668, -1233,  -446, -2582, -2582, -2582, -2582,
   -2582,  -524,  -519, -2582, -2582, -2581, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,  1441, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582, -2582,
   -2582
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1251
static const yytype_int16 yytable[] =
{
      67,  1897,   352,  1110,   897,  1084,  1087,  2041,   104,  2043,
     903,  2648,  1125,  1584,   868,  1589,    64,    65,  1964,    64,
      65,   373,  1416,  1493,   106,   296,   641,  1511, -1097,   292,
      64,    65,  1647,   682,  1748,   847,  1867,   316,    64,    65,
    2643,  1619,  1620,  1621,   624,   850,   346,    64,    65,   357,
    1916,    77,   364,    64,    65,   620,   370,   310,   788,   377,
      64,    65,   106,   380,   382,  1070,   412,   392,   791,  1079,
     399,   403,  1917,   407,   406,  1918,    64,    65,   410,    64,
      65,   341,  1073,   411,   857,  1724,  1919,    78,    64,    65,
     587,   294,   893,  1476,  1474,  1418,   424,   428,   433,   434,
     438,   440,  1114,  1870,  1700,   688,    64,    65,  1126,  1920,
    1440,  1331,  1363,   683,  1127,   540,  1350,   444,   989,   395,
     106,   258,  1346,   400,  2755,   238,  1367,  1921,  1868,  1370,
    1118,   865,    64,    65,    64,    65,   873,   216,    64,    65,
     904,   111,   858,   324,  1725,   109,  1401,   615,    64,    65,
    1347,    54,   453,  1260,   217,  1074,    76,   396,  1561,   421,
      79,   995,   106,    64,    65,    64,    65,  2649,   898,   866,
    1562,   621,   443,  2778, -1250,   485,   106,   360,  1625,   111,
     506,  1501,  1869,   259,  1710,   422,  1252,  1253,  1254,   990,
      64,    65,  1477,   325,  1332,  1871,  1715,  1885,  1887,   106,
    2315,   874,   326,   342,   684,   260,   157,   388,   541,   996,
     773,  1726,   173,   961,   962,  1419,  2327,  2328,  2329,   401,
    1351,  2331,   685,  2333,  2334,   764,   114,  2336,  2337,  2338,
    1441,   327,  2340,  2341,   115,   116,  2344,   111,  2346,  2347,
    1075,  2349,   507,   622,   515,    80,   520,   524,   314,  1872,
     713,  1336,  1890,  1749,   309,   552,  1364,  1324,   261,   648,
     649,   963,   767,  1648,   114,   106,  2650,  2715,  1080,  1261,
     585,  1494,   115,   116,   588,   695,   374,   697,   106,   111,
    1502,   106,  1443,   311,   572,   699,   702,   343,   705,   709,
     625,   711,   413,   111,   478,  2644,  1475,   642,    81,   402,
     479,   721,   689,  1141,   905,  1717,   312,   568,   117,   690,
     691,   731,   733,  1071,  1128,   361,   111,   899, -1097,   383,
     408,   119,   114,  1965,   389,    66,  1701,   297,   770,  1119,
     115,   116,  1512,   345,   776,   777,   779,   298,   781,   480,
     616,   997,   784,   785,   629,   692,   789,  1318,   315,  2421,
     707,  1081,  2424,   797,   799,  1478,   792,  2428,   778,   119,
    2429,   800,  1115,  1485,   114,   481,   803,   805,   390,   391,
     149,   356,   115,   116,   806,   150,   151,   807,   114,  2444,
    1922,  1505,   111,   369,  2716,   268,   115,   116,  1116,  1943,
     774,  1948,   328,   964,   965,   111,   817,   818,   111,  1326,
     573,   114,   248,   822,   823,   824,  1711,   825,   149,   115,
     116,   482,  1120,   150,   151,   555,   998,   119,  1716,  1886,
    1888,   832,  1543,   262,  1444,   833,   999,   754,   483,  2717,
     838,   839,   840,   841,   842,   843,  1866,   844,  1240,   428,
     848,   849,  1705,  1503,  1999,    64,    65,  1468,  1718,   428,
     851,  1053,   693,  1555,  1495,   483,   484,  1000,   630,   119,
     269,   913,   914,  1882,   808,  2512,   149,   114,   966,   742,
     263,   150,   151,   119,  1891,   115,   116,  1054,   967,   968,
     114,  1256,    99,   114,   972,   550,  1911,   755,   115,   116,
     854,   115,   116,   973,   974,   256,   119,  2522,  1445,   861,
     846,  1172,   100,   880,   881,   266,   574,  1719,   149,   969,
     723,    83,   384,   150,   151,    64,    65,  1210,   915,   109,
    1176,   889,   149,   282,   916,  1178,  1482,   150,   151,   744,
     809,  1761,  1762,   569,  1183,   631,   575,   109,   735,  1843,
     948,   975,  1846,  1446,   306,   149,   551,  2654,   308,   912,
     150,   151,  1666,  1781,  1782,   101,   570,   270,    55,   331,
    1670,  1173,   119,   385,   354,  1585,  1122,  1469,   760,   109,
     386,  1697,   271,   917,   359,   119,   855,  2573,   119,  1763,
    1060,  1591,   943,   986,  1706,  1179,   366,   492,   918,   894,
     632,  1177,  1060,  1674,  1184,   862,   493,  2581,   736,   810,
      56,  1783,  1005,   919,  2586,  1221,   368,  2589,  2590,   920,
    1055,   149,   367,  1222,   921,   633,   150,   151,    57,   960,
      64,    65,  1061,   724,   149,  1586,   932,   149,   372,   150,
     151,  1727,   150,   151,  1061,   272,    84,  1146,    64,    65,
     102,  1592,  1737,   761,   756,  1004,   109,   405,    58,   332,
     827,   828,  1483,  1089,  1086,  2511,  1496,  1090,  1707,    85,
     333,  2720,  1082,    86,  1056,  1095,    59,  1703,  1385,   922,
      60,  1795,  2723,   976,   977,   863,   415,  1386,  1387,   714,
    1796,  1797,   117,    61,  1597,  1211,   750,   334,   923,   811,
    1057,  1698,  1132,   924,   812,   925,  1133,  1134,  1135,  1136,
     117,   417,  1137,  1708,  1139,  1712,  1140,   428,  1142,   419,
    1147,  1764,  1765,   441,  1806,   715,    87,   454,  1174,   465,
    1060,   926,   927,  1807,  1808,  1388,  2668,   737,  1798,   928,
    1091,  1567,   117,  1784,  1785,   466,   103,  1734,  1203,   577,
    1151,   762,  1180,  1422,  1598,  2678,  1480,   929,   978,   476,
     578,  1185,  1092,  1481,   488,   738,  1062,    88,   979,   980,
      64,    65,  1061,   981,   335,    89,    90,   716,  1062,   490,
    1423,  1809,  1063,  1064,   318,  1194,  1195,   579,  1196,  1198,
    1200,  1201,  1587,  1307,  1063,  1064,  1766,  1704,   517,   982,
      64,    65,  1859,  1213,  1214,  1148,  1767,  1768,  1593,  1605,
    1218,  1219,   336,   930,  1424,  1312,  1111,   543,  1786,   117,
    1425,   544,  1609,  1152,   274,  1093,  1426,   363,  1787,  1788,
    1225,  1226,  1227,  2731,  2732,  1713,  2734,  1769,  2736,  2737,
     554,  2739,   545,   275,  1427,   276,   398,  1235,  1236,  1237,
    1167,  1239,   428,  1241,    62,  1242,  1721,  1308,  1667,  1789,
    2291,  2292,  2293,  1722,   580,  1428,   564,  1389,  1390,  1606,
    1799,  1800,   319,   565,  1065,  1066,  1245,  1149,  1247,    83,
    1429,   337,  1610,  1309,   320,   717,  1065,  1066,  1249,  1112,
    1735,  2201,    64,    65,  2766,   428,  1257,   159,   567,    64,
      65,  1259,   581,  2682,   239,  1987,  1062,  2209,  1153,   264,
    1168,  1599,  1430,  1810,  1811,   586,   299,   338,  1274,  1276,
     592,  2693,  1063,  1064,  2100,  1094,  1317,  1319,  1322,  1204,
    1205,  1083,   593,   339,  1327,  1487,  2228,   362,  1246,  1333,
     614,  2798,  1391,   595,  2113,  1801,  1376,  1169,  1313,  1736,
    1334,  1431,  1392,  1393,   394,  1802,  1803,  1394,   240,  2150,
    1804,   618,  2153,   277,  1310,   597,  1432,  1342,  1728,   321,
    2161,   582,   556,  2164,  1113,   627,  2044,   546,  1433,   601,
    1154,  2172,   322,  1395,  2175,  1817,  1805,   241,  1812,   635,
     619,  2182,  1406,   557,  1818,  1819,    64,    65,  1813,  1814,
      64,    65,  1314,  1815,    84,  1434,  1729,   636,   558,   598,
    1321,  1677,  1678,   623,  1065,  1066,  1311,  1435,  2603,  1436,
    1437,   376,   278,   583,    64,    65,  1607,    85,  1315,  1816,
     865,  2040,  1488,  1688,  1479,    64,  1197,    64,    65,  1611,
    2294,   639,  1820,   455,   456,   457,   458,   459,   460,   602,
    2772,   461,   462,   463,   464,  1504,  2775,   644,   242,  1438,
     547,  1207,  1208,  1407,  1510,  1730,   279,  1170,   866,   645,
      64,    65,   712,   243,   650,   280,  1006,  1007,  1008,   301,
    1538,  1641,  1539,   687,    87,   637,  1679,  1540,  1541,  1542,
     698,  1489,   603,   548,   719,    64,    65,  1548,   720,    93,
    1549,   722,  1551,   726,  1689,  1009,  1010,   435,   728,  1011,
     249,   559,  1012,  2812,   740,  2813,    94,   599,  1553,  1013,
    1554,   734,   379,  1014,  1731,    88,  1558,  1559,   758,   283,
     604,  1015,  1016,    89,    90,   244,  1408,  1409,   759,  1017,
    1018,  1565,  1566,   646,   647,   428,  1568,  1569,    64,    65,
    1863,  1410,  2505,  1571,  1457,  1572,   782,  1019,  1574,   796,
    1575,    64,  1273,  1020,  1628,    64,    65,  1021,  1022,   783,
     560,  1023,   786,   704,  1821,  1822,   245,  1690,  1691,   302,
     436,   794,  1458,  1578,  1579,  1459,   246,  1024,  1460,   801,
      64,    65,  1692,    95,  1411,    64,    65,  1622,   250,   804,
     802,  1623,   700,  1624,    64,    65,   815,  1627,  1025,   819,
     251,  1546,  1547,  1217,   561,  1461,   765,   768,   771,    64,
      65,  1908,  1633,   562,  1636,   816,  1638,  1639,  1640,  1642,
     820,  1026,   729,  1645,  1646,  1693,   821,    96,  1903,  1904,
     826,  1654,  2601,   829,  1462,   252,   831,  1463,  1660,  1823,
     835,   836,  1661,  1662,  1663,  1027,   425,   427,   303,  1824,
    1825,   852,   428,  1668,  1826,   437,  1671,   304,  2625,   853,
    2463,   284,   860,    97,   869,   701,  1683,   285,  1684,   286,
    2366,  1686,   526,   871,  1635,  1028,  2476,  1029,  2282,  2375,
    1827,  2481,   876,  1030,  1031,   253,   878,   527,  2384,   891,
     896,   907,  1828,  1829,   908,   730,   901,   910,   254,  1032,
    1033,   911,    64,    65,  1580,  1581,  1413,  1414,   445,   528,
    1034,  1035,  2117,  2118,  1739,   933,  1740,   934,   935,  1741,
    1742,  1675,  1743,   937,  1744,   939,   941,  2126,  2127,   529,
    1746,   944,  1747,  1582,   946,   950,  1036,  1695,  1037,  1753,
    1830,   955,    69,  1449,   957,   958,   530,  2314,    70,   531,
    1038,   970,  1039,  1464,  2595,   971,   959,  2598,  1040,  2600,
    2119,  2680,  2681,   983,   991,  2684,   993,  2686,   994,  1003,
    2332,  1450,  2612,  2613,  1451,  2128,   532,   533,  1001,  2691,
    2692,   446,  1002,  1059,  2696,  2697,  1465,    71,  2700,  2627,
      64,    65,  1041,  2701,  2702,  1068,   425,   426,   427,  1077,
    1129,  1078,   447,   448,  1452,    64,    65,  1865,  1130,  1413,
    1414,   449,  1466,    72,  1860,  1131,  1862,  1864,  1143,  1145,
    1156,  1157,  2135,  2136,  1158,  1159,  1160,  1161,  1182,   450,
     534,  1162,  1163,  1453,  1164,  1165,  1454,  1187,  1875,   451,
     535,  1188,  1878,    64,    65,  1881,  2741,  1413,  1414,  2742,
    1189,    64,    65,  1910,  2745,  1413,  1414,  1190,  1206,    73,
    2748,  1191,  1192,  1193,  1209,  2751,  1907,  1909,  1216,  1223,
    2137,  1215,  1831,  1832,  1220,  1858,  1915,  1224,  2599,  1228,
    1926,  1230,  1231,  1264,  1243,  1244,  1265,  1932,  1266,   956,
    1268,  2611,  2120,  2121,  1269,  1270,  2616,  1271,  1272,  1323,
    1329,  1937,   536,   537,    74,  1325,  1939,  2129,  2130,  1335,
    1941,  1339,  1944,  1945,  1340,  1947,  1949,  1950,  1343,  1953,
    2233,  1344,  1956,  1957,  1958,  1959,  1960,  1961,  1962,  1963,
    1966,  1968,  1969,  1345,   742,  1971,  1972,  1973,  1974,  2793,
    1353,  1354,  2796,  1098,  1355,  1980,  1981,  1833,  1123,  1983,
    1984,  1985,  1455,  1356,  1358,  1988,  1989,  1834,  1835,  1359,
    1360,  1361,  2807,  1362,  1368,  1369,  1396,  2122,  1992,  1993,
    1371,  1994,  1995,   538,  1372,  2285,  2814,  2123,  2124,  2815,
    2816,  1042,  2131,  2495,  1378,  1456,  1380,  1381,  1836,  1383,
    2499,   743,  2132,  2133,   744,  1043,  1397,  1417,  1398,  1399,
    1402,  1420,  2138,  2139,  1044,  1403,  1404,  1421,  2125,  1442,
    1447,  1467,  1448,  1470,  1472,  1045,  1473,  2300,  1471,  2015,
    2016,  2017,  1491,  2134,  2018,  1486,  1492,  1099,  1490,  2020,
    2023,   745,  2025,  2026,  2027,  1100,  2028,  2029,   219,  2031,
    1498,  1101,  2034,  2035,  2521,  1046,  1497,  2523,  1499,  1500,
    2524,  2038,  2525,  1506,  1508,  1509,  1573,  1545,  1556,  2042,
     220,  1557,  1102,   221,  2047,  2048,  1047,  1563,   746,  1564,
    1570,  1577,  2050,  1590,  1595,  1596,  1576,  2140,  1601,  1643,
    1602,  2053,  1603,  1604,  1632,  1613,  1103,  2141,  2142,  1614,
    1615,  2022,  2249,  1616,  1104,  1617,  1618,   222,  1630,  1631,
    1229,  1637,  1644,  2250,   223,  1650,  1655,  1656,  1657,  1669,
    -452,  1676,  1685,  1048,  1672,   224,   225,  2081,  2143,   747,
    1673,  1687,   226,   748,  1709,  1696,  1699,  1720,  1714,  1099,
    2251,  1723,  1732,  1105,  1738,  1745,  1751,  1100,  1752,  2089,
    2090,  1106,  1733,  1101,  2092,   227,  1757,  1776,   749,  1779,
    2095,   750,  1049,  1790,  1792,  2771,  1794,  1838,  1839,  2066,
    1840,   751,  1844,   228,  1102,  1837,  1845,  2252,  1847,  2072,
    1848,   467,  1849,  1852,  2077,  1855,  1873,   229,   230,  1050,
    1877,  1883,  1892,  1884,   231,  1889,  1894,  1107,  1103,   468,
    1893,  1895,  1896,  1898,  1899,  1900,  1104,  1905,  1924,  1108,
    1901,  1902,  2634,  1929,  1940,   232,   469,  1942,  1977,  1946,
    1978,  1979,  2303,  1990,  1991,  1109,  1954,  1955,  1051,   470,
    1052,  1996,  1997,  2448,  2449,  1998,  2451,  2452,  1970,  2000,
    2455,  2456,  2001,  2002,  2003,  1105,  2004,   471,  2005,  2006,
    2007,   472,  2008,  1106,   233,  2009,  2010,  2011,  2033,  2012,
    2013,  2014,  2144,  2030,   473,  2032,  2036,  2196,  2049,  2197,
    2054,  2199,  2055,  2056,  2057,  2058,  2059,  2091,  2155,  2093,
    2094,  2640,  2097,  2098,  2099,  2101,  2102,  2467,  2103,  2106,
    2210,  2211,  2212,  2213,  2214,  2215,  2216,  2217,  2218,  1107,
    2108,  2503,  2109,  2110,   474,  2114,  2115,   234,  2116,  2145,
    2146,  1108,  2147,  2151,  2224,  2152,  2226,   235,  2154,  2156,
    2157,  2158,  2162,  2163,  2166,  2165,  2167,  1109,   293,  2168,
    2169,  2173,  2174,  2232,   428,  2176,  2253,  1507,  2254,  2236,
    2177,  2178,  2179,  2183,  2184,  2187,   236,  2185,  2239,  2240,
    2241,  2242,  2243,  2244,  2245,  2246,  2247,  2248,  2188,  2190,
    2261,  2262,  2263,  2264,  2265,  2266,  2267,  2268,  2269,  2270,
    2271,  2272,  2706,  2275,  2191,  2276,  2277,  2278,  2193,  2200,
    2202,  2205,  2208,  2219,  2220,  2468,  2221,  2222,  2223,   428,
    2286,  2227,  2255,  1552,  2274,   160,  2279,  2280,   161,  2283,
    2284,  2287,  2290,  2490,  2304,  1560,  2305,  2306,  2309,   442,
    2317,  2321,  2322,  2323,  2324,  2325,  2351,  2469,  2354,  2361,
    2356,  2359,  2367,  2295,  2362,  2296,  2363,  2297,   162,  2299,
    2368,   428,  2301,  2369,  2302,  2370,   163,  2371,  2372,  1366,
    2376,  2307,  2308,  2377, -1113,  2378,  2379,  2380,  2312,  2706,
    2313,  2585,  2381,  2385,  2316,  2588,  2386,  2318,  2387,  2394,
    2397,  2405,  2408,  2411,  2412,  2414,  2417,  2418,  2419,  2422,
    2427,   834,  2431,  2447,  2501,  2470,  2507,  2471,   504,  2472,
     511,   514,  2473,   519,   523,  2508,  2475,  2510,  2515,  1513,
    2513,  2622,  2516,  2517,  1514,  2518,   164,  2520,  2526,  2528,
    2537,  2546,  2355,  2555,  2561,  2565,  2568,  2574,  2582,  2593,
    2786,  2604,   590,  1651,  1652,  2605,  1515,  1516,  2606,  1517,
    1518,  2607,  2320,  2608,  2609,  2713,  2624,  2635,  2253,  2636,
    1519,   606,   612,  2638,  2639,  2642,  2719,  2647,  2653,  2679,
    2685,  2689,  1520,  1521,  2688,  2690,  2695,   165,  2710,  2714,
    1522,  2711,  2712,  1523,  2721,  2420,  2724,  2735,  2743,   814,
    2746,  2353,  2749,  2756,  2758,   166,   167,  2759,  2760,  2767,
    2770,  1524,   168,  2780,   169,   696,  2781,  2787,  1525,  1526,
    2795,  2806,  1527,  2799,  2800,  2802,  2808,   706,  2809,  2810,
    2811,  2474,  2703,  2757,  2753,     0,  1166,     0,     0,     0,
       0,     0,   170,     0,     0,     0,  2425,   727,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2432,  2433,  2434,
    2435,  2436,  2437,  2438,  2439,  2440,  2441,  2442,     0,     0,
       0,     0,     0,  2445,     0,     0,     0,   428,   428,     0,
     428,   428,  1528,     0,   428,   428,  2457,  2458,  2459,  2460,
    2461,  2462,     0,  2464,  2465,  2466,  2762,  2764,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   171,  2477,
    2478,  2479,  2480,     0,  2482,  2483,  2484,  2485,  2486,  2487,
       0,  2489,     0,     0,  2493,  2494,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1856,     0,     0,  1529,     0,
       0,  1861,  2502,     0,  1530,   428,  2504,     0,   710,     0,
    2506,     0,     0,     0,  2509,     0,     0,   830,     0,     0,
       0,  1531,     0,  1874,     0,     0,  1876,     0,   837,     0,
    1880,  1532,     0,     0,     0,     0,     0,   845,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1906,     0,     0,     0,     0,     0,  1912,  1533,  1534,
       0,     0,  2529,     0,     0,  1925,     0,   795,  1928,     0,
       0,     0,     0,     0,     0,     0,     0,  1933,  1934,  1535,
       0,     0,     0,     0,     0,     0,     0,     0,  1938,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   882,   883,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   887,     0,
       0,  1770,     0,   890,  1536,     0,     0,     0,     0,     0,
       0,     0,   902,  1780,  2576,     0,     0,     0,  2578,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2579,  2580,
       0,  1841,  1842,     0,  2584,   428,     0,     0,  2587,   428,
       0,     0,     0,     0,  2592,     0,     0,  2596,  2597,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2614,  2615,     0,  2617,
    2618,  2619,  2620,  2621,     0,   428,  2623,     0,     0,     0,
    2626,     0,     0,     0,   951,   952,   953,   954,     0,     0,
       0,     0,     0,  2637,     0,     0,     0,     0,  2641,   879,
       0,     0,     0,     0,     0,     0,   884,     0,     0,   885,
       0,     0,     0,     0,   886,     0,  2655,     0,   888,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1097,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2667,     0,
       0,     0,     0,  2671,     0,  2673,     0,     0,     0,     0,
       0,  2676,     0,     0,     0,     0,     0,     0,  1277,  1278,
    1279,     0,     0,     0,  2683,   949,     0,     0,     0,     0,
       0,     0,     0,     0,  1349,     0,     0,     0,     0,   106,
       0,     0,  2694,     0,     0,     0,  2698,  1280,  1281,  2730,
       0,  1282,     0,     0,   107,     0,     0,     0,  1283,     0,
       0,  1284,     0,     0,     0,  1285,  1400,     0,  2718,     0,
       0,     0,     0,  1286,  1287,   108,     0,     0,     0,     0,
       0,  1288,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   109,     0,     0,     0,     0,     0,  2733,     0,
       0,     0,     0,  2738,     0,  2740,     0,     0,     0,  1289,
    1290,     0,  2744,  1291,     0,     0,     0,  2747,     0,     0,
       0,     0,  2750,     0,     0,     0,     0,     0,     0,  1292,
       0,     0,     0,     0,     0,     0,     0,     0,   110,     0,
       0,  1138,     0,     0,     0,  2761,  2763,  1233,  1144,     0,
    1293,     0,     0,     0,     0,     0,   111,     0,     0,  1238,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2773,     0,  1294,  2774,     0,     0,  2776,     0,  2204,
       0,     0,  1295,     0,     0,     0,     0,     0,  2782,  2783,
    2784,  2785,     0,     0,   112,     0,  1248,     0,     0,     0,
    2794,     0,     0,  2797,     0,     0,     0,     0,     0,     0,
    2801,     0,  2803,     0,     0,  2229,     0,     0,     0,     0,
       0,     0,     0,     0,  2769,     0,     0,  1296,     0,  1297,
       0,     0,     0,   113,     0,  1298,  1299,     0,     0,     0,
       0,   114,     0,     0,     0,     0,     0,     0,     0,   115,
     116,     0,  1300,     0,     0,   117,  2789,     0,  2105,  2792,
     118,     0,     0,  1301,     0,  1232,  2111,  2112,     0,     0,
       0,  1338,  1234,     0,     0,     0,     0,     0,     0,     0,
       0,  2148,  2149,     0,     0,     0,     0,     0,  1302,     0,
    1303,     0,  2159,  2160,     0,     0,     0,     0,     0,     0,
    1304,     0,     0,  2170,  2171,     0,     0,     0,     0,     0,
    1305,     0,     0,  2180,  2181,     0,     0,  1250,  1251,  2186,
       0,     0,  1255,     0,     0,  1258,     0,     0,     0,  2189,
       0,     0,     0,     0,     0,     0,   119,  1267,     0,     0,
       0,     0,     0,     0,  1306,     0,  1484,     0,     0,     0,
       0,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,     0,     0,     0,     0,   149,     0,     0,     0,     0,
     150,   151,     0,     0,     0,     0,     0,     0,     0,     0,
    1544,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1550,     0,  1754,  1755,  1756,     0,     0,     0,     0,     0,
      64,    65,  1758,  1759,  1760,     0,     0,   651,   652,  1771,
    1772,  1773,     0,     0,  1774,  1775,   107,  1777,  1778,     0,
    1405,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1850,  1851,     0,
       0,  1853,  1854,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   653,     0,     0,     0,     0,     0,
     654,     0,     0,     0,     0,     0,     0,   655,     0,   656,
       0,     0,     0,     0,   657,     0,     0,   658,     0,     0,
       0,     0,     0,   659,  1626,     0,     0,     0,     0,     0,
     110,     0,     0,     0,   660,     0,     0,     0,     0,     0,
     661,  1634,     0,     0,     0,     0,     0,     0,     0,   662,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   663,  1659,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1665,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   664,   112,     0,     0,     0,
       0,     0,     0,     0,  1682,  2496,     0,     0,  2358,     0,
     665,     0,     0,     0,  1694,     0,     0,     0,  2360,  1702,
     666,   667,  2364,  2365,     0,     0,     0,     0,     0,     0,
       0,  2373,  2374,     0,     0,     0,     0,     0,     0,     0,
    2382,  2383,   668,     0,     0,     0,  2388,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2398,  2399,  1629,     0,
       0,     0,   118,     0,     0,   669,     0,  2409,  2410,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2413,   670,
       0,   671,     0,     0,     0,     0,     0,  2415,  1653,  2416,
       0,     0,     0,  1658,     0,     0,   672,     0,     0,     0,
       0,   673,     0,  1664,     0,     0,     0,     0,   674,     0,
       0,     0,     0,     0,     0,   675,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   676,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   677,   678,     0,   679,
       0,     0,  1857,     0,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,  1879,     0,     0,     0,     0,     0,     0,   680,
       0,     0,     0,     0,     0,     0,     0,     0,  2610,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1913,     0,     0,  1914,     0,     0,     0,  2628,     0,
       0,     0,  2633,     0,  1930,  1931,     0,     0,     0,     0,
       0,     0,  1935,     0,     0,     0,     0,     0,     0,  1936,
       0,     0,     0,     0,     0,     0,  2096,    64,    65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2104,
       0,  2531,     0,   107,     0,     0,     0,     0,     0,  2107,
       0,  2540,     0,     0,     0,     0,     0,     0,     0,  1975,
    2549,     0,     0,   288,     0,     0,     0,     0,     0,  2558,
       0,  1986,     0,     0,     0,     0,  2560,     0,     0,     0,
       0,   109,     0,     0,     0,     0,     0,  2564,     0,     0,
       0,     0,     0,  2567,     0,     0,  2569,     0,     0,  2570,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1927,
       0,  2192,     0,     0,     0,     0,     0,   110,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2709,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2021,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2037,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1976,
       0,     0,  2046,   112,     0,  1982,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2051,     0,  2052,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2060,
       0,     0,  2062,     0,  2063,  2064,  2065,  2067,     0,  2656,
    2069,     0,   289,  2070,     0,     0,  2071,  2073,  2658,  2074,
    2075,  2076,  2078,     0,  2079,  2080,     0,  2660,     0,     0,
    2082,  2083,  2084,  2663,   117,  2085,  2086,  2665,     0,   118,
    2666,  2087,  2088,     0,     0,     0,     0,     0,     0,  2779,
     290,     0,     0,  2019,     0,     0,     0,     0,     0,  2024,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2039,     0,     0,     0,     0,     0,
    2045,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   291,     0,     0,     0,     0,     0,     0,  2061,
       0,     0,     0,     0,     0,     0,     0,  2068,     0,     0,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
       0,     0,     0,     0,  2357,  2195,     0,     0,     0,  2198,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2203,     0,     0,  2206,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2389,  2390,  2391,  2392,  2393,     0,
    2395,  2396,     0,     0,  2225,  2400,  2401,  2402,  2403,  2404,
       0,  2406,  2407,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    65,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   107,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2273,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2194,     0,     0,     0,   109,     0,     0,     0,
       0,     0,     0,  2289,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2207,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   522,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   110,     0,   107,     0,     0,     0,  2230,  2231,
       0,     0,     0,     0,  2311,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1681,  2234,  2235,     0,     0,  2319,
    2237,  2238,     0,     0,     0,     0,     0,     0,     0,   107,
       0,     0,   109,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2343,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2352,     0,
    2281,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2288,     0,     0,     0,     0,     0,  2530,   110,     0,
    2532,  2533,  2534,  2535,  2536,     0,  2538,  2539,     0,  2541,
    2542,  2543,  2544,  2545,     0,  2547,  2548,     0,  2550,  2551,
    2552,  2553,  2554,     0,  2556,  2557,  2298,  2559,     0,   117,
       0,     0,     0,   110,   118,     0,     0,  2562,  2563,     0,
       0,     0,  2310,     0,     0,     0,     0,  1202,  2566,     0,
       0,     0,     0,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2326,     0,     0,     0,     0,
    2330,     0,     0,     0,     0,     0,  2335,     0,     0,     0,
       0,  2339,     0,  2423,     0,  2342,  2426,     0,  2345,   112,
       0,  2348,     0,  2350,  2430,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2443,     0,     0,  2446,     0,   117,     0,     0,  2450,     0,
     118,  2453,  2454,     0,     0,     0,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2497,
    2498,     0,     0,     0,     0,     0,     0,     0,     0,  2657,
       0,     0,     0,     0,     0,     0,     0,     0,  2659,     0,
       0,     0,     0,     0,     0,     0,     0,  2661,     0,  2662,
       0,     0,     0,  2664,     0,     0,     0,     0,     0,     0,
    2519,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,     0,     0,     0,     0,     0,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   348,     0,     0,  2488,     0,
       0,     0,   349,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2500,  2725,     0,  2726,     0,  2727,
       0,     0,  2728,     0,  2729,     0,     0,     0,  2572,     0,
       0,     0,     0,     0,     0,     0,   984,     0,     0,     0,
       0,   985,     0,     0,  2514,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2591,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2602,     0,     0,     0,     0,  2527,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2646,     0,     0,     0,  2652,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2571,     0,     0,     0,     0,
       0,  2575,     0,     0,     0,  2577,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2583,     0,     0,     0,     0,     0,     0,     0,     0,
    2669,  2670,     0,  2672,     0,     0,     0,     0,  2674,  2675,
       0,     0,     0,  2677,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,  2631,  2632,     0,   350,  2699,     0,   351,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   607,   107,     0,     0,     0,     0,
       0,     0,     0,  2722,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   107,     0,     0,
       0,     0,     0,     0,     0,   608,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   495,   496,     0,  2687,   497,   110,
       0,     0,     0,     0,     0,     0,   107,     0,     0,     0,
       0,  2768,     0,   609,     0,     0,     0,     0,     0,     0,
       0,   498,     0,     0,     0,     0,     0,     0,  2777,     0,
       0,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2788,   109,     0,  2791,     0,     0,     0,
       0,     0,     0,     0,     0,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     107,     0,   610,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   112,     0,     0,
     110,     0,     0,     0,  2752,     0,     0,     0,     0,   499,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   509,     0,     0,     0,     0,     0,  2765,   500,     0,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     501,     0,     0,     0,     0,     0,   112,     0,     0,     0,
       0,     0,     0,   118,   110,     0,     0,   107,     0,     0,
       0,     0,     0,  2790,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2804,     0,     0,  2805,     0,     0,     0,
     611,     0,     0,     0,     0,   109,     0,     0,     0,     0,
       0,     0,     0,     0,   107,     0,   502,   117,     0,     0,
     112,     0,   118,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   110,  1337,     0,     0,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   513,   503,     0,   118,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   110,     0,
       0,     0,     0,     0,     0,     0,     0,   112,     0,     0,
       0,     0,     0,     0,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   112,   510,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   117,     0,
       0,   110,     0,   118,     0,     0,     0,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     118,     0,     0,     0,     0,     0,     0,   112,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     1,     0,     0,     2,     0,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     0,     0,     0,     0,     5,     6,     0,
       7,     8,     9,     0,     0,     0,     0,     0,     0,   175,
      10,     0,   176,     0,     0,   177,     0,    11,     0,    12,
      13,     0,     0,     0,     0,     0,     0,     0,     0,    14,
      15,     0,     0,     0,   178,     0,   179,   180,   181,     0,
       0,     0,     0,     0,     0,     0,   182,     0,   183,     0,
       0,     0,     0,   184,     0,   185,   186,   187,     0,    16,
       0,     0,     0,   188,     0,   189,     0,     0,     0,     0,
       0,     0,    17,     0,     0,     0,    18,     0,     0,    19,
       0,     0,     0,    20,    21,     0,     0,     0,     0,     0,
      22,     0,     0,     0,   190,     0,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,     0,   191,    25,    26,    27,     0,     0,    28,    29,
     192,     0,   193,   194,     0,     0,   195,     0,     0,     0,
     196,     0,   197,    30,  1374,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    32,    33,     0,   198,   199,     0,     0,     0,   200,
       0,     0,     0,     0,    34,     0,    35,     0,     0,   201,
       0,     0,     0,    36,     0,     0,     0,    37,     0,     0,
       0,    38,     0,    39,     0,    40,   202,   203,     0,     0,
      41,     0,     0,     0,   204,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,     0,     0,     0,     0,     0,
      43,     0,     0,     0,     0,     0,     0,     0,     0,   205,
       0,   206,     0,     0,     0,    44,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,     0,    47,
       0,     0,     0,     0,     0,    48,   207,     0,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   208,   209,     0,     0,     0,     0,     0,     0,     0,
     210,     0,     0,     0,     0,     0,     0,   211,     0,    51,
       0,     0,     0,   212,     0,   213,    52,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,  1375,     0,     0,     0,     0,
       0,     0,   214
};

static const yytype_int16 yycheck[] =
{
       3,  1460,    50,   671,     4,   666,   667,  1661,    11,  1663,
       4,    32,     5,  1159,   486,  1161,     3,     4,     5,     3,
       4,    32,  1007,     5,     4,     5,     5,     5,     0,    32,
       3,     4,    47,    92,    20,   442,   107,    40,     3,     4,
      32,  1187,  1188,  1189,     5,   452,    49,     3,     4,    52,
      27,     4,    55,     3,     4,     6,    59,    62,     4,    62,
       3,     4,     4,    66,    67,    17,     5,    70,     4,    17,
      73,    74,    49,     4,    77,    52,     3,     4,    81,     3,
       4,     4,    40,    86,   197,   170,    63,    40,     3,     4,
      16,    32,     4,    36,    27,   123,    99,   100,   101,   102,
     103,   104,     5,   107,    21,     4,     3,     4,   101,    86,
     123,    17,    17,   172,   107,   217,   167,   120,    88,   141,
       4,     5,   159,    79,  2705,    67,   978,   104,   199,   981,
      17,   141,     3,     4,     3,     4,   197,    84,     3,     4,
     134,   121,   255,    51,   229,    57,   998,     4,     3,     4,
     187,    67,   155,   136,   101,   113,   290,   179,     5,     5,
     113,    14,     4,     3,     4,     3,     4,   188,   168,   179,
      17,   122,   113,  2754,     0,   178,     4,     5,     4,   121,
     183,    36,   253,    67,    21,    31,   884,   885,   886,   159,
       3,     4,   135,   101,   100,   199,    21,    21,    21,     4,
    2046,   262,   110,   126,   263,    89,    33,   191,   310,    62,
      13,   296,   147,    14,    15,   243,  2062,  2063,  2064,   175,
     271,  2067,   281,  2069,  2070,    67,   206,  2073,  2074,  2075,
     243,   139,  2078,  2079,   214,   215,  2082,   121,  2084,  2085,
     198,  2087,   183,   246,   185,   198,   187,   188,   198,   253,
     298,   949,    21,   239,    37,   196,   161,   925,   142,   262,
     263,    62,    67,   278,   206,     4,   287,   191,   216,   252,
     211,   253,   214,   215,   200,   278,   287,   280,     4,   121,
     135,     4,    27,   288,    21,   288,   289,   210,   291,   292,
     251,   294,   231,   121,   191,   287,   229,   276,   251,   255,
     197,   304,   201,   710,   298,    27,   311,    62,   220,   208,
     209,   314,   315,   265,   307,   143,   121,   317,   290,     4,
     251,   301,   206,   310,   308,   298,   243,   307,    67,   216,
     214,   215,   310,   298,   337,   338,   339,   317,   341,   236,
     197,   194,   345,   346,     5,   244,   292,   212,   298,  2195,
     291,   299,  2198,   356,   357,   298,   292,  2203,   229,   301,
    2206,   364,   265,  1031,   206,   262,   369,   370,   352,   353,
     350,   298,   214,   215,   377,   355,   356,   380,   206,  2225,
     357,  1049,   121,   298,   308,    58,   214,   215,   291,   229,
     193,   229,   300,   194,   195,   121,   399,   400,   121,   212,
     137,   206,    16,   406,   407,   408,   243,   410,   350,   214,
     215,   308,   299,   355,   356,   198,   269,   301,   243,   243,
     243,   424,  1083,   307,   169,   428,   279,    62,   352,   353,
     433,   434,   435,   436,   437,   438,  1421,   440,   845,   442,
     443,   444,    27,   298,  1590,     3,     4,   123,   170,   452,
     453,     4,   351,  1114,    27,   352,   353,   310,   119,   301,
     133,     4,     5,  1448,    30,  2311,   350,   206,   269,    62,
     354,   355,   356,   301,   243,   214,   215,    30,   279,   280,
     206,   888,    40,   206,     5,     5,  1471,   122,   214,   215,
     105,   214,   215,    14,    15,   235,   301,  2343,   243,    79,
     441,    62,    60,   506,   507,     5,   243,   229,   350,   310,
     152,    28,   197,   355,   356,     3,     4,    99,    61,    57,
      88,   524,   350,    67,    67,    62,   123,   355,   356,   122,
      96,    14,    15,   288,    62,   196,   273,    57,    62,  1391,
     588,    62,  1394,   288,     4,   350,    66,  2528,    89,   552,
     355,   356,  1250,    14,    15,   113,   311,   230,    12,     4,
    1258,   122,   301,   248,   235,    62,   292,   243,    34,    57,
     255,   123,   245,   116,     0,   301,   191,  2423,   301,    62,
      64,    62,   585,   631,   169,   122,   275,   171,   131,   530,
     251,   159,    64,     4,   122,   175,   180,  2443,   122,   165,
      54,    62,   650,   146,  2450,     4,     4,  2453,  2454,   152,
     163,   350,     5,    12,   157,   276,   355,   356,    72,   622,
       3,     4,   106,   265,   350,   122,   567,   350,     5,   355,
     356,  1299,   355,   356,   106,   308,   153,    40,     3,     4,
     198,   122,  1310,   109,   279,   648,    57,     5,   102,    37,
       4,     5,   249,    36,   126,  2309,   229,    40,   243,   176,
      48,  2642,   665,   180,   217,   668,   120,   123,     5,   212,
     124,     5,  2653,   194,   195,   255,    31,    14,    15,    55,
      14,    15,   220,   137,    62,   267,   279,    75,   231,   255,
     243,   243,   695,   236,   260,   238,   699,   700,   701,   702,
     220,     5,   705,   288,   707,   123,   709,   710,   711,     5,
     113,   194,   195,   198,     5,    91,   233,     4,   279,   119,
      64,   264,   265,    14,    15,    62,  2572,   251,    62,   272,
     113,  1138,   220,   194,   195,    67,   294,    27,   786,    37,
      40,   207,   279,    40,   122,  2591,   268,   290,   269,   120,
      48,   279,   135,   275,   290,   279,   240,   274,   279,   280,
       3,     4,   106,   284,   152,   282,   283,   143,   240,   171,
      67,    62,   256,   257,    26,   778,   779,    75,   781,   782,
     783,   784,   279,    67,   256,   257,   269,   243,    33,   310,
       3,     4,     5,   796,   797,   198,   279,   280,   279,    62,
     803,   804,   190,   346,   101,    30,    40,    67,   269,   220,
     107,     5,    62,   113,    46,   198,   113,    60,   279,   280,
     823,   824,   825,  2669,  2670,   243,  2672,   310,  2674,  2675,
      16,  2677,    90,    65,   131,    67,   201,   840,   841,   842,
      62,   844,   845,   846,   298,   848,   268,   131,  1255,   310,
    1996,  1997,  1998,   275,   152,   152,    67,   194,   195,   122,
     194,   195,   114,   236,   348,   349,   869,   270,   871,    28,
     167,   259,   122,   157,   126,   251,   348,   349,   881,   113,
     170,  1866,     3,     4,  2730,   888,   889,    14,   289,     3,
       4,   894,   190,  2596,    21,  1556,   240,  1882,   198,    26,
     122,   279,   199,   194,   195,    90,    33,   295,   911,   912,
      67,  2614,   256,   257,  1766,   298,   919,   920,   921,     4,
       5,   265,    73,   311,   927,   132,  1911,    54,   869,   932,
       5,  2777,   269,    31,  1786,   269,   984,   159,   163,   229,
     943,   238,   279,   280,    71,   279,   280,   284,    89,  1801,
     284,     5,  1804,   185,   238,    44,   253,   960,   132,   211,
    1812,   259,    46,  1815,   198,     5,  1664,     6,   265,   152,
     270,  1823,   224,   310,  1826,     5,   310,   118,   269,    95,
       4,  1833,    83,    67,    14,    15,     3,     4,   279,   280,
       3,     4,   217,   284,   153,   292,   170,   113,    82,    88,
      17,    24,    25,     4,   348,   349,   290,   304,  2467,   306,
     307,   125,   244,   311,     3,     4,   279,   176,   243,   310,
     141,   180,   229,    83,  1027,     3,     4,     3,     4,   279,
    2015,     5,    62,   160,   161,   162,   163,   164,   165,   222,
    2743,   168,   169,   170,   171,  1048,  2749,     4,   189,   346,
      89,     4,     5,   154,  1057,   229,   288,   279,   179,     5,
       3,     4,     4,   204,     5,   297,    20,    21,    22,    71,
    1073,    60,  1075,     5,   233,   191,    99,  1080,  1081,  1082,
       5,   288,   265,   122,     4,     3,     4,  1090,     4,    84,
    1093,     4,  1095,     5,   154,    49,    50,    40,     4,    53,
      26,   185,    56,  2806,   122,  2808,   101,   196,  1111,    63,
    1113,    99,   125,    67,   288,   274,  1119,  1120,     5,   207,
     303,    75,    76,   282,   283,   266,   227,   228,     4,    83,
      84,  1134,  1135,   260,   261,  1138,  1139,  1140,     3,     4,
       5,   242,    60,  1146,    22,  1148,   276,   101,  1151,   125,
    1153,     3,     4,   107,  1202,     3,     4,   111,   112,     4,
     244,   115,     4,   290,   194,   195,   307,   227,   228,   171,
     113,     4,    50,    42,    43,    53,   317,   131,    56,     4,
       3,     4,   242,   178,   285,     3,     4,  1190,   114,    12,
       5,  1194,    40,  1196,     3,     4,     4,  1200,   152,     4,
     126,     4,     5,    12,   288,    83,   333,   334,   335,     3,
       4,     5,  1215,   297,  1217,   201,  1219,  1220,  1221,  1222,
       4,   175,    40,  1226,  1227,   285,     4,   222,     4,     5,
       4,  1234,  2465,     5,   112,   161,     5,   115,  1241,   269,
     430,   431,  1245,  1246,  1247,   199,     9,    11,   250,   279,
     280,     5,  1255,  1256,   284,   198,  1259,   259,  2491,   275,
    2245,   349,   171,   258,     4,   113,  1269,   355,  1271,   357,
    2122,  1274,    45,     4,  1215,   229,  2261,   231,  1976,  2131,
     310,  2266,   180,   237,   238,   211,   171,    60,  2140,     4,
     200,     5,    14,    15,     5,   113,   200,     4,   224,   253,
     254,   200,     3,     4,   173,   174,     7,     8,    35,    82,
     264,   265,    14,    15,  1317,   192,  1319,   192,    67,  1322,
    1323,  1262,  1325,    67,  1327,    67,   229,    14,    15,   102,
    1333,     5,  1335,   202,   230,     5,   290,  1278,   292,  1342,
      62,     4,   191,    22,     4,     4,   119,  2045,   197,   122,
     304,    88,   306,   231,  2459,     5,   200,  2462,   312,  2464,
      62,  2594,  2595,    88,     5,  2598,     4,  2600,     4,     4,
    2068,    50,  2477,  2478,    53,    62,   149,   150,     5,  2612,
    2613,   108,     5,     5,  2617,  2618,   264,   236,  2621,  2494,
       3,     4,   346,  2626,  2627,   101,     9,    10,    11,     4,
      17,     5,   129,   130,    83,     3,     4,     5,    17,     7,
       8,   138,   290,   262,  1417,     4,  1419,  1420,     4,     4,
       4,    99,    14,    15,     5,     5,    88,     4,     4,   156,
     203,     5,     5,   112,    88,     5,   115,     5,  1441,   166,
     213,     5,  1445,     3,     4,     5,  2679,     7,     8,  2682,
       4,     3,     4,     5,  2687,     7,     8,     4,     4,   308,
    2693,     5,     5,     5,     4,  2698,  1469,  1470,     5,     4,
      62,    12,   194,   195,    12,  1416,  1479,     4,  2463,     4,
    1483,     4,     4,   168,     5,     5,     5,  1490,     4,   616,
     159,  2476,   194,   195,   159,     4,  2481,     5,     4,   264,
     292,  1504,   275,   276,   353,   264,  1509,   194,   195,     5,
    1513,     4,  1515,  1516,     5,  1518,  1519,  1520,     5,  1522,
    1927,     5,  1525,  1526,  1527,  1528,  1529,  1530,  1531,  1532,
    1533,  1534,  1535,     5,    62,  1538,  1539,  1540,  1541,  2772,
       4,     4,  2775,   670,     5,  1548,  1549,   269,   675,  1552,
    1553,  1554,   231,     5,   277,  1558,  1559,   279,   280,   277,
       5,     5,  2795,     5,     4,     4,     4,   269,  1571,  1572,
       5,  1574,  1575,   346,     5,  1982,  2809,   279,   280,  2812,
    2813,    67,   269,  2281,     5,   264,     5,     5,   310,     5,
    2288,   119,   279,   280,   122,    81,     4,   243,     5,     5,
       4,   243,   194,   195,    90,     5,     5,   107,   310,     5,
     141,    40,   107,   243,     5,   101,   216,  2024,   107,  1622,
    1623,  1624,   216,   310,  1627,    40,     5,    93,   249,  1632,
    1633,   159,  1635,  1636,  1637,   101,  1639,  1640,    19,  1642,
       5,   107,  1645,  1646,  2342,   131,     4,  2345,     5,   216,
    2348,  1654,  2350,   216,     4,     4,   113,     5,     5,  1662,
      41,     5,   128,    44,  1667,  1668,   152,     5,   196,     5,
       4,     4,  1675,     5,     5,     5,   113,   269,     4,     6,
       5,  1684,     5,     4,    12,     5,   152,   279,   280,     5,
       4,  1632,    56,     5,   160,     5,     4,    78,     5,     5,
     827,    12,     4,    67,    85,     5,     4,     4,     4,     4,
       0,     5,     4,   199,    38,    96,    97,  1720,   310,   247,
      38,     5,   103,   251,   141,   243,   243,   170,   243,    93,
      94,   123,     4,   199,   212,   200,     4,   101,     4,  1742,
    1743,   207,   253,   107,  1747,   126,     4,     4,   276,     4,
    1753,   279,   238,     5,     5,  2740,     5,     5,     5,  1700,
       5,   289,     4,   144,   128,   277,     4,   131,     5,  1710,
       4,    54,     4,     4,  1715,     5,     5,   158,   159,   265,
       5,   243,   314,   243,   165,   243,     4,   253,   152,    72,
     314,     4,     4,     4,     4,     4,   160,     4,     4,   265,
     314,   314,  2500,     5,     5,   186,    89,   229,     5,   229,
       4,     4,    12,     5,     4,   281,   229,   229,   304,   102,
     306,     5,     5,  2230,  2231,     4,  2233,  2234,   229,     5,
    2237,  2238,     5,     4,     4,   199,     4,   120,     5,     5,
       4,   124,     4,   207,   225,     5,     5,     4,     6,     5,
       5,     4,   277,     5,   137,     4,     4,  1860,     4,  1862,
       4,  1864,     5,     5,     5,     5,     5,     4,   277,     5,
       4,     6,     5,     5,     5,     4,     4,   358,     5,     4,
    1883,  1884,  1885,  1886,  1887,  1888,  1889,  1890,  1891,   253,
       5,  2298,     5,     5,   177,     4,     4,   278,     5,     5,
       5,   265,     5,     4,  1907,     4,  1909,   288,     5,     5,
       5,     5,     4,     4,   277,     5,     5,   281,    32,     5,
       5,     4,     4,  1926,  1927,     5,   290,  1054,   292,  1932,
       5,     5,     5,     4,     4,     4,   317,     5,  1941,  1942,
    1943,  1944,  1945,  1946,  1947,  1948,  1949,  1950,     4,     4,
    1953,  1954,  1955,  1956,  1957,  1958,  1959,  1960,  1961,  1962,
    1963,  1964,  2630,  1966,     4,  1968,  1969,  1970,     5,     5,
       5,     5,     5,     4,     4,   358,     5,     4,     4,  1982,
    1983,     5,   346,  1110,     5,    44,     4,     4,    47,     5,
       5,     4,     4,   310,     5,  1122,     5,     4,     4,   113,
       5,     5,     5,     5,     5,     5,     4,   358,     5,     5,
       4,     4,     4,  2016,     5,  2018,     5,  2020,    77,  2022,
       4,  2024,  2025,     5,  2027,     5,    85,     5,     5,   977,
       4,  2034,  2035,     4,   290,     5,     5,     5,  2041,  2707,
    2043,  2448,     5,     4,  2047,  2452,     4,  2050,     5,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,   429,     4,     4,     4,   358,     5,   358,   182,   358,
     184,   185,   358,   187,   188,     5,   358,     4,     4,    22,
       5,  2488,     5,     4,    27,     5,   145,     5,     5,     4,
       4,     4,  2095,     4,     4,     4,     4,     4,     4,     4,
    2765,     5,   216,  1230,  1231,     4,    49,    50,     5,    52,
      53,     5,  2053,     5,     4,     6,     5,     4,   290,     5,
      63,   235,   236,     5,     4,     4,  2641,     5,     4,     4,
       4,     4,    75,    76,     5,     4,     4,   196,     4,     4,
      83,     5,     5,    86,     4,  2193,     4,     4,     4,   384,
       5,  2092,     4,   358,     5,   214,   215,     5,     4,     4,
       4,   104,   221,     5,   223,   279,     5,     5,   111,   112,
       4,     4,   115,     5,     5,     5,     4,   291,     5,     5,
       5,  2256,  2628,  2707,  2703,    -1,   745,    -1,    -1,    -1,
      -1,    -1,   251,    -1,    -1,    -1,  2199,   311,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2210,  2211,  2212,
    2213,  2214,  2215,  2216,  2217,  2218,  2219,  2220,    -1,    -1,
      -1,    -1,    -1,  2226,    -1,    -1,    -1,  2230,  2231,    -1,
    2233,  2234,   175,    -1,  2237,  2238,  2239,  2240,  2241,  2242,
    2243,  2244,    -1,  2246,  2247,  2248,  2718,  2719,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   317,  2262,
    2263,  2264,  2265,    -1,  2267,  2268,  2269,  2270,  2271,  2272,
      -1,  2274,    -1,    -1,  2277,  2278,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1412,    -1,    -1,   231,    -1,
      -1,  1418,  2295,    -1,   237,  2298,  2299,    -1,   293,    -1,
    2303,    -1,    -1,    -1,  2307,    -1,    -1,   421,    -1,    -1,
      -1,   254,    -1,  1440,    -1,    -1,  1443,    -1,   432,    -1,
    1447,   264,    -1,    -1,    -1,    -1,    -1,   441,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1468,    -1,    -1,    -1,    -1,    -1,  1474,   291,   292,
      -1,    -1,  2355,    -1,    -1,  1482,    -1,   352,  1485,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1494,  1495,   312,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1505,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   509,   510,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   522,    -1,
      -1,  1359,    -1,   527,   357,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   536,  1371,  2427,    -1,    -1,    -1,  2431,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2441,  2442,
      -1,  1389,  1390,    -1,  2447,  2448,    -1,    -1,  2451,  2452,
      -1,    -1,    -1,    -1,  2457,    -1,    -1,  2460,  2461,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2479,  2480,    -1,  2482,
    2483,  2484,  2485,  2486,    -1,  2488,  2489,    -1,    -1,    -1,
    2493,    -1,    -1,    -1,   608,   609,   610,   611,    -1,    -1,
      -1,    -1,    -1,  2506,    -1,    -1,    -1,    -1,  2511,   504,
      -1,    -1,    -1,    -1,    -1,    -1,   511,    -1,    -1,   514,
      -1,    -1,    -1,    -1,   519,    -1,  2529,    -1,   523,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   669,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2571,    -1,
      -1,    -1,    -1,  2576,    -1,  2578,    -1,    -1,    -1,    -1,
      -1,  2584,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,  2597,   590,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   965,    -1,    -1,    -1,    -1,     4,
      -1,    -1,  2615,    -1,    -1,    -1,  2619,    49,    50,  2667,
      -1,    53,    -1,    -1,    19,    -1,    -1,    -1,    60,    -1,
      -1,    63,    -1,    -1,    -1,    67,   997,    -1,  2641,    -1,
      -1,    -1,    -1,    75,    76,    40,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,  2671,    -1,
      -1,    -1,    -1,  2676,    -1,  2678,    -1,    -1,    -1,   111,
     112,    -1,  2685,   115,    -1,    -1,    -1,  2690,    -1,    -1,
      -1,    -1,  2695,    -1,    -1,    -1,    -1,    -1,    -1,   131,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      -1,   706,    -1,    -1,    -1,  2718,  2719,   831,   713,    -1,
     152,    -1,    -1,    -1,    -1,    -1,   121,    -1,    -1,   843,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2744,    -1,   175,  2747,    -1,    -1,  2750,    -1,  1876,
      -1,    -1,   184,    -1,    -1,    -1,    -1,    -1,  2761,  2762,
    2763,  2764,    -1,    -1,   159,    -1,   880,    -1,    -1,    -1,
    2773,    -1,    -1,  2776,    -1,    -1,    -1,    -1,    -1,    -1,
    2783,    -1,  2785,    -1,    -1,  1912,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2735,    -1,    -1,   229,    -1,   231,
      -1,    -1,    -1,   198,    -1,   237,   238,    -1,    -1,    -1,
      -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   214,
     215,    -1,   254,    -1,    -1,   220,  2767,    -1,  1776,  2770,
     225,    -1,    -1,   265,    -1,   830,  1784,  1785,    -1,    -1,
      -1,   955,   837,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1799,  1800,    -1,    -1,    -1,    -1,    -1,   290,    -1,
     292,    -1,  1810,  1811,    -1,    -1,    -1,    -1,    -1,    -1,
     302,    -1,    -1,  1821,  1822,    -1,    -1,    -1,    -1,    -1,
     312,    -1,    -1,  1831,  1832,    -1,    -1,   882,   883,  1837,
      -1,    -1,   887,    -1,    -1,   890,    -1,    -1,    -1,  1847,
      -1,    -1,    -1,    -1,    -1,    -1,   301,   902,    -1,    -1,
      -1,    -1,    -1,    -1,   346,    -1,  1030,    -1,    -1,    -1,
      -1,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
      -1,    -1,    -1,    -1,    -1,   350,    -1,    -1,    -1,    -1,
     355,   356,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1084,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1094,    -1,  1343,  1344,  1345,    -1,    -1,    -1,    -1,    -1,
       3,     4,  1353,  1354,  1355,    -1,    -1,     4,     5,  1360,
    1361,  1362,    -1,    -1,  1365,  1366,    19,  1368,  1369,    -1,
    1005,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1398,  1399,    -1,
      -1,  1402,  1403,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    76,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    90,  1198,    -1,    -1,    -1,    -1,    -1,
     103,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
     107,  1215,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   131,  1239,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1249,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   152,   159,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1268,  2282,    -1,    -1,  2106,    -1,
     167,    -1,    -1,    -1,  1278,    -1,    -1,    -1,  2116,  1283,
     177,   178,  2120,  2121,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2129,  2130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2138,  2139,   199,    -1,    -1,    -1,  2144,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2154,  2155,  1203,    -1,
      -1,    -1,   225,    -1,    -1,   222,    -1,  2165,  2166,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2176,   236,
      -1,   238,    -1,    -1,    -1,    -1,    -1,  2185,  1233,  2187,
      -1,    -1,    -1,  1238,    -1,    -1,   253,    -1,    -1,    -1,
      -1,   258,    -1,  1248,    -1,    -1,    -1,    -1,   265,    -1,
      -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   290,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   303,   304,    -1,   306,
      -1,    -1,  1416,    -1,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,  1446,    -1,    -1,    -1,    -1,    -1,    -1,   346,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2475,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1475,    -1,    -1,  1478,    -1,    -1,    -1,  2495,    -1,
      -1,    -1,  2499,    -1,  1488,  1489,    -1,    -1,    -1,    -1,
      -1,    -1,  1496,    -1,    -1,    -1,    -1,    -1,    -1,  1503,
      -1,    -1,    -1,    -1,    -1,    -1,  1757,     3,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1770,
      -1,  2359,    -1,    19,    -1,    -1,    -1,    -1,    -1,  1780,
      -1,  2369,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1543,
    2378,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,  2387,
      -1,  1555,    -1,    -1,    -1,    -1,  2394,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,  2405,    -1,    -1,
      -1,    -1,    -1,  2411,    -1,    -1,  2414,    -1,    -1,  2417,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1484,
      -1,  1852,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2634,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1632,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1650,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1544,
      -1,    -1,  1666,   159,    -1,  1550,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1681,    -1,  1683,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1693,
      -1,    -1,  1696,    -1,  1698,  1699,  1700,  1701,    -1,  2537,
    1704,    -1,   198,  1707,    -1,    -1,  1710,  1711,  2546,  1713,
    1714,  1715,  1716,    -1,  1718,  1719,    -1,  2555,    -1,    -1,
    1724,  1725,  1726,  2561,   220,  1729,  1730,  2565,    -1,   225,
    2568,  1735,  1736,    -1,    -1,    -1,    -1,    -1,    -1,  2756,
     236,    -1,    -1,  1628,    -1,    -1,    -1,    -1,    -1,  1634,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1659,    -1,    -1,    -1,    -1,    -1,
    1665,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   298,    -1,    -1,    -1,    -1,    -1,    -1,  1694,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1702,    -1,    -1,
      -1,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,    -1,
      -1,    -1,    -1,    -1,  2105,  1859,    -1,    -1,    -1,  1863,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1875,    -1,    -1,  1878,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2145,  2146,  2147,  2148,  2149,    -1,
    2151,  2152,    -1,    -1,  1908,  2156,  2157,  2158,  2159,  2160,
      -1,  2162,  2163,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1964,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1857,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,  1987,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1879,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   103,    -1,    19,    -1,    -1,    -1,  1913,  1914,
      -1,    -1,    -1,    -1,  2038,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,  1930,  1931,    -1,    -1,  2053,
    1935,  1936,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2081,   159,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2092,    -1,
    1975,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1986,    -1,    -1,    -1,    -1,    -1,  2358,   103,    -1,
    2361,  2362,  2363,  2364,  2365,    -1,  2367,  2368,    -1,  2370,
    2371,  2372,  2373,  2374,    -1,  2376,  2377,    -1,  2379,  2380,
    2381,  2382,  2383,    -1,  2385,  2386,  2021,  2388,    -1,   220,
      -1,    -1,    -1,   103,   225,    -1,    -1,  2398,  2399,    -1,
      -1,    -1,  2037,    -1,    -1,    -1,    -1,     6,  2409,    -1,
      -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2060,    -1,    -1,    -1,    -1,
    2065,    -1,    -1,    -1,    -1,    -1,  2071,    -1,    -1,    -1,
      -1,  2076,    -1,  2197,    -1,  2080,  2200,    -1,  2083,   159,
      -1,  2086,    -1,  2088,  2208,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2224,    -1,    -1,  2227,    -1,   220,    -1,    -1,  2232,    -1,
     225,  2235,  2236,    -1,    -1,    -1,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,    -1,   225,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2283,
    2284,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2540,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2549,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2558,    -1,  2560,
      -1,    -1,    -1,  2564,    -1,    -1,    -1,    -1,    -1,    -1,
    2324,    -1,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,    16,    -1,    -1,  2273,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2289,  2656,    -1,  2658,    -1,  2660,
      -1,    -1,  2663,    -1,  2665,    -1,    -1,    -1,  2422,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,
      -1,   164,    -1,    -1,  2319,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2455,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2466,    -1,    -1,    -1,    -1,  2352,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2516,    -1,    -1,    -1,  2520,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2420,    -1,    -1,    -1,    -1,
      -1,  2426,    -1,    -1,    -1,  2430,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2446,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2574,  2575,    -1,  2577,    -1,    -1,    -1,    -1,  2582,  2583,
      -1,    -1,    -1,  2587,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,  2497,  2498,    -1,   246,  2620,    -1,   249,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2647,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,    66,    67,    -1,  2602,    70,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,  2735,    -1,   117,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,  2752,    -1,
      -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2767,    57,    -1,  2770,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,
     103,    -1,    -1,    -1,  2699,    -1,    -1,    -1,    -1,   171,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    -1,  2722,   190,    -1,
      -1,   225,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     212,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,
      -1,    -1,    -1,   225,   103,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,  2768,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2788,    -1,    -1,  2791,    -1,    -1,    -1,
     294,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,   278,   220,    -1,    -1,
     159,    -1,   225,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   103,    57,    -1,    -1,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   286,   346,    -1,   225,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,
      -1,    -1,    -1,    -1,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,   294,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,    -1,
      -1,   103,    -1,   225,    -1,    -1,    -1,    -1,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     225,    -1,    -1,    -1,    -1,    -1,    -1,   159,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   225,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,    41,    -1,    -1,    44,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      78,    -1,    44,    -1,    -1,    47,    -1,    85,    -1,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,
      98,    -1,    -1,    -1,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,    -1,
      -1,    -1,    -1,    85,    -1,    87,    88,    89,    -1,   127,
      -1,    -1,    -1,    95,    -1,    97,    -1,    -1,    -1,    -1,
      -1,    -1,   140,    -1,    -1,    -1,   144,    -1,    -1,   147,
      -1,    -1,    -1,   151,   152,    -1,    -1,    -1,    -1,    -1,
     158,    -1,    -1,    -1,   126,    -1,   164,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     178,    -1,   144,   181,   182,   183,    -1,    -1,   186,   187,
     152,    -1,   154,   155,    -1,    -1,   158,    -1,    -1,    -1,
     162,    -1,   164,   201,   164,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     218,   219,   220,    -1,   186,   187,    -1,    -1,    -1,   191,
      -1,    -1,    -1,    -1,   232,    -1,   234,    -1,    -1,   201,
      -1,    -1,    -1,   241,    -1,    -1,    -1,   245,    -1,    -1,
      -1,   249,    -1,   251,    -1,   253,   218,   219,    -1,    -1,
     258,    -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,
     278,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   251,
      -1,   253,    -1,    -1,    -1,   293,   294,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,   307,
      -1,    -1,    -1,    -1,    -1,   313,   278,    -1,   316,   317,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   293,   294,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     302,    -1,    -1,    -1,    -1,    -1,    -1,   309,    -1,   347,
      -1,    -1,    -1,   315,    -1,   317,   354,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,    -1,    -1,    -1,    -1,
      -1,    -1,   354
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    41,    44,    47,    60,    65,    66,    68,    69,    70,
      78,    85,    87,    88,    97,    98,   127,   140,   144,   147,
     151,   152,   158,   164,   178,   181,   182,   183,   186,   187,
     201,   218,   219,   220,   232,   234,   241,   245,   249,   251,
     253,   258,   272,   278,   293,   294,   305,   307,   313,   316,
     317,   347,   354,   360,    67,    12,    54,    72,   102,   120,
     124,   137,   298,   394,     3,     4,   298,   361,   399,   191,
     197,   236,   262,   308,   353,   401,   290,     4,    40,   113,
     198,   251,   406,    28,   153,   176,   180,   233,   274,   282,
     283,   376,   408,    84,   101,   178,   222,   258,   409,    40,
      60,   113,   198,   294,   361,   418,     4,    19,    40,    57,
     103,   121,   159,   198,   206,   214,   215,   220,   225,   301,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   350,
     355,   356,   363,   371,   372,   373,   420,    33,   421,   363,
      44,    47,    77,    85,   145,   196,   214,   215,   221,   223,
     251,   317,   362,   147,   423,    41,    44,    47,    66,    68,
      69,    70,    78,    80,    85,    87,    88,    89,    95,    97,
     126,   144,   152,   154,   155,   158,   162,   164,   186,   187,
     191,   201,   218,   219,   226,   251,   253,   278,   293,   294,
     302,   309,   315,   317,   354,   424,    84,   101,   468,    19,
      41,    44,    78,    85,    96,    97,   103,   126,   144,   158,
     159,   165,   186,   225,   278,   288,   317,   471,    67,   363,
      89,   118,   189,   204,   266,   307,   317,   477,    16,    26,
     114,   126,   161,   211,   224,   480,   235,   498,     5,    67,
      89,   142,   307,   354,   363,   499,     5,   500,    58,   133,
     230,   245,   308,   516,    46,    65,    67,   185,   244,   288,
     297,   536,    67,   207,   349,   355,   357,   537,    39,   198,
     236,   298,   361,   371,   373,   538,     5,   307,   317,   363,
     541,    71,   171,   250,   259,   542,     4,   543,    89,   516,
      62,   288,   311,   550,   198,   298,   361,   551,    26,   114,
     126,   211,   224,   553,    51,   101,   110,   139,   300,   568,
     569,     4,    37,    48,    75,   152,   190,   259,   295,   311,
     389,     4,   126,   210,   570,   298,   361,   572,    16,    23,
     246,   249,   372,   573,   235,   577,   298,   361,   578,     0,
       5,   143,   363,    60,   361,   395,   275,     5,     4,   298,
     361,   396,     5,    32,   287,   397,   125,   361,   398,   125,
     361,   400,   361,     4,   197,   248,   255,   404,   191,   308,
     352,   353,   361,   403,   363,   141,   179,   402,   201,   361,
      79,   175,   255,   361,   405,     5,   361,     4,   251,   407,
     361,   361,     5,   231,   410,    31,   411,     5,   412,     5,
     416,     5,    31,   417,   361,     9,    10,    11,   361,   367,
     368,   369,   370,   361,   361,    40,   113,   198,   361,   419,
     361,   198,   371,   373,   361,    35,   108,   129,   130,   138,
     156,   166,   378,   361,     4,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   119,    67,    54,    72,    89,
     102,   120,   124,   137,   177,   427,   120,   429,   191,   197,
     236,   262,   308,   352,   353,   361,   413,   430,   290,   433,
     171,   434,   171,   180,   436,    66,    67,    70,    93,   171,
     190,   212,   278,   346,   371,   438,   361,   373,   441,    60,
     294,   371,   442,   286,   371,   373,   443,    33,   444,   371,
     373,   445,     4,   371,   373,   446,    45,    60,    82,   102,
     119,   122,   149,   150,   203,   213,   275,   276,   346,   450,
     217,   310,   456,    67,     5,    90,     6,    89,   122,   448,
       5,    66,   373,   447,    16,   516,    46,    67,    82,   185,
     244,   288,   297,   457,    67,   236,   458,   289,    62,   288,
     311,   459,    21,   137,   243,   273,   460,    37,    48,    75,
     152,   190,   259,   311,   461,   373,    90,    16,   200,   466,
     371,   469,    67,    73,   472,    31,   473,    44,    88,   196,
     474,   152,   222,   265,   303,   475,   371,    18,    59,   117,
     176,   294,   371,   476,     5,     4,   197,   479,     5,     4,
       6,   122,   361,     4,     5,   251,   481,     5,   483,     5,
     119,   196,   251,   276,   484,    95,   113,   191,   497,     5,
     495,     5,   276,   496,     4,     5,   363,   363,   361,   361,
       5,     4,     5,    61,    67,    74,    76,    81,    84,    90,
     101,   107,   116,   131,   152,   167,   177,   178,   199,   222,
     236,   238,   253,   258,   265,   272,   290,   303,   304,   306,
     346,   501,    92,   172,   263,   281,   375,     5,     4,   201,
     208,   209,   244,   351,   374,   361,   371,   361,     5,   361,
      40,   113,   361,   540,   363,   361,   371,   373,   539,   361,
     378,   361,     4,   372,    55,    91,   143,   251,   544,     4,
       4,   361,     4,   152,   265,   545,     5,   371,     4,    40,
     113,   361,   552,   361,    99,    62,   122,   251,   279,   554,
     122,   567,    62,   119,   122,   159,   196,   247,   251,   276,
     279,   289,   556,   557,    62,   122,   279,   566,     5,     4,
      34,   109,   207,   549,    67,   363,   390,    67,   363,   391,
      67,   363,   392,    13,   193,   548,   361,   361,   229,   361,
     393,   361,   276,     4,   361,   361,     4,   576,     4,   292,
     574,     4,   292,   575,     4,   378,   125,   361,   579,   361,
     361,     4,     5,   361,    12,   361,   361,   361,    30,    96,
     165,   255,   260,   377,   377,     4,   201,   361,   361,     4,
       4,     4,   361,   361,   361,   361,     4,     4,     5,     5,
     371,     5,   361,   361,   367,   369,   369,   371,   361,   361,
     361,   361,   361,   361,   361,   371,   373,   370,   361,   361,
     370,   361,     5,   275,   105,   191,   428,   197,   255,   431,
     171,    79,   175,   255,   432,   141,   179,   414,   414,     4,
     435,     4,   437,   197,   262,   439,   180,   440,   171,   378,
     361,   361,   371,   371,   378,   378,   378,   371,   378,   361,
     371,     4,   453,     4,   373,   451,   200,     4,   168,   317,
     452,   200,   371,     4,   134,   298,   455,     5,     5,   425,
       4,   200,   361,     4,     5,    61,    67,   116,   131,   146,
     152,   157,   212,   231,   236,   238,   264,   265,   272,   290,
     346,   510,   373,   192,   192,    67,   462,    67,   463,    67,
     464,   229,   465,   361,     5,   426,   230,   467,   372,   378,
       5,   371,   371,   371,   371,     4,   363,     4,     4,   200,
     361,    14,    15,    62,   194,   195,   269,   279,   280,   310,
      88,     5,     5,    14,    15,    62,   194,   195,   269,   279,
     280,   284,   310,    88,   159,   164,   372,   487,   492,    88,
     159,     5,   485,     4,     4,    14,    62,   194,   269,   279,
     310,     5,     5,     4,   361,   372,    20,    21,    22,    49,
      50,    53,    56,    63,    67,    75,    76,    83,    84,   101,
     107,   111,   112,   115,   131,   152,   175,   199,   229,   231,
     237,   238,   253,   254,   264,   265,   290,   292,   304,   306,
     312,   346,    67,    81,    90,   101,   131,   152,   199,   238,
     265,   304,   306,     4,    30,   163,   217,   243,   504,     5,
      64,   106,   240,   256,   257,   348,   349,   509,   101,   502,
      17,   265,   507,    40,   113,   198,   508,     4,     5,    17,
     216,   299,   361,   265,   509,   517,   126,   509,   518,    36,
      40,   113,   135,   198,   298,   361,   519,   371,   363,    93,
     101,   107,   128,   152,   160,   199,   207,   253,   265,   281,
     522,    40,   113,   198,     5,   265,   291,   526,    17,   216,
     299,   527,   292,   363,   528,     5,   101,   107,   307,    17,
      17,     4,   361,   361,   361,   361,   361,   361,   378,   361,
     361,   370,   361,     4,   378,     4,    40,   113,   198,   270,
     546,    40,   113,   198,   270,   547,     4,    99,     5,     5,
      88,     4,     5,     5,    88,     5,   557,    62,   122,   159,
     279,   561,    62,   122,   279,   565,    88,   159,    62,   122,
     279,   559,     4,    62,   122,   279,   558,     5,     5,     4,
       4,     5,     5,     5,   361,   361,   361,     4,   361,   571,
     361,   361,     6,   372,     4,     5,     4,     4,     5,     4,
      99,   267,   379,   361,   361,    12,     5,    12,   361,   361,
      12,     4,    12,     4,     4,   361,   361,   361,     4,   363,
       4,     4,   378,   371,   378,   361,   361,   361,   371,   361,
     370,   361,   361,     5,     5,   361,   373,   361,   371,   361,
     378,   378,   379,   379,   379,   378,   370,   361,   378,   361,
     136,   252,   364,   454,   168,     5,     4,   378,   159,   159,
       4,     5,     4,     4,   361,   449,   361,    20,    21,    22,
      49,    50,    53,    60,    63,    67,    75,    76,    83,   111,
     112,   115,   131,   152,   175,   184,   229,   231,   237,   238,
     254,   265,   290,   292,   302,   312,   346,    67,   131,   157,
     238,   290,    30,   163,   217,   243,   511,   361,   212,   361,
     512,    17,   361,   264,   522,   264,   212,   361,   513,   292,
     514,    17,   100,   361,   361,     5,   379,    57,   371,     4,
       5,   478,   361,     5,     5,     5,   159,   187,   383,   383,
     167,   271,   381,     4,     4,     5,     5,   482,   277,   277,
       5,     5,     5,    17,   161,   382,   382,   381,     4,     4,
     381,     5,     5,   486,   164,   345,   372,   490,     5,   489,
       5,     5,   493,     5,   494,     5,    14,    15,    62,   194,
     195,   269,   279,   280,   284,   310,     4,     4,     5,     5,
     383,   381,     4,     5,     5,   378,    83,   154,   227,   228,
     242,   285,   386,     7,     8,   361,   366,   243,   123,   243,
     243,   107,    40,    67,   101,   107,   113,   131,   152,   167,
     199,   238,   253,   265,   292,   304,   306,   307,   346,   503,
     123,   243,     5,    27,   169,   243,   288,   141,   107,    22,
      50,    53,    83,   112,   115,   231,   264,    22,    50,    53,
      56,    83,   112,   115,   231,   264,   290,    40,   123,   243,
     243,   107,     5,   216,    27,   229,    36,   135,   298,   361,
     268,   275,   123,   249,   371,   522,    40,   132,   229,   288,
     249,   216,     5,     5,   253,    27,   229,     4,     5,     5,
     216,    36,   135,   298,   361,   522,   216,   363,     4,     4,
     361,     5,   310,    22,    27,    49,    50,    52,    53,    63,
      75,    76,    83,    86,   104,   111,   112,   115,   175,   231,
     237,   254,   264,   291,   292,   312,   357,   505,   361,   361,
     361,   361,   361,   509,   371,     5,     4,     5,   361,   361,
     371,   361,   363,   361,   361,   509,     5,     5,   361,   361,
     363,     5,    17,     5,     5,   361,   361,   370,   361,   361,
       4,   361,   361,   113,   361,   361,   113,     4,    42,    43,
     173,   174,   202,   388,   388,    62,   122,   279,   555,   388,
       5,    62,   122,   279,   560,     5,     5,    62,   122,   279,
     562,     4,     5,     5,     4,    62,   122,   279,   564,    62,
     122,   279,   563,     5,     5,     4,     5,     5,     4,   388,
     388,   388,   361,   361,   361,     4,   371,   361,   372,   378,
       5,     5,    12,   361,   371,   373,   361,    12,   361,   361,
     361,    60,   361,     6,     4,   361,   361,    47,   278,   415,
       5,   363,   363,   378,   361,     4,     4,     4,   378,   371,
     361,   361,   361,   361,   378,   371,   379,   370,   361,     4,
     379,   361,    38,    38,     4,   373,     5,    24,    25,    99,
     380,     4,   371,   361,   361,     4,   361,     5,    83,   154,
     227,   228,   242,   285,   371,   373,   243,   123,   243,   243,
      21,   243,   371,   123,   243,    27,   169,   243,   288,   141,
      21,   243,   123,   243,   243,    21,   243,    27,   170,   229,
     170,   268,   275,   123,   170,   229,   296,   522,   132,   170,
     229,   288,     4,   253,    27,   170,   229,   522,   212,   361,
     361,   361,   361,   361,   361,   200,   361,   361,    20,   239,
     470,     4,     4,   361,   383,   383,   383,     4,   383,   383,
     383,    14,    15,    62,   194,   195,   269,   279,   280,   310,
     382,   383,   383,   383,   383,   383,     4,   383,   383,     4,
     382,    14,    15,    62,   194,   195,   269,   279,   280,   310,
       5,   488,     5,   491,     5,     5,    14,    15,    62,   194,
     195,   269,   279,   280,   284,   310,     5,    14,    15,    62,
     194,   195,   269,   279,   280,   284,   310,     5,    14,    15,
      62,   194,   195,   269,   279,   280,   284,   310,    14,    15,
      62,   194,   195,   269,   279,   280,   310,   277,     5,     5,
       5,   382,   382,   381,     4,     4,   381,     5,     4,     4,
     383,   383,     4,   383,   383,     5,   363,   371,   373,     5,
     361,   363,   361,     5,   361,     5,   366,   107,   199,   253,
     107,   199,   253,     5,   363,   361,   363,     5,   361,   371,
     363,     5,   366,   243,   243,    21,   243,    21,   243,   243,
      21,   243,   314,   314,     4,     4,     4,   503,     4,     4,
       4,   314,   314,     4,     5,     4,   363,   361,     5,   361,
       5,   366,   363,   371,   371,   361,    27,    49,    52,    63,
      86,   104,   357,   384,     4,   363,   361,   378,   363,     5,
     371,   371,   361,   363,   363,   371,   371,   361,   363,   361,
       5,   361,   229,   229,   361,   361,   229,   361,   229,   361,
     361,   515,   523,   361,   229,   229,   361,   361,   361,   361,
     361,   361,   361,   361,     5,   310,   361,   506,   361,   361,
     229,   361,   361,   361,   361,   371,   378,     5,     4,     4,
     361,   361,   378,   361,   361,   361,   371,   509,   361,   361,
       5,     4,   361,   361,   361,   361,     5,     5,     4,   388,
       5,     5,     4,     4,     4,     5,     5,     4,     4,     5,
       5,     4,     5,     5,     4,   361,   361,   361,   361,   378,
     361,   371,   373,   361,   378,   361,   361,   361,   361,   361,
       5,   361,     4,     6,   361,   361,     4,   371,   361,   378,
     180,   376,   361,   376,   379,   378,   371,   361,   361,     4,
     361,   371,   371,   361,     4,     5,     5,     5,     5,     5,
     371,   378,   371,   371,   371,   371,   373,   371,   378,   371,
     371,   371,   373,   371,   371,   371,   371,   373,   371,   371,
     371,   361,   371,   371,   371,   371,   371,   371,   371,   361,
     361,     4,   361,     5,     4,   361,   383,     5,     5,     5,
     381,     4,     4,     5,   383,   382,     4,   383,     5,     5,
       5,   382,   382,   381,     4,     4,     5,    14,    15,    62,
     194,   195,   269,   279,   280,   310,    14,    15,    62,   194,
     195,   269,   279,   280,   310,    14,    15,    62,   194,   195,
     269,   279,   280,   310,   277,     5,     5,     5,   382,   382,
     381,     4,     4,   381,     5,   277,     5,     5,     5,   382,
     382,   381,     4,     4,   381,     5,   277,     5,     5,     5,
     382,   382,   381,     4,     4,   381,     5,     5,     5,     5,
     382,   382,   381,     4,     4,     5,   382,     4,     4,   382,
       4,     4,   383,     5,   378,   371,   361,   361,   371,   361,
       5,   366,     5,   371,   363,     5,   371,   378,     5,   366,
     361,   361,   361,   361,   361,   361,   361,   361,   361,     4,
       4,     5,     4,     4,   361,   371,   361,     5,   366,   363,
     378,   378,   361,   370,   378,   378,   361,   378,   378,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,    56,
      67,    94,   131,   290,   292,   346,   520,   521,   522,   534,
     535,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   371,     5,   361,   361,   361,   361,     4,
       4,   378,   379,     5,     5,   370,   361,     4,   378,   371,
       4,   388,   388,   388,   366,   361,   361,   361,   378,   361,
     370,   361,   361,    12,     5,     5,     4,   361,   361,     4,
     378,   371,   361,   361,   379,   380,   361,     5,   361,   371,
     373,     5,     5,     5,     5,     5,   378,   380,   380,   380,
     378,   380,   379,   380,   380,   378,   380,   380,   380,   378,
     380,   380,   378,   371,   380,   378,   380,   380,   378,   380,
     378,     4,   371,   373,     5,   361,     4,   383,   382,     4,
     382,     5,     5,     5,   382,   382,   381,     4,     4,     5,
       5,     5,     5,   382,   382,   381,     4,     4,     5,     5,
       5,     5,   382,   382,   381,     4,     4,     5,   382,   383,
     383,   383,   383,   383,     4,   383,   383,     4,   382,   382,
     383,   383,   383,   383,   383,     4,   383,   383,     4,   382,
     382,     4,     4,   382,     4,   382,   382,     4,     4,     4,
     372,   380,     4,   371,   380,   361,   371,     4,   380,   380,
     371,     4,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   371,   380,   361,   371,     4,   370,   370,
     371,   370,   370,   371,   371,   370,   370,   361,   361,   361,
     361,   361,   361,   366,   361,   361,   361,   358,   358,   358,
     358,   358,   358,   358,   521,   358,   366,   361,   361,   361,
     361,   366,   361,   361,   361,   361,   361,   361,   378,   361,
     310,   365,   366,   361,   361,   379,   363,   371,   371,   379,
     378,     4,   361,   370,   361,    60,   361,     5,     5,   361,
       4,   376,   380,     5,   378,     4,     5,     4,     5,   371,
       5,   379,   380,   379,   379,   379,     5,   378,     4,   361,
     383,   382,   383,   383,   383,   383,   383,     4,   383,   383,
     382,   383,   383,   383,   383,   383,     4,   383,   383,   382,
     383,   383,   383,   383,   383,     4,   383,   383,   382,   383,
     382,     4,   383,   383,   382,     4,   383,   382,     4,   382,
     382,   378,   371,   380,     4,   378,   361,   378,   361,   361,
     361,   380,     4,   378,   361,   370,   380,   361,   370,   380,
     380,   371,   361,     4,   385,   385,   361,   361,   385,   366,
     385,   523,   371,   503,     5,     4,     5,     5,     5,     4,
     363,   366,   385,   385,   361,   361,   366,   361,   361,   361,
     361,   361,   370,   361,     5,   523,   361,   385,   363,   524,
     525,   378,   378,   363,   379,     4,     5,   361,     5,     4,
       6,   361,     4,    32,   287,   422,   371,     5,    32,   188,
     287,   387,   371,     4,   422,   361,   382,   383,   382,   383,
     382,   383,   383,   382,   383,   382,   382,   361,   380,   371,
     371,   361,   371,   361,   371,   371,   361,   371,   380,     4,
     523,   523,   365,   361,   523,     4,   523,   378,     5,     4,
       4,   523,   523,   365,   361,     4,   523,   523,   361,   371,
     523,   523,   523,   524,   531,   532,   522,   529,   530,   363,
       4,     5,     5,     6,     4,   191,   308,   353,   361,   413,
     422,     4,   371,   422,     4,   383,   383,   383,   383,   383,
     372,   380,   380,   361,   380,     4,   380,   380,   361,   380,
     361,   523,   523,     4,   361,   523,     5,   361,   523,     4,
     361,   523,   378,   531,   533,   534,   358,   530,     5,     5,
       4,   361,   414,   361,   414,   378,   380,     4,   371,   373,
       4,   366,   365,   361,   361,   365,   361,   371,   534,   363,
       5,     5,   361,   361,   361,   361,   387,     5,   371,   373,
     378,   371,   373,   523,   361,     4,   523,   361,   380,     5,
       5,   361,     5,   361,   378,   378,     4,   523,     4,     5,
       5,     5,   365,   365,   523,   523,   523
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
#line 466 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 467 "frame/parser.Y"
    {fr->bgColorCmd("gray");;}
    break;

  case 6:
#line 468 "frame/parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 8:
#line 470 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 9:
#line 471 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 11:
#line 473 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 18:
#line 480 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 23:
#line 485 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 24:
#line 486 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 487 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 27:
#line 489 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 34:
#line 496 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 38:
#line 500 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 41:
#line 503 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 46:
#line 508 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 48:
#line 510 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 50:
#line 512 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 52:
#line 514 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 57:
#line 521 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 58:
#line 522 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 59:
#line 525 "frame/parser.Y"
    {yydebug=1;;}
    break;

  case 60:
#line 526 "frame/parser.Y"
    {yydebug=0;;}
    break;

  case 61:
#line 527 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 62:
#line 528 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 529 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 530 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 531 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 532 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 533 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 534 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 535 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 536 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 539 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 72:
#line 541 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 73:
#line 542 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 74:
#line 543 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 75:
#line 544 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 76:
#line 546 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 77:
#line 547 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 78:
#line 548 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 79:
#line 549 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 80:
#line 552 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 81:
#line 553 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 82:
#line 554 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 83:
#line 555 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 84:
#line 556 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 85:
#line 559 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 86:
#line 560 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 87:
#line 563 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 88:
#line 564 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 89:
#line 565 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 90:
#line 568 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 91:
#line 571 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 92:
#line 574 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 93:
#line 578 "frame/parser.Y"
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
#line 590 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 95:
#line 597 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 96:
#line 604 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 97:
#line 611 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 98:
#line 612 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 99:
#line 613 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 100:
#line 614 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 101:
#line 615 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 102:
#line 618 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 103:
#line 619 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 104:
#line 620 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 105:
#line 621 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 106:
#line 622 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 107:
#line 623 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 108:
#line 624 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 109:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 110:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 111:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 112:
#line 628 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 113:
#line 629 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 114:
#line 630 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 115:
#line 631 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 116:
#line 632 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 117:
#line 633 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 118:
#line 634 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 119:
#line 635 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 120:
#line 636 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 121:
#line 637 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 122:
#line 638 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 123:
#line 639 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 124:
#line 640 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 125:
#line 641 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 126:
#line 642 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 127:
#line 643 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 128:
#line 644 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 129:
#line 645 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 130:
#line 648 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 131:
#line 649 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 132:
#line 652 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 133:
#line 653 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 134:
#line 654 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 135:
#line 655 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 136:
#line 656 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 137:
#line 657 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 138:
#line 660 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 139:
#line 661 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 140:
#line 662 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 141:
#line 663 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 142:
#line 664 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 143:
#line 667 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 144:
#line 668 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 145:
#line 669 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 146:
#line 670 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 147:
#line 671 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 148:
#line 672 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 149:
#line 673 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 150:
#line 674 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 151:
#line 677 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 152:
#line 678 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 153:
#line 679 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 154:
#line 680 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 155:
#line 681 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 156:
#line 684 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 157:
#line 685 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 158:
#line 686 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 159:
#line 687 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 160:
#line 688 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 161:
#line 689 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 162:
#line 690 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 163:
#line 691 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 164:
#line 694 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 165:
#line 695 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 166:
#line 696 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 167:
#line 699 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 168:
#line 700 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 169:
#line 701 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 170:
#line 702 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 171:
#line 705 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 172:
#line 706 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 173:
#line 707 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 174:
#line 710 "frame/parser.Y"
    {;}
    break;

  case 175:
#line 711 "frame/parser.Y"
    {;}
    break;

  case 176:
#line 712 "frame/parser.Y"
    {;}
    break;

  case 177:
#line 715 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 178:
#line 716 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 179:
#line 717 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 180:
#line 720 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 181:
#line 721 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 182:
#line 722 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 183:
#line 723 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 184:
#line 724 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 185:
#line 725 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 186:
#line 726 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 187:
#line 727 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 188:
#line 730 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 189:
#line 731 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 190:
#line 734 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 191:
#line 735 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 192:
#line 736 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 193:
#line 737 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 194:
#line 738 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 195:
#line 739 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 196:
#line 742 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 197:
#line 743 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 198:
#line 744 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 199:
#line 745 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 200:
#line 748 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 201:
#line 749 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 202:
#line 750 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 203:
#line 751 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 204:
#line 752 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 205:
#line 753 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 210:
#line 760 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 211:
#line 761 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 212:
#line 762 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 213:
#line 764 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 214:
#line 767 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 215:
#line 768 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 216:
#line 771 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 217:
#line 772 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 218:
#line 775 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 219:
#line 776 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 220:
#line 779 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 221:
#line 781 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 223:
#line 785 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 224:
#line 786 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 227:
#line 789 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 229:
#line 791 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 230:
#line 794 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 231:
#line 795 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 232:
#line 798 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 233:
#line 799 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 234:
#line 801 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 235:
#line 803 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 236:
#line 804 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 237:
#line 805 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 238:
#line 807 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 239:
#line 809 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 240:
#line 812 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 241:
#line 813 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 242:
#line 816 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 243:
#line 818 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 244:
#line 821 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 245:
#line 823 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 246:
#line 826 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 247:
#line 830 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 248:
#line 831 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 250:
#line 835 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 251:
#line 836 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 252:
#line 837 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 256:
#line 843 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 257:
#line 844 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 259:
#line 847 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 260:
#line 852 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 261:
#line 853 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 262:
#line 856 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 263:
#line 857 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 264:
#line 858 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 265:
#line 859 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 266:
#line 860 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 267:
#line 863 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 268:
#line 864 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 269:
#line 865 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 270:
#line 866 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 271:
#line 869 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 272:
#line 871 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 273:
#line 876 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 274:
#line 881 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 275:
#line 888 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 276:
#line 890 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 277:
#line 891 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 279:
#line 893 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 280:
#line 897 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 281:
#line 899 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 282:
#line 901 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 283:
#line 902 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 289:
#line 913 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 290:
#line 915 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 291:
#line 917 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 292:
#line 922 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 293:
#line 926 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 294:
#line 929 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 295:
#line 930 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 296:
#line 933 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 297:
#line 934 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 298:
#line 936 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 299:
#line 942 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 300:
#line 943 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 301:
#line 944 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 302:
#line 945 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 303:
#line 948 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 304:
#line 949 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 305:
#line 952 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 306:
#line 953 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 307:
#line 956 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 308:
#line 957 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 309:
#line 961 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 310:
#line 963 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 311:
#line 966 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 312:
#line 968 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 313:
#line 971 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 315:
#line 973 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 316:
#line 974 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 317:
#line 975 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 318:
#line 978 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 319:
#line 980 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 320:
#line 981 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 321:
#line 982 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 322:
#line 983 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 323:
#line 987 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 324:
#line 989 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 325:
#line 990 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 326:
#line 991 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 327:
#line 994 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 328:
#line 996 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 329:
#line 998 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 330:
#line 1000 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 331:
#line 1003 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 332:
#line 1006 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 333:
#line 1007 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 334:
#line 1008 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 335:
#line 1011 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 336:
#line 1014 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 350:
#line 1028 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 353:
#line 1031 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 354:
#line 1032 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 358:
#line 1036 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 359:
#line 1037 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 362:
#line 1040 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 363:
#line 1041 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 365:
#line 1044 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 367:
#line 1046 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 369:
#line 1048 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 371:
#line 1050 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 372:
#line 1052 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 375:
#line 1055 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 376:
#line 1059 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 377:
#line 1061 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 378:
#line 1065 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 379:
#line 1067 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 380:
#line 1070 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 381:
#line 1071 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 382:
#line 1072 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 383:
#line 1073 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 384:
#line 1074 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 385:
#line 1075 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 387:
#line 1077 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 388:
#line 1080 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 389:
#line 1081 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 390:
#line 1082 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 391:
#line 1085 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 392:
#line 1088 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 393:
#line 1090 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 394:
#line 1092 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 395:
#line 1093 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 396:
#line 1094 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 398:
#line 1096 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 400:
#line 1099 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 401:
#line 1105 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 402:
#line 1106 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 403:
#line 1109 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 404:
#line 1110 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 405:
#line 1111 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 406:
#line 1114 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 407:
#line 1115 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 409:
#line 1121 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 410:
#line 1123 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 411:
#line 1125 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 412:
#line 1128 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 414:
#line 1130 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 415:
#line 1134 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 416:
#line 1138 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 418:
#line 1140 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 419:
#line 1141 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 420:
#line 1142 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 421:
#line 1143 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 422:
#line 1144 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 424:
#line 1146 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 425:
#line 1147 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 426:
#line 1150 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 427:
#line 1151 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 428:
#line 1152 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 429:
#line 1155 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 430:
#line 1156 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 431:
#line 1160 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 432:
#line 1162 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 433:
#line 1170 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 434:
#line 1172 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 435:
#line 1174 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 436:
#line 1177 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 437:
#line 1179 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 438:
#line 1180 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 439:
#line 1183 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 440:
#line 1186 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 441:
#line 1188 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 442:
#line 1192 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 443:
#line 1194 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 444:
#line 1197 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 445:
#line 1201 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 446:
#line 1202 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 447:
#line 1204 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)), (Coord::InternalSystem)(yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 448:
#line 1207 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 449:
#line 1208 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 451:
#line 1212 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 452:
#line 1213 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 453:
#line 1214 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 454:
#line 1217 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 455:
#line 1219 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 456:
#line 1220 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 458:
#line 1222 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 462:
#line 1226 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 463:
#line 1227 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 464:
#line 1228 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 465:
#line 1230 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 467:
#line 1232 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 468:
#line 1235 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 469:
#line 1237 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 470:
#line 1239 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 471:
#line 1240 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 472:
#line 1241 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 473:
#line 1242 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 474:
#line 1245 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 475:
#line 1246 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 476:
#line 1250 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 477:
#line 1252 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 478:
#line 1255 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 479:
#line 1258 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 480:
#line 1259 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 481:
#line 1261 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 482:
#line 1263 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 483:
#line 1265 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 484:
#line 1268 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 485:
#line 1269 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 486:
#line 1270 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 487:
#line 1273 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 488:
#line 1274 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 489:
#line 1275 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 490:
#line 1276 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 491:
#line 1277 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 492:
#line 1278 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 493:
#line 1279 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 494:
#line 1282 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 495:
#line 1285 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 496:
#line 1286 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 497:
#line 1287 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 498:
#line 1290 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 499:
#line 1291 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 500:
#line 1292 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 501:
#line 1293 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 502:
#line 1294 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 503:
#line 1295 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 508:
#line 1302 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 509:
#line 1303 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 510:
#line 1304 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 511:
#line 1307 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 512:
#line 1308 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 513:
#line 1311 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 514:
#line 1312 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 515:
#line 1315 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 516:
#line 1316 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 517:
#line 1319 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 518:
#line 1320 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 519:
#line 1323 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 521:
#line 1325 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 522:
#line 1328 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 523:
#line 1329 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 525:
#line 1333 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 526:
#line 1337 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 527:
#line 1340 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 528:
#line 1347 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 529:
#line 1348 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 530:
#line 1351 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 531:
#line 1352 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 534:
#line 1355 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 535:
#line 1356 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 536:
#line 1357 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 537:
#line 1358 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 539:
#line 1360 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 540:
#line 1361 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 541:
#line 1362 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 543:
#line 1364 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 544:
#line 1365 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 545:
#line 1366 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 546:
#line 1367 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 548:
#line 1371 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 549:
#line 1374 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 550:
#line 1375 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 551:
#line 1378 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 552:
#line 1379 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 553:
#line 1380 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 554:
#line 1381 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 555:
#line 1384 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 556:
#line 1385 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 557:
#line 1386 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 558:
#line 1387 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 559:
#line 1390 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 560:
#line 1391 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 561:
#line 1392 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 562:
#line 1393 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 563:
#line 1394 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 564:
#line 1395 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 565:
#line 1398 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 566:
#line 1399 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 567:
#line 1400 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 570:
#line 1404 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 571:
#line 1405 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 572:
#line 1408 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 573:
#line 1411 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 574:
#line 1412 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 575:
#line 1416 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 576:
#line 1418 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 577:
#line 1419 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 584:
#line 1431 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 585:
#line 1433 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 586:
#line 1435 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 587:
#line 1436 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 588:
#line 1438 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 589:
#line 1440 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 590:
#line 1442 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 591:
#line 1444 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 592:
#line 1446 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 594:
#line 1450 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 595:
#line 1451 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 596:
#line 1452 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 597:
#line 1453 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 598:
#line 1454 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 599:
#line 1456 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 600:
#line 1457 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 601:
#line 1458 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 602:
#line 1459 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 603:
#line 1462 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 604:
#line 1466 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 605:
#line 1468 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 606:
#line 1470 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 607:
#line 1472 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 608:
#line 1474 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 609:
#line 1476 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 610:
#line 1478 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 611:
#line 1480 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 612:
#line 1483 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 613:
#line 1485 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 614:
#line 1487 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 620:
#line 1495 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 621:
#line 1496 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 622:
#line 1497 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 623:
#line 1498 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 624:
#line 1499 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 625:
#line 1500 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 626:
#line 1502 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 627:
#line 1504 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 628:
#line 1505 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 629:
#line 1506 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 630:
#line 1507 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 631:
#line 1510 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 632:
#line 1511 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 633:
#line 1512 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 634:
#line 1513 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 635:
#line 1514 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 636:
#line 1516 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 637:
#line 1517 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 638:
#line 1518 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 639:
#line 1519 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 645:
#line 1530 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 646:
#line 1533 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 647:
#line 1536 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 648:
#line 1539 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 649:
#line 1542 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 650:
#line 1545 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 651:
#line 1548 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 652:
#line 1551 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 653:
#line 1554 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 654:
#line 1559 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 655:
#line 1562 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 656:
#line 1565 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 657:
#line 1568 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 658:
#line 1571 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 659:
#line 1574 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 660:
#line 1577 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 661:
#line 1580 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 662:
#line 1583 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 663:
#line 1586 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 664:
#line 1589 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 665:
#line 1594 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 666:
#line 1597 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 667:
#line 1600 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 668:
#line 1603 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 669:
#line 1606 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 670:
#line 1609 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 671:
#line 1612 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 672:
#line 1615 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 673:
#line 1618 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 674:
#line 1623 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 675:
#line 1625 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 676:
#line 1627 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 677:
#line 1629 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 678:
#line 1631 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 679:
#line 1633 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 680:
#line 1638 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 681:
#line 1640 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 682:
#line 1642 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 683:
#line 1646 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 684:
#line 1649 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 685:
#line 1652 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 686:
#line 1655 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 687:
#line 1658 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 688:
#line 1661 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 689:
#line 1664 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 690:
#line 1667 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 691:
#line 1670 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 692:
#line 1673 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 693:
#line 1676 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 694:
#line 1680 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 695:
#line 1681 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 696:
#line 1682 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 697:
#line 1683 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 698:
#line 1684 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 699:
#line 1685 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 700:
#line 1687 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 701:
#line 1689 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 702:
#line 1690 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 703:
#line 1691 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 704:
#line 1692 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 705:
#line 1695 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 706:
#line 1696 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 707:
#line 1697 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 708:
#line 1698 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 709:
#line 1699 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 710:
#line 1701 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 711:
#line 1702 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 712:
#line 1703 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 713:
#line 1704 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 714:
#line 1708 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 715:
#line 1710 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 716:
#line 1711 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 717:
#line 1713 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 718:
#line 1715 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 719:
#line 1717 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 720:
#line 1720 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 721:
#line 1721 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 722:
#line 1724 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 723:
#line 1725 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 724:
#line 1726 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 725:
#line 1729 "frame/parser.Y"
    {;}
    break;

  case 726:
#line 1732 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 727:
#line 1733 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 728:
#line 1734 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 729:
#line 1735 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 730:
#line 1736 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 731:
#line 1737 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 732:
#line 1738 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 733:
#line 1742 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 735:
#line 1750 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 736:
#line 1751 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 737:
#line 1753 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 738:
#line 1755 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 739:
#line 1756 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 740:
#line 1757 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 742:
#line 1758 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 745:
#line 1761 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 746:
#line 1762 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 747:
#line 1764 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 748:
#line 1766 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 749:
#line 1768 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 750:
#line 1771 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 751:
#line 1773 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 752:
#line 1774 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 753:
#line 1776 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 754:
#line 1779 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 755:
#line 1782 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 756:
#line 1784 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 757:
#line 1787 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 758:
#line 1790 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 759:
#line 1793 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 760:
#line 1796 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 761:
#line 1800 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 762:
#line 1804 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 763:
#line 1809 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 764:
#line 1813 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 765:
#line 1814 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 766:
#line 1816 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 767:
#line 1817 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 768:
#line 1819 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 769:
#line 1821 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 770:
#line 1823 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 771:
#line 1825 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 772:
#line 1826 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 773:
#line 1828 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 774:
#line 1830 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 775:
#line 1833 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 776:
#line 1837 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 777:
#line 1841 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 778:
#line 1843 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 779:
#line 1845 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 780:
#line 1847 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 781:
#line 1849 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 782:
#line 1851 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 783:
#line 1853 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 784:
#line 1855 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 785:
#line 1857 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 786:
#line 1859 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 787:
#line 1861 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 788:
#line 1863 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 789:
#line 1865 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 790:
#line 1867 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 791:
#line 1868 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 792:
#line 1870 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 793:
#line 1872 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 794:
#line 1873 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 795:
#line 1874 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 796:
#line 1876 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 797:
#line 1878 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 798:
#line 1879 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 799:
#line 1880 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 800:
#line 1881 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 801:
#line 1883 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 802:
#line 1884 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 803:
#line 1886 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 804:
#line 1890 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 805:
#line 1893 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 806:
#line 1896 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 807:
#line 1900 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 808:
#line 1904 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 809:
#line 1909 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 810:
#line 1913 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 811:
#line 1914 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 812:
#line 1915 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 813:
#line 1917 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 814:
#line 1919 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 815:
#line 1923 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 816:
#line 1924 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 817:
#line 1925 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 818:
#line 1927 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 819:
#line 1930 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 820:
#line 1933 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 821:
#line 1936 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 822:
#line 1937 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 823:
#line 1939 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 824:
#line 1942 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 825:
#line 1946 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 826:
#line 1948 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 827:
#line 1949 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 828:
#line 1951 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 829:
#line 1954 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 830:
#line 1957 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 831:
#line 1958 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 832:
#line 1960 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 833:
#line 1961 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 834:
#line 1962 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 835:
#line 1964 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 836:
#line 1965 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 837:
#line 1967 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 838:
#line 1970 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 839:
#line 1973 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 840:
#line 1975 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 841:
#line 1976 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 845:
#line 1981 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 846:
#line 1982 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 847:
#line 1984 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 848:
#line 1986 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 849:
#line 1988 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 850:
#line 1989 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 854:
#line 1995 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 855:
#line 1996 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 856:
#line 1997 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 857:
#line 1998 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 858:
#line 1999 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 859:
#line 2000 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 860:
#line 2001 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 861:
#line 2002 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 862:
#line 2003 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 863:
#line 2004 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 864:
#line 2006 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 865:
#line 2008 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 866:
#line 2009 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 867:
#line 2010 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 868:
#line 2011 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 869:
#line 2012 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 870:
#line 2014 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 871:
#line 2015 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 872:
#line 2016 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 873:
#line 2017 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 874:
#line 2018 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 875:
#line 2020 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 876:
#line 2021 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 877:
#line 2022 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 878:
#line 2023 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 879:
#line 2024 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 880:
#line 2025 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 881:
#line 2028 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 882:
#line 2029 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 883:
#line 2030 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 884:
#line 2031 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 885:
#line 2032 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 886:
#line 2033 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 887:
#line 2034 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 888:
#line 2035 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 889:
#line 2036 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 890:
#line 2037 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 891:
#line 2038 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 892:
#line 2039 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 893:
#line 2040 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 894:
#line 2041 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 895:
#line 2042 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 896:
#line 2043 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 897:
#line 2044 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 898:
#line 2045 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 899:
#line 2046 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 900:
#line 2047 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 901:
#line 2048 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 902:
#line 2051 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 903:
#line 2052 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 904:
#line 2053 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 905:
#line 2054 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 906:
#line 2055 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 907:
#line 2057 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 908:
#line 2067 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 909:
#line 2075 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 910:
#line 2084 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 911:
#line 2092 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 912:
#line 2099 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2106 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2114 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2122 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2127 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2132 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2137 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2142 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2147 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2152 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 922:
#line 2157 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 923:
#line 2166 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 924:
#line 2176 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 925:
#line 2186 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 926:
#line 2195 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 927:
#line 2203 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 928:
#line 2213 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 929:
#line 2223 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 930:
#line 2233 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 931:
#line 2245 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 932:
#line 2254 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 934:
#line 2262 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 935:
#line 2264 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 936:
#line 2266 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 937:
#line 2271 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 938:
#line 2274 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 939:
#line 2275 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 940:
#line 2276 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 941:
#line 2283 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 942:
#line 2285 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 943:
#line 2286 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 944:
#line 2289 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 945:
#line 2290 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 946:
#line 2291 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 947:
#line 2292 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 948:
#line 2293 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 949:
#line 2294 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 950:
#line 2295 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 952:
#line 2299 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 953:
#line 2300 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 954:
#line 2301 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 955:
#line 2302 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 956:
#line 2303 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 957:
#line 2306 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 958:
#line 2308 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 959:
#line 2310 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 960:
#line 2312 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 961:
#line 2314 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 962:
#line 2316 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 963:
#line 2318 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 964:
#line 2319 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 965:
#line 2320 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 966:
#line 2322 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 967:
#line 2324 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 968:
#line 2326 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 969:
#line 2328 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 970:
#line 2330 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 971:
#line 2331 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 972:
#line 2332 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 973:
#line 2334 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 974:
#line 2336 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 975:
#line 2339 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 976:
#line 2341 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 977:
#line 2343 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 978:
#line 2344 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 979:
#line 2345 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 980:
#line 2346 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 981:
#line 2348 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 982:
#line 2349 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 983:
#line 2350 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 984:
#line 2351 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 985:
#line 2352 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 986:
#line 2354 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 987:
#line 2356 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 988:
#line 2357 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 989:
#line 2359 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 990:
#line 2361 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 991:
#line 2363 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 992:
#line 2364 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 993:
#line 2366 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 994:
#line 2368 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 995:
#line 2369 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 996:
#line 2370 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 997:
#line 2371 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 998:
#line 2373 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 999:
#line 2375 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1000:
#line 2378 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1001:
#line 2381 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1002:
#line 2382 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1003:
#line 2383 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1004:
#line 2385 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1005:
#line 2388 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1006:
#line 2391 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1007:
#line 2392 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1008:
#line 2393 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1009:
#line 2394 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1010:
#line 2396 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1011:
#line 2398 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1012:
#line 2400 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1013:
#line 2401 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1014:
#line 2403 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1015:
#line 2404 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1016:
#line 2405 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1017:
#line 2406 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1018:
#line 2407 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1019:
#line 2409 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1020:
#line 2411 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1021:
#line 2413 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1022:
#line 2415 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1024:
#line 2417 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1025:
#line 2418 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1026:
#line 2420 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1027:
#line 2422 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1028:
#line 2423 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1029:
#line 2424 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1031:
#line 2426 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1033:
#line 2430 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1034:
#line 2431 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1035:
#line 2432 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1036:
#line 2433 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1037:
#line 2434 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1038:
#line 2435 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1039:
#line 2437 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1040:
#line 2438 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1041:
#line 2440 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1042:
#line 2443 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1043:
#line 2444 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1044:
#line 2445 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1045:
#line 2446 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1046:
#line 2449 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1047:
#line 2450 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1048:
#line 2453 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1049:
#line 2454 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1050:
#line 2457 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1051:
#line 2458 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1052:
#line 2461 "frame/parser.Y"
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

  case 1053:
#line 2474 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1054:
#line 2475 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1055:
#line 2479 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1056:
#line 2480 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1057:
#line 2484 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1058:
#line 2485 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1059:
#line 2490 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1060:
#line 2494 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1061:
#line 2499 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1062:
#line 2501 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1063:
#line 2504 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1064:
#line 2506 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1065:
#line 2509 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1066:
#line 2511 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1067:
#line 2514 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1068:
#line 2515 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1069:
#line 2516 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1070:
#line 2517 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1071:
#line 2518 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1072:
#line 2519 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1073:
#line 2521 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1076:
#line 2528 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1077:
#line 2529 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1078:
#line 2530 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1079:
#line 2531 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1080:
#line 2532 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1081:
#line 2533 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1084:
#line 2538 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1085:
#line 2539 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1086:
#line 2540 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1087:
#line 2541 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1088:
#line 2542 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1089:
#line 2543 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1090:
#line 2544 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1091:
#line 2545 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1092:
#line 2546 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1093:
#line 2547 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1094:
#line 2548 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1097:
#line 2555 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1098:
#line 2556 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1100:
#line 2560 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1101:
#line 2562 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1102:
#line 2563 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1103:
#line 2566 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1104:
#line 2567 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1105:
#line 2568 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1106:
#line 2569 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1107:
#line 2572 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1108:
#line 2573 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1111:
#line 2581 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1112:
#line 2584 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1113:
#line 2585 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1117:
#line 2592 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1118:
#line 2595 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1119:
#line 2599 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1120:
#line 2600 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1121:
#line 2601 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1122:
#line 2602 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1123:
#line 2603 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1124:
#line 2604 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1125:
#line 2605 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1126:
#line 2606 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1127:
#line 2612 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1128:
#line 2613 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1129:
#line 2614 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1130:
#line 2615 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1131:
#line 2619 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1132:
#line 2620 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1133:
#line 2622 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1134:
#line 2627 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1136:
#line 2629 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1138:
#line 2631 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1139:
#line 2634 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1140:
#line 2636 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1141:
#line 2641 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1142:
#line 2644 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1143:
#line 2645 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1144:
#line 2646 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1145:
#line 2649 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1146:
#line 2651 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1147:
#line 2655 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1148:
#line 2656 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1149:
#line 2660 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1150:
#line 2661 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1151:
#line 2662 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1152:
#line 2663 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1153:
#line 2669 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1154:
#line 2670 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1155:
#line 2676 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1156:
#line 2677 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1157:
#line 2678 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1158:
#line 2679 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1161:
#line 2687 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1162:
#line 2689 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1163:
#line 2690 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1164:
#line 2691 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1165:
#line 2695 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1166:
#line 2696 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1167:
#line 2697 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1168:
#line 2698 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1169:
#line 2701 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1170:
#line 2702 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1171:
#line 2705 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1172:
#line 2706 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1173:
#line 2707 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1174:
#line 2710 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1175:
#line 2711 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1176:
#line 2712 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1177:
#line 2715 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1178:
#line 2716 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1180:
#line 2718 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1181:
#line 2719 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1182:
#line 2722 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1183:
#line 2723 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1184:
#line 2724 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1189:
#line 2731 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1190:
#line 2735 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1191:
#line 2737 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1192:
#line 2739 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1194:
#line 2744 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1195:
#line 2746 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1196:
#line 2748 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1206:
#line 2761 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1207:
#line 2762 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1208:
#line 2763 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1209:
#line 2766 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1210:
#line 2767 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1211:
#line 2768 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1212:
#line 2771 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1213:
#line 2772 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1214:
#line 2773 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1215:
#line 2776 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1216:
#line 2777 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1217:
#line 2778 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1219:
#line 2782 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1220:
#line 2783 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1221:
#line 2784 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1222:
#line 2787 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1223:
#line 2788 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1224:
#line 2789 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1225:
#line 2792 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1226:
#line 2793 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1227:
#line 2794 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1228:
#line 2797 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1229:
#line 2798 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1230:
#line 2799 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1231:
#line 2802 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1232:
#line 2803 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1233:
#line 2804 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1234:
#line 2808 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1235:
#line 2810 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1236:
#line 2812 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1237:
#line 2816 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1238:
#line 2820 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1239:
#line 2822 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1240:
#line 2826 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1241:
#line 2829 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1242:
#line 2830 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1243:
#line 2831 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1244:
#line 2832 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1245:
#line 2835 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1246:
#line 2837 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1247:
#line 2838 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1248:
#line 2840 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1250:
#line 2844 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1251:
#line 2845 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1252:
#line 2846 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1253:
#line 2849 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1254:
#line 2850 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1255:
#line 2854 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1257:
#line 2856 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1260:
#line 2861 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1261:
#line 2862 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1262:
#line 2863 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1263:
#line 2866 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1264:
#line 2867 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1265:
#line 2868 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1266:
#line 2871 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1267:
#line 2873 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1268:
#line 2878 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1269:
#line 2881 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1270:
#line 2888 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1271:
#line 2890 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1272:
#line 2892 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1273:
#line 2897 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1275:
#line 2901 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1276:
#line 2902 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1277:
#line 2903 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1278:
#line 2905 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1279:
#line 2907 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1280:
#line 2912 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11030 "frame/parser.C"
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


#line 2916 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

