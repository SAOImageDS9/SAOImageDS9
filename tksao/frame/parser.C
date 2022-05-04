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
#define YYLAST   5420

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  359
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  221
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1281
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2820

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
     962,   966,   969,   970,   972,   974,   976,   980,   983,   986,
     989,   992,   995,   998,  1001,  1004,  1007,  1010,  1013,  1016,
    1019,  1022,  1024,  1027,  1030,  1033,  1038,  1042,  1045,  1048,
    1051,  1053,  1057,  1060,  1063,  1065,  1068,  1077,  1080,  1082,
    1085,  1087,  1090,  1092,  1097,  1101,  1104,  1106,  1114,  1123,
    1131,  1140,  1142,  1144,  1146,  1149,  1151,  1153,  1156,  1158,
    1159,  1162,  1165,  1167,  1168,  1171,  1174,  1176,  1178,  1181,
    1184,  1187,  1189,  1191,  1193,  1195,  1197,  1199,  1200,  1202,
    1205,  1207,  1212,  1218,  1219,  1222,  1224,  1230,  1233,  1236,
    1238,  1240,  1242,  1245,  1247,  1250,  1252,  1254,  1255,  1257,
    1259,  1260,  1262,  1268,  1275,  1279,  1286,  1290,  1292,  1296,
    1298,  1300,  1302,  1306,  1313,  1321,  1327,  1330,  1332,  1338,
    1344,  1346,  1350,  1351,  1353,  1356,  1358,  1363,  1365,  1368,
    1370,  1373,  1377,  1380,  1382,  1385,  1387,  1392,  1395,  1397,
    1399,  1403,  1405,  1408,  1412,  1415,  1416,  1418,  1420,  1425,
    1428,  1429,  1431,  1435,  1440,  1445,  1446,  1448,  1450,  1452,
    1454,  1456,  1458,  1460,  1462,  1464,  1466,  1468,  1470,  1472,
    1474,  1476,  1479,  1481,  1484,  1486,  1489,  1492,  1495,  1498,
    1500,  1502,  1504,  1505,  1507,  1508,  1510,  1511,  1513,  1514,
    1516,  1517,  1520,  1523,  1524,  1526,  1529,  1531,  1538,  1544,
    1546,  1548,  1550,  1553,  1556,  1559,  1561,  1563,  1565,  1567,
    1570,  1572,  1574,  1576,  1579,  1581,  1583,  1585,  1588,  1591,
    1594,  1595,  1597,  1598,  1600,  1602,  1604,  1606,  1608,  1610,
    1612,  1614,  1617,  1620,  1623,  1625,  1628,  1632,  1634,  1637,
    1640,  1645,  1652,  1654,  1665,  1667,  1670,  1674,  1678,  1681,
    1684,  1687,  1690,  1693,  1696,  1699,  1704,  1709,  1714,  1718,
    1722,  1728,  1733,  1738,  1743,  1747,  1751,  1755,  1759,  1762,
    1765,  1770,  1774,  1778,  1782,  1786,  1791,  1796,  1801,  1806,
    1812,  1817,  1824,  1832,  1837,  1842,  1848,  1851,  1855,  1859,
    1863,  1866,  1870,  1874,  1878,  1882,  1887,  1891,  1897,  1904,
    1908,  1912,  1917,  1921,  1925,  1929,  1933,  1937,  1943,  1947,
    1951,  1956,  1960,  1963,  1966,  1968,  1972,  1977,  1982,  1987,
    1992,  1997,  2004,  2009,  2014,  2020,  2025,  2030,  2035,  2040,
    2046,  2051,  2058,  2066,  2071,  2076,  2082,  2088,  2094,  2100,
    2106,  2112,  2120,  2126,  2132,  2139,  2144,  2149,  2154,  2159,
    2164,  2171,  2176,  2181,  2187,  2193,  2199,  2205,  2211,  2218,
    2224,  2232,  2241,  2247,  2253,  2260,  2264,  2268,  2272,  2276,
    2281,  2285,  2291,  2298,  2302,  2306,  2311,  2315,  2319,  2323,
    2327,  2331,  2337,  2341,  2345,  2350,  2355,  2360,  2364,  2370,
    2375,  2380,  2383,  2387,  2394,  2401,  2403,  2405,  2407,  2410,
    2413,  2416,  2420,  2424,  2427,  2440,  2443,  2446,  2448,  2452,
    2457,  2460,  2461,  2465,  2467,  2470,  2473,  2476,  2479,  2482,
    2487,  2492,  2497,  2501,  2506,  2512,  2521,  2528,  2533,  2543,
    2550,  2558,  2569,  2581,  2594,  2604,  2610,  2615,  2622,  2626,
    2632,  2638,  2645,  2651,  2656,  2666,  2677,  2689,  2699,  2706,
    2713,  2720,  2727,  2734,  2741,  2748,  2755,  2762,  2770,  2778,
    2781,  2786,  2791,  2796,  2801,  2807,  2812,  2817,  2823,  2829,
    2833,  2838,  2843,  2848,  2853,  2861,  2871,  2878,  2889,  2901,
    2914,  2924,  2928,  2931,  2935,  2941,  2949,  2954,  2958,  2962,
    2969,  2977,  2985,  2990,  2995,  3000,  3010,  3015,  3019,  3024,
    3032,  3040,  3043,  3047,  3051,  3055,  3060,  3063,  3066,  3071,
    3082,  3086,  3088,  3092,  3095,  3098,  3101,  3104,  3108,  3114,
    3119,  3125,  3128,  3131,  3134,  3137,  3141,  3144,  3147,  3150,
    3154,  3157,  3161,  3166,  3170,  3174,  3181,  3186,  3189,  3193,
    3196,  3199,  3204,  3208,  3212,  3215,  3219,  3221,  3224,  3226,
    3229,  3232,  3235,  3237,  3239,  3241,  3243,  3246,  3248,  3251,
    3254,  3256,  3259,  3262,  3264,  3267,  3269,  3271,  3273,  3275,
    3277,  3279,  3281,  3283,  3284,  3286,  3289,  3292,  3295,  3299,
    3305,  3313,  3321,  3328,  3335,  3342,  3349,  3355,  3362,  3369,
    3376,  3383,  3390,  3397,  3404,  3416,  3424,  3432,  3440,  3450,
    3460,  3471,  3484,  3497,  3500,  3503,  3507,  3512,  3517,  3522,
    3523,  3525,  3527,  3532,  3537,  3539,  3541,  3543,  3545,  3547,
    3549,  3551,  3553,  3556,  3558,  3560,  3562,  3566,  3570,  3579,
    3586,  3597,  3605,  3613,  3619,  3622,  3625,  3629,  3634,  3640,
    3644,  3650,  3656,  3660,  3665,  3671,  3677,  3683,  3687,  3693,
    3696,  3700,  3704,  3710,  3714,  3718,  3722,  3727,  3733,  3739,
    3743,  3749,  3755,  3759,  3764,  3770,  3776,  3779,  3782,  3786,
    3792,  3799,  3806,  3810,  3814,  3818,  3825,  3831,  3837,  3840,
    3844,  3848,  3854,  3861,  3865,  3868,  3871,  3875,  3878,  3882,
    3885,  3889,  3895,  3902,  3905,  3908,  3911,  3913,  3918,  3923,
    3925,  3928,  3931,  3934,  3937,  3940,  3943,  3946,  3950,  3953,
    3957,  3960,  3964,  3966,  3968,  3970,  3972,  3974,  3975,  3978,
    3979,  3982,  3983,  3985,  3986,  3987,  3989,  3991,  3993,  3995,
    3997,  4005,  4014,  4017,  4024,  4027,  4034,  4037,  4041,  4044,
    4046,  4048,  4052,  4056,  4058,  4063,  4066,  4068,  4072,  4076,
    4081,  4085,  4089,  4093,  4095,  4097,  4099,  4101,  4103,  4105,
    4107,  4109,  4111,  4113,  4115,  4117,  4119,  4121,  4124,  4125,
    4126,  4129,  4136,  4144,  4147,  4149,  4153,  4155,  4159,  4161,
    4164,  4167,  4169,  4173,  4174,  4175,  4178,  4181,  4183,  4187,
    4193,  4195,  4198,  4201,  4205,  4208,  4211,  4214,  4217,  4219,
    4221,  4223,  4225,  4230,  4233,  4237,  4241,  4244,  4248,  4251,
    4254,  4257,  4261,  4265,  4269,  4272,  4276,  4278,  4282,  4286,
    4288,  4291,  4294,  4297,  4300,  4310,  4317,  4319,  4321,  4323,
    4325,  4328,  4331,  4335,  4339,  4341,  4344,  4348,  4352,  4354,
    4357,  4359,  4361,  4363,  4365,  4367,  4370,  4373,  4378,  4380,
    4383,  4386,  4389,  4393,  4395,  4397,  4399,  4402,  4405,  4408,
    4411,  4414,  4418,  4422,  4426,  4430,  4434,  4438,  4442,  4444,
    4447,  4450,  4453,  4457,  4460,  4464,  4468,  4471,  4474,  4477,
    4480,  4483,  4486,  4489,  4492,  4495,  4498,  4501,  4504,  4507,
    4510,  4514,  4518,  4522,  4525,  4528,  4531,  4534,  4537,  4540,
    4543,  4546,  4549,  4552,  4555,  4558,  4562,  4566,  4570,  4575,
    4582,  4585,  4587,  4589,  4591,  4593,  4595,  4596,  4602,  4604,
    4611,  4615,  4617,  4620,  4623,  4626,  4630,  4634,  4637,  4640,
    4643,  4646,  4649,  4652,  4656,  4659,  4662,  4666,  4668,  4672,
    4677,  4679,  4682,  4688,  4695,  4702,  4705,  4707,  4710,  4713,
    4719,  4726
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
      32,    -1,   287,    -1,   188,    -1,   147,   119,     5,    -1,
      41,    67,    -1,    44,   427,    -1,    47,   429,    -1,    66,
     430,    -1,    69,   434,    -1,    68,   433,    -1,    70,   436,
      -1,    78,   438,    -1,    80,   441,    -1,    85,   442,    -1,
      87,   443,    -1,    89,   445,    -1,    88,   444,    -1,    95,
     446,    -1,    97,    -1,   126,   450,    -1,   144,   456,    -1,
     152,    67,    -1,   154,     5,     5,     4,    -1,   155,    90,
     425,    -1,   158,   448,    -1,   162,   447,    -1,   164,    16,
      -1,   191,    -1,   186,   516,   510,    -1,   187,   457,    -1,
     201,    67,    -1,   218,    -1,   219,   458,    -1,   226,   289,
     373,   361,   361,     4,     4,     5,    -1,   251,   459,    -1,
     253,    -1,   278,   460,    -1,   293,    -1,   294,   461,    -1,
     302,    -1,   309,   373,   361,   361,    -1,   315,    90,   426,
      -1,   317,   466,    -1,   354,    -1,     5,     5,   361,   361,
     373,     4,   422,    -1,     5,     5,   361,   361,   371,   378,
       4,   422,    -1,     5,     5,   361,   361,   373,     4,   422,
      -1,     5,     5,   361,   361,   371,   378,     4,   422,    -1,
     102,    -1,   120,    -1,   137,    -1,    54,   275,    -1,    89,
      -1,   124,    -1,    72,   428,    -1,   177,    -1,    -1,   191,
       5,    -1,   105,     5,    -1,   120,    -1,    -1,   413,   414,
      -1,   361,   414,    -1,   262,    -1,   197,    -1,   191,   431,
      -1,   308,   171,    -1,   353,   432,    -1,   236,    -1,   197,
      -1,   255,    -1,    79,    -1,   255,    -1,   175,    -1,    -1,
     290,    -1,   171,   435,    -1,     4,    -1,     4,   373,   361,
     361,    -1,     4,   361,   361,   376,   361,    -1,    -1,   171,
     437,    -1,   180,    -1,     4,   361,   361,   376,   361,    -1,
     371,   378,    -1,    66,   439,    -1,    67,    -1,    93,    -1,
     171,    -1,   212,   171,    -1,   190,    -1,    70,   440,    -1,
     278,    -1,   346,    -1,    -1,   197,    -1,   262,    -1,    -1,
     180,    -1,   361,   361,   371,   378,   379,    -1,   373,   361,
     361,   371,   378,   379,    -1,   371,   378,   379,    -1,    60,
     371,   378,   379,   371,   380,    -1,   294,   371,   378,    -1,
     373,    -1,   371,   378,   379,    -1,   286,    -1,    33,    -1,
     373,    -1,   371,   378,   379,    -1,   371,   378,   370,   361,
     361,     5,    -1,     4,   371,   378,   370,   361,   361,     5,
      -1,   373,   361,   361,     4,     4,    -1,     5,   364,    -1,
      66,    -1,   373,   361,   361,     5,   364,    -1,     6,     4,
       4,     4,     4,    -1,    89,    -1,   122,   200,   449,    -1,
      -1,     4,    -1,   361,   361,    -1,   203,    -1,    60,   371,
     378,   379,    -1,    82,    -1,   102,   453,    -1,    45,    -1,
     119,   451,    -1,   122,   200,   454,    -1,   149,   452,    -1,
     150,    -1,   213,   200,    -1,   275,    -1,   275,   371,   378,
     380,    -1,   276,   455,    -1,   346,    -1,     4,    -1,   373,
     361,   361,    -1,     4,    -1,   168,     5,    -1,     4,   168,
       5,    -1,   317,     4,    -1,    -1,     4,    -1,   364,    -1,
     364,   373,   361,   361,    -1,   364,     4,    -1,    -1,     4,
      -1,   134,   159,   371,    -1,   134,   159,     4,   371,    -1,
     298,   159,   361,   371,    -1,    -1,   217,    -1,   310,    -1,
      67,    -1,   185,    -1,   244,    -1,   288,    -1,   297,    -1,
      82,    -1,    46,    -1,   236,    -1,    62,    -1,   288,    -1,
     311,    -1,   137,    -1,   243,    -1,   243,   192,    -1,   273,
      -1,   273,   192,    -1,    21,    -1,   311,   465,    -1,    48,
     462,    -1,    75,   463,    -1,   152,   464,    -1,   190,    -1,
      37,    -1,   259,    -1,    -1,    67,    -1,    -1,    67,    -1,
      -1,    67,    -1,    -1,   229,    -1,    -1,    16,   467,    -1,
     200,   372,    -1,    -1,   230,    -1,    84,   469,    -1,   101,
      -1,   371,   378,   379,   470,     5,     5,    -1,   371,   378,
     379,   470,     5,    -1,    20,    -1,   239,    -1,    19,    -1,
      41,    67,    -1,    44,   472,    -1,    78,   473,    -1,    85,
      -1,    96,    -1,    97,    -1,   103,    -1,   126,   474,    -1,
     144,    -1,   158,    -1,   165,    -1,   186,   475,    -1,   225,
      -1,   159,    -1,   278,    -1,   288,   371,    -1,   317,   476,
      -1,    73,     5,    -1,    -1,    31,    -1,    -1,    44,    -1,
      88,    -1,   196,    -1,   152,    -1,   265,    -1,   222,    -1,
     303,    -1,   371,    -1,    59,   371,    -1,   117,   371,    -1,
     176,   371,    -1,    18,    -1,   294,   371,    -1,   204,     4,
       4,    -1,   118,    -1,   189,     5,    -1,    89,   479,    -1,
     266,   122,   200,   478,    -1,   266,     6,     4,     4,     4,
       4,    -1,   307,    -1,   317,   361,   361,   361,   361,   361,
     361,   361,   361,     4,    -1,     5,    -1,     5,     4,    -1,
       4,     4,    57,    -1,     4,     4,   371,    -1,   197,   363,
      -1,    26,   481,    -1,   114,   483,    -1,   126,   484,    -1,
     161,   497,    -1,   211,   495,    -1,   224,   496,    -1,     5,
      14,     5,   383,    -1,     5,    15,     5,   383,    -1,     5,
      62,     5,   383,    -1,     5,   194,   383,    -1,     5,   195,
     383,    -1,     5,   269,   381,     4,   383,    -1,     5,   279,
       4,   383,    -1,     5,   280,     4,   383,    -1,     5,   310,
       5,   383,    -1,   251,    88,   482,    -1,     5,    14,     5,
      -1,     5,    15,     5,    -1,     5,    62,     5,    -1,     5,
     194,    -1,     5,   195,    -1,     5,   269,   381,     4,    -1,
       5,   279,     4,    -1,     5,   280,     4,    -1,     5,   310,
       5,    -1,     5,     5,   277,    -1,     5,    14,     5,   383,
      -1,     5,    15,     5,   383,    -1,     5,    62,     5,   383,
      -1,     5,   194,   382,   383,    -1,     5,     5,   277,   382,
     383,    -1,     5,   195,   382,   383,    -1,     5,   269,   381,
       4,   382,   383,    -1,     5,   284,   381,     4,     4,   382,
     383,    -1,     5,   279,     4,   383,    -1,     5,   280,     4,
     383,    -1,     5,   310,     5,   382,   383,    -1,   276,   485,
      -1,   119,    88,   486,    -1,   251,   159,   494,    -1,   251,
      88,   493,    -1,   196,   487,    -1,     5,    14,     5,    -1,
       5,    15,     5,    -1,     5,    62,     5,    -1,     5,   194,
     382,    -1,     5,     5,   277,   382,    -1,     5,   195,   382,
      -1,     5,   269,   381,     4,   382,    -1,     5,   284,   381,
       4,     4,   382,    -1,     5,   279,     4,    -1,     5,   280,
       4,    -1,     5,   310,     5,   382,    -1,     5,    14,     5,
      -1,     5,    15,     5,    -1,     5,    62,     5,    -1,     5,
     194,   382,    -1,     5,   195,   382,    -1,     5,   269,   381,
       4,   382,    -1,     5,   279,     4,    -1,     5,   280,     4,
      -1,     5,   310,     5,   382,    -1,   159,   164,   488,    -1,
     164,   489,    -1,   159,   490,    -1,   492,    -1,   159,   345,
     491,    -1,     5,    14,     5,   383,    -1,     5,    15,     5,
     383,    -1,     5,    62,     5,   383,    -1,     5,   194,   382,
     383,    -1,     5,   195,   382,   383,    -1,     5,   269,   381,
       4,   382,   383,    -1,     5,   279,     4,   383,    -1,     5,
     280,     4,   383,    -1,     5,   310,     5,   382,   383,    -1,
       5,    14,     5,   383,    -1,     5,    15,     5,   383,    -1,
       5,    62,     5,   383,    -1,     5,   194,   382,   383,    -1,
       5,     5,   277,   382,   383,    -1,     5,   195,   382,   383,
      -1,     5,   269,   381,     4,   382,   383,    -1,     5,   284,
     381,     4,     4,   382,   383,    -1,     5,   279,     4,   383,
      -1,     5,   280,     4,   383,    -1,     5,   310,     5,   382,
     383,    -1,   372,     5,    14,     5,   383,    -1,   372,     5,
      15,     5,   383,    -1,   372,     5,    62,     5,   383,    -1,
     372,     5,   194,   382,   383,    -1,   372,     5,   195,   382,
     383,    -1,   372,     5,   269,   381,     4,   382,   383,    -1,
     372,     5,   279,     4,   383,    -1,   372,     5,   280,     4,
     383,    -1,   372,     5,   310,     5,   382,   383,    -1,     5,
      14,     5,   383,    -1,     5,    15,     5,   383,    -1,     5,
      62,     5,   383,    -1,     5,   194,   382,   383,    -1,     5,
     195,   382,   383,    -1,     5,   269,   381,     4,   382,   383,
      -1,     5,   279,     4,   383,    -1,     5,   280,     4,   383,
      -1,     5,   310,     5,   382,   383,    -1,   372,     5,    14,
       5,   383,    -1,   372,     5,    15,     5,   383,    -1,   372,
       5,    62,     5,   383,    -1,   372,     5,   194,   382,   383,
      -1,   372,     5,     5,   277,   382,   383,    -1,   372,     5,
     195,   382,   383,    -1,   372,     5,   269,   381,     4,   382,
     383,    -1,   372,     5,   284,   381,     4,     4,   382,   383,
      -1,   372,     5,   279,     4,   383,    -1,   372,     5,   280,
       4,   383,    -1,   372,     5,   310,     5,   382,   383,    -1,
       5,    14,     5,    -1,     5,    15,     5,    -1,     5,    62,
       5,    -1,     5,   194,   382,    -1,     5,     5,   277,   382,
      -1,     5,   195,   382,    -1,     5,   269,   381,     4,   382,
      -1,     5,   284,   381,     4,     4,   382,    -1,     5,   279,
       4,    -1,     5,   280,     4,    -1,     5,   310,     5,   382,
      -1,     5,    14,     5,    -1,     5,    15,     5,    -1,     5,
      62,     5,    -1,     5,   194,   382,    -1,     5,   195,   382,
      -1,     5,   269,   381,     4,   382,    -1,     5,   279,     4,
      -1,     5,   280,     4,    -1,     5,   310,     5,   382,    -1,
       5,    14,     5,   383,    -1,     5,    62,     5,   383,    -1,
       5,   194,   383,    -1,     5,   269,   381,     4,   383,    -1,
       5,   279,     4,   383,    -1,     5,   310,     5,   383,    -1,
       5,     5,    -1,   276,     5,     5,    -1,    95,     4,     4,
       4,     4,     4,    -1,   191,     4,     4,     4,     4,     4,
      -1,   113,    -1,   235,    -1,   363,    -1,   142,   363,    -1,
      89,   363,    -1,    67,     5,    -1,     5,     4,     4,    -1,
     307,   361,   361,    -1,   354,   361,    -1,     5,     5,   372,
     378,     5,     5,   372,   378,   361,   372,   380,     5,    -1,
      61,   504,    -1,    67,     5,    -1,    81,    -1,    74,   509,
       5,    -1,    74,   509,   310,     5,    -1,    76,   101,    -1,
      -1,    84,   502,   505,    -1,    90,    -1,   101,   507,    -1,
     107,   508,    -1,   116,     4,    -1,   131,     5,    -1,   152,
      17,    -1,   152,   216,   361,   361,    -1,   152,   299,   361,
     361,    -1,     4,    20,   386,   363,    -1,     4,    21,   366,
      -1,     4,    21,   366,   373,    -1,     4,    21,   366,   371,
     378,    -1,     4,    22,   243,   361,   361,     4,   371,   380,
      -1,     4,    22,   243,     5,   371,   380,    -1,     4,    49,
     123,   363,    -1,     4,    50,   243,   361,   361,   361,     4,
     371,   380,    -1,     4,    50,   243,     5,   371,   380,    -1,
       4,    49,   243,   361,   361,   371,   380,    -1,     4,    53,
     107,   366,   366,     4,   361,   361,   361,     4,    -1,     4,
      53,   107,   366,   366,     4,   361,   361,   361,     4,   373,
      -1,     4,    53,   107,   366,   366,     4,   361,   361,   361,
       4,   371,   378,    -1,     4,    53,   107,     5,     5,   371,
     378,   371,   380,    -1,     4,    56,   503,     5,     5,    -1,
       4,    63,   123,   363,    -1,     4,    63,   243,   361,   371,
     380,    -1,     4,    67,     5,    -1,     4,    75,    27,   363,
     363,    -1,     4,    75,   169,     5,     5,    -1,     4,    75,
     243,   361,   371,   380,    -1,     4,    75,   288,   371,   378,
      -1,     4,    76,   141,   363,    -1,     4,    83,   107,   366,
     366,     4,   361,   361,     4,    -1,     4,    83,   107,   366,
     366,     4,   361,   361,     4,   373,    -1,     4,    83,   107,
     366,   366,     4,   361,   361,     4,   371,   378,    -1,     4,
      83,   107,     5,     5,   371,   378,   371,   380,    -1,     4,
      84,    22,   243,   361,   361,    -1,     4,    84,    50,   243,
     361,   361,    -1,     4,    84,    53,    21,   361,   361,    -1,
       4,    84,    53,   243,   361,   361,    -1,     4,    84,   112,
     243,   361,   361,    -1,     4,    84,   115,    21,   361,   361,
      -1,     4,    84,   115,   243,   361,   361,    -1,     4,    84,
      83,    21,   361,   361,    -1,     4,    84,    83,   243,   361,
     361,    -1,     4,    84,   231,   314,     4,   361,   361,    -1,
       4,    84,   264,   314,     4,   361,   361,    -1,     4,   101,
      -1,     4,   101,    22,     4,    -1,     4,   101,    50,     4,
      -1,     4,   101,    53,     4,    -1,     4,   101,   112,     4,
      -1,     4,   101,    56,   503,     5,    -1,     4,   101,   115,
       4,    -1,     4,   101,    83,     4,    -1,     4,   101,   231,
     314,     4,    -1,     4,   101,   264,   314,     4,    -1,     4,
     101,   290,    -1,     4,   101,   290,     5,    -1,     4,   101,
     290,     4,    -1,     4,   107,    40,     4,    -1,     4,   111,
     123,   363,    -1,     4,   111,   243,   361,   361,   371,   380,
      -1,     4,   112,   243,   361,   361,   361,     4,   371,   380,
      -1,     4,   112,   243,     5,   371,   380,    -1,     4,   115,
     107,   366,   366,     4,   361,   361,   361,     4,    -1,     4,
     115,   107,   366,   366,     4,   361,   361,   361,     4,   373,
      -1,     4,   115,   107,   366,   366,     4,   361,   361,   361,
       4,   371,   378,    -1,     4,   115,   107,     5,     5,   371,
     378,   371,   380,    -1,     4,   131,     5,    -1,     4,   152,
      -1,     4,   152,   216,    -1,     4,   175,    27,   363,   363,
      -1,     4,   175,   229,   371,   378,   370,   370,    -1,     4,
     199,   361,   361,    -1,     4,   199,   135,    -1,     4,   199,
      36,    -1,     4,   199,   298,   371,   378,   370,    -1,     4,
     231,   249,   361,   361,   371,   380,    -1,     4,   264,   249,
     361,   361,   371,   380,    -1,     4,   229,   268,   384,    -1,
       4,   229,   275,     4,    -1,     4,   231,   123,   363,    -1,
       4,   237,   371,   378,   370,   370,   361,   371,   380,    -1,
       4,   238,   522,   363,    -1,     4,   253,    40,    -1,     4,
     254,   132,     5,    -1,     4,   254,   229,   371,   378,   370,
     370,    -1,     4,   254,   288,   371,   378,   371,   380,    -1,
       4,   265,    -1,     4,   265,   216,    -1,     4,   290,     5,
      -1,     4,   292,     5,    -1,     4,   292,   253,   363,    -1,
       4,   304,    -1,     4,   306,    -1,     4,   312,    27,   363,
      -1,     4,   312,   229,   371,   378,   370,   371,   380,   361,
     366,    -1,     4,   346,     4,    -1,   167,    -1,   167,   361,
     361,    -1,   177,   517,    -1,   178,   518,    -1,   199,   519,
      -1,   236,   363,    -1,   238,   522,   363,    -1,   238,   522,
     363,   361,   361,    -1,   253,    40,   361,   361,    -1,   253,
     198,   361,   361,     4,    -1,   253,   113,    -1,   258,   526,
      -1,   265,   527,    -1,   272,   528,    -1,     5,    67,     5,
      -1,     5,    81,    -1,     5,   101,    -1,     5,    90,    -1,
       5,   131,     5,    -1,     5,   152,    -1,     5,   152,   216,
      -1,     5,   199,   361,   361,    -1,     5,   199,   135,    -1,
       5,   199,    36,    -1,     5,   199,   298,   371,   378,   370,
      -1,     5,   238,   522,   363,    -1,     5,   265,    -1,     5,
     265,   216,    -1,     5,   304,    -1,     5,   306,    -1,   290,
     107,     5,     5,    -1,   290,   101,     5,    -1,   290,   101,
      17,    -1,   290,     5,    -1,   290,   307,     5,    -1,   222,
      -1,   222,   371,    -1,   303,    -1,   304,    17,    -1,   306,
      17,    -1,   346,     4,    -1,   265,    -1,   306,    -1,   152,
      -1,   304,    -1,    40,   199,    -1,   199,    -1,   113,   199,
      -1,    40,   107,    -1,   107,    -1,   113,   107,    -1,    40,
     253,    -1,   253,    -1,   113,   253,    -1,   101,    -1,   292,
      -1,    67,    -1,   346,    -1,   238,    -1,   131,    -1,   167,
      -1,   307,    -1,    -1,     4,    -1,    30,   363,    -1,   243,
     361,    -1,   163,     4,    -1,   217,     4,   361,    -1,    63,
     361,   361,   361,   523,    -1,   111,   361,   361,   361,   361,
     365,   523,    -1,    49,   361,   361,   361,   361,   365,   523,
      -1,   231,   361,   361,   361,   361,   523,    -1,   264,   361,
     361,   361,   361,   523,    -1,   175,   361,   361,   361,   361,
     523,    -1,   312,   361,   361,   361,   361,   523,    -1,   292,
     361,   361,   365,   523,    -1,    63,   229,   361,   361,   385,
     523,    -1,    49,   229,   361,   361,   385,   523,    -1,   104,
     229,   361,   361,   385,   523,    -1,    86,   229,   361,   361,
     385,   523,    -1,   357,   229,   361,   361,   385,   523,    -1,
      27,   229,   361,   361,   385,   523,    -1,    52,   229,   361,
     361,   385,   523,    -1,   254,   361,   361,   361,   361,   371,
     378,   371,   380,     5,   523,    -1,    75,   361,   361,   361,
     371,   378,   523,    -1,   237,   361,   361,   361,   361,   361,
     523,    -1,    22,   361,   361,   361,   361,     4,   523,    -1,
     112,   361,   361,   361,   361,   361,     4,   365,   523,    -1,
      50,   361,   361,   361,   361,   361,     4,   365,   523,    -1,
      83,   361,   361,   366,   366,     4,   361,   361,     4,   523,
      -1,   115,   361,   361,   366,   366,     4,   361,   361,   361,
       4,   365,   523,    -1,    53,   361,   361,   366,   366,     4,
     361,   361,   361,     4,   365,   523,    -1,    76,   523,    -1,
     291,   506,    -1,     5,   361,   361,    -1,   310,     5,   361,
     361,    -1,   361,   361,   310,     5,    -1,     5,   371,   378,
     370,    -1,    -1,   265,    -1,    17,    -1,    40,   361,   361,
       4,    -1,   198,   361,   361,     4,    -1,   113,    -1,   106,
      -1,   348,    -1,    64,    -1,   257,    -1,   256,    -1,   240,
      -1,   349,    -1,    61,   511,    -1,    67,    -1,   131,    -1,
     116,    -1,   146,   361,   361,    -1,   157,   361,   361,    -1,
       4,    20,    83,     5,     5,     5,   371,     4,    -1,     4,
      20,   154,     5,     5,     4,    -1,     4,    20,   227,     5,
       5,     5,     5,   371,   378,   387,    -1,     4,    20,   228,
       5,     5,   371,   387,    -1,     4,    20,   242,     5,     5,
       5,   371,    -1,     4,    20,   285,   371,   378,    -1,   157,
      17,    -1,     4,    21,    -1,     4,    21,   373,    -1,     4,
      21,   371,   378,    -1,     4,    22,   243,   371,   380,    -1,
       4,    49,   123,    -1,     4,    50,   243,   371,   380,    -1,
       4,    49,   243,   371,   380,    -1,     4,    53,    21,    -1,
       4,    53,    21,   373,    -1,     4,    53,    21,   371,   378,
      -1,     4,    53,   243,   371,   380,    -1,     4,    60,   371,
     378,   379,    -1,     4,    63,   123,    -1,     4,    63,   243,
     371,   380,    -1,     4,    67,    -1,     4,    75,    27,    -1,
       4,    75,   169,    -1,     4,    75,   243,   371,   380,    -1,
       4,    75,   288,    -1,     4,    76,   141,    -1,     4,    83,
      21,    -1,     4,    83,    21,   373,    -1,     4,    83,    21,
     371,   378,    -1,     4,    83,   243,   371,   380,    -1,     4,
     111,   123,    -1,     4,   111,   243,   371,   380,    -1,     4,
     112,   243,   371,   380,    -1,     4,   115,    21,    -1,     4,
     115,    21,   373,    -1,     4,   115,    21,   371,   378,    -1,
       4,   115,   243,   371,   380,    -1,     4,   131,    -1,     4,
     152,    -1,     4,   175,    27,    -1,     4,   175,   170,   371,
     380,    -1,     4,   175,   229,   371,   378,   379,    -1,     4,
     184,   170,   361,   371,   380,    -1,     4,   231,   123,    -1,
       4,   229,   268,    -1,     4,   229,   275,    -1,     4,   237,
     229,   371,   378,   379,    -1,     4,   237,   170,   371,   380,
      -1,     4,   237,   296,   371,   380,    -1,     4,   238,    -1,
       4,   238,   522,    -1,     4,   254,   132,    -1,     4,   254,
     170,   371,   380,    -1,     4,   254,   229,   371,   378,   379,
      -1,     4,   254,   288,    -1,     4,   265,    -1,     4,   290,
      -1,     4,   290,     4,    -1,     4,   292,    -1,     4,   292,
     253,    -1,     4,   302,    -1,     4,   312,    27,    -1,     4,
     312,   170,   371,   380,    -1,     4,   312,   229,   371,   378,
     379,    -1,     4,   346,    -1,   152,   512,    -1,   152,   212,
      -1,   212,    -1,   231,   264,   361,   361,    -1,   264,   264,
     361,   361,    -1,   236,    -1,   238,   522,    -1,   265,   513,
      -1,   265,   212,    -1,   272,   514,    -1,     5,    67,    -1,
       5,   131,    -1,     5,   157,    -1,     5,   238,   522,    -1,
       5,   290,    -1,     5,   290,   212,    -1,   290,    17,    -1,
     290,   100,   200,    -1,   346,    -1,    30,    -1,   243,    -1,
     163,    -1,   217,    -1,    -1,   361,   361,    -1,    -1,   361,
     361,    -1,    -1,   292,    -1,    -1,    -1,   230,    -1,   245,
      -1,   308,    -1,    58,    -1,   133,    -1,   509,   371,   378,
     379,   363,   524,   531,    -1,   265,   509,   371,   378,   379,
     363,   524,   531,    -1,   509,     5,    -1,   509,     5,     4,
       5,   371,   378,    -1,   509,     4,    -1,   509,     4,     4,
       5,   371,   378,    -1,   126,     5,    -1,   126,     5,     5,
      -1,   361,   361,    -1,   135,    -1,    36,    -1,    40,   361,
     361,    -1,   198,   361,   361,    -1,   113,    -1,   298,   371,
     378,   370,    -1,   520,   521,    -1,   521,    -1,   522,   358,
     363,    -1,    67,   358,     5,    -1,    94,   358,     4,     4,
      -1,   346,   358,     4,    -1,   131,   358,     5,    -1,   292,
     358,     5,    -1,   534,    -1,   535,    -1,   207,    -1,   265,
      -1,   152,    -1,    93,    -1,   128,    -1,   107,    -1,   199,
      -1,   253,    -1,   101,    -1,   160,    -1,   281,    -1,   515,
      -1,   515,   520,    -1,    -1,    -1,   525,   529,    -1,     5,
     509,   371,   378,   379,   363,    -1,   265,     5,   509,   371,
     378,   379,   363,    -1,   291,     5,    -1,    17,    -1,   216,
     361,   361,    -1,   299,    -1,   299,   361,   361,    -1,   363,
      -1,   292,   363,    -1,   529,   530,    -1,   530,    -1,   522,
     358,   363,    -1,    -1,    -1,   532,   533,    -1,   533,   534,
      -1,   534,    -1,   290,   358,     5,    -1,    56,   358,   503,
       5,     5,    -1,    65,    -1,    67,     5,    -1,   185,   374,
      -1,   244,   361,   361,    -1,   288,   371,    -1,   297,   361,
      -1,    46,   375,    -1,   185,     4,    -1,   357,    -1,   355,
      -1,   349,    -1,   207,    -1,   361,   361,   361,   361,    -1,
     361,   361,    -1,   373,   361,   361,    -1,   371,   378,   370,
      -1,   298,   539,    -1,    39,   361,   361,    -1,   198,   540,
      -1,   236,   363,    -1,   361,   361,    -1,   373,   361,   361,
      -1,   371,   378,   370,    -1,    40,   361,   361,    -1,   361,
     361,    -1,   113,   361,   361,    -1,   363,    -1,   317,   372,
     378,    -1,     5,     4,     4,    -1,   307,    -1,    71,   544,
      -1,   171,     4,    -1,   250,     4,    -1,   259,   361,    -1,
       4,     4,     4,     4,     4,     4,     4,     4,     4,    -1,
       4,     4,     4,     4,     4,     4,    -1,    55,    -1,   143,
      -1,   251,    -1,    91,    -1,   152,   546,    -1,   265,   547,
      -1,    40,   361,   361,    -1,   198,   361,   361,    -1,   113,
      -1,   270,   113,    -1,    40,   361,   361,    -1,   198,   361,
     361,    -1,   113,    -1,   270,   113,    -1,   193,    -1,    13,
      -1,   207,    -1,    34,    -1,   109,    -1,    62,     5,    -1,
     288,   371,    -1,   311,     4,     4,     4,    -1,   361,    -1,
     361,    99,    -1,   198,   552,    -1,   298,   361,    -1,   298,
     361,    99,    -1,    40,    -1,   361,    -1,   113,    -1,    26,
     554,    -1,   126,   556,    -1,   211,   566,    -1,   114,   567,
      -1,   224,     5,    -1,   122,     5,   388,    -1,    62,     5,
     388,    -1,   279,     4,   388,    -1,   251,    88,   555,    -1,
     122,     5,   388,    -1,    62,     5,   388,    -1,   279,     4,
     388,    -1,   557,    -1,   159,   557,    -1,   289,   558,    -1,
     276,   559,    -1,   119,    88,   560,    -1,   196,   561,    -1,
     251,   159,   563,    -1,   251,    88,   564,    -1,   247,   565,
      -1,   122,     5,    -1,    62,     5,    -1,   279,     4,    -1,
     122,     5,    -1,    62,     5,    -1,   279,     4,    -1,   122,
       5,    -1,    62,     5,    -1,   279,     4,    -1,   122,     5,
      -1,    62,     5,    -1,   279,     4,    -1,   159,   562,    -1,
     122,     5,     4,    -1,    62,     5,     4,    -1,   279,     4,
       4,    -1,   122,     5,    -1,    62,     5,    -1,   279,     4,
      -1,   122,     5,    -1,    62,     5,    -1,   279,     4,    -1,
     122,     5,    -1,    62,     5,    -1,   279,     4,    -1,   122,
       5,    -1,    62,     5,    -1,   279,     4,    -1,   122,     5,
     388,    -1,    62,     5,   388,    -1,   279,     4,   388,    -1,
     122,     5,     5,   388,    -1,   569,     4,     4,   361,   361,
     366,    -1,   569,     4,    -1,   101,    -1,    51,    -1,   300,
      -1,   139,    -1,   110,    -1,    -1,     4,   361,   361,   361,
     361,    -1,   210,    -1,   210,     4,   361,   361,   361,   361,
      -1,   126,   276,   571,    -1,     4,    -1,     4,     4,    -1,
     361,   371,    -1,   361,   361,    -1,   298,   361,   361,    -1,
     372,   378,   379,    -1,    16,   576,    -1,   249,     4,    -1,
     246,   575,    -1,    23,   574,    -1,     4,     4,    -1,     4,
       5,    -1,   292,     4,     5,    -1,     4,     4,    -1,     4,
       5,    -1,   292,     4,     5,    -1,     4,    -1,     4,   372,
     378,    -1,     4,     6,   372,   378,    -1,   235,    -1,   361,
     361,    -1,   361,   361,    12,   361,   361,    -1,   361,   361,
      12,   373,   361,   361,    -1,   361,   361,    12,   371,   378,
     370,    -1,   298,   579,    -1,   125,    -1,   125,   361,    -1,
     361,   361,    -1,   361,   361,    12,   361,   361,    -1,   361,
     361,    12,   373,   361,   361,    -1,   361,   361,    12,   371,
     378,   370,    -1
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
     999,  1003,  1006,  1007,  1008,  1009,  1012,  1015,  1016,  1017,
    1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,  1026,  1027,
    1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,
    1038,  1039,  1040,  1041,  1042,  1043,  1044,  1046,  1047,  1048,
    1049,  1050,  1051,  1052,  1054,  1055,  1056,  1059,  1061,  1065,
    1067,  1071,  1072,  1073,  1074,  1075,  1076,  1077,  1078,  1081,
    1082,  1083,  1086,  1089,  1090,  1092,  1094,  1095,  1096,  1097,
    1098,  1099,  1106,  1107,  1110,  1111,  1112,  1115,  1116,  1119,
    1122,  1123,  1125,  1129,  1130,  1131,  1134,  1138,  1140,  1141,
    1142,  1143,  1144,  1145,  1146,  1147,  1148,  1151,  1152,  1153,
    1156,  1157,  1160,  1162,  1170,  1172,  1174,  1178,  1179,  1181,
    1184,  1187,  1188,  1192,  1194,  1197,  1202,  1203,  1204,  1208,
    1209,  1210,  1213,  1214,  1215,  1218,  1219,  1221,  1222,  1223,
    1224,  1225,  1226,  1227,  1228,  1229,  1230,  1232,  1233,  1236,
    1237,  1240,  1241,  1242,  1243,  1246,  1247,  1250,  1252,  1255,
    1259,  1260,  1261,  1263,  1265,  1269,  1270,  1271,  1274,  1275,
    1276,  1277,  1278,  1279,  1280,  1283,  1286,  1287,  1288,  1291,
    1292,  1293,  1294,  1295,  1296,  1299,  1300,  1301,  1302,  1303,
    1304,  1305,  1308,  1309,  1312,  1313,  1316,  1317,  1320,  1321,
    1324,  1325,  1326,  1329,  1330,  1333,  1334,  1337,  1340,  1348,
    1349,  1352,  1353,  1354,  1355,  1356,  1357,  1358,  1359,  1360,
    1361,  1362,  1363,  1364,  1365,  1366,  1367,  1368,  1369,  1372,
    1375,  1376,  1379,  1380,  1381,  1382,  1385,  1386,  1387,  1388,
    1391,  1392,  1393,  1394,  1395,  1396,  1399,  1400,  1401,  1402,
    1403,  1404,  1406,  1407,  1412,  1413,  1416,  1418,  1420,  1423,
    1424,  1425,  1426,  1427,  1428,  1431,  1433,  1435,  1437,  1438,
    1440,  1442,  1444,  1446,  1448,  1451,  1452,  1453,  1454,  1455,
    1456,  1458,  1459,  1460,  1463,  1466,  1468,  1470,  1472,  1474,
    1476,  1478,  1480,  1483,  1485,  1487,  1489,  1490,  1491,  1492,
    1493,  1496,  1497,  1498,  1499,  1500,  1501,  1502,  1504,  1506,
    1507,  1508,  1511,  1512,  1513,  1514,  1515,  1516,  1518,  1519,
    1520,  1523,  1524,  1525,  1526,  1527,  1530,  1533,  1536,  1539,
    1542,  1545,  1548,  1551,  1554,  1559,  1562,  1565,  1568,  1571,
    1574,  1577,  1580,  1583,  1586,  1589,  1594,  1597,  1600,  1603,
    1606,  1609,  1612,  1615,  1618,  1623,  1625,  1627,  1629,  1631,
    1633,  1638,  1640,  1642,  1646,  1649,  1652,  1655,  1658,  1661,
    1664,  1667,  1670,  1673,  1676,  1681,  1682,  1683,  1684,  1685,
    1686,  1687,  1689,  1691,  1692,  1693,  1696,  1697,  1698,  1699,
    1700,  1701,  1703,  1704,  1705,  1708,  1710,  1712,  1713,  1715,
    1717,  1721,  1722,  1725,  1726,  1727,  1730,  1733,  1734,  1735,
    1736,  1737,  1738,  1739,  1742,  1750,  1751,  1752,  1753,  1755,
    1757,  1758,  1758,  1759,  1760,  1761,  1762,  1763,  1765,  1766,
    1768,  1771,  1774,  1775,  1776,  1779,  1782,  1785,  1786,  1790,
    1793,  1796,  1799,  1803,  1808,  1813,  1815,  1816,  1818,  1819,
    1821,  1823,  1825,  1827,  1828,  1830,  1832,  1836,  1841,  1843,
    1845,  1847,  1849,  1851,  1853,  1855,  1857,  1859,  1861,  1864,
    1865,  1867,  1869,  1870,  1872,  1874,  1875,  1876,  1878,  1880,
    1881,  1882,  1884,  1885,  1886,  1889,  1893,  1896,  1899,  1903,
    1908,  1914,  1915,  1916,  1918,  1919,  1923,  1925,  1926,  1927,
    1930,  1933,  1936,  1938,  1940,  1941,  1946,  1949,  1950,  1951,
    1954,  1958,  1959,  1961,  1962,  1963,  1965,  1966,  1968,  1969,
    1974,  1976,  1977,  1979,  1980,  1981,  1982,  1983,  1984,  1986,
    1988,  1990,  1991,  1992,  1994,  1996,  1997,  1998,  1999,  2000,
    2001,  2002,  2003,  2004,  2005,  2006,  2008,  2010,  2011,  2012,
    2013,  2015,  2016,  2017,  2018,  2019,  2021,  2022,  2023,  2024,
    2025,  2026,  2029,  2030,  2031,  2032,  2033,  2034,  2035,  2036,
    2037,  2038,  2039,  2040,  2041,  2042,  2043,  2044,  2045,  2046,
    2047,  2048,  2049,  2052,  2053,  2054,  2055,  2056,  2057,  2065,
    2072,  2081,  2090,  2097,  2104,  2112,  2120,  2127,  2132,  2137,
    2142,  2147,  2152,  2157,  2163,  2173,  2183,  2193,  2200,  2210,
    2220,  2229,  2241,  2254,  2259,  2262,  2264,  2266,  2271,  2275,
    2276,  2277,  2283,  2285,  2287,  2290,  2291,  2292,  2293,  2294,
    2295,  2296,  2299,  2300,  2301,  2302,  2303,  2304,  2306,  2308,
    2310,  2312,  2314,  2316,  2319,  2320,  2321,  2322,  2324,  2327,
    2328,  2330,  2332,  2333,  2334,  2336,  2339,  2342,  2343,  2345,
    2346,  2347,  2348,  2350,  2351,  2352,  2353,  2354,  2356,  2358,
    2359,  2361,  2364,  2365,  2366,  2368,  2370,  2371,  2372,  2373,
    2375,  2378,  2382,  2383,  2384,  2385,  2388,  2391,  2393,  2394,
    2395,  2396,  2398,  2401,  2402,  2404,  2405,  2406,  2407,  2408,
    2410,  2411,  2413,  2416,  2417,  2418,  2419,  2420,  2422,  2424,
    2425,  2426,  2427,  2429,  2431,  2432,  2433,  2434,  2435,  2436,
    2438,  2439,  2441,  2444,  2445,  2446,  2447,  2450,  2451,  2454,
    2455,  2458,  2459,  2462,  2475,  2476,  2480,  2481,  2485,  2486,
    2489,  2493,  2499,  2501,  2504,  2506,  2509,  2511,  2515,  2516,
    2517,  2518,  2519,  2520,  2521,  2525,  2526,  2529,  2530,  2531,
    2532,  2533,  2534,  2535,  2536,  2539,  2540,  2541,  2542,  2543,
    2544,  2545,  2546,  2547,  2548,  2549,  2552,  2553,  2556,  2557,
    2557,  2560,  2562,  2564,  2567,  2568,  2569,  2570,  2573,  2574,
    2577,  2578,  2581,  2585,  2586,  2586,  2589,  2590,  2593,  2596,
    2600,  2601,  2602,  2603,  2604,  2605,  2606,  2607,  2613,  2614,
    2615,  2616,  2619,  2621,  2622,  2627,  2629,  2630,  2631,  2632,
    2635,  2636,  2641,  2645,  2646,  2647,  2650,  2651,  2656,  2657,
    2660,  2662,  2663,  2664,  2669,  2671,  2677,  2678,  2679,  2680,
    2683,  2684,  2687,  2689,  2691,  2692,  2695,  2697,  2698,  2699,
    2702,  2703,  2706,  2707,  2708,  2711,  2712,  2713,  2716,  2717,
    2718,  2719,  2720,  2723,  2724,  2725,  2728,  2729,  2730,  2731,
    2732,  2735,  2737,  2739,  2741,  2744,  2746,  2748,  2751,  2752,
    2753,  2754,  2755,  2756,  2757,  2758,  2759,  2762,  2763,  2764,
    2767,  2768,  2769,  2772,  2773,  2774,  2777,  2778,  2779,  2782,
    2783,  2784,  2785,  2788,  2789,  2790,  2793,  2794,  2795,  2798,
    2799,  2800,  2803,  2804,  2805,  2808,  2810,  2812,  2816,  2820,
    2822,  2827,  2830,  2831,  2832,  2833,  2836,  2837,  2839,  2840,
    2842,  2845,  2846,  2847,  2850,  2851,  2854,  2856,  2857,  2858,
    2859,  2862,  2863,  2864,  2867,  2868,  2869,  2872,  2873,  2878,
    2882,  2889,  2890,  2892,  2897,  2899,  2902,  2903,  2904,  2905,
    2907,  2912
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
     420,   421,   422,   422,   422,   422,   423,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   425,   425,   426,
     426,   427,   427,   427,   427,   427,   427,   427,   427,   428,
     428,   428,   429,   430,   430,   430,   430,   430,   430,   430,
     430,   430,   431,   431,   432,   432,   432,   433,   433,   434,
     435,   435,   435,   436,   436,   436,   437,   438,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   439,   439,   439,
     440,   440,   441,   441,   442,   442,   442,   443,   443,   443,
     444,   445,   445,   446,   446,   446,   447,   447,   447,   448,
     448,   448,   449,   449,   449,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   451,
     451,   452,   452,   452,   452,   453,   453,   454,   454,   454,
     455,   455,   455,   455,   455,   456,   456,   456,   457,   457,
     457,   457,   457,   457,   457,   458,   459,   459,   459,   460,
     460,   460,   460,   460,   460,   461,   461,   461,   461,   461,
     461,   461,   462,   462,   463,   463,   464,   464,   465,   465,
     466,   466,   466,   467,   467,   468,   468,   469,   469,   470,
     470,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   472,
     473,   473,   474,   474,   474,   474,   475,   475,   475,   475,
     476,   476,   476,   476,   476,   476,   477,   477,   477,   477,
     477,   477,   477,   477,   478,   478,   479,   479,   479,   480,
     480,   480,   480,   480,   480,   481,   481,   481,   481,   481,
     481,   481,   481,   481,   481,   482,   482,   482,   482,   482,
     482,   482,   482,   482,   483,   484,   484,   484,   484,   484,
     484,   484,   484,   484,   484,   484,   484,   484,   484,   484,
     484,   485,   485,   485,   485,   485,   485,   485,   485,   485,
     485,   485,   486,   486,   486,   486,   486,   486,   486,   486,
     486,   487,   487,   487,   487,   487,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   492,   492,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   495,   495,   495,   495,   495,
     495,   496,   496,   497,   497,   497,   498,   499,   499,   499,
     499,   499,   499,   499,   500,   501,   501,   501,   501,   501,
     501,   502,   501,   501,   501,   501,   501,   501,   501,   501,
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
     501,   501,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   503,   504,   504,   504,   504,   504,   504,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   506,   506,   506,   506,   507,
     507,   507,   508,   508,   508,   509,   509,   509,   509,   509,
     509,   509,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   511,   511,   511,   511,   512,   512,   513,
     513,   514,   514,   515,   516,   516,   516,   516,   516,   516,
     517,   517,   518,   518,   518,   518,   518,   518,   519,   519,
     519,   519,   519,   519,   519,   520,   520,   521,   521,   521,
     521,   521,   521,   521,   521,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   523,   523,   524,   525,
     524,   526,   526,   526,   527,   527,   527,   527,   528,   528,
     529,   529,   530,   531,   532,   531,   533,   533,   534,   535,
     536,   536,   536,   536,   536,   536,   536,   536,   537,   537,
     537,   537,   538,   538,   538,   538,   538,   538,   538,   538,
     539,   539,   539,   540,   540,   540,   541,   541,   541,   541,
     542,   542,   542,   542,   543,   543,   544,   544,   544,   544,
     545,   545,   546,   546,   546,   546,   547,   547,   547,   547,
     548,   548,   549,   549,   549,   550,   550,   550,   551,   551,
     551,   551,   551,   552,   552,   552,   553,   553,   553,   553,
     553,   554,   554,   554,   554,   555,   555,   555,   556,   556,
     556,   556,   556,   556,   556,   556,   556,   557,   557,   557,
     558,   558,   558,   559,   559,   559,   560,   560,   560,   561,
     561,   561,   561,   562,   562,   562,   563,   563,   563,   564,
     564,   564,   565,   565,   565,   566,   566,   566,   567,   568,
     568,   568,   569,   569,   569,   569,   570,   570,   570,   570,
     570,   571,   571,   571,   572,   572,   573,   573,   573,   573,
     573,   574,   574,   574,   575,   575,   575,   576,   576,   576,
     577,   578,   578,   578,   578,   578,   579,   579,   579,   579,
     579,   579
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
       3,     2,     0,     1,     1,     1,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     2,     2,     2,     4,     3,     2,     2,     2,
       1,     3,     2,     2,     1,     2,     8,     2,     1,     2,
       1,     2,     1,     4,     3,     2,     1,     7,     8,     7,
       8,     1,     1,     1,     2,     1,     1,     2,     1,     0,
       2,     2,     1,     0,     2,     2,     1,     1,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     0,     1,     2,
       1,     4,     5,     0,     2,     1,     5,     2,     2,     1,
       1,     1,     2,     1,     2,     1,     1,     0,     1,     1,
       0,     1,     5,     6,     3,     6,     3,     1,     3,     1,
       1,     1,     3,     6,     7,     5,     2,     1,     5,     5,
       1,     3,     0,     1,     2,     1,     4,     1,     2,     1,
       2,     3,     2,     1,     2,     1,     4,     2,     1,     1,
       3,     1,     2,     3,     2,     0,     1,     1,     4,     2,
       0,     1,     3,     4,     4,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     1,     2,     2,     2,     2,     1,
       1,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     2,     2,     0,     1,     2,     1,     6,     5,     1,
       1,     1,     2,     2,     2,     1,     1,     1,     1,     2,
       1,     1,     1,     2,     1,     1,     1,     2,     2,     2,
       0,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     1,     2,     3,     1,     2,     2,
       4,     6,     1,    10,     1,     2,     3,     3,     2,     2,
       2,     2,     2,     2,     2,     4,     4,     4,     3,     3,
       5,     4,     4,     4,     3,     3,     3,     3,     2,     2,
       4,     3,     3,     3,     3,     4,     4,     4,     4,     5,
       4,     6,     7,     4,     4,     5,     2,     3,     3,     3,
       2,     3,     3,     3,     3,     4,     3,     5,     6,     3,
       3,     4,     3,     3,     3,     3,     3,     5,     3,     3,
       4,     3,     2,     2,     1,     3,     4,     4,     4,     4,
       4,     6,     4,     4,     5,     4,     4,     4,     4,     5,
       4,     6,     7,     4,     4,     5,     5,     5,     5,     5,
       5,     7,     5,     5,     6,     4,     4,     4,     4,     4,
       6,     4,     4,     5,     5,     5,     5,     5,     6,     5,
       7,     8,     5,     5,     6,     3,     3,     3,     3,     4,
       3,     5,     6,     3,     3,     4,     3,     3,     3,     3,
       3,     5,     3,     3,     4,     4,     4,     3,     5,     4,
       4,     2,     3,     6,     6,     1,     1,     1,     2,     2,
       2,     3,     3,     2,    12,     2,     2,     1,     3,     4,
       2,     0,     3,     1,     2,     2,     2,     2,     2,     4,
       4,     4,     3,     4,     5,     8,     6,     4,     9,     6,
       7,    10,    11,    12,     9,     5,     4,     6,     3,     5,
       5,     6,     5,     4,     9,    10,    11,     9,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     7,     7,     2,
       4,     4,     4,     4,     5,     4,     4,     5,     5,     3,
       4,     4,     4,     4,     7,     9,     6,    10,    11,    12,
       9,     3,     2,     3,     5,     7,     4,     3,     3,     6,
       7,     7,     4,     4,     4,     9,     4,     3,     4,     7,
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
      10,     7,     7,     5,     2,     2,     3,     4,     5,     3,
       5,     5,     3,     4,     5,     5,     5,     3,     5,     2,
       3,     3,     5,     3,     3,     3,     4,     5,     5,     3,
       5,     5,     3,     4,     5,     5,     2,     2,     3,     5,
       6,     6,     3,     3,     3,     6,     5,     5,     2,     3,
       3,     5,     6,     3,     2,     2,     3,     2,     3,     2,
       3,     5,     6,     2,     2,     2,     1,     4,     4,     1,
       2,     2,     2,     2,     2,     2,     2,     3,     2,     3,
       2,     3,     1,     1,     1,     1,     1,     0,     2,     0,
       2,     0,     1,     0,     0,     1,     1,     1,     1,     1,
       7,     8,     2,     6,     2,     6,     2,     3,     2,     1,
       1,     3,     3,     1,     4,     2,     1,     3,     3,     4,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     0,     0,
       2,     6,     7,     2,     1,     3,     1,     3,     1,     2,
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
       1,     2,     5,     6,     6,     2,     1,     2,     2,     5,
       6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     8,     9,     0,     0,     0,     0,
       0,   311,     0,     0,     0,     0,     0,     0,     0,     0,
      23,     0,     0,     0,     0,     0,     0,     0,  1054,     0,
       0,     0,     0,     0,     0,     0,     0,  1054,    41,     0,
       0,     0,    46,     0,     0,     0,    50,  1246,    52,     0,
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
       0,     0,     2,     0,    19,     0,     0,     0,   393,   407,
       0,   413,     0,     0,     0,     0,     0,     0,     0,   351,
       0,   485,     0,     0,     0,     0,     0,     0,  1054,     0,
     360,     0,   364,     0,     0,     0,   368,     0,   370,     0,
     372,     0,     0,   520,   376,    20,     0,   526,    21,   531,
       0,     0,   550,   535,   536,   537,   538,   552,   540,   541,
     545,   542,     0,   544,   546,     0,     0,    22,     0,    24,
       0,   567,     0,     0,     0,   572,     0,    26,     0,     0,
       0,     0,     0,     0,     0,    28,   726,    29,     0,     0,
       0,     0,     0,     0,   727,    30,     0,    31,  1058,  1059,
    1055,  1056,  1057,     0,   138,  1120,     0,   132,     0,     0,
       0,    33,     0,  1131,  1130,  1129,  1128,    35,     0,     0,
       0,     0,     0,   156,     0,    36,     0,  1149,     0,  1146,
      37,     0,     0,     0,     0,    40,     0,    39,    38,     0,
       0,     0,     0,    43,     0,     0,  1178,    44,     0,     0,
       0,     0,     0,    45,  1242,  1241,  1245,  1244,  1243,    47,
       0,    48,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,  1248,    51,     0,     0,    53,     0,     0,
       0,     0,   156,    54,  1270,    55,     0,     0,    56,     1,
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
      61,    62,    63,    70,    64,     0,   337,     0,   389,   385,
     381,   382,   386,   383,   388,   338,   392,   339,   299,   397,
     401,   396,   302,   301,   300,     0,     0,   340,   408,   342,
       0,   341,     0,   415,   343,   427,   419,   430,   420,   421,
     423,     0,   425,   426,   156,   344,     0,     0,   345,     0,
       0,   156,   346,   439,   156,   437,   347,   440,   349,   156,
     441,   348,     0,   156,     0,   350,   459,     0,   457,   475,
       0,     0,     0,   463,   455,     0,   465,   480,   468,   352,
     486,   487,   353,   354,     0,     0,     0,   450,     0,   357,
      80,   447,     0,   358,   359,     0,   494,   488,   493,   489,
     490,   491,   492,   362,   363,   495,   365,     0,   496,   497,
     498,   367,   504,   499,   500,   502,   369,   510,   512,   514,
     516,   509,   511,   518,   371,     0,     0,   523,     0,   375,
     156,   525,   532,     0,   533,   551,   534,   553,   554,   555,
     539,   556,   558,   557,   559,   543,   547,   564,     0,     0,
       0,     0,   560,   548,    25,     0,     0,   569,   568,     0,
       0,     0,     0,    27,     0,     0,   579,     0,   580,     0,
       0,     0,     0,     0,   581,     0,   725,     0,   582,     0,
     583,     0,     0,   584,     0,   730,   729,   728,     0,   733,
       0,     0,     0,   903,     0,     0,     0,   737,   741,   743,
     939,     0,     0,     0,     0,   841,     0,     0,     0,   876,
       0,     0,     0,     0,     0,     0,     0,   878,     0,     0,
       0,    32,   141,   142,   140,   139,  1126,  1121,  1127,   135,
     136,   134,   137,   133,  1122,     0,  1124,  1125,    34,     0,
       0,     0,     0,  1138,  1139,     0,   156,     0,  1136,  1133,
       0,     0,     0,   156,  1156,  1159,  1157,  1158,  1150,  1151,
    1152,  1153,     0,     0,     0,    42,  1175,  1176,     0,  1183,
    1185,  1184,  1180,  1181,  1179,     0,     0,     0,     0,  1186,
       0,  1189,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1187,  1198,     0,     0,     0,  1188,  1190,  1240,
    1173,  1174,  1172,   211,     0,   214,   207,     0,   216,   208,
       0,   218,   209,  1171,  1170,   210,   212,   213,     0,     0,
     206,     0,     0,     0,     0,  1254,  1267,  1257,     0,     0,
    1260,     0,     0,  1259,  1258,   164,  1276,     0,  1275,  1271,
     231,   227,     0,   236,     0,   233,     0,   252,   151,   154,
     155,   153,   152,   267,   268,   269,   257,   256,   272,   274,
     273,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     156,     0,   315,    96,    93,    94,    95,   156,   317,   316,
       0,     0,     0,     0,     0,     0,     0,   330,     0,   326,
     324,   323,   336,   384,     0,     0,   387,   402,   403,   398,
     399,   404,   406,   405,   400,   303,   304,   395,   394,   410,
     409,     0,   414,   428,   429,   418,   431,   424,   422,   417,
       0,     0,   156,   156,   164,   164,   164,   156,     0,     0,
     156,   476,   458,   469,     0,   460,    80,   471,     0,     0,
     462,   464,   156,   481,     0,     0,   467,     0,     0,   356,
       0,   452,    84,    83,   446,     0,     0,     0,     0,   953,
     955,   954,     0,  1047,     0,  1026,     0,  1029,     0,     0,
    1049,  1051,     0,  1042,   361,     0,   501,   503,   513,   506,
     515,   507,   517,   508,   519,   505,     0,     0,   374,   524,
     521,   522,   164,   549,   561,   562,   563,   565,     0,   578,
     566,     0,     0,     0,     0,     0,     0,   177,   177,   171,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   174,
     174,   171,     0,     0,   171,     0,     0,     0,     0,     0,
     620,   644,     0,     0,     0,   616,     0,     0,     0,     0,
     177,   171,     0,     0,   721,     0,   731,   732,   156,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   789,     0,     0,     0,     0,     0,   812,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   831,     0,
       0,   836,   837,     0,     0,     0,   856,   858,   857,     0,
     860,     0,     0,   867,   869,   870,   904,     0,     0,     0,
       0,   735,   736,   947,   945,   950,   949,   948,   946,   951,
       0,   740,     0,   941,   940,   744,     0,   944,     0,   745,
     746,   747,   748,     0,     0,     0,     0,     0,   843,     0,
       0,   844,  1070,     0,  1073,  1069,     0,     0,     0,   845,
     877,   846,  1088,  1093,  1090,  1089,  1087,  1094,  1091,  1085,
    1092,  1086,  1095,     0,     0,   851,     0,     0,     0,     0,
     852,  1104,     0,  1106,   853,     0,  1108,   854,   874,     0,
       0,     0,   879,   880,   881,  1123,  1137,     0,     0,  1144,
    1140,     0,     0,     0,  1135,  1134,  1148,  1147,     0,     0,
    1164,     0,     0,  1160,     0,  1168,     0,     0,  1161,     0,
    1182,   200,   200,     0,   200,     0,  1208,     0,  1207,  1199,
       0,     0,     0,     0,  1203,     0,     0,     0,  1206,     0,
       0,     0,     0,     0,  1201,  1209,     0,     0,     0,  1200,
     200,   200,   200,     0,   215,   217,   219,     0,   220,     0,
      58,     0,  1250,     0,  1255,     0,   156,  1261,  1262,     0,
    1264,  1265,     0,   165,   166,  1256,  1277,  1278,     0,   223,
       0,   237,     0,     0,     0,     0,   271,     0,     0,     0,
       0,     0,     0,     0,     0,   309,   156,     0,     0,     0,
       0,   156,     0,   329,     0,   328,   391,   390,     0,     0,
       0,   156,     0,   164,   436,   434,   438,   442,     0,     0,
       0,   164,     0,   477,   461,     0,   472,   474,   167,     0,
       0,   355,     0,     0,    58,     0,   451,    82,    81,     0,
       0,   965,     0,     0,     0,     0,     0,     0,   979,     0,
       0,     0,     0,     0,     0,   996,   997,     0,     0,     0,
       0,     0,  1008,     0,  1014,  1015,  1017,  1019,     0,  1023,
    1034,  1035,  1036,     0,  1038,  1043,  1045,  1046,  1044,   952,
       0,  1025,     0,  1024,   964,     0,     0,  1030,     0,  1032,
       0,  1031,  1052,  1033,  1040,     0,     0,   373,     0,     0,
     576,   577,     0,   574,   570,     0,   177,   177,   177,   178,
     179,   588,   589,   173,   172,     0,   177,   177,   177,     0,
     594,   604,   174,   177,   177,   177,   175,   176,   177,   177,
       0,   177,   177,     0,   174,     0,   617,     0,     0,     0,
     643,     0,   642,     0,     0,   619,     0,   618,     0,     0,
       0,     0,   174,   174,   171,     0,     0,   171,     0,     0,
       0,   177,   177,   717,     0,   177,   177,   722,     0,   190,
     191,   192,   193,   194,   195,     0,    88,    89,    87,   752,
       0,     0,     0,     0,     0,     0,   897,   895,   890,     0,
     900,   884,   901,   887,   899,   893,   882,   896,   885,   883,
     902,   898,     0,     0,     0,   768,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   799,
       0,     0,     0,     0,     0,   811,   813,     0,     0,   818,
     817,     0,     0,   180,     0,     0,     0,   156,     0,   827,
       0,     0,     0,     0,   832,   833,   834,     0,     0,     0,
     840,   855,   859,   861,   864,   863,     0,     0,     0,   868,
     905,   907,     0,   906,   738,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1053,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     742,     0,     0,     0,     0,   842,     0,   156,  1066,  1064,
    1062,     0,     0,   156,  1068,   847,     0,     0,     0,     0,
    1103,     0,     0,  1109,   872,   873,     0,   875,  1143,  1145,
    1142,  1141,  1132,     0,     0,     0,  1165,     0,     0,  1169,
    1177,   202,   203,   204,   205,   201,  1192,  1191,     0,     0,
       0,  1194,  1193,   200,     0,     0,     0,  1202,     0,     0,
       0,     0,     0,  1219,     0,  1233,  1232,  1234,     0,     0,
       0,  1205,     0,     0,     0,  1204,  1214,  1213,  1215,  1211,
    1210,  1212,  1236,  1235,  1237,     0,     0,     0,  1252,  1253,
       0,   156,  1268,  1263,  1266,     0,     0,   156,     0,     0,
       0,   234,     0,     0,     0,     0,     0,     0,     0,     0,
     306,   305,     0,     0,   297,   308,   310,     0,   320,   322,
     321,   319,   156,   327,     0,     0,     0,   164,   156,     0,
       0,     0,     0,   456,   470,   479,     0,   473,   169,   170,
     168,   466,     0,   482,     0,     0,     0,   454,    80,     0,
       0,     0,     0,     0,     0,   156,   966,     0,   969,     0,
       0,   972,     0,   156,   977,     0,   980,   981,     0,   983,
     984,   985,     0,   989,     0,     0,   992,     0,   998,     0,
       0,     0,  1003,  1004,  1002,     0,     0,     0,  1009,  1010,
       0,     0,  1013,  1016,  1018,  1020,     0,     0,  1037,  1039,
     956,  1048,   957,     0,     0,  1050,  1041,     0,     0,   529,
     530,     0,     0,   575,     0,   585,   586,   587,   177,   591,
     592,   593,     0,     0,     0,   598,   599,   171,     0,     0,
       0,   177,   605,   606,   607,   608,   610,   174,   613,   614,
       0,   177,     0,     0,     0,   174,   174,   171,     0,     0,
       0,     0,   641,     0,   645,     0,     0,     0,     0,     0,
     174,   174,   171,     0,     0,   171,     0,     0,     0,     0,
       0,   174,   174,   171,     0,     0,   171,     0,     0,     0,
       0,     0,   174,   174,   171,     0,     0,   171,     0,     0,
       0,     0,   174,   174,   171,     0,     0,     0,   174,   621,
     622,   623,   624,   626,     0,   629,   630,     0,   174,     0,
       0,   715,   716,   177,   719,   720,     0,   751,   156,   753,
       0,     0,   757,     0,     0,     0,     0,     0,   889,   886,
     892,   891,   888,   894,     0,   766,     0,     0,     0,     0,
     156,   773,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   790,   791,   792,     0,   796,
     793,   795,     0,     0,   801,   800,   802,   803,     0,     0,
       0,     0,     0,     0,   156,   156,   816,   186,   182,   187,
     181,   184,   183,   185,   822,   823,   824,     0,     0,   826,
     828,   156,   156,     0,   835,   838,   156,   156,   862,   866,
     908,   739,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1096,   933,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   934,     0,
       0,     0,     0,     0,   749,   750,   156,   164,  1067,     0,
       0,  1071,  1072,     0,     0,   849,     0,   156,     0,  1105,
    1107,   871,     0,  1162,  1163,  1166,  1167,   200,   200,   200,
    1238,  1217,  1216,  1218,  1221,  1220,  1224,  1223,  1225,  1222,
    1230,  1229,  1231,  1227,  1226,  1228,     0,     0,  1247,     0,
    1269,     0,   156,     0,  1272,     0,     0,   238,     0,   235,
       0,     0,     0,   275,     0,     0,     0,     0,   156,     0,
     312,   144,     0,   411,     0,   432,   164,   167,     0,     0,
     445,     0,   483,   484,     0,   449,   448,     0,     0,     0,
       0,     0,   156,   967,   167,   167,   167,   156,   973,   167,
     164,   167,   167,   156,   986,   167,   167,   167,   156,   993,
     167,   167,   156,     0,   167,   156,   167,   167,   156,   167,
     156,  1027,  1028,     0,     0,   528,   571,     0,   590,   595,
     596,   597,     0,   601,   602,   603,   609,   177,   174,   615,
     632,   633,   634,   635,   636,     0,   638,   639,   174,     0,
       0,     0,   174,   174,   171,     0,     0,     0,     0,     0,
       0,   174,   174,   171,     0,     0,     0,     0,     0,     0,
     174,   174,   171,     0,     0,     0,   174,   177,   177,   177,
     177,   177,     0,   177,   177,     0,   174,   174,   177,   177,
     177,   177,   177,     0,   177,   177,     0,   174,   174,   695,
     696,   697,   698,   700,     0,   703,   704,     0,   174,   706,
     707,   708,   709,   710,     0,   712,   713,   174,   625,   174,
       0,   631,     0,     0,   718,     0,   754,   167,     0,     0,
     167,     0,     0,     0,   765,   167,   769,   770,   167,   772,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   794,   797,   798,     0,   167,     0,     0,
       0,   814,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1097,  1076,
       0,  1083,  1084,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   156,     0,     0,    85,     0,
       0,   942,   943,   164,     0,     0,     0,  1074,   848,   850,
     164,   156,  1155,  1196,  1195,  1197,  1239,     0,  1249,  1279,
       0,     0,  1274,  1273,   239,     0,     0,     0,   280,     0,
       0,     0,   298,   167,   412,   416,   433,   435,     0,   443,
     478,   156,     0,     0,     0,     0,     0,     0,   963,   968,
     971,   970,   974,   975,   976,   978,   982,   987,   988,   990,
     991,   994,   995,   999,   164,   167,  1006,   164,  1007,  1011,
     164,  1021,   164,     0,   156,     0,   527,     0,   600,   611,
     177,   174,   640,   177,   177,   177,   177,   177,     0,   177,
     177,   174,   177,   177,   177,   177,   177,     0,   177,   177,
     174,   177,   177,   177,   177,   177,     0,   177,   177,   174,
     177,   655,   656,   657,   658,   660,   174,   663,   664,     0,
     177,   177,   684,   685,   686,   687,   689,   174,   692,   693,
       0,   177,   699,   174,     0,   705,   174,   714,   627,   174,
     723,   724,   156,   756,     0,   167,   759,     0,   156,     0,
     767,   771,   156,     0,   778,   779,   780,   781,   785,   786,
     782,   783,   784,     0,     0,   167,   806,     0,   156,     0,
       0,   819,   167,     0,     0,   167,   167,     0,   865,     0,
     188,   188,     0,     0,   188,     0,   188,  1053,     0,     0,
       0,     0,     0,     0,     0,     0,  1075,     0,     0,   188,
     188,     0,     0,     0,     0,     0,     0,     0,     0,   935,
       0,     0,     0,  1053,    86,     0,   188,     0,  1099,   156,
     156,     0,   164,     0,   221,  1281,  1280,     0,     0,   243,
       0,     0,     0,     0,   313,   444,     0,   332,     0,   959,
       0,   196,     0,  1000,  1001,  1005,  1012,  1022,   366,     0,
     332,     0,   612,   637,   646,   647,   648,   649,   650,   174,
     652,   653,   177,   675,   676,   677,   678,   679,   174,   681,
     682,   177,   666,   667,   668,   669,   670,   174,   672,   673,
     177,   659,   177,   174,   665,   688,   177,   174,   694,   701,
     174,   711,   628,     0,   167,   760,     0,     0,     0,     0,
       0,   787,   788,   804,     0,     0,     0,   815,   820,     0,
     829,   830,   821,   167,     0,   189,  1053,  1053,    85,     0,
    1053,     0,  1053,   909,   156,     0,  1078,     0,  1081,  1118,
    1082,  1080,  1077,     0,  1053,  1053,    85,     0,     0,  1053,
    1053,     0,     0,  1053,   938,   936,   937,   916,  1053,  1053,
    1099,  1113,     0,  1065,  1063,  1101,     0,     0,     0,     0,
     245,     0,     0,     0,   332,   333,   335,   334,   377,     0,
       0,   197,   199,   198,   961,   962,   332,   379,     0,   177,
     654,   177,   683,   177,   674,   661,   177,   690,   177,   702,
       0,   755,   167,   167,     0,   167,     0,   167,   167,     0,
     167,     0,  1053,   922,   918,  1053,     0,   923,     0,   917,
    1053,     0,  1079,     0,   920,   919,  1053,     0,     0,   914,
     912,  1053,   156,   913,   915,   921,  1113,  1060,     0,     0,
    1100,  1111,  1102,  1154,     0,     0,     0,   276,   299,   302,
     300,     0,     0,   378,   958,   156,   380,   573,   651,   680,
     671,   662,   691,   167,   758,   764,     0,   777,   774,   805,
     810,     0,   825,     0,   927,   911,    85,     0,   925,  1119,
       0,   910,    85,     0,   926,     0,  1061,  1115,  1117,     0,
    1110,     0,     0,   281,     0,     0,     0,     0,   196,     0,
     761,   156,   775,   807,   839,  1053,     0,     0,  1053,     0,
     167,  1116,  1112,   244,     0,     0,     0,     0,     0,   960,
     734,   156,   762,   776,   156,   808,   929,     0,  1053,   928,
       0,     0,   246,   292,     0,   291,     0,   763,   809,    85,
     930,    85,  1053,   290,   289,  1053,  1053,   924,   932,   931
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,  1418,   172,   152,   914,  2493,  2494,   429,   430,
     431,   432,   153,   154,   155,   694,   686,    91,   813,   452,
    1215,  1681,  1355,  1368,  1351,  1924,  2596,  1415,  2654,  1586,
     340,   766,   769,   772,   780,    63,   365,   371,   375,   378,
      68,   381,    75,   397,   393,   387,   404,    82,   409,    92,
      98,   414,   416,   418,   486,   867,  1652,   420,   423,   105,
     439,   156,   158,  2648,   174,   215,   909,   948,   475,   856,
     477,   487,   859,   864,   489,   491,   870,   494,   872,   505,
     875,   877,   508,   512,   516,   518,   521,   525,   553,   549,
    1276,   539,   895,   900,   892,  1264,   906,   542,   563,   566,
     571,   576,   584,   939,   941,   943,   945,   589,   950,   218,
     591,  1751,   237,   594,   596,   600,   605,   613,   247,  1344,
     617,   255,   626,  1360,   628,   634,   995,  1376,   990,  1792,
    1382,  1380,  1794,   991,  1385,  1387,   640,   643,   638,   257,
     265,   267,   681,  1072,  1442,  1061,  1540,  1968,  1075,  1079,
    1070,   934,  1319,  1323,  1331,  1333,  1952,   273,  1088,  1091,
    1099,  2258,  2259,  2260,  1953,  2631,  2632,  1120,  1124,  1127,
    2710,  2711,  2707,  2708,  2757,  2261,  2262,   281,   287,   295,
     708,   703,   300,   305,   307,   718,   725,  1153,  1158,   775,
     763,   313,   317,   732,   323,   739,  1591,   752,   753,  1189,
    1184,  1597,  1174,  1603,  1615,  1611,  1178,   757,   741,   329,
     330,   344,  1202,   347,   353,   790,   793,   787,   355,   358,
     798
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2576
static const yytype_int16 yypact[] =
{
    5030,    96,   444,    35, -2576, -2576,   987,  -112,    41,   823,
    1229,   106,  1046,   161,   324,  1603,   101,  5066,    73,  2311,
   -2576,   157,   384,   242,  1081,   241,    39,   500,   330,   941,
     470,   647,  2721,   135,   787,   541,   477,   330, -2576,    -8,
      27,   847, -2576,   433,   587,   560, -2576,   479, -2576,    62,
    3563,   334,    81,   611,    56,   937,   371,   727,   735,    84,
     736,    15,   919, -2576, -2576, -2576,   922,  1178, -2576,   217,
      16,   324,     0,    99,   131, -2576,   740,  1178, -2576, -2576,
     104,  1178, -2576, -2576, -2576, -2576,  1178, -2576, -2576, -2576,
   -2576, -2576, -2576,    43,   717,   777,   780,   133, -2576,  1178,
    1422,  1178,  1178,   866,  1178, -2576, -2576, -2576,   594, -2576,
   -2576, -2576, -2576,  4458, -2576, -2576, -2576, -2576, -2576, -2576,
    1178, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576,
   -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576,
   -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576,
   -2576, -2576, -2576,  1168, -2576,  1178, -2576,   803, -2576, -2576,
     324,   324,   324,   324,   324,   324, -2576, -2576,   324,   324,
     324,   324, -2576,   711, -2576,   783,  1374,   757,   140,   605,
     718,   -24,  3963,   119,  4606,  4051,   867,  4458,  3328, -2576,
     911,  -141,   842,   902,   856,   980,   566,   914,   330,   728,
   -2576,   871, -2576,   715,   670,   336, -2576,    74, -2576,   646,
   -2576,   372,   864,   431, -2576, -2576,  4726, -2576, -2576, -2576,
     897,   908,   944, -2576, -2576, -2576, -2576,   555, -2576, -2576,
   -2576, -2576,   319, -2576, -2576,  4726,  4249, -2576,   979, -2576,
     230, -2576,   984,   994,   689, -2576,  1178, -2576,  1005,    67,
    1007,   271,   959,  1012,    20, -2576, -2576, -2576,  1016,  1027,
     324,   324,  1178,  1178, -2576, -2576,  1048, -2576, -2576, -2576,
   -2576, -2576, -2576,  2448,   618, -2576,  1054,    64,  1178,  4726,
    1178, -2576,  1069, -2576, -2576, -2576, -2576, -2576,  1178,   988,
     324,  3175,  1178,  1168,  1178, -2576,  1037, -2576,  5068, -2576,
   -2576,  1000,  1075,  1083,  1178, -2576,  1088, -2576, -2576,   -47,
    1080,  4726,  1090, -2576,  1166,  1178,   997, -2576,   406,   999,
    1590,   407,  1120, -2576, -2576, -2576, -2576, -2576, -2576, -2576,
    1125, -2576,   533,   169,   260,   303,   495,  1178,  1178,   180,
   -2576,  1178,   855,  1129, -2576,  1178,  1178, -2576,  1132,     3,
      13,  1137,  1168, -2576, -2576, -2576,  1036,  1178, -2576, -2576,
   -2576, -2576, -2576, -2576,  1178, -2576,  1143,  1151, -2576,  1178,
    1228, -2576, -2576, -2576, -2576, -2576, -2576,  1178, -2576, -2576,
    1178, -2576, -2576,   692,   692, -2576,  1160, -2576, -2576, -2576,
   -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576,   965,  1178,
    1178,  1172,  1187,  1198, -2576, -2576,  1178,  1178,  1178, -2576,
    1178, -2576,  1200, -2576, -2576, -2576, -2576,  1167, -2576,  1174,
   -2576,  4726,  1213, -2576,  1178, -2576, -2576, -2576,  1178,  1215,
    1222,  1222,  4726,  1178,  1178,  1178,  1178,  1178,  1178, -2576,
    1178,  4458,  1422,  1178,  1178, -2576, -2576, -2576, -2576, -2576,
   -2576, -2576,  1422,  1178, -2576, -2576, -2576, -2576, -2576, -2576,
   -2576, -2576, -2576, -2576, -2576,  1230, -2576,   962,   395, -2576,
   -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576,   -70, -2576,
   -2576, -2576,  1068, -2576,   624,   374,   374, -2576, -2576, -2576,
    1239, -2576,  1244, -2576, -2576,   487, -2576,  1070, -2576, -2576,
   -2576,  1093, -2576, -2576,  1168, -2576,  1178,  1178, -2576,  4726,
    4726,  1168, -2576, -2576,  1168, -2576, -2576, -2576, -2576,  1168,
   -2576, -2576,  4726,  1168,  1178, -2576, -2576,  4726, -2576,  1264,
     145,  1074,     2, -2576, -2576,  1082,  4726,    17, -2576, -2576,
   -2576, -2576, -2576, -2576,  1284,  1286,  1292, -2576,  1100, -2576,
     651, -2576,  1178, -2576, -2576,   798, -2576, -2576, -2576, -2576,
   -2576, -2576, -2576, -2576, -2576, -2576, -2576,   372, -2576, -2576,
   -2576, -2576, -2576, -2576,  1118,  1126, -2576, -2576,  1261,  1276,
    1279, -2576, -2576,  1112, -2576,  1178,  1343,  1163,  5068, -2576,
    1168, -2576, -2576,  1351, -2576, -2576, -2576, -2576, -2576, -2576,
   -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576,  4726,  4726,
    4726,  4726, -2576, -2576, -2576,  1355,   324, -2576, -2576,  1401,
    1404,  1216,  1178, -2576,   283,  1325, -2576,  1416, -2576,   474,
    1341,  3392,    -9,  1417, -2576,  1431, -2576,  1432, -2576,   232,
   -2576,  1435,  1442, -2576,  1444, -2576, -2576, -2576,  1178, -2576,
    5068,  4574,  1591,   238,  1445,   380,  1348, -2576, -2576, -2576,
      58,   642,  1450,  1451,    45,  1178,   811,  1104,    54,  4726,
     324,  1337,   840,    22,    65,   317,    23, -2576,  1438,  1443,
    1458, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576,
   -2576, -2576, -2576, -2576, -2576,  1178, -2576, -2576, -2576,  1178,
    1178,  1178,  1178, -2576, -2576,  1178,  1168,  1178, -2576,  1178,
    1422,  1178,  1460,  1168, -2576, -2576, -2576, -2576, -2576, -2576,
   -2576, -2576,  1462,    46,   457, -2576, -2576, -2576,  1463, -2576,
   -2576, -2576, -2576,  1369, -2576,  1466,  1467,  1385,  1470, -2576,
    1473, -2576,  1479,  1387,  1481,   432,    31,   437,   120,   473,
    1484,   512, -2576, -2576,  1487,  1488,  1491, -2576, -2576,  1495,
   -2576, -2576, -2576, -2576,  1496, -2576, -2576,  1498, -2576, -2576,
    1500, -2576, -2576, -2576, -2576, -2576, -2576, -2576,  1178,  1178,
   -2576,  1178,  1185,  1178,  1178, -2576,  2962, -2576,  1249,  1502,
   -2576,  1311,  1503, -2576, -2576,   -63,  1178,  1178, -2576,  1509,
   -2576, -2576,  1505,  1274,  1178,  1511,   636, -2576, -2576, -2576,
   -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576,
   -2576,  1504,  1508,  1178,  1178,  1178,  1533,   324,  1539,  1541,
    1168,  4726, -2576, -2576, -2576, -2576, -2576,  1168, -2576, -2576,
    1178,  1178,  1178,  4726,  1178,  1422,  1178, -2576,  1178, -2576,
   -2576, -2576, -2576, -2576,  1545,  1556, -2576, -2576, -2576, -2576,
   -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576,   119,
   -2576,  1178, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576,
    4726,  1178,  1168,  1168,   -63,   -63,   -63,  1168,  1422,  1178,
    1168, -2576, -2576, -2576,  1178, -2576,   651,  1332,  1557,  1542,
   -2576, -2576,  1168, -2576,  1409,  1410, -2576,  1572,  1574, -2576,
    1579,  1317,  1547,  1549, -2576,  1178,  4378,   745,   427, -2576,
   -2576, -2576,  1178,   168,   720, -2576,  1324, -2576,  1337,  1330,
     660,  1297,   151, -2576, -2576,  1178, -2576, -2576, -2576, -2576,
   -2576, -2576, -2576, -2576, -2576, -2576,  1178,  1595, -2576, -2576,
   -2576, -2576,   -63, -2576, -2576, -2576, -2576, -2576,  4650, -2576,
   -2576,  1597,  1598,  1178,  1608,  1609,  1616,   559,   559,   -38,
    1621,  1622,  1623,  1624,  1353,  1354,  1629,  1633,  1636,    52,
      52,   -38,  1639,  1640,   -38,  1643,  1644,  4678,  1646,  1650,
   -2576, -2576,  1651,  1654,   721, -2576,  1656,  1657,  1658,  1660,
     559,   -38,  1665,  1666, -2576,  1669, -2576, -2576,  1168,   895,
    1304,  1427,   -88,  1436,  1568,   413,   -50,  1673,    26,  1543,
    1576,  1175,  1062,  1645,   -34,  1446,  1580,  1681,  1474,   170,
     112,   425,   464,  4726,  1337,  1653,   446,  1447,  1475,  1689,
      29, -2576, -2576,   401,  1691,  1692, -2576, -2576, -2576,  1693,
    1483,   122,  1337,  1485, -2576, -2576, -2576,   324,  1696,  1698,
    1178, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576,
      10, -2576,  2079, -2576, -2576, -2576,  1178, -2576,  1178, -2576,
   -2576, -2576, -2576,  1178,  1178,  1178,   380,  4726, -2576,  1699,
    1327, -2576, -2576,  1178, -2576, -2576,  1178,  4726,  1178, -2576,
   -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576,
   -2576, -2576, -2576,   324,  1178, -2576,  1178,   380,  1700,  1701,
   -2576, -2576,  1178,  1178, -2576,   324, -2576, -2576, -2576,   772,
    1703,  1705, -2576, -2576, -2576, -2576, -2576,  1178,  1178, -2576,
   -2576,  1422,  1178,  1178, -2576, -2576, -2576, -2576,  1707,  1178,
   -2576,  1178,  1602, -2576,  1178, -2576,  1178,  1604, -2576,  1710,
   -2576,   981,   981,   517,   981,  1711, -2576,   527, -2576, -2576,
    1715,  1716,   538,  1719, -2576,  1721,  1722,  1720, -2576,   539,
     565,  1723,  1725,  1727, -2576, -2576,  1728,  1730,  1733, -2576,
     981,   981,   981,  1178, -2576, -2576, -2576,  1178, -2576,  1178,
     613,  4726, -2576,  1178, -2576,  5068,  1168, -2576, -2576,  1734,
   -2576, -2576,  1737, -2576, -2576, -2576, -2576,  1726,  3175, -2576,
    1178,  1732,  1178,  1178,  1178,  1105, -2576,  1697,  1742,  1178,
    1178,   -29,  1745,   324,   324, -2576,  1168,  1178,  1743,  1748,
    1749,  1168,  4726, -2576,  1178, -2576, -2576, -2576,  1178,  1178,
    1178,  1168,  4726,   -63, -2576, -2576, -2576, -2576,  1422,  1178,
    1750,   -63,  1178,   226, -2576,  1779, -2576, -2576,   789,  2574,
    1178, -2576,  1178,  1751,  1785,  1178, -2576, -2576, -2576,  1782,
    1109,  4458,  1489,    -2,  1546,    12,  4726,   434, -2576,   239,
    1647,    83,   471,  1548,   115, -2576, -2576,   663,  1625,   599,
    1670,   281,  1337,   913, -2576,  1788,  1544, -2576,   682, -2576,
   -2576, -2576, -2576,  1337,  1582, -2576, -2576, -2576, -2576, -2576,
    1178, -2576,  1178, -2576, -2576,  1178,  1178, -2576,  1178, -2576,
    1178, -2576, -2576, -2576, -2576,  1596,  1178, -2576,  1178,    93,
   -2576, -2576,  1794,  1796, -2576,  1178,   559,   559,   559, -2576,
   -2576, -2576, -2576, -2576, -2576,  1797,   559,   559,   559,   536,
   -2576, -2576,    52,   559,   559,   559, -2576, -2576,   559,   559,
    1798,   559,   559,  1799,    52,   614, -2576,  1800,  1803,  1806,
   -2576,   742, -2576,   820,   848, -2576,   883, -2576,  1527,  1807,
    1810,  1811,    52,    52,   -38,  1815,  1816,   -38,  1817,  1819,
    1823,   559,   559, -2576,  1824,   559,   559, -2576,  1825, -2576,
   -2576, -2576, -2576, -2576, -2576,   324, -2576, -2576, -2576,  4458,
     964,   324,  1178,  1209,  1350,   574, -2576, -2576, -2576,   665,
   -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576,
   -2576, -2576,  1826,   324,  1178, -2576,   324,  1827,  1178,  4726,
     324,  1601,  1578,  1592,   144,   175,  1593,   179,  1524,  1525,
    1836,  1838,  1839,   413,  1840,  1841,  1842,  1534,  1535,  1334,
    1843,   324,  1178,  1395,  1612, -2576, -2576,   324,  4726, -2576,
   -2576,  4726,  1178,    28,  1846,   324,  1178,  1168,   324, -2576,
    1847,  4726,  4726,  1178, -2576, -2576, -2576,   324,   324,  4726,
   -2576, -2576, -2576, -2576, -2576, -2576,  4726,  1178,   324, -2576,
   -2576, -2576,  1178, -2576, -2576,  1848,  1178,  1626,   184,  1178,
    1628,  1178,   188,  1178, -2576,  1178,  1630,  1632,  1178,  1178,
    1178,  1178,  1178,  1178,  1178,  1178,    19,  1178,  1178,  1634,
   -2576,  1178,  1178,  1178,  1178, -2576,  4726,  1168,  1859,  1861,
    1863,  1178,  1178,  1168, -2576,  1178,  1178,  1178,  4726,   380,
   -2576,  1178,  1178, -2576, -2576, -2576,  1865, -2576, -2576, -2576,
   -2576, -2576, -2576,  1864,  1178,  1178, -2576,  1178,  1178, -2576,
   -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576,  1866,  1867,
    1869, -2576, -2576,   981,  1870,  1871,  1873, -2576,  1874,  1876,
    1885,  1886,  1888, -2576,  1889, -2576, -2576, -2576,  1893,  1894,
    1890, -2576,  1895,  1896,  1892, -2576, -2576, -2576, -2576, -2576,
   -2576, -2576, -2576, -2576, -2576,  1178,  1178,  1178, -2576, -2576,
    1178,  1168, -2576, -2576, -2576,  3175,  1178,  1168,  1178,  1178,
    1178, -2576,  1178,  1178,  1897,  1178,  1899,  1845,  1178,  1178,
   -2576, -2576,  1900,  4726, -2576, -2576, -2576,  1178, -2576, -2576,
   -2576, -2576,  1168, -2576,  1281,  1178,  1281,   -63,  1168,  4726,
    1178,  1178,  1902, -2576, -2576, -2576,  1178, -2576, -2576, -2576,
   -2576, -2576,  4726, -2576,  4726,  1178,  1904, -2576,   651,  1905,
    1906,  1907,  1908,  1909,  4726,  1168, -2576,  4726, -2576,  4726,
    4726,  4458,  4726,  1168, -2576,  4726, -2576, -2576,  4726, -2576,
   -2576,  4458,  4726, -2576,  4726,  4726,  4458,  4726, -2576,  4726,
    4726,  1178, -2576, -2576, -2576,  4726,  4726,  4726, -2576, -2576,
    4726,  4726, -2576, -2576, -2576, -2576,  4726,  4726, -2576, -2576,
   -2576, -2576, -2576,  1178,  1178, -2576, -2576,  1911,  1178, -2576,
   -2576,  1912,  1914, -2576,  1178, -2576, -2576, -2576,   559, -2576,
   -2576, -2576,  1916,  1917,  1921, -2576, -2576,   -38,  1915,  1923,
    1924,   559, -2576, -2576, -2576, -2576, -2576,    52, -2576, -2576,
    1927,   559,  1928,  1929,  1930,    52,    52,   -38,  1932,  1933,
    1944,  1004, -2576,  1287, -2576,  1397,  1655,  1945,  1958,  1960,
      52,    52,   -38,  1934,  1965,   -38,  1967,  1702,  1968,  1969,
    1971,    52,    52,   -38,  1966,  1973,   -38,  1977,  1706,  1979,
    1980,  1981,    52,    52,   -38,  1974,  1983,   -38,  1984,  1985,
    1986,  1987,    52,    52,   -38,  1989,  1990,  1991,    52, -2576,
   -2576, -2576, -2576, -2576,  1993, -2576, -2576,  1994,    52,  1995,
    1996, -2576, -2576,   559, -2576, -2576,  1997, -2576,  1168, -2576,
    4726,  1178, -2576,  1178,  4726,  1178,  1998,  1304, -2576, -2576,
   -2576, -2576, -2576, -2576,  2000, -2576,  4726,   324,  2001,  4726,
    1168, -2576,  2002,  1304,  1178,  1178,  1178,  1178,  1178,  1178,
    1178,  1178,  1178,  2004,  2005, -2576, -2576, -2576,  2006, -2576,
   -2576, -2576,  2008,  2009, -2576, -2576, -2576, -2576,  1178,  4726,
    1178,  2012,  1304,   324,  1168,  1168, -2576, -2576, -2576, -2576,
   -2576, -2576, -2576, -2576, -2576, -2576, -2576,  1178,  1422, -2576,
   -2576,  1168,  1168,  1178, -2576, -2576,  1168,  1168, -2576, -2576,
   -2576, -2576,  1178,  1178,  1178,  1178,  1178,  1178,  1178,  1178,
    1178,  1178,  3858, -2576,  1178,  1178,  1178,  1178,  1178,  1178,
    1178,  1178,  1178,  1178,  1178,  1439,  2014,  1178, -2576,  1178,
    1178,  1178,  2022,  2023, -2576, -2576,  1168,   -63, -2576,  2024,
    2025, -2576, -2576,  1422,  1178, -2576,  2027,  1168,  4726, -2576,
   -2576, -2576,  2030, -2576, -2576, -2576, -2576,   981,   981,   981,
   -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576,
   -2576, -2576, -2576, -2576, -2576, -2576,  1304,  1178, -2576,  1178,
   -2576,  1178,  1168,  1178, -2576,  1422,  1178, -2576,  1178, -2576,
    1976,  2031,  2032, -2576,  2034,  1178,  1178,  2036,  1168,  4726,
   -2576, -2576,  1178, -2576,  1178, -2576,   -63,   789,  1178,  2037,
   -2576,  1178, -2576, -2576,  4458, -2576, -2576,  2039,  2042,  2046,
    2047,  2048,  1168, -2576,   789,   789,   789,  1168, -2576,   789,
     -63,   789,   789,  1168, -2576,   789,   789,   789,  1168, -2576,
     789,   789,  1168,  4726,   789,  1168,   789,   789,  1168,   789,
    1168, -2576, -2576,  2051,  4458,  2052, -2576,  1178, -2576, -2576,
   -2576, -2576,  2054, -2576, -2576, -2576, -2576,   559,    52, -2576,
   -2576, -2576, -2576, -2576, -2576,  2055, -2576, -2576,    52,  2056,
    2057,  2058,    52,    52,   -38,  2061,  2062,  2063,  2064,  2065,
    2069,    52,    52,   -38,  2076,  2077,  2078,  2081,  2082,  2084,
      52,    52,   -38,  2080,  2086,  2087,    52,   559,   559,   559,
     559,   559,  2089,   559,   559,  2091,    52,    52,   559,   559,
     559,   559,   559,  2092,   559,   559,  2095,    52,    52, -2576,
   -2576, -2576, -2576, -2576,  2096, -2576, -2576,  2098,    52, -2576,
   -2576, -2576, -2576, -2576,  2099, -2576, -2576,    52, -2576,    52,
    2100, -2576,  2101,  2105, -2576,  5068, -2576,   789,  2106,  4726,
     789,  1178,  4726,  2107, -2576,   789, -2576, -2576,   789, -2576,
    4726,  2110,  1178,  1178,  1178,  1178,  1178,  1178,  1178,  1178,
    1178,  1178,  1178, -2576, -2576, -2576,  4726,   789,  1178,  4726,
    2111, -2576,  1422,  1422,  4726,  1422,  1422,  4726,  4726,  1422,
    1422,  1178,  1178,  1178,  1178,  1178,  1178,  1304,  1178,  1178,
    1178,  1551,  1558,  1570,  1637,  1652,  1677,  1709,  3858, -2576,
    1724, -2576, -2576,  1304,  1178,  1178,  1178,  1178,  1304,  1178,
    1178,  1178,  1178,  1178,  1178,  1168,  1178,  1746,  1304,  1178,
    1178, -2576, -2576,   -63,   324,  4726,  4726, -2576, -2576, -2576,
     -63,  1168,  2112, -2576, -2576, -2576, -2576,  1178, -2576, -2576,
    1422,  1178, -2576, -2576, -2576,  1205,  2113,  2114, -2576,  1178,
    2116,  1281, -2576,   789, -2576, -2576, -2576, -2576,  2117, -2576,
   -2576,  1168,  2119,  2120,  2126,  2128,  4726,  2129, -2576, -2576,
   -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576,
   -2576, -2576, -2576, -2576,   -63,   789, -2576,   -63, -2576, -2576,
     -63, -2576,   -63,  2130,  1168,  2132, -2576,  1178, -2576, -2576,
     559,    52, -2576,   559,   559,   559,   559,   559,  2133,   559,
     559,    52,   559,   559,   559,   559,   559,  2134,   559,   559,
      52,   559,   559,   559,   559,   559,  2135,   559,   559,    52,
     559, -2576, -2576, -2576, -2576, -2576,    52, -2576, -2576,  2136,
     559,   559, -2576, -2576, -2576, -2576, -2576,    52, -2576, -2576,
    2137,   559, -2576,    52,  2139, -2576,    52, -2576, -2576,    52,
   -2576, -2576,  1168, -2576,  4726,   789, -2576,  2140,  1168,  1178,
   -2576, -2576,  1168,  1178, -2576, -2576, -2576, -2576, -2576, -2576,
   -2576, -2576, -2576,  1178,  1178,   789, -2576,  2141,  1168,  1178,
    1422, -2576,   789,  1178,  1422,   789,   789,  4726, -2576,  1178,
    2142,  2142,  1178,  1178,  2142,  1304,  2142, -2576,  4726,   413,
    2143,  2145,  2146,  2147,  2148,  2152, -2576,   324,  1304,  2142,
    2142,  1178,  1178,  1304,  1178,  1178,  1178,  1178,  1178, -2576,
    1422,  1178,  2153, -2576, -2576,  1178,  2142,   324,    32,  1168,
    1168,   324,   -63,  2155, -2576, -2576, -2576,  2156,  1178, -2576,
    2158,  2160,  2085,  1178, -2576, -2576,  2162,    75,  4726, -2576,
    2163,   105,  4726, -2576, -2576, -2576, -2576, -2576, -2576,  2165,
      75,  1178, -2576, -2576, -2576, -2576, -2576, -2576, -2576,    52,
   -2576, -2576,   559, -2576, -2576, -2576, -2576, -2576,    52, -2576,
   -2576,   559, -2576, -2576, -2576, -2576, -2576,    52, -2576, -2576,
     559, -2576,   559,    52, -2576, -2576,   559,    52, -2576, -2576,
      52, -2576, -2576,  1178,   789, -2576,  4726,  4726,  1178,  4726,
    1178, -2576, -2576, -2576,  4726,  4726,  1178, -2576, -2576,  4726,
   -2576, -2576, -2576,   789,  2167, -2576, -2576, -2576,  1304,  1178,
   -2576,  2168, -2576, -2576,  1168,  2169, -2576,  2171, -2576, -2576,
   -2576, -2576, -2576,  2172, -2576, -2576,  1304,  1178,  2173, -2576,
   -2576,  1178,  4726, -2576, -2576, -2576, -2576, -2576, -2576, -2576,
      32,  1770,  1337, -2576, -2576, -2576,   324,  2174,  2175,  2176,
   -2576,  2115,  2180,   108,    75, -2576, -2576, -2576, -2576,  2181,
    4726, -2576, -2576, -2576, -2576, -2576,    75, -2576,  2182,   559,
   -2576,   559, -2576,   559, -2576, -2576,   559, -2576,   559, -2576,
    5068, -2576,   789,   789,  1178,   789,  2183,   789,   789,  1178,
     789,  1178, -2576, -2576, -2576, -2576,  2184, -2576,  1178, -2576,
   -2576,  2187, -2576,  1178, -2576, -2576, -2576,  2185,  1178, -2576,
   -2576, -2576,  1168, -2576, -2576, -2576,  1770, -2576,  1834,  1759,
    1337, -2576, -2576, -2576,  2188,  2190,  2192, -2576, -2576, -2576,
   -2576,   763,   763, -2576, -2576,  1168, -2576, -2576, -2576, -2576,
   -2576, -2576, -2576,   789, -2576, -2576,  2193, -2576,  4458, -2576,
   -2576,  2195, -2576,  1304, -2576, -2576,  1304,  1178, -2576, -2576,
    1178, -2576,  1304,  1178, -2576,  4726, -2576,  1834, -2576,   324,
   -2576,  2196,  2198, -2576,  1178,  1178,  1178,  1178,   105,  2199,
    4458,  1168, -2576,  4458, -2576, -2576,  1178,  2201, -2576,  1178,
     789, -2576, -2576, -2576,  2202,  2203,  1178,  2215,  1178, -2576,
   -2576,  1168, -2576, -2576,  1168, -2576, -2576,  2217, -2576, -2576,
    2218,  2219, -2576, -2576,  2221, -2576,  2222, -2576, -2576,  1304,
   -2576,  1304, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2576, -2576,    -3, -2576,   600,  -891, -1636,  -918,  1731, -2576,
     973,  -426,  1891,   -48,    18, -2576, -2576, -1655,  1617,  1761,
    -766, -1849,  -839,   995,  1855, -2576,  -884, -2576,  -618, -1150,
   -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576,
   -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576,
   -2576, -2576, -2576, -2576,  -486,  -473, -2576, -2576, -2576, -2576,
   -2576, -2576, -2576, -1674, -2576, -2576, -2576, -2576, -2576, -2576,
   -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576,
   -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576,
   -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576,
   -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576,
   -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576,
   -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576,
   -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576,
   -2576, -2576, -2576, -2576, -1462, -2576, -2576, -2576, -2576, -2576,
    -663, -2576, -2576, -2576, -2576, -2576, -2576,    14, -2576, -2576,
   -2576, -2576,   -91,  -661, -1205,  -457, -2576, -2576, -2576, -2576,
   -2576,  -531,  -506, -2576, -2576, -2575, -2576, -2576, -2576, -2576,
   -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576,
   -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576,  1461, -2576,
   -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576,
   -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576, -2576,
   -2576
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1252
static const yytype_int16 yytable[] =
{
      67,  1898,   352,  1087,  1090,  1263,   897,   788,   104,  2042,
    1113,  2044,  1587,   868,  1592,  1514,   847,   791,  1650,    64,
      65,   903,    64,    65,  1965,   641,   850,  1117,  1128,   292,
      64,    65, -1098,  1701,  1496,  1421,  1213,   316,    64,    65,
    1622,  1623,  1624,   106,   258,    77,   346,   373,   412,   357,
     294,   309,   364,  1446,   310,  1917,   370,    64,    65,   377,
     106,   360,  1082,   380,   382,    64,    65,   392,   688,  1366,
     399,   403,   624,  1443,   406,  1073,   540,  1918,   410,   992,
    1919,    78,  1121,   411,    64,    65,  1149,    64,    65,  1471,
    1092,  1920,  1419,  1170,  1093,   572,   424,   428,   433,   434,
     438,   440,    64,    65,  1711,   723,   259,  2645,   407,    64,
      65,    64,    65,  1749,  1921,    64,    65,   444,  1255,  1256,
    1257,  1698,    64,    65,  1129,    64,    65,   857,   260,  1353,
    1130,   443,  1922,  2758,    64,    65,  1716,  2651,   421,   106,
     296,   395,  1370,    64,    65,  1373,    99,   492,  1479,   893,
     993,   904,   453,  1171,    79,  1422,   493,   216,  1504,  1150,
     111,   106,  1404,    54,   422,  1886,   100,  1094,  1334,   541,
     898,    64,    65,   106,   217,   485,   109,   111,    76,   396,
     506,   261,  2781,    64,    65,   858,  1339,    64,    65,  1095,
    1172,    64,    65,  1444,   157,  1447,  1888,  1477,  2317,   361,
    1891,   507,   109,   515,  1214,   520,   524,   388,  1179,  1472,
     400,   573,   555,  1367,   552,  2329,  2330,  2331,   724,   101,
    2333,   383,  2335,  2336,   238,   314,  2338,  2339,  2340,   585,
    1675,  2342,  2343,  1354,   615,  2346,   764,  2348,  2349,    80,
    2351,  1699,  1056,   622,  1151,   114,   998,  1480,   173,  1651,
     713,  1335,  1096,   115,   116,  1702,   111,  1505,   248,   648,
     649,  1083,   114,  2646,   106,   689,  1706,  1327,  1057,  1448,
     115,   116,   690,   691,   413,   695,   629,   697,   111,  1180,
     311,  1122,  1497,   109,  1144,   699,   702,  1118,   705,   709,
     111,   711,    81,  2652,   999,   789,   642,   964,   965,  2718,
     398,   721,   374,   312,   102,   792,   401,   106,   692,   707,
    1173,   731,   733,  1119,  1449,   905,  1152,   574,   625,   899,
    1515,   106, -1098,  1074,   389,   315,  1712,   767,   106,  1966,
    1131,   478,  1750,    66,   776,   777,   779,   479,   781,   117,
     119,   114,   784,   785,  1084,   966,   262,   575,  2423,   115,
     116,  2426,  1097,   797,   799,   408,  2430,   119,  1717,  2431,
     345,   800,  2647,   114,  1123,   117,   803,   805,   390,   391,
     770,   115,   116,  1488,   806,   114,   480,   807,  2446,   356,
    1321,   111,   369,   115,   116,  1923,   402,  1887,   268,   149,
     630,  1508,  2653,   263,   150,   151,   817,   818,   568,  1478,
     103,  1058,   481,   822,   823,   824,   149,   825,  1707,   778,
    1481,   150,   151,  1944,   384,   693,  2719,  1949,  1889,  1243,
    1506,   832,  1892,  1546,   111,   833,  1000,   616,  1498,   109,
     838,   839,   840,   841,   842,   843,   119,   844,   111,   428,
     848,   849,   297,  2000,  1063,   111,   117,   587,   482,   428,
     851,  1725,   298,  1425,  1558,  1059,    55,  1315,   119,   846,
     483,  2720,  1259,   269,  2514,   385,   114,   631,   735,   754,
     119,   601,   386,   240,   115,   116,   256,   967,   968,   975,
    1426,  1060,  1708,   341,   324,   149,  1064,  1669,   976,   977,
     150,   151,   483,   484,   742,  1673,  2524,  1154,    56,  1175,
     854,  1001,   241,   880,   881,   266,  1867,   149,   773,   114,
    1726,  1002,   150,   151,  1427,   865,    57,   115,   116,   149,
    1428,   889,   632,   114,   150,   151,  1429,  1709,   736,   755,
     114,   115,   116,  1883,   325,  1181,   978,   282,   115,   116,
     951,   602,  1003,   326,  1430,   306,    58,   633,   894,   915,
    1762,  1763,   969,   866,   744,  1844,  1912,  1704,  1847,  1176,
     270,   119,   970,   971,    59,  1431,   308,   760,    60,   354,
    1155,   550,   327,   242,  1186,   271,  2575,  1727,  1490,  1588,
    1432,    61,   946,   989,   603,   935,   855,  1485,   243,  1594,
    1316,   331,   117,   972,  1713,  1182,  2583,   332,  1764,   597,
    1600,  1608,  1008,  2588,   119,   342,  2591,  2592,   333,  1125,
     149,   359,  1433, -1251,   159,   150,   151,  1628,   119,   963,
    1065,   239,   604,   109,   569,   119,   264,  1612,  1782,  1783,
    1499,   588,   551,   299,  1187,   334,  1066,  1067,   272,  1589,
    1224,  1728,   761,   598,  1317,  1007,   366,   570,  1225,  1595,
     244,  1434,  1738,   149,   362,  1156,  2513,   737,   150,   151,
    1601,  1609,  1085,    64,    65,  1098,  1435,   149,   979,   980,
    1318,   394,   150,   151,   149,  1491,  1784,  1705,  1436,   150,
     151,  1868,  1076,   577,   873,   738,   756,  1613,   774,   343,
    1718,   245,  1135,  1483,   578,   620,  1136,  1137,  1138,  1139,
    1484,   246,  1140,   861,  1142,  1437,  1143,   428,  1145,  1735,
     682,   750,   335,  1486,  1714,  1570,  1177,  1438,  1349,  1439,
    1440,   579,   808,    64,    65,  2671,  1388,  1157,  1068,  1069,
    1765,  1766,   367,   328,  1492,  1389,  1390,  1324,  1206,   368,
     762,   372,    62,   981,  2681,   405,  1350,  1796,   415,   874,
     336,   599,  1183,   982,   983,  1077,  1797,  1798,   984,  1441,
     455,   456,   457,   458,   459,   460,    64,    65,   461,   462,
     463,   464,  1871,  1869,   556,  1197,  1198,  1564,  1199,  1201,
    1203,  1204,   417,  1391,   985,   419,   117,   912,   809,  1565,
     683,  1188,   441,  1216,  1217,   557,  1590,  2056,   580,   862,
    1221,  1222,   916,   917,  1799,  1767,  1596,   454,  1785,  1786,
     558,   621,  1310,  1678,  1679,  1768,  1769,  1602,  1610,   337,
    1228,  1229,  1230,  2734,  2735,  1807,  2737,  1870,  2739,  2740,
     465,  2742,  1670,  1719,  1808,  1809,   581,  1238,  1239,  1240,
    1078,  1242,   428,  1244,  1614,  1245,  1770,  2293,  2294,  2295,
     466,    83,  1736,  1818,   283,   338,  2657,   810,   301,   918,
     646,   647,  1819,  1820,  1872,   919,  1248,  1722,  1250,    64,
      65,   339,  1329,   318,  1723,  1063,  1311,   476,  1252,   863,
    1114,   684,  1810,  1787,  2769,   428,  1260,  1249,  1680,   490,
     704,  1262,  1720,  1788,  1789,   488,  1988,  1829,  1830,   685,
     517,  2045,  1312,   913,   865,   582,   435,   544,  1275,   543,
    1821,  1737,  1279,   559,   920,  1392,  1393,  1064,  1873,  1320,
    1322,  1325,    64,    65,  1790,    64,    65,  1330,  2102,   921,
     554,  2801,  1336,   765,   768,   771,  1800,  1801,   564,  1379,
      64,    65,   866,  1337,   922,  1831,   545,   811,  2115,  2203,
     923,   565,   812,  1115,   586,   924,   526,   583,   302,   567,
    1345,   319,  2685,  2152,   592,  2211,  2155,    64,    65,  1860,
    2723,   527,   560,   320,  2163,   595,    84,  2166,  1409,   436,
    2696,   593,  2726,  1313,   614,  2174,   546,   274,  2177,   618,
    1394,    64,    65,   528,  2230,  2184,   284,   363,   619,    85,
    1395,  1396,   285,    86,   286,  1397,   275,  2605,   276,   623,
     925,  1802,   627,   529,  1811,  1812,   561,   639,  2119,  2120,
     644,  1803,  1804,  1581,  1582,   562,  1805,  1482,   700,   926,
     530,  1398,   645,   531,   927,  1314,   928,   303,  1116,    64,
      65,   712,  1822,  1823,   376,  1729,   304,   379,  1507,  1410,
     106,  1065,  1806,   650,   635,   714,    87,  1513,   321,   687,
     532,   533,   929,   930,   437,   107,  2121,  1066,  1067,   547,
     931,   322,   636,  1541,   698,  1542,  1086,  1832,  1833,   719,
    1543,  1544,  1545,  1730,  1460,   726,   108,   720,   932,  1813,
    1551,   715,   722,  1552,   728,  1554,   734,    88,  2296,  1814,
    1815,   701,   548,   109,  1816,    89,    90,   249,    64,    65,
    2775,  1556,  1461,  1557,   534,  1462,  2778,  1824,  1463,  1561,
    1562,   740,  1411,  1412,   535,   758,   277,  1825,  1826,   759,
    1817,   782,  1827,   783,  1568,  1569,   786,  1413,   428,  1571,
    1572,   794,  1731,   716,   933,  1464,  1574,   801,  1575,   110,
     637,  1577,  1834,  1578,  1583,  1584,   802,  1631,  1828,  1068,
    1069,   796,  1835,  1836,   815,  1644,   816,   111,  1063,    64,
      65,   827,   828,  2815,  1465,  2816,   819,  1466,    69,   829,
    1414,    64,    65,  1585,    70,   278,   536,   537,    64,  1200,
    1625,   820,  1689,  1837,  1626,   250,  1627,  1452,  2122,  2123,
    1630,  1732,   821,   445,   826,   112,   729,   251,    64,    65,
    1064,  2284,    64,    65,  1864,  1636,   959,  1639,   831,  1641,
    1642,  1643,  1645,    71,   425,  1453,  1648,  1649,  1454,   279,
    1089,    64,    65,   427,  1657,   852,  1638,   853,   280,   860,
     804,  1663,   252,   869,   113,  1664,  1665,  1666,   871,    72,
     876,   717,   114,  1207,  1208,   428,  1671,   538,  1455,  1674,
     115,   116,  2603,  1690,   878,  2507,   117,  1684,   891,  1685,
    1101,   118,  1687,  2124,   896,  1126,   446,    64,    65,   730,
    2316,  1676,   901,  2125,  2126,  2368,  1220,  1456,  2627,   907,
    1457,   908,   253,  1467,  2377,    73,   910,   447,   448,  1696,
     911,  2128,  2129,  2386,  2334,   254,   449,    64,    65,    83,
     936,  1416,  1417,    93,  2127,  1210,  1211,  1740,   937,  1741,
      64,  1274,  1742,  1743,   450,  1744,  1468,  1745,   938,  2465,
      94,  1549,  1550,  1747,   451,  1748,  1691,  1692,  1904,  1905,
      74,   944,  1754,   940,  1065,  2478,   942,   119,   947,  2130,
    2483,  1693,  1469,    64,    65,  1866,   953,  1416,  1417,   958,
    1066,  1067,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,  2683,  2684,   949,  1694,  2687,   149,  2689,    64,    65,
    1909,   150,   151,   835,   836,   960,  1458,    95,   961,  2694,
    2695,  2137,  2138,   973,  2699,  2700,   962,  1861,  2703,  1863,
    1865,   974,   994,  2704,  2705,    64,    65,  1232,   467,   986,
    1102,   425,   426,   427,    84,   996,   997,  1859,  1103,  1459,
    1004,  1876,    64,    65,  1104,  1879,   468,  1005,  1006,  1071,
    1062,    96,  1068,  1069,  1080,  1132,  1081,    85,   107,  2139,
    1133,  2041,  1134,   469,  1146,  1105,  1148,  1159,  1160,  1908,
    1910,  1161,  1162,  1163,  1164,  1167,   470,  2744,  1165,  1916,
    2745,  2131,  2132,  1927,  1166,  2748,  1168,    97,  1185,  1106,
    1933,  2751,  1190,  1191,   471,  1192,  2754,  1107,   472,  1193,
    1265,  1194,  2235,  1195,  1938,  1196,  1209,  1212,  1226,  1940,
    1219,   473,  1227,  1942,    87,  1945,  1946,  2497,  1948,  1950,
    1951,  1218,  1954,  1223,  2501,  1957,  1958,  1959,  1960,  1961,
    1962,  1963,  1964,  1967,  1969,  1970,  1108,  1231,  1972,  1973,
    1974,  1975,   110,  1233,  1109,  1234,  1267,  2601,  1981,  1982,
    1246,   474,  1984,  1985,  1986,    88,  2133,  2287,  1989,  1990,
    2613,  1247,  1266,    89,    90,  2618,  2134,  2135,  1269,  1270,
    2796,  1993,  1994,  2799,  1995,  1996,  1271,  2597,  2523,  1272,
    2600,  2525,  2602,  1273,  2526,  1277,  2527,  1278,  1326,  1332,
    1110,  2140,  2141,  2810,  1328,  2614,  2615,  2136,   112,  2302,
    1338,  1342,  1111,  1343,    64,    65,  1882,  2817,  1416,  1417,
    2818,  2819,  2629,  1346,  1347,    64,    65,  1911,  1112,  1416,
    1417,  1348,  2016,  2017,  2018,  1356,  1357,  2019,  1358,  1359,
    1361,  1362,  2021,  2024,  1363,  2026,  2027,  2028,  1364,  2029,
    2030,  1365,  2032,  1371,  1372,  2035,  2036,   160,  1374,  1375,
     161,  1381,   742,  2023,  2039,  1383,  1384,  1510,  1045,  1386,
    1399,  1400,  2043,  1401,   118,  1402,  2142,  2048,  2049,  1405,
    1420,  1406,  1046,  2051,  1407,  1424,  2143,  2144,  1445,  1423,
     162,  1047,  2054,  1451,  1450,  1470,  1475,  1474,   163,  1473,
    1476,  1494,  1048,  1489,  1495,  1500,  1493,  1501,  1502,  1503,
    1511,  1509,  1512,  1646,  1548,  1559,  1560,  2145,  1566,   743,
    1567,  1573,   744,  1555,  1580,  1576,  1593,  1579,  2083,  2068,
    1598,  1599,  1049,  1604,  1607,  1563,  1605,  1606,  1616,  2074,
    1617,  1618,  1697,  1619,  2079,  1620,  2636,  1621,  1635,  1633,
    2091,  2092,  1634,  1050,  1640,  2094,  1647,  1658,   164,   745,
    1653,  2097,  1659,  1660,  1672,  1686,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,  1677,  -453,   746,  1688,  1710,  1700,
    1051,  1715,  1733,  1724,  1739,  1721,  1746,  1734,  1752,   165,
    1753,  1758,  1777,  1780,  1838,  1791,  2450,  2451,  1793,  2453,
    2454,  1795,  1839,  2457,  2458,  1840,  1841,   166,   167,  1845,
    1846,  1884,  1848,  1849,   168,  2774,   169,  1850,  1853,  1052,
    1856,  1874,  1878,  1654,  1655,  1885,  1890,   747,  1893,  1894,
    1895,   748,  1896,  1897,  1899,  1900,  1901,  1906,  1902,  1903,
    1925,  2034,  1930,  1941,   170,  1943,  1053,  1947,  2198,  1955,
    2199,  1956,  2201,  1971,  1978,  1979,   749,  1980,  1992,   750,
    1991,  1997,  1998,  1999,  2505,  2001,  2002,  2003,  2004,   751,
    2005,  2212,  2213,  2214,  2215,  2216,  2217,  2218,  2219,  2220,
    2006,  2007,  2008,  2009,  2012,  1054,  2015,  1055,  2010,  2011,
    2013,  2014,  2031,  2033,  2037,  2226,  2050,  2228,  2055,  2469,
    2057,  2058,  2059,  2060,  2061,  2093,  2470,  2095,  2096,  2103,
     171,  2099,  2100,   293,  2234,   428,  2101,  2104,  2471,  2105,
    2238,  2108,  2146,  2110,  2111,  2112,  2116,  2117,  2153,  2241,
    2242,  2243,  2244,  2245,  2246,  2247,  2248,  2249,  2250,  2118,
    2147,  2263,  2264,  2265,  2266,  2267,  2268,  2269,  2270,  2271,
    2272,  2273,  2274,  2148,  2277,  2149,  2278,  2279,  2280,  2154,
    2164,  2709,  2156,  2158,  2159,  1369,  2160,  2165,  2175,  2157,
     428,  2288,  2167,  2168,  2169,  2170,  2171,  2176,  2305,  2178,
    2179,  2180,  2181,  2185,  2186,  2472,  2187,  2189,  2190,  2192,
    2193,   814,  2195,  2202,   442,  2204,  2207,  2210,  2221,  2222,
    2473,  2223,  2224,  2225,  2297,  1857,  2298,  2229,  2299,  2276,
    2301,  1862,   428,  2303,  2587,  2304,  2281,  2282,  2590,  2285,
    2286,  2289,  2309,  2310,  2292,  2474,  2306,  2307,  2308,  2314,
    2311,  2315,  2319,  1875,  2323,  2318,  1877,  2324,  2320,  2709,
    1881,  2325,  2326,  2327,   710,  2353,  2492,  2356,  2358,  2361,
   -1114,  2363,  2364,  2365,  2624,  2369,  2370,  2475,  2371,  2372,
    2373,  1907,  2322,   504,  2374,   511,   514,  1913,   519,   523,
    2378,  2379,  2477,  2380,  2387,  1926,  2381,  2382,  1929,  2383,
    2388,  2642,  2389,  2396,  2357,  2399,  2407,  1934,  1935,  2410,
    2413,  1516,  2414,  2416,  2419,  2420,  1517,   590,  1939,  2421,
    2424,  2429,  2355,   795,  2433,  2449,  2503,  2759,  2509,  2510,
    2512,  2716,  2515,  2517,  2255,  2518,   606,   612,  1518,  1519,
    2519,  1520,  1521,  2520,  2522,  2528,  2530,  2539,  2548,  2557,
    2563,  2567,  1522,  2570,  2576,  2584,  2595,  2422,  2606,  2607,
    2789,  2608,  2609,  2610,  1523,  1524,  2611,  2722,  2626,  2637,
     834,  2638,  1525,  2640,  2641,  1526,  2644,  2476,  2650,  2656,
     696,  2682,  2688,  2706,  2691,  2692,  2693,  2698,  2713,  2760,
    2714,  2715,   706,  1527,  2717,  2724,  2727,  2738,  2746,  2752,
    1528,  1529,  2749,  2761,  1530,  2762,  2763,  2770,  2427,  2773,
    2756,  2783,   727,  2784,  2790,  2798,  1169,  2802,  2803,  2434,
    2435,  2436,  2437,  2438,  2439,  2440,  2441,  2442,  2443,  2444,
    2805,  2809,  2811,     0,  2812,  2447,  2813,  2814,     0,   428,
     428,     0,   428,   428,     0,     0,   428,   428,  2459,  2460,
    2461,  2462,  2463,  2464,     0,  2466,  2467,  2468,  2765,  2767,
       0,     0,     0,     0,  1531,     0,     0,     0,     0,     0,
       0,  2479,  2480,  2481,  2482,   879,  2484,  2485,  2486,  2487,
    2488,  2489,   884,  2491,     0,   885,  2495,  2496,     0,     0,
     886,     0,     0,     0,   888,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2504,     0,     0,   428,  2506,     0,
       0,     0,  2508,     0,     0,     0,  2511,     0,     0,     0,
    1532,     0,   830,     0,     0,     0,  1533,     0,     0,     0,
       0,     0,     0,   837,     0,     0,     0,     0,     0,     0,
     219,     0,   845,  1534,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1535,     0,     0,     0,     0,     0,     0,
       0,   952,   220,     0,  2531,   221,     0,  1771,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1781,
    1536,  1537,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1842,  1843,   222,
       0,  1538,     0,     0,     0,     0,   223,     0,     0,     0,
     882,   883,     0,     0,     0,     0,     0,   224,   225,     0,
       0,     0,     0,   887,   226,     0,     0,     0,   890,     0,
       0,     0,     0,     0,     0,     0,  2578,   902,     0,     0,
    2580,     0,     0,     0,     0,     0,  1539,   227,     0,     0,
    2581,  2582,     0,     0,     0,     0,  2586,   428,     0,     0,
    2589,   428,   651,   652,     0,   228,  2594,     0,     0,  2598,
    2599,     0,     0,     0,     0,     0,     0,  1141,     0,   229,
     230,     0,     0,     0,  1147,     0,   231,  2206,  2616,  2617,
       0,  2619,  2620,  2621,  2622,  2623,     0,   428,  2625,     0,
       0,     0,  2628,     0,     0,     0,     0,   232,     0,   954,
     955,   956,   957,     0,     0,  2639,     0,     0,     0,   653,
    2643,     0,     0,  2231,     0,   654,     0,     0,     0,     0,
       0,     0,   655,     0,   656,     0,     0,     0,  2658,   657,
       0,     0,   658,     0,     0,     0,   233,     0,   659,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   660,
       0,     0,     0,     0,     0,   661,     0,     0,     0,     0,
    1100,     0,     0,     0,   662,     0,     0,     0,     0,     0,
    2670,     0,     0,     0,     0,  2674,     0,  2676,  1682,   663,
       0,     0,     0,  2679,     0,     0,     0,     0,     0,   234,
       0,  1235,     0,   107,     0,     0,  2686,     0,  1237,   235,
     664,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2697,   665,     0,     0,  2701,     0,
       0,     0,  2733,     0,     0,   666,   667,     0,   236,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2721,     0,     0,  1253,  1254,     0,     0,   668,  1258,     0,
       0,  1261,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1268,     0,     0,     0,     0,     0,     0,
     669,  2736,     0,     0,     0,     0,  2741,   110,  2743,     0,
       0,     0,     0,     0,   670,  2747,   671,     0,     0,     0,
    2750,     0,     0,     0,     0,  2753,     0,     0,     0,     0,
       0,   672,     0,     0,     0,     0,   673,     0,     0,     0,
       0,     0,     0,   674,     0,     0,     0,     0,  2764,  2766,
     675,     0,  1236,     0,    64,    65,     0,     0,     0,     0,
       0,     0,     0,   112,  1241,     0,     0,     0,   676,     0,
     107,     0,     0,     0,  2776,     0,     0,  2777,     0,     0,
    2779,   677,   678,     0,   679,     0,  2772,     0,     0,     0,
     288,  2785,  2786,  2787,  2788,     0,     0,     0,     0,  1408,
       0,  1251,  2107,  2797,     0,     0,  2800,     0,   109,     0,
    2113,  2114,     0,  2804,     0,  2806,     0,     0,  2792,     0,
       0,  2795,     0,     0,   680,  2150,  2151,     0,     0,   118,
       0,     0,     0,     0,     0,     0,  2161,  2162,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2172,  2173,     0,
       0,     0,     0,  1352,   110,     0,     0,  2182,  2183,     0,
       0,     0,     0,  2188,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2191,     0,     0,     0,     0,     0,  1341,
       0,     0,     0,     0,     0,  1403,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     112,     0,     0,     0,  2498,     0,     0,     0,     0,     0,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   289,
       0,     0,     0,     0,  1487,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,     0,     0,     0,     0,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   290,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1632,  1205,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1547,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1553,     0,
       0,     0,     0,     0,     0,     0,     0,  1656,     0,     0,
       0,     0,  1661,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1667,     0,     0,     0,     0,     0,     0,   291,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2612,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1629,     0,     0,     0,     0,  2630,     0,     0,
       0,  2635,     0,  2360,     0,     0,     0,     0,     0,  1637,
       0,     0,     0,  2362,     0,     0,     0,  2366,  2367,     0,
       0,     0,     0,     0,     0,     0,  2375,  2376,     0,     0,
       0,     0,     0,  1662,     0,  2384,  2385,     0,     0,     0,
       0,  2390,     0,  1668,     0,     0,     0,     0,     0,     0,
       0,  2400,  2401,     0,     0,     0,     0,     0,     0,     0,
    1683,     0,  2411,  2412,     0,     0,     0,     0,     0,     0,
       0,     0,  1695,  2415,     0,     0,     0,  1703,    64,    65,
       0,     0,  2417,     0,  2418,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   107,     0,     0,     0,     0,     0,
       0,  1755,  1756,  1757,     0,     0,     0,     0,     0,     0,
       0,  1759,  1760,  1761,     0,     0,     0,     0,  1772,  1773,
    1774,     0,     0,  1775,  1776,     0,  1778,  1779,     0,     0,
       0,     0,   109,     0,     0,     0,  2712,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1928,     0,
       0,     0,     0,     0,     0,     0,  1851,  1852,     0,     0,
    1854,  1855,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   110,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,     0,  1977,     0,
    1858,     0,     0,     0,  1983,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   522,     0,   112,     0,     0,     0,     0,     0,
    1880,     0,     0,     0,     0,     0,     0,   107,     0,     0,
       0,     0,     0,     0,     0,     0,  2533,     0,     0,  2782,
       0,     0,     0,     0,     0,     0,  2542,     0,     0,  1914,
       0,     0,  1915,     0,     0,  2551,     0,     0,     0,     0,
       0,     0,  1931,  1932,  2560,   109,     0,     0,     0,     0,
    1936,  2562,  2020,     0,     0,   117,     0,  1937,  2025,     0,
     118,     0,  2566,     0,     0,     0,     0,     0,  2569,     0,
       0,  2571,     0,     0,  2572,     0,     0,     0,     0,     0,
       0,     0,     0,  2040,     0,     0,     0,     0,     0,  2046,
       0,   110,     0,     0,     0,     0,     0,  1976,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1987,
       0,     0,     0,     0,     0,     0,  2063,     0,     0,     0,
       0,     0,     0,     0,  2070,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   112,     0,     0,
       0,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,     0,     0,     0,     0,     0,  2022,     0,     0,     0,
       0,     0,     0,     0,  2659,     0,     0,     0,     0,     0,
       0,     0,     0,  2661,  2038,     0,     0,     0,   117,     0,
       0,   987,  2663,   118,     0,     0,   988,     0,  2666,     0,
    2047,     0,  2668,     0,     0,  2669,     0,     0,     0,     0,
       0,     0,     0,  2052,     0,  2053,     0,     0,     0,   348,
       0,     0,     0,     0,     0,  2062,   349,     0,  2064,     0,
    2065,  2066,  2067,  2069,     0,     0,  2071,     0,     0,  2072,
       0,     0,  2073,  2075,     0,  2076,  2077,  2078,  2080,     0,
    2081,  2082,     0,  2098,     0,     0,  2084,  2085,  2086,  2196,
       0,  2087,  2088,     0,     0,     0,  2106,  2089,  2090,     0,
       0,     0,     0,     0,     0,     0,  2109,     0,     0,     0,
       0,  2209,     0,     0,     0,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,     0,  2232,  2233,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2236,  2237,     0,     0,     0,  2239,  2240,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2194,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,  2283,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2290,     0,
       0,  2197,     0,     0,     0,  2200,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2205,     0,     0,
    2208,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2300,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2312,
    2227,     0,     0,     0,     0,     0,     0,     0,     0,   350,
       0,     0,   351,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2328,     0,     0,     0,     0,  2332,     0,
       0,     0,     0,     0,  2337,     0,     0,     0,     0,  2341,
       0,     0,     0,  2344,     0,     0,  2347,     0,     0,  2350,
       0,  2352,     0,     0,     0,     0,  2275,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2291,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,     0,     0,
       0,     0,     0,     0,  2251,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2252,     0,     0,     0,     0,
    2313,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2321,     0,     0,     0,     0,
       0,  1102,  2253,     0,     0,     0,     0,     0,     0,  1103,
       0,     0,  2359,     0,     0,  1104,     0,     0,     0,     0,
       0,     0,     0,     0,  2345,     0,     0,     0,     0,     0,
       0,     0,   107,     0,     0,  2354,  1105,     0,     0,  2254,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2391,  2392,  2393,  2394,  2395,     0,  2397,  2398,
    1106,     0,     0,  2402,  2403,  2404,  2405,  2406,  1107,  2408,
    2409,     0,     0,     0,     0,     0,     0,     0,     0,   495,
     496,     0,     0,   497,     0,     0,  2490,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2502,     0,     0,     0,   498,  1108,     0,     0,
       0,     0,     0,     0,     0,  1109,   110,     0,     0,     0,
     107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2516,     0,     0,     0,     0,     0,     0,     0,
    2425,     0,     0,  2428,     0,     0,     0,     0,     0,     0,
       0,  2432,     0,     0,     0,     0,     0,     0,   109,     0,
       0,  1110,     0,     0,     0,  2529,     0,  2445,     0,     0,
    2448,     0,   112,  1111,     0,  2452,     0,     0,  2455,  2456,
       0,     0,     0,     0,   499,     0,     0,     0,     0,  1112,
       0,     0,     0,     0,     0,     0,     0,     0,  2255,     0,
    2256,     0,     0,   500,   110,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   501,  2499,  2500,     0,     0,
       0,     0,     0,  2573,     0,     0,     0,     0,   118,  2577,
       0,     0,     0,  2579,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2257,     0,     0,     0,     0,  2585,
     112,     0,     0,     0,     0,  2532,     0,  2521,  2534,  2535,
    2536,  2537,  2538,     0,  2540,  2541,     0,  2543,  2544,  2545,
    2546,  2547,     0,  2549,  2550,     0,  2552,  2553,  2554,  2555,
    2556,   502,  2558,  2559,     0,  2561,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2564,  2565,     0,     0,     0,
    2633,  2634,     0,     0,     0,     0,  2568,   607,   107,     0,
       0,   117,     0,     0,     0,     0,   118,     0,     0,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   608,   503,
       0,     0,     0,     0,     0,  2574,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   513,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2593,     0,
       0,     0,   110,     0,     0,     0,     0,     0,     0,  2604,
       0,     0,     0,     0,     0,  2690,   609,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,  2660,  1280,  1281,
    1282,     0,     0,     0,     0,     0,  2662,     0,   112,  2649,
       0,     0,     0,  2655,     0,  2664,     0,  2665,     0,     0,
       0,  2667,     0,     0,     0,   610,     0,  1283,  1284,     0,
       0,  1285,     0,     0,     0,     0,     0,     0,  1286,     0,
       0,  1287,     0,     0,     0,  1288,     0,     0,     0,     0,
       0,     0,     0,  1289,  1290,     0,     0,     0,     0,     0,
       0,  1291,     0,  2755,     0,     0,     0,  2672,  2673,     0,
    2675,     0,     0,     0,   118,  2677,  2678,   107,     0,     0,
    2680,     0,     0,     0,     0,     0,  2768,     0,     0,  1292,
    1293,     0,     0,  1294,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1295,
       0,     0,     0,  2702,  2728,   109,  2729,     0,  2730,     0,
       0,  2731,     0,  2732,     0,     0,     0,     0,     0,     0,
    1296,     0,  2793,     0,     0,     0,     0,     0,     0,     0,
       0,  2725,     0,   611,     0,     0,     0,     0,     0,     0,
       0,     0,  2807,  1297,     0,  2808,     0,     0,     0,     0,
       0,   110,  1298,     0,     0,     0,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,  1009,  1010,  1011,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1299,     0,  1300,
       0,     0,     0,     0,     0,  1301,  1302,   112,     0,     0,
       0,     0,     0,  1012,  1013,   107,     0,  1014,     0,  2771,
    1015,     0,  1303,     0,     0,     0,     0,  1016,     0,     0,
       0,  1017,     0,  1304,     0,     0,  2780,     0,     0,  1018,
    1019,     0,     0,     0,     0,     0,     0,  1020,  1021,     0,
       0,  2791,     0,     0,  2794,     0,   509,     0,  1305,   107,
    1306,     0,     0,     0,     0,  1022,     0,     0,   117,     0,
    1307,  1023,     0,   118,     0,  1024,  1025,     0,     0,  1026,
    1308,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1027,     0,  1340,     0,   110,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1309,     0,  1028,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   107,     0,     0,     0,  1029,
       0,     0,     0,   110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   112,     0,     0,     0,     0,
       0,     0,     0,  1030,     0,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,  1031,     0,  1032,     0,     0,     0,   112,
       0,  1033,  1034,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1035,  1036,   110,
       0,   118,     0,     0,     0,     0,     0,     0,  1037,  1038,
       0,     0,  1377,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1039,     0,  1040,     0,     0,     0,
       0,     0,     0,     0,     0,   118,     0,     0,  1041,     0,
    1042,     0,     0,     0,     0,   112,  1043,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     510,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1044,     0,     0,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,  1378,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,     1,     0,     0,     2,     0,     0,     3,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     0,     0,     0,     0,     5,     6,     0,     7,     8,
       9,     0,     0,     0,     0,     0,     0,   175,    10,     0,
     176,     0,     0,   177,     0,    11,     0,    12,    13,     0,
       0,     0,     0,     0,     0,     0,     0,    14,    15,     0,
       0,     0,   178,     0,   179,   180,   181,     0,     0,     0,
       0,     0,     0,     0,   182,     0,   183,     0,     0,     0,
       0,   184,     0,   185,   186,   187,     0,    16,     0,     0,
       0,   188,     0,   189,     0,     0,     0,     0,     0,     0,
      17,     0,     0,     0,    18,     0,     0,    19,     0,     0,
       0,    20,    21,     0,     0,     0,     0,     0,    22,     0,
       0,     0,   190,     0,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    24,     0,
     191,    25,    26,    27,     0,     0,    28,    29,   192,     0,
     193,   194,     0,     0,   195,     0,     0,     0,   196,     0,
     197,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,    32,
      33,     0,   198,   199,     0,     0,     0,   200,     0,     0,
       0,     0,    34,     0,    35,     0,     0,   201,     0,     0,
       0,    36,     0,     0,     0,    37,     0,     0,     0,    38,
       0,    39,     0,    40,   202,   203,     0,     0,    41,     0,
       0,     0,   204,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    42,     0,     0,     0,     0,     0,    43,     0,
       0,     0,     0,     0,     0,     0,     0,   205,     0,   206,
       0,     0,     0,    44,    45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,     0,    47,     0,     0,
       0,     0,     0,    48,   207,     0,    49,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   208,
     209,     0,     0,     0,     0,     0,     0,     0,   210,     0,
       0,     0,     0,     0,     0,   211,     0,    51,     0,     0,
       0,   212,     0,   213,    52,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,     0,     0,     0,     0,     0,     0,
     214
};

static const yytype_int16 yycheck[] =
{
       3,  1463,    50,   666,   667,   896,     4,     4,    11,  1664,
     671,  1666,  1162,   486,  1164,     5,   442,     4,    47,     3,
       4,     4,     3,     4,     5,     5,   452,     5,     5,    32,
       3,     4,     0,    21,     5,   123,    99,    40,     3,     4,
    1190,  1191,  1192,     4,     5,     4,    49,    32,     5,    52,
      32,    37,    55,    27,    62,    27,    59,     3,     4,    62,
       4,     5,    17,    66,    67,     3,     4,    70,     4,    17,
      73,    74,     5,   123,    77,    17,   217,    49,    81,    88,
      52,    40,    17,    86,     3,     4,    40,     3,     4,   123,
      36,    63,  1010,    62,    40,    21,    99,   100,   101,   102,
     103,   104,     3,     4,    21,   152,    67,    32,     4,     3,
       4,     3,     4,    20,    86,     3,     4,   120,   884,   885,
     886,   123,     3,     4,   101,     3,     4,   197,    89,   167,
     107,   113,   104,  2708,     3,     4,    21,    32,     5,     4,
       5,   141,   981,     3,     4,   984,    40,   171,    36,     4,
     159,   134,   155,   122,   113,   243,   180,    84,    36,   113,
     121,     4,  1001,    67,    31,    21,    60,   113,    17,   310,
     168,     3,     4,     4,   101,   178,    57,   121,   290,   179,
     183,   142,  2757,     3,     4,   255,   952,     3,     4,   135,
     159,     3,     4,   243,    33,   169,    21,    27,  2047,   143,
      21,   183,    57,   185,   267,   187,   188,   191,    88,   243,
      79,   137,   198,   161,   196,  2064,  2065,  2066,   265,   113,
    2069,     4,  2071,  2072,    67,   198,  2075,  2076,  2077,   211,
       4,  2080,  2081,   271,     4,  2084,    67,  2086,  2087,   198,
    2089,   243,     4,   246,   198,   206,    14,   135,   147,   278,
     298,   100,   198,   214,   215,   243,   121,   135,    16,   262,
     263,   216,   206,   188,     4,   201,    27,   928,    30,   243,
     214,   215,   208,   209,   231,   278,     5,   280,   121,   159,
     288,   216,   253,    57,   710,   288,   289,   265,   291,   292,
     121,   294,   251,   188,    62,   292,   276,    14,    15,   191,
     201,   304,   287,   311,   198,   292,   175,     4,   244,   291,
     279,   314,   315,   291,   288,   298,   270,   243,   251,   317,
     310,     4,   290,   265,   308,   298,   243,    67,     4,   310,
     307,   191,   239,   298,   337,   338,   339,   197,   341,   220,
     301,   206,   345,   346,   299,    62,   307,   273,  2197,   214,
     215,  2200,   298,   356,   357,   251,  2205,   301,   243,  2208,
     298,   364,   287,   206,   299,   220,   369,   370,   352,   353,
      67,   214,   215,  1034,   377,   206,   236,   380,  2227,   298,
     212,   121,   298,   214,   215,   357,   255,   243,    58,   350,
     119,  1052,   287,   354,   355,   356,   399,   400,    62,   229,
     294,   163,   262,   406,   407,   408,   350,   410,   169,   229,
     298,   355,   356,   229,   197,   351,   308,   229,   243,   845,
     298,   424,   243,  1086,   121,   428,   194,   197,    27,    57,
     433,   434,   435,   436,   437,   438,   301,   440,   121,   442,
     443,   444,   307,  1593,    64,   121,   220,    16,   308,   452,
     453,   170,   317,    40,  1117,   217,    12,    30,   301,   441,
     352,   353,   888,   133,  2313,   248,   206,   196,    62,    62,
     301,   152,   255,    89,   214,   215,   235,   194,   195,     5,
      67,   243,   243,     4,    51,   350,   106,  1253,    14,    15,
     355,   356,   352,   353,    62,  1261,  2345,    40,    54,    62,
     105,   269,   118,   506,   507,     5,  1424,   350,    13,   206,
     229,   279,   355,   356,   101,   141,    72,   214,   215,   350,
     107,   524,   251,   206,   355,   356,   113,   288,   122,   122,
     206,   214,   215,  1451,   101,    62,    62,    67,   214,   215,
     588,   222,   310,   110,   131,     4,   102,   276,   530,   552,
      14,    15,   269,   179,   122,  1394,  1474,   123,  1397,   122,
     230,   301,   279,   280,   120,   152,    89,    34,   124,   235,
     113,     5,   139,   189,    62,   245,  2425,   296,   132,    62,
     167,   137,   585,   631,   265,   567,   191,   123,   204,    62,
     163,     4,   220,   310,   123,   122,  2445,    37,    62,    44,
      62,    62,   650,  2452,   301,   126,  2455,  2456,    48,   292,
     350,     0,   199,     0,    14,   355,   356,     4,   301,   622,
     240,    21,   303,    57,   288,   301,    26,    62,    14,    15,
     229,   200,    66,    33,   122,    75,   256,   257,   308,   122,
       4,  1302,   109,    88,   217,   648,   275,   311,    12,   122,
     266,   238,  1313,   350,    54,   198,  2311,   251,   355,   356,
     122,   122,   665,     3,     4,   668,   253,   350,   194,   195,
     243,    71,   355,   356,   350,   229,    62,   243,   265,   355,
     356,   107,    40,    37,   197,   279,   279,   122,   193,   210,
      27,   307,   695,   268,    48,     6,   699,   700,   701,   702,
     275,   317,   705,    79,   707,   292,   709,   710,   711,    27,
      92,   279,   152,   249,   243,  1141,   279,   304,   159,   306,
     307,    75,    30,     3,     4,  2574,     5,   270,   348,   349,
     194,   195,     5,   300,   288,    14,    15,    17,   786,     4,
     207,     5,   298,   269,  2593,     5,   187,     5,    31,   262,
     190,   196,   279,   279,   280,   113,    14,    15,   284,   346,
     160,   161,   162,   163,   164,   165,     3,     4,   168,   169,
     170,   171,   107,   199,    46,   778,   779,     5,   781,   782,
     783,   784,     5,    62,   310,     5,   220,   136,    96,    17,
     172,   279,   198,   796,   797,    67,   279,  1688,   152,   175,
     803,   804,     4,     5,    62,   269,   279,     4,   194,   195,
      82,   122,    67,    24,    25,   279,   280,   279,   279,   259,
     823,   824,   825,  2672,  2673,     5,  2675,   253,  2677,  2678,
     119,  2680,  1258,   170,    14,    15,   190,   840,   841,   842,
     198,   844,   845,   846,   279,   848,   310,  1997,  1998,  1999,
      67,    28,   170,     5,   207,   295,  2530,   165,    71,    61,
     260,   261,    14,    15,   199,    67,   869,   268,   871,     3,
       4,   311,   212,    26,   275,    64,   131,   120,   881,   255,
      40,   263,    62,   269,  2733,   888,   889,   869,    99,   171,
     290,   894,   229,   279,   280,   290,  1559,    14,    15,   281,
      33,  1667,   157,   252,   141,   259,    40,     5,   911,    67,
      62,   229,   915,   185,   116,   194,   195,   106,   253,   922,
     923,   924,     3,     4,   310,     3,     4,   930,  1767,   131,
      16,  2780,   935,   333,   334,   335,   194,   195,    67,   987,
       3,     4,   179,   946,   146,    62,    90,   255,  1787,  1867,
     152,   236,   260,   113,    90,   157,    45,   311,   171,   289,
     963,   114,  2598,  1802,    67,  1883,  1805,     3,     4,     5,
    2644,    60,   244,   126,  1813,    31,   153,  1816,    83,   113,
    2616,    73,  2656,   238,     5,  1824,     6,    46,  1827,     5,
     269,     3,     4,    82,  1912,  1834,   349,    60,     4,   176,
     279,   280,   355,   180,   357,   284,    65,  2469,    67,     4,
     212,   269,     5,   102,   194,   195,   288,     5,    14,    15,
       4,   279,   280,    42,    43,   297,   284,  1030,    40,   231,
     119,   310,     5,   122,   236,   290,   238,   250,   198,     3,
       4,     4,   194,   195,   125,   132,   259,   125,  1051,   154,
       4,   240,   310,     5,    95,    55,   233,  1060,   211,     5,
     149,   150,   264,   265,   198,    19,    62,   256,   257,    89,
     272,   224,   113,  1076,     5,  1078,   265,   194,   195,     4,
    1083,  1084,  1085,   170,    22,     5,    40,     4,   290,   269,
    1093,    91,     4,  1096,     4,  1098,    99,   274,  2016,   279,
     280,   113,   122,    57,   284,   282,   283,    26,     3,     4,
    2746,  1114,    50,  1116,   203,    53,  2752,   269,    56,  1122,
    1123,   122,   227,   228,   213,     5,   185,   279,   280,     4,
     310,   276,   284,     4,  1137,  1138,     4,   242,  1141,  1142,
    1143,     4,   229,   143,   346,    83,  1149,     4,  1151,   103,
     191,  1154,   269,  1156,   173,   174,     5,  1205,   310,   348,
     349,   125,   279,   280,     4,    60,   201,   121,    64,     3,
       4,     4,     5,  2809,   112,  2811,     4,   115,   191,     5,
     285,     3,     4,   202,   197,   244,   275,   276,     3,     4,
    1193,     4,    83,   310,  1197,   114,  1199,    22,   194,   195,
    1203,   288,     4,    35,     4,   159,    40,   126,     3,     4,
     106,  1977,     3,     4,     5,  1218,   616,  1220,     5,  1222,
    1223,  1224,  1225,   236,     9,    50,  1229,  1230,    53,   288,
     126,     3,     4,    11,  1237,     5,  1218,   275,   297,   171,
      12,  1244,   161,     4,   198,  1248,  1249,  1250,     4,   262,
     180,   251,   206,     4,     5,  1258,  1259,   346,    83,  1262,
     214,   215,  2467,   154,   171,    60,   220,  1270,     4,  1272,
     670,   225,  1275,   269,   200,   675,   108,     3,     4,   113,
    2046,  1263,   200,   279,   280,  2124,    12,   112,  2493,     5,
     115,     5,   211,   231,  2133,   308,     4,   129,   130,  1281,
     200,    14,    15,  2142,  2070,   224,   138,     3,     4,    28,
     192,     7,     8,    84,   310,     4,     5,  1320,   192,  1322,
       3,     4,  1325,  1326,   156,  1328,   264,  1330,    67,  2247,
     101,     4,     5,  1336,   166,  1338,   227,   228,     4,     5,
     353,   229,  1345,    67,   240,  2263,    67,   301,     5,    62,
    2268,   242,   290,     3,     4,     5,     5,     7,     8,     4,
     256,   257,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,  2596,  2597,   230,   285,  2600,   350,  2602,     3,     4,
       5,   355,   356,   430,   431,     4,   231,   178,     4,  2614,
    2615,    14,    15,    88,  2619,  2620,   200,  1420,  2623,  1422,
    1423,     5,     5,  2628,  2629,     3,     4,   827,    54,    88,
      93,     9,    10,    11,   153,     4,     4,  1419,   101,   264,
       5,  1444,     3,     4,   107,  1448,    72,     5,     4,   101,
       5,   222,   348,   349,     4,    17,     5,   176,    19,    62,
      17,   180,     4,    89,     4,   128,     4,     4,    99,  1472,
    1473,     5,     5,    88,     4,    88,   102,  2682,     5,  1482,
    2685,   194,   195,  1486,     5,  2690,     5,   258,     4,   152,
    1493,  2696,     5,     5,   120,     4,  2701,   160,   124,     4,
     168,     5,  1928,     5,  1507,     5,     4,     4,     4,  1512,
       5,   137,     4,  1516,   233,  1518,  1519,  2283,  1521,  1522,
    1523,    12,  1525,    12,  2290,  1528,  1529,  1530,  1531,  1532,
    1533,  1534,  1535,  1536,  1537,  1538,   199,     4,  1541,  1542,
    1543,  1544,   103,     4,   207,     4,     4,  2465,  1551,  1552,
       5,   177,  1555,  1556,  1557,   274,   269,  1983,  1561,  1562,
    2478,     5,     5,   282,   283,  2483,   279,   280,   159,   159,
    2775,  1574,  1575,  2778,  1577,  1578,     4,  2461,  2344,     5,
    2464,  2347,  2466,     4,  2350,    38,  2352,    38,   264,   292,
     253,   194,   195,  2798,   264,  2479,  2480,   310,   159,  2025,
       5,     4,   265,     5,     3,     4,     5,  2812,     7,     8,
    2815,  2816,  2496,     5,     5,     3,     4,     5,   281,     7,
       8,     5,  1625,  1626,  1627,     4,     4,  1630,     5,     5,
     277,   277,  1635,  1636,     5,  1638,  1639,  1640,     5,  1642,
    1643,     5,  1645,     4,     4,  1648,  1649,    44,     5,     5,
      47,     5,    62,  1635,  1657,     5,     5,  1057,    67,     5,
       4,     4,  1665,     5,   225,     5,   269,  1670,  1671,     4,
     243,     5,    81,  1676,     5,   107,   279,   280,     5,   243,
      77,    90,  1685,   107,   141,    40,     5,   107,    85,   243,
     216,   216,   101,    40,     5,     4,   249,     5,     5,   216,
       4,   216,     4,     6,     5,     5,     5,   310,     5,   119,
       5,     4,   122,  1113,     4,   113,     5,   113,  1721,  1701,
       5,     5,   131,     4,     4,  1125,     5,     5,     5,  1711,
       5,     4,   243,     5,  1716,     5,  2502,     4,    12,     5,
    1743,  1744,     5,   152,    12,  1748,     4,     4,   145,   159,
       5,  1754,     4,     4,     4,     4,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,     5,     0,   196,     5,   141,   243,
     199,   243,     4,   123,   212,   170,   200,   253,     4,   196,
       4,     4,     4,     4,   277,     5,  2232,  2233,     5,  2235,
    2236,     5,     5,  2239,  2240,     5,     5,   214,   215,     4,
       4,   243,     5,     4,   221,  2743,   223,     4,     4,   238,
       5,     5,     5,  1233,  1234,   243,   243,   247,   314,   314,
       4,   251,     4,     4,     4,     4,     4,     4,   314,   314,
       4,     6,     5,     5,   251,   229,   265,   229,  1861,   229,
    1863,   229,  1865,   229,     5,     4,   276,     4,     4,   279,
       5,     5,     5,     4,  2300,     5,     5,     4,     4,   289,
       4,  1884,  1885,  1886,  1887,  1888,  1889,  1890,  1891,  1892,
       5,     5,     4,     4,     4,   304,     4,   306,     5,     5,
       5,     5,     5,     4,     4,  1908,     4,  1910,     4,   358,
       5,     5,     5,     5,     5,     4,   358,     5,     4,     4,
     317,     5,     5,    32,  1927,  1928,     5,     4,   358,     5,
    1933,     4,   277,     5,     5,     5,     4,     4,     4,  1942,
    1943,  1944,  1945,  1946,  1947,  1948,  1949,  1950,  1951,     5,
       5,  1954,  1955,  1956,  1957,  1958,  1959,  1960,  1961,  1962,
    1963,  1964,  1965,     5,  1967,     5,  1969,  1970,  1971,     4,
       4,  2632,     5,     5,     5,   980,     5,     4,     4,   277,
    1983,  1984,     5,   277,     5,     5,     5,     4,    12,     5,
       5,     5,     5,     4,     4,   358,     5,     4,     4,     4,
       4,   384,     5,     5,   113,     5,     5,     5,     4,     4,
     358,     5,     4,     4,  2017,  1415,  2019,     5,  2021,     5,
    2023,  1421,  2025,  2026,  2450,  2028,     4,     4,  2454,     5,
       5,     4,  2035,  2036,     4,   358,     5,     5,     4,  2042,
       4,  2044,     5,  1443,     5,  2048,  1446,     5,  2051,  2710,
    1450,     5,     5,     5,   293,     4,   310,     5,     4,     4,
     290,     5,     5,     5,  2490,     4,     4,   358,     5,     5,
       5,  1471,  2054,   182,     5,   184,   185,  1477,   187,   188,
       4,     4,   358,     5,     4,  1485,     5,     5,  1488,     5,
       4,     6,     5,     4,  2097,     4,     4,  1497,  1498,     4,
       4,    22,     4,     4,     4,     4,    27,   216,  1508,     4,
       4,     4,  2094,   352,     4,     4,     4,   358,     5,     5,
       4,     6,     5,     4,   290,     5,   235,   236,    49,    50,
       4,    52,    53,     5,     5,     5,     4,     4,     4,     4,
       4,     4,    63,     4,     4,     4,     4,  2195,     5,     4,
    2768,     5,     5,     5,    75,    76,     4,  2643,     5,     4,
     429,     5,    83,     5,     4,    86,     4,  2258,     5,     4,
     279,     4,     4,  2630,     5,     4,     4,     4,     4,  2710,
       5,     5,   291,   104,     4,     4,     4,     4,     4,     4,
     111,   112,     5,     5,   115,     5,     4,     4,  2201,     4,
    2706,     5,   311,     5,     5,     4,   745,     5,     5,  2212,
    2213,  2214,  2215,  2216,  2217,  2218,  2219,  2220,  2221,  2222,
       5,     4,     4,    -1,     5,  2228,     5,     5,    -1,  2232,
    2233,    -1,  2235,  2236,    -1,    -1,  2239,  2240,  2241,  2242,
    2243,  2244,  2245,  2246,    -1,  2248,  2249,  2250,  2721,  2722,
      -1,    -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,
      -1,  2264,  2265,  2266,  2267,   504,  2269,  2270,  2271,  2272,
    2273,  2274,   511,  2276,    -1,   514,  2279,  2280,    -1,    -1,
     519,    -1,    -1,    -1,   523,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2297,    -1,    -1,  2300,  2301,    -1,
      -1,    -1,  2305,    -1,    -1,    -1,  2309,    -1,    -1,    -1,
     231,    -1,   421,    -1,    -1,    -1,   237,    -1,    -1,    -1,
      -1,    -1,    -1,   432,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,   441,   254,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   264,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   590,    41,    -1,  2357,    44,    -1,  1362,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1374,
     291,   292,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1392,  1393,    78,
      -1,   312,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,
     509,   510,    -1,    -1,    -1,    -1,    -1,    96,    97,    -1,
      -1,    -1,    -1,   522,   103,    -1,    -1,    -1,   527,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2429,   536,    -1,    -1,
    2433,    -1,    -1,    -1,    -1,    -1,   357,   126,    -1,    -1,
    2443,  2444,    -1,    -1,    -1,    -1,  2449,  2450,    -1,    -1,
    2453,  2454,     4,     5,    -1,   144,  2459,    -1,    -1,  2462,
    2463,    -1,    -1,    -1,    -1,    -1,    -1,   706,    -1,   158,
     159,    -1,    -1,    -1,   713,    -1,   165,  1877,  2481,  2482,
      -1,  2484,  2485,  2486,  2487,  2488,    -1,  2490,  2491,    -1,
      -1,    -1,  2495,    -1,    -1,    -1,    -1,   186,    -1,   608,
     609,   610,   611,    -1,    -1,  2508,    -1,    -1,    -1,    61,
    2513,    -1,    -1,  1913,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    76,    -1,    -1,    -1,  2531,    81,
      -1,    -1,    84,    -1,    -1,    -1,   225,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
      -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,
     669,    -1,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,
    2573,    -1,    -1,    -1,    -1,  2578,    -1,  2580,     4,   131,
      -1,    -1,    -1,  2586,    -1,    -1,    -1,    -1,    -1,   278,
      -1,   830,    -1,    19,    -1,    -1,  2599,    -1,   837,   288,
     152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2617,   167,    -1,    -1,  2621,    -1,
      -1,    -1,  2670,    -1,    -1,   177,   178,    -1,   317,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2643,    -1,    -1,   882,   883,    -1,    -1,   199,   887,    -1,
      -1,   890,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   902,    -1,    -1,    -1,    -1,    -1,    -1,
     222,  2674,    -1,    -1,    -1,    -1,  2679,   103,  2681,    -1,
      -1,    -1,    -1,    -1,   236,  2688,   238,    -1,    -1,    -1,
    2693,    -1,    -1,    -1,    -1,  2698,    -1,    -1,    -1,    -1,
      -1,   253,    -1,    -1,    -1,    -1,   258,    -1,    -1,    -1,
      -1,    -1,    -1,   265,    -1,    -1,    -1,    -1,  2721,  2722,
     272,    -1,   831,    -1,     3,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,   843,    -1,    -1,    -1,   290,    -1,
      19,    -1,    -1,    -1,  2747,    -1,    -1,  2750,    -1,    -1,
    2753,   303,   304,    -1,   306,    -1,  2738,    -1,    -1,    -1,
      39,  2764,  2765,  2766,  2767,    -1,    -1,    -1,    -1,  1008,
      -1,   880,  1777,  2776,    -1,    -1,  2779,    -1,    57,    -1,
    1785,  1786,    -1,  2786,    -1,  2788,    -1,    -1,  2770,    -1,
      -1,  2773,    -1,    -1,   346,  1800,  1801,    -1,    -1,   225,
      -1,    -1,    -1,    -1,    -1,    -1,  1811,  1812,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1822,  1823,    -1,
      -1,    -1,    -1,   968,   103,    -1,    -1,  1832,  1833,    -1,
      -1,    -1,    -1,  1838,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1848,    -1,    -1,    -1,    -1,    -1,   958,
      -1,    -1,    -1,    -1,    -1,  1000,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     159,    -1,    -1,    -1,  2284,    -1,    -1,    -1,    -1,    -1,
      -1,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   198,
      -1,    -1,    -1,    -1,  1033,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   220,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1206,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1087,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1097,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1236,    -1,    -1,
      -1,    -1,  1241,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1251,    -1,    -1,    -1,    -1,    -1,    -1,   298,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2477,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1201,    -1,    -1,    -1,    -1,  2497,    -1,    -1,
      -1,  2501,    -1,  2108,    -1,    -1,    -1,    -1,    -1,  1218,
      -1,    -1,    -1,  2118,    -1,    -1,    -1,  2122,  2123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2131,  2132,    -1,    -1,
      -1,    -1,    -1,  1242,    -1,  2140,  2141,    -1,    -1,    -1,
      -1,  2146,    -1,  1252,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2156,  2157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1269,    -1,  2167,  2168,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1281,  2178,    -1,    -1,    -1,  1286,     3,     4,
      -1,    -1,  2187,    -1,  2189,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,  1346,  1347,  1348,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1356,  1357,  1358,    -1,    -1,    -1,    -1,  1363,  1364,
    1365,    -1,    -1,  1368,  1369,    -1,  1371,  1372,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    -1,  2636,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1487,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1401,  1402,    -1,    -1,
    1405,  1406,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   103,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,    -1,  1547,    -1,
    1419,    -1,    -1,    -1,  1553,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,    -1,   159,    -1,    -1,    -1,    -1,    -1,
    1449,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2361,    -1,    -1,  2759,
      -1,    -1,    -1,    -1,    -1,    -1,  2371,    -1,    -1,  1478,
      -1,    -1,  1481,    -1,    -1,  2380,    -1,    -1,    -1,    -1,
      -1,    -1,  1491,  1492,  2389,    57,    -1,    -1,    -1,    -1,
    1499,  2396,  1631,    -1,    -1,   220,    -1,  1506,  1637,    -1,
     225,    -1,  2407,    -1,    -1,    -1,    -1,    -1,  2413,    -1,
      -1,  2416,    -1,    -1,  2419,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1662,    -1,    -1,    -1,    -1,    -1,  1668,
      -1,   103,    -1,    -1,    -1,    -1,    -1,  1546,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1558,
      -1,    -1,    -1,    -1,    -1,    -1,  1695,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1703,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,
      -1,    -1,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
      -1,    -1,    -1,    -1,    -1,    -1,  1635,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2539,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2548,  1653,    -1,    -1,    -1,   220,    -1,
      -1,   159,  2557,   225,    -1,    -1,   164,    -1,  2563,    -1,
    1669,    -1,  2567,    -1,    -1,  2570,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1682,    -1,  1684,    -1,    -1,    -1,    16,
      -1,    -1,    -1,    -1,    -1,  1694,    23,    -1,  1697,    -1,
    1699,  1700,  1701,  1702,    -1,    -1,  1705,    -1,    -1,  1708,
      -1,    -1,  1711,  1712,    -1,  1714,  1715,  1716,  1717,    -1,
    1719,  1720,    -1,  1758,    -1,    -1,  1725,  1726,  1727,  1858,
      -1,  1730,  1731,    -1,    -1,    -1,  1771,  1736,  1737,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1781,    -1,    -1,    -1,
      -1,  1880,    -1,    -1,    -1,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,    -1,    -1,  1914,  1915,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1931,  1932,    -1,    -1,    -1,  1936,  1937,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1853,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,  1976,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1987,    -1,
      -1,  1860,    -1,    -1,    -1,  1864,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1876,    -1,    -1,
    1879,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2022,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2038,
    1909,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,
      -1,    -1,   249,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2062,    -1,    -1,    -1,    -1,  2067,    -1,
      -1,    -1,    -1,    -1,  2073,    -1,    -1,    -1,    -1,  2078,
      -1,    -1,    -1,  2082,    -1,    -1,  2085,    -1,    -1,  2088,
      -1,  2090,    -1,    -1,    -1,    -1,  1965,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1988,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
    2039,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2054,    -1,    -1,    -1,    -1,
      -1,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,   101,
      -1,    -1,  2107,    -1,    -1,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2083,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,  2094,   128,    -1,    -1,   131,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2147,  2148,  2149,  2150,  2151,    -1,  2153,  2154,
     152,    -1,    -1,  2158,  2159,  2160,  2161,  2162,   160,  2164,
    2165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    -1,    -1,    70,    -1,    -1,  2275,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2291,    -1,    -1,    -1,    93,   199,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   207,   103,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2321,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2199,    -1,    -1,  2202,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2210,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      -1,   253,    -1,    -1,    -1,  2354,    -1,  2226,    -1,    -1,
    2229,    -1,   159,   265,    -1,  2234,    -1,    -1,  2237,  2238,
      -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,    -1,   281,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   290,    -1,
     292,    -1,    -1,   190,   103,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   212,  2285,  2286,    -1,    -1,
      -1,    -1,    -1,  2422,    -1,    -1,    -1,    -1,   225,  2428,
      -1,    -1,    -1,  2432,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   346,    -1,    -1,    -1,    -1,  2448,
     159,    -1,    -1,    -1,    -1,  2360,    -1,  2326,  2363,  2364,
    2365,  2366,  2367,    -1,  2369,  2370,    -1,  2372,  2373,  2374,
    2375,  2376,    -1,  2378,  2379,    -1,  2381,  2382,  2383,  2384,
    2385,   278,  2387,  2388,    -1,  2390,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2400,  2401,    -1,    -1,    -1,
    2499,  2500,    -1,    -1,    -1,    -1,  2411,    18,    19,    -1,
      -1,   220,    -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,    59,   346,
      -1,    -1,    -1,    -1,    -1,  2424,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   286,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2457,    -1,
      -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,  2468,
      -1,    -1,    -1,    -1,    -1,  2604,   117,    -1,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,    -1,  2542,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,  2551,    -1,   159,  2518,
      -1,    -1,    -1,  2522,    -1,  2560,    -1,  2562,    -1,    -1,
      -1,  2566,    -1,    -1,    -1,   176,    -1,    49,    50,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    63,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,  2702,    -1,    -1,    -1,  2576,  2577,    -1,
    2579,    -1,    -1,    -1,   225,  2584,  2585,    19,    -1,    -1,
    2589,    -1,    -1,    -1,    -1,    -1,  2725,    -1,    -1,   111,
     112,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
      -1,    -1,    -1,  2622,  2659,    57,  2661,    -1,  2663,    -1,
      -1,  2666,    -1,  2668,    -1,    -1,    -1,    -1,    -1,    -1,
     152,    -1,  2771,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2650,    -1,   294,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2791,   175,    -1,  2794,    -1,    -1,    -1,    -1,
      -1,   103,   184,    -1,    -1,    -1,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   229,    -1,   231,
      -1,    -1,    -1,    -1,    -1,   237,   238,   159,    -1,    -1,
      -1,    -1,    -1,    49,    50,    19,    -1,    53,    -1,  2738,
      56,    -1,   254,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    67,    -1,   265,    -1,    -1,  2755,    -1,    -1,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    -1,
      -1,  2770,    -1,    -1,  2773,    -1,    60,    -1,   290,    19,
     292,    -1,    -1,    -1,    -1,   101,    -1,    -1,   220,    -1,
     302,   107,    -1,   225,    -1,   111,   112,    -1,    -1,   115,
     312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   131,    -1,    57,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   346,    -1,   152,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,   175,
      -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   199,    -1,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   229,    -1,   231,    -1,    -1,    -1,   159,
      -1,   237,   238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   253,   254,   103,
      -1,   225,    -1,    -1,    -1,    -1,    -1,    -1,   264,   265,
      -1,    -1,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   290,    -1,   292,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,   304,    -1,
     306,    -1,    -1,    -1,    -1,   159,   312,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     294,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     346,    -1,    -1,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   225,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,    41,    -1,    -1,    44,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    41,    78,    -1,
      44,    -1,    -1,    47,    -1,    85,    -1,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    98,    -1,
      -1,    -1,    66,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    80,    -1,    -1,    -1,
      -1,    85,    -1,    87,    88,    89,    -1,   127,    -1,    -1,
      -1,    95,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,
     140,    -1,    -1,    -1,   144,    -1,    -1,   147,    -1,    -1,
      -1,   151,   152,    -1,    -1,    -1,    -1,    -1,   158,    -1,
      -1,    -1,   126,    -1,   164,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   178,    -1,
     144,   181,   182,   183,    -1,    -1,   186,   187,   152,    -1,
     154,   155,    -1,    -1,   158,    -1,    -1,    -1,   162,    -1,
     164,   201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   218,   219,
     220,    -1,   186,   187,    -1,    -1,    -1,   191,    -1,    -1,
      -1,    -1,   232,    -1,   234,    -1,    -1,   201,    -1,    -1,
      -1,   241,    -1,    -1,    -1,   245,    -1,    -1,    -1,   249,
      -1,   251,    -1,   253,   218,   219,    -1,    -1,   258,    -1,
      -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,   278,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   251,    -1,   253,
      -1,    -1,    -1,   293,   294,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   305,    -1,   307,    -1,    -1,
      -1,    -1,    -1,   313,   278,    -1,   316,   317,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   293,
     294,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   302,    -1,
      -1,    -1,    -1,    -1,    -1,   309,    -1,   347,    -1,    -1,
      -1,   315,    -1,   317,   354,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     354
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
       4,   200,   136,   252,   364,   361,     4,     5,    61,    67,
     116,   131,   146,   152,   157,   212,   231,   236,   238,   264,
     265,   272,   290,   346,   510,   373,   192,   192,    67,   462,
      67,   463,    67,   464,   229,   465,   361,     5,   426,   230,
     467,   372,   378,     5,   371,   371,   371,   371,     4,   363,
       4,     4,   200,   361,    14,    15,    62,   194,   195,   269,
     279,   280,   310,    88,     5,     5,    14,    15,    62,   194,
     195,   269,   279,   280,   284,   310,    88,   159,   164,   372,
     487,   492,    88,   159,     5,   485,     4,     4,    14,    62,
     194,   269,   279,   310,     5,     5,     4,   361,   372,    20,
      21,    22,    49,    50,    53,    56,    63,    67,    75,    76,
      83,    84,   101,   107,   111,   112,   115,   131,   152,   175,
     199,   229,   231,   237,   238,   253,   254,   264,   265,   290,
     292,   304,   306,   312,   346,    67,    81,    90,   101,   131,
     152,   199,   238,   265,   304,   306,     4,    30,   163,   217,
     243,   504,     5,    64,   106,   240,   256,   257,   348,   349,
     509,   101,   502,    17,   265,   507,    40,   113,   198,   508,
       4,     5,    17,   216,   299,   361,   265,   509,   517,   126,
     509,   518,    36,    40,   113,   135,   198,   298,   361,   519,
     371,   363,    93,   101,   107,   128,   152,   160,   199,   207,
     253,   265,   281,   522,    40,   113,   198,     5,   265,   291,
     526,    17,   216,   299,   527,   292,   363,   528,     5,   101,
     107,   307,    17,    17,     4,   361,   361,   361,   361,   361,
     361,   378,   361,   361,   370,   361,     4,   378,     4,    40,
     113,   198,   270,   546,    40,   113,   198,   270,   547,     4,
      99,     5,     5,    88,     4,     5,     5,    88,     5,   557,
      62,   122,   159,   279,   561,    62,   122,   279,   565,    88,
     159,    62,   122,   279,   559,     4,    62,   122,   279,   558,
       5,     5,     4,     4,     5,     5,     5,   361,   361,   361,
       4,   361,   571,   361,   361,     6,   372,     4,     5,     4,
       4,     5,     4,    99,   267,   379,   361,   361,    12,     5,
      12,   361,   361,    12,     4,    12,     4,     4,   361,   361,
     361,     4,   363,     4,     4,   378,   371,   378,   361,   361,
     361,   371,   361,   370,   361,   361,     5,     5,   361,   373,
     361,   371,   361,   378,   378,   379,   379,   379,   378,   370,
     361,   378,   361,   364,   454,   168,     5,     4,   378,   159,
     159,     4,     5,     4,     4,   361,   449,    38,    38,   361,
      20,    21,    22,    49,    50,    53,    60,    63,    67,    75,
      76,    83,   111,   112,   115,   131,   152,   175,   184,   229,
     231,   237,   238,   254,   265,   290,   292,   302,   312,   346,
      67,   131,   157,   238,   290,    30,   163,   217,   243,   511,
     361,   212,   361,   512,    17,   361,   264,   522,   264,   212,
     361,   513,   292,   514,    17,   100,   361,   361,     5,   379,
      57,   371,     4,     5,   478,   361,     5,     5,     5,   159,
     187,   383,   383,   167,   271,   381,     4,     4,     5,     5,
     482,   277,   277,     5,     5,     5,    17,   161,   382,   382,
     381,     4,     4,   381,     5,     5,   486,   164,   345,   372,
     490,     5,   489,     5,     5,   493,     5,   494,     5,    14,
      15,    62,   194,   195,   269,   279,   280,   284,   310,     4,
       4,     5,     5,   383,   381,     4,     5,     5,   378,    83,
     154,   227,   228,   242,   285,   386,     7,     8,   361,   366,
     243,   123,   243,   243,   107,    40,    67,   101,   107,   113,
     131,   152,   167,   199,   238,   253,   265,   292,   304,   306,
     307,   346,   503,   123,   243,     5,    27,   169,   243,   288,
     141,   107,    22,    50,    53,    83,   112,   115,   231,   264,
      22,    50,    53,    56,    83,   112,   115,   231,   264,   290,
      40,   123,   243,   243,   107,     5,   216,    27,   229,    36,
     135,   298,   361,   268,   275,   123,   249,   371,   522,    40,
     132,   229,   288,   249,   216,     5,     5,   253,    27,   229,
       4,     5,     5,   216,    36,   135,   298,   361,   522,   216,
     363,     4,     4,   361,     5,   310,    22,    27,    49,    50,
      52,    53,    63,    75,    76,    83,    86,   104,   111,   112,
     115,   175,   231,   237,   254,   264,   291,   292,   312,   357,
     505,   361,   361,   361,   361,   361,   509,   371,     5,     4,
       5,   361,   361,   371,   361,   363,   361,   361,   509,     5,
       5,   361,   361,   363,     5,    17,     5,     5,   361,   361,
     370,   361,   361,     4,   361,   361,   113,   361,   361,   113,
       4,    42,    43,   173,   174,   202,   388,   388,    62,   122,
     279,   555,   388,     5,    62,   122,   279,   560,     5,     5,
      62,   122,   279,   562,     4,     5,     5,     4,    62,   122,
     279,   564,    62,   122,   279,   563,     5,     5,     4,     5,
       5,     4,   388,   388,   388,   361,   361,   361,     4,   371,
     361,   372,   378,     5,     5,    12,   361,   371,   373,   361,
      12,   361,   361,   361,    60,   361,     6,     4,   361,   361,
      47,   278,   415,     5,   363,   363,   378,   361,     4,     4,
       4,   378,   371,   361,   361,   361,   361,   378,   371,   379,
     370,   361,     4,   379,   361,     4,   373,     5,    24,    25,
      99,   380,     4,   371,   361,   361,     4,   361,     5,    83,
     154,   227,   228,   242,   285,   371,   373,   243,   123,   243,
     243,    21,   243,   371,   123,   243,    27,   169,   243,   288,
     141,    21,   243,   123,   243,   243,    21,   243,    27,   170,
     229,   170,   268,   275,   123,   170,   229,   296,   522,   132,
     170,   229,   288,     4,   253,    27,   170,   229,   522,   212,
     361,   361,   361,   361,   361,   361,   200,   361,   361,    20,
     239,   470,     4,     4,   361,   383,   383,   383,     4,   383,
     383,   383,    14,    15,    62,   194,   195,   269,   279,   280,
     310,   382,   383,   383,   383,   383,   383,     4,   383,   383,
       4,   382,    14,    15,    62,   194,   195,   269,   279,   280,
     310,     5,   488,     5,   491,     5,     5,    14,    15,    62,
     194,   195,   269,   279,   280,   284,   310,     5,    14,    15,
      62,   194,   195,   269,   279,   280,   284,   310,     5,    14,
      15,    62,   194,   195,   269,   279,   280,   284,   310,    14,
      15,    62,   194,   195,   269,   279,   280,   310,   277,     5,
       5,     5,   382,   382,   381,     4,     4,   381,     5,     4,
       4,   383,   383,     4,   383,   383,     5,   363,   371,   373,
       5,   361,   363,   361,     5,   361,     5,   366,   107,   199,
     253,   107,   199,   253,     5,   363,   361,   363,     5,   361,
     371,   363,     5,   366,   243,   243,    21,   243,    21,   243,
     243,    21,   243,   314,   314,     4,     4,     4,   503,     4,
       4,     4,   314,   314,     4,     5,     4,   363,   361,     5,
     361,     5,   366,   363,   371,   371,   361,    27,    49,    52,
      63,    86,   104,   357,   384,     4,   363,   361,   378,   363,
       5,   371,   371,   361,   363,   363,   371,   371,   361,   363,
     361,     5,   361,   229,   229,   361,   361,   229,   361,   229,
     361,   361,   515,   523,   361,   229,   229,   361,   361,   361,
     361,   361,   361,   361,   361,     5,   310,   361,   506,   361,
     361,   229,   361,   361,   361,   361,   371,   378,     5,     4,
       4,   361,   361,   378,   361,   361,   361,   371,   509,   361,
     361,     5,     4,   361,   361,   361,   361,     5,     5,     4,
     388,     5,     5,     4,     4,     4,     5,     5,     4,     4,
       5,     5,     4,     5,     5,     4,   361,   361,   361,   361,
     378,   361,   371,   373,   361,   378,   361,   361,   361,   361,
     361,     5,   361,     4,     6,   361,   361,     4,   371,   361,
     378,   180,   376,   361,   376,   379,   378,   371,   361,   361,
       4,   361,   371,   371,   361,     4,   364,     5,     5,     5,
       5,     5,   371,   378,   371,   371,   371,   371,   373,   371,
     378,   371,   371,   371,   373,   371,   371,   371,   371,   373,
     371,   371,   371,   361,   371,   371,   371,   371,   371,   371,
     371,   361,   361,     4,   361,     5,     4,   361,   383,     5,
       5,     5,   381,     4,     4,     5,   383,   382,     4,   383,
       5,     5,     5,   382,   382,   381,     4,     4,     5,    14,
      15,    62,   194,   195,   269,   279,   280,   310,    14,    15,
      62,   194,   195,   269,   279,   280,   310,    14,    15,    62,
     194,   195,   269,   279,   280,   310,   277,     5,     5,     5,
     382,   382,   381,     4,     4,   381,     5,   277,     5,     5,
       5,   382,   382,   381,     4,     4,   381,     5,   277,     5,
       5,     5,   382,   382,   381,     4,     4,   381,     5,     5,
       5,     5,   382,   382,   381,     4,     4,     5,   382,     4,
       4,   382,     4,     4,   383,     5,   378,   371,   361,   361,
     371,   361,     5,   366,     5,   371,   363,     5,   371,   378,
       5,   366,   361,   361,   361,   361,   361,   361,   361,   361,
     361,     4,     4,     5,     4,     4,   361,   371,   361,     5,
     366,   363,   378,   378,   361,   370,   378,   378,   361,   378,
     378,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,    56,    67,    94,   131,   290,   292,   346,   520,   521,
     522,   534,   535,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   371,     5,   361,   361,   361,
     361,     4,     4,   378,   379,     5,     5,   370,   361,     4,
     378,   371,     4,   388,   388,   388,   366,   361,   361,   361,
     378,   361,   370,   361,   361,    12,     5,     5,     4,   361,
     361,     4,   378,   371,   361,   361,   379,   380,   361,     5,
     361,   371,   373,     5,     5,     5,     5,     5,   378,   380,
     380,   380,   378,   380,   379,   380,   380,   378,   380,   380,
     380,   378,   380,   380,   378,   371,   380,   378,   380,   380,
     378,   380,   378,     4,   371,   373,     5,   361,     4,   383,
     382,     4,   382,     5,     5,     5,   382,   382,   381,     4,
       4,     5,     5,     5,     5,   382,   382,   381,     4,     4,
       5,     5,     5,     5,   382,   382,   381,     4,     4,     5,
     382,   383,   383,   383,   383,   383,     4,   383,   383,     4,
     382,   382,   383,   383,   383,   383,   383,     4,   383,   383,
       4,   382,   382,     4,     4,   382,     4,   382,   382,     4,
       4,     4,   372,   380,     4,   371,   380,   361,   371,     4,
     380,   380,   371,     4,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   371,   380,   361,   371,     4,
     370,   370,   371,   370,   370,   371,   371,   370,   370,   361,
     361,   361,   361,   361,   361,   366,   361,   361,   361,   358,
     358,   358,   358,   358,   358,   358,   521,   358,   366,   361,
     361,   361,   361,   366,   361,   361,   361,   361,   361,   361,
     378,   361,   310,   365,   366,   361,   361,   379,   363,   371,
     371,   379,   378,     4,   361,   370,   361,    60,   361,     5,
       5,   361,     4,   376,   380,     5,   378,     4,     5,     4,
       5,   371,     5,   379,   380,   379,   379,   379,     5,   378,
       4,   361,   383,   382,   383,   383,   383,   383,   383,     4,
     383,   383,   382,   383,   383,   383,   383,   383,     4,   383,
     383,   382,   383,   383,   383,   383,   383,     4,   383,   383,
     382,   383,   382,     4,   383,   383,   382,     4,   383,   382,
       4,   382,   382,   378,   371,   380,     4,   378,   361,   378,
     361,   361,   361,   380,     4,   378,   361,   370,   380,   361,
     370,   380,   380,   371,   361,     4,   385,   385,   361,   361,
     385,   366,   385,   523,   371,   503,     5,     4,     5,     5,
       5,     4,   363,   366,   385,   385,   361,   361,   366,   361,
     361,   361,   361,   361,   370,   361,     5,   523,   361,   385,
     363,   524,   525,   378,   378,   363,   379,     4,     5,   361,
       5,     4,     6,   361,     4,    32,   188,   287,   422,   371,
       5,    32,   188,   287,   387,   371,     4,   422,   361,   382,
     383,   382,   383,   382,   383,   383,   382,   383,   382,   382,
     361,   380,   371,   371,   361,   371,   361,   371,   371,   361,
     371,   380,     4,   523,   523,   365,   361,   523,     4,   523,
     378,     5,     4,     4,   523,   523,   365,   361,     4,   523,
     523,   361,   371,   523,   523,   523,   524,   531,   532,   522,
     529,   530,   363,     4,     5,     5,     6,     4,   191,   308,
     353,   361,   413,   422,     4,   371,   422,     4,   383,   383,
     383,   383,   383,   372,   380,   380,   361,   380,     4,   380,
     380,   361,   380,   361,   523,   523,     4,   361,   523,     5,
     361,   523,     4,   361,   523,   378,   531,   533,   534,   358,
     530,     5,     5,     4,   361,   414,   361,   414,   378,   380,
       4,   371,   373,     4,   366,   365,   361,   361,   365,   361,
     371,   534,   363,     5,     5,   361,   361,   361,   361,   387,
       5,   371,   373,   378,   371,   373,   523,   361,     4,   523,
     361,   380,     5,     5,   361,     5,   361,   378,   378,     4,
     523,     4,     5,     5,     5,   365,   365,   523,   523,   523
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
#line 1009 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 336:
#line 1012 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 337:
#line 1015 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 351:
#line 1029 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 354:
#line 1032 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 355:
#line 1033 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 359:
#line 1037 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 360:
#line 1038 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 363:
#line 1041 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 364:
#line 1042 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 366:
#line 1045 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 368:
#line 1047 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 370:
#line 1049 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 372:
#line 1051 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 373:
#line 1053 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 376:
#line 1056 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 377:
#line 1060 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 378:
#line 1062 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 379:
#line 1066 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 380:
#line 1068 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 381:
#line 1071 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 382:
#line 1072 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 383:
#line 1073 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 384:
#line 1074 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 385:
#line 1075 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 386:
#line 1076 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 388:
#line 1078 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 389:
#line 1081 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 390:
#line 1082 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 391:
#line 1083 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 392:
#line 1086 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 393:
#line 1089 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 394:
#line 1091 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 395:
#line 1093 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 396:
#line 1094 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 397:
#line 1095 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 399:
#line 1097 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 401:
#line 1100 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 402:
#line 1106 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 403:
#line 1107 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 404:
#line 1110 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 405:
#line 1111 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 406:
#line 1112 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 407:
#line 1115 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 408:
#line 1116 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 410:
#line 1122 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 411:
#line 1124 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 412:
#line 1126 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 413:
#line 1129 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 415:
#line 1131 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 416:
#line 1135 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 417:
#line 1139 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 419:
#line 1141 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 420:
#line 1142 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 421:
#line 1143 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 422:
#line 1144 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 423:
#line 1145 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 425:
#line 1147 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 426:
#line 1148 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 427:
#line 1151 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 428:
#line 1152 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 429:
#line 1153 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 430:
#line 1156 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 431:
#line 1157 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 432:
#line 1161 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 433:
#line 1163 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 434:
#line 1171 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 435:
#line 1173 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 436:
#line 1175 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 437:
#line 1178 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 438:
#line 1180 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 439:
#line 1181 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 440:
#line 1184 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 441:
#line 1187 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 442:
#line 1189 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 443:
#line 1193 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 444:
#line 1195 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 445:
#line 1198 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 446:
#line 1202 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 447:
#line 1203 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 448:
#line 1205 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 449:
#line 1208 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 450:
#line 1209 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 452:
#line 1213 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 453:
#line 1214 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 454:
#line 1215 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 455:
#line 1218 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 456:
#line 1220 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 457:
#line 1221 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 459:
#line 1223 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 463:
#line 1227 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 464:
#line 1228 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 465:
#line 1229 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 466:
#line 1231 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 468:
#line 1233 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 469:
#line 1236 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 470:
#line 1238 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 471:
#line 1240 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 472:
#line 1241 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 473:
#line 1242 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 474:
#line 1243 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 475:
#line 1246 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 476:
#line 1247 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 477:
#line 1251 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 478:
#line 1253 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 479:
#line 1256 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 480:
#line 1259 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 481:
#line 1260 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 482:
#line 1262 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 483:
#line 1264 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 484:
#line 1266 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 485:
#line 1269 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 486:
#line 1270 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 487:
#line 1271 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 488:
#line 1274 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 489:
#line 1275 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 490:
#line 1276 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 491:
#line 1277 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 492:
#line 1278 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 493:
#line 1279 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 494:
#line 1280 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 495:
#line 1283 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 496:
#line 1286 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 497:
#line 1287 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 498:
#line 1288 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 499:
#line 1291 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 500:
#line 1292 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 501:
#line 1293 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 502:
#line 1294 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 503:
#line 1295 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 504:
#line 1296 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 509:
#line 1303 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 510:
#line 1304 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 511:
#line 1305 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 512:
#line 1308 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 513:
#line 1309 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 514:
#line 1312 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 515:
#line 1313 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 516:
#line 1316 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 517:
#line 1317 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 518:
#line 1320 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 519:
#line 1321 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 520:
#line 1324 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 522:
#line 1326 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 523:
#line 1329 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 524:
#line 1330 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 526:
#line 1334 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 527:
#line 1338 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 528:
#line 1341 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 529:
#line 1348 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 530:
#line 1349 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 531:
#line 1352 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 532:
#line 1353 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 535:
#line 1356 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 536:
#line 1357 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 537:
#line 1358 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 538:
#line 1359 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 540:
#line 1361 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 541:
#line 1362 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 542:
#line 1363 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 544:
#line 1365 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 545:
#line 1366 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 546:
#line 1367 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 547:
#line 1368 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 549:
#line 1372 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 550:
#line 1375 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 551:
#line 1376 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 552:
#line 1379 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 553:
#line 1380 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 554:
#line 1381 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 555:
#line 1382 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 556:
#line 1385 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 557:
#line 1386 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 558:
#line 1387 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 559:
#line 1388 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 560:
#line 1391 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 561:
#line 1392 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 562:
#line 1393 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 563:
#line 1394 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 564:
#line 1395 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 565:
#line 1396 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 566:
#line 1399 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 567:
#line 1400 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 568:
#line 1401 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 571:
#line 1405 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 572:
#line 1406 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 573:
#line 1409 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 574:
#line 1412 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 575:
#line 1413 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 576:
#line 1417 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 577:
#line 1419 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 578:
#line 1420 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 585:
#line 1432 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 586:
#line 1434 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 587:
#line 1436 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 588:
#line 1437 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 589:
#line 1439 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 590:
#line 1441 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 591:
#line 1443 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 592:
#line 1445 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 593:
#line 1447 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 595:
#line 1451 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 596:
#line 1452 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 597:
#line 1453 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 598:
#line 1454 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 599:
#line 1455 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 600:
#line 1457 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 601:
#line 1458 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 602:
#line 1459 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 603:
#line 1460 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 604:
#line 1463 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 605:
#line 1467 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 606:
#line 1469 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 607:
#line 1471 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 608:
#line 1473 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 609:
#line 1475 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 610:
#line 1477 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 611:
#line 1479 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 612:
#line 1481 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 613:
#line 1484 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 614:
#line 1486 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 615:
#line 1488 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 621:
#line 1496 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 622:
#line 1497 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 623:
#line 1498 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 624:
#line 1499 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 625:
#line 1500 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 626:
#line 1501 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 627:
#line 1503 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 628:
#line 1505 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 629:
#line 1506 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 630:
#line 1507 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 631:
#line 1508 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 632:
#line 1511 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 633:
#line 1512 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 634:
#line 1513 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 635:
#line 1514 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 636:
#line 1515 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 637:
#line 1517 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 638:
#line 1518 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 639:
#line 1519 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 640:
#line 1520 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 646:
#line 1531 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 647:
#line 1534 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 648:
#line 1537 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 649:
#line 1540 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 650:
#line 1543 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 651:
#line 1546 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 652:
#line 1549 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 653:
#line 1552 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 654:
#line 1555 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 655:
#line 1560 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 656:
#line 1563 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 657:
#line 1566 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 658:
#line 1569 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 659:
#line 1572 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 660:
#line 1575 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 661:
#line 1578 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 662:
#line 1581 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 663:
#line 1584 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 664:
#line 1587 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 665:
#line 1590 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 666:
#line 1595 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 667:
#line 1598 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 668:
#line 1601 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 669:
#line 1604 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 670:
#line 1607 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 671:
#line 1610 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 672:
#line 1613 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 673:
#line 1616 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 674:
#line 1619 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 675:
#line 1624 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 676:
#line 1626 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 677:
#line 1628 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 678:
#line 1630 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 679:
#line 1632 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 680:
#line 1634 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 681:
#line 1639 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 682:
#line 1641 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 683:
#line 1643 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 684:
#line 1647 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 685:
#line 1650 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 686:
#line 1653 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 687:
#line 1656 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 688:
#line 1659 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 689:
#line 1662 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 690:
#line 1665 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 691:
#line 1668 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 692:
#line 1671 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 693:
#line 1674 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 694:
#line 1677 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 695:
#line 1681 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 696:
#line 1682 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 697:
#line 1683 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 698:
#line 1684 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 699:
#line 1685 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 700:
#line 1686 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 701:
#line 1688 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 702:
#line 1690 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 703:
#line 1691 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 704:
#line 1692 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 705:
#line 1693 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 706:
#line 1696 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 707:
#line 1697 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 708:
#line 1698 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 709:
#line 1699 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 710:
#line 1700 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 711:
#line 1702 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 712:
#line 1703 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 713:
#line 1704 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 714:
#line 1705 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 715:
#line 1709 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 716:
#line 1711 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 717:
#line 1712 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 718:
#line 1714 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 719:
#line 1716 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 720:
#line 1718 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 721:
#line 1721 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 722:
#line 1722 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 723:
#line 1725 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 724:
#line 1726 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 725:
#line 1727 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 726:
#line 1730 "frame/parser.Y"
    {;}
    break;

  case 727:
#line 1733 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 728:
#line 1734 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 729:
#line 1735 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 730:
#line 1736 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 731:
#line 1737 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 732:
#line 1738 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 733:
#line 1739 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 734:
#line 1743 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 736:
#line 1751 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 737:
#line 1752 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 738:
#line 1754 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 739:
#line 1756 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 740:
#line 1757 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 741:
#line 1758 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 743:
#line 1759 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 746:
#line 1762 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 747:
#line 1763 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 748:
#line 1765 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 749:
#line 1767 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 750:
#line 1769 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 751:
#line 1772 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 752:
#line 1774 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 753:
#line 1775 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 754:
#line 1777 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 755:
#line 1780 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 756:
#line 1783 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 757:
#line 1785 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 758:
#line 1788 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 759:
#line 1791 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 760:
#line 1794 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 761:
#line 1797 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 762:
#line 1801 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 763:
#line 1805 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 764:
#line 1810 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 765:
#line 1814 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 766:
#line 1815 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 767:
#line 1817 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 768:
#line 1818 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 769:
#line 1820 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 770:
#line 1822 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 771:
#line 1824 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 772:
#line 1826 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 773:
#line 1827 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 774:
#line 1829 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 775:
#line 1831 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 776:
#line 1834 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 777:
#line 1838 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 778:
#line 1842 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 779:
#line 1844 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 780:
#line 1846 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 781:
#line 1848 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 782:
#line 1850 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 783:
#line 1852 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 784:
#line 1854 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 785:
#line 1856 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 786:
#line 1858 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 787:
#line 1860 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 788:
#line 1862 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 789:
#line 1864 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 790:
#line 1866 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 791:
#line 1868 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 792:
#line 1869 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 793:
#line 1871 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 794:
#line 1873 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 795:
#line 1874 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 796:
#line 1875 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 797:
#line 1877 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 798:
#line 1879 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 799:
#line 1880 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 800:
#line 1881 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 801:
#line 1882 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 802:
#line 1884 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 803:
#line 1885 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 804:
#line 1887 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 805:
#line 1891 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 806:
#line 1894 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 807:
#line 1897 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 808:
#line 1901 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 809:
#line 1905 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 810:
#line 1910 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 811:
#line 1914 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 812:
#line 1915 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 813:
#line 1916 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 814:
#line 1918 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 815:
#line 1920 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 816:
#line 1924 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 817:
#line 1925 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 818:
#line 1926 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 819:
#line 1928 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 820:
#line 1931 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 821:
#line 1934 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 822:
#line 1937 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 823:
#line 1938 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 824:
#line 1940 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 825:
#line 1943 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 826:
#line 1947 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 827:
#line 1949 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 828:
#line 1950 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 829:
#line 1952 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 830:
#line 1955 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 831:
#line 1958 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 832:
#line 1959 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 833:
#line 1961 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 834:
#line 1962 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 835:
#line 1963 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 836:
#line 1965 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 837:
#line 1966 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 838:
#line 1968 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 839:
#line 1971 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 840:
#line 1974 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 841:
#line 1976 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 842:
#line 1977 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 846:
#line 1982 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 847:
#line 1983 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 848:
#line 1985 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 849:
#line 1987 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 850:
#line 1989 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 851:
#line 1990 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 855:
#line 1996 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 856:
#line 1997 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 857:
#line 1998 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 858:
#line 1999 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 859:
#line 2000 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 860:
#line 2001 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 861:
#line 2002 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 862:
#line 2003 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 863:
#line 2004 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 864:
#line 2005 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 865:
#line 2007 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 866:
#line 2009 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 867:
#line 2010 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 868:
#line 2011 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 869:
#line 2012 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 870:
#line 2013 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 871:
#line 2015 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 872:
#line 2016 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 873:
#line 2017 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 874:
#line 2018 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 875:
#line 2019 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 876:
#line 2021 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 877:
#line 2022 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 878:
#line 2023 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 879:
#line 2024 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 880:
#line 2025 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 881:
#line 2026 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 882:
#line 2029 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 883:
#line 2030 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 884:
#line 2031 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 885:
#line 2032 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 886:
#line 2033 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 887:
#line 2034 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 888:
#line 2035 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 889:
#line 2036 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 890:
#line 2037 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 891:
#line 2038 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 892:
#line 2039 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 893:
#line 2040 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 894:
#line 2041 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 895:
#line 2042 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 896:
#line 2043 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 897:
#line 2044 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 898:
#line 2045 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 899:
#line 2046 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 900:
#line 2047 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 901:
#line 2048 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 902:
#line 2049 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 903:
#line 2052 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 904:
#line 2053 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 905:
#line 2054 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 906:
#line 2055 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 907:
#line 2056 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 908:
#line 2058 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 909:
#line 2068 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 910:
#line 2076 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 911:
#line 2085 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 912:
#line 2093 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2100 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2107 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2115 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2123 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2128 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2133 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2138 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2143 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2148 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 922:
#line 2153 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 923:
#line 2158 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 924:
#line 2167 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 925:
#line 2177 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 926:
#line 2187 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 927:
#line 2196 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 928:
#line 2204 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 929:
#line 2214 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 930:
#line 2224 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 931:
#line 2234 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 932:
#line 2246 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 933:
#line 2255 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 935:
#line 2263 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 936:
#line 2265 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 937:
#line 2267 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 938:
#line 2272 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 939:
#line 2275 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 940:
#line 2276 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 941:
#line 2277 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 942:
#line 2284 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 943:
#line 2286 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 944:
#line 2287 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 945:
#line 2290 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 946:
#line 2291 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 947:
#line 2292 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 948:
#line 2293 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 949:
#line 2294 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 950:
#line 2295 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 951:
#line 2296 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 953:
#line 2300 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 954:
#line 2301 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 955:
#line 2302 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 956:
#line 2303 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 957:
#line 2304 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 958:
#line 2307 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 959:
#line 2309 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 960:
#line 2311 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 961:
#line 2313 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 962:
#line 2315 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 963:
#line 2317 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 964:
#line 2319 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 965:
#line 2320 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 966:
#line 2321 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 967:
#line 2323 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 968:
#line 2325 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 969:
#line 2327 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 970:
#line 2329 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 971:
#line 2331 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 972:
#line 2332 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 973:
#line 2333 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 974:
#line 2335 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 975:
#line 2337 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 976:
#line 2340 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 977:
#line 2342 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 978:
#line 2344 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 979:
#line 2345 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 980:
#line 2346 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 981:
#line 2347 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 982:
#line 2349 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 983:
#line 2350 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 984:
#line 2351 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 985:
#line 2352 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 986:
#line 2353 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 987:
#line 2355 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 988:
#line 2357 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 989:
#line 2358 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 990:
#line 2360 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 991:
#line 2362 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 992:
#line 2364 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 993:
#line 2365 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 994:
#line 2367 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 995:
#line 2369 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 996:
#line 2370 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 997:
#line 2371 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 998:
#line 2372 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 999:
#line 2374 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1000:
#line 2376 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1001:
#line 2379 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1002:
#line 2382 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1003:
#line 2383 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1004:
#line 2384 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1005:
#line 2386 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1006:
#line 2389 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1007:
#line 2392 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1008:
#line 2393 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1009:
#line 2394 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1010:
#line 2395 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1011:
#line 2397 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1012:
#line 2399 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1013:
#line 2401 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1014:
#line 2402 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1015:
#line 2404 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1016:
#line 2405 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1017:
#line 2406 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1018:
#line 2407 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1019:
#line 2408 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1020:
#line 2410 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1021:
#line 2412 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1022:
#line 2414 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1023:
#line 2416 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1025:
#line 2418 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1026:
#line 2419 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1027:
#line 2421 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1028:
#line 2423 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1029:
#line 2424 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1030:
#line 2425 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1032:
#line 2427 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1034:
#line 2431 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1035:
#line 2432 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1036:
#line 2433 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1037:
#line 2434 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1038:
#line 2435 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1039:
#line 2436 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1040:
#line 2438 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1041:
#line 2439 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1042:
#line 2441 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1043:
#line 2444 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1044:
#line 2445 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1045:
#line 2446 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1046:
#line 2447 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1047:
#line 2450 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1048:
#line 2451 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1049:
#line 2454 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1050:
#line 2455 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1051:
#line 2458 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1052:
#line 2459 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1053:
#line 2462 "frame/parser.Y"
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

  case 1054:
#line 2475 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1055:
#line 2476 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1056:
#line 2480 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1057:
#line 2481 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1058:
#line 2485 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1059:
#line 2486 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1060:
#line 2491 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1061:
#line 2495 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1062:
#line 2500 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1063:
#line 2502 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1064:
#line 2505 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1065:
#line 2507 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1066:
#line 2510 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1067:
#line 2512 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1068:
#line 2515 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1069:
#line 2516 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1070:
#line 2517 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1071:
#line 2518 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1072:
#line 2519 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1073:
#line 2520 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1074:
#line 2522 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1077:
#line 2529 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1078:
#line 2530 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1079:
#line 2531 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1080:
#line 2532 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1081:
#line 2533 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1082:
#line 2534 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1085:
#line 2539 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1086:
#line 2540 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1087:
#line 2541 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1088:
#line 2542 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1089:
#line 2543 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1090:
#line 2544 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1091:
#line 2545 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1092:
#line 2546 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1093:
#line 2547 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1094:
#line 2548 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1095:
#line 2549 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1098:
#line 2556 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1099:
#line 2557 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1101:
#line 2561 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1102:
#line 2563 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1103:
#line 2564 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1104:
#line 2567 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1105:
#line 2568 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1106:
#line 2569 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1107:
#line 2570 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1108:
#line 2573 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1109:
#line 2574 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1112:
#line 2582 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1113:
#line 2585 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1114:
#line 2586 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1118:
#line 2593 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1119:
#line 2596 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1120:
#line 2600 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1121:
#line 2601 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1122:
#line 2602 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1123:
#line 2603 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1124:
#line 2604 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1125:
#line 2605 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1126:
#line 2606 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1127:
#line 2607 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1128:
#line 2613 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1129:
#line 2614 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1130:
#line 2615 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1131:
#line 2616 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1132:
#line 2620 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1133:
#line 2621 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1134:
#line 2623 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1135:
#line 2628 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1137:
#line 2630 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1139:
#line 2632 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1140:
#line 2635 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1141:
#line 2637 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1142:
#line 2642 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1143:
#line 2645 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1144:
#line 2646 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1145:
#line 2647 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1146:
#line 2650 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1147:
#line 2652 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1148:
#line 2656 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1149:
#line 2657 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1150:
#line 2661 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1151:
#line 2662 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1152:
#line 2663 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1153:
#line 2664 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1154:
#line 2670 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1155:
#line 2671 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1156:
#line 2677 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1157:
#line 2678 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1158:
#line 2679 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1159:
#line 2680 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1162:
#line 2688 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1163:
#line 2690 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1164:
#line 2691 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1165:
#line 2692 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1166:
#line 2696 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1167:
#line 2697 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1168:
#line 2698 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1169:
#line 2699 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1170:
#line 2702 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1171:
#line 2703 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1172:
#line 2706 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1173:
#line 2707 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1174:
#line 2708 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1175:
#line 2711 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1176:
#line 2712 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1177:
#line 2713 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1178:
#line 2716 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1179:
#line 2717 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1181:
#line 2719 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1182:
#line 2720 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1183:
#line 2723 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1184:
#line 2724 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1185:
#line 2725 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1190:
#line 2732 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1191:
#line 2736 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1192:
#line 2738 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1193:
#line 2740 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1195:
#line 2745 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1196:
#line 2747 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1197:
#line 2749 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1207:
#line 2762 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1208:
#line 2763 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1209:
#line 2764 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1210:
#line 2767 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1211:
#line 2768 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1212:
#line 2769 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1213:
#line 2772 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1214:
#line 2773 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1215:
#line 2774 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1216:
#line 2777 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1217:
#line 2778 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1218:
#line 2779 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1220:
#line 2783 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1221:
#line 2784 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1222:
#line 2785 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1223:
#line 2788 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1224:
#line 2789 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1225:
#line 2790 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1226:
#line 2793 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1227:
#line 2794 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1228:
#line 2795 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1229:
#line 2798 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1230:
#line 2799 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1231:
#line 2800 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1232:
#line 2803 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1233:
#line 2804 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1234:
#line 2805 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1235:
#line 2809 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1236:
#line 2811 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1237:
#line 2813 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1238:
#line 2817 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1239:
#line 2821 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1240:
#line 2823 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1241:
#line 2827 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1242:
#line 2830 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1243:
#line 2831 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1244:
#line 2832 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1245:
#line 2833 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1246:
#line 2836 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1247:
#line 2838 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1248:
#line 2839 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1249:
#line 2841 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1251:
#line 2845 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1252:
#line 2846 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1253:
#line 2847 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1254:
#line 2850 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1255:
#line 2851 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1256:
#line 2855 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1258:
#line 2857 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1261:
#line 2862 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1262:
#line 2863 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1263:
#line 2864 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1264:
#line 2867 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1265:
#line 2868 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1266:
#line 2869 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1267:
#line 2872 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1268:
#line 2874 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1269:
#line 2879 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1270:
#line 2882 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1271:
#line 2889 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1272:
#line 2891 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1273:
#line 2893 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1274:
#line 2898 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1276:
#line 2902 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1277:
#line 2903 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1278:
#line 2904 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1279:
#line 2906 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1280:
#line 2908 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1281:
#line 2913 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11008 "frame/parser.C"
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


#line 2917 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

