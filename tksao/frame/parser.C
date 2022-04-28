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
#define YYLAST   5692

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  359
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  221
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1281
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2818

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
    1298,  1300,  1302,  1306,  1313,  1321,  1327,  1329,  1331,  1336,
    1342,  1344,  1348,  1349,  1351,  1354,  1356,  1361,  1363,  1366,
    1368,  1371,  1375,  1378,  1380,  1383,  1385,  1390,  1393,  1395,
    1397,  1401,  1403,  1406,  1410,  1413,  1414,  1416,  1418,  1423,
    1426,  1427,  1429,  1433,  1438,  1443,  1444,  1446,  1448,  1450,
    1452,  1454,  1456,  1458,  1460,  1462,  1464,  1466,  1468,  1470,
    1472,  1474,  1477,  1479,  1482,  1484,  1487,  1490,  1493,  1496,
    1498,  1500,  1502,  1503,  1505,  1506,  1508,  1509,  1511,  1512,
    1514,  1515,  1518,  1521,  1522,  1524,  1527,  1529,  1536,  1542,
    1544,  1546,  1548,  1551,  1554,  1557,  1559,  1561,  1563,  1565,
    1568,  1570,  1572,  1574,  1577,  1579,  1581,  1583,  1586,  1589,
    1592,  1593,  1595,  1596,  1598,  1600,  1602,  1604,  1606,  1608,
    1610,  1612,  1615,  1618,  1621,  1623,  1626,  1630,  1632,  1635,
    1638,  1643,  1650,  1652,  1663,  1665,  1668,  1672,  1676,  1679,
    1682,  1685,  1688,  1691,  1694,  1697,  1702,  1707,  1712,  1716,
    1720,  1726,  1731,  1736,  1741,  1745,  1749,  1753,  1757,  1760,
    1763,  1768,  1772,  1776,  1780,  1784,  1789,  1794,  1799,  1804,
    1810,  1815,  1822,  1830,  1835,  1840,  1846,  1849,  1853,  1857,
    1861,  1864,  1868,  1872,  1876,  1880,  1885,  1889,  1895,  1902,
    1906,  1910,  1915,  1919,  1923,  1927,  1931,  1935,  1941,  1945,
    1949,  1954,  1958,  1961,  1964,  1966,  1970,  1975,  1980,  1985,
    1990,  1995,  2002,  2007,  2012,  2018,  2023,  2028,  2033,  2038,
    2044,  2049,  2056,  2064,  2069,  2074,  2080,  2086,  2092,  2098,
    2104,  2110,  2118,  2124,  2130,  2137,  2142,  2147,  2152,  2157,
    2162,  2169,  2174,  2179,  2185,  2191,  2197,  2203,  2209,  2216,
    2222,  2230,  2239,  2245,  2251,  2258,  2262,  2266,  2270,  2274,
    2279,  2283,  2289,  2296,  2300,  2304,  2309,  2313,  2317,  2321,
    2325,  2329,  2335,  2339,  2343,  2348,  2353,  2358,  2362,  2368,
    2373,  2378,  2381,  2385,  2392,  2399,  2401,  2403,  2405,  2408,
    2411,  2414,  2418,  2422,  2425,  2438,  2441,  2444,  2446,  2450,
    2455,  2458,  2459,  2463,  2465,  2468,  2471,  2474,  2477,  2480,
    2485,  2490,  2495,  2499,  2504,  2510,  2519,  2526,  2531,  2541,
    2548,  2556,  2567,  2579,  2592,  2602,  2608,  2613,  2620,  2624,
    2630,  2636,  2643,  2649,  2654,  2664,  2675,  2687,  2697,  2704,
    2711,  2718,  2725,  2732,  2739,  2746,  2753,  2760,  2768,  2776,
    2779,  2784,  2789,  2794,  2799,  2805,  2810,  2815,  2821,  2827,
    2831,  2836,  2841,  2846,  2851,  2859,  2869,  2876,  2887,  2899,
    2912,  2922,  2926,  2929,  2933,  2939,  2947,  2952,  2956,  2960,
    2967,  2975,  2983,  2988,  2993,  2998,  3008,  3013,  3017,  3022,
    3030,  3038,  3041,  3045,  3049,  3053,  3058,  3061,  3064,  3069,
    3080,  3084,  3086,  3090,  3093,  3096,  3099,  3102,  3106,  3112,
    3117,  3123,  3126,  3129,  3132,  3135,  3139,  3142,  3145,  3148,
    3152,  3155,  3159,  3164,  3168,  3172,  3179,  3184,  3187,  3191,
    3194,  3197,  3202,  3206,  3210,  3213,  3217,  3219,  3222,  3224,
    3227,  3230,  3233,  3235,  3237,  3239,  3241,  3244,  3246,  3249,
    3252,  3254,  3257,  3260,  3262,  3265,  3267,  3269,  3271,  3273,
    3275,  3277,  3279,  3281,  3282,  3284,  3287,  3290,  3293,  3297,
    3303,  3311,  3319,  3326,  3333,  3340,  3347,  3353,  3360,  3367,
    3374,  3381,  3388,  3395,  3402,  3414,  3422,  3430,  3438,  3448,
    3458,  3469,  3482,  3495,  3498,  3501,  3505,  3510,  3515,  3520,
    3521,  3523,  3525,  3530,  3535,  3537,  3539,  3541,  3543,  3545,
    3547,  3549,  3551,  3554,  3556,  3558,  3560,  3564,  3568,  3577,
    3584,  3595,  3603,  3611,  3617,  3620,  3623,  3627,  3632,  3638,
    3642,  3648,  3654,  3658,  3663,  3669,  3675,  3681,  3685,  3691,
    3694,  3698,  3702,  3708,  3712,  3716,  3720,  3725,  3731,  3737,
    3741,  3747,  3753,  3757,  3762,  3768,  3774,  3777,  3780,  3784,
    3790,  3797,  3804,  3808,  3812,  3816,  3823,  3829,  3835,  3838,
    3842,  3846,  3852,  3859,  3863,  3866,  3869,  3873,  3876,  3880,
    3883,  3887,  3893,  3900,  3903,  3906,  3909,  3911,  3916,  3921,
    3923,  3926,  3929,  3932,  3935,  3938,  3941,  3944,  3948,  3951,
    3955,  3958,  3962,  3964,  3966,  3968,  3970,  3972,  3973,  3976,
    3977,  3980,  3981,  3983,  3984,  3985,  3987,  3989,  3991,  3993,
    3995,  4003,  4012,  4015,  4022,  4025,  4032,  4035,  4039,  4042,
    4044,  4046,  4050,  4054,  4056,  4061,  4064,  4066,  4070,  4074,
    4079,  4083,  4087,  4091,  4093,  4095,  4097,  4099,  4101,  4103,
    4105,  4107,  4109,  4111,  4113,  4115,  4117,  4119,  4122,  4123,
    4124,  4127,  4134,  4142,  4145,  4147,  4151,  4153,  4157,  4159,
    4162,  4165,  4167,  4171,  4172,  4173,  4176,  4179,  4181,  4185,
    4191,  4193,  4196,  4199,  4203,  4206,  4209,  4212,  4215,  4217,
    4219,  4221,  4223,  4228,  4231,  4235,  4239,  4242,  4246,  4249,
    4252,  4255,  4259,  4263,  4267,  4270,  4274,  4276,  4280,  4284,
    4286,  4289,  4292,  4295,  4298,  4308,  4315,  4317,  4319,  4321,
    4323,  4326,  4329,  4333,  4337,  4339,  4342,  4346,  4350,  4352,
    4355,  4357,  4359,  4361,  4363,  4365,  4368,  4371,  4376,  4378,
    4381,  4384,  4387,  4391,  4393,  4395,  4397,  4400,  4403,  4406,
    4409,  4412,  4416,  4420,  4424,  4428,  4432,  4436,  4440,  4442,
    4445,  4448,  4451,  4455,  4458,  4462,  4466,  4469,  4472,  4475,
    4478,  4481,  4484,  4487,  4490,  4493,  4496,  4499,  4502,  4505,
    4508,  4512,  4516,  4520,  4523,  4526,  4529,  4532,  4535,  4538,
    4541,  4544,  4547,  4550,  4553,  4556,  4560,  4564,  4568,  4573,
    4580,  4583,  4585,  4587,  4589,  4591,  4593,  4594,  4600,  4602,
    4609,  4613,  4615,  4618,  4621,  4624,  4628,  4632,  4635,  4638,
    4641,  4644,  4647,  4650,  4654,  4657,  4660,  4664,  4666,  4670,
    4675,  4677,  4680,  4686,  4693,  4700,  4703,  4705,  4708,  4711,
    4717,  4724
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
      -1,   373,   361,   361,     4,     4,    -1,     5,    -1,    66,
      -1,   373,   361,   361,     5,    -1,     6,     4,     4,     4,
       4,    -1,    89,    -1,   122,   200,   449,    -1,    -1,     4,
      -1,   361,   361,    -1,   203,    -1,    60,   371,   378,   379,
      -1,    82,    -1,   102,   453,    -1,    45,    -1,   119,   451,
      -1,   122,   200,   454,    -1,   149,   452,    -1,   150,    -1,
     213,   200,    -1,   275,    -1,   275,   371,   378,   380,    -1,
     276,   455,    -1,   346,    -1,     4,    -1,   373,   361,   361,
      -1,     4,    -1,   168,     5,    -1,     4,   168,     5,    -1,
     317,     4,    -1,    -1,     4,    -1,   364,    -1,   364,   373,
     361,   361,    -1,   364,     4,    -1,    -1,     4,    -1,   134,
     159,   371,    -1,   134,   159,     4,   371,    -1,   298,   159,
     361,   371,    -1,    -1,   217,    -1,   310,    -1,    67,    -1,
     185,    -1,   244,    -1,   288,    -1,   297,    -1,    82,    -1,
      46,    -1,   236,    -1,    62,    -1,   288,    -1,   311,    -1,
     137,    -1,   243,    -1,   243,   192,    -1,   273,    -1,   273,
     192,    -1,    21,    -1,   311,   465,    -1,    48,   462,    -1,
      75,   463,    -1,   152,   464,    -1,   190,    -1,    37,    -1,
     259,    -1,    -1,    67,    -1,    -1,    67,    -1,    -1,    67,
      -1,    -1,   229,    -1,    -1,    16,   467,    -1,   200,   372,
      -1,    -1,   230,    -1,    84,   469,    -1,   101,    -1,   371,
     378,   379,   470,     5,     5,    -1,   371,   378,   379,   470,
       5,    -1,    20,    -1,   239,    -1,    19,    -1,    41,    67,
      -1,    44,   472,    -1,    78,   473,    -1,    85,    -1,    96,
      -1,    97,    -1,   103,    -1,   126,   474,    -1,   144,    -1,
     158,    -1,   165,    -1,   186,   475,    -1,   225,    -1,   159,
      -1,   278,    -1,   288,   371,    -1,   317,   476,    -1,    73,
       5,    -1,    -1,    31,    -1,    -1,    44,    -1,    88,    -1,
     196,    -1,   152,    -1,   265,    -1,   222,    -1,   303,    -1,
     371,    -1,    59,   371,    -1,   117,   371,    -1,   176,   371,
      -1,    18,    -1,   294,   371,    -1,   204,     4,     4,    -1,
     118,    -1,   189,     5,    -1,    89,   479,    -1,   266,   122,
     200,   478,    -1,   266,     6,     4,     4,     4,     4,    -1,
     307,    -1,   317,   361,   361,   361,   361,   361,   361,   361,
     361,     4,    -1,     5,    -1,     5,     4,    -1,     4,     4,
      57,    -1,     4,     4,   371,    -1,   197,   363,    -1,    26,
     481,    -1,   114,   483,    -1,   126,   484,    -1,   161,   497,
      -1,   211,   495,    -1,   224,   496,    -1,     5,    14,     5,
     383,    -1,     5,    15,     5,   383,    -1,     5,    62,     5,
     383,    -1,     5,   194,   383,    -1,     5,   195,   383,    -1,
       5,   269,   381,     4,   383,    -1,     5,   279,     4,   383,
      -1,     5,   280,     4,   383,    -1,     5,   310,     5,   383,
      -1,   251,    88,   482,    -1,     5,    14,     5,    -1,     5,
      15,     5,    -1,     5,    62,     5,    -1,     5,   194,    -1,
       5,   195,    -1,     5,   269,   381,     4,    -1,     5,   279,
       4,    -1,     5,   280,     4,    -1,     5,   310,     5,    -1,
       5,     5,   277,    -1,     5,    14,     5,   383,    -1,     5,
      15,     5,   383,    -1,     5,    62,     5,   383,    -1,     5,
     194,   382,   383,    -1,     5,     5,   277,   382,   383,    -1,
       5,   195,   382,   383,    -1,     5,   269,   381,     4,   382,
     383,    -1,     5,   284,   381,     4,     4,   382,   383,    -1,
       5,   279,     4,   383,    -1,     5,   280,     4,   383,    -1,
       5,   310,     5,   382,   383,    -1,   276,   485,    -1,   119,
      88,   486,    -1,   251,   159,   494,    -1,   251,    88,   493,
      -1,   196,   487,    -1,     5,    14,     5,    -1,     5,    15,
       5,    -1,     5,    62,     5,    -1,     5,   194,   382,    -1,
       5,     5,   277,   382,    -1,     5,   195,   382,    -1,     5,
     269,   381,     4,   382,    -1,     5,   284,   381,     4,     4,
     382,    -1,     5,   279,     4,    -1,     5,   280,     4,    -1,
       5,   310,     5,   382,    -1,     5,    14,     5,    -1,     5,
      15,     5,    -1,     5,    62,     5,    -1,     5,   194,   382,
      -1,     5,   195,   382,    -1,     5,   269,   381,     4,   382,
      -1,     5,   279,     4,    -1,     5,   280,     4,    -1,     5,
     310,     5,   382,    -1,   159,   164,   488,    -1,   164,   489,
      -1,   159,   490,    -1,   492,    -1,   159,   345,   491,    -1,
       5,    14,     5,   383,    -1,     5,    15,     5,   383,    -1,
       5,    62,     5,   383,    -1,     5,   194,   382,   383,    -1,
       5,   195,   382,   383,    -1,     5,   269,   381,     4,   382,
     383,    -1,     5,   279,     4,   383,    -1,     5,   280,     4,
     383,    -1,     5,   310,     5,   382,   383,    -1,     5,    14,
       5,   383,    -1,     5,    15,     5,   383,    -1,     5,    62,
       5,   383,    -1,     5,   194,   382,   383,    -1,     5,     5,
     277,   382,   383,    -1,     5,   195,   382,   383,    -1,     5,
     269,   381,     4,   382,   383,    -1,     5,   284,   381,     4,
       4,   382,   383,    -1,     5,   279,     4,   383,    -1,     5,
     280,     4,   383,    -1,     5,   310,     5,   382,   383,    -1,
     372,     5,    14,     5,   383,    -1,   372,     5,    15,     5,
     383,    -1,   372,     5,    62,     5,   383,    -1,   372,     5,
     194,   382,   383,    -1,   372,     5,   195,   382,   383,    -1,
     372,     5,   269,   381,     4,   382,   383,    -1,   372,     5,
     279,     4,   383,    -1,   372,     5,   280,     4,   383,    -1,
     372,     5,   310,     5,   382,   383,    -1,     5,    14,     5,
     383,    -1,     5,    15,     5,   383,    -1,     5,    62,     5,
     383,    -1,     5,   194,   382,   383,    -1,     5,   195,   382,
     383,    -1,     5,   269,   381,     4,   382,   383,    -1,     5,
     279,     4,   383,    -1,     5,   280,     4,   383,    -1,     5,
     310,     5,   382,   383,    -1,   372,     5,    14,     5,   383,
      -1,   372,     5,    15,     5,   383,    -1,   372,     5,    62,
       5,   383,    -1,   372,     5,   194,   382,   383,    -1,   372,
       5,     5,   277,   382,   383,    -1,   372,     5,   195,   382,
     383,    -1,   372,     5,   269,   381,     4,   382,   383,    -1,
     372,     5,   284,   381,     4,     4,   382,   383,    -1,   372,
       5,   279,     4,   383,    -1,   372,     5,   280,     4,   383,
      -1,   372,     5,   310,     5,   382,   383,    -1,     5,    14,
       5,    -1,     5,    15,     5,    -1,     5,    62,     5,    -1,
       5,   194,   382,    -1,     5,     5,   277,   382,    -1,     5,
     195,   382,    -1,     5,   269,   381,     4,   382,    -1,     5,
     284,   381,     4,     4,   382,    -1,     5,   279,     4,    -1,
       5,   280,     4,    -1,     5,   310,     5,   382,    -1,     5,
      14,     5,    -1,     5,    15,     5,    -1,     5,    62,     5,
      -1,     5,   194,   382,    -1,     5,   195,   382,    -1,     5,
     269,   381,     4,   382,    -1,     5,   279,     4,    -1,     5,
     280,     4,    -1,     5,   310,     5,   382,    -1,     5,    14,
       5,   383,    -1,     5,    62,     5,   383,    -1,     5,   194,
     383,    -1,     5,   269,   381,     4,   383,    -1,     5,   279,
       4,   383,    -1,     5,   310,     5,   383,    -1,     5,     5,
      -1,   276,     5,     5,    -1,    95,     4,     4,     4,     4,
       4,    -1,   191,     4,     4,     4,     4,     4,    -1,   113,
      -1,   235,    -1,   363,    -1,   142,   363,    -1,    89,   363,
      -1,    67,     5,    -1,     5,     4,     4,    -1,   307,   361,
     361,    -1,   354,   361,    -1,     5,     5,   372,   378,     5,
       5,   372,   378,   361,   372,   380,     5,    -1,    61,   504,
      -1,    67,     5,    -1,    81,    -1,    74,   509,     5,    -1,
      74,   509,   310,     5,    -1,    76,   101,    -1,    -1,    84,
     502,   505,    -1,    90,    -1,   101,   507,    -1,   107,   508,
      -1,   116,     4,    -1,   131,     5,    -1,   152,    17,    -1,
     152,   216,   361,   361,    -1,   152,   299,   361,   361,    -1,
       4,    20,   386,   363,    -1,     4,    21,   366,    -1,     4,
      21,   366,   373,    -1,     4,    21,   366,   371,   378,    -1,
       4,    22,   243,   361,   361,     4,   371,   380,    -1,     4,
      22,   243,     5,   371,   380,    -1,     4,    49,   123,   363,
      -1,     4,    50,   243,   361,   361,   361,     4,   371,   380,
      -1,     4,    50,   243,     5,   371,   380,    -1,     4,    49,
     243,   361,   361,   371,   380,    -1,     4,    53,   107,   366,
     366,     4,   361,   361,   361,     4,    -1,     4,    53,   107,
     366,   366,     4,   361,   361,   361,     4,   373,    -1,     4,
      53,   107,   366,   366,     4,   361,   361,   361,     4,   371,
     378,    -1,     4,    53,   107,     5,     5,   371,   378,   371,
     380,    -1,     4,    56,   503,     5,     5,    -1,     4,    63,
     123,   363,    -1,     4,    63,   243,   361,   371,   380,    -1,
       4,    67,     5,    -1,     4,    75,    27,   363,   363,    -1,
       4,    75,   169,     5,     5,    -1,     4,    75,   243,   361,
     371,   380,    -1,     4,    75,   288,   371,   378,    -1,     4,
      76,   141,   363,    -1,     4,    83,   107,   366,   366,     4,
     361,   361,     4,    -1,     4,    83,   107,   366,   366,     4,
     361,   361,     4,   373,    -1,     4,    83,   107,   366,   366,
       4,   361,   361,     4,   371,   378,    -1,     4,    83,   107,
       5,     5,   371,   378,   371,   380,    -1,     4,    84,    22,
     243,   361,   361,    -1,     4,    84,    50,   243,   361,   361,
      -1,     4,    84,    53,    21,   361,   361,    -1,     4,    84,
      53,   243,   361,   361,    -1,     4,    84,   112,   243,   361,
     361,    -1,     4,    84,   115,    21,   361,   361,    -1,     4,
      84,   115,   243,   361,   361,    -1,     4,    84,    83,    21,
     361,   361,    -1,     4,    84,    83,   243,   361,   361,    -1,
       4,    84,   231,   314,     4,   361,   361,    -1,     4,    84,
     264,   314,     4,   361,   361,    -1,     4,   101,    -1,     4,
     101,    22,     4,    -1,     4,   101,    50,     4,    -1,     4,
     101,    53,     4,    -1,     4,   101,   112,     4,    -1,     4,
     101,    56,   503,     5,    -1,     4,   101,   115,     4,    -1,
       4,   101,    83,     4,    -1,     4,   101,   231,   314,     4,
      -1,     4,   101,   264,   314,     4,    -1,     4,   101,   290,
      -1,     4,   101,   290,     5,    -1,     4,   101,   290,     4,
      -1,     4,   107,    40,     4,    -1,     4,   111,   123,   363,
      -1,     4,   111,   243,   361,   361,   371,   380,    -1,     4,
     112,   243,   361,   361,   361,     4,   371,   380,    -1,     4,
     112,   243,     5,   371,   380,    -1,     4,   115,   107,   366,
     366,     4,   361,   361,   361,     4,    -1,     4,   115,   107,
     366,   366,     4,   361,   361,   361,     4,   373,    -1,     4,
     115,   107,   366,   366,     4,   361,   361,   361,     4,   371,
     378,    -1,     4,   115,   107,     5,     5,   371,   378,   371,
     380,    -1,     4,   131,     5,    -1,     4,   152,    -1,     4,
     152,   216,    -1,     4,   175,    27,   363,   363,    -1,     4,
     175,   229,   371,   378,   370,   370,    -1,     4,   199,   361,
     361,    -1,     4,   199,   135,    -1,     4,   199,    36,    -1,
       4,   199,   298,   371,   378,   370,    -1,     4,   231,   249,
     361,   361,   371,   380,    -1,     4,   264,   249,   361,   361,
     371,   380,    -1,     4,   229,   268,   384,    -1,     4,   229,
     275,     4,    -1,     4,   231,   123,   363,    -1,     4,   237,
     371,   378,   370,   370,   361,   371,   380,    -1,     4,   238,
     522,   363,    -1,     4,   253,    40,    -1,     4,   254,   132,
       5,    -1,     4,   254,   229,   371,   378,   370,   370,    -1,
       4,   254,   288,   371,   378,   371,   380,    -1,     4,   265,
      -1,     4,   265,   216,    -1,     4,   290,     5,    -1,     4,
     292,     5,    -1,     4,   292,   253,   363,    -1,     4,   304,
      -1,     4,   306,    -1,     4,   312,    27,   363,    -1,     4,
     312,   229,   371,   378,   370,   371,   380,   361,   366,    -1,
       4,   346,     4,    -1,   167,    -1,   167,   361,   361,    -1,
     177,   517,    -1,   178,   518,    -1,   199,   519,    -1,   236,
     363,    -1,   238,   522,   363,    -1,   238,   522,   363,   361,
     361,    -1,   253,    40,   361,   361,    -1,   253,   198,   361,
     361,     4,    -1,   253,   113,    -1,   258,   526,    -1,   265,
     527,    -1,   272,   528,    -1,     5,    67,     5,    -1,     5,
      81,    -1,     5,   101,    -1,     5,    90,    -1,     5,   131,
       5,    -1,     5,   152,    -1,     5,   152,   216,    -1,     5,
     199,   361,   361,    -1,     5,   199,   135,    -1,     5,   199,
      36,    -1,     5,   199,   298,   371,   378,   370,    -1,     5,
     238,   522,   363,    -1,     5,   265,    -1,     5,   265,   216,
      -1,     5,   304,    -1,     5,   306,    -1,   290,   107,     5,
       5,    -1,   290,   101,     5,    -1,   290,   101,    17,    -1,
     290,     5,    -1,   290,   307,     5,    -1,   222,    -1,   222,
     371,    -1,   303,    -1,   304,    17,    -1,   306,    17,    -1,
     346,     4,    -1,   265,    -1,   306,    -1,   152,    -1,   304,
      -1,    40,   199,    -1,   199,    -1,   113,   199,    -1,    40,
     107,    -1,   107,    -1,   113,   107,    -1,    40,   253,    -1,
     253,    -1,   113,   253,    -1,   101,    -1,   292,    -1,    67,
      -1,   346,    -1,   238,    -1,   131,    -1,   167,    -1,   307,
      -1,    -1,     4,    -1,    30,   363,    -1,   243,   361,    -1,
     163,     4,    -1,   217,     4,   361,    -1,    63,   361,   361,
     361,   523,    -1,   111,   361,   361,   361,   361,   365,   523,
      -1,    49,   361,   361,   361,   361,   365,   523,    -1,   231,
     361,   361,   361,   361,   523,    -1,   264,   361,   361,   361,
     361,   523,    -1,   175,   361,   361,   361,   361,   523,    -1,
     312,   361,   361,   361,   361,   523,    -1,   292,   361,   361,
     365,   523,    -1,    63,   229,   361,   361,   385,   523,    -1,
      49,   229,   361,   361,   385,   523,    -1,   104,   229,   361,
     361,   385,   523,    -1,    86,   229,   361,   361,   385,   523,
      -1,   357,   229,   361,   361,   385,   523,    -1,    27,   229,
     361,   361,   385,   523,    -1,    52,   229,   361,   361,   385,
     523,    -1,   254,   361,   361,   361,   361,   371,   378,   371,
     380,     5,   523,    -1,    75,   361,   361,   361,   371,   378,
     523,    -1,   237,   361,   361,   361,   361,   361,   523,    -1,
      22,   361,   361,   361,   361,     4,   523,    -1,   112,   361,
     361,   361,   361,   361,     4,   365,   523,    -1,    50,   361,
     361,   361,   361,   361,     4,   365,   523,    -1,    83,   361,
     361,   366,   366,     4,   361,   361,     4,   523,    -1,   115,
     361,   361,   366,   366,     4,   361,   361,   361,     4,   365,
     523,    -1,    53,   361,   361,   366,   366,     4,   361,   361,
     361,     4,   365,   523,    -1,    76,   523,    -1,   291,   506,
      -1,     5,   361,   361,    -1,   310,     5,   361,   361,    -1,
     361,   361,   310,     5,    -1,     5,   371,   378,   370,    -1,
      -1,   265,    -1,    17,    -1,    40,   361,   361,     4,    -1,
     198,   361,   361,     4,    -1,   113,    -1,   106,    -1,   348,
      -1,    64,    -1,   257,    -1,   256,    -1,   240,    -1,   349,
      -1,    61,   511,    -1,    67,    -1,   131,    -1,   116,    -1,
     146,   361,   361,    -1,   157,   361,   361,    -1,     4,    20,
      83,     5,     5,     5,   371,     4,    -1,     4,    20,   154,
       5,     5,     4,    -1,     4,    20,   227,     5,     5,     5,
       5,   371,   378,   387,    -1,     4,    20,   228,     5,     5,
     371,   387,    -1,     4,    20,   242,     5,     5,     5,   371,
      -1,     4,    20,   285,   371,   378,    -1,   157,    17,    -1,
       4,    21,    -1,     4,    21,   373,    -1,     4,    21,   371,
     378,    -1,     4,    22,   243,   371,   380,    -1,     4,    49,
     123,    -1,     4,    50,   243,   371,   380,    -1,     4,    49,
     243,   371,   380,    -1,     4,    53,    21,    -1,     4,    53,
      21,   373,    -1,     4,    53,    21,   371,   378,    -1,     4,
      53,   243,   371,   380,    -1,     4,    60,   371,   378,   379,
      -1,     4,    63,   123,    -1,     4,    63,   243,   371,   380,
      -1,     4,    67,    -1,     4,    75,    27,    -1,     4,    75,
     169,    -1,     4,    75,   243,   371,   380,    -1,     4,    75,
     288,    -1,     4,    76,   141,    -1,     4,    83,    21,    -1,
       4,    83,    21,   373,    -1,     4,    83,    21,   371,   378,
      -1,     4,    83,   243,   371,   380,    -1,     4,   111,   123,
      -1,     4,   111,   243,   371,   380,    -1,     4,   112,   243,
     371,   380,    -1,     4,   115,    21,    -1,     4,   115,    21,
     373,    -1,     4,   115,    21,   371,   378,    -1,     4,   115,
     243,   371,   380,    -1,     4,   131,    -1,     4,   152,    -1,
       4,   175,    27,    -1,     4,   175,   170,   371,   380,    -1,
       4,   175,   229,   371,   378,   379,    -1,     4,   184,   170,
     361,   371,   380,    -1,     4,   231,   123,    -1,     4,   229,
     268,    -1,     4,   229,   275,    -1,     4,   237,   229,   371,
     378,   379,    -1,     4,   237,   170,   371,   380,    -1,     4,
     237,   296,   371,   380,    -1,     4,   238,    -1,     4,   238,
     522,    -1,     4,   254,   132,    -1,     4,   254,   170,   371,
     380,    -1,     4,   254,   229,   371,   378,   379,    -1,     4,
     254,   288,    -1,     4,   265,    -1,     4,   290,    -1,     4,
     290,     4,    -1,     4,   292,    -1,     4,   292,   253,    -1,
       4,   302,    -1,     4,   312,    27,    -1,     4,   312,   170,
     371,   380,    -1,     4,   312,   229,   371,   378,   379,    -1,
       4,   346,    -1,   152,   512,    -1,   152,   212,    -1,   212,
      -1,   231,   264,   361,   361,    -1,   264,   264,   361,   361,
      -1,   236,    -1,   238,   522,    -1,   265,   513,    -1,   265,
     212,    -1,   272,   514,    -1,     5,    67,    -1,     5,   131,
      -1,     5,   157,    -1,     5,   238,   522,    -1,     5,   290,
      -1,     5,   290,   212,    -1,   290,    17,    -1,   290,   100,
     200,    -1,   346,    -1,    30,    -1,   243,    -1,   163,    -1,
     217,    -1,    -1,   361,   361,    -1,    -1,   361,   361,    -1,
      -1,   292,    -1,    -1,    -1,   230,    -1,   245,    -1,   308,
      -1,    58,    -1,   133,    -1,   509,   371,   378,   379,   363,
     524,   531,    -1,   265,   509,   371,   378,   379,   363,   524,
     531,    -1,   509,     5,    -1,   509,     5,     4,     5,   371,
     378,    -1,   509,     4,    -1,   509,     4,     4,     5,   371,
     378,    -1,   126,     5,    -1,   126,     5,     5,    -1,   361,
     361,    -1,   135,    -1,    36,    -1,    40,   361,   361,    -1,
     198,   361,   361,    -1,   113,    -1,   298,   371,   378,   370,
      -1,   520,   521,    -1,   521,    -1,   522,   358,   363,    -1,
      67,   358,     5,    -1,    94,   358,     4,     4,    -1,   346,
     358,     4,    -1,   131,   358,     5,    -1,   292,   358,     5,
      -1,   534,    -1,   535,    -1,   207,    -1,   265,    -1,   152,
      -1,    93,    -1,   128,    -1,   107,    -1,   199,    -1,   253,
      -1,   101,    -1,   160,    -1,   281,    -1,   515,    -1,   515,
     520,    -1,    -1,    -1,   525,   529,    -1,     5,   509,   371,
     378,   379,   363,    -1,   265,     5,   509,   371,   378,   379,
     363,    -1,   291,     5,    -1,    17,    -1,   216,   361,   361,
      -1,   299,    -1,   299,   361,   361,    -1,   363,    -1,   292,
     363,    -1,   529,   530,    -1,   530,    -1,   522,   358,   363,
      -1,    -1,    -1,   532,   533,    -1,   533,   534,    -1,   534,
      -1,   290,   358,     5,    -1,    56,   358,   503,     5,     5,
      -1,    65,    -1,    67,     5,    -1,   185,   374,    -1,   244,
     361,   361,    -1,   288,   371,    -1,   297,   361,    -1,    46,
     375,    -1,   185,     4,    -1,   357,    -1,   355,    -1,   349,
      -1,   207,    -1,   361,   361,   361,   361,    -1,   361,   361,
      -1,   373,   361,   361,    -1,   371,   378,   370,    -1,   298,
     539,    -1,    39,   361,   361,    -1,   198,   540,    -1,   236,
     363,    -1,   361,   361,    -1,   373,   361,   361,    -1,   371,
     378,   370,    -1,    40,   361,   361,    -1,   361,   361,    -1,
     113,   361,   361,    -1,   363,    -1,   317,   372,   378,    -1,
       5,     4,     4,    -1,   307,    -1,    71,   544,    -1,   171,
       4,    -1,   250,     4,    -1,   259,   361,    -1,     4,     4,
       4,     4,     4,     4,     4,     4,     4,    -1,     4,     4,
       4,     4,     4,     4,    -1,    55,    -1,   143,    -1,   251,
      -1,    91,    -1,   152,   546,    -1,   265,   547,    -1,    40,
     361,   361,    -1,   198,   361,   361,    -1,   113,    -1,   270,
     113,    -1,    40,   361,   361,    -1,   198,   361,   361,    -1,
     113,    -1,   270,   113,    -1,   193,    -1,    13,    -1,   207,
      -1,    34,    -1,   109,    -1,    62,     5,    -1,   288,   371,
      -1,   311,     4,     4,     4,    -1,   361,    -1,   361,    99,
      -1,   198,   552,    -1,   298,   361,    -1,   298,   361,    99,
      -1,    40,    -1,   361,    -1,   113,    -1,    26,   554,    -1,
     126,   556,    -1,   211,   566,    -1,   114,   567,    -1,   224,
       5,    -1,   122,     5,   388,    -1,    62,     5,   388,    -1,
     279,     4,   388,    -1,   251,    88,   555,    -1,   122,     5,
     388,    -1,    62,     5,   388,    -1,   279,     4,   388,    -1,
     557,    -1,   159,   557,    -1,   289,   558,    -1,   276,   559,
      -1,   119,    88,   560,    -1,   196,   561,    -1,   251,   159,
     563,    -1,   251,    88,   564,    -1,   247,   565,    -1,   122,
       5,    -1,    62,     5,    -1,   279,     4,    -1,   122,     5,
      -1,    62,     5,    -1,   279,     4,    -1,   122,     5,    -1,
      62,     5,    -1,   279,     4,    -1,   122,     5,    -1,    62,
       5,    -1,   279,     4,    -1,   159,   562,    -1,   122,     5,
       4,    -1,    62,     5,     4,    -1,   279,     4,     4,    -1,
     122,     5,    -1,    62,     5,    -1,   279,     4,    -1,   122,
       5,    -1,    62,     5,    -1,   279,     4,    -1,   122,     5,
      -1,    62,     5,    -1,   279,     4,    -1,   122,     5,    -1,
      62,     5,    -1,   279,     4,    -1,   122,     5,   388,    -1,
      62,     5,   388,    -1,   279,     4,   388,    -1,   122,     5,
       5,   388,    -1,   569,     4,     4,   361,   361,   366,    -1,
     569,     4,    -1,   101,    -1,    51,    -1,   300,    -1,   139,
      -1,   110,    -1,    -1,     4,   361,   361,   361,   361,    -1,
     210,    -1,   210,     4,   361,   361,   361,   361,    -1,   126,
     276,   571,    -1,     4,    -1,     4,     4,    -1,   361,   371,
      -1,   361,   361,    -1,   298,   361,   361,    -1,   372,   378,
     379,    -1,    16,   576,    -1,   249,     4,    -1,   246,   575,
      -1,    23,   574,    -1,     4,     4,    -1,     4,     5,    -1,
     292,     4,     5,    -1,     4,     4,    -1,     4,     5,    -1,
     292,     4,     5,    -1,     4,    -1,     4,   372,   378,    -1,
       4,     6,   372,   378,    -1,   235,    -1,   361,   361,    -1,
     361,   361,    12,   361,   361,    -1,   361,   361,    12,   373,
     361,   361,    -1,   361,   361,    12,   371,   378,   370,    -1,
     298,   579,    -1,   125,    -1,   125,   361,    -1,   361,   361,
      -1,   361,   361,    12,   361,   361,    -1,   361,   361,    12,
     373,   361,   361,    -1,   361,   361,    12,   371,   378,   370,
      -1
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
       1,     1,     3,     6,     7,     5,     1,     1,     4,     5,
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
     446,   447,     0,   358,   359,     0,   494,   488,   493,   489,
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
       0,   452,     0,     0,     0,     0,   953,   955,   954,     0,
    1047,     0,  1026,     0,  1029,     0,     0,  1049,  1051,     0,
    1042,   361,     0,   501,   503,   513,   506,   515,   507,   517,
     508,   519,   505,     0,     0,   374,   524,   521,   522,   164,
     549,   561,   562,   563,   565,     0,   578,   566,     0,     0,
       0,     0,     0,     0,   177,   177,   171,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   174,   174,   171,     0,
       0,   171,     0,     0,     0,     0,     0,   620,   644,     0,
       0,     0,   616,     0,     0,     0,     0,   177,   171,     0,
       0,   721,     0,   731,   732,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   789,
       0,     0,     0,     0,     0,   812,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   831,     0,     0,   836,   837,
       0,     0,     0,   856,   858,   857,     0,   860,     0,     0,
     867,   869,   870,   904,     0,     0,     0,     0,   735,   736,
     947,   945,   950,   949,   948,   946,   951,     0,   740,     0,
     941,   940,   744,     0,   944,     0,   745,   746,   747,   748,
       0,     0,     0,     0,     0,   843,     0,     0,   844,  1070,
       0,  1073,  1069,     0,     0,     0,   845,   877,   846,  1088,
    1093,  1090,  1089,  1087,  1094,  1091,  1085,  1092,  1086,  1095,
       0,     0,   851,     0,     0,     0,     0,   852,  1104,     0,
    1106,   853,     0,  1108,   854,   874,     0,     0,     0,   879,
     880,   881,  1123,  1137,     0,     0,  1144,  1140,     0,     0,
       0,  1135,  1134,  1148,  1147,     0,     0,  1164,     0,     0,
    1160,     0,  1168,     0,     0,  1161,     0,  1182,   200,   200,
       0,   200,     0,  1208,     0,  1207,  1199,     0,     0,     0,
       0,  1203,     0,     0,     0,  1206,     0,     0,     0,     0,
       0,  1201,  1209,     0,     0,     0,  1200,   200,   200,   200,
       0,   215,   217,   219,     0,   220,     0,    58,     0,  1250,
       0,  1255,     0,   156,  1261,  1262,     0,  1264,  1265,     0,
     165,   166,  1256,  1277,  1278,     0,   223,     0,   237,     0,
       0,     0,     0,   271,     0,     0,     0,     0,     0,     0,
       0,     0,   309,   156,     0,     0,     0,     0,   156,     0,
     329,     0,   328,   391,   390,     0,     0,     0,   156,     0,
     164,   436,   434,   438,   442,     0,     0,     0,   164,     0,
      84,    83,   477,   461,     0,   472,   474,   167,     0,     0,
     355,     0,     0,    58,     0,   451,     0,     0,   965,     0,
       0,     0,     0,     0,     0,   979,     0,     0,     0,     0,
       0,     0,   996,   997,     0,     0,     0,     0,     0,  1008,
       0,  1014,  1015,  1017,  1019,     0,  1023,  1034,  1035,  1036,
       0,  1038,  1043,  1045,  1046,  1044,   952,     0,  1025,     0,
    1024,   964,     0,     0,  1030,     0,  1032,     0,  1031,  1052,
    1033,  1040,     0,     0,   373,     0,     0,   576,   577,     0,
     574,   570,     0,   177,   177,   177,   178,   179,   588,   589,
     173,   172,     0,   177,   177,   177,     0,   594,   604,   174,
     177,   177,   177,   175,   176,   177,   177,     0,   177,   177,
       0,   174,     0,   617,     0,     0,     0,   643,     0,   642,
       0,     0,   619,     0,   618,     0,     0,     0,     0,   174,
     174,   171,     0,     0,   171,     0,     0,     0,   177,   177,
     717,     0,   177,   177,   722,     0,   190,   191,   192,   193,
     194,   195,     0,    88,    89,    87,   752,     0,     0,     0,
       0,     0,     0,   897,   895,   890,     0,   900,   884,   901,
     887,   899,   893,   882,   896,   885,   883,   902,   898,     0,
       0,     0,   768,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   799,     0,     0,     0,
       0,     0,   811,   813,     0,     0,   818,   817,     0,     0,
     180,     0,     0,     0,   156,     0,   827,     0,     0,     0,
       0,   832,   833,   834,     0,     0,     0,   840,   855,   859,
     861,   864,   863,     0,     0,     0,   868,   905,   907,     0,
     906,   738,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1053,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   742,     0,     0,
       0,     0,   842,     0,   156,  1066,  1064,  1062,     0,     0,
     156,  1068,   847,     0,     0,     0,     0,  1103,     0,     0,
    1109,   872,   873,     0,   875,  1143,  1145,  1142,  1141,  1132,
       0,     0,     0,  1165,     0,     0,  1169,  1177,   202,   203,
     204,   205,   201,  1192,  1191,     0,     0,     0,  1194,  1193,
     200,     0,     0,     0,  1202,     0,     0,     0,     0,     0,
    1219,     0,  1233,  1232,  1234,     0,     0,     0,  1205,     0,
       0,     0,  1204,  1214,  1213,  1215,  1211,  1210,  1212,  1236,
    1235,  1237,     0,     0,     0,  1252,  1253,     0,   156,  1268,
    1263,  1266,     0,     0,   156,     0,     0,     0,   234,     0,
       0,     0,     0,     0,     0,     0,     0,   306,   305,     0,
       0,   297,   308,   310,     0,   320,   322,   321,   319,   156,
     327,     0,     0,     0,   164,   156,     0,     0,     0,     0,
     456,   470,    82,    81,   479,     0,   473,   169,   170,   168,
     466,     0,   482,     0,     0,     0,   454,   448,     0,     0,
       0,     0,     0,     0,   156,   966,     0,   969,     0,     0,
     972,     0,   156,   977,     0,   980,   981,     0,   983,   984,
     985,     0,   989,     0,     0,   992,     0,   998,     0,     0,
       0,  1003,  1004,  1002,     0,     0,     0,  1009,  1010,     0,
       0,  1013,  1016,  1018,  1020,     0,     0,  1037,  1039,   956,
    1048,   957,     0,     0,  1050,  1041,     0,     0,   529,   530,
       0,     0,   575,     0,   585,   586,   587,   177,   591,   592,
     593,     0,     0,     0,   598,   599,   171,     0,     0,     0,
     177,   605,   606,   607,   608,   610,   174,   613,   614,     0,
     177,     0,     0,     0,   174,   174,   171,     0,     0,     0,
       0,   641,     0,   645,     0,     0,     0,     0,     0,   174,
     174,   171,     0,     0,   171,     0,     0,     0,     0,     0,
     174,   174,   171,     0,     0,   171,     0,     0,     0,     0,
       0,   174,   174,   171,     0,     0,   171,     0,     0,     0,
       0,   174,   174,   171,     0,     0,     0,   174,   621,   622,
     623,   624,   626,     0,   629,   630,     0,   174,     0,     0,
     715,   716,   177,   719,   720,     0,   751,   156,   753,     0,
       0,   757,     0,     0,     0,     0,     0,   889,   886,   892,
     891,   888,   894,     0,   766,     0,     0,     0,     0,   156,
     773,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   790,   791,   792,     0,   796,   793,
     795,     0,     0,   801,   800,   802,   803,     0,     0,     0,
       0,     0,     0,   156,   156,   816,   186,   182,   187,   181,
     184,   183,   185,   822,   823,   824,     0,     0,   826,   828,
     156,   156,     0,   835,   838,   156,   156,   862,   866,   908,
     739,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1096,   933,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   934,     0,     0,
       0,     0,     0,   749,   750,   156,   164,  1067,     0,     0,
    1071,  1072,     0,     0,   849,     0,   156,     0,  1105,  1107,
     871,     0,  1162,  1163,  1166,  1167,   200,   200,   200,  1238,
    1217,  1216,  1218,  1221,  1220,  1224,  1223,  1225,  1222,  1230,
    1229,  1231,  1227,  1226,  1228,     0,     0,  1247,     0,  1269,
       0,   156,     0,  1272,     0,     0,   238,     0,   235,     0,
       0,     0,   275,     0,     0,     0,     0,   156,     0,   312,
     144,     0,   411,     0,   432,   164,   167,     0,     0,   445,
       0,   483,   484,     0,   449,     0,     0,     0,     0,     0,
     156,   967,   167,   167,   167,   156,   973,   167,   164,   167,
     167,   156,   986,   167,   167,   167,   156,   993,   167,   167,
     156,     0,   167,   156,   167,   167,   156,   167,   156,  1027,
    1028,     0,     0,   528,   571,     0,   590,   595,   596,   597,
       0,   601,   602,   603,   609,   177,   174,   615,   632,   633,
     634,   635,   636,     0,   638,   639,   174,     0,     0,     0,
     174,   174,   171,     0,     0,     0,     0,     0,     0,   174,
     174,   171,     0,     0,     0,     0,     0,     0,   174,   174,
     171,     0,     0,     0,   174,   177,   177,   177,   177,   177,
       0,   177,   177,     0,   174,   174,   177,   177,   177,   177,
     177,     0,   177,   177,     0,   174,   174,   695,   696,   697,
     698,   700,     0,   703,   704,     0,   174,   706,   707,   708,
     709,   710,     0,   712,   713,   174,   625,   174,     0,   631,
       0,     0,   718,     0,   754,   167,     0,     0,   167,     0,
       0,     0,   765,   167,   769,   770,   167,   772,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   794,   797,   798,     0,   167,     0,     0,     0,   814,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1097,  1076,     0,  1083,
    1084,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   156,     0,     0,    85,     0,     0,   942,
     943,   164,     0,     0,     0,  1074,   848,   850,   164,   156,
    1155,  1196,  1195,  1197,  1239,     0,  1249,  1279,     0,     0,
    1274,  1273,   239,     0,     0,     0,   280,     0,     0,     0,
     298,   167,   412,   416,   433,   435,     0,   443,   478,   156,
       0,     0,     0,     0,     0,     0,   963,   968,   971,   970,
     974,   975,   976,   978,   982,   987,   988,   990,   991,   994,
     995,   999,   164,   167,  1006,   164,  1007,  1011,   164,  1021,
     164,     0,   156,     0,   527,     0,   600,   611,   177,   174,
     640,   177,   177,   177,   177,   177,     0,   177,   177,   174,
     177,   177,   177,   177,   177,     0,   177,   177,   174,   177,
     177,   177,   177,   177,     0,   177,   177,   174,   177,   655,
     656,   657,   658,   660,   174,   663,   664,     0,   177,   177,
     684,   685,   686,   687,   689,   174,   692,   693,     0,   177,
     699,   174,     0,   705,   174,   714,   627,   174,   723,   724,
     156,   756,     0,   167,   759,     0,   156,     0,   767,   771,
     156,     0,   778,   779,   780,   781,   785,   786,   782,   783,
     784,     0,     0,   167,   806,     0,   156,     0,     0,   819,
     167,     0,     0,   167,   167,     0,   865,     0,   188,   188,
       0,     0,   188,     0,   188,  1053,     0,     0,     0,     0,
       0,     0,     0,     0,  1075,     0,     0,   188,   188,     0,
       0,     0,     0,     0,     0,     0,     0,   935,     0,     0,
       0,  1053,    86,     0,   188,     0,  1099,   156,   156,     0,
     164,     0,   221,  1281,  1280,     0,     0,   243,     0,     0,
       0,     0,   313,   444,     0,   332,     0,   959,     0,   196,
       0,  1000,  1001,  1005,  1012,  1022,   366,     0,   332,     0,
     612,   637,   646,   647,   648,   649,   650,   174,   652,   653,
     177,   675,   676,   677,   678,   679,   174,   681,   682,   177,
     666,   667,   668,   669,   670,   174,   672,   673,   177,   659,
     177,   174,   665,   688,   177,   174,   694,   701,   174,   711,
     628,     0,   167,   760,     0,     0,     0,     0,     0,   787,
     788,   804,     0,     0,     0,   815,   820,     0,   829,   830,
     821,   167,     0,   189,  1053,  1053,    85,     0,  1053,     0,
    1053,   909,   156,     0,  1078,     0,  1081,  1118,  1082,  1080,
    1077,     0,  1053,  1053,    85,     0,     0,  1053,  1053,     0,
       0,  1053,   938,   936,   937,   916,  1053,  1053,  1099,  1113,
       0,  1065,  1063,  1101,     0,     0,     0,     0,   245,     0,
       0,     0,   332,   333,   335,   334,   377,     0,     0,   197,
     199,   198,   961,   962,   332,   379,     0,   177,   654,   177,
     683,   177,   674,   661,   177,   690,   177,   702,     0,   755,
     167,   167,     0,   167,     0,   167,   167,     0,   167,     0,
    1053,   922,   918,  1053,     0,   923,     0,   917,  1053,     0,
    1079,     0,   920,   919,  1053,     0,     0,   914,   912,  1053,
     156,   913,   915,   921,  1113,  1060,     0,     0,  1100,  1111,
    1102,  1154,     0,     0,     0,   276,   299,   302,   300,     0,
       0,   378,   958,   156,   380,   573,   651,   680,   671,   662,
     691,   167,   758,   764,     0,   777,   774,   805,   810,     0,
     825,     0,   927,   911,    85,     0,   925,  1119,     0,   910,
      85,     0,   926,     0,  1061,  1115,  1117,     0,  1110,     0,
       0,   281,     0,     0,     0,     0,   196,     0,   761,   156,
     775,   807,   839,  1053,     0,     0,  1053,     0,   167,  1116,
    1112,   244,     0,     0,     0,     0,     0,   960,   734,   156,
     762,   776,   156,   808,   929,     0,  1053,   928,     0,     0,
     246,   292,     0,   291,     0,   763,   809,    85,   930,    85,
    1053,   290,   289,  1053,  1053,   924,   932,   931
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,  1415,   172,   152,  1262,  2491,  2492,   429,   430,
     431,   432,   153,   154,   155,   694,   686,    91,   813,   452,
    1212,  1680,  1352,  1365,  1348,  1923,  2594,  1412,  2652,  1583,
     340,   766,   769,   772,   780,    63,   365,   371,   375,   378,
      68,   381,    75,   397,   393,   387,   404,    82,   409,    92,
      98,   414,   416,   418,   486,   867,  1649,   420,   423,   105,
     439,   156,   158,  2646,   174,   215,   909,   945,   475,   856,
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
    2708,  2709,  2705,  2706,  2755,  2259,  2260,   281,   287,   295,
     708,   703,   300,   305,   307,   718,   725,  1150,  1155,   775,
     763,   313,   317,   732,   323,   739,  1588,   752,   753,  1186,
    1181,  1594,  1171,  1600,  1612,  1608,  1175,   757,   741,   329,
     330,   344,  1199,   347,   353,   790,   793,   787,   355,   358,
     798
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2566
static const yytype_int16 yypact[] =
{
    5152,    44,   443,    84, -2566, -2566,  1018,  -168,   547,   529,
    1027,   201,  2609,    94,   321,  1338,    65,  5338,   374,  1560,
   -2566,   112,   893,   142,  1125,   -46,    39,   186,   328,   933,
     140,   765,  3002,    15,   613,   442,   384,   328, -2566,   190,
      82,   938, -2566,   436,   473,   637, -2566,   512, -2566,    90,
    1837,   289,   128,   554,   115,  1011,   306,   606,   617,   147,
     620,   105,  1022, -2566, -2566, -2566,  1036,   160, -2566,   329,
      23,   321,   349,   516,   562, -2566,   626,   160, -2566, -2566,
     117,   160, -2566, -2566, -2566, -2566,   160, -2566, -2566, -2566,
   -2566, -2566, -2566,    43,   608,   630,   656,   208, -2566,   160,
    1354,   160,   160,  1065,   160, -2566, -2566, -2566,   485, -2566,
   -2566, -2566, -2566,  4691, -2566, -2566, -2566, -2566, -2566, -2566,
     160, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566,
   -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566,
   -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566,
   -2566, -2566, -2566,  1532, -2566,   160, -2566,   690, -2566, -2566,
     321,   321,   321,   321,   321,   321, -2566, -2566,   321,   321,
     321,   321, -2566,   584, -2566,   696,  1577,   647,   101,   505,
     635,   -12,  4242,   610,  4742,  4663,   813,  4691,  1069, -2566,
      -7,   -99,   785,   868,   792,   803,   808,   882,   328,   633,
   -2566,   840, -2566,   677,   644,   298, -2566,   275, -2566,   954,
   -2566,   390,   852,    49, -2566, -2566,  4934, -2566, -2566, -2566,
     887,   919,   965, -2566, -2566, -2566, -2566,   791, -2566, -2566,
   -2566, -2566,   640, -2566, -2566,  4934,  4304, -2566,   996, -2566,
      69, -2566,  1043,  1028,   749, -2566,   160, -2566,  1053,    31,
    1055,   292,   867,  1058,    18, -2566, -2566, -2566,  1062,  1078,
     321,   321,   160,   160, -2566, -2566,  1104, -2566, -2566, -2566,
   -2566, -2566, -2566,  3670,   921, -2566,  1114,    64,   160,  4934,
     160, -2566,  1116, -2566, -2566, -2566, -2566, -2566,   160,  1243,
     321,  2649,   160,  1532,   160, -2566,  1121, -2566,  1799, -2566,
   -2566,   462,  1148,  1156,   160, -2566,  1160, -2566, -2566,   -62,
    1124,  4934,  1164, -2566,  1305,   160,  1093, -2566,   344,  1072,
     412,    -8,  1191, -2566, -2566, -2566, -2566, -2566, -2566, -2566,
    1197, -2566,   888,   143,   158,   277,   534,   160,   160,   150,
   -2566,   160,   928,  1216, -2566,   160,   160, -2566,  1221,    28,
      53,  1230,  1532, -2566, -2566, -2566,  1097,   160, -2566, -2566,
   -2566, -2566, -2566, -2566,   160, -2566,  1244,  1245, -2566,   160,
     762, -2566, -2566, -2566, -2566, -2566, -2566,   160, -2566, -2566,
     160, -2566, -2566,   599,   599, -2566,  1257, -2566, -2566, -2566,
   -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566,  1063,   160,
     160,  1263,  1265,  1271, -2566, -2566,   160,   160,   160, -2566,
     160, -2566,  1273, -2566, -2566, -2566, -2566,   502, -2566,  1279,
   -2566,  4934,  1282, -2566,   160, -2566, -2566, -2566,   160,  1286,
    1291,  1291,  4934,   160,   160,   160,   160,   160,   160, -2566,
     160,  4691,  1354,   160,   160, -2566, -2566, -2566, -2566, -2566,
   -2566, -2566,  1354,   160, -2566, -2566, -2566, -2566, -2566, -2566,
   -2566, -2566, -2566, -2566, -2566,  1292, -2566,  1035,    33, -2566,
   -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566,   -21, -2566,
   -2566, -2566,  1142, -2566,   577,   415,   415, -2566, -2566, -2566,
    1311, -2566,  1314, -2566, -2566,   -88, -2566,  1143, -2566, -2566,
   -2566,  1154, -2566, -2566,  1532, -2566,   160,   160, -2566,  4934,
    4934,  1532, -2566, -2566,  1532, -2566, -2566, -2566, -2566,  1532,
   -2566, -2566,  4934,  1532,   160, -2566, -2566,  4934, -2566,  1327,
     423,  1138,     2, -2566, -2566,  1150,  4934,    11, -2566, -2566,
   -2566, -2566, -2566, -2566,  1343,  1350,  1339, -2566,  1172, -2566,
   -2566, -2566,   160, -2566, -2566,   518, -2566, -2566, -2566, -2566,
   -2566, -2566, -2566, -2566, -2566, -2566, -2566,   390, -2566, -2566,
   -2566, -2566, -2566, -2566,  1189,  1227, -2566, -2566,  1316,  1353,
    1363, -2566, -2566,  1202, -2566,   160,  1427,  1203,  1799, -2566,
    1532, -2566, -2566,  1429, -2566, -2566, -2566, -2566, -2566, -2566,
   -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566,  4934,  4934,
    4934,  4934, -2566, -2566, -2566,  1433,   321, -2566, -2566,  1435,
    1436,  1249,   160, -2566,   578,  1356, -2566,  1440, -2566,   290,
    1360,  3142,    35,  1446, -2566,  1448, -2566,  1457, -2566,    14,
   -2566,  1458,  1459, -2566,  1461, -2566, -2566, -2566,   160, -2566,
    1799,  4631,  2209,   756,  1463,   713,  1368, -2566, -2566, -2566,
      22,   449,  1466,  1469,    86,   160,   655,   727,   420,  4934,
     321,  1334,   638,    19,    91,   296,     6, -2566,  1454,  1462,
    1477, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566,
   -2566, -2566, -2566, -2566, -2566,   160, -2566, -2566, -2566,   160,
     160,   160,   160, -2566, -2566,   160,  1532,   160, -2566,   160,
    1354,   160,  1478,  1532, -2566, -2566, -2566, -2566, -2566, -2566,
   -2566, -2566,  1481,    20,   417, -2566, -2566, -2566,  1484, -2566,
   -2566, -2566, -2566,  1391, -2566,  1487,  1488,  1407,  1493, -2566,
    1499, -2566,  1500,  1423,  1504,    27,   588,   407,    42,   410,
    1510,   450, -2566, -2566,  1513,  1516,  1535, -2566, -2566,  1536,
   -2566, -2566, -2566, -2566,  1537, -2566, -2566,  1539, -2566, -2566,
    1549, -2566, -2566, -2566, -2566, -2566, -2566, -2566,   160,   160,
   -2566,   160,   736,   160,   160, -2566,  1731, -2566,   612,  1556,
   -2566,  1151,  1558, -2566, -2566,   573,   160,   160, -2566,  1551,
   -2566, -2566,  1559,  1047,   160,  1553,   946, -2566, -2566, -2566,
   -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566,
   -2566,  1562,  1566,   160,   160,   160,  1569,   321,  1570,  1572,
    1532,  4934, -2566, -2566, -2566, -2566, -2566,  1532, -2566, -2566,
     160,   160,   160,  4934,   160,  1354,   160, -2566,   160, -2566,
   -2566, -2566, -2566, -2566,  1573,  1575, -2566, -2566, -2566, -2566,
   -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566,   610,
   -2566,   160, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566,
    4934,   160,  1532,  1532,   573,   573,   573,  1532,  1354,   160,
    1532, -2566, -2566, -2566,   160, -2566,   -81,  1409,  1576,  1580,
   -2566, -2566,  1532, -2566,  1426,  1432, -2566,  1582,  1589, -2566,
    1591,  1195,   160,  3498,   497,   571, -2566, -2566, -2566,   160,
     587,  1300, -2566,  1332, -2566,  1334,  1333,   793,  1306,    93,
   -2566, -2566,   160, -2566, -2566, -2566, -2566, -2566, -2566, -2566,
   -2566, -2566, -2566,   160,  1595, -2566, -2566, -2566, -2566,   573,
   -2566, -2566, -2566, -2566, -2566,  4814, -2566, -2566,  1598,  1600,
     160,  1601,  1602,  1603,   -20,   -20,  -105,  1599,  1605,  1607,
    1608,  1337,  1341,  1611,  1617,  1620,    41,    41,  -105,  1606,
    1622,  -105,  1623,  1630,  4777,  1636,  1641, -2566, -2566,  1643,
    1648,   706, -2566,  1650,  1654,  1655,  1662,   -20,  -105,  1664,
    1666, -2566,  1668, -2566, -2566,  1532,   948,  1370,  1384,    74,
    1431,  1568,   703,   489,  1671,   356,  1528,  1571,  1120,   426,
    1637,   507,  1437,  1578,  1677,  1467,   375,    30,   878,   -51,
    4934,  1334,  1644,   627,  1438,  1473,  1685,    25, -2566, -2566,
     517,  1689,  1690, -2566, -2566, -2566,  1694,  1486,   121,  1334,
    1489, -2566, -2566, -2566,   321,  1699,  1702,   160, -2566, -2566,
   -2566, -2566, -2566, -2566, -2566, -2566, -2566,     5, -2566,  4181,
   -2566, -2566, -2566,   160, -2566,   160, -2566, -2566, -2566, -2566,
     160,   160,   160,   713,  4934, -2566,  1703,  1253, -2566, -2566,
     160, -2566, -2566,   160,  4934,   160, -2566, -2566, -2566, -2566,
   -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566,
     321,   160, -2566,   160,   713,  1704,  1705, -2566, -2566,   160,
     160, -2566,   321, -2566, -2566, -2566,   156,  1706,  1707, -2566,
   -2566, -2566, -2566, -2566,   160,   160, -2566, -2566,  1354,   160,
     160, -2566, -2566, -2566, -2566,  1709,   160, -2566,   160,  1581,
   -2566,   160, -2566,   160,  1609, -2566,  1711, -2566,  1248,  1248,
     536,  1248,  1715, -2566,   604, -2566, -2566,  1716,  1718,   611,
    1712, -2566,  1719,  1721,  1723, -2566,   631,   680,  1724,  1725,
    1727, -2566, -2566,  1730,  1733,  1728, -2566,  1248,  1248,  1248,
     160, -2566, -2566, -2566,   160, -2566,   160,   144,  4934, -2566,
     160, -2566,  1799,  1532, -2566, -2566,  1737, -2566, -2566,  1738,
   -2566, -2566, -2566, -2566,  1736,  2649, -2566,   160,  1739,   160,
     160,   160,  1135, -2566,  1722,  1732,   160,   160,   -16,  1740,
     321,   321, -2566,  1532,   160,  1745,  1748,  1749,  1532,  4934,
   -2566,   160, -2566, -2566, -2566,   160,   160,   160,  1532,  4934,
     573, -2566, -2566, -2566, -2566,  1354,   160,  1751,   573,   160,
    1720,  1734,   448, -2566,  1752, -2566, -2566,   110,  4054,   160,
   -2566,   160,  1756,  1762,   160, -2566,  1760,  1013,  4691,  1527,
     646,  1530,    56,  4934,   824, -2566,   381,  1634,   119,   842,
    1533,   148, -2566, -2566,   391,  1610,   890,  1656,   710,  1334,
     957, -2566,  1773,  1525, -2566,   615, -2566, -2566, -2566, -2566,
    1334,  1574, -2566, -2566, -2566, -2566, -2566,   160, -2566,   160,
   -2566, -2566,   160,   160, -2566,   160, -2566,   160, -2566, -2566,
   -2566, -2566,  1583,   160, -2566,   160,   162, -2566, -2566,  1777,
    1778, -2566,   160,   -20,   -20,   -20, -2566, -2566, -2566, -2566,
   -2566, -2566,  1780,   -20,   -20,   -20,   666, -2566, -2566,    41,
     -20,   -20,   -20, -2566, -2566,   -20,   -20,  1783,   -20,   -20,
    1784,    41,   861, -2566,  1785,  1786,  1788, -2566,   709, -2566,
     743,  1174, -2566,  1032, -2566,  1512,  1789,  1791,  1792,    41,
      41,  -105,  1794,  1795,  -105,  1796,  1800,  1801,   -20,   -20,
   -2566,  1802,   -20,   -20, -2566,  1798, -2566, -2566, -2566, -2566,
   -2566, -2566,   321, -2566, -2566, -2566,  4691,  1302,   321,   160,
    1330,  1421,   958, -2566, -2566, -2566,   984, -2566, -2566, -2566,
   -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566,  1803,
     321,   160, -2566,   321,  1804,   160,  4934,   321,  1452,  1564,
    1567,   157,   171,  1585,   179,  1497,  1498,  1809,  1812,  1813,
     703,  1814,  1815,  1816,  1507,  1508,  1362,  1821,   321,   160,
    1349,  1495, -2566, -2566,   321,  4934, -2566, -2566,  4934,   160,
      -2,  1825,   321,   160,  1532,   321, -2566,  1827,  4934,  4934,
     160, -2566, -2566, -2566,   321,   321,  4934, -2566, -2566, -2566,
   -2566, -2566, -2566,  4934,   160,   321, -2566, -2566, -2566,   160,
   -2566, -2566,  1828,   160,  1612,   152,   160,  1613,   160,   181,
     160, -2566,   160,  1614,  1615,   160,   160,   160,   160,   160,
     160,   160,   160,    13,   160,   160,  1616, -2566,   160,   160,
     160,   160, -2566,  4934,  1532,  1829,  1831,  1832,   160,   160,
    1532, -2566,   160,   160,   160,  4934,   713, -2566,   160,   160,
   -2566, -2566, -2566,  1835, -2566, -2566, -2566, -2566, -2566, -2566,
    1833,   160,   160, -2566,   160,   160, -2566, -2566, -2566, -2566,
   -2566, -2566, -2566, -2566, -2566,  1841,  1844,  1846, -2566, -2566,
    1248,  1847,  1849,  1851, -2566,  1852,  1858,  1859,  1860,  1862,
   -2566,  1863, -2566, -2566, -2566,  1864,  1866,  1868, -2566,  1869,
    1870,  1872, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566,
   -2566, -2566,   160,   160,   160, -2566, -2566,   160,  1532, -2566,
   -2566, -2566,  2649,   160,  1532,   160,   160,   160, -2566,   160,
     160,  1873,   160,  1875,  1845,   160,   160, -2566, -2566,  1885,
    4934, -2566, -2566, -2566,   160, -2566, -2566, -2566, -2566,  1532,
   -2566,   841,   160,   841,   573,  1532,  4934,   160,   160,  1888,
   -2566, -2566, -2566, -2566, -2566,   160, -2566, -2566, -2566, -2566,
   -2566,  4934, -2566,  4934,   160,  1890, -2566, -2566,  1891,  1892,
    1893,  1894,  1895,  4934,  1532, -2566,  4934, -2566,  4934,  4934,
    4691,  4934,  1532, -2566,  4934, -2566, -2566,  4934, -2566, -2566,
    4691,  4934, -2566,  4934,  4934,  4691,  4934, -2566,  4934,  4934,
     160, -2566, -2566, -2566,  4934,  4934,  4934, -2566, -2566,  4934,
    4934, -2566, -2566, -2566, -2566,  4934,  4934, -2566, -2566, -2566,
   -2566, -2566,   160,   160, -2566, -2566,  1897,   160, -2566, -2566,
    1898,  1903, -2566,   160, -2566, -2566, -2566,   -20, -2566, -2566,
   -2566,  1904,  1905,  1906, -2566, -2566,  -105,  1908,  1909,  1910,
     -20, -2566, -2566, -2566, -2566, -2566,    41, -2566, -2566,  1912,
     -20,  1913,  1914,  1915,    41,    41,  -105,  1918,  1921,  1923,
    1167, -2566,  1278, -2566,  1313,  1586,  1926,  1928,  1929,    41,
      41,  -105,  1922,  1931,  -105,  1932,  1596,  1943,  1944,  1957,
      41,    41,  -105,  1960,  1965,  -105,  1966,  1618,  1967,  1968,
    1969,    41,    41,  -105,  1971,  1972,  -105,  1973,  1976,  1977,
    1979,    41,    41,  -105,  1981,  1983,  1984,    41, -2566, -2566,
   -2566, -2566, -2566,  1986, -2566, -2566,  1987,    41,  1988,  1989,
   -2566, -2566,   -20, -2566, -2566,  1992, -2566,  1532, -2566,  4934,
     160, -2566,   160,  4934,   160,  1993,  1370, -2566, -2566, -2566,
   -2566, -2566, -2566,  1994, -2566,  4934,   321,  1996,  4934,  1532,
   -2566,  1997,  1370,   160,   160,   160,   160,   160,   160,   160,
     160,   160,  1990,  1999, -2566, -2566, -2566,  2000, -2566, -2566,
   -2566,  2002,  2003, -2566, -2566, -2566, -2566,   160,  4934,   160,
    2004,  1370,   321,  1532,  1532, -2566, -2566, -2566, -2566, -2566,
   -2566, -2566, -2566, -2566, -2566, -2566,   160,  1354, -2566, -2566,
    1532,  1532,   160, -2566, -2566,  1532,  1532, -2566, -2566, -2566,
   -2566,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,  1640, -2566,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,  3852,  2005,   160, -2566,   160,   160,
     160,  2008,  2010, -2566, -2566,  1532,   573, -2566,  2011,  2013,
   -2566, -2566,  1354,   160, -2566,  2019,  1532,  4934, -2566, -2566,
   -2566,  2021, -2566, -2566, -2566, -2566,  1248,  1248,  1248, -2566,
   -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566,
   -2566, -2566, -2566, -2566, -2566,  1370,   160, -2566,   160, -2566,
     160,  1532,   160, -2566,  1354,   160, -2566,   160, -2566,  1856,
    2022,  2024, -2566,  2026,   160,   160,  2029,  1532,  4934, -2566,
   -2566,   160, -2566,   160, -2566,   573,   110,   160,  2030, -2566,
     160, -2566, -2566,  4691, -2566,  2031,  2032,  2034,  2037,  2038,
    1532, -2566,   110,   110,   110,  1532, -2566,   110,   573,   110,
     110,  1532, -2566,   110,   110,   110,  1532, -2566,   110,   110,
    1532,  4934,   110,  1532,   110,   110,  1532,   110,  1532, -2566,
   -2566,  2072,  4691,  2073, -2566,   160, -2566, -2566, -2566, -2566,
    2075, -2566, -2566, -2566, -2566,   -20,    41, -2566, -2566, -2566,
   -2566, -2566, -2566,  2076, -2566, -2566,    41,  2077,  2079,  2080,
      41,    41,  -105,  2083,  2086,  2088,  2089,  2090,  2091,    41,
      41,  -105,  2087,  2093,  2094,  2095,  2097,  2100,    41,    41,
    -105,  2103,  2104,  2105,    41,   -20,   -20,   -20,   -20,   -20,
    2107,   -20,   -20,  2109,    41,    41,   -20,   -20,   -20,   -20,
     -20,  2110,   -20,   -20,  2140,    41,    41, -2566, -2566, -2566,
   -2566, -2566,  2142, -2566, -2566,  2143,    41, -2566, -2566, -2566,
   -2566, -2566,  2144, -2566, -2566,    41, -2566,    41,  2145, -2566,
    2146,  2148, -2566,  1799, -2566,   110,  2149,  4934,   110,   160,
    4934,  2178, -2566,   110, -2566, -2566,   110, -2566,  4934,  2179,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160, -2566, -2566, -2566,  4934,   110,   160,  4934,  2180, -2566,
    1354,  1354,  4934,  1354,  1354,  4934,  4934,  1354,  1354,   160,
     160,   160,   160,   160,   160,  1370,   160,   160,   160,  1544,
    1550,  1619,  1646,  1676,  1834,  1836,  1640, -2566,  1839, -2566,
   -2566,  1370,   160,   160,   160,   160,  1370,   160,   160,   160,
     160,   160,   160,  1532,   160,  1604,  1370,   160,   160, -2566,
   -2566,   573,   321,  4934,  4934, -2566, -2566, -2566,   573,  1532,
    2181, -2566, -2566, -2566, -2566,   160, -2566, -2566,  1354,   160,
   -2566, -2566, -2566,  1269,  2186,  2188, -2566,   160,  2182,   841,
   -2566,   110, -2566, -2566, -2566, -2566,  2190, -2566, -2566,  1532,
    2194,  2195,  2197,  2198,  4934,  2199, -2566, -2566, -2566, -2566,
   -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566,
   -2566, -2566,   573,   110, -2566,   573, -2566, -2566,   573, -2566,
     573,  2200,  1532,  2202, -2566,   160, -2566, -2566,   -20,    41,
   -2566,   -20,   -20,   -20,   -20,   -20,  2214,   -20,   -20,    41,
     -20,   -20,   -20,   -20,   -20,  2215,   -20,   -20,    41,   -20,
     -20,   -20,   -20,   -20,  2216,   -20,   -20,    41,   -20, -2566,
   -2566, -2566, -2566, -2566,    41, -2566, -2566,  2217,   -20,   -20,
   -2566, -2566, -2566, -2566, -2566,    41, -2566, -2566,  2218,   -20,
   -2566,    41,  2220, -2566,    41, -2566, -2566,    41, -2566, -2566,
    1532, -2566,  4934,   110, -2566,  2221,  1532,   160, -2566, -2566,
    1532,   160, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566,
   -2566,   160,   160,   110, -2566,  2222,  1532,   160,  1354, -2566,
     110,   160,  1354,   110,   110,  4934, -2566,   160,  2225,  2225,
     160,   160,  2225,  1370,  2225, -2566,  4934,   703,  2227,  2229,
    2237,  2244,  2245,  2247, -2566,   321,  1370,  2225,  2225,   160,
     160,  1370,   160,   160,   160,   160,   160, -2566,  1354,   160,
    2248, -2566, -2566,   160,  2225,   321,    51,  1532,  1532,   321,
     573,  2250, -2566, -2566, -2566,  2251,   160, -2566,  2252,  2254,
    1911,   160, -2566, -2566,  2259,   -11,  4934, -2566,  2265,    60,
    4934, -2566, -2566, -2566, -2566, -2566, -2566,  2268,   -11,   160,
   -2566, -2566, -2566, -2566, -2566, -2566, -2566,    41, -2566, -2566,
     -20, -2566, -2566, -2566, -2566, -2566,    41, -2566, -2566,   -20,
   -2566, -2566, -2566, -2566, -2566,    41, -2566, -2566,   -20, -2566,
     -20,    41, -2566, -2566,   -20,    41, -2566, -2566,    41, -2566,
   -2566,   160,   110, -2566,  4934,  4934,   160,  4934,   160, -2566,
   -2566, -2566,  4934,  4934,   160, -2566, -2566,  4934, -2566, -2566,
   -2566,   110,  2269, -2566, -2566, -2566,  1370,   160, -2566,  2273,
   -2566, -2566,  1532,  2274, -2566,  2276, -2566, -2566, -2566, -2566,
   -2566,  2277, -2566, -2566,  1370,   160,  2278, -2566, -2566,   160,
    4934, -2566, -2566, -2566, -2566, -2566, -2566, -2566,    51,  1680,
    1334, -2566, -2566, -2566,   321,  2279,  2281,  2282, -2566,  1930,
    2280,    76,   -11, -2566, -2566, -2566, -2566,  2284,  4934, -2566,
   -2566, -2566, -2566, -2566,   -11, -2566,  2285,   -20, -2566,   -20,
   -2566,   -20, -2566, -2566,   -20, -2566,   -20, -2566,  1799, -2566,
     110,   110,   160,   110,  2289,   110,   110,   160,   110,   160,
   -2566, -2566, -2566, -2566,  2290, -2566,   160, -2566, -2566,  2292,
   -2566,   160, -2566, -2566, -2566,  2294,   160, -2566, -2566, -2566,
    1532, -2566, -2566, -2566,  1680, -2566,  1698,  1920,  1334, -2566,
   -2566, -2566,  2296,  2297,  2299, -2566, -2566, -2566, -2566,    78,
      78, -2566, -2566,  1532, -2566, -2566, -2566, -2566, -2566, -2566,
   -2566,   110, -2566, -2566,  2301, -2566,  4691, -2566, -2566,  2302,
   -2566,  1370, -2566, -2566,  1370,   160, -2566, -2566,   160, -2566,
    1370,   160, -2566,  4934, -2566,  1698, -2566,   321, -2566,  2303,
    2304, -2566,   160,   160,   160,   160,    60,  2307,  4691,  1532,
   -2566,  4691, -2566, -2566,   160,  2310, -2566,   160,   110, -2566,
   -2566, -2566,  2312,  2313,   160,  2314,   160, -2566, -2566,  1532,
   -2566, -2566,  1532, -2566, -2566,  2311, -2566, -2566,  2317,  2318,
   -2566, -2566,  2319, -2566,  2320, -2566, -2566,  1370, -2566,  1370,
   -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2566, -2566,    -3, -2566,   873, -2566, -1789,  -985,  1597, -2566,
     949,  -407,  1579,   -48,    59, -2566, -2566, -1656,  1624,  2018,
    -698, -1847,  -852,  1713,  1031, -2566, -1118, -2566,  -689, -1147,
   -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566,
   -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566,
   -2566, -2566, -2566, -2566,  -543,  -473, -2566, -2566, -2566, -2566,
   -2566, -2566, -2566, -2459, -2566, -2566, -2566, -2566, -2566, -2566,
   -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566,
   -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566,
   -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566,
   -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566,
   -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566,
   -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566,
   -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566,
   -2566, -2566, -2566, -2566, -1459, -2566, -2566, -2566, -2566, -2566,
    -663, -2566, -2566, -2566, -2566, -2566, -2566,   457, -2566, -2566,
   -2566, -2566,  -147,  -662, -1514,  -429, -2566, -2566, -2566, -2566,
   -2566,  -506,  -452, -2566, -2566, -2565, -2566, -2566, -2566, -2566,
   -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566,
   -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566,  1584, -2566,
   -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566,
   -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566, -2566,
   -2566
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1252
static const yytype_int16 yytable[] =
{
      67,  1897,   352,  1084,  1087,  2041,   897,  2043,   104,  1110,
    1511,  1125,  1584,   868,  1589,   903,    64,    65,  1964,   106,
     296,  2643,  1416,   641,  1114,  1916,    64,    65,   995,   292,
    1493,  1647,   788,    64,    65,   847,   624,   316,   526,  1070,
    1619,  1620,  1621,   106,   258,   850,   346,  1917,   412,   357,
    1918, -1098,   364,   527,   754,  1260,   370,   791,  1363,   377,
    1146,  1919,  1350,   380,   382,   587,  1476,   392,   688,  2655,
     399,   403,  1482,   615,   406,   528,   996,  1700,   410,    64,
      65,    64,    65,   411,  1920,    64,    65,    64,    65,   742,
     723,   294,  2649,    64,    65,   529,   424,   428,   433,   434,
     438,   440,  1921,  1079,    64,    65,   259,  1126,  1118,   873,
    1331,    54,   530,  1127,   755,   531,   106,   444,   540,   106,
     360,   407,    76,   989,    64,    65,  1367,   157,   260,  1370,
    1176,    64,    65,  1147,  1677,  1678,   111,   373,   854,  1346,
    1710,  2756,   532,   533, -1251,   904,  1401,   106,  1625,   744,
      64,    65,   453,    64,    65,    64,    65,  1501,   248,   492,
     111,  1561,   106,    64,    65,  1477,  1351,  1347,   493,  1715,
     898,  1261,   443,  1562,   874,   485,   857,  2644,  1885,   238,
     506,   261,  1748,  2721,    64,    65,  1252,  1253,  1254,   256,
    2779,   266,  1887,  1332,   990,  2724,   534,  1418,  1483,  2315,
    1890,  1177,  1364,   724,    64,    65,   535,   282,   997,  1679,
     764,   541,   173,   421,   388,  2327,  2328,  2329,  1148,   865,
    2331,   114,  2333,  2334,   855,   767,  2336,  2337,  2338,   115,
     116,  2340,  2341,   111,   858,  2344,   111,  2346,  2347,   422,
    2349,    99,   507,   622,   515,   114,   520,   524,  2650,   588,
     713,  1336,   310,   115,   116,   552,  1502,   866,   361,   648,
     649,   100,  1648,  1324,   111,   689,   616,  2716,   536,   537,
     585,   756,   690,   691,   413,   695,  2645,   697,  1494,   111,
     314,   106,   625,   998,  1115,   699,   702,  1071,   705,   709,
    1149,   711,   478,   999,   642,   972,   572,   629,   479,  1701,
     106,   721,  1080,  1141,   973,   974,   750,  1119,   692,   905,
    1116,   731,   733,  1128,   101,  1512,   119,  1419,   114,   899,
     789,   114,   297,  1965,  1000,   106,   115,   116,  1478,   115,
     116,   389,   298,   383,   776,   777,   779,   480,   781,   538,
     119, -1098,   784,   785,   770,   792,   262,  2651,  2421,   114,
     707,  2424,   975,   797,   799,  1922,  2428,   115,   116,  2429,
     568,   800,  1711,   481,   114,   149,   803,   805,   408,  1485,
     150,   151,   115,   116,   806,   390,   391,   807,  2444,   778,
     315,  1943,    66,  1443,  2717,  1081,   268,  1505,   345,   149,
    1120,  1716,   374,   263,   150,   151,   817,   818,   111,   102,
    1886,  1749,  1474,   822,   823,   824,   735,   825,  1705,   482,
    1948,   630,   573,   119,  1888,   693,   119,   111,  1717,  1503,
    1543,   832,  1891,    64,    65,   833,   356,   893,   483,  2718,
     838,   839,   840,   841,   842,   843,  1866,   844,  1240,   428,
     848,   849,   111,  1999,   119,   369,   306,   109,  1457,   428,
     851,  1555,  1674,   483,   484,    55,  1089,  1151,   216,   119,
    1090,   269,   149,  1882,  2512,   149,   736,   150,   151,  1172,
     150,   151,  1178,   308,   742,   217,  1458,   331,   311,  1459,
     109,  1256,  1460,   114,   976,   977,  1911,   324,   631,  1073,
     395,   115,   116,   149,   309,   103,  2522,    56,   150,   151,
     846,   312,   114,   880,   881,   109,   827,   828,   149,  1461,
     115,   116,  1183,   150,   151,    57,   341,   714,   574,    64,
      65,   889,   913,   914,   354,  1444,   384,   114,   396,  1173,
    1152,   743,  1179,  1091,   744,   115,   116,   325,  1462,  1843,
     948,  1463,  1846,   632,  1495,    58,   326,   773,   575,   912,
    1706,    77,  1666,   715,   359,  1092,   865,    83,   270,   978,
    1670,  1718,  1074,    59,  1307,    64,    65,    60,   633,   979,
     980,   745,  1184,   271,   981,   327,  2573,   385,   119,   915,
      61,   366,   943,   986,   386,   916,   569,    78,  1122,   894,
      64,    65,   961,   962,   866,   737,  2581,   119,  1585,  1445,
     982,  1312,  1005,  2586,  1475,   716,  2589,  2590,   746,   570,
     117,   367,  1440,    64,    65,  1153,  1204,  1205,  1093,   960,
    1719,   368,   119,   738,  1707,   372,   932,   149,  1308,   808,
    1468,   405,   150,   151,   917,   417,   272,  1727,   342,   415,
     963,   400,  1734,   117,  1446,  1004,   149,  1075,  1737,   918,
    1167,   150,   151,  2511,  1309,   555,   861,  1464,  1586,   747,
      79,   419,  1082,   748,   919,  1095,  1591,   109,   117,  1708,
     920,   149,  1210,  1597,   332,   921,   150,   151,  1111,   556,
    1761,  1762,    84,   441,   301,   333,  1174,  1154,   749,  1180,
    1465,   750,  1132,  1605,   454,   809,  1133,  1134,  1135,  1136,
     557,   751,  1137,   465,  1139,    85,  1140,   428,  1142,    86,
    1168,  1385,   334,   717,  1795,   558,  1466,   398,  1094,  1060,
    1386,  1387,   343,  1796,  1797,  2669,  1592,   774,  1763,  1185,
     922,  1567,  1441,  1598,  1313,  1310,   328,   401,  1203,    64,
    1197,    62,  1609,  1422,  2679,    80,  1496,  1169,  1806,   923,
    1469,  1112,   862,  1606,   924,   620,   925,  1807,  1808,  1487,
    1053,  1061,    87,   466,   810,    64,    65,   476,  1388,  1697,
    1423,  1798,   964,   965,   804,  1194,  1195,  1060,  1196,  1198,
    1200,  1201,   926,   927,   302,  1735,  1054,  1311,  1314,   335,
     928,  1060,   601,  1213,  1214,   488,    64,    65,    81,  1318,
    1218,  1219,  1610,    88,  1424,  1809,   490,  2683,   929,   546,
    1425,    89,    90,   550,  1315,  1587,  1426,   402,   559,  1061,
    1225,  1226,  1227,  2732,  2733,  2694,  2735,   336,  2737,  2738,
     117,  2740,   863,  1061,  1427,   597,  1113,  1235,  1236,  1237,
    1211,  1239,   428,  1241,  1736,  1242,   517,   966,  1667,  2291,
    2292,  2293,   543,  1086,   811,  1428,  1488,   967,   968,   812,
    1764,  1765,   602,   303,   930,   109,  1245,  1170,  1247,    83,
    1429,   621,   304,   544,   551,  1781,  1782,   560,  1249,   598,
    1724,  2201,   545,  1593,  2767,   428,  1257,   159,   969,  1698,
    1599,  1259,   547,  1987,   239,  1062,   337,  2209,   554,   264,
    1389,  1390,  1430,  1799,  1800,   603,   299,   564,  1274,  1276,
    1607,  1063,  1064,   565,  2100,  1489,  1317,  1319,  1322,  1055,
    1083,   561,   760,  1783,  1327,   548,  2228,   362,  1246,  1333,
     562,  2799,   338,   567,  2113,  1766,  1376,  1810,  1811,  1725,
    1334,  1431,   586,   604,   394,  1767,  1768,  1703,   339,  2150,
    1221,  2601,  2153,  1062,   592,  2773,  1432,  1342,  1222,  1611,
    2161,  2776,   635,  2164,   318,  1712,  2044,  1062,  1433,  1063,
    1064,  2172,   283,  1056,  2175,  1391,  1769,  2625,  1801,   274,
     636,  2182,   240,  1063,  1064,  1392,  1393,   599,  1802,  1803,
    1394,   577,   593,  1804,    84,  1434,   595,   761,   275,  1057,
     276,   614,   578,  1065,  1066,  1326,  1726,  1435,  2603,  1436,
    1437,   241,  1812,   682,    64,    65,  1395,    85,  2813,  1805,
    2814,  2040,  1813,  1814,  1479,    64,    65,  1815,   117,   579,
    2294,  1406,   619,   455,   456,   457,   458,   459,   460,    64,
      65,   461,   462,   463,   464,  1504,  1828,  1829,   618,  1438,
      64,    65,   319,  1816,  1510,  1784,  1785,   623,   637,  1217,
     627,  1065,  1066,   639,   320,  1867,   644,  1704,    64,    65,
    1538,   363,  1539,   522,    87,  1065,  1066,  1540,  1541,  1542,
    2681,  2682,   242,   645,  2685,  1713,  2687,  1548,   107,  1728,
    1549,  1870,  1551,   683,  1830,   762,  1688,   243,  2692,  2693,
      64,    65,  1407,  2697,  2698,   435,   580,  2701,  1553,   650,
    1554,    93,  2702,  2703,   284,    88,  1558,  1559,   277,   687,
     285,   698,   286,    89,    90,   712,   109,  1729,    94,   726,
    1786,  1565,  1566,   646,   647,   428,  1568,  1569,    64,    65,
    1787,  1788,  1449,  1571,   581,  1572,  1480,   376,  1574,   321,
    1575,   249,   719,  1481,  1628,  1207,  1208,  1868,  1721,   244,
     720,   379,   322,   704,   722,  1722,  2742,  1689,   728,  2743,
    1450,  1789,   110,  1451,  2746,  1408,  1409,   278,   436,  1817,
    2749,  2117,  2118,  1871,   684,  2752,  1730,  1622,  1818,  1819,
    1410,  1623,   734,  1624,   740,  1641,   758,  1627,    64,  1273,
     245,   759,   685,  1452,   782,    95,   765,   768,   771,    69,
     246,  1869,  1633,   582,  1636,    70,  1638,  1639,  1640,  1642,
     783,   279,   796,  1645,  1646,   786,  1831,  1832,   112,  2119,
     280,  1654,  1453,  1411,   794,  1454,  1820,  1872,  1660,   250,
    1690,  1691,  1661,  1662,  1663,  1731,    64,    65,   801,    96,
     802,   251,   428,  1668,    71,  1692,  1671,  1546,  1547,  2794,
    2463,   815,  2797,   437,   816,   583,  1683,   819,  1684,   820,
    2366,  1686,    64,    65,  1635,   821,  2476,   826,  2282,  2375,
      72,  2481,  2808,   700,   829,    97,   252,   831,  2384,   117,
    1578,  1579,  2126,  2127,   118,   425,  2815,   852,  1693,  2816,
    2817,  1833,   427,    64,    65,    64,    65,  1859,    64,    65,
     853,  1834,  1835,   860,  1739,   869,  1740,  1321,   871,  1741,
    1742,  1675,  1743,   876,  1744,   878,    73,  2135,  2136,  2505,
    1746,   891,  1747,    64,    65,  1863,   253,  1695,   896,  1753,
    2128,  2595,  1836,   910,  2598,   729,  2600,  2314,   907,   254,
     901,  1455,    64,    65,  1908,   908,   701,    64,    65,  2612,
    2613,  2120,  2121,   425,   426,   427,  1903,  1904,  1821,  1822,
    2332,    74,   911,    64,    65,  2137,  2627,  1413,  1414,   835,
     836,   933,   160,   935,  1456,   161,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,  1860,   162,  1862,  1864,   730,   934,
     937,  1580,  1581,   163,    64,    65,  1865,  1099,  1413,  1414,
     939,   941,   944,   946,   950,  1100,  2122,   955,  1875,   957,
     958,  1101,  1878,  1823,   970,   971,  2123,  2124,   983,   959,
    1582,   991,   993,  1824,  1825,    64,    65,  1881,  1826,  1413,
    1414,   994,  1102,  1001,  1002,  1003,  1907,  1909,  1059,  1068,
    1077,  1129,  2129,  2130,  1078,  1858,  1915,  2125,  2599,  1130,
    1926,  1131,  1143,   164,  1827,  1145,  1103,  1932,  1156,   956,
    1157,  2611,  1158,  1159,  1104,  1160,  2616,  1161,    64,    65,
    1910,  1937,  1413,  1414,  1162,  1163,  1939,  2138,  2139,  1165,
    1941,  1164,  1944,  1945,  1182,  1947,  1949,  1950,  1187,  1953,
    2233,  1188,  1956,  1957,  1958,  1959,  1960,  1961,  1962,  1963,
    1966,  1968,  1969,  1105,   165,  1971,  1972,  1973,  1974,  1189,
    1190,  1106,  1191,  1098,  1192,  1980,  1981,  2131,  1123,  1983,
    1984,  1985,   166,   167,  1193,  1988,  1989,  2132,  2133,   168,
    1206,   169,  1209,  1215,  1216,  1220,  1223,   445,  1992,  1993,
    1224,  1994,  1995,  1228,  1230,  2285,  1231,  1264,  1243,   219,
    1244,  1265,  2140,  2495,  1266,  1268,  1270,  1107,  2134,   170,
    2499,  1269,  2141,  2142,  1271,  1272,  1323,  1325,  1329,  1108,
    1335,   220,  1339,  1353,   221,  1340,  1343,  1344,  1345,  1354,
    1368,   293,  1355,  1356,  1358,  1109,  1360,  2300,  1359,  2015,
    2016,  2017,  1361,  2143,  2018,  1362,  1369,  1417,  1371,  2020,
    2023,   467,  2025,  2026,  2027,  1372,  2028,  2029,   222,  2031,
     446,  1378,  2034,  2035,  2521,   223,  1380,  2523,  1381,   468,
    2524,  2038,  2525,  1383,  1396,   171,   224,   225,  1397,  2042,
    1398,   447,   448,   226,  2047,  2048,   469,  1399,  1402,  1447,
     449,  1403,  2050,  1404,  1420,  1421,  1442,  1467,  1448,   470,
    1470,  2053,  1472,  1473,  1486,  1471,   227,  1490,   450,  1491,
    1492,  2022,   442,  1497,  1573,  1498,  2249,   471,   451,  1499,
    1229,   472,  1500,  1508,   228,  1506,  1509,  2250,  1545,  1556,
    1557,  1563,  1564,  1570,   473,  1577,  1601,  2081,   229,   230,
    1590,  1595,  1576,  1596,  1602,   231,  1603,  1604,  1643,  1613,
    1614,  1615,  1618,  1099,  2251,  1616,  1644,  1202,  1617,  2089,
    2090,  1100,  1630,  1631,  2092,  1650,   232,  1101,  1632,  1655,
    2095,  1637,  1656,  1657,   474,  1669,  2772,  1676,  1672,  2066,
    1685,   504,  -453,   511,   514,  1687,   519,   523,  1102,  2072,
    1696,  2252,  1673,  1699,  2077,  1709,  1714,  1732,  1733,  1723,
    1720,  1751,  1752,  1745,  1757,   233,  1738,  1776,  1779,  1837,
    1790,  1792,  1103,  1794,  1838,   590,  1839,  1840,  1844,  1845,
    1104,  1847,  2634,  1855,  1848,  1849,  1852,  1883,  1873,  1877,
    1884,  1892,  1893,  1894,   606,   612,  1895,  1896,  1898,  1899,
    1900,  1901,  1902,  2448,  2449,  1905,  2451,  2452,  1889,  1924,
    2455,  2456,  1929,  1940,  1977,  1978,  1979,  1991,   234,  1105,
    1990,  1942,  1946,  1954,  1955,  1970,  1996,  1106,   235,  1997,
    1998,  2033,  2000,   348,  2001,  2002,  2003,  2196,   696,  2197,
     349,  2199,  2004,  2144,  2005,  2006,  2007,  2008,  2303,  2009,
     706,  2010,  2011,  2155,  2012,  2013,  2014,   236,  2030,  2032,
    2210,  2211,  2212,  2213,  2214,  2215,  2216,  2217,  2218,  2036,
     727,  2503,  2049,  1107,  2054,  2166,  2055,  2056,  2057,  2058,
    2059,  2091,  2467,  2093,  2224,  1108,  2226,  2094,  2468,  2097,
    2098,  2099,  2101,  2102,  2490,  2103,  2106,  2640,  2108,  2109,
    2110,  1109,  2114,  2232,   428,  2115,  2151,  1507,  2116,  2236,
    2253,  2145,  2254,  2146,  2147,  2152,  2714,  2154,  2239,  2240,
    2241,  2242,  2243,  2244,  2245,  2246,  2247,  2248,  2156,  2157,
    2261,  2262,  2263,  2264,  2265,  2266,  2267,  2268,  2269,  2270,
    2271,  2272,  2158,  2275,  2162,  2276,  2277,  2278,  2707,  2163,
   -1114,  2165,  2167,  2168,  2169,  2173,  2174,  2469,  2176,   428,
    2286,  2177,  2178,  1552,  2179,  2183,  2255,  2184,  2253,  2185,
    2187,  2188,  2190,  2191,  2219,  1560,  1349,  2193,  2200,  2202,
     830,  2205,  2208,  2220,  2470,  2221,  2222,  2223,   814,  2227,
    2274,   837,  2279,  2295,  2280,  2296,  2283,  2297,  2284,  2299,
     845,   428,  2301,  2287,  2302,  2290,   834,  2304,  1400,  2305,
    2306,  2307,  2308,  2309,  2471,  2317,  2321,  2322,  2312,  2323,
    2313,  2585,  2324,  2325,  2316,  2588,  2707,  2318,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,  2351,  2787,  2354,  2356,
    2359,  2622,  2361,   350,  2362,  2363,   351,  2367,   882,   883,
    2368,  2376,  2355,  2369,  2370,  2371,  2372,  2377,  2720,  2378,
    2379,   887,  2380,  1651,  1652,  2381,   890,  2385,  2386,  2474,
    2387,  2394,  2320,  2397,  2405,   902,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,  2408,  2420,  2411,  2412,  2414,  2417,
    2418,  2353,  2419,  2422,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,  2427,  2431,  2447,  2501,  2510,   951,   952,   953,
     954,  2507,  2472,  2508,  2473,  2513,  2425,  2475,  2515,  2704,
    2516,  2517,  2758,  2518,  2520,  2526,  2528,  2432,  2433,  2434,
    2435,  2436,  2437,  2438,  2439,  2440,  2441,  2442,  2537,  2546,
    2555,  2561,  2565,  2445,  2568,  2574,  2582,   428,   428,  2593,
     428,   428,  2604,  2605,   428,   428,  2457,  2458,  2459,  2460,
    2461,  2462,  2606,  2464,  2465,  2466,  2763,  2765,  1097,  2607,
    2608,  2609,  2754,  2624,  2635,     0,  2636,  2638,  2639,  2477,
    2478,  2479,  2480,  2642,  2482,  2483,  2484,  2485,  2486,  2487,
    2648,  2489,  2654,  2680,  2493,  2494,  1042,  2686,  2757,  2689,
    2690,  2691,  2696,  2711,  2715,  1856,  2712,  2713,  2722,  2725,
    1043,  1861,  2502,  2736,  2744,   428,  2504,  2747,  2750,  1044,
    2506,  2759,  2760,  2761,  2509,  2768,  2771,     0,  2781,  2782,
    1045,   710,  2788,  1874,  2796,  2807,  1876,  2800,  2801,  2803,
    1880,  2809,     0,  2810,  2811,  2812,     0,     0,     0,  1166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1046,  1906,     0,     0,     0,     0,     0,  1912,     0,     0,
       0,     0,  2529,     0,     0,  1925,     0,     0,  1928,     0,
       0,  1047,     0,     0,     0,     0,     0,  1933,  1934,     0,
     795,     0,     0,     0,  1754,  1755,  1756,     0,  1938,     0,
       0,     0,     0,     0,  1758,  1759,  1760,     0,     0,     0,
       0,  1771,  1772,  1773,     0,     0,  1774,  1775,     0,  1777,
    1778,     0,     0,     0,     0,     0,     0,     0,  1048,     0,
    1233,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1238,     0,  2576,     0,     0,     0,  2578,  1850,
    1851,     0,     0,  1853,  1854,     0,     0,     0,  2579,  2580,
       0,     0,     0,     0,  2584,   428,     0,  1049,  2587,   428,
       0,     0,     0,     0,  2592,     0,     0,  2596,  2597,  1248,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1050,     0,  2614,  2615,     0,  2617,
    2618,  2619,  2620,  2621,     0,   428,  2623,     0,     0,     0,
    2626,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2637,     0,     0,     0,     0,  2641,     0,
       0,     0,     0,  1051,     0,  1052,     0,     0,     0,     0,
       0,     0,   879,     0,     0,     0,  2656,     0,     0,   884,
       0,     0,   885,     0,  1338,     0,     0,   886,     0,     0,
       0,   888,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2668,     0,
       0,     0,     0,  2672,     0,  2674,     0,     0,     0,     0,
       0,  2677,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2684,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   949,  1484,
       0,     0,  2695,   106,     0,     0,  2699,     0,     0,     0,
    2731,     0,     0,     0,     0,     0,     0,     0,   107,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2719,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   108,
       0,     0,    64,    65,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1544,     0,     0,   109,     0,   107,  2734,
       0,     0,     0,  1550,  2739,     0,  2741,     0,     0,     0,
       0,     0,     0,  2745,     0,     0,     0,     0,  2748,     0,
    1366,     0,     0,  2751,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   109,     0,     0,     0,
       0,     0,   110,     0,     0,     0,  2762,  2764,     0,     0,
       0,     0,     0,     0,  1138,     0,     0,     0,     0,     0,
     111,  1144,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2774,     0,     0,  2775,     0,     0,  2777,  2204,
       0,     0,   110,     0,     0,     0,     0,     0,     0,  2783,
    2784,  2785,  2786,     0,     0,     0,     0,     0,   112,     0,
       0,  2795,     0,     0,  2798,     0,     0,  1626,     0,     0,
       0,  2802,     0,  2804,     0,  2229,     0,     0,  2096,     0,
       0,     0,     0,     0,  1634,  2770,     0,     0,     0,     0,
       0,  2104,     0,     0,     0,     0,     0,   113,   112,     0,
       0,  2107,     0,     0,     0,   114,     0,     0,  1659,     0,
       0,     0,     0,   115,   116,     0,     0,  2790,  1665,   117,
    2793,     0,     0,     0,   118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1682,  1232,     0,
       0,     0,     0,     0,     0,  1234,     0,  1694,     0,     0,
       0,     0,  1702,     0,     0,     0,     0,     0,     0,   117,
       0,     0,     0,     0,   118,     0,     0,     0,     0,     0,
       0,     0,     0,  2192,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1250,  1251,     0,     0,     0,  1255,     0,     0,  1258,     0,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1267,     0,     0,     0,     0,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     0,     0,     0,     0,     0,   149,
       0,     0,     0,     0,   150,   151,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     0,  1857,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    64,    65,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   107,     0,  1405,     0,  1879,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   288,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1913,     0,     0,  1914,     0,   109,
       0,     0,     0,     0,     0,     0,     0,  1930,  1931,     0,
       0,     0,  1770,     0,     0,  1935,     0,     0,     0,     0,
       0,     0,  1936,     0,  1780,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1841,  1842,     0,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1975,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1986,     0,  2357,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2496,     0,     0,     0,     0,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2389,  2390,  2391,  2392,
    2393,     0,  2395,  2396,     0,     0,     0,  2400,  2401,  2402,
    2403,  2404,     0,  2406,  2407,     0,     0,     0,     0,     0,
     289,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2021,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1629,   117,     0,     0,     0,     0,   118,     0,  2037,
       0,     0,     0,     0,     0,     0,     0,     0,   290,     0,
       0,     0,     0,     0,     0,  2046,     0,     0,     0,     0,
       0,  1653,     0,     0,     0,     0,  1658,     0,     0,     0,
    2051,     0,  2052,     0,     0,     0,  1664,     0,     0,     0,
       0,     0,  2060,     0,     0,  2062,     0,  2063,  2064,  2065,
    2067,     0,     0,  2069,     0,     0,  2070,     0,     0,  2071,
    2073,     0,  2074,  2075,  2076,  2078,     0,  2079,  2080,     0,
     291,   984,     0,  2082,  2083,  2084,   985,     0,  2085,  2086,
       0,     0,     0,     0,  2087,  2088,     0,     0,     0,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,     0,  2610,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2628,     0,
       0,     0,  2633,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2530,
       0,     0,  2532,  2533,  2534,  2535,  2536,     0,  2538,  2539,
       0,  2541,  2542,  2543,  2544,  2545,     0,  2547,  2548,     0,
    2550,  2551,  2552,  2553,  2554,     0,  2556,  2557,     0,  2559,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2562,
    2563,     0,     0,     0,     0,     0,     0,     0,  2195,     0,
    2566,     0,  2198,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2203,     0,     0,  2206,     0,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,  2225,     0,  2105,
       0,     0,     0,     0,     0,     0,     0,  2111,  2112,     0,
       0,     0,  1927,     0,     0,     0,     0,  2710,     0,     0,
       0,     0,  2148,  2149,     0,     0,     0,     0,  1277,  1278,
    1279,     0,     0,  2159,  2160,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2170,  2171,     0,     0,     0,     0,
       0,     0,     0,  2273,  2180,  2181,     0,  1280,  1281,     0,
    2186,  1282,     0,     0,     0,     0,     0,     0,  1283,     0,
    2189,  1284,  1976,     0,     0,  1285,  2289,     0,  1982,     0,
       0,  2658,     0,  1286,  1287,     0,     0,     0,     0,     0,
    2660,  1288,     0,     0,     0,     0,     0,     0,     0,  2662,
       0,  2663,     0,     0,     0,  2665,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1289,
    1290,     0,     0,  1291,     0,     0,     0,  2311,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1292,
    2780,     0,  2319,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2019,     0,     0,     0,
    1293,     0,  2024,     0,     0,     0,     0,     0,     0,     0,
    2343,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2352,     0,  1294,   651,   652,     0,  2039,     0,     0,
       0,     0,  1295,  2045,     0,     0,     0,     0,  2726,     0,
    2727,     0,  2728,     0,     0,  2729,     0,  2730,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2061,     0,     0,     0,     0,     0,     0,     0,
    2068,     0,     0,     0,     0,     0,     0,  1296,     0,  1297,
       0,   653,     0,     0,     0,  1298,  1299,   654,     0,     0,
       0,     0,     0,     0,   655,     0,   656,     0,     0,     0,
       0,   657,  1300,     0,   658,     0,     0,     0,     0,     0,
     659,     0,     0,  1301,     0,     0,     0,     0,     0,     0,
       0,   660,     0,     0,     0,     0,  2423,   661,     0,  2426,
       0,     0,     0,     0,     0,     0,   662,  2430,  1302,     0,
    1303,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1304,   663,     0,  2443,     0,     0,  2446,     0,     0,     0,
    1305,  2450,     0,     0,  2453,  2454,     0,     0,     0,  2358,
       0,     0,   664,     0,     0,     0,     0,     0,     0,  2360,
       0,     0,     0,  2364,  2365,     0,     0,   665,     0,     0,
       0,     0,  2373,  2374,  1306,     0,     0,   666,   667,     0,
       0,  2382,  2383,     0,     0,    64,    65,  2388,     0,     0,
       0,     0,  2497,  2498,     0,     0,     0,  2398,  2399,   668,
       0,   107,     0,     0,     0,  2194,     0,     0,  2409,  2410,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2413,
       0,     0,   669,     0,     0,     0,     0,  2207,  2415,     0,
    2416,     0,     0,  2519,     0,     0,   670,     0,   671,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   672,     0,     0,     0,     0,   673,     0,
       0,  2230,  2231,     0,     0,   674,     0,     0,     0,     0,
       0,     0,   675,     0,     0,     0,     0,     0,  2234,  2235,
       0,     0,     0,  2237,  2238,   110,     0,     0,     0,     0,
     676,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   677,   678,     0,   679,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2281,     0,     0,     0,     0,     0,     0,
       0,  2572,     0,     0,  2288,     0,     0,     0,     0,     0,
       0,   112,     0,     0,     0,     0,   680,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2591,     0,     0,     0,     0,  2298,
       0,     0,     0,     0,     0,  2602,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2310,     0,     0,  1681,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2531,   107,     0,     0,     0,   118,  2326,     0,
       0,     0,  2540,  2330,     0,     0,     0,     0,     0,  2335,
       0,  2549,     0,     0,  2339,  2647,     0,     0,  2342,  2653,
    2558,  2345,     0,     0,  2348,     0,  2350,  2560,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2564,     0,
       0,     0,     0,     0,  2567,     0,     0,  2569,     0,     0,
    2570,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2670,  2671,     0,  2673,   110,     0,     0,
       0,  2675,  2676,     0,     0,     0,  2678,     0,     0,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,     0,     0,  2700,
       0,     0,     0,  1513,     0,     0,     0,     0,  1514,     0,
       0,     0,     0,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2723,     0,     0,
    1515,  1516,     0,  1517,  1518,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1519,     0,     0,     0,     0,     0,
    2657,     0,     0,     0,     0,     0,  1520,  1521,     0,  2659,
       0,   107,     0,     0,  1522,     0,     0,  1523,  2661,     0,
       0,     0,     0,     0,  2664,     0,     0,     0,  2666,   118,
       0,  2667,     0,     0,     0,  1524,     0,     0,     0,     0,
       0,  2488,  1525,  1526,     0,     0,  1527,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2500,   495,   496,
       0,     0,   497,     0,     0,  2769,     0,     0,     0,     0,
       0,     0,   607,   107,     0,     0,     0,     0,     0,     0,
       0,     0,  2778,     0,     0,   498,     0,  2514,     0,     0,
       0,     0,     0,     0,     0,   110,     0,  2789,     0,     0,
    2792,     0,     0,     0,     0,     0,  1528,     0,     0,     0,
       0,     0,     0,   608,     0,     0,     0,     0,     0,     0,
    2527,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
       0,   112,     0,     0,     0,     0,     0,   110,     0,     0,
       0,     0,  1529,   499,     0,     0,     0,     0,  1530,     0,
       0,   609,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   500,     0,     0,  1531,     0,     0,  2571,     0,
       0,     0,     0,     0,  2575,  1532,     0,     0,  2577,     0,
       0,     0,     0,     0,   501,     0,     0,     0,     0,     0,
       0,     0,     0,   112,  2583,     0,     0,   118,     0,     0,
       0,     0,  1533,  1534,     0,     0,     0,     0,     0,     0,
     610,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1535,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2631,  2632,     0,     0,     0,
     502,     0,     0,     0,     0,     0,     0,     0,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,  1536,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,     0,   503,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   611,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2688,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
       0,  1006,  1007,  1008,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1009,  1010,   107,     0,  1011,     0,     0,  1012,     0,     0,
       0,     0,     0,     0,  1013,     0,     0,     0,  1014,     0,
       0,     0,     0,     0,     0,     0,  1015,  1016,     0,     0,
     107,     0,     0,     0,  1017,  1018,     0,     0,  2753,     0,
     109,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1019,     0,     0,     0,     0,     0,  1020,     0,
       0,  2766,  1021,  1022,     0,     0,  1023,     0,   109,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   107,  1024,     0,     0,     0,   110,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1025,     0,     0,     0,  2791,     0,     0,
       0,     0,     0,     0,   110,     0,     0,     0,     0,     0,
       0,     0,   509,     0,     0,     0,  1026,  2805,     0,     0,
    2806,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   112,     0,     0,     0,     0,     0,     0,     0,
    1027,     0,     0,   107,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   110,     0,     0,     0,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1028,     0,  1029,     0,     0,     0,     0,     0,  1030,  1031,
       0,  1337,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   117,  1032,  1033,     0,     0,   118,     0,
       0,     0,     0,     0,     0,  1034,  1035,     0,     0,     0,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,     0,     0,     0,     0,   118,   110,     0,     0,
       0,  1036,     0,  1037,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1038,     0,  1039,     0,     0,
       0,  1374,     0,  1040,     0,     0,     0,     0,     0,   513,
       0,     0,     0,   107,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,     0,     0,
       0,     0,     0,   112,     0,     0,     0,  1041,     0,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   510,   110,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,     0,     0,     0,
       0,     0,     0,   112,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,  1375,     0,     0,     0,     0,     0,     0,     0,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     0,     2,     0,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     0,     0,     0,     0,     5,     6,     0,
       7,     8,     9,     0,     0,     0,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,     0,    11,     0,    12,
      13,     0,     0,     0,     0,     0,     0,     0,     0,    14,
      15,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,    16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    17,     0,     0,     0,    18,     0,     0,    19,
       0,     0,     0,    20,    21,     0,     0,     0,     0,     0,
      22,     0,     0,     0,     0,     0,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,     0,     0,    25,    26,    27,     0,     0,    28,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    32,    33,     0,     0,     0,     0,     0,     0,   175,
       0,     0,   176,     0,    34,   177,    35,     0,     0,     0,
       0,     0,     0,    36,     0,     0,     0,    37,     0,     0,
       0,    38,     0,    39,   178,    40,   179,   180,   181,     0,
      41,     0,     0,     0,     0,     0,   182,     0,   183,     0,
       0,     0,     0,   184,    42,   185,   186,   187,     0,     0,
      43,     0,     0,   188,     0,   189,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    44,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,     0,    47,
       0,     0,     0,     0,   190,    48,     0,     0,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   191,     0,     0,     0,     0,     0,     0,     0,
     192,     0,   193,   194,     0,     0,   195,     0,     0,    51,
     196,     0,   197,     0,     0,     0,    52,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   198,   199,     0,     0,     0,   200,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   201,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   202,   203,     0,     0,
       0,     0,     0,     0,   204,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   205,
       0,   206,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   207,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   208,   209,     0,     0,     0,     0,     0,     0,     0,
     210,     0,     0,     0,     0,     0,     0,   211,     0,     0,
       0,     0,     0,   212,     0,   213,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   214
};

static const yytype_int16 yycheck[] =
{
       3,  1460,    50,   666,   667,  1661,     4,  1663,    11,   671,
       5,     5,  1159,   486,  1161,     4,     3,     4,     5,     4,
       5,    32,  1007,     5,     5,    27,     3,     4,    14,    32,
       5,    47,     4,     3,     4,   442,     5,    40,    45,    17,
    1187,  1188,  1189,     4,     5,   452,    49,    49,     5,    52,
      52,     0,    55,    60,    62,   136,    59,     4,    17,    62,
      40,    63,   167,    66,    67,    16,    36,    70,     4,  2528,
      73,    74,   123,     4,    77,    82,    62,    21,    81,     3,
       4,     3,     4,    86,    86,     3,     4,     3,     4,    62,
     152,    32,    32,     3,     4,   102,    99,   100,   101,   102,
     103,   104,   104,    17,     3,     4,    67,   101,    17,   197,
      17,    67,   119,   107,   122,   122,     4,   120,   217,     4,
       5,     4,   290,    88,     3,     4,   978,    33,    89,   981,
      88,     3,     4,   113,    24,    25,   121,    32,   105,   159,
      21,  2706,   149,   150,     0,   134,   998,     4,     4,   122,
       3,     4,   155,     3,     4,     3,     4,    36,    16,   171,
     121,     5,     4,     3,     4,   135,   271,   187,   180,    21,
     168,   252,   113,    17,   262,   178,   197,   188,    21,    67,
     183,   142,    20,  2642,     3,     4,   884,   885,   886,   235,
    2755,     5,    21,   100,   159,  2654,   203,   123,   249,  2046,
      21,   159,   161,   265,     3,     4,   213,    67,   194,    99,
      67,   310,   147,     5,   191,  2062,  2063,  2064,   198,   141,
    2067,   206,  2069,  2070,   191,    67,  2073,  2074,  2075,   214,
     215,  2078,  2079,   121,   255,  2082,   121,  2084,  2085,    31,
    2087,    40,   183,   246,   185,   206,   187,   188,   188,   200,
     298,   949,    62,   214,   215,   196,   135,   179,   143,   262,
     263,    60,   278,   925,   121,   201,   197,   191,   275,   276,
     211,   279,   208,   209,   231,   278,   287,   280,   253,   121,
     198,     4,   251,   269,   265,   288,   289,   265,   291,   292,
     270,   294,   191,   279,   276,     5,    21,     5,   197,   243,
       4,   304,   216,   710,    14,    15,   279,   216,   244,   298,
     291,   314,   315,   307,   113,   310,   301,   243,   206,   317,
     292,   206,   307,   310,   310,     4,   214,   215,   298,   214,
     215,   308,   317,     4,   337,   338,   339,   236,   341,   346,
     301,   290,   345,   346,    67,   292,   307,   287,  2195,   206,
     291,  2198,    62,   356,   357,   357,  2203,   214,   215,  2206,
      62,   364,   243,   262,   206,   350,   369,   370,   251,  1031,
     355,   356,   214,   215,   377,   352,   353,   380,  2225,   229,
     298,   229,   298,    27,   308,   299,    58,  1049,   298,   350,
     299,   243,   287,   354,   355,   356,   399,   400,   121,   198,
     243,   239,    27,   406,   407,   408,    62,   410,    27,   308,
     229,   119,   137,   301,   243,   351,   301,   121,    27,   298,
    1083,   424,   243,     3,     4,   428,   298,     4,   352,   353,
     433,   434,   435,   436,   437,   438,  1421,   440,   845,   442,
     443,   444,   121,  1590,   301,   298,     4,    57,    22,   452,
     453,  1114,     4,   352,   353,    12,    36,    40,    84,   301,
      40,   133,   350,  1448,  2311,   350,   122,   355,   356,    62,
     355,   356,    62,    89,    62,   101,    50,     4,   288,    53,
      57,   888,    56,   206,   194,   195,  1471,    51,   196,    40,
     141,   214,   215,   350,    37,   294,  2343,    54,   355,   356,
     441,   311,   206,   506,   507,    57,     4,     5,   350,    83,
     214,   215,    62,   355,   356,    72,     4,    55,   243,     3,
       4,   524,     4,     5,   235,   169,   197,   206,   179,   122,
     113,   119,   122,   113,   122,   214,   215,   101,   112,  1391,
     588,   115,  1394,   251,    27,   102,   110,    13,   273,   552,
     169,     4,  1250,    91,     0,   135,   141,    28,   230,   269,
    1258,   170,   113,   120,    67,     3,     4,   124,   276,   279,
     280,   159,   122,   245,   284,   139,  2423,   248,   301,    61,
     137,   275,   585,   631,   255,    67,   288,    40,   292,   530,
       3,     4,    14,    15,   179,   251,  2443,   301,    62,   243,
     310,    30,   650,  2450,   229,   143,  2453,  2454,   196,   311,
     220,     5,   123,     3,     4,   198,     4,     5,   198,   622,
     229,     4,   301,   279,   243,     5,   567,   350,   131,    30,
     123,     5,   355,   356,   116,     5,   308,  1299,   126,    31,
      62,    79,    27,   220,   288,   648,   350,   198,  1310,   131,
      62,   355,   356,  2309,   157,   198,    79,   231,   122,   247,
     113,     5,   665,   251,   146,   668,    62,    57,   220,   288,
     152,   350,    99,    62,    37,   157,   355,   356,    40,    46,
      14,    15,   153,   198,    71,    48,   279,   270,   276,   279,
     264,   279,   695,    62,     4,    96,   699,   700,   701,   702,
      67,   289,   705,   119,   707,   176,   709,   710,   711,   180,
     122,     5,    75,   251,     5,    82,   290,   201,   298,    64,
      14,    15,   210,    14,    15,  2572,   122,   193,    62,   279,
     212,  1138,   243,   122,   163,   238,   300,   175,   786,     3,
       4,   298,    62,    40,  2591,   198,   229,   159,     5,   231,
     243,   113,   175,   122,   236,     6,   238,    14,    15,   132,
       4,   106,   233,    67,   165,     3,     4,   120,    62,   123,
      67,    62,   194,   195,    12,   778,   779,    64,   781,   782,
     783,   784,   264,   265,   171,   170,    30,   290,   217,   152,
     272,    64,   152,   796,   797,   290,     3,     4,   251,   212,
     803,   804,   122,   274,   101,    62,   171,  2596,   290,     6,
     107,   282,   283,     5,   243,   279,   113,   255,   185,   106,
     823,   824,   825,  2670,  2671,  2614,  2673,   190,  2675,  2676,
     220,  2678,   255,   106,   131,    44,   198,   840,   841,   842,
     267,   844,   845,   846,   229,   848,    33,   269,  1255,  1996,
    1997,  1998,    67,   126,   255,   152,   229,   279,   280,   260,
     194,   195,   222,   250,   346,    57,   869,   279,   871,    28,
     167,   122,   259,     5,    66,    14,    15,   244,   881,    88,
     170,  1866,    90,   279,  2731,   888,   889,    14,   310,   243,
     279,   894,    89,  1556,    21,   240,   259,  1882,    16,    26,
     194,   195,   199,   194,   195,   265,    33,    67,   911,   912,
     279,   256,   257,   236,  1766,   288,   919,   920,   921,   163,
     265,   288,    34,    62,   927,   122,  1911,    54,   869,   932,
     297,  2778,   295,   289,  1786,   269,   984,   194,   195,   229,
     943,   238,    90,   303,    71,   279,   280,   123,   311,  1801,
       4,  2465,  1804,   240,    67,  2744,   253,   960,    12,   279,
    1812,  2750,    95,  1815,    26,   123,  1664,   240,   265,   256,
     257,  1823,   207,   217,  1826,   269,   310,  2491,   269,    46,
     113,  1833,    89,   256,   257,   279,   280,   196,   279,   280,
     284,    37,    73,   284,   153,   292,    31,   109,    65,   243,
      67,     5,    48,   348,   349,   212,   296,   304,  2467,   306,
     307,   118,   269,    92,     3,     4,   310,   176,  2807,   310,
    2809,   180,   279,   280,  1027,     3,     4,   284,   220,    75,
    2015,    83,     4,   160,   161,   162,   163,   164,   165,     3,
       4,   168,   169,   170,   171,  1048,    14,    15,     5,   346,
       3,     4,   114,   310,  1057,   194,   195,     4,   191,    12,
       5,   348,   349,     5,   126,   107,     4,   243,     3,     4,
    1073,    60,  1075,     4,   233,   348,   349,  1080,  1081,  1082,
    2594,  2595,   189,     5,  2598,   243,  2600,  1090,    19,   132,
    1093,   107,  1095,   172,    62,   207,    83,   204,  2612,  2613,
       3,     4,   154,  2617,  2618,    40,   152,  2621,  1111,     5,
    1113,    84,  2626,  2627,   349,   274,  1119,  1120,   185,     5,
     355,     5,   357,   282,   283,     4,    57,   170,   101,     5,
     269,  1134,  1135,   260,   261,  1138,  1139,  1140,     3,     4,
     279,   280,    22,  1146,   190,  1148,   268,   125,  1151,   211,
    1153,    26,     4,   275,  1202,     4,     5,   199,   268,   266,
       4,   125,   224,   290,     4,   275,  2680,   154,     4,  2683,
      50,   310,   103,    53,  2688,   227,   228,   244,   113,     5,
    2694,    14,    15,   199,   263,  2699,   229,  1190,    14,    15,
     242,  1194,    99,  1196,   122,    60,     5,  1200,     3,     4,
     307,     4,   281,    83,   276,   178,   333,   334,   335,   191,
     317,   253,  1215,   259,  1217,   197,  1219,  1220,  1221,  1222,
       4,   288,   125,  1226,  1227,     4,   194,   195,   159,    62,
     297,  1234,   112,   285,     4,   115,    62,   253,  1241,   114,
     227,   228,  1245,  1246,  1247,   288,     3,     4,     4,   222,
       5,   126,  1255,  1256,   236,   242,  1259,     4,     5,  2773,
    2245,     4,  2776,   198,   201,   311,  1269,     4,  1271,     4,
    2122,  1274,     3,     4,  1215,     4,  2261,     4,  1976,  2131,
     262,  2266,  2796,    40,     5,   258,   161,     5,  2140,   220,
      42,    43,    14,    15,   225,     9,  2810,     5,   285,  2813,
    2814,   269,    11,     3,     4,     3,     4,     5,     3,     4,
     275,   279,   280,   171,  1317,     4,  1319,    17,     4,  1322,
    1323,  1262,  1325,   180,  1327,   171,   308,    14,    15,    60,
    1333,     4,  1335,     3,     4,     5,   211,  1278,   200,  1342,
      62,  2459,   310,     4,  2462,    40,  2464,  2045,     5,   224,
     200,   231,     3,     4,     5,     5,   113,     3,     4,  2477,
    2478,   194,   195,     9,    10,    11,     4,     5,   194,   195,
    2068,   353,   200,     3,     4,    62,  2494,     7,     8,   430,
     431,   192,    44,    67,   264,    47,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,  1417,    77,  1419,  1420,   113,   192,
      67,   173,   174,    85,     3,     4,     5,    93,     7,     8,
      67,   229,     5,   230,     5,   101,   269,     4,  1441,     4,
       4,   107,  1445,   269,    88,     5,   279,   280,    88,   200,
     202,     5,     4,   279,   280,     3,     4,     5,   284,     7,
       8,     4,   128,     5,     5,     4,  1469,  1470,     5,   101,
       4,    17,   194,   195,     5,  1416,  1479,   310,  2463,    17,
    1483,     4,     4,   145,   310,     4,   152,  1490,     4,   616,
      99,  2476,     5,     5,   160,    88,  2481,     4,     3,     4,
       5,  1504,     7,     8,     5,     5,  1509,   194,   195,     5,
    1513,    88,  1515,  1516,     4,  1518,  1519,  1520,     5,  1522,
    1927,     5,  1525,  1526,  1527,  1528,  1529,  1530,  1531,  1532,
    1533,  1534,  1535,   199,   196,  1538,  1539,  1540,  1541,     4,
       4,   207,     5,   670,     5,  1548,  1549,   269,   675,  1552,
    1553,  1554,   214,   215,     5,  1558,  1559,   279,   280,   221,
       4,   223,     4,    12,     5,    12,     4,    35,  1571,  1572,
       4,  1574,  1575,     4,     4,  1982,     4,   168,     5,    19,
       5,     5,   269,  2281,     4,   159,     4,   253,   310,   251,
    2288,   159,   279,   280,     5,     4,   264,   264,   292,   265,
       5,    41,     4,     4,    44,     5,     5,     5,     5,     4,
       4,    32,     5,     5,   277,   281,     5,  2024,   277,  1622,
    1623,  1624,     5,   310,  1627,     5,     4,   243,     5,  1632,
    1633,    54,  1635,  1636,  1637,     5,  1639,  1640,    78,  1642,
     108,     5,  1645,  1646,  2342,    85,     5,  2345,     5,    72,
    2348,  1654,  2350,     5,     4,   317,    96,    97,     4,  1662,
       5,   129,   130,   103,  1667,  1668,    89,     5,     4,   141,
     138,     5,  1675,     5,   243,   107,     5,    40,   107,   102,
     243,  1684,     5,   216,    40,   107,   126,   249,   156,   216,
       5,  1632,   113,     4,   113,     5,    56,   120,   166,     5,
     827,   124,   216,     4,   144,   216,     4,    67,     5,     5,
       5,     5,     5,     4,   137,     4,     4,  1720,   158,   159,
       5,     5,   113,     5,     5,   165,     5,     4,     6,     5,
       5,     4,     4,    93,    94,     5,     4,     6,     5,  1742,
    1743,   101,     5,     5,  1747,     5,   186,   107,    12,     4,
    1753,    12,     4,     4,   177,     4,  2741,     5,    38,  1700,
       4,   182,     0,   184,   185,     5,   187,   188,   128,  1710,
     243,   131,    38,   243,  1715,   141,   243,     4,   253,   123,
     170,     4,     4,   200,     4,   225,   212,     4,     4,   277,
       5,     5,   152,     5,     5,   216,     5,     5,     4,     4,
     160,     5,  2500,     5,     4,     4,     4,   243,     5,     5,
     243,   314,   314,     4,   235,   236,     4,     4,     4,     4,
       4,   314,   314,  2230,  2231,     4,  2233,  2234,   243,     4,
    2237,  2238,     5,     5,     5,     4,     4,     4,   278,   199,
       5,   229,   229,   229,   229,   229,     5,   207,   288,     5,
       4,     6,     5,    16,     5,     4,     4,  1860,   279,  1862,
      23,  1864,     4,   277,     5,     5,     4,     4,    12,     5,
     291,     5,     4,   277,     5,     5,     4,   317,     5,     4,
    1883,  1884,  1885,  1886,  1887,  1888,  1889,  1890,  1891,     4,
     311,  2298,     4,   253,     4,   277,     5,     5,     5,     5,
       5,     4,   358,     5,  1907,   265,  1909,     4,   358,     5,
       5,     5,     4,     4,   310,     5,     4,     6,     5,     5,
       5,   281,     4,  1926,  1927,     4,     4,  1054,     5,  1932,
     290,     5,   292,     5,     5,     4,     6,     5,  1941,  1942,
    1943,  1944,  1945,  1946,  1947,  1948,  1949,  1950,     5,     5,
    1953,  1954,  1955,  1956,  1957,  1958,  1959,  1960,  1961,  1962,
    1963,  1964,     5,  1966,     4,  1968,  1969,  1970,  2630,     4,
     290,     5,     5,     5,     5,     4,     4,   358,     5,  1982,
    1983,     5,     5,  1110,     5,     4,   346,     4,   290,     5,
       4,     4,     4,     4,     4,  1122,   965,     5,     5,     5,
     421,     5,     5,     4,   358,     5,     4,     4,   384,     5,
       5,   432,     4,  2016,     4,  2018,     5,  2020,     5,  2022,
     441,  2024,  2025,     4,  2027,     4,   429,     5,   997,     5,
       4,  2034,  2035,     4,   358,     5,     5,     5,  2041,     5,
    2043,  2448,     5,     5,  2047,  2452,  2708,  2050,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,     4,  2766,     5,     4,
       4,  2488,     5,   246,     5,     5,   249,     4,   509,   510,
       4,     4,  2095,     5,     5,     5,     5,     4,  2641,     5,
       5,   522,     5,  1230,  1231,     5,   527,     4,     4,  2256,
       5,     4,  2053,     4,     4,   536,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,     4,  2193,     4,     4,     4,     4,
       4,  2092,     4,     4,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,     4,     4,     4,     4,     4,   608,   609,   610,
     611,     5,   358,     5,   358,     5,  2199,   358,     4,  2628,
       5,     4,  2708,     5,     5,     5,     4,  2210,  2211,  2212,
    2213,  2214,  2215,  2216,  2217,  2218,  2219,  2220,     4,     4,
       4,     4,     4,  2226,     4,     4,     4,  2230,  2231,     4,
    2233,  2234,     5,     4,  2237,  2238,  2239,  2240,  2241,  2242,
    2243,  2244,     5,  2246,  2247,  2248,  2719,  2720,   669,     5,
       5,     4,  2704,     5,     4,    -1,     5,     5,     4,  2262,
    2263,  2264,  2265,     4,  2267,  2268,  2269,  2270,  2271,  2272,
       5,  2274,     4,     4,  2277,  2278,    67,     4,   358,     5,
       4,     4,     4,     4,     4,  1412,     5,     5,     4,     4,
      81,  1418,  2295,     4,     4,  2298,  2299,     5,     4,    90,
    2303,     5,     5,     4,  2307,     4,     4,    -1,     5,     5,
     101,   293,     5,  1440,     4,     4,  1443,     5,     5,     5,
    1447,     4,    -1,     5,     5,     5,    -1,    -1,    -1,   745,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     131,  1468,    -1,    -1,    -1,    -1,    -1,  1474,    -1,    -1,
      -1,    -1,  2355,    -1,    -1,  1482,    -1,    -1,  1485,    -1,
      -1,   152,    -1,    -1,    -1,    -1,    -1,  1494,  1495,    -1,
     352,    -1,    -1,    -1,  1343,  1344,  1345,    -1,  1505,    -1,
      -1,    -1,    -1,    -1,  1353,  1354,  1355,    -1,    -1,    -1,
      -1,  1360,  1361,  1362,    -1,    -1,  1365,  1366,    -1,  1368,
    1369,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   199,    -1,
     831,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   843,    -1,  2427,    -1,    -1,    -1,  2431,  1398,
    1399,    -1,    -1,  1402,  1403,    -1,    -1,    -1,  2441,  2442,
      -1,    -1,    -1,    -1,  2447,  2448,    -1,   238,  2451,  2452,
      -1,    -1,    -1,    -1,  2457,    -1,    -1,  2460,  2461,   880,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   265,    -1,  2479,  2480,    -1,  2482,
    2483,  2484,  2485,  2486,    -1,  2488,  2489,    -1,    -1,    -1,
    2493,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2506,    -1,    -1,    -1,    -1,  2511,    -1,
      -1,    -1,    -1,   304,    -1,   306,    -1,    -1,    -1,    -1,
      -1,    -1,   504,    -1,    -1,    -1,  2529,    -1,    -1,   511,
      -1,    -1,   514,    -1,   955,    -1,    -1,   519,    -1,    -1,
      -1,   523,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2571,    -1,
      -1,    -1,    -1,  2576,    -1,  2578,    -1,    -1,    -1,    -1,
      -1,  2584,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2597,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   590,  1030,
      -1,    -1,  2615,     4,    -1,    -1,  2619,    -1,    -1,    -1,
    2668,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2641,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1084,    -1,    -1,    57,    -1,    19,  2672,
      -1,    -1,    -1,  1094,  2677,    -1,  2679,    -1,    -1,    -1,
      -1,    -1,    -1,  2686,    -1,    -1,    -1,    -1,  2691,    -1,
     977,    -1,    -1,  2696,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    -1,   103,    -1,    -1,    -1,  2719,  2720,    -1,    -1,
      -1,    -1,    -1,    -1,   706,    -1,    -1,    -1,    -1,    -1,
     121,   713,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2745,    -1,    -1,  2748,    -1,    -1,  2751,  1876,
      -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,  2762,
    2763,  2764,  2765,    -1,    -1,    -1,    -1,    -1,   159,    -1,
      -1,  2774,    -1,    -1,  2777,    -1,    -1,  1198,    -1,    -1,
      -1,  2784,    -1,  2786,    -1,  1912,    -1,    -1,  1757,    -1,
      -1,    -1,    -1,    -1,  1215,  2736,    -1,    -1,    -1,    -1,
      -1,  1770,    -1,    -1,    -1,    -1,    -1,   198,   159,    -1,
      -1,  1780,    -1,    -1,    -1,   206,    -1,    -1,  1239,    -1,
      -1,    -1,    -1,   214,   215,    -1,    -1,  2768,  1249,   220,
    2771,    -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1268,   830,    -1,
      -1,    -1,    -1,    -1,    -1,   837,    -1,  1278,    -1,    -1,
      -1,    -1,  1283,    -1,    -1,    -1,    -1,    -1,    -1,   220,
      -1,    -1,    -1,    -1,   225,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1852,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     882,   883,    -1,    -1,    -1,   887,    -1,    -1,   890,    -1,
     301,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     902,    -1,    -1,    -1,    -1,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,    -1,    -1,    -1,    -1,    -1,   350,
      -1,    -1,    -1,    -1,   355,   356,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,    -1,  1416,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,  1005,    -1,  1446,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1475,    -1,    -1,  1478,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1488,  1489,    -1,
      -1,    -1,  1359,    -1,    -1,  1496,    -1,    -1,    -1,    -1,
      -1,    -1,  1503,    -1,  1371,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1389,  1390,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1543,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1555,    -1,  2105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2282,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2145,  2146,  2147,  2148,
    2149,    -1,  2151,  2152,    -1,    -1,    -1,  2156,  2157,  2158,
    2159,  2160,    -1,  2162,  2163,    -1,    -1,    -1,    -1,    -1,
     198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1632,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1203,   220,    -1,    -1,    -1,    -1,   225,    -1,  1650,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,    -1,
      -1,    -1,    -1,    -1,    -1,  1666,    -1,    -1,    -1,    -1,
      -1,  1233,    -1,    -1,    -1,    -1,  1238,    -1,    -1,    -1,
    1681,    -1,  1683,    -1,    -1,    -1,  1248,    -1,    -1,    -1,
      -1,    -1,  1693,    -1,    -1,  1696,    -1,  1698,  1699,  1700,
    1701,    -1,    -1,  1704,    -1,    -1,  1707,    -1,    -1,  1710,
    1711,    -1,  1713,  1714,  1715,  1716,    -1,  1718,  1719,    -1,
     298,   159,    -1,  1724,  1725,  1726,   164,    -1,  1729,  1730,
      -1,    -1,    -1,    -1,  1735,  1736,    -1,    -1,    -1,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,    -1,  2475,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2495,    -1,
      -1,    -1,  2499,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2358,
      -1,    -1,  2361,  2362,  2363,  2364,  2365,    -1,  2367,  2368,
      -1,  2370,  2371,  2372,  2373,  2374,    -1,  2376,  2377,    -1,
    2379,  2380,  2381,  2382,  2383,    -1,  2385,  2386,    -1,  2388,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2398,
    2399,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1859,    -1,
    2409,    -1,  1863,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1875,    -1,    -1,  1878,    -1,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,  1908,    -1,  1776,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1784,  1785,    -1,
      -1,    -1,  1484,    -1,    -1,    -1,    -1,  2634,    -1,    -1,
      -1,    -1,  1799,  1800,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,  1810,  1811,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1821,  1822,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1964,  1831,  1832,    -1,    49,    50,    -1,
    1837,    53,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,
    1847,    63,  1544,    -1,    -1,    67,  1987,    -1,  1550,    -1,
      -1,  2540,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,
    2549,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2558,
      -1,  2560,    -1,    -1,    -1,  2564,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
     112,    -1,    -1,   115,    -1,    -1,    -1,  2038,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
    2757,    -1,  2053,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1628,    -1,    -1,    -1,
     152,    -1,  1634,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2081,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2092,    -1,   175,     4,     5,    -1,  1659,    -1,    -1,
      -1,    -1,   184,  1665,    -1,    -1,    -1,    -1,  2657,    -1,
    2659,    -1,  2661,    -1,    -1,  2664,    -1,  2666,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1694,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1702,    -1,    -1,    -1,    -1,    -1,    -1,   229,    -1,   231,
      -1,    61,    -1,    -1,    -1,   237,   238,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    76,    -1,    -1,    -1,
      -1,    81,   254,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      90,    -1,    -1,   265,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,    -1,    -1,    -1,    -1,  2197,   107,    -1,  2200,
      -1,    -1,    -1,    -1,    -1,    -1,   116,  2208,   290,    -1,
     292,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     302,   131,    -1,  2224,    -1,    -1,  2227,    -1,    -1,    -1,
     312,  2232,    -1,    -1,  2235,  2236,    -1,    -1,    -1,  2106,
      -1,    -1,   152,    -1,    -1,    -1,    -1,    -1,    -1,  2116,
      -1,    -1,    -1,  2120,  2121,    -1,    -1,   167,    -1,    -1,
      -1,    -1,  2129,  2130,   346,    -1,    -1,   177,   178,    -1,
      -1,  2138,  2139,    -1,    -1,     3,     4,  2144,    -1,    -1,
      -1,    -1,  2283,  2284,    -1,    -1,    -1,  2154,  2155,   199,
      -1,    19,    -1,    -1,    -1,  1857,    -1,    -1,  2165,  2166,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2176,
      -1,    -1,   222,    -1,    -1,    -1,    -1,  1879,  2185,    -1,
    2187,    -1,    -1,  2324,    -1,    -1,   236,    -1,   238,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   253,    -1,    -1,    -1,    -1,   258,    -1,
      -1,  1913,  1914,    -1,    -1,   265,    -1,    -1,    -1,    -1,
      -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,  1930,  1931,
      -1,    -1,    -1,  1935,  1936,   103,    -1,    -1,    -1,    -1,
     290,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   303,   304,    -1,   306,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1975,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2422,    -1,    -1,  1986,    -1,    -1,    -1,    -1,    -1,
      -1,   159,    -1,    -1,    -1,    -1,   346,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2455,    -1,    -1,    -1,    -1,  2021,
      -1,    -1,    -1,    -1,    -1,  2466,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2037,    -1,    -1,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2359,    19,    -1,    -1,    -1,   225,  2060,    -1,
      -1,    -1,  2369,  2065,    -1,    -1,    -1,    -1,    -1,  2071,
      -1,  2378,    -1,    -1,  2076,  2516,    -1,    -1,  2080,  2520,
    2387,  2083,    -1,    -1,  2086,    -1,  2088,  2394,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2405,    -1,
      -1,    -1,    -1,    -1,  2411,    -1,    -1,  2414,    -1,    -1,
    2417,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2574,  2575,    -1,  2577,   103,    -1,    -1,
      -1,  2582,  2583,    -1,    -1,    -1,  2587,    -1,    -1,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,    -1,    -1,  2620,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2648,    -1,    -1,
      49,    50,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
    2537,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,  2546,
      -1,    19,    -1,    -1,    83,    -1,    -1,    86,  2555,    -1,
      -1,    -1,    -1,    -1,  2561,    -1,    -1,    -1,  2565,   225,
      -1,  2568,    -1,    -1,    -1,   104,    -1,    -1,    -1,    -1,
      -1,  2273,   111,   112,    -1,    -1,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2289,    66,    67,
      -1,    -1,    70,    -1,    -1,  2736,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2753,    -1,    -1,    93,    -1,  2319,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   103,    -1,  2768,    -1,    -1,
    2771,    -1,    -1,    -1,    -1,    -1,   175,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,
    2352,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,    -1,
      -1,   159,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,
      -1,    -1,   231,   171,    -1,    -1,    -1,    -1,   237,    -1,
      -1,   117,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   190,    -1,    -1,   254,    -1,    -1,  2420,    -1,
      -1,    -1,    -1,    -1,  2426,   264,    -1,    -1,  2430,    -1,
      -1,    -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   159,  2446,    -1,    -1,   225,    -1,    -1,
      -1,    -1,   291,   292,    -1,    -1,    -1,    -1,    -1,    -1,
     176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   312,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2497,  2498,    -1,    -1,    -1,
     278,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   225,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   357,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,    -1,   346,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   294,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2602,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    19,    -1,    53,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,
      19,    -1,    -1,    -1,    83,    84,    -1,    -1,  2700,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,   107,    -1,
      -1,  2723,   111,   112,    -1,    -1,   115,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,   131,    -1,    -1,    -1,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   152,    -1,    -1,    -1,  2769,    -1,    -1,
      -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    -1,   175,  2789,    -1,    -1,
    2792,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     199,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,
     159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     229,    -1,   231,    -1,    -1,    -1,    -1,    -1,   237,   238,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   220,   253,   254,    -1,    -1,   225,    -1,
      -1,    -1,    -1,    -1,    -1,   264,   265,    -1,    -1,    -1,
      -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   220,    -1,    -1,    -1,    -1,   225,   103,    -1,    -1,
      -1,   290,    -1,   292,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   304,    -1,   306,    -1,    -1,
      -1,   164,    -1,   312,    -1,    -1,    -1,    -1,    -1,   286,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   225,    -1,    -1,
      -1,    -1,    -1,   159,    -1,    -1,    -1,   346,    -1,    -1,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   294,   103,    -1,   225,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,    -1,    -1,    -1,
      -1,    -1,    -1,   159,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   225,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    44,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,
      98,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   127,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   140,    -1,    -1,    -1,   144,    -1,    -1,   147,
      -1,    -1,    -1,   151,   152,    -1,    -1,    -1,    -1,    -1,
     158,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     178,    -1,    -1,   181,   182,   183,    -1,    -1,   186,   187,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     218,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    44,    -1,   232,    47,   234,    -1,    -1,    -1,
      -1,    -1,    -1,   241,    -1,    -1,    -1,   245,    -1,    -1,
      -1,   249,    -1,   251,    66,   253,    68,    69,    70,    -1,
     258,    -1,    -1,    -1,    -1,    -1,    78,    -1,    80,    -1,
      -1,    -1,    -1,    85,   272,    87,    88,    89,    -1,    -1,
     278,    -1,    -1,    95,    -1,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   293,   294,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,   307,
      -1,    -1,    -1,    -1,   126,   313,    -1,    -1,   316,   317,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     152,    -1,   154,   155,    -1,    -1,   158,    -1,    -1,   347,
     162,    -1,   164,    -1,    -1,    -1,   354,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   186,   187,    -1,    -1,    -1,   191,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   218,   219,    -1,    -1,
      -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   251,
      -1,   253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   278,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   293,   294,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     302,    -1,    -1,    -1,    -1,    -1,    -1,   309,    -1,    -1,
      -1,    -1,    -1,   315,    -1,   317,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
       6,   361,     4,    32,   188,   287,   422,   371,     5,    32,
     188,   287,   387,   371,     4,   422,   361,   382,   383,   382,
     383,   382,   383,   383,   382,   383,   382,   382,   361,   380,
     371,   371,   361,   371,   361,   371,   371,   361,   371,   380,
       4,   523,   523,   365,   361,   523,     4,   523,   378,     5,
       4,     4,   523,   523,   365,   361,     4,   523,   523,   361,
     371,   523,   523,   523,   524,   531,   532,   522,   529,   530,
     363,     4,     5,     5,     6,     4,   191,   308,   353,   361,
     413,   422,     4,   371,   422,     4,   383,   383,   383,   383,
     383,   372,   380,   380,   361,   380,     4,   380,   380,   361,
     380,   361,   523,   523,     4,   361,   523,     5,   361,   523,
       4,   361,   523,   378,   531,   533,   534,   358,   530,     5,
       5,     4,   361,   414,   361,   414,   378,   380,     4,   371,
     373,     4,   366,   365,   361,   361,   365,   361,   371,   534,
     363,     5,     5,   361,   361,   361,   361,   387,     5,   371,
     373,   378,   371,   373,   523,   361,     4,   523,   361,   380,
       5,     5,   361,     5,   361,   378,   378,     4,   523,     4,
       5,     5,     5,   365,   365,   523,   523,   523
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
    {fr->getInfoCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 447:
#line 1203 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 448:
#line 1205 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)), (Coord::InternalSystem)(yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
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
#line 11062 "frame/parser.C"
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

