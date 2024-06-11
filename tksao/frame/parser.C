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
     HSV_ = 412,
     HLS_ = 413,
     ICRS_ = 414,
     ID_ = 415,
     IIS_ = 416,
     IMAGE_ = 417,
     INCLUDE_ = 418,
     INCR_ = 419,
     INFO_ = 420,
     ITERATION_ = 421,
     IRAF_ = 422,
     IRAFMIN_ = 423,
     J2000_ = 424,
     KEY_ = 425,
     KEYWORD_ = 426,
     LABEL_ = 427,
     LAST_ = 428,
     LENGTH_ = 429,
     LEVEL_ = 430,
     LIGHTEN_ = 431,
     LITTLE_ = 432,
     LITTLEENDIAN_ = 433,
     LINE_ = 434,
     LINEAR_ = 435,
     LIST_ = 436,
     LOAD_ = 437,
     LOCAL_ = 438,
     LOG_ = 439,
     MACOSX_ = 440,
     MAGNIFIER_ = 441,
     MATCH_ = 442,
     MAP_ = 443,
     MARK_ = 444,
     MARKER_ = 445,
     MASK_ = 446,
     MEDIAN_ = 447,
     MESSAGE_ = 448,
     METHOD_ = 449,
     MINMAX_ = 450,
     MINOR_ = 451,
     MIP_ = 452,
     MMAP_ = 453,
     MMAPINCR_ = 454,
     MOSAIC_ = 455,
     MODE_ = 456,
     MOTION_ = 457,
     MOVE_ = 458,
     NAME_ = 459,
     NAN_ = 460,
     NATIVE_ = 461,
     NAXES_ = 462,
     NEW_ = 463,
     NEXT_ = 464,
     NO_ = 465,
     NONE_ = 466,
     NONNAN_ = 467,
     NONZERO_ = 468,
     NOW_ = 469,
     NRRD_ = 470,
     NUMBER_ = 471,
     OBJECT_ = 472,
     OFF_ = 473,
     ON_ = 474,
     ONLY_ = 475,
     OPTION_ = 476,
     ORIENT_ = 477,
     PAN_ = 478,
     PANNER_ = 479,
     PARSER_ = 480,
     PASTE_ = 481,
     PERF_ = 482,
     PHOTO_ = 483,
     PHYSICAL_ = 484,
     PIXEL_ = 485,
     PLOT2D_ = 486,
     PLOT3D_ = 487,
     POINT_ = 488,
     POINTER_ = 489,
     POLYGON_ = 490,
     POSTSCRIPT_ = 491,
     POW_ = 492,
     PRECISION_ = 493,
     PRINT_ = 494,
     PRESERVE_ = 495,
     PROJECTION_ = 496,
     PROPERTY_ = 497,
     PUBLICATION_ = 498,
     PROS_ = 499,
     QUERY_ = 500,
     RADIAL_ = 501,
     RADIUS_ = 502,
     RANGE_ = 503,
     REGION_ = 504,
     REPLACE_ = 505,
     RESAMPLE_ = 506,
     RESCAN_ = 507,
     RESET_ = 508,
     RESOLUTION_ = 509,
     RGB_ = 510,
     ROOT_ = 511,
     ROTATE_ = 512,
     RULER_ = 513,
     SAMPLE_ = 514,
     SAOIMAGE_ = 515,
     SAOTNG_ = 516,
     SAVE_ = 517,
     SCALE_ = 518,
     SCAN_ = 519,
     SCIENTIFIC_ = 520,
     SCOPE_ = 521,
     SCREEN_ = 522,
     SEGMENT_ = 523,
     SELECT_ = 524,
     SET_ = 525,
     SEXAGESIMAL_ = 526,
     SHAPE_ = 527,
     SHARED_ = 528,
     SHIFT_ = 529,
     SHMID_ = 530,
     SHOW_ = 531,
     SIGMA_ = 532,
     SINH_ = 533,
     SIZE_ = 534,
     SLICE_ = 535,
     SMMAP_ = 536,
     SMOOTH_ = 537,
     SOCKET_ = 538,
     SOCKETGZ_ = 539,
     SOURCE_ = 540,
     SQRT_ = 541,
     SQUARED_ = 542,
     SSHARED_ = 543,
     STATS_ = 544,
     STATUS_ = 545,
     SUM_ = 546,
     SYNC_ = 547,
     SYSTEM_ = 548,
     TABLE_ = 549,
     TAG_ = 550,
     TEMPLATE_ = 551,
     TEXT_ = 552,
     THREADS_ = 553,
     THREED_ = 554,
     THRESHOLD_ = 555,
     THICK_ = 556,
     TRANSPARENCY_ = 557,
     TO_ = 558,
     TOGGLE_ = 559,
     TOPHAT_ = 560,
     TRUE_ = 561,
     TYPE_ = 562,
     UNDO_ = 563,
     UNHIGHLITE_ = 564,
     UNLOAD_ = 565,
     UNSELECT_ = 566,
     UPDATE_ = 567,
     USER_ = 568,
     VALUE_ = 569,
     VAR_ = 570,
     VIEW_ = 571,
     VECTOR_ = 572,
     VERSION_ = 573,
     VERTEX_ = 574,
     VERTICAL_ = 575,
     WARP_ = 576,
     WCS_ = 577,
     WCSA_ = 578,
     WCSB_ = 579,
     WCSC_ = 580,
     WCSD_ = 581,
     WCSE_ = 582,
     WCSF_ = 583,
     WCSG_ = 584,
     WCSH_ = 585,
     WCSI_ = 586,
     WCSJ_ = 587,
     WCSK_ = 588,
     WCSL_ = 589,
     WCSM_ = 590,
     WCSN_ = 591,
     WCSO_ = 592,
     WCSP_ = 593,
     WCSQ_ = 594,
     WCSR_ = 595,
     WCSS_ = 596,
     WCST_ = 597,
     WCSU_ = 598,
     WCSV_ = 599,
     WCSW_ = 600,
     WCSX_ = 601,
     WCSY_ = 602,
     WCSZ_ = 603,
     WCS0_ = 604,
     WFPC2_ = 605,
     WIDTH_ = 606,
     WIN32_ = 607,
     XML_ = 608,
     XY_ = 609,
     YES_ = 610,
     ZERO_ = 611,
     ZMAX_ = 612,
     ZSCALE_ = 613,
     ZOOM_ = 614
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
#define HSV_ 412
#define HLS_ 413
#define ICRS_ 414
#define ID_ 415
#define IIS_ 416
#define IMAGE_ 417
#define INCLUDE_ 418
#define INCR_ 419
#define INFO_ 420
#define ITERATION_ 421
#define IRAF_ 422
#define IRAFMIN_ 423
#define J2000_ 424
#define KEY_ 425
#define KEYWORD_ 426
#define LABEL_ 427
#define LAST_ 428
#define LENGTH_ 429
#define LEVEL_ 430
#define LIGHTEN_ 431
#define LITTLE_ 432
#define LITTLEENDIAN_ 433
#define LINE_ 434
#define LINEAR_ 435
#define LIST_ 436
#define LOAD_ 437
#define LOCAL_ 438
#define LOG_ 439
#define MACOSX_ 440
#define MAGNIFIER_ 441
#define MATCH_ 442
#define MAP_ 443
#define MARK_ 444
#define MARKER_ 445
#define MASK_ 446
#define MEDIAN_ 447
#define MESSAGE_ 448
#define METHOD_ 449
#define MINMAX_ 450
#define MINOR_ 451
#define MIP_ 452
#define MMAP_ 453
#define MMAPINCR_ 454
#define MOSAIC_ 455
#define MODE_ 456
#define MOTION_ 457
#define MOVE_ 458
#define NAME_ 459
#define NAN_ 460
#define NATIVE_ 461
#define NAXES_ 462
#define NEW_ 463
#define NEXT_ 464
#define NO_ 465
#define NONE_ 466
#define NONNAN_ 467
#define NONZERO_ 468
#define NOW_ 469
#define NRRD_ 470
#define NUMBER_ 471
#define OBJECT_ 472
#define OFF_ 473
#define ON_ 474
#define ONLY_ 475
#define OPTION_ 476
#define ORIENT_ 477
#define PAN_ 478
#define PANNER_ 479
#define PARSER_ 480
#define PASTE_ 481
#define PERF_ 482
#define PHOTO_ 483
#define PHYSICAL_ 484
#define PIXEL_ 485
#define PLOT2D_ 486
#define PLOT3D_ 487
#define POINT_ 488
#define POINTER_ 489
#define POLYGON_ 490
#define POSTSCRIPT_ 491
#define POW_ 492
#define PRECISION_ 493
#define PRINT_ 494
#define PRESERVE_ 495
#define PROJECTION_ 496
#define PROPERTY_ 497
#define PUBLICATION_ 498
#define PROS_ 499
#define QUERY_ 500
#define RADIAL_ 501
#define RADIUS_ 502
#define RANGE_ 503
#define REGION_ 504
#define REPLACE_ 505
#define RESAMPLE_ 506
#define RESCAN_ 507
#define RESET_ 508
#define RESOLUTION_ 509
#define RGB_ 510
#define ROOT_ 511
#define ROTATE_ 512
#define RULER_ 513
#define SAMPLE_ 514
#define SAOIMAGE_ 515
#define SAOTNG_ 516
#define SAVE_ 517
#define SCALE_ 518
#define SCAN_ 519
#define SCIENTIFIC_ 520
#define SCOPE_ 521
#define SCREEN_ 522
#define SEGMENT_ 523
#define SELECT_ 524
#define SET_ 525
#define SEXAGESIMAL_ 526
#define SHAPE_ 527
#define SHARED_ 528
#define SHIFT_ 529
#define SHMID_ 530
#define SHOW_ 531
#define SIGMA_ 532
#define SINH_ 533
#define SIZE_ 534
#define SLICE_ 535
#define SMMAP_ 536
#define SMOOTH_ 537
#define SOCKET_ 538
#define SOCKETGZ_ 539
#define SOURCE_ 540
#define SQRT_ 541
#define SQUARED_ 542
#define SSHARED_ 543
#define STATS_ 544
#define STATUS_ 545
#define SUM_ 546
#define SYNC_ 547
#define SYSTEM_ 548
#define TABLE_ 549
#define TAG_ 550
#define TEMPLATE_ 551
#define TEXT_ 552
#define THREADS_ 553
#define THREED_ 554
#define THRESHOLD_ 555
#define THICK_ 556
#define TRANSPARENCY_ 557
#define TO_ 558
#define TOGGLE_ 559
#define TOPHAT_ 560
#define TRUE_ 561
#define TYPE_ 562
#define UNDO_ 563
#define UNHIGHLITE_ 564
#define UNLOAD_ 565
#define UNSELECT_ 566
#define UPDATE_ 567
#define USER_ 568
#define VALUE_ 569
#define VAR_ 570
#define VIEW_ 571
#define VECTOR_ 572
#define VERSION_ 573
#define VERTEX_ 574
#define VERTICAL_ 575
#define WARP_ 576
#define WCS_ 577
#define WCSA_ 578
#define WCSB_ 579
#define WCSC_ 580
#define WCSD_ 581
#define WCSE_ 582
#define WCSF_ 583
#define WCSG_ 584
#define WCSH_ 585
#define WCSI_ 586
#define WCSJ_ 587
#define WCSK_ 588
#define WCSL_ 589
#define WCSM_ 590
#define WCSN_ 591
#define WCSO_ 592
#define WCSP_ 593
#define WCSQ_ 594
#define WCSR_ 595
#define WCSS_ 596
#define WCST_ 597
#define WCSU_ 598
#define WCSV_ 599
#define WCSW_ 600
#define WCSX_ 601
#define WCSY_ 602
#define WCSZ_ 603
#define WCS0_ 604
#define WFPC2_ 605
#define WIDTH_ 606
#define WIN32_ 607
#define XML_ 608
#define XY_ 609
#define YES_ 610
#define ZERO_ 611
#define ZMAX_ 612
#define ZSCALE_ 613
#define ZOOM_ 614




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
#line 875 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 888 "frame/parser.C"

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
#define YYFINAL  377
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5732

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  364
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  232
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1331
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2952

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   614

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
       2,   363,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   361,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   362,   360,
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
     355,   356,   357,   358,   359
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    13,    17,    20,    22,    24,
      27,    31,    34,    37,    40,    43,    46,    49,    52,    55,
      58,    61,    64,    67,    69,    72,    76,    79,    82,    85,
      89,    92,    95,    98,   101,   105,   108,   112,   115,   118,
     121,   124,   127,   130,   132,   136,   139,   142,   145,   147,
     150,   153,   156,   158,   161,   163,   166,   169,   172,   175,
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
     482,   485,   488,   491,   494,   497,   500,   502,   505,   507,
     510,   512,   515,   518,   525,   528,   533,   536,   539,   542,
     546,   549,   552,   554,   557,   559,   562,   567,   573,   576,
     580,   586,   593,   595,   597,   599,   607,   619,   628,   641,
     643,   646,   649,   651,   653,   656,   659,   662,   665,   669,
     673,   676,   679,   681,   683,   685,   687,   689,   691,   693,
     696,   699,   702,   704,   708,   711,   714,   717,   723,   733,
     743,   753,   755,   758,   760,   766,   776,   786,   796,   798,
     801,   804,   807,   810,   813,   816,   830,   844,   857,   870,
     872,   873,   875,   877,   882,   889,   891,   893,   895,   897,
     899,   901,   903,   905,   907,   912,   916,   921,   922,   929,
     938,   941,   945,   949,   953,   954,   959,   964,   969,   974,
     978,   982,   984,   988,   994,   999,  1004,  1008,  1011,  1012,
    1014,  1016,  1018,  1020,  1022,  1026,  1027,  1030,  1033,  1036,
    1039,  1042,  1045,  1048,  1051,  1054,  1057,  1060,  1063,  1066,
    1069,  1071,  1074,  1077,  1080,  1085,  1089,  1092,  1095,  1098,
    1101,  1104,  1106,  1110,  1113,  1116,  1118,  1121,  1130,  1133,
    1135,  1138,  1140,  1143,  1145,  1150,  1154,  1157,  1159,  1167,
    1176,  1184,  1193,  1195,  1197,  1199,  1202,  1204,  1206,  1209,
    1211,  1212,  1215,  1218,  1220,  1221,  1224,  1227,  1229,  1231,
    1234,  1237,  1240,  1242,  1244,  1246,  1248,  1250,  1252,  1253,
    1255,  1258,  1260,  1265,  1271,  1272,  1275,  1277,  1283,  1286,
    1289,  1291,  1293,  1295,  1298,  1300,  1303,  1305,  1307,  1308,
    1310,  1312,  1313,  1315,  1321,  1328,  1332,  1339,  1343,  1345,
    1349,  1351,  1353,  1355,  1359,  1366,  1374,  1380,  1383,  1385,
    1391,  1396,  1398,  1402,  1403,  1405,  1408,  1410,  1415,  1417,
    1420,  1422,  1425,  1429,  1432,  1434,  1437,  1439,  1444,  1447,
    1449,  1451,  1455,  1457,  1460,  1464,  1467,  1468,  1470,  1472,
    1477,  1480,  1481,  1483,  1487,  1492,  1497,  1498,  1500,  1502,
    1504,  1506,  1508,  1510,  1512,  1514,  1516,  1518,  1520,  1522,
    1524,  1526,  1528,  1530,  1532,  1534,  1536,  1538,  1540,  1543,
    1545,  1548,  1550,  1553,  1556,  1559,  1562,  1564,  1566,  1568,
    1569,  1571,  1572,  1574,  1575,  1577,  1578,  1580,  1581,  1584,
    1587,  1588,  1590,  1593,  1595,  1602,  1608,  1610,  1612,  1614,
    1617,  1620,  1623,  1625,  1627,  1629,  1631,  1634,  1636,  1638,
    1640,  1643,  1645,  1647,  1649,  1652,  1655,  1658,  1659,  1661,
    1662,  1664,  1666,  1668,  1670,  1672,  1674,  1676,  1678,  1681,
    1684,  1687,  1689,  1692,  1696,  1698,  1701,  1704,  1709,  1715,
    1717,  1728,  1730,  1733,  1737,  1741,  1744,  1747,  1750,  1753,
    1756,  1759,  1762,  1767,  1772,  1777,  1781,  1785,  1791,  1796,
    1801,  1806,  1810,  1814,  1818,  1822,  1826,  1830,  1833,  1836,
    1841,  1845,  1849,  1853,  1857,  1862,  1867,  1872,  1877,  1883,
    1888,  1895,  1903,  1908,  1913,  1919,  1922,  1926,  1930,  1934,
    1938,  1942,  1946,  1950,  1953,  1957,  1961,  1965,  1969,  1974,
    1978,  1984,  1991,  1995,  1999,  2004,  2008,  2012,  2016,  2020,
    2024,  2030,  2034,  2038,  2043,  2047,  2050,  2053,  2055,  2059,
    2064,  2069,  2074,  2079,  2084,  2091,  2096,  2101,  2107,  2112,
    2117,  2122,  2127,  2133,  2138,  2145,  2153,  2158,  2163,  2169,
    2175,  2181,  2187,  2193,  2199,  2207,  2213,  2219,  2226,  2231,
    2236,  2241,  2246,  2251,  2258,  2263,  2268,  2274,  2280,  2286,
    2292,  2298,  2305,  2311,  2319,  2328,  2334,  2340,  2347,  2351,
    2355,  2359,  2363,  2368,  2372,  2378,  2385,  2389,  2393,  2398,
    2402,  2406,  2410,  2414,  2418,  2424,  2428,  2432,  2437,  2442,
    2447,  2451,  2457,  2462,  2467,  2470,  2474,  2481,  2488,  2490,
    2492,  2494,  2497,  2500,  2503,  2507,  2511,  2514,  2527,  2530,
    2533,  2535,  2539,  2544,  2547,  2548,  2552,  2554,  2557,  2560,
    2563,  2566,  2569,  2574,  2579,  2584,  2588,  2593,  2599,  2608,
    2615,  2625,  2632,  2640,  2651,  2663,  2676,  2686,  2692,  2699,
    2703,  2709,  2715,  2722,  2728,  2733,  2743,  2754,  2766,  2776,
    2783,  2790,  2797,  2804,  2811,  2818,  2825,  2832,  2839,  2847,
    2855,  2858,  2863,  2868,  2873,  2878,  2884,  2889,  2894,  2900,
    2906,  2910,  2915,  2920,  2925,  2933,  2943,  2950,  2961,  2973,
    2986,  2996,  3000,  3003,  3007,  3013,  3021,  3026,  3030,  3034,
    3041,  3049,  3057,  3062,  3067,  3077,  3082,  3086,  3091,  3099,
    3107,  3110,  3114,  3118,  3122,  3127,  3130,  3133,  3138,  3149,
    3153,  3155,  3159,  3162,  3165,  3168,  3171,  3175,  3181,  3186,
    3192,  3195,  3198,  3201,  3204,  3208,  3211,  3214,  3217,  3221,
    3224,  3228,  3233,  3237,  3241,  3248,  3253,  3256,  3260,  3263,
    3266,  3271,  3275,  3279,  3282,  3286,  3288,  3291,  3293,  3296,
    3299,  3302,  3304,  3306,  3308,  3310,  3313,  3315,  3318,  3321,
    3323,  3326,  3329,  3331,  3334,  3336,  3338,  3340,  3342,  3344,
    3346,  3348,  3350,  3351,  3353,  3356,  3359,  3362,  3366,  3372,
    3380,  3388,  3395,  3402,  3409,  3416,  3422,  3429,  3436,  3443,
    3450,  3457,  3464,  3471,  3483,  3491,  3499,  3507,  3517,  3527,
    3538,  3551,  3564,  3567,  3570,  3574,  3579,  3584,  3589,  3590,
    3592,  3594,  3599,  3604,  3606,  3608,  3610,  3612,  3614,  3616,
    3618,  3620,  3623,  3625,  3627,  3629,  3633,  3637,  3646,  3653,
    3664,  3672,  3680,  3686,  3689,  3692,  3696,  3701,  3707,  3713,
    3719,  3723,  3728,  3734,  3740,  3746,  3752,  3755,  3759,  3763,
    3769,  3773,  3777,  3781,  3786,  3792,  3798,  3804,  3810,  3814,
    3819,  3825,  3831,  3834,  3837,  3841,  3847,  3854,  3861,  3865,
    3869,  3876,  3882,  3888,  3891,  3895,  3899,  3905,  3912,  3916,
    3919,  3922,  3926,  3929,  3933,  3936,  3940,  3946,  3953,  3956,
    3959,  3962,  3964,  3969,  3974,  3976,  3979,  3982,  3985,  3988,
    3991,  3994,  3997,  4001,  4004,  4008,  4011,  4015,  4017,  4019,
    4021,  4023,  4025,  4026,  4029,  4030,  4033,  4034,  4036,  4037,
    4038,  4040,  4042,  4044,  4046,  4048,  4056,  4065,  4068,  4075,
    4078,  4085,  4088,  4092,  4095,  4097,  4099,  4103,  4107,  4109,
    4114,  4117,  4119,  4123,  4127,  4132,  4136,  4140,  4144,  4146,
    4148,  4150,  4152,  4154,  4156,  4158,  4160,  4162,  4164,  4166,
    4168,  4170,  4172,  4174,  4177,  4178,  4179,  4182,  4189,  4197,
    4200,  4202,  4206,  4208,  4212,  4214,  4216,  4218,  4221,  4224,
    4226,  4230,  4231,  4232,  4235,  4238,  4240,  4244,  4250,  4252,
    4255,  4258,  4262,  4265,  4268,  4271,  4274,  4276,  4278,  4280,
    4282,  4287,  4290,  4294,  4298,  4301,  4305,  4308,  4311,  4314,
    4318,  4322,  4326,  4329,  4333,  4335,  4339,  4343,  4345,  4348,
    4351,  4354,  4357,  4367,  4374,  4376,  4378,  4380,  4382,  4385,
    4388,  4392,  4396,  4398,  4401,  4405,  4409,  4411,  4414,  4416,
    4418,  4420,  4422,  4424,  4427,  4430,  4435,  4438,  4441,  4446,
    4449,  4452,  4455,  4460,  4462,  4465,  4468,  4471,  4475,  4477,
    4479,  4481,  4484,  4487,  4490,  4493,  4496,  4500,  4504,  4508,
    4512,  4516,  4520,  4522,  4525,  4528,  4531,  4535,  4538,  4542,
    4546,  4550,  4554,  4558,  4562,  4565,  4568,  4571,  4574,  4577,
    4580,  4583,  4586,  4589,  4592,  4595,  4598,  4601,  4604,  4608,
    4612,  4616,  4619,  4622,  4625,  4629,  4633,  4637,  4640,  4643,
    4646,  4649,  4652,  4655,  4659,  4663,  4667,  4670,  4673,  4676,
    4679,  4682,  4685,  4689,  4693,  4697,  4700,  4703,  4706,  4709,
    4712,  4715,  4718,  4721,  4724,  4728,  4732,  4736,  4741,  4748,
    4751,  4753,  4755,  4757,  4759,  4761,  4762,  4768,  4770,  4777,
    4781,  4783,  4786,  4789,  4792,  4796,  4800,  4803,  4806,  4809,
    4812,  4815,  4818,  4822,  4825,  4828,  4832,  4834,  4838,  4843,
    4846,  4848,  4851,  4857,  4864,  4871,  4874,  4876,  4879,  4882,
    4888,  4895
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     365,     0,    -1,    97,   367,    -1,    43,   399,    -1,    40,
      66,     5,    -1,    40,    66,   368,    -1,    46,   404,    -1,
      59,    -1,    64,    -1,    65,   406,    -1,    67,   295,     5,
      -1,    68,   411,    -1,    69,   413,    -1,    77,   414,    -1,
      84,   423,    -1,    86,   425,    -1,    87,   426,    -1,    96,
     368,    -1,   119,   428,    -1,   128,   429,    -1,   141,   430,
      -1,   145,   476,    -1,   148,   479,    -1,   152,    -1,   153,
     368,    -1,   153,    66,     5,    -1,   157,   560,    -1,   158,
     559,    -1,   161,   485,    -1,   167,    15,     4,    -1,   182,
     488,    -1,   185,   506,    -1,   186,   507,    -1,   187,   508,
      -1,   190,   524,   509,    -1,   191,   544,    -1,   205,    66,
       5,    -1,   222,   545,    -1,   223,   546,    -1,   224,   549,
      -1,   245,    88,    -1,   238,   551,    -1,   236,   550,    -1,
     253,    -1,   249,   524,   553,    -1,   255,   558,    -1,   257,
     561,    -1,   262,   563,    -1,   276,    -1,   282,   584,    -1,
     298,     4,    -1,   299,   394,    -1,   310,    -1,   312,   586,
      -1,   318,    -1,   321,   588,    -1,   322,   589,    -1,   352,
     593,    -1,   359,   594,    -1,     3,    -1,     4,    -1,   368,
      -1,   200,   368,    -1,   225,   368,    -1,   227,   368,    -1,
     322,   368,    -1,    43,   368,    -1,    46,   368,    -1,    76,
     368,    -1,    84,   368,    -1,   146,   368,    -1,   255,   368,
      -1,     4,    -1,   355,    -1,   360,    -1,   219,    -1,   306,
      -1,   210,    -1,   361,    -1,   218,    -1,   121,    -1,    -1,
     256,    37,    -1,   137,    37,    -1,   256,    -1,   137,    -1,
      -1,   371,    -1,   366,    -1,     6,    -1,     7,    -1,     8,
      -1,     9,    -1,    10,    -1,   372,   372,    -1,   373,   374,
      -1,   374,   374,    -1,   366,   366,    -1,   162,    -1,   229,
      -1,   102,    -1,    18,    -1,   377,    -1,   322,    -1,   323,
      -1,   324,    -1,   325,    -1,   326,    -1,   327,    -1,   328,
      -1,   329,    -1,   330,    -1,   331,    -1,   332,    -1,   333,
      -1,   334,    -1,   335,    -1,   336,    -1,   337,    -1,   338,
      -1,   339,    -1,   340,    -1,   341,    -1,   342,    -1,   343,
      -1,   344,    -1,   345,    -1,   346,    -1,   347,    -1,   348,
      -1,   349,    -1,    56,    -1,   224,    -1,    -1,   356,    -1,
     213,    -1,   205,    -1,   212,    -1,   248,    -1,    -1,   285,
      -1,   267,    -1,    91,    -1,   176,    -1,   180,    -1,   184,
      -1,   237,    -1,   286,    -1,   287,    -1,    27,    -1,   278,
      -1,   154,    -1,    29,    -1,   264,    -1,   259,    -1,    95,
      -1,   168,    -1,    -1,   130,    -1,    34,    -1,   131,    -1,
     169,    -1,   159,    -1,   139,    -1,   107,    -1,    -1,    98,
      -1,   271,    -1,    -1,    98,    -1,    23,    -1,    24,    -1,
      -1,   275,    -1,   170,    -1,    -1,    16,    -1,   164,    -1,
      -1,   162,    -1,   191,    -1,    -1,    62,    -1,    48,    -1,
     103,    -1,    85,    -1,   362,    -1,    26,    -1,    51,    -1,
      -1,     4,    -1,    82,    -1,   155,    -1,   231,    -1,   232,
      -1,   246,    -1,   289,    -1,    -1,    31,    -1,   291,    -1,
     192,    -1,    -1,   206,    -1,    41,    -1,    42,    -1,   177,
      -1,   178,    -1,   316,   398,    -1,    47,   395,    -1,    74,
     396,    -1,   153,   397,    -1,   194,   556,    -1,    36,   557,
      -1,   263,   366,    -1,   292,     4,    -1,   300,   366,    -1,
     368,    -1,    66,     5,    -1,   368,    -1,    66,     5,    -1,
     368,    -1,    66,     5,    -1,   366,   366,    -1,   233,   366,
     366,   366,   366,   366,    -1,    11,   400,    -1,    71,     5,
       5,     5,    -1,   101,     4,    -1,   120,   401,    -1,   138,
     402,    -1,    53,   279,     4,    -1,   303,   403,    -1,   124,
       5,    -1,    59,    -1,   366,   366,    -1,   366,    -1,   366,
     366,    -1,   366,    11,   366,   366,    -1,   366,   366,    11,
     366,   366,    -1,   303,   366,    -1,   303,   366,   366,    -1,
     303,   366,    11,   366,   366,    -1,   303,   366,   366,    11,
     366,   366,    -1,    31,    -1,   291,    -1,   126,    -1,   366,
     366,    11,    59,     5,     5,     5,    -1,   366,   366,     4,
     366,   366,    11,    59,     5,     5,     5,     5,    -1,   366,
     366,    11,   366,   366,     5,     5,     5,    -1,   366,   366,
       4,   366,   366,    11,   366,   366,     5,     5,     5,     5,
      -1,   366,    -1,   366,   366,    -1,   303,   405,    -1,   126,
      -1,   366,    -1,   366,   366,    -1,   266,   407,    -1,   201,
     408,    -1,   195,   409,    -1,   313,   366,   366,    -1,   313,
     205,   205,    -1,   358,   410,    -1,   240,   368,    -1,   142,
      -1,   183,    -1,   366,    -1,   195,    -1,   358,    -1,   357,
      -1,   313,    -1,     4,   382,    -1,   201,   382,    -1,   259,
       4,    -1,   252,    -1,   366,     4,     4,    -1,    78,   366,
      -1,   259,     4,    -1,   179,     4,    -1,     4,   366,   366,
       4,     4,    -1,   255,   366,   366,   366,   366,   366,   366,
       4,     4,    -1,   157,   366,   366,   366,   366,   366,   366,
       4,     4,    -1,   158,   366,   366,   366,   366,   366,   366,
       4,     4,    -1,    39,    -1,   202,   412,    -1,   112,    -1,
       4,   366,   366,     4,     4,    -1,   255,   366,   366,   366,
     366,   366,   366,     4,     4,    -1,   157,   366,   366,   366,
     366,   366,   366,     4,     4,    -1,   158,   366,   366,   366,
     366,   366,   366,     4,     4,    -1,   381,    -1,   184,   366,
      -1,    83,   415,    -1,   100,   416,    -1,   182,   417,    -1,
     226,   421,    -1,   262,   422,    -1,     5,     4,     4,   420,
       4,     4,   381,   366,   418,   419,   366,   366,     5,    -1,
       5,     4,     4,   420,     4,     4,   381,   366,   366,   419,
     366,   366,     5,    -1,     5,     4,     4,   420,     4,     4,
     381,   366,   418,   366,   366,     5,    -1,     5,     4,     4,
     420,     4,     4,   381,   366,   366,   366,   366,     5,    -1,
     235,    -1,    -1,    30,    -1,     5,    -1,     5,     5,     4,
     368,    -1,     5,     4,   368,     5,   376,   383,    -1,   195,
      -1,   358,    -1,   357,    -1,   313,    -1,   142,    -1,   183,
      -1,   282,    -1,    46,    -1,     5,    -1,     5,     5,     4,
     368,    -1,     5,   376,   383,    -1,    30,     5,   376,   383,
      -1,    -1,   366,   366,   366,   366,   376,   383,    -1,    59,
     375,   376,   383,   366,   366,   376,   385,    -1,   299,   424,
      -1,    39,   366,   366,    -1,   202,   366,   366,    -1,   112,
     366,   366,    -1,    -1,   366,   366,   376,   383,    -1,    39,
     366,   366,     4,    -1,   202,   366,   366,     4,    -1,   112,
     366,   366,     4,    -1,   378,   366,   366,    -1,   376,   383,
     375,    -1,   368,    -1,   321,   366,   366,    -1,    39,   202,
     378,   366,   366,    -1,   202,   378,   366,   366,    -1,    39,
     202,   376,   375,    -1,   202,   376,   375,    -1,    32,     4,
      -1,    -1,    31,    -1,   291,    -1,   192,    -1,   366,    -1,
      64,    -1,   148,   118,     5,    -1,    -1,    40,    66,    -1,
      43,   433,    -1,    46,   435,    -1,    65,   436,    -1,    68,
     440,    -1,    67,   439,    -1,    69,   442,    -1,    77,   444,
      -1,    79,   447,    -1,    84,   448,    -1,    86,   449,    -1,
      88,   451,    -1,    87,   450,    -1,    94,   452,    -1,    96,
      -1,   127,   456,    -1,   145,   462,    -1,   153,    66,    -1,
     155,     5,     5,     4,    -1,   156,    89,   431,    -1,   157,
     467,    -1,   158,   466,    -1,   161,   454,    -1,   165,   453,
      -1,   167,    15,    -1,   195,    -1,   190,   524,   518,    -1,
     191,   463,    -1,   205,    66,    -1,   222,    -1,   223,   464,
      -1,   230,   294,   378,   366,   366,     4,     4,     5,    -1,
     255,   465,    -1,   257,    -1,   282,   468,    -1,   298,    -1,
     299,   469,    -1,   307,    -1,   314,   378,   366,   366,    -1,
     320,    89,   432,    -1,   322,   474,    -1,   359,    -1,     5,
       5,   366,   366,   378,     4,   427,    -1,     5,     5,   366,
     366,   376,   383,     4,   427,    -1,     5,     5,   366,   366,
     378,     4,   427,    -1,     5,     5,   366,   366,   376,   383,
       4,   427,    -1,   101,    -1,   120,    -1,   138,    -1,    53,
     279,    -1,    88,    -1,   124,    -1,    71,   434,    -1,   181,
      -1,    -1,   195,     5,    -1,   104,     5,    -1,   120,    -1,
      -1,   418,   419,    -1,   366,   419,    -1,   266,    -1,   201,
      -1,   195,   437,    -1,   313,   175,    -1,   358,   438,    -1,
     240,    -1,   201,    -1,   259,    -1,    78,    -1,   259,    -1,
     179,    -1,    -1,   295,    -1,   175,   441,    -1,     4,    -1,
       4,   378,   366,   366,    -1,     4,   366,   366,   381,   366,
      -1,    -1,   175,   443,    -1,   184,    -1,     4,   366,   366,
     381,   366,    -1,   376,   383,    -1,    65,   445,    -1,    66,
      -1,    92,    -1,   175,    -1,   216,   175,    -1,   194,    -1,
      69,   446,    -1,   282,    -1,   351,    -1,    -1,   201,    -1,
     266,    -1,    -1,   184,    -1,   366,   366,   376,   383,   384,
      -1,   378,   366,   366,   376,   383,   384,    -1,   376,   383,
     384,    -1,    59,   376,   383,   384,   376,   385,    -1,   299,
     376,   383,    -1,   378,    -1,   376,   383,   384,    -1,   290,
      -1,    32,    -1,   378,    -1,   376,   383,   384,    -1,   376,
     383,   375,   366,   366,     5,    -1,     4,   376,   383,   375,
     366,   366,     5,    -1,   378,   366,   366,     4,     4,    -1,
       5,   369,    -1,    65,    -1,   378,   366,   366,     5,   369,
      -1,     4,     4,     4,     4,    -1,    88,    -1,   122,   204,
     455,    -1,    -1,     4,    -1,   366,   366,    -1,   207,    -1,
      59,   376,   383,   384,    -1,    81,    -1,   101,   459,    -1,
      44,    -1,   118,   457,    -1,   122,   204,   460,    -1,   150,
     458,    -1,   151,    -1,   217,   204,    -1,   279,    -1,   279,
     376,   383,   385,    -1,   280,   461,    -1,   351,    -1,     4,
      -1,   378,   366,   366,    -1,     4,    -1,   171,     5,    -1,
       4,   171,     5,    -1,   322,     4,    -1,    -1,     4,    -1,
     369,    -1,   369,   378,   366,   366,    -1,   369,     4,    -1,
      -1,     4,    -1,   135,   162,   376,    -1,   135,   162,     4,
     376,    -1,   303,   162,   366,   376,    -1,    -1,   221,    -1,
     315,    -1,    66,    -1,   189,    -1,   248,    -1,   293,    -1,
     302,    -1,    81,    -1,    45,    -1,   240,    -1,    61,    -1,
     293,    -1,   316,    -1,    61,    -1,   293,    -1,   316,    -1,
      61,    -1,   293,    -1,   316,    -1,   138,    -1,   247,    -1,
     247,   196,    -1,   277,    -1,   277,   196,    -1,    20,    -1,
     316,   473,    -1,    47,   470,    -1,    74,   471,    -1,   153,
     472,    -1,   194,    -1,    36,    -1,   263,    -1,    -1,    66,
      -1,    -1,    66,    -1,    -1,    66,    -1,    -1,   233,    -1,
      -1,    15,   475,    -1,   204,   377,    -1,    -1,   234,    -1,
      83,   477,    -1,   100,    -1,   376,   383,   384,   478,     5,
       5,    -1,   376,   383,   384,   478,     5,    -1,    19,    -1,
     243,    -1,    18,    -1,    40,    66,    -1,    43,   480,    -1,
      77,   481,    -1,    84,    -1,    95,    -1,    96,    -1,   102,
      -1,   127,   482,    -1,   145,    -1,   161,    -1,   168,    -1,
     190,   483,    -1,   229,    -1,   162,    -1,   282,    -1,   293,
     376,    -1,   322,   484,    -1,    72,     5,    -1,    -1,    30,
      -1,    -1,    43,    -1,    87,    -1,   200,    -1,   153,    -1,
     269,    -1,   226,    -1,   308,    -1,   376,    -1,    58,   376,
      -1,   116,   376,    -1,   180,   376,    -1,    17,    -1,   299,
     376,    -1,   208,     4,     4,    -1,   117,    -1,   193,     5,
      -1,    88,   487,    -1,   270,   122,   204,   486,    -1,   270,
       4,     4,     4,     4,    -1,   312,    -1,   322,   366,   366,
     366,   366,   366,   366,   366,   366,     4,    -1,     5,    -1,
       5,     4,    -1,     4,     4,    56,    -1,     4,     4,   376,
      -1,   201,   368,    -1,    25,   489,    -1,   113,   491,    -1,
     127,   492,    -1,   164,   505,    -1,   215,   503,    -1,   228,
     504,    -1,     5,    13,     5,   388,    -1,     5,    14,     5,
     388,    -1,     5,    61,     5,   388,    -1,     5,   198,   388,
      -1,     5,   199,   388,    -1,     5,   273,   386,     4,   388,
      -1,     5,   283,     4,   388,    -1,     5,   284,     4,   388,
      -1,     5,   315,     5,   388,    -1,   255,    87,   490,    -1,
     158,    87,   490,    -1,   157,    87,   490,    -1,     5,    13,
       5,    -1,     5,    14,     5,    -1,     5,    61,     5,    -1,
       5,   198,    -1,     5,   199,    -1,     5,   273,   386,     4,
      -1,     5,   283,     4,    -1,     5,   284,     4,    -1,     5,
     315,     5,    -1,     5,     5,   281,    -1,     5,    13,     5,
     388,    -1,     5,    14,     5,   388,    -1,     5,    61,     5,
     388,    -1,     5,   198,   387,   388,    -1,     5,     5,   281,
     387,   388,    -1,     5,   199,   387,   388,    -1,     5,   273,
     386,     4,   387,   388,    -1,     5,   288,   386,     4,     4,
     387,   388,    -1,     5,   283,     4,   388,    -1,     5,   284,
       4,   388,    -1,     5,   315,     5,   387,   388,    -1,   280,
     493,    -1,   118,    87,   494,    -1,   255,   162,   502,    -1,
     255,    87,   501,    -1,   158,   162,   502,    -1,   158,    87,
     501,    -1,   157,   162,   502,    -1,   157,    87,   501,    -1,
     200,   495,    -1,     5,    13,     5,    -1,     5,    14,     5,
      -1,     5,    61,     5,    -1,     5,   198,   387,    -1,     5,
       5,   281,   387,    -1,     5,   199,   387,    -1,     5,   273,
     386,     4,   387,    -1,     5,   288,   386,     4,     4,   387,
      -1,     5,   283,     4,    -1,     5,   284,     4,    -1,     5,
     315,     5,   387,    -1,     5,    13,     5,    -1,     5,    14,
       5,    -1,     5,    61,     5,    -1,     5,   198,   387,    -1,
       5,   199,   387,    -1,     5,   273,   386,     4,   387,    -1,
       5,   283,     4,    -1,     5,   284,     4,    -1,     5,   315,
       5,   387,    -1,   162,   167,   496,    -1,   167,   497,    -1,
     162,   498,    -1,   500,    -1,   162,   350,   499,    -1,     5,
      13,     5,   388,    -1,     5,    14,     5,   388,    -1,     5,
      61,     5,   388,    -1,     5,   198,   387,   388,    -1,     5,
     199,   387,   388,    -1,     5,   273,   386,     4,   387,   388,
      -1,     5,   283,     4,   388,    -1,     5,   284,     4,   388,
      -1,     5,   315,     5,   387,   388,    -1,     5,    13,     5,
     388,    -1,     5,    14,     5,   388,    -1,     5,    61,     5,
     388,    -1,     5,   198,   387,   388,    -1,     5,     5,   281,
     387,   388,    -1,     5,   199,   387,   388,    -1,     5,   273,
     386,     4,   387,   388,    -1,     5,   288,   386,     4,     4,
     387,   388,    -1,     5,   283,     4,   388,    -1,     5,   284,
       4,   388,    -1,     5,   315,     5,   387,   388,    -1,   377,
       5,    13,     5,   388,    -1,   377,     5,    14,     5,   388,
      -1,   377,     5,    61,     5,   388,    -1,   377,     5,   198,
     387,   388,    -1,   377,     5,   199,   387,   388,    -1,   377,
       5,   273,   386,     4,   387,   388,    -1,   377,     5,   283,
       4,   388,    -1,   377,     5,   284,     4,   388,    -1,   377,
       5,   315,     5,   387,   388,    -1,     5,    13,     5,   388,
      -1,     5,    14,     5,   388,    -1,     5,    61,     5,   388,
      -1,     5,   198,   387,   388,    -1,     5,   199,   387,   388,
      -1,     5,   273,   386,     4,   387,   388,    -1,     5,   283,
       4,   388,    -1,     5,   284,     4,   388,    -1,     5,   315,
       5,   387,   388,    -1,   377,     5,    13,     5,   388,    -1,
     377,     5,    14,     5,   388,    -1,   377,     5,    61,     5,
     388,    -1,   377,     5,   198,   387,   388,    -1,   377,     5,
       5,   281,   387,   388,    -1,   377,     5,   199,   387,   388,
      -1,   377,     5,   273,   386,     4,   387,   388,    -1,   377,
       5,   288,   386,     4,     4,   387,   388,    -1,   377,     5,
     283,     4,   388,    -1,   377,     5,   284,     4,   388,    -1,
     377,     5,   315,     5,   387,   388,    -1,     5,    13,     5,
      -1,     5,    14,     5,    -1,     5,    61,     5,    -1,     5,
     198,   387,    -1,     5,     5,   281,   387,    -1,     5,   199,
     387,    -1,     5,   273,   386,     4,   387,    -1,     5,   288,
     386,     4,     4,   387,    -1,     5,   283,     4,    -1,     5,
     284,     4,    -1,     5,   315,     5,   387,    -1,     5,    13,
       5,    -1,     5,    14,     5,    -1,     5,    61,     5,    -1,
       5,   198,   387,    -1,     5,   199,   387,    -1,     5,   273,
     386,     4,   387,    -1,     5,   283,     4,    -1,     5,   284,
       4,    -1,     5,   315,     5,   387,    -1,     5,    13,     5,
     388,    -1,     5,    61,     5,   388,    -1,     5,   198,   388,
      -1,     5,   273,   386,     4,   388,    -1,     5,   283,     4,
     388,    -1,     5,   315,     5,   388,    -1,     5,     5,    -1,
     280,     5,     5,    -1,    94,     4,     4,     4,     4,     4,
      -1,   195,     4,     4,     4,     4,     4,    -1,   112,    -1,
     239,    -1,   368,    -1,   143,   368,    -1,    88,   368,    -1,
      66,     5,    -1,     5,     4,     4,    -1,   312,   366,   366,
      -1,   359,   366,    -1,     5,     5,   377,   383,     5,     5,
     377,   383,   366,   377,   385,     5,    -1,    60,   512,    -1,
      66,     5,    -1,    80,    -1,    73,   517,     5,    -1,    73,
     517,   315,     5,    -1,    75,   100,    -1,    -1,    83,   510,
     513,    -1,    89,    -1,   100,   515,    -1,   106,   516,    -1,
     115,     4,    -1,   132,     5,    -1,   153,    16,    -1,   153,
     220,   366,   366,    -1,   153,   304,   366,   366,    -1,     4,
      19,   391,   368,    -1,     4,    20,   371,    -1,     4,    20,
     371,   378,    -1,     4,    20,   371,   376,   383,    -1,     4,
      21,   247,   366,   366,     4,   376,   385,    -1,     4,    21,
     247,     5,   376,   385,    -1,     4,    49,   247,   366,   366,
     366,     4,   376,   385,    -1,     4,    49,   247,     5,   376,
     385,    -1,     4,    48,   247,   366,   366,   376,   385,    -1,
       4,    52,   106,   371,   371,     4,   366,   366,   366,     4,
      -1,     4,    52,   106,   371,   371,     4,   366,   366,   366,
       4,   378,    -1,     4,    52,   106,   371,   371,     4,   366,
     366,   366,     4,   376,   383,    -1,     4,    52,   106,     5,
       5,   376,   383,   376,   385,    -1,     4,    55,   511,     5,
       5,    -1,     4,    62,   247,   366,   376,   385,    -1,     4,
      66,     5,    -1,     4,    74,    26,   368,   368,    -1,     4,
      74,   172,     5,     5,    -1,     4,    74,   247,   366,   376,
     385,    -1,     4,    74,   293,   376,   383,    -1,     4,    75,
     142,   368,    -1,     4,    82,   106,   371,   371,     4,   366,
     366,     4,    -1,     4,    82,   106,   371,   371,     4,   366,
     366,     4,   378,    -1,     4,    82,   106,   371,   371,     4,
     366,   366,     4,   376,   383,    -1,     4,    82,   106,     5,
       5,   376,   383,   376,   385,    -1,     4,    83,    21,   247,
     366,   366,    -1,     4,    83,    49,   247,   366,   366,    -1,
       4,    83,    52,    20,   366,   366,    -1,     4,    83,    52,
     247,   366,   366,    -1,     4,    83,   111,   247,   366,   366,
      -1,     4,    83,   114,    20,   366,   366,    -1,     4,    83,
     114,   247,   366,   366,    -1,     4,    83,    82,    20,   366,
     366,    -1,     4,    83,    82,   247,   366,   366,    -1,     4,
      83,   235,   319,     4,   366,   366,    -1,     4,    83,   268,
     319,     4,   366,   366,    -1,     4,   100,    -1,     4,   100,
      21,     4,    -1,     4,   100,    49,     4,    -1,     4,   100,
      52,     4,    -1,     4,   100,   111,     4,    -1,     4,   100,
      55,   511,     5,    -1,     4,   100,   114,     4,    -1,     4,
     100,    82,     4,    -1,     4,   100,   235,   319,     4,    -1,
       4,   100,   268,   319,     4,    -1,     4,   100,   295,    -1,
       4,   100,   295,     5,    -1,     4,   100,   295,     4,    -1,
       4,   106,    39,     4,    -1,     4,   110,   247,   366,   366,
     376,   385,    -1,     4,   111,   247,   366,   366,   366,     4,
     376,   385,    -1,     4,   111,   247,     5,   376,   385,    -1,
       4,   114,   106,   371,   371,     4,   366,   366,   366,     4,
      -1,     4,   114,   106,   371,   371,     4,   366,   366,   366,
       4,   378,    -1,     4,   114,   106,   371,   371,     4,   366,
     366,   366,     4,   376,   383,    -1,     4,   114,   106,     5,
       5,   376,   383,   376,   385,    -1,     4,   132,     5,    -1,
       4,   153,    -1,     4,   153,   220,    -1,     4,   179,    26,
     368,   368,    -1,     4,   179,   233,   376,   383,   375,   375,
      -1,     4,   203,   366,   366,    -1,     4,   203,   136,    -1,
       4,   203,    35,    -1,     4,   203,   303,   376,   383,   375,
      -1,     4,   235,   253,   366,   366,   376,   385,    -1,     4,
     268,   253,   366,   366,   376,   385,    -1,     4,   233,   272,
     389,    -1,     4,   233,   279,     4,    -1,     4,   241,   376,
     383,   375,   375,   366,   376,   385,    -1,     4,   242,   530,
     368,    -1,     4,   257,    39,    -1,     4,   258,   133,     5,
      -1,     4,   258,   233,   376,   383,   375,   375,    -1,     4,
     258,   293,   376,   383,   376,   385,    -1,     4,   269,    -1,
       4,   269,   220,    -1,     4,   295,     5,    -1,     4,   297,
       5,    -1,     4,   297,   257,   368,    -1,     4,   309,    -1,
       4,   311,    -1,     4,   317,    26,   368,    -1,     4,   317,
     233,   376,   383,   375,   376,   385,   366,   371,    -1,     4,
     351,     4,    -1,   170,    -1,   170,   366,   366,    -1,   181,
     525,    -1,   182,   526,    -1,   203,   527,    -1,   240,   368,
      -1,   242,   530,   368,    -1,   242,   530,   368,   366,   366,
      -1,   257,    39,   366,   366,    -1,   257,   202,   366,   366,
       4,    -1,   257,   112,    -1,   262,   534,    -1,   269,   535,
      -1,   276,   536,    -1,     5,    66,     5,    -1,     5,    80,
      -1,     5,   100,    -1,     5,    89,    -1,     5,   132,     5,
      -1,     5,   153,    -1,     5,   153,   220,    -1,     5,   203,
     366,   366,    -1,     5,   203,   136,    -1,     5,   203,    35,
      -1,     5,   203,   303,   376,   383,   375,    -1,     5,   242,
     530,   368,    -1,     5,   269,    -1,     5,   269,   220,    -1,
       5,   309,    -1,     5,   311,    -1,   295,   106,     5,     5,
      -1,   295,   100,     5,    -1,   295,   100,    16,    -1,   295,
       5,    -1,   295,   312,     5,    -1,   226,    -1,   226,   376,
      -1,   308,    -1,   309,    16,    -1,   311,    16,    -1,   351,
       4,    -1,   269,    -1,   311,    -1,   153,    -1,   309,    -1,
      39,   203,    -1,   203,    -1,   112,   203,    -1,    39,   106,
      -1,   106,    -1,   112,   106,    -1,    39,   257,    -1,   257,
      -1,   112,   257,    -1,   100,    -1,   297,    -1,    66,    -1,
     351,    -1,   242,    -1,   132,    -1,   170,    -1,   312,    -1,
      -1,     4,    -1,    29,   368,    -1,   247,   366,    -1,   166,
       4,    -1,   221,     4,   366,    -1,    62,   366,   366,   366,
     531,    -1,   110,   366,   366,   366,   366,   370,   531,    -1,
      48,   366,   366,   366,   366,   370,   531,    -1,   235,   366,
     366,   366,   366,   531,    -1,   268,   366,   366,   366,   366,
     531,    -1,   179,   366,   366,   366,   366,   531,    -1,   317,
     366,   366,   366,   366,   531,    -1,   297,   366,   366,   370,
     531,    -1,    62,   233,   366,   366,   390,   531,    -1,    48,
     233,   366,   366,   390,   531,    -1,   103,   233,   366,   366,
     390,   531,    -1,    85,   233,   366,   366,   390,   531,    -1,
     362,   233,   366,   366,   390,   531,    -1,    26,   233,   366,
     366,   390,   531,    -1,    51,   233,   366,   366,   390,   531,
      -1,   258,   366,   366,   366,   366,   376,   383,   376,   385,
       5,   531,    -1,    74,   366,   366,   366,   376,   383,   531,
      -1,   241,   366,   366,   366,   366,   366,   531,    -1,    21,
     366,   366,   366,   366,     4,   531,    -1,   111,   366,   366,
     366,   366,   366,     4,   370,   531,    -1,    49,   366,   366,
     366,   366,   366,     4,   370,   531,    -1,    82,   366,   366,
     371,   371,     4,   366,   366,     4,   531,    -1,   114,   366,
     366,   371,   371,     4,   366,   366,   366,     4,   370,   531,
      -1,    52,   366,   366,   371,   371,     4,   366,   366,   366,
       4,   370,   531,    -1,    75,   531,    -1,   296,   514,    -1,
       5,   366,   366,    -1,   315,     5,   366,   366,    -1,   366,
     366,   315,     5,    -1,     5,   376,   383,   375,    -1,    -1,
     269,    -1,    16,    -1,    39,   366,   366,     4,    -1,   202,
     366,   366,     4,    -1,   112,    -1,   105,    -1,   353,    -1,
      63,    -1,   261,    -1,   260,    -1,   244,    -1,   354,    -1,
      60,   519,    -1,    66,    -1,   132,    -1,   115,    -1,   147,
     366,   366,    -1,   160,   366,   366,    -1,     4,    19,    82,
       5,     5,     5,   376,     4,    -1,     4,    19,   155,     5,
       5,     4,    -1,     4,    19,   231,     5,     5,     5,     5,
     376,   383,   392,    -1,     4,    19,   232,     5,     5,   376,
     392,    -1,     4,    19,   246,     5,     5,     5,   376,    -1,
       4,    19,   289,   376,   383,    -1,   160,    16,    -1,     4,
      20,    -1,     4,    20,   378,    -1,     4,    20,   376,   383,
      -1,     4,    21,   247,   376,   385,    -1,     4,    49,   247,
     376,   385,    -1,     4,    48,   247,   376,   385,    -1,     4,
      52,    20,    -1,     4,    52,    20,   378,    -1,     4,    52,
      20,   376,   383,    -1,     4,    52,   247,   376,   385,    -1,
       4,    59,   376,   383,   384,    -1,     4,    62,   247,   376,
     385,    -1,     4,    66,    -1,     4,    74,    26,    -1,     4,
      74,   172,    -1,     4,    74,   247,   376,   385,    -1,     4,
      74,   293,    -1,     4,    75,   142,    -1,     4,    82,    20,
      -1,     4,    82,    20,   378,    -1,     4,    82,    20,   376,
     383,    -1,     4,    82,   247,   376,   385,    -1,     4,   110,
     247,   376,   385,    -1,     4,   111,   247,   376,   385,    -1,
       4,   114,    20,    -1,     4,   114,    20,   378,    -1,     4,
     114,    20,   376,   383,    -1,     4,   114,   247,   376,   385,
      -1,     4,   132,    -1,     4,   153,    -1,     4,   179,    26,
      -1,     4,   179,   174,   376,   385,    -1,     4,   179,   233,
     376,   383,   384,    -1,     4,   188,   174,   366,   376,   385,
      -1,     4,   233,   272,    -1,     4,   233,   279,    -1,     4,
     241,   233,   376,   383,   384,    -1,     4,   241,   174,   376,
     385,    -1,     4,   241,   301,   376,   385,    -1,     4,   242,
      -1,     4,   242,   530,    -1,     4,   258,   133,    -1,     4,
     258,   174,   376,   385,    -1,     4,   258,   233,   376,   383,
     384,    -1,     4,   258,   293,    -1,     4,   269,    -1,     4,
     295,    -1,     4,   295,     4,    -1,     4,   297,    -1,     4,
     297,   257,    -1,     4,   307,    -1,     4,   317,    26,    -1,
       4,   317,   174,   376,   385,    -1,     4,   317,   233,   376,
     383,   384,    -1,     4,   351,    -1,   153,   520,    -1,   153,
     216,    -1,   216,    -1,   235,   268,   366,   366,    -1,   268,
     268,   366,   366,    -1,   240,    -1,   242,   530,    -1,   269,
     521,    -1,   269,   216,    -1,   276,   522,    -1,     5,    66,
      -1,     5,   132,    -1,     5,   160,    -1,     5,   242,   530,
      -1,     5,   295,    -1,     5,   295,   216,    -1,   295,    16,
      -1,   295,    99,   204,    -1,   351,    -1,    29,    -1,   247,
      -1,   166,    -1,   221,    -1,    -1,   366,   366,    -1,    -1,
     366,   366,    -1,    -1,   297,    -1,    -1,    -1,   234,    -1,
     249,    -1,   313,    -1,    57,    -1,   134,    -1,   517,   376,
     383,   384,   368,   532,   539,    -1,   269,   517,   376,   383,
     384,   368,   532,   539,    -1,   517,     5,    -1,   517,     5,
       4,     5,   376,   383,    -1,   517,     4,    -1,   517,     4,
       4,     5,   376,   383,    -1,   127,     5,    -1,   127,     5,
       5,    -1,   366,   366,    -1,   136,    -1,    35,    -1,    39,
     366,   366,    -1,   202,   366,   366,    -1,   112,    -1,   303,
     376,   383,   375,    -1,   528,   529,    -1,   529,    -1,   530,
     363,   368,    -1,    66,   363,     5,    -1,    93,   363,     4,
       4,    -1,   351,   363,     4,    -1,   132,   363,     5,    -1,
     297,   363,     5,    -1,   542,    -1,   543,    -1,   211,    -1,
     269,    -1,   153,    -1,    92,    -1,   129,    -1,   106,    -1,
     203,    -1,   257,    -1,   100,    -1,   163,    -1,   285,    -1,
     123,    -1,   523,    -1,   523,   528,    -1,    -1,    -1,   533,
     537,    -1,     5,   517,   376,   383,   384,   368,    -1,   269,
       5,   517,   376,   383,   384,   368,    -1,   296,     5,    -1,
      16,    -1,   220,   366,   366,    -1,   304,    -1,   304,   366,
     366,    -1,   125,    -1,   173,    -1,   368,    -1,   297,   368,
      -1,   537,   538,    -1,   538,    -1,   530,   363,   368,    -1,
      -1,    -1,   540,   541,    -1,   541,   542,    -1,   542,    -1,
     295,   363,     5,    -1,    55,   363,   511,     5,     5,    -1,
      64,    -1,    66,     5,    -1,   189,   379,    -1,   248,   366,
     366,    -1,   293,   376,    -1,   302,   366,    -1,    45,   380,
      -1,   189,     4,    -1,   362,    -1,   360,    -1,   354,    -1,
     211,    -1,   366,   366,   366,   366,    -1,   366,   366,    -1,
     378,   366,   366,    -1,   376,   383,   375,    -1,   303,   547,
      -1,    38,   366,   366,    -1,   202,   548,    -1,   240,   368,
      -1,   366,   366,    -1,   378,   366,   366,    -1,   376,   383,
     375,    -1,    39,   366,   366,    -1,   366,   366,    -1,   112,
     366,   366,    -1,   368,    -1,   322,   377,   383,    -1,     5,
       4,     4,    -1,   312,    -1,    70,   552,    -1,   175,     4,
      -1,   254,     4,    -1,   263,   366,    -1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,    -1,     4,     4,     4,
       4,     4,     4,    -1,    54,    -1,   144,    -1,   255,    -1,
      90,    -1,   153,   554,    -1,   269,   555,    -1,    39,   366,
     366,    -1,   202,   366,   366,    -1,   112,    -1,   274,   112,
      -1,    39,   366,   366,    -1,   202,   366,   366,    -1,   112,
      -1,   274,   112,    -1,   197,    -1,    12,    -1,   211,    -1,
      33,    -1,   108,    -1,    61,     5,    -1,   293,   376,    -1,
     316,     4,     4,     4,    -1,    61,     5,    -1,   293,   376,
      -1,   316,     4,     4,     4,    -1,    61,     5,    -1,    61,
     314,    -1,   293,   376,    -1,   316,     4,     4,     4,    -1,
     366,    -1,   366,    98,    -1,   202,   562,    -1,   303,   366,
      -1,   303,   366,    98,    -1,    39,    -1,   366,    -1,   112,
      -1,    25,   564,    -1,   127,   565,    -1,   215,   582,    -1,
     113,   583,    -1,   228,     5,    -1,   122,     5,   393,    -1,
      61,     5,   393,    -1,   283,     4,   393,    -1,   255,    87,
     572,    -1,   158,    87,   575,    -1,   157,    87,   578,    -1,
     566,    -1,   162,   566,    -1,   294,   567,    -1,   280,   568,
      -1,   118,    87,   569,    -1,   200,   570,    -1,   255,   162,
     573,    -1,   255,    87,   574,    -1,   158,   162,   576,    -1,
     158,    87,   577,    -1,   157,   162,   579,    -1,   157,    87,
     580,    -1,   251,   581,    -1,   122,     5,    -1,    61,     5,
      -1,   283,     4,    -1,   122,     5,    -1,    61,     5,    -1,
     283,     4,    -1,   122,     5,    -1,    61,     5,    -1,   283,
       4,    -1,   122,     5,    -1,    61,     5,    -1,   283,     4,
      -1,   162,   571,    -1,   122,     5,     4,    -1,    61,     5,
       4,    -1,   283,     4,     4,    -1,   122,     5,    -1,    61,
       5,    -1,   283,     4,    -1,   122,     5,   393,    -1,    61,
       5,   393,    -1,   283,     4,   393,    -1,   122,     5,    -1,
      61,     5,    -1,   283,     4,    -1,   122,     5,    -1,    61,
       5,    -1,   283,     4,    -1,   122,     5,   393,    -1,    61,
       5,   393,    -1,   283,     4,   393,    -1,   122,     5,    -1,
      61,     5,    -1,   283,     4,    -1,   122,     5,    -1,    61,
       5,    -1,   283,     4,    -1,   122,     5,   393,    -1,    61,
       5,   393,    -1,   283,     4,   393,    -1,   122,     5,    -1,
      61,     5,    -1,   283,     4,    -1,   122,     5,    -1,    61,
       5,    -1,   283,     4,    -1,   122,     5,    -1,    61,     5,
      -1,   283,     4,    -1,   122,     5,   393,    -1,    61,     5,
     393,    -1,   283,     4,   393,    -1,   122,     5,     5,   393,
      -1,   585,     4,     4,   366,   366,   371,    -1,   585,     4,
      -1,   100,    -1,    50,    -1,   305,    -1,   140,    -1,   109,
      -1,    -1,     4,   366,   366,   366,   366,    -1,   214,    -1,
     214,     4,   366,   366,   366,   366,    -1,   127,   280,   587,
      -1,     4,    -1,     4,     4,    -1,   366,   376,    -1,   366,
     366,    -1,   303,   366,   366,    -1,   377,   383,   384,    -1,
      15,   592,    -1,   253,     4,    -1,   250,   591,    -1,    22,
     590,    -1,     4,     4,    -1,     4,     5,    -1,   297,     4,
       5,    -1,     4,     4,    -1,     4,     5,    -1,   297,     4,
       5,    -1,     4,    -1,     4,   377,   383,    -1,   303,     4,
     377,   383,    -1,   234,    64,    -1,   239,    -1,   366,   366,
      -1,   366,   366,    11,   366,   366,    -1,   366,   366,    11,
     378,   366,   366,    -1,   366,   366,    11,   376,   383,   375,
      -1,   303,   595,    -1,   126,    -1,   126,   366,    -1,   366,
     366,    -1,   366,   366,    11,   366,   366,    -1,   366,   366,
      11,   378,   366,   366,    -1,   366,   366,    11,   376,   383,
     375,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   468,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   527,
     528,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   544,   546,   547,   548,   549,   551,   552,   553,
     554,   557,   558,   559,   560,   561,   564,   565,   568,   569,
     570,   573,   576,   579,   582,   594,   601,   608,   616,   617,
     618,   619,   620,   623,   624,   625,   626,   627,   628,   629,
     630,   631,   632,   633,   634,   635,   636,   637,   638,   639,
     640,   641,   642,   643,   644,   645,   646,   647,   648,   649,
     650,   653,   654,   657,   658,   659,   660,   661,   662,   665,
     666,   667,   668,   669,   672,   673,   674,   675,   676,   677,
     678,   679,   682,   683,   684,   685,   686,   689,   690,   691,
     692,   693,   694,   695,   696,   699,   700,   701,   704,   705,
     706,   707,   710,   711,   712,   715,   716,   717,   720,   721,
     722,   725,   726,   727,   728,   729,   730,   731,   732,   735,
     736,   739,   740,   741,   742,   743,   744,   747,   748,   749,
     750,   753,   754,   755,   756,   757,   758,   761,   762,   763,
     764,   765,   766,   767,   768,   769,   773,   774,   777,   778,
     781,   782,   785,   786,   790,   791,   792,   793,   794,   795,
     796,   797,   800,   801,   804,   805,   806,   808,   810,   811,
     812,   814,   818,   819,   822,   823,   825,   828,   830,   836,
     837,   838,   841,   842,   843,   846,   847,   848,   849,   850,
     851,   852,   858,   859,   862,   863,   864,   865,   866,   869,
     870,   871,   872,   875,   876,   881,   886,   893,   895,   897,
     899,   901,   902,   903,   906,   908,   910,   912,   915,   916,
     919,   920,   921,   922,   923,   926,   929,   932,   938,   944,
     947,   948,   951,   952,   953,   960,   961,   962,   963,   966,
     967,   970,   971,   974,   975,   978,   980,   984,   985,   988,
     990,   991,   992,   993,   996,   997,   999,  1000,  1001,  1004,
    1006,  1008,  1009,  1011,  1013,  1015,  1017,  1021,  1024,  1025,
    1026,  1027,  1030,  1031,  1034,  1037,  1038,  1039,  1040,  1041,
    1042,  1043,  1044,  1045,  1046,  1047,  1048,  1049,  1050,  1051,
    1052,  1053,  1054,  1055,  1056,  1057,  1058,  1059,  1060,  1061,
    1062,  1063,  1064,  1065,  1066,  1067,  1068,  1069,  1071,  1072,
    1073,  1074,  1075,  1076,  1077,  1079,  1080,  1081,  1084,  1086,
    1090,  1092,  1096,  1097,  1098,  1099,  1100,  1101,  1102,  1103,
    1106,  1107,  1108,  1111,  1114,  1115,  1117,  1119,  1120,  1121,
    1122,  1123,  1124,  1131,  1132,  1135,  1136,  1137,  1140,  1141,
    1144,  1147,  1148,  1150,  1154,  1155,  1156,  1159,  1163,  1165,
    1166,  1167,  1168,  1169,  1170,  1171,  1172,  1173,  1176,  1177,
    1178,  1181,  1182,  1185,  1187,  1195,  1197,  1199,  1203,  1204,
    1206,  1209,  1212,  1213,  1217,  1219,  1222,  1227,  1228,  1229,
    1233,  1234,  1235,  1238,  1239,  1240,  1243,  1244,  1246,  1247,
    1248,  1249,  1250,  1251,  1252,  1253,  1254,  1255,  1257,  1258,
    1261,  1262,  1265,  1266,  1267,  1268,  1271,  1272,  1275,  1277,
    1280,  1284,  1285,  1286,  1288,  1290,  1294,  1295,  1296,  1299,
    1300,  1301,  1302,  1303,  1304,  1305,  1308,  1311,  1312,  1313,
    1316,  1317,  1318,  1321,  1322,  1323,  1326,  1327,  1328,  1329,
    1330,  1331,  1334,  1335,  1336,  1337,  1338,  1339,  1340,  1343,
    1344,  1347,  1348,  1351,  1352,  1355,  1356,  1359,  1360,  1361,
    1364,  1365,  1368,  1369,  1372,  1375,  1383,  1384,  1387,  1388,
    1389,  1390,  1391,  1392,  1393,  1394,  1395,  1396,  1397,  1398,
    1399,  1400,  1401,  1402,  1403,  1404,  1407,  1410,  1411,  1414,
    1415,  1416,  1417,  1420,  1421,  1422,  1423,  1426,  1427,  1428,
    1429,  1430,  1431,  1434,  1435,  1436,  1437,  1438,  1439,  1441,
    1442,  1447,  1448,  1451,  1453,  1455,  1458,  1459,  1460,  1461,
    1462,  1463,  1466,  1468,  1470,  1472,  1473,  1475,  1477,  1479,
    1481,  1483,  1484,  1485,  1488,  1489,  1490,  1491,  1492,  1493,
    1495,  1496,  1497,  1500,  1503,  1505,  1507,  1509,  1511,  1513,
    1515,  1517,  1520,  1522,  1524,  1526,  1527,  1528,  1529,  1530,
    1531,  1532,  1533,  1534,  1537,  1538,  1539,  1540,  1541,  1542,
    1543,  1545,  1547,  1548,  1549,  1552,  1553,  1554,  1555,  1556,
    1557,  1559,  1560,  1561,  1564,  1565,  1566,  1567,  1568,  1571,
    1574,  1577,  1580,  1583,  1586,  1589,  1592,  1595,  1600,  1603,
    1606,  1609,  1612,  1615,  1618,  1621,  1624,  1627,  1630,  1635,
    1638,  1641,  1644,  1647,  1650,  1653,  1656,  1659,  1664,  1666,
    1668,  1670,  1672,  1674,  1679,  1681,  1683,  1687,  1690,  1693,
    1696,  1699,  1702,  1705,  1708,  1711,  1714,  1717,  1722,  1723,
    1724,  1725,  1726,  1727,  1728,  1730,  1732,  1733,  1734,  1737,
    1738,  1739,  1740,  1741,  1742,  1744,  1745,  1746,  1749,  1751,
    1753,  1754,  1756,  1758,  1762,  1763,  1766,  1767,  1768,  1771,
    1774,  1775,  1776,  1777,  1778,  1779,  1780,  1783,  1791,  1792,
    1793,  1794,  1796,  1798,  1799,  1799,  1800,  1801,  1802,  1803,
    1804,  1806,  1807,  1809,  1812,  1815,  1816,  1817,  1820,  1823,
    1826,  1830,  1833,  1836,  1839,  1843,  1848,  1853,  1855,  1857,
    1858,  1860,  1862,  1864,  1866,  1867,  1869,  1871,  1875,  1880,
    1882,  1884,  1886,  1888,  1890,  1892,  1894,  1896,  1898,  1900,
    1903,  1904,  1906,  1908,  1909,  1911,  1913,  1914,  1915,  1917,
    1919,  1920,  1921,  1923,  1924,  1927,  1931,  1934,  1937,  1941,
    1946,  1952,  1953,  1954,  1956,  1957,  1961,  1963,  1964,  1965,
    1968,  1971,  1974,  1976,  1978,  1983,  1986,  1987,  1988,  1991,
    1995,  1996,  1998,  1999,  2000,  2002,  2003,  2005,  2006,  2011,
    2013,  2014,  2016,  2017,  2018,  2019,  2020,  2021,  2023,  2025,
    2027,  2028,  2029,  2031,  2033,  2034,  2035,  2036,  2037,  2038,
    2039,  2040,  2041,  2042,  2043,  2045,  2047,  2048,  2049,  2050,
    2052,  2053,  2054,  2055,  2056,  2058,  2059,  2060,  2061,  2062,
    2063,  2066,  2067,  2068,  2069,  2070,  2071,  2072,  2073,  2074,
    2075,  2076,  2077,  2078,  2079,  2080,  2081,  2082,  2083,  2084,
    2085,  2086,  2089,  2090,  2091,  2092,  2093,  2094,  2102,  2109,
    2118,  2127,  2134,  2141,  2149,  2157,  2164,  2169,  2174,  2179,
    2184,  2189,  2194,  2200,  2210,  2220,  2230,  2237,  2247,  2257,
    2266,  2278,  2291,  2296,  2299,  2301,  2303,  2308,  2312,  2313,
    2314,  2320,  2322,  2324,  2327,  2328,  2329,  2330,  2331,  2332,
    2333,  2336,  2337,  2338,  2339,  2340,  2341,  2343,  2345,  2347,
    2349,  2351,  2353,  2356,  2357,  2358,  2359,  2361,  2364,  2366,
    2368,  2369,  2370,  2372,  2375,  2378,  2380,  2381,  2382,  2383,
    2385,  2386,  2387,  2388,  2389,  2391,  2393,  2395,  2398,  2399,
    2400,  2402,  2405,  2406,  2407,  2408,  2410,  2413,  2417,  2418,
    2419,  2422,  2425,  2427,  2428,  2429,  2430,  2432,  2435,  2436,
    2438,  2439,  2440,  2441,  2442,  2444,  2445,  2447,  2450,  2451,
    2452,  2453,  2454,  2456,  2458,  2459,  2460,  2461,  2463,  2465,
    2466,  2467,  2468,  2469,  2470,  2472,  2473,  2475,  2478,  2479,
    2480,  2481,  2484,  2485,  2488,  2489,  2492,  2493,  2496,  2509,
    2510,  2514,  2515,  2519,  2520,  2523,  2527,  2533,  2535,  2538,
    2540,  2543,  2545,  2549,  2550,  2551,  2552,  2553,  2554,  2555,
    2559,  2560,  2563,  2564,  2565,  2566,  2567,  2568,  2569,  2570,
    2573,  2574,  2575,  2576,  2577,  2578,  2579,  2580,  2581,  2582,
    2583,  2584,  2587,  2588,  2591,  2592,  2592,  2595,  2597,  2599,
    2602,  2603,  2604,  2605,  2606,  2607,  2610,  2611,  2614,  2615,
    2618,  2622,  2623,  2623,  2626,  2627,  2630,  2633,  2637,  2638,
    2639,  2640,  2641,  2642,  2643,  2644,  2650,  2651,  2652,  2653,
    2656,  2658,  2659,  2664,  2666,  2667,  2668,  2669,  2672,  2673,
    2678,  2682,  2683,  2684,  2687,  2688,  2693,  2694,  2697,  2699,
    2700,  2701,  2706,  2708,  2714,  2715,  2716,  2717,  2720,  2721,
    2724,  2726,  2728,  2729,  2732,  2734,  2735,  2736,  2739,  2740,
    2743,  2744,  2745,  2748,  2749,  2750,  2753,  2754,  2755,  2758,
    2759,  2760,  2761,  2764,  2765,  2766,  2767,  2768,  2771,  2772,
    2773,  2776,  2777,  2778,  2779,  2780,  2783,  2785,  2787,  2789,
    2790,  2791,  2794,  2795,  2796,  2797,  2798,  2799,  2800,  2801,
    2802,  2803,  2804,  2805,  2806,  2809,  2810,  2811,  2814,  2815,
    2816,  2819,  2820,  2821,  2824,  2825,  2826,  2829,  2830,  2831,
    2832,  2835,  2836,  2837,  2840,  2842,  2844,  2848,  2849,  2850,
    2853,  2854,  2855,  2858,  2860,  2862,  2866,  2867,  2868,  2871,
    2872,  2873,  2876,  2878,  2880,  2884,  2885,  2886,  2889,  2890,
    2891,  2894,  2895,  2896,  2899,  2901,  2903,  2907,  2911,  2913,
    2918,  2921,  2922,  2923,  2924,  2927,  2928,  2931,  2933,  2935,
    2938,  2939,  2940,  2943,  2944,  2947,  2949,  2950,  2951,  2952,
    2955,  2956,  2957,  2960,  2961,  2962,  2965,  2966,  2971,  2973,
    2976,  2983,  2984,  2986,  2991,  2993,  2996,  2997,  2998,  2999,
    3001,  3006
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
  "HISTEQU_", "HISTOGRAM_", "HORIZONTAL_", "HSV_", "HLS_", "ICRS_", "ID_",
  "IIS_", "IMAGE_", "INCLUDE_", "INCR_", "INFO_", "ITERATION_", "IRAF_",
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
  "getPan", "getRGB", "getHLS", "getHSV", "getSmooth", "getThreed",
  "getThreedBorder", "getThreedCompass", "getThreedHighlite",
  "getThreedView", "getWCS", "getWCSAlign", "grid", "gridCreate",
  "gridType", "has", "hasBin", "hasContour", "hasFits", "hasMarker",
  "hasWCS", "iis", "iisSetFileName", "iiscursor", "load", "loadArr",
  "loadArrayRGBCube", "loadENVI", "loadFits", "loadFitsSlice",
  "loadFitsExtCube", "loadFitsMosaic", "loadFitsMosaicImageIRAF",
  "loadFitsMosaicIRAF", "loadFitsMosaicImageWCS",
  "loadFitsMosaicImageWFPC2", "loadFitsMosaicWCS", "loadFitsRGBCube",
  "loadFitsRGBImage", "loadNRRD", "loadPhoto", "loadIncr", "macosx",
  "magnifier", "match", "marker", "@1", "markerCallBack", "markerCentroid",
  "markerCreate", "markerCreateTemplate", "markerDelete", "markerEdit",
  "markerFormat", "markerGet", "markerGetCentroid", "markerGetHighlite",
  "markerGetSelect", "markerGetShow", "markerInitProp", "markerLayer",
  "markerList", "markerLoad", "markerMoveSelected", "markerProps",
  "markerProp", "markerProperty", "markerProperties", "markerQuery", "@2",
  "markerSave", "markerSelect", "markerShow", "queries", "query",
  "markerTags", "@3", "tags", "tag", "callback", "mask", "orient", "pan",
  "panTo", "panMotion", "panner", "postscript", "precision",
  "pscolorspace", "region", "regionHighlite", "regionSelect",
  "renderMethod", "renderBackground", "rgb", "hls", "hsv", "rotate",
  "rotateMotion", "save", "saveArray", "saveFits", "saveFitsImage",
  "saveFitsTable", "saveFitsSlice", "saveFitsExtCube", "saveFitsMosaic",
  "saveFitsMosaicImage", "saveArrayRGBCube", "saveFitsRGBImage",
  "saveFitsRGBCube", "saveArrayHLSCube", "saveFitsHLSImage",
  "saveFitsHLSCube", "saveArrayHSVCube", "saveFitsHSVImage",
  "saveFitsHSVCube", "saveFitsResample", "saveNRRD", "saveENVI", "smooth",
  "smoothFunction", "update", "updateFitsSlice", "warp", "wcs",
  "wcsAppend", "wcsReplace", "wcsAlign", "win32", "zoom", "zoomTo", 0
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
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
      89,    78,    88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   364,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   366,
     366,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     367,   367,   368,   368,   368,   368,   368,   368,   368,   368,
     368,   369,   369,   369,   369,   369,   370,   370,   371,   371,
     371,   372,   373,   374,   375,   375,   375,   375,   376,   376,
     376,   376,   376,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   378,   378,   379,   379,   379,   379,   379,   379,   380,
     380,   380,   380,   380,   381,   381,   381,   381,   381,   381,
     381,   381,   382,   382,   382,   382,   382,   383,   383,   383,
     383,   383,   383,   383,   383,   384,   384,   384,   385,   385,
     385,   385,   386,   386,   386,   387,   387,   387,   388,   388,
     388,   389,   389,   389,   389,   389,   389,   389,   389,   390,
     390,   391,   391,   391,   391,   391,   391,   392,   392,   392,
     392,   393,   393,   393,   393,   393,   393,   394,   394,   394,
     394,   394,   394,   394,   394,   394,   395,   395,   396,   396,
     397,   397,   398,   398,   399,   399,   399,   399,   399,   399,
     399,   399,   400,   400,   401,   401,   401,   401,   401,   401,
     401,   401,   402,   402,   403,   403,   403,   403,   403,   404,
     404,   404,   405,   405,   405,   406,   406,   406,   406,   406,
     406,   406,   407,   407,   408,   408,   408,   408,   408,   409,
     409,   409,   409,   410,   410,   410,   410,   411,   411,   411,
     411,   411,   411,   411,   412,   412,   412,   412,   413,   413,
     414,   414,   414,   414,   414,   415,   415,   415,   415,   415,
     416,   416,   417,   417,   417,   418,   418,   418,   418,   419,
     419,   420,   420,   421,   421,   422,   422,   423,   423,   423,
     423,   423,   423,   423,   424,   424,   424,   424,   424,   425,
     425,   425,   425,   425,   425,   425,   425,   426,   427,   427,
     427,   427,   428,   428,   429,   430,   430,   430,   430,   430,
     430,   430,   430,   430,   430,   430,   430,   430,   430,   430,
     430,   430,   430,   430,   430,   430,   430,   430,   430,   430,
     430,   430,   430,   430,   430,   430,   430,   430,   430,   430,
     430,   430,   430,   430,   430,   430,   430,   430,   431,   431,
     432,   432,   433,   433,   433,   433,   433,   433,   433,   433,
     434,   434,   434,   435,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   437,   437,   438,   438,   438,   439,   439,
     440,   441,   441,   441,   442,   442,   442,   443,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   445,   445,
     445,   446,   446,   447,   447,   448,   448,   448,   449,   449,
     449,   450,   451,   451,   452,   452,   452,   453,   453,   453,
     454,   454,   454,   455,   455,   455,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     457,   457,   458,   458,   458,   458,   459,   459,   460,   460,
     460,   461,   461,   461,   461,   461,   462,   462,   462,   463,
     463,   463,   463,   463,   463,   463,   464,   465,   465,   465,
     466,   466,   466,   467,   467,   467,   468,   468,   468,   468,
     468,   468,   469,   469,   469,   469,   469,   469,   469,   470,
     470,   471,   471,   472,   472,   473,   473,   474,   474,   474,
     475,   475,   476,   476,   477,   477,   478,   478,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   479,   480,   481,   481,   482,
     482,   482,   482,   483,   483,   483,   483,   484,   484,   484,
     484,   484,   484,   485,   485,   485,   485,   485,   485,   485,
     485,   486,   486,   487,   487,   487,   488,   488,   488,   488,
     488,   488,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   491,   492,   492,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   492,
     492,   492,   492,   492,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   495,   495,   495,   495,   495,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   501,   501,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   503,   503,
     503,   503,   503,   503,   504,   504,   505,   505,   505,   506,
     507,   507,   507,   507,   507,   507,   507,   508,   509,   509,
     509,   509,   509,   509,   510,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   512,   512,   512,   512,   512,   512,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   514,   514,   514,   514,   515,   515,
     515,   516,   516,   516,   517,   517,   517,   517,   517,   517,
     517,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   518,   518,   518,   518,   518,   518,   518,   519,   519,
     519,   519,   520,   520,   521,   521,   522,   522,   523,   524,
     524,   524,   524,   524,   524,   525,   525,   526,   526,   526,
     526,   526,   526,   527,   527,   527,   527,   527,   527,   527,
     528,   528,   529,   529,   529,   529,   529,   529,   529,   529,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   531,   531,   532,   533,   532,   534,   534,   534,
     535,   535,   535,   535,   535,   535,   536,   536,   537,   537,
     538,   539,   540,   539,   541,   541,   542,   543,   544,   544,
     544,   544,   544,   544,   544,   544,   545,   545,   545,   545,
     546,   546,   546,   546,   546,   546,   546,   546,   547,   547,
     547,   548,   548,   548,   549,   549,   549,   549,   550,   550,
     550,   550,   551,   551,   552,   552,   552,   552,   553,   553,
     554,   554,   554,   554,   555,   555,   555,   555,   556,   556,
     557,   557,   557,   558,   558,   558,   559,   559,   559,   560,
     560,   560,   560,   561,   561,   561,   561,   561,   562,   562,
     562,   563,   563,   563,   563,   563,   564,   564,   564,   564,
     564,   564,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   566,   566,   566,   567,   567,
     567,   568,   568,   568,   569,   569,   569,   570,   570,   570,
     570,   571,   571,   571,   572,   572,   572,   573,   573,   573,
     574,   574,   574,   575,   575,   575,   576,   576,   576,   577,
     577,   577,   578,   578,   578,   579,   579,   579,   580,   580,
     580,   581,   581,   581,   582,   582,   582,   583,   584,   584,
     584,   585,   585,   585,   585,   586,   586,   586,   586,   586,
     587,   587,   587,   588,   588,   589,   589,   589,   589,   589,
     590,   590,   590,   591,   591,   591,   592,   592,   592,   592,
     593,   594,   594,   594,   594,   594,   595,   595,   595,   595,
     595,   595
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     3,     2,     1,     1,     2,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     2,     3,     2,     2,     2,     3,
       2,     2,     2,     2,     3,     2,     3,     2,     2,     2,
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
       2,     2,     1,     3,     2,     2,     2,     5,     9,     9,
       9,     1,     2,     1,     5,     9,     9,     9,     1,     2,
       2,     2,     2,     2,     2,    13,    13,    12,    12,     1,
       0,     1,     1,     4,     6,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     3,     4,     0,     6,     8,
       2,     3,     3,     3,     0,     4,     4,     4,     4,     3,
       3,     1,     3,     5,     4,     4,     3,     2,     0,     1,
       1,     1,     1,     1,     3,     0,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     2,     2,     2,     4,     3,     2,     2,     2,     2,
       2,     1,     3,     2,     2,     1,     2,     8,     2,     1,
       2,     1,     2,     1,     4,     3,     2,     1,     7,     8,
       7,     8,     1,     1,     1,     2,     1,     1,     2,     1,
       0,     2,     2,     1,     0,     2,     2,     1,     1,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     0,     1,
       2,     1,     4,     5,     0,     2,     1,     5,     2,     2,
       1,     1,     1,     2,     1,     2,     1,     1,     0,     1,
       1,     0,     1,     5,     6,     3,     6,     3,     1,     3,
       1,     1,     1,     3,     6,     7,     5,     2,     1,     5,
       4,     1,     3,     0,     1,     2,     1,     4,     1,     2,
       1,     2,     3,     2,     1,     2,     1,     4,     2,     1,
       1,     3,     1,     2,     3,     2,     0,     1,     1,     4,
       2,     0,     1,     3,     4,     4,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       2,     1,     2,     2,     2,     2,     1,     1,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     2,     2,
       0,     1,     2,     1,     6,     5,     1,     1,     1,     2,
       2,     2,     1,     1,     1,     1,     2,     1,     1,     1,
       2,     1,     1,     1,     2,     2,     2,     0,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     1,     2,     3,     1,     2,     2,     4,     5,     1,
      10,     1,     2,     3,     3,     2,     2,     2,     2,     2,
       2,     2,     4,     4,     4,     3,     3,     5,     4,     4,
       4,     3,     3,     3,     3,     3,     3,     2,     2,     4,
       3,     3,     3,     3,     4,     4,     4,     4,     5,     4,
       6,     7,     4,     4,     5,     2,     3,     3,     3,     3,
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
       9,     6,     7,    10,    11,    12,     9,     5,     6,     3,
       5,     5,     6,     5,     4,     9,    10,    11,     9,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     7,     7,
       2,     4,     4,     4,     4,     5,     4,     4,     5,     5,
       3,     4,     4,     4,     7,     9,     6,    10,    11,    12,
       9,     3,     2,     3,     5,     7,     4,     3,     3,     6,
       7,     7,     4,     4,     9,     4,     3,     4,     7,     7,
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
       7,     7,     5,     2,     2,     3,     4,     5,     5,     5,
       3,     4,     5,     5,     5,     5,     2,     3,     3,     5,
       3,     3,     3,     4,     5,     5,     5,     5,     3,     4,
       5,     5,     2,     2,     3,     5,     6,     6,     3,     3,
       6,     5,     5,     2,     3,     3,     5,     6,     3,     2,
       2,     3,     2,     3,     2,     3,     5,     6,     2,     2,
       2,     1,     4,     4,     1,     2,     2,     2,     2,     2,
       2,     2,     3,     2,     3,     2,     3,     1,     1,     1,
       1,     1,     0,     2,     0,     2,     0,     1,     0,     0,
       1,     1,     1,     1,     1,     7,     8,     2,     6,     2,
       6,     2,     3,     2,     1,     1,     3,     3,     1,     4,
       2,     1,     3,     3,     4,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     0,     0,     2,     6,     7,     2,
       1,     3,     1,     3,     1,     1,     1,     2,     2,     1,
       3,     0,     0,     2,     2,     1,     3,     5,     1,     2,
       2,     3,     2,     2,     2,     2,     1,     1,     1,     1,
       4,     2,     3,     3,     2,     3,     2,     2,     2,     3,
       3,     3,     2,     3,     1,     3,     3,     1,     2,     2,
       2,     2,     9,     6,     1,     1,     1,     1,     2,     2,
       3,     3,     1,     2,     3,     3,     1,     2,     1,     1,
       1,     1,     1,     2,     2,     4,     2,     2,     4,     2,
       2,     2,     4,     1,     2,     2,     2,     3,     1,     1,
       1,     2,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     1,     2,     2,     2,     3,     2,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     3,
       3,     2,     2,     2,     3,     3,     3,     2,     2,     2,
       2,     2,     2,     3,     3,     3,     2,     2,     2,     2,
       2,     2,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     3,     3,     3,     4,     6,     2,
       1,     1,     1,     1,     1,     0,     5,     1,     6,     3,
       1,     2,     2,     2,     3,     3,     2,     2,     2,     2,
       2,     2,     3,     2,     2,     3,     1,     3,     4,     2,
       1,     2,     5,     6,     6,     2,     1,     2,     2,     5,
       6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     7,     8,     0,     0,     0,     0,
       0,   317,     0,     0,     0,     0,     0,     0,   345,     0,
       0,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1069,     0,     0,     0,     0,     0,     0,     0,     0,
    1069,    43,     0,     0,     0,    48,     0,     0,     0,    52,
    1295,    54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,    59,    60,     0,
     249,     6,     0,     0,     0,     0,     0,     0,     9,     0,
       0,   281,   283,     0,     0,     0,     0,    11,   149,   151,
     144,   145,   146,   150,   147,   148,   288,    12,     0,   300,
       0,     0,     0,    13,     0,     0,     0,     0,   324,     0,
      14,    72,   101,     0,   131,   100,    80,    98,     0,    77,
      79,    75,   132,    99,    76,     0,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,    73,    74,    78,   331,   157,   102,
       0,    15,     0,    16,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,    61,   343,   342,    18,
       0,    19,     0,     0,     0,   404,   418,     0,   424,     0,
       0,     0,     0,     0,     0,     0,   360,     0,   496,     0,
       0,     0,     0,     0,     0,     0,     0,  1069,     0,   371,
       0,   375,     0,     0,     0,   379,     0,   381,     0,   383,
       0,     0,   537,   387,    20,     0,   543,    21,   548,     0,
       0,   567,   552,   553,   554,   555,   569,   557,   558,   562,
     559,     0,   561,   563,     0,     0,    22,     0,    24,     0,
       0,     0,    26,     0,     0,     0,    27,     0,   584,     0,
       0,     0,   589,     0,    28,     0,     0,     0,     0,     0,
       0,     0,    30,   749,    31,     0,     0,     0,     0,     0,
       0,   750,    32,     0,    33,  1073,  1074,  1070,  1071,  1072,
       0,   139,  1138,     0,   133,     0,     0,     0,    35,     0,
    1149,  1148,  1147,  1146,    37,     0,     0,     0,     0,     0,
     157,     0,    38,     0,  1167,     0,  1164,    39,     0,     0,
       0,     0,    42,     0,    41,    40,     0,     0,     0,     0,
      45,     0,     0,  1203,    46,     0,     0,     0,     0,     0,
      47,  1291,  1290,  1294,  1293,  1292,    49,     0,    50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
       0,  1297,    53,     0,     0,    55,     0,     0,     0,     0,
     157,    56,  1320,    57,     0,     0,    58,     1,     4,     5,
     232,     0,   224,     0,     0,   226,     0,   234,   227,   231,
     242,   243,   228,   244,     0,   230,   252,   253,   251,   250,
       0,     0,   272,     0,   257,   265,   268,   267,   266,   264,
     256,   261,   262,   263,   255,     0,     0,     0,     0,     0,
       0,   260,    10,     0,     0,     0,     0,     0,     0,     0,
     282,     0,   289,     0,   299,   290,   301,   291,   302,   292,
     313,   293,     0,     0,   294,     0,    91,    92,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     320,     0,     0,     0,     0,     0,   159,   164,   158,   160,
     163,   162,   161,     0,     0,   337,    66,    67,    68,    69,
      70,    62,    63,    64,    71,    65,     0,   346,     0,   400,
     396,   392,   393,   397,   394,   399,   347,   403,   348,   305,
     408,   412,   407,   308,   307,   306,     0,     0,   349,   419,
     351,     0,   350,     0,   426,   352,   438,   430,   441,   431,
     432,   434,     0,   436,   437,   157,   353,     0,     0,   354,
       0,     0,   157,   355,   450,   157,   448,   356,   451,   358,
     157,   452,   357,     0,   157,     0,   359,   470,     0,   468,
     486,     0,     0,     0,   474,   466,     0,   476,   491,   479,
     361,   497,   498,   362,   363,     0,     0,   513,   514,   515,
     366,   510,   511,   512,   367,     0,   461,     0,   368,    81,
     458,     0,   369,   370,     0,   505,   499,   504,   500,   501,
     502,   503,   373,   374,   506,   376,     0,   507,   508,   509,
     378,   521,   516,   517,   519,   380,   527,   529,   531,   533,
     526,   528,   535,   382,     0,     0,   540,     0,   386,   157,
     542,   549,     0,   550,   568,   551,   570,   571,   572,   556,
     573,   575,   574,   576,   560,   564,   581,     0,     0,     0,
       0,   577,   565,    25,  1199,  1200,  1201,     0,  1196,  1197,
       0,     0,     0,   586,   585,     0,     0,     0,     0,    29,
       0,     0,     0,     0,   596,     0,   597,     0,     0,     0,
       0,     0,     0,     0,   598,     0,   748,     0,   599,     0,
     600,     0,     0,   601,     0,   753,   752,   751,     0,   756,
       0,     0,     0,   922,     0,     0,     0,   760,   764,   766,
     958,     0,     0,     0,     0,   860,     0,     0,     0,   895,
       0,     0,     0,     0,     0,     0,     0,   897,     0,     0,
       0,    34,   142,   143,   141,   140,  1144,  1139,  1145,   136,
     137,   135,   138,   134,  1140,     0,  1142,  1143,    36,     0,
       0,     0,     0,  1156,  1157,     0,   157,     0,  1154,  1151,
       0,     0,     0,   157,  1174,  1177,  1175,  1176,  1168,  1169,
    1170,  1171,     0,     0,     0,    44,  1193,  1194,     0,  1208,
    1210,  1209,  1205,  1206,  1204,     0,     0,     0,     0,     0,
       0,  1211,     0,  1214,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1212,  1222,     0,     0,
       0,  1213,  1215,  1289,  1191,  1192,  1190,   212,     0,   216,
     208,     0,   218,   209,     0,   220,   210,  1189,  1188,   211,
     213,   214,   215,     0,     0,   207,     0,     0,     0,     0,
    1303,  1316,     0,     0,  1306,     0,     0,  1309,     0,     0,
    1308,  1307,   165,  1326,     0,  1325,  1321,   233,   229,     0,
     238,     0,   235,     0,   254,   152,   155,   156,   154,   153,
     269,   270,   271,   259,   258,   274,   276,   275,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   157,     0,   321,    97,    94,    95,    96,   157,   323,
     322,     0,     0,     0,     0,     0,     0,     0,   336,     0,
     332,   330,   329,   344,   395,     0,     0,   398,   413,   414,
     409,   410,   415,   417,   416,   411,   309,   310,   406,   405,
     421,   420,     0,   425,   439,   440,   429,   442,   435,   433,
     428,     0,     0,   157,   157,   165,   165,   165,   157,     0,
       0,   157,   487,   469,   480,     0,   471,    81,   482,     0,
       0,   473,   475,   157,   492,     0,     0,   478,     0,     0,
     365,     0,   463,    85,    84,   457,     0,     0,     0,     0,
     972,   974,   973,     0,  1062,     0,  1041,     0,  1044,     0,
       0,  1064,  1066,     0,  1057,   372,     0,   518,   520,   530,
     523,   532,   524,   534,   525,   536,   522,     0,     0,   385,
     541,   538,   539,   165,   566,   578,   579,   580,   582,     0,
       0,     0,   595,   583,     0,     0,     0,     0,     0,     0,
     178,   178,   172,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   175,   175,   172,     0,     0,   172,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   643,
     667,     0,     0,     0,   635,     0,     0,     0,     0,   178,
     172,     0,     0,   744,     0,   754,   755,   157,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   810,     0,     0,     0,     0,     0,   832,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   850,     0,     0,
     855,   856,     0,     0,     0,   875,   877,   876,     0,   879,
       0,     0,   886,   888,   889,   923,     0,     0,     0,     0,
     758,   759,   966,   964,   969,   968,   967,   965,   970,     0,
     763,     0,   960,   959,   767,     0,   963,     0,   768,   769,
     770,   771,     0,     0,     0,     0,     0,   862,     0,     0,
     863,  1085,     0,  1088,  1084,     0,     0,     0,   864,   896,
     865,  1103,  1108,  1105,  1111,  1104,  1102,  1109,  1106,  1100,
    1107,  1101,  1110,     0,     0,   870,     0,     0,     0,     0,
     871,  1120,  1124,  1125,     0,  1122,   872,     0,  1126,   873,
     893,     0,     0,     0,   898,   899,   900,  1141,  1155,     0,
       0,  1162,  1158,     0,     0,     0,  1153,  1152,  1166,  1165,
       0,     0,  1182,     0,     0,  1178,     0,  1186,     0,     0,
    1179,     0,  1207,   201,   201,     0,     0,     0,   201,     0,
    1236,     0,  1235,     0,     0,     0,     0,  1223,     0,     0,
       0,     0,  1227,     0,     0,     0,  1234,     0,     0,     0,
       0,     0,  1225,  1237,     0,     0,     0,  1224,   201,   201,
     201,     0,   217,   219,   221,     0,   222,     0,    60,     0,
    1299,     0,  1304,   157,  1319,     0,  1310,  1311,     0,  1313,
    1314,     0,   166,   167,  1305,  1327,  1328,     0,   225,     0,
     239,     0,     0,     0,     0,   273,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   315,   157,
       0,     0,     0,     0,   157,     0,   335,     0,   334,   402,
     401,     0,     0,     0,   157,     0,   165,   447,   445,   449,
     453,     0,     0,     0,   165,     0,   488,   472,     0,   483,
     485,   168,     0,     0,   364,     0,     0,    60,     0,   462,
      83,    82,     0,     0,   984,     0,     0,     0,     0,     0,
       0,   996,     0,     0,     0,     0,     0,     0,  1012,  1013,
       0,     0,     0,     0,  1023,     0,  1029,  1030,  1032,  1034,
       0,  1038,  1049,  1050,  1051,     0,  1053,  1058,  1060,  1061,
    1059,   971,     0,  1040,     0,  1039,   983,     0,     0,  1045,
       0,  1047,     0,  1046,  1067,  1048,  1055,     0,     0,   384,
       0,     0,  1202,  1198,   593,   594,     0,   591,   587,     0,
     178,   178,   178,   179,   180,   605,   606,   174,   173,     0,
     178,   178,   178,     0,   613,   612,   611,   623,   175,   178,
     178,   178,   176,   177,   178,   178,     0,   178,   178,     0,
     175,     0,   636,     0,   642,     0,   641,   640,   639,     0,
       0,     0,   666,     0,   665,     0,   638,   637,     0,     0,
       0,     0,   175,   175,   172,     0,     0,   172,     0,     0,
       0,   178,   178,   740,     0,   178,   178,   745,     0,   191,
     192,   193,   194,   195,   196,     0,    89,    90,    88,   775,
       0,     0,     0,     0,     0,   916,   914,   909,     0,   919,
     903,   920,   906,   918,   912,   901,   915,   904,   902,   921,
     917,     0,     0,   789,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   820,     0,     0,
       0,     0,   831,   833,     0,     0,   838,   837,     0,     0,
     181,     0,     0,   157,     0,   846,     0,     0,     0,     0,
     851,   852,   853,     0,     0,     0,   859,   874,   878,   880,
     883,   882,     0,     0,     0,   887,   924,   926,     0,   925,
     761,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1068,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   765,     0,     0,     0,
       0,   861,     0,   157,  1081,  1079,  1077,     0,     0,   157,
    1083,   866,     0,     0,     0,     0,  1119,     0,     0,  1127,
     891,   892,     0,   894,  1161,  1163,  1160,  1159,  1150,     0,
       0,     0,  1183,     0,     0,  1187,  1195,   203,   204,   205,
     206,   202,  1217,  1216,     0,     0,     0,  1221,     0,     0,
       0,  1220,     0,     0,     0,  1219,  1218,   201,     0,     0,
       0,  1226,     0,     0,     0,  1233,     0,     0,     0,  1232,
       0,     0,     0,  1231,     0,     0,     0,  1230,     0,     0,
       0,     0,     0,  1247,     0,  1282,  1281,  1283,     0,     0,
       0,  1229,     0,     0,     0,  1228,  1242,  1241,  1243,  1239,
    1238,  1240,  1285,  1284,  1286,     0,     0,     0,  1301,  1302,
       0,  1317,   157,  1312,  1315,     0,     0,   157,     0,     0,
       0,   236,     0,     0,     0,     0,   277,     0,     0,     0,
       0,     0,     0,     0,   312,   311,     0,     0,   303,   314,
     316,     0,   326,   328,   327,   325,   157,   333,     0,     0,
       0,   165,   157,     0,     0,     0,     0,   467,   481,   490,
       0,   484,   170,   171,   169,   477,     0,   493,     0,     0,
     460,   465,    81,     0,     0,     0,     0,     0,     0,   157,
     985,     0,     0,     0,   990,     0,   157,     0,   997,   998,
       0,  1000,  1001,  1002,     0,     0,     0,  1008,     0,  1014,
       0,     0,     0,  1018,  1019,     0,     0,     0,  1024,  1025,
       0,     0,  1028,  1031,  1033,  1035,     0,     0,  1052,  1054,
     975,  1063,   976,     0,     0,  1065,  1056,     0,     0,   546,
     547,     0,   588,   592,     0,   602,   603,   604,   178,   608,
     609,   610,     0,     0,     0,   617,   618,   172,     0,     0,
       0,   178,   624,   625,   626,   627,   629,   175,   632,   633,
       0,   178,     0,     0,     0,   175,   175,   172,     0,     0,
       0,     0,     0,     0,     0,   175,   175,   172,     0,     0,
     172,     0,     0,     0,     0,   175,   175,   172,     0,     0,
       0,     0,   664,     0,   668,     0,     0,     0,     0,     0,
     175,   175,   172,     0,     0,   172,     0,     0,     0,     0,
       0,   175,   175,   172,     0,     0,   172,     0,   175,   644,
     645,   646,   647,   649,     0,   652,   653,     0,   175,     0,
       0,   738,   739,   178,   742,   743,     0,   774,   157,   776,
       0,     0,     0,     0,     0,     0,     0,   908,   905,   911,
     910,   907,   913,     0,     0,     0,     0,     0,   157,   794,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   811,   812,   813,     0,   817,   814,   816,
       0,     0,   822,   821,   823,     0,     0,     0,     0,     0,
       0,   157,   157,   836,   187,   183,   188,   182,   185,   184,
     186,   842,   843,     0,     0,   845,   847,   157,   157,     0,
     854,   857,   157,   157,   881,   885,   927,   762,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1112,   952,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   953,     0,     0,     0,     0,     0,
     772,   773,   157,   165,  1082,     0,     0,  1086,  1087,     0,
       0,   868,     0,   157,     0,  1121,  1123,   890,     0,  1180,
    1181,  1184,  1185,   201,   201,   201,   201,   201,   201,   201,
     201,   201,  1287,  1245,  1244,  1246,  1279,  1278,  1280,  1276,
    1275,  1277,  1270,  1269,  1271,  1267,  1266,  1268,  1249,  1248,
    1252,  1251,  1253,  1250,  1261,  1260,  1262,  1258,  1257,  1259,
       0,     0,  1296,     0,  1318,     0,   157,     0,  1322,     0,
       0,   240,     0,   237,     0,     0,     0,     0,     0,   284,
       0,     0,     0,     0,     0,   157,     0,   318,   145,     0,
     422,     0,   443,   165,   168,     0,     0,   456,     0,   494,
     495,     0,   459,     0,     0,     0,     0,     0,   157,   986,
     168,   168,   168,   157,   991,   168,   165,   168,   168,   157,
    1003,   168,   168,   168,   157,  1009,   168,   168,   157,     0,
     168,   157,   168,   168,   157,   168,   157,  1042,  1043,     0,
       0,   545,     0,   607,   614,   615,   616,     0,   620,   621,
     622,   628,   178,   175,   634,   655,   656,   657,   658,   659,
       0,   661,   662,   175,   175,   718,   719,   720,   721,   723,
       0,   726,   727,     0,   175,   729,   730,   731,   732,   733,
       0,   735,   736,   175,     0,     0,     0,   175,   175,   172,
       0,     0,     0,     0,     0,     0,   175,   175,   172,     0,
       0,     0,     0,     0,     0,   175,   175,   172,     0,     0,
       0,   175,   178,   178,   178,   178,   178,     0,   178,   178,
       0,   175,   175,   178,   178,   178,   178,   178,     0,   178,
     178,     0,   175,   648,   175,     0,   654,     0,     0,   741,
       0,   777,   168,     0,     0,   168,     0,     0,     0,   787,
     168,   790,   791,   168,   793,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   815,   818,
     819,     0,   168,     0,     0,     0,   834,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1113,  1091,     0,  1098,  1099,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     157,     0,     0,    86,     0,     0,   961,   962,   165,     0,
       0,     0,  1089,   867,   869,   165,   157,  1173,  1273,  1272,
    1274,  1264,  1263,  1265,  1255,  1254,  1256,  1288,     0,  1298,
    1329,     0,     0,  1324,  1323,   241,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   304,   168,   423,   427,
     444,   446,     0,   454,   489,   157,     0,     0,     0,     0,
       0,     0,   982,   987,   989,   988,   992,   993,   994,   995,
     999,  1004,  1005,  1006,  1007,  1010,  1011,  1015,   165,   168,
    1021,   165,  1022,  1026,   165,  1036,   165,     0,   157,     0,
     544,     0,   619,   630,   178,   175,   663,   722,   175,     0,
     728,   175,   737,   178,   178,   178,   178,   178,     0,   178,
     178,   175,   178,   178,   178,   178,   178,     0,   178,   178,
     175,   178,   178,   178,   178,   178,     0,   178,   178,   175,
     178,   678,   679,   680,   681,   683,   175,   686,   687,     0,
     178,   178,   707,   708,   709,   710,   712,   175,   715,   716,
       0,   178,   650,   175,   746,   747,   157,   779,     0,   168,
     781,     0,   157,     0,   788,   792,   157,     0,   799,   800,
     801,   802,   806,   807,   803,   804,   805,     0,     0,   168,
     826,     0,   157,     0,     0,   839,   168,     0,     0,   168,
     168,     0,   884,     0,   189,   189,     0,     0,   189,     0,
     189,  1068,     0,     0,     0,     0,     0,     0,     0,     0,
    1090,     0,     0,   189,   189,     0,     0,     0,     0,     0,
       0,     0,     0,   954,     0,     0,     0,  1068,    87,     0,
     189,     0,  1115,   157,   157,     0,   165,     0,   223,  1331,
    1330,     0,     0,   245,     0,     0,     0,     0,     0,     0,
       0,     0,   319,   455,     0,   338,     0,   978,     0,   197,
       0,  1016,  1017,  1020,  1027,  1037,   377,     0,   338,     0,
     631,   660,   724,   175,   734,   669,   670,   671,   672,   673,
     175,   675,   676,   178,   698,   699,   700,   701,   702,   175,
     704,   705,   178,   689,   690,   691,   692,   693,   175,   695,
     696,   178,   682,   178,   175,   688,   711,   178,   175,   717,
     651,     0,   168,   782,     0,     0,     0,     0,     0,   808,
     809,   824,     0,     0,     0,   835,   840,     0,   848,   849,
     841,   168,     0,   190,  1068,  1068,    86,     0,  1068,     0,
    1068,   928,   157,     0,  1093,     0,  1096,  1136,  1097,  1095,
    1092,     0,  1068,  1068,    86,     0,     0,  1068,  1068,     0,
       0,  1068,   957,   955,   956,   935,  1068,  1068,  1115,  1131,
       0,  1080,  1078,  1117,     0,     0,     0,     0,   247,   279,
     280,     0,     0,     0,   278,     0,   338,   339,   341,   340,
     388,     0,     0,   198,   200,   199,   980,   981,   338,   390,
       0,   725,   178,   677,   178,   706,   178,   697,   684,   178,
     713,   178,     0,   778,   168,   168,     0,   168,     0,   168,
     168,     0,   168,     0,  1068,   941,   937,  1068,     0,   942,
       0,   936,  1068,     0,  1094,     0,   939,   938,  1068,     0,
       0,   933,   931,  1068,   157,   932,   934,   940,  1131,  1075,
       0,     0,  1116,  1129,  1118,  1172,     0,     0,   286,   287,
     285,   305,   308,   306,     0,     0,   389,   977,   157,   391,
     590,   674,   703,   694,   685,   714,   168,   780,   786,     0,
     798,   795,   825,   830,     0,   844,     0,   946,   930,    86,
       0,   944,  1137,     0,   929,    86,     0,   945,     0,  1076,
    1133,  1135,     0,  1128,     0,     0,     0,     0,     0,     0,
     197,     0,   783,   157,   796,   827,   858,  1068,     0,     0,
    1068,     0,   168,  1134,  1130,   246,     0,     0,     0,     0,
       0,   979,   757,   157,   784,   797,   157,   828,   948,     0,
    1068,   947,     0,     0,   248,   298,     0,   297,     0,   785,
     829,    86,   949,    86,  1068,   296,   295,  1068,  1068,   943,
     951,   950
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    56,  1498,   175,   157,   965,  2617,  2618,   450,   451,
     452,   453,   158,   159,   160,   734,   726,    96,   860,   473,
    1284,  1785,  1429,  1444,  1425,  2021,  2724,  1495,  2786,  1662,
     358,   810,   813,   816,   825,    66,   382,   388,   392,   395,
      71,   398,    78,   414,   410,   404,   421,    87,   430,    97,
     103,   435,   437,   439,   507,   918,  1756,   441,   444,   110,
     460,   161,   163,  2780,   179,   181,   224,   960,   999,   496,
     907,   498,   508,   910,   915,   510,   512,   921,   515,   923,
     526,   926,   928,   529,   533,   537,   539,   542,   546,   582,
     578,  1349,   560,   946,   951,   943,  1337,   957,   563,   592,
     595,   600,   574,   570,   605,   613,   990,   992,   994,   996,
     618,  1001,   227,   620,  1851,   246,   623,   625,   629,   634,
     642,   264,  1418,   653,   272,   664,  1434,   666,   674,  1054,
    1452,  1049,  1912,  1464,  1462,  1914,  1050,  1454,  1456,   680,
     683,   678,   274,   282,   284,   721,  1131,  1521,  1120,  1616,
    2064,  1134,  1138,  1129,   985,  1391,  1395,  1403,  1405,  2048,
     290,  1147,  1150,  1158,  2373,  2374,  2375,  2049,  2759,  2760,
    1180,  1186,  1189,  2842,  2843,  2839,  2840,  2890,  2376,  2377,
     298,   304,   312,   748,   743,   317,   322,   324,   758,   765,
    1215,  1220,   819,   807,   330,   256,   252,   334,   772,   340,
     781,   796,   797,  1257,  1252,  1681,  1242,  1703,  1675,  1715,
    1711,  1671,  1697,  1693,  1667,  1689,  1685,  1246,   801,   783,
     346,   347,   362,  1270,   365,   371,   837,   840,   834,   373,
     376,   845
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2695
static const yytype_int16 yypact[] =
{
    5173,   122,    71,    24, -2695, -2695,   965,   -88,  1032,  1403,
    1048,   493,  3535,   418,   327,     8,   129,   325,  5373,   527,
    2391, -2695,    32,    -5,    46,  1456,   477,  1506,   290,    20,
     503,    52,   602,   485,   606,  1119,   269,   905,   566,   504,
      52, -2695,   141,    39,  1158, -2695,   359,   590,  1088, -2695,
     585, -2695,    31,  1888,   389,   114,   619,   200,   140,   375,
     662,   669,   127,   736,   -13,   807, -2695, -2695, -2695,   879,
     147, -2695,   343,    75,   327,   -16,    54,   207, -2695,   762,
     147, -2695, -2695,   147,   147,   109,   147, -2695, -2695, -2695,
   -2695,   147, -2695, -2695, -2695, -2695, -2695, -2695,    33,   753,
     781,   824,   118, -2695,   147,  1405,   147,   147,  1081,   147,
   -2695, -2695, -2695,   653, -2695, -2695, -2695, -2695,  4614, -2695,
   -2695, -2695, -2695, -2695, -2695,   147, -2695, -2695, -2695, -2695,
   -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695,  1644, -2695,
     147, -2695,   861, -2695, -2695,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   327, -2695, -2695, -2695, -2695, -2695,
     561, -2695,   818,  1723,   778,   277,   611,   733,   305,  4102,
     134,  4665,  4586,   894,  4614,  3724, -2695,   713,   376,   845,
     964,   913,   184,   223,  1045,   675,   997,    52,   612, -2695,
     982, -2695,   810,   768,   306, -2695,   217, -2695,   728, -2695,
     -27,   978,   337, -2695, -2695,  4863, -2695, -2695, -2695,  1004,
    1054,  1074, -2695, -2695, -2695, -2695,    25, -2695, -2695, -2695,
   -2695,   -68, -2695, -2695,  4863,  4223, -2695,  1123, -2695,     6,
    4863,  1142, -2695,  1148,  4863,  1170, -2695,    42, -2695,  1171,
    1174,   173, -2695,   147, -2695,  1181,   361,  1201,   972,    62,
    1207,    60, -2695, -2695, -2695,  1210,  1211,   327,   327,   147,
     147, -2695, -2695,  1220, -2695, -2695, -2695, -2695, -2695, -2695,
    3425,   871, -2695,  1224,    41,   147,  4863,   147, -2695,  1238,
   -2695, -2695, -2695, -2695, -2695,   147,   116,   327,  1147,   147,
    1644,   147, -2695,  1243, -2695,  4771, -2695, -2695,  1109,  1251,
    1257,   147, -2695,  1263, -2695, -2695,   -84,  1265,  4863,  1268,
   -2695,  1215,   147,  1195, -2695,   842,  1183,  1634,   380,  1291,
   -2695, -2695, -2695, -2695, -2695, -2695, -2695,  1308, -2695,   505,
     346,   369,   427,    82,   147,  1311,   147,   212, -2695,   147,
    1037,  1322, -2695,   147,   147, -2695,    22,    15,    26,  1326,
    1644, -2695, -2695, -2695,  1072,   147, -2695, -2695, -2695, -2695,
   -2695,   147, -2695,  1329,  1349, -2695,   147,  1229, -2695, -2695,
   -2695, -2695, -2695, -2695,   147, -2695, -2695,   147, -2695, -2695,
     597,   597, -2695,  1353, -2695, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695, -2695, -2695, -2695,  1165,   147,   147,  1368,  1371,
    1375, -2695, -2695,   147,   147,   147,   147,   147,   147,   147,
   -2695,   147, -2695,  1381, -2695, -2695, -2695, -2695,   751, -2695,
    1382, -2695,  4863,  1385, -2695,   147, -2695, -2695, -2695,   147,
    1404,  1411,  1411,  4863,   147,   147,   147,   147,   147,   147,
   -2695,   147,  4614,  1405,   147,   147, -2695, -2695, -2695, -2695,
   -2695, -2695, -2695,  1405,   147, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695, -2695, -2695, -2695, -2695,  1423, -2695,  1153,   705,
   -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695,   -37,
   -2695, -2695, -2695,  1264, -2695,   435,    17,    17, -2695, -2695,
   -2695,  1505, -2695,  1507, -2695, -2695,  -105, -2695,  1328, -2695,
   -2695, -2695,  1335, -2695, -2695,  1644, -2695,   147,   147, -2695,
    4863,  4863,  1644, -2695, -2695,  1644, -2695, -2695, -2695, -2695,
    1644, -2695, -2695,  4863,  1644,   147, -2695, -2695,  4863, -2695,
    1509,   553,  1310,    13, -2695, -2695,  1312,  4863,    40, -2695,
   -2695, -2695, -2695, -2695, -2695,  1510,  1512, -2695, -2695, -2695,
   -2695, -2695, -2695, -2695, -2695,  1514, -2695,  1317, -2695,   -50,
   -2695,   147, -2695, -2695,   792, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695, -2695, -2695, -2695, -2695,   -27, -2695, -2695, -2695,
   -2695, -2695, -2695,  1330,  1331, -2695, -2695,  1458,  1459,  1463,
   -2695, -2695,  1299, -2695,   147,  1525,  1300,  4771, -2695,  1644,
   -2695, -2695,  1528, -2695, -2695, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695, -2695, -2695, -2695, -2695, -2695,  4863,  4863,  4863,
    4863, -2695, -2695, -2695, -2695, -2695, -2695,  1531, -2695, -2695,
    1532,  1537,   327, -2695, -2695,  1538,  1539,  1341,   147, -2695,
     285,  1461,  1462,  1464, -2695,  1545, -2695,   757,  1465,     4,
     519,  4033,   638,  1548, -2695,  1550, -2695,  1551, -2695,   112,
   -2695,  1553,  1559, -2695,  1558, -2695, -2695, -2695,   147, -2695,
    4771,  4554,  1566,   411,  1562,   671,  1468, -2695, -2695, -2695,
      47,   678,  1565,  1567,    45,   147,   400,   593,   637,  4863,
     327,  2382,   889,    48,   216,   353,    10, -2695,  1554,  1560,
    1571, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695, -2695, -2695, -2695,   147, -2695, -2695, -2695,   147,
     147,   147,   147, -2695, -2695,   147,  1644,   147, -2695,   147,
    1405,   147,  1577,  1644, -2695, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695,  1578,    50,   175, -2695, -2695, -2695,  1580, -2695,
   -2695, -2695, -2695,  1490, -2695,  1588,  1594,  1513,  1533,  1534,
    1593, -2695,  1613, -2695,  1631,  1552,  1632,   674,   936,   562,
     486,   667,   944,   684,  1638,   690, -2695, -2695,  1640,  1648,
    1652, -2695, -2695,  1653, -2695, -2695, -2695, -2695,  1654, -2695,
   -2695,  1655, -2695, -2695,  1656, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695, -2695,   147,   147, -2695,   147,   883,   147,   147,
   -2695,  4771,  1601,  1664, -2695,  1110,  1665, -2695,  1297,  1667,
   -2695, -2695,   367,   147,   147, -2695,  1647, -2695, -2695,  1668,
    1235,   147,  1666,   711, -2695, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695,  1671,  1672,
     147,   147,   147,   147,   147,   147,   147,  1675,   327,  1676,
    1678,  1644,  4863, -2695, -2695, -2695, -2695, -2695,  1644, -2695,
   -2695,   147,   147,   147,  4863,   147,  1405,   147, -2695,   147,
   -2695, -2695, -2695, -2695, -2695,  1680,  1682, -2695, -2695, -2695,
   -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695,
     134, -2695,   147, -2695, -2695, -2695, -2695, -2695, -2695, -2695,
   -2695,  4863,   147,  1644,  1644,   367,   367,   367,  1644,  1405,
     147,  1644, -2695, -2695, -2695,   147, -2695,   -50,  1517,  1686,
    1679, -2695, -2695,  1644, -2695,  1535,  1540, -2695,  1692,  1694,
   -2695,  1696,  1343,  1673,  1674, -2695,   147,  2481,   551,   830,
   -2695, -2695, -2695,   147,   279,  1219, -2695,  1437, -2695,  2382,
    1440,   550,  1415,    79, -2695, -2695,   147, -2695, -2695, -2695,
   -2695, -2695, -2695, -2695, -2695, -2695, -2695,   147,  1708, -2695,
   -2695, -2695, -2695,   367, -2695, -2695, -2695, -2695, -2695,  1710,
    1711,  4737, -2695, -2695,  1712,  1713,   147,  1715,  1720,  1724,
     -26,   -26,   -99,  1726,  1727,  1733,  1736,  1736,  1736,  1436,
    1472,  1738,  1741,  1749,    34,    34,   -99,  1755,  1756,   -99,
    1757,  1758,  1760,  1762,  1760,  1762,  4705,  1765,  1768, -2695,
   -2695,  1760,  1762,   790, -2695,  1775,  1776,  1777,  1779,   -26,
     -99,  1781,  1783, -2695,  1784, -2695, -2695,  1644,  1274,  1253,
    1543,  1546,  1555,  1689,   565,  1563,  1793,    11,  1639,  1693,
    1592,  1106,  1761,  1568,  1569,  1695,  1799,  1585,   205,   136,
     526,  1556,  4863,  2382,  1773,   -73,  1561,  1598,  1815,    43,
   -2695, -2695,   382,  1817,  1818, -2695, -2695, -2695,  1820,  1602,
     209,  2382,  1610, -2695, -2695, -2695,   327,  1832,  1833,   147,
   -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695,    -2,
   -2695,  1007, -2695, -2695, -2695,   147, -2695,   147, -2695, -2695,
   -2695, -2695,   147,   147,   147,   671,  4863, -2695,  1834,  1373,
   -2695, -2695,   147, -2695, -2695,   147,  4863,   147, -2695, -2695,
   -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695, -2695,   327,   147, -2695,   147,   671,  1839,  1844,
   -2695, -2695, -2695, -2695,   147,   147, -2695,   327, -2695, -2695,
   -2695,   646,  1845,  1847, -2695, -2695, -2695, -2695, -2695,   147,
     147, -2695, -2695,  1405,   147,   147, -2695, -2695, -2695, -2695,
    1849,   147, -2695,   147,  1742, -2695,   147, -2695,   147,  1743,
   -2695,  1852, -2695,  1067,  1067,   691,   720,   769,  1067,  1853,
   -2695,   796, -2695,   805,   836,   862,   864, -2695,  1858,  1859,
     904,  1861, -2695,  1863,  1864,  1862, -2695,   921,   924,  1865,
    1866,  1868, -2695, -2695,  1869,  1871,  1874, -2695,  1067,  1067,
    1067,   147, -2695, -2695, -2695,   147, -2695,   147,   649,  4863,
   -2695,   147, -2695,  1644, -2695,  4771, -2695, -2695,  1875, -2695,
   -2695,  1879, -2695, -2695, -2695, -2695,  1827,  1147, -2695,   147,
    1846,   147,   147,   147,  1034, -2695,  1882,   147,   147,  1884,
     147,   147,   147,   147,    -7,  1885,   327,   327, -2695,  1644,
     147,  1889,  1892,  1895,  1644,  4863, -2695,   147, -2695, -2695,
   -2695,   147,   147,   147,  1644,  4863,   367, -2695, -2695, -2695,
   -2695,  1405,   147,  1896,   367,   147,   614, -2695,  1887, -2695,
   -2695,   680,  3684,   147, -2695,   147,  1901,  1873,   147, -2695,
   -2695, -2695,  1902,  1276,  4614,  1659,  1661,  1662,   101,  4863,
    1669, -2695,    89,  1737,   169,  1677,  1683,   251, -2695, -2695,
     806,  1739,   763,   -98,  2382,   586, -2695,  1907,  1658, -2695,
     909, -2695, -2695, -2695, -2695,  2382,  1702, -2695, -2695, -2695,
   -2695, -2695,   147, -2695,   147, -2695, -2695,   147,   147, -2695,
     147, -2695,   147, -2695, -2695, -2695, -2695,  1716,   147, -2695,
     147,    53, -2695, -2695, -2695, -2695,  1908,  1915, -2695,   147,
     -26,   -26,   -26, -2695, -2695, -2695, -2695, -2695, -2695,  1917,
     -26,   -26,   -26,   501, -2695, -2695, -2695, -2695,    34,   -26,
     -26,   -26, -2695, -2695,   -26,   -26,  1918,   -26,   -26,  1919,
      34,   560, -2695,   896, -2695,   629, -2695, -2695, -2695,  1920,
    1921,  1924, -2695,  1339, -2695,  1379, -2695, -2695,  1650,  1927,
    1929,  1930,    34,    34,   -99,  1932,  1933,   -99,  1934,  1936,
    1937,   -26,   -26, -2695,  1938,   -26,   -26, -2695,  1939, -2695,
   -2695, -2695, -2695, -2695, -2695,   327, -2695, -2695, -2695,  4614,
    1096,   147,  1334,  1420,   379, -2695, -2695, -2695,  1006, -2695,
   -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695,
   -2695,  1941,   147, -2695,   327,  1942,   147,  4863,   327,  1431,
    1691,  1701,   339,   356,  1703,   449,  1624,  1630,  1947,  1948,
    1949,   565,  1950,  1951,  1952,  1641,  1643,  1398,  1953,   147,
    1357,  1497, -2695, -2695,   327,  4863, -2695, -2695,  4863,   147,
      49,  1959,   147,  1644,   327, -2695,  1961,  4863,  4863,   147,
   -2695, -2695, -2695,   327,   327,  4863, -2695, -2695, -2695, -2695,
   -2695, -2695,  4863,   147,   327, -2695, -2695, -2695,   147, -2695,
   -2695,  1962,   147,  1731,   530,   147,  1740,   147,   546,   147,
   -2695,   147,  1744,  1745,   147,   147,   147,   147,   147,   147,
     147,   147,    18,   147,   147,  1759, -2695,   147,   147,   147,
     147, -2695,  4863,  1644,  1964,  1966,  1967,   147,   147,  1644,
   -2695,   147,   147,   147,  4863,   671, -2695,   147,   147, -2695,
   -2695, -2695,  1969, -2695, -2695, -2695, -2695, -2695, -2695,  1968,
     147,   147, -2695,   147,   147, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695, -2695, -2695,  1970,  1971,  1984, -2695,  1985,  1986,
    1989, -2695,  1990,  1991,  1993, -2695, -2695,  1067,  1994,  1995,
    1997, -2695,  1998,  2000,  2002, -2695,  2003,  2004,  2006, -2695,
    2007,  2008,  2010, -2695,  2011,  2012,  2014, -2695,  2015,  2018,
    2019,  2020,  2023, -2695,  2024, -2695, -2695, -2695,  2025,  2026,
    2028, -2695,  2029,  2040,  2042, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695, -2695, -2695, -2695,   147,   147,   147, -2695, -2695,
     147, -2695,  1644, -2695, -2695,  1147,   147,  1644,   147,   147,
     147, -2695,   147,   147,  2054,   147, -2695,   147,   147,  2057,
     147,   147,   147,   147, -2695, -2695,  2061,  4863, -2695, -2695,
   -2695,   147, -2695, -2695, -2695, -2695,  1644, -2695,  1406,   147,
    1406,   367,  1644,  4863,   147,   147,  2062, -2695, -2695, -2695,
     147, -2695, -2695, -2695, -2695, -2695,  4863, -2695,  4863,   147,
   -2695, -2695,   -50,  2063,  2064,  2065,  2066,  2067,  4863,  1644,
   -2695,  4863,  4863,  4863,  4614,  4863,  1644,  4863, -2695, -2695,
    4863, -2695, -2695,  4614,  4863,  4863,  4863,  4614,  4863, -2695,
    4863,  4863,   147, -2695, -2695,  4863,  4863,  4863, -2695, -2695,
    4863,  4863, -2695, -2695, -2695, -2695,  4863,  4863, -2695, -2695,
   -2695, -2695, -2695,   147,   147, -2695, -2695,  2069,   147, -2695,
   -2695,  2070, -2695, -2695,   147, -2695, -2695, -2695,   -26, -2695,
   -2695, -2695,  2073,  2075,  2076, -2695, -2695,   -99,  2079,  2080,
    2081,   -26, -2695, -2695, -2695, -2695, -2695,    34, -2695, -2695,
    2083,   -26,  2086,  2088,  2089,    34,    34,   -99,  2084,  2091,
    2093,  1717,  2095,  2097,  2098,    34,    34,   -99,  2100,  2101,
     -99,  2102,  2103,  2104,  2105,    34,    34,   -99,  2107,  2108,
    2109,   993, -2695,   996, -2695,  1052,  1730,  2110,  2111,  2112,
      34,    34,   -99,  2114,  2115,   -99,  2117,  1734,  2118,  2119,
    2121,    34,    34,   -99,  2116,  2123,   -99,  2124,    34, -2695,
   -2695, -2695, -2695, -2695,  2127, -2695, -2695,  2129,    34,  2131,
    2136, -2695, -2695,   -26, -2695, -2695,  2137, -2695,  1644, -2695,
    4863,   147,   147,  4863,   147,  2138,  1253, -2695, -2695, -2695,
   -2695, -2695, -2695,  2141,  4863,   327,  2146,  4863,  1644, -2695,
    2147,  1253,   147,   147,   147,   147,   147,   147,   147,   147,
     147,  2149,  2150, -2695, -2695, -2695,  2152, -2695, -2695, -2695,
    2151,  2155, -2695, -2695, -2695,   147,  4863,   147,  2158,  1253,
     327,  1644,  1644, -2695, -2695, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695, -2695,   147,  1405, -2695, -2695,  1644,  1644,   147,
   -2695, -2695,  1644,  1644, -2695, -2695, -2695, -2695,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,  2304, -2695,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,  2898,  2159,   147, -2695,   147,   147,   147,  2156,  2162,
   -2695, -2695,  1644,   367, -2695,  2164,  2165, -2695, -2695,  1405,
     147, -2695,  2167,  1644,  4863, -2695, -2695, -2695,  2168, -2695,
   -2695, -2695, -2695,  1067,  1067,  1067,  1067,  1067,  1067,  1067,
    1067,  1067, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695,
    1253,   147, -2695,   147, -2695,   147,  1644,   147, -2695,  1405,
     147, -2695,   147, -2695,  1978,  2169,  2170,   147,   147, -2695,
     147,   147,   147,   147,  2173,  1644,  4863, -2695, -2695,   147,
   -2695,   147, -2695,   367,   680,   147,  2174, -2695,   147, -2695,
   -2695,  4614, -2695,  2176,  2177,  2178,  2179,  2181,  1644, -2695,
     680,   680,   680,  1644, -2695,   680,   367,   680,   680,  1644,
   -2695,   680,   680,   680,  1644, -2695,   680,   680,  1644,  4863,
     680,  1644,   680,   680,  1644,   680,  1644, -2695, -2695,  2183,
    4614,  2184,   147, -2695, -2695, -2695, -2695,  2186, -2695, -2695,
   -2695, -2695,   -26,    34, -2695, -2695, -2695, -2695, -2695, -2695,
    2187, -2695, -2695,    34,    34, -2695, -2695, -2695, -2695, -2695,
    2188, -2695, -2695,  2189,    34, -2695, -2695, -2695, -2695, -2695,
    2191, -2695, -2695,    34,  2192,  2193,  2194,    34,    34,   -99,
    2197,  2198,  2199,  2200,  2201,  2202,    34,    34,   -99,  2234,
    2236,  2237,  2239,  2240,  2241,    34,    34,   -99,  2243,  2244,
    2245,    34,   -26,   -26,   -26,   -26,   -26,  2247,   -26,   -26,
    2248,    34,    34,   -26,   -26,   -26,   -26,   -26,  2249,   -26,
     -26,  2250,    34, -2695,    34,  2251, -2695,  2252,  2253, -2695,
    4771, -2695,   680,  2254,  4863,   680,   147,  4863,  2256, -2695,
     680, -2695, -2695,   680, -2695,  4863,  2257,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147, -2695, -2695,
   -2695,  4863,   680,   147,  4863,  2258, -2695,  1405,  1405,  4863,
    1405,  1405,  4863,  4863,  1405,  1405,   147,   147,   147,   147,
     147,   147,  1253,   147,   147,   147,  1660,  1670,  1704,  1722,
    1750,  1810,  1825,  2304, -2695,  1840, -2695, -2695,  1253,   147,
     147,   147,   147,  1253,   147,   147,   147,   147,   147,   147,
    1644,   147,  1714,  1253,   147,   147, -2695, -2695,   367,   327,
    4863,  4863, -2695, -2695, -2695,   367,  1644,  2259, -2695, -2695,
   -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695,   147, -2695,
   -2695,  1405,   147, -2695, -2695, -2695,  1233,  2260,  2261,  2263,
    2264,   147,   147,   147,  2265,  1406, -2695,   680, -2695, -2695,
   -2695, -2695,  2266, -2695, -2695,  1644,  2268,  2273,  2269,  2274,
    4863,  2275, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695,   367,   680,
   -2695,   367, -2695, -2695,   367, -2695,   367,  2276,  1644,  2278,
   -2695,   147, -2695, -2695,   -26,    34, -2695, -2695,    34,  2279,
   -2695,    34, -2695,   -26,   -26,   -26,   -26,   -26,  2280,   -26,
     -26,    34,   -26,   -26,   -26,   -26,   -26,  2281,   -26,   -26,
      34,   -26,   -26,   -26,   -26,   -26,  2283,   -26,   -26,    34,
     -26, -2695, -2695, -2695, -2695, -2695,    34, -2695, -2695,  2284,
     -26,   -26, -2695, -2695, -2695, -2695, -2695,    34, -2695, -2695,
    2285,   -26, -2695,    34, -2695, -2695,  1644, -2695,  4863,   680,
   -2695,  2286,  1644,   147, -2695, -2695,  1644,   147, -2695, -2695,
   -2695, -2695, -2695, -2695, -2695, -2695, -2695,   147,   147,   680,
   -2695,  2287,  1644,   147,  1405, -2695,   680,   147,  1405,   680,
     680,  4863, -2695,   147,  2288,  2288,   147,   147,  2288,  1253,
    2288, -2695,  4863,   565,  2289,  2291,  2292,  2294,  2295,  2297,
   -2695,   327,  1253,  2288,  2288,   147,   147,  1253,   147,   147,
     147,   147,   147, -2695,  1405,   147,  2299, -2695, -2695,   147,
    2288,   327,    14,  1644,  1644,   327,   367,  2298, -2695, -2695,
   -2695,  2300,   147, -2695,  2301,  2303,  2305,  2307,  2308,  2310,
    2311,   147, -2695, -2695,  2312,     0,  4863, -2695,  2313,     2,
    4863, -2695, -2695, -2695, -2695, -2695, -2695,  2315,     0,   147,
   -2695, -2695, -2695,    34, -2695, -2695, -2695, -2695, -2695, -2695,
      34, -2695, -2695,   -26, -2695, -2695, -2695, -2695, -2695,    34,
   -2695, -2695,   -26, -2695, -2695, -2695, -2695, -2695,    34, -2695,
   -2695,   -26, -2695,   -26,    34, -2695, -2695,   -26,    34, -2695,
   -2695,   147,   680, -2695,  4863,  4863,   147,  4863,   147, -2695,
   -2695, -2695,  4863,  4863,   147, -2695, -2695,  4863, -2695, -2695,
   -2695,   680,  2318, -2695, -2695, -2695,  1253,   147, -2695,  2319,
   -2695, -2695,  1644,  2330, -2695,  2332, -2695, -2695, -2695, -2695,
   -2695,  2333, -2695, -2695,  1253,   147,  2334, -2695, -2695,   147,
    4863, -2695, -2695, -2695, -2695, -2695, -2695, -2695,    14,  1699,
    2382, -2695, -2695, -2695,   327,  2335,  2336,  2337, -2695, -2695,
   -2695,  2339,  2345,  2346, -2695,   124,     0, -2695, -2695, -2695,
   -2695,  2361,  4863, -2695, -2695, -2695, -2695, -2695,     0, -2695,
    2362, -2695,   -26, -2695,   -26, -2695,   -26, -2695, -2695,   -26,
   -2695,   -26,  4771, -2695,   680,   680,   147,   680,  2363,   680,
     680,   147,   680,   147, -2695, -2695, -2695, -2695,  2364, -2695,
     147, -2695, -2695,  2366, -2695,   147, -2695, -2695, -2695,  2365,
     147, -2695, -2695, -2695,  1644, -2695, -2695, -2695,  1699, -2695,
    1811,  1878,  2382, -2695, -2695, -2695,  2367,  2368, -2695, -2695,
   -2695, -2695, -2695, -2695,   994,   994, -2695, -2695,  1644, -2695,
   -2695, -2695, -2695, -2695, -2695, -2695,   680, -2695, -2695,  2370,
   -2695,  4614, -2695, -2695,  2371, -2695,  1253, -2695, -2695,  1253,
     147, -2695, -2695,   147, -2695,  1253,   147, -2695,  4863, -2695,
    1811, -2695,   327, -2695,  2375,  2384,   147,   147,   147,   147,
       2,  2385,  4614,  1644, -2695,  4614, -2695, -2695,   147,  2383,
   -2695,   147,   680, -2695, -2695, -2695,  2388,  2389,   147,  2390,
     147, -2695, -2695,  1644, -2695, -2695,  1644, -2695, -2695,  2394,
   -2695, -2695,  2395,  2396, -2695, -2695,  2397, -2695,  2398, -2695,
   -2695,  1253, -2695,  1253, -2695, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2695, -2695,    -3, -2695,   233,  -943, -1715, -1028,  1746, -2695,
     959,  -453,  1637,   -51,    29, -2695, -2695, -1761,  1606,  1557,
    -767,   826,  -946,   848,  1622, -2695, -1222, -2695,  -826, -1079,
   -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695, -2695, -2695,  -526,  -491, -2695, -2695, -2695, -2695,
   -2695, -2695, -2695, -2559, -2695, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695, -2695, -2695, -2695, -2695,   390, -2695, -2695, -2695,
   -2695, -2695, -2695, -2695, -2695, -2695, -2695,  -236,    51, -2695,
   -2695, -2695, -2695, -2695, -2695, -2695, -2695, -1540, -2695, -2695,
   -2695, -2695, -2695,  -701, -2695, -2695, -2695, -2695, -2695, -2695,
     536, -2695, -2695, -2695, -2695,  -109,  -664, -2221,  -488, -2695,
   -2695, -2695, -2695, -2695,  -549,  -542, -2695, -2695, -2694, -2695,
   -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695,  1519, -2695, -2695, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695, -2695,
   -2695, -2695
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1301
static const yytype_int16 yytable[] =
{
      70,  1996,   370,  1590,  1336,  1146,  1149,  2159,   109,  2161,
     898,   644,   111,   178, -1114,  1190,   919,   948,   390,   835,
     901,    67,    68,  2061,   111,   275,   831,    67,    68,   114,
     838,  2777,   309,  2783,    67,    68,   111,  1524,   433,  1754,
     333,  1499,    67,    68,   954,   728,   651,  1173,  1572,   364,
    1442,   165,   375,  1177,   166,   381,   249,    67,    68,   387,
    1566,  1141,   394,  1132,   311,   681,   397,   399,   626,   763,
     409,  1427,  1849,   416,   420,  2014,  1825,   423,    67,    68,
     424,   425,    58,   431,   167,   630,   276,   963,   432,  1211,
    1446,  1042,   168,  1449,   817,  1406,   924,  2015,   247,  2789,
    2016,   445,   449,   454,   455,   459,   461,   253,   277,   285,
    1191,  2017,   627,   426,  1484,  1808,  1192,    67,    68,    67,
      68,  1804,   465,   442,    59,  1057,   412,    67,    68,   116,
      67,    68,    67,    68,  2018,  1826,  1423,    67,    68,    67,
      68,   116,    60,    67,    68,  1663,  2891,   464,   443,  1676,
      67,    68,  2019,   116,   169,   740,   675,   474,   631,   916,
    1567,   925,  1212,   278,   908,  1424,  1043,   413,  1328,  1329,
    1330,  1556,    61,  1058,   676,   955,  1428,   656,  1407,  1722,
    1723,  1724,   506,  1525,   949,   764,   286,   527,    57,  1813,
     114,    62,  2778,   177,  2784,    63,  2913,   122,  1443,   380,
     917,   632,   327,  1827,   111,   378,   964,    79,   170,    64,
      67,    68,    67,    68,  1216,    67,    68,  2856,   119,   528,
    1568,   536,   909,   541,   545,   628,   120,   121,   741,  2859,
     119,  1554,  1181,   171,   581,   172,  1411,   601,   120,   121,
     633,   331,   119,   652,  1580,   567,   729,   164,   176,   614,
     120,   121,  1213,   730,   731,   248,   832,   677,  1526,   415,
     658,  1809,   281,   173,   753,  1142,   427,   428,   434,   316,
     405,  1817,  1557,   111,   313,  1755,   688,   689,   391,   818,
      67,    68,    67,    68,   571,   417,   287,  1217,   250,   732,
     379,  2779,   735,  2785,   737,   657,  1850,  1206,  1017,  1018,
    1573,   288,   739,   742,  1527,   745,   749,   411,   751, -1114,
    1059,   251,   836,  1591,   124,  1399,  1133,  1178,   761,  2851,
     645,   116,  1193,   839,  1214,   833,   124,    69,   771,   773,
     174,   111,   279,  2062,   363,   950,  1810,   747,   124,   254,
     682,  1182,   332,   956,  1179,  1581,  1019,   400,  1805,  1143,
     111,   820,   616,   822,   824,   602,   826,   111,   122,  1984,
     829,   830,   255,   154,   429,   289,   660,   597,   155,   156,
    2731,   844,   846,   111,    65,   154,  1986,  1218,   847,   280,
     155,   156,  1811,   850,   852,  1060,   418,   154,   406,  1183,
     116,   853,   155,   156,   854,  1061,  2755,   733,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,  1574,   341,
     119,  2020,   808,   864,   865,  1115,  1814,   374,   120,   121,
     869,   870,   871,   872,   873,   874,   875,  1062,   876,  1564,
     386,   111,   407,   408,   328,   811,  1184,  2852,  1555,  1558,
    1116,   798,   883,  1316,  1622,   823,   884,  1584,   116,  1219,
     162,   889,   890,   891,   892,   893,   894,   329,   895,   342,
     449,   899,   900,  1122,   603,  1282,   419,   116,   343,  1989,
     449,   902,   499,   180,   116,  1966,  1634,   568,   500,   119,
     513,   504,  2853,  1020,  1021,  1967,  1332,   120,   121,   514,
     116,   897,   265,   814,   604,  1393,    67,    68,  1818,   344,
     569,  1981,   799,  2815,  2816,  1123,   124,  2819,   283,  2821,
     686,   687,  1582,   912,  1862,  1863,   572,   501,   661,   662,
    1185,  2826,  2827,  2009,   931,   932,  2831,  2832,  1944,   273,
    2835,  1947,   104,    67,    68,  2836,  2837,   119,   804,   573,
     744,   617,   940,   502,   401,   120,   121,  1238,   116,    67,
      68,   299,   105,    67,    68,   154,   119,   944,  1022,  1773,
     155,   156,  1864,   119,   120,   121,  1002,  1777,  1023,  1024,
     323,   120,   121,  1882,  1883,   124,   326,  1117,   966,   119,
     945,   314,  1968,   809,   812,   815,  1985,   120,   121,   359,
     503,   315,   325,  2877,   348,   402,  2878,   561,  2102,   598,
    1025,  2881,   403,  1987,  1504,   106,  1044,  2884,  1239,   114,
     225,   997,  2887,   805,   913,  1575,   663,  1382,  1779,   377,
    1048,  1884,   599,   784,   154,   986,   855,   226,   372,   155,
     156,  1505,  1118,   124,   504,   505,  1969,   119,  1283,  1067,
      67,    68,  1902,  1903,  1124,   120,   121,   291,  1240, -1300,
    1187,  1640,   124,  1728,   383,  1016,  1122,   585,  1119,   124,
    1125,  1126,  1641,   800,   345,  1506,   292,   384,   293,  1145,
     114,  1507,  1151,   385,  2641,   124,  1152,  1508,   586,   486,
     579,  1045,   154,  1383,   786,  1066,  2928,   155,   156,  2931,
    1904,   562,   856,   587,   914,   107,  1990,  1509,  1123,  1865,
    1866,   154,  1144,  1782,  1783,  1157,   155,   156,   154,  2942,
    1828,  1384,   360,   155,   156,  1293,   806,  1135,  1510,  1829,
    1148,  1838,  1294,  2949,   154,  1051,  2950,  2951,  1243,   155,
     156,   114,  1197,   124,  1122,  1511,  1198,  1199,  1200,  1201,
     580,   389,  1202,   584,  1204,  1249,  1205,   449,  1207,  1153,
    1646,  1254,  1664,  1127,  1128,   878,   879,   547,  1885,  1886,
    1830,  1233,  1030,  2040,   606,   857,  1401,   422,  1512,  1241,
    1031,  1032,   548,  1154,  1867,   607,  1123,   122,  1784,  2045,
    1273,  1668,   154,   436,  1868,  1869,   438,   155,   156,  1244,
    1136,   294,   108,  1385,   549,  1468,   967,   968,  1560,   361,
    1052,   588,   608,  1469,  1470,  1561,  1250,  1513,  1457,   905,
      67,    68,  1255,  1665,   550,  1466,  1870,   300,  1033,  1831,
    1265,  1266,  1514,  1267,  1269,  1271,  1272,  1905,  1906,   440,
    1672,   551,  1819,  1887,  1515,   552,  1234,  1124,   122,  1155,
    1285,  1286,  1669,  1888,  1889,   794,  1386,  1290,  1291,  2172,
     295,  1471,   969,  1125,  1126,   462,   858,  1678,   970,  1387,
     589,   859,  1516,   553,   554,   475,  1682,  1297,  1298,  1299,
    1300,  1301,  1302,  1303,  1517,  1890,  1518,  1519,  1774,  1832,
    1137,   609,    67,    68,   487,  1012,    67,  1268,  1311,  1312,
    1313,  1673,  1315,   449,  1317,   296,  1318,  1686,   497,   122,
     906,  1891,  1907,   775,   297,   590,   509,   971,   511,  1892,
    1893,   564,  1908,  1909,   591,  1124,  1520,  1321,  1679,  1323,
     555,  2217,   610,  1690,   972,  1694,   538,  1683,  1174,  1325,
     556,  1125,  1126,   393,  2084,  1835,   449,  1333,  2318,   973,
    1156,  2230,  1335,  1160,  1910,   974,  1127,  1128,  1188,  1322,
    1245,  2240,   975,  2326,  2243,  1034,  1035,  1894,  1687,  1348,
     301,  2250,   722,  1352,   776,  1700,   302,  1251,   303,   565,
    1392,  1394,  1397,  1256,  1666,   318,  2287,   667,  1402,  2290,
    1820,  2345,  1708,  1408,  1691,  1712,  1695,  2298,  1472,  1473,
    2301,   611,   557,   558,  1409,  1461,  1388,    67,    68,   777,
     778,  1175,   566,  1670,  2162,   396,  2254,  2255,   976,  2263,
    2264,  2817,   583,  1419,  2408,  2409,  2410,  2411,  2412,  2413,
    2414,  2415,  2416,  1235,  1127,  1128,  1701,   977,  1592,  2828,
    1036,  1247,   978,  1593,   979,  1823,    80,    67,    68,  1821,
    1037,  1038,  1824,  1709,   612,  1039,  1713,   723,   593,   575,
     594,  1389,  1674,  2733,  2256,  1594,  1595,  2265,  1596,  1597,
     980,   981,   596,  1474,   559,  2272,  2273,   615,   982,  1598,
     621,    81,  1040,  1475,  1476,    67,    68,  1390,  1477,  1680,
     319,  1599,  1600,  1836,    67,    68,  1559,   983,  1684,  1601,
     668,  1176,  1602,  1744,  1895,  1896,  1458,   779,  1236,    67,
      68,  1960,  2417,  1467,   624,  1478,  1248,  1583,  1657,  1658,
    1603,  1305,  1970,  2274,  1276,  1277,  1589,  1604,  1605,  1688,
     456,  1606,    67,    68,   349,   780,   622,  1538,   643,   669,
     670,    98,  1617,   576,  1618,   350,   916,   112,   724,  1619,
    1620,  1621,  1837,   984,    82,  1692,   647,  1696,    99,  1627,
      67,    68,  1628,   648,  1630,  1539,   725,   305,  1540,   320,
      72,  1541,   351,   754,  2907,   112,    73,   577,   321,  1897,
    2910,  1632,   671,  1633,   650,   114,   654,   917,   655,  1898,
    1899,  1637,  1638,   335,  1900,   659,  1607,  1702,  1542,    83,
      84,  2257,  2258,   457,  2266,  2267,  1644,  1645,   843,   755,
     449,  1647,  1648,   114,  1710,    74,   665,  1714,  1650,  1971,
    1651,  1901,   679,  1653,   684,  1654,   685,  1543,    67,    68,
    1544,   115,    67,    68,  1732,   690,  2947,   672,  2948,   727,
     100,    75,    67,    68,    85,  1396,    67,    68,    67,    68,
     851,   352,  1608,   738,  1659,  1660,  1289,   752,  1609,   115,
    2275,  2276,   673,   756,   769,   759,    67,    68,  1725,  1496,
    1497,   760,  1726,  1972,  1727,  1610,  2259,   762,  1730,  2268,
     766,   336,   768,  1661,   101,  1611,  2260,  2261,    76,  2269,
    2270,   117,   353,   458,  1736,   337,  1739,    86,  1741,  1742,
    1743,  1745,  2631,   774,  1747,  1748,   802,  1750,  1751,  1752,
    1753,  1279,  1280,  1612,  1613,   782,  2399,  1761,  2262,   117,
     102,  2271,   803,  2498,  1767,   821,  1738,   827,  1768,  1769,
    1770,   306,  2507,    77,  1614,  2277,   828,   770,   449,  1775,
     841,  2516,  1778,   848,  2589,  2278,  2279,    67,    68,  1963,
    1788,  1545,  1789,   122,  1916,  1791,    67,  1347,   123,  1586,
    2602,   354,  1917,  1918,   849,  2607,  1489,   862,  1793,   307,
      67,    68,  2006,  2725,   757,  1780,  2728,  2280,  2730,  1615,
     863,   122,   866,   338,  1546,   867,   123,  1625,  1626,   868,
     355,  2742,  2743,  1800,  1927,   877,   339,   880,   356,  1840,
     882,  1841,  1928,  1929,  1842,  1843,  2440,  1844,  2757,  1845,
    1919,  1547,  2002,  2003,   357,  1847,  1631,  1848,    67,    68,
     886,   887,   446,   446,   447,   448,  1854,  1435,  1436,  2458,
    1639,   448,   308,    67,    68,  1965,  1496,  1497,   903,  1490,
      88,  1794,   904,    88,    67,    68,  1980,  1496,  1497,   911,
    1930,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,  1961,  1962,  1964,
      67,    68,  2008,  1496,  1497,  1491,  1492,  1795,  1796,   920,
     929,   922,   927,   942,   947,   958,   952,   959,   961,  1974,
    1493,   962,  1797,  1977,   989,   991,   987,   988,  1959,   993,
     998,   266,   995,  1004,  1000,  1009,  1010,  1920,  1921,  1758,
    1759,  1011,  1013,  1014,   257,  1015,  2005,  2007,  1026,  1027,
    1029,  1028,  1041,  1053,  1055,  1056,  2013,    89,  1063,  2023,
      89,  2729,  1065,  1494,  1064,  1798,  2029,  1121,  1130,  1139,
    1194,  2350,  1140,   258,  2741,  1196,  1195,  1931,  1932,  2746,
    2034,  1208,  1210,    90,  1221,  2036,    90,    91,  1222,  2038,
    2158,  2041,  2042,  1223,  2044,  2046,  2047,  1228,  2050,  1224,
    1225,  2053,  2054,  2055,  2056,  2057,  2058,  2059,  2060,  2063,
    2065,  2066,  1922,  1530,  2068,  2069,  2070,  2071,  1229,   267,
    1226,  1227,  1923,  1924,  2077,  2078,  2402,  1925,  2080,  2081,
    2082,  2621,  1104,   268,  2085,  2086,  1230,  1232,  2625,  1231,
      92,  1531,  1253,    92,  1532,  1258,  1105,  2089,  2090,   259,
    2091,  2092,  1933,  1259,  1926,  1106,  1260,  1261,  1287,  1262,
    1263,  1264,  1934,  1935,   260,  1274,  1107,  1936,  1275,  1278,
     269,  1281,   310,  1288,  1533,  1295,  1296,  1292,   466,  1304,
    1306,    93,  1307,  1340,    93,  1319,  2423,  1320,  1338,    94,
      95,  1339,    94,    95,  1937,   784,  1344,  1342,  1108,  1345,
    1346,  2651,  1343,  1534,  2653,  1398,  1535,  2654,  1400,  2655,
    1350,  1351,  1404,  1410,  1412,  1413,  1416,  1437,  1417,  1109,
    1420,   270,  2130,  2131,  2132,  1421,   261,  2133,  1957,  1422,
    1430,  1431,  2135,  2138,   271,  2140,  2141,  2142,  1432,  2143,
    2144,  1433,  2146,  1439,  2147,  2148,  1440,  2150,  2151,  2152,
    2153,   467,   785,  1438,  1441,   463,   786,  1975,  2156,  1447,
    1448,  1979,  1450,  1451,  2137,  1453,  2160,  1455,   262,  1110,
    1463,  2165,  2166,  1465,   468,   469,   488,  2168,   263,  1479,
    1480,  1528,  1481,   470,  1482,  1485,  2171,  2010,  1486,  1487,
    1500,   787,   788,  1501,   489,  1503,   789,  2025,  1523,  1529,
    1548,  1551,  1502,   471,  1552,  1553,  2030,  2031,  1111,  1562,
    1522,   490,  1565,   472,  1569,  1549,  1550,  2035,  1570,  2199,
    1571,  1576,  1579,  1577,   491,  1578,   525,  1536,   532,   535,
    1585,   540,   544,  2184,   790,  1112,  1587,  1588,  1735,  1624,
    2207,  2208,  2190,   492,  1635,  2210,  2195,   493,  2906,  1636,
    1642,  2212,  1643,  1649,  1652,  1655,  1656,  1740,  1677,  2764,
    1537,   494,   619,  1698,  1699,  1704,  1707,   750,  1705,  1706,
    1716,  1717,  1718,  -464,  1719,  1113,  1720,  1114,  1721,  1812,
    1733,   635,   641,  1445,  1734,   791,  1746,   646,  1749,   792,
    1757,   649,  1781,  1762,  2574,  2575,  1763,  2577,  2578,  1764,
    1776,  2581,  2582,   366,   495,  1790,  1801,  1792,  1802,  1803,
     367,  1833,  1852,  1822,   793,  1834,  1807,   794,  1839,  1853,
    1846,  1858,  1877,  1880,  1815,  1911,  1913,   842,   795,  1915,
    1816,  1938,  1939,   736,  1940,  1941,  1945,  1946,  1982,  1948,
    1949,  1950,  1953,  1991,  1956,   746,  1973,  1976,  1983,  1992,
    1988,  1993,  1994,  1995,  1997,  1998,  1999,  2004,  2313,  2314,
    2000,  2316,  2001,  2022,  2039,   767,  2026,  2037,  2629,  2074,
    2075,  2076,  2088,  2043,  2087,  2093,  2094,  2051,  2052,  2327,
    2328,  2329,  2330,  2331,  2332,  2333,  2334,  2335,  2095,  2426,
    2096,  2097,  2067,  2098, -1132,  2099,  2100,  2101,  2234,  2103,
    2104,  2105,  2341,  2106,  2343,  2107,  2108,   861,  2109,  2110,
    2111,  2281,  2112,  2113,  2114,  2292,  2115,  2116,  2117,  2118,
    2349,   449,  2119,  2593,  2120,  2121,  2353,  2122,  2123,  2616,
    2124,  2125,  2126,  2594,  2127,  2356,  2357,  2358,  2359,  2360,
    2361,  2362,  2363,  2364,  2365,  2128,  2129,  2378,  2379,  2380,
    2381,  2382,  2383,  2384,  2385,  2386,  2387,  2388,  2389,  2145,
    2392,  2149,  2393,  2394,  2395,  2154,  2167,  2595,  2173,  2174,
    2175,  2176,  2177,  2209,  2921,  2211,   449,  2403,  2214,   881,
    2215,  2216,   930,  2218,  2219,  2596,  2220,  2223,  2231,   935,
     888,  2225,   936,  2226,  2227,  2232,  2841,   937,  2233,   896,
    2235,   939,  2236,  2237,  2241,  2242,  2370,  2244,  2245,  2246,
    2247,  2251,  2252,  2597,  2253,  2282,  2283,  2284,  2288,  2289,
    2299,  2715,  2291,  2293,  2294,  2718,  2295,  2300,  2418,  2302,
    2419,  2304,  2420,  2305,  2422,  2307,   449,  2424,   368,  2425,
    2308,   369,  2310,  2317,  2429,  2430,  2319,  2431,  2432,  2433,
    2434,  2322,  2325,  2336,  2337,  2339,  2438,  2338,  2439,  2340,
    2396,  2752,  2442,  2344,  2391,  2444,  2397,   933,   934,  2400,
    2401,  2404,  2407,  2598,  2427,  2428,  1003,  2435,  2841,  2443,
     938,  2447,  2448,  2449,  2450,   941,  2451,  2477,  2599,  2480,
    2482,  2485,  2488,  2489,   953,  2491,   885,  2493,  2494,  2495,
    2446,  2499,  2500,  2601,  2501,  2502,  2503,  2504,  2321,  2481,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,  2508,  2479,
    2509,  2892,  2510,  2346,  2511,  2512,  2513,  2517,  2518,  2855,
    2519,  2526,  2529,  2537,  2540,  2543,  2544,  2545,  2548,  2546,
    2553,  2557,  2573,  2627,  2600,  2633,  2634,  2635,  2636,  2640,
    2838,  2643,  2645,  2647,  1005,  1006,  1007,  1008,  2646,  2648,
    2650,  2656,  2658,  2663,  2670,  2679,  1871,  2688,  2694,  2698,
    2704,  2712,  2723,  2893,  2734,  2735,  2889,  2736,  1881,  2737,
    2738,  2739,  2765,  1203,  2754,  2766,  2768,  2769,  1237,  2770,
    1209,  2771,  2772,  2551,  2773,  2774,  2776,     0,  2782,  2788,
    1942,  1943,  2814,  2820,  2558,  2559,  2560,  2561,  2562,  2563,
    2564,  2565,  2566,  2567,  2568,  2823,  2824,  2825,  2830,  2845,
    2571,  2846,  2847,  2848,   449,   449,  1159,   449,   449,  2849,
    2850,   449,   449,  2583,  2584,  2585,  2586,  2587,  2588,  2366,
    2590,  2591,  2592,  2897,  2899,  2857,  2860,  2871,  2879,  2885,
    2367,  2882,  2894,  2895,  2902,  2905,  2603,  2604,  2605,  2606,
    2915,  2608,  2609,  2610,  2611,  2612,  2613,  2930,  2615,  2916,
    2922,  2619,  2620,  2934,  2935,  2937,  1161,  2368,  2941,  2943,
       0,  2944,  2945,  2946,  1162,     0,     0,     0,     0,   228,
    1163,     0,     0,     0,     0,  2628,     0,     0,   449,  2630,
       0,     0,     0,  2632,     0,     0,     0,  1164,  2637,  2638,
    2639,   229,     0,  1165,   230,     0,  2369,     0,  1308,     0,
       0,     0,     0,     0,     0,  1310,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1166,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1167,   231,     0,
       0,     0,     0,     0,  1161,   232,     0,     0,  2659,     0,
       0,     0,  1162,     0,     0,     0,   233,   234,  1163,     0,
    1326,  1327,     0,   235,     0,  1331,     0,     0,  1334,     0,
    1353,  1354,  1355,     0,     0,  1164,     0,  1168,     0,     0,
    1341,  1165,     0,     0,     0,  1169,     0,     0,   236,  1309,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1356,
    1357,  1314,     0,  1358,     0,  1166,   237,     0,     0,     0,
    1359,     0,     0,  1360,     0,  1167,     0,  1361,     0,     0,
    2706,     0,   238,   239,  2708,  1362,  1363,     0,     0,   240,
       0,  1170,     0,  1364,  2709,  2710,     0,     0,  1324,     0,
    2714,   449,     0,  1171,  2717,   449,     0,     0,     0,     0,
    2722,   241,     0,  2726,  2727,  1168,     0,     0,     0,  1172,
       0,  1365,  1366,  1169,     0,  1367,     0,     0,     0,  2370,
       0,  2371,  2744,  2745,     0,  2747,  2748,  2749,  2750,  2751,
       0,   449,  2753,  1368,     0,     0,  2756,     0,     0,     0,
     242,     0,     0,     0,  1488,     0,     0,     0,     0,  2767,
       0,     0,  2622,     0,  1369,     0,     0,     0,  2775,  1170,
       0,     0,     0,  1426,     0,     0,     0,     0,  1415,     0,
       0,  1171,     0,     0,     0,  2372,  2790,     0,     0,     0,
    1370,     0,     0,     0,     0,     0,     0,  1172,     0,  1371,
       0,     0,     0,   243,     0,     0,     0,     0,     0,     0,
       0,  1483,     0,     0,   244,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2802,     0,
       0,     0,     0,  2806,     0,  2808,     0,     0,     0,     0,
       0,  2811,     0,   245,  1372,     0,     0,     0,     0,     0,
       0,     0,  1373,  1374,  2818,  2222,     0,     0,     0,  1563,
       0,     0,     0,  2228,  2229,     0,     0,     0,     0,  1375,
       0,     0,  2829,  2238,  2239,     0,  2833,     0,     0,     0,
    1376,  2866,     0,  2248,  2249,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2285,  2286,
       0,     0,  2854,     0,     0,     0,  1377,     0,  1378,  2296,
    2297,     0,     0,  1623,     0,     0,  2303,     0,  1379,     0,
       0,     0,     0,  1629,     0,     0,  2306,     0,  1380,     0,
       0,     0,     0,  2869,     0,     0,     0,     0,  2874,     0,
    2876,     0,     0,     0,     0,     0,     0,  2880,     0,     0,
       0,     0,  2883,     0,     0,     0,     0,  2886,     0,     0,
    1731,     0,  1381,     0,  2740,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2896,  2898,     0,  2758,     0,     0,     0,  2763,     0,
       0,     0,     0,     0,     0,     0,  1760,     0,     0,     0,
       0,  1765,     0,     0,     0,     0,     0,  2908,     0,     0,
    2909,  1771,     0,  2911,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2917,  2918,  2919,  2920,     0,     0,     0,
    2904,    67,    68,     0,     0,  2929,  1729,     0,  2932,     0,
       0,     0,     0,     0,     0,  2936,   112,  2938,     0,     0,
       0,     0,     0,     0,  1737,     0,     0,     0,     0,     0,
       0,  2924,     0,     0,  2927,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1766,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1772,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1787,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2441,  1799,     0,     0,     0,     0,  1806,  2844,     0,     0,
     115,     0,     0,     0,     0,     0,  2453,  2454,  2455,     0,
       0,  2457,     0,  2459,  2460,     0,     0,  2462,  2463,  2464,
       0,     0,  2466,  2467,     0,     0,  2470,     0,  2472,  2473,
       0,  2475,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1855,  1856,  1857,     0,     0,     0,     0,     0,
       0,     0,  1859,  1860,  1861,     0,     0,     0,     0,     0,
     117,  1872,  1873,  1874,     0,     0,  1875,  1876,     0,  1878,
    1879,  2484,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2486,  2487,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2490,     0,     0,     0,     0,     0,     0,     0,
       0,  2492,     0,  1951,  1952,  2496,  2497,  1954,  1955,     0,
       0,     0,     0,     0,  2505,  2506,     0,     0,     0,     0,
    2024,     0,     0,  2514,  2515,  2914,     0,   123,     0,  2520,
       0,     0,     0,     0,     0,     0,  1958,     0,  2547,  2530,
    2531,  2550,     0,     0,     0,     0,  2554,     0,     0,  2555,
    2541,     0,  2542,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1978,     0,     0,     0,  2570,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2073,     0,     0,     0,     0,     0,  2079,     0,     0,     0,
       0,     0,  2011,     0,     0,  2012,     0,     0,     0,     0,
       0,     0,     0,     0,  2027,  2028,     0,     0,     0,     0,
       0,     0,  2032,     0,     0,     0,     0,     0,     0,  2033,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2072,
       0,     0,     0,  2642,     0,     0,     0,     0,     0,     0,
       0,  2083,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2134,
       0,     0,     0,     0,  2139,  2652,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2157,     0,     0,     0,     0,     0,  2163,
       0,     0,     0,  2661,     0,     0,  2662,     0,     0,  2664,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2673,
       0,     0,     0,     0,     0,     0,  2179,     0,  2682,     0,
       0,     0,     0,  2186,     0,     0,     0,  2691,     0,     0,
       0,     0,  2136,     0,  2693,  2703,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2697,     0,     0,     0,     0,
       0,  2700,     0,     0,  2155,  2711,     0,     0,     0,     0,
       0,     0,  2716,     0,     0,  2719,  2720,     0,     0,     0,
    2164,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2169,     0,  2170,     0,     0,     0,   691,
     692,     0,     0,     0,     0,  2178,     0,     0,  2180,  2181,
    2182,  2183,  2185,     0,  2187,     0,     0,  2188,     0,     0,
    2189,  2191,  2192,  2193,  2194,  2196,     0,  2197,  2198,     0,
       0,     0,  2200,  2201,  2202,     0,     0,  2203,  2204,     0,
       0,     0,     0,  2205,  2206,     0,     0,     0,     0,     0,
    2213,     0,     0,     0,     0,   693,     0,     0,     0,     0,
       0,   694,     0,  2221,     0,     0,     0,     0,   695,     0,
     696,     0,     0,  2224,     0,   697,     0,     0,   698,     0,
       0,  2791,     0,     0,   699,  2311,     0,     0,  2792,     0,
       0,     0,     0,     0,     0,   700,     0,  2794,  2803,     0,
       0,   701,     0,     0,     0,  2324,  2796,     0,     0,   111,
     702,     0,  2799,     0,     0,     0,  2801,  2813,     0,     0,
       0,     0,     0,   112,     0,     0,     0,   703,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2347,  2348,
       0,     0,     0,     0,   113,  2309,     0,     0,   704,     0,
       0,     0,     0,     0,  2351,  2352,     0,     0,     0,  2354,
    2355,   114,     0,     0,     0,   705,     0,  2312,     0,     0,
    2315,     0,     0,     0,     0,     0,   706,   707,     0,     0,
       0,  2320,     0,     0,  2323,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   708,  2398,
    2867,  2868,     0,  2870,     0,  2872,  2873,   115,  2875,     0,
    2405,     0,     0,  2342,     0,     0,     0,     0,     0,     0,
       0,   709,     0,     0,     0,     0,   116,     0,     0,     0,
       0,     0,     0,     0,     0,   710,     0,   711,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   712,     0,     0,     0,     0,   713,  1786,     0,
       0,     0,  2901,  2421,   714,     0,     0,   117,  2390,     0,
       0,   715,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2436,     0,     0,     0,     0,     0,     0,     0,
     716,  2406,     0,     0,     0,     0,     0,     0,   543,     0,
       0,     0,     0,   717,   718,  2452,   719,   118,  2933,     0,
    2456,     0,   112,     0,     0,   119,  2461,     0,     0,     0,
       0,  2465,     0,   120,   121,  2468,     0,     0,  2471,   122,
       0,  2474,     0,  2476,   123,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   720,     0,     0,     0,
     114,     0,     0,     0,     0,     0,   115,     0,     0,     0,
       0,     0,     0,  2437,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2445,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   115,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2469,     0,     0,     0,
       0,   124,     0,     0,  2483,     0,   117,  2478,     0,     0,
       0,     0,     0,     0,     0,     0,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,     0,   117,     0,     0,     0,
     154,     0,     0,     0,     0,   155,   156,     0,     0,     0,
       0,     0,     0,     0,  2521,  2522,  2523,  2524,  2525,     0,
    2527,  2528,     0,   123,     0,  2532,  2533,  2534,  2535,  2536,
       0,  2538,  2539,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2614,   122,     0,
       0,  2549,     0,   123,  2552,     0,     0,     0,     0,     0,
       0,     0,  2556,  2626,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2569,     0,
       0,  2572,     0,     0,     0,     0,  2576,     0,     0,  2579,
    2580,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2644,     0,     0,     0,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,     0,  2657,     0,  2623,  2624,     0,
       0,     0,     0,     0,     0,     0,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2649,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2701,     0,     0,  2660,     0,     0,  2705,
       0,     0,     0,  2707,     0,  2665,  2666,  2667,  2668,  2669,
     112,  2671,  2672,     0,  2674,  2675,  2676,  2677,  2678,  2713,
    2680,  2681,     0,  2683,  2684,  2685,  2686,  2687,     0,  2689,
    2690,     0,  2692,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2695,  2696,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2699,     0,     0,     0,   516,   517,     0,
       0,   518,     0,     0,     0,     0,     0,     0,     0,     0,
    2761,  2762,     0,     0,     0,  2702,     0,     0,     0,     0,
       0,     0,     0,     0,   519,  1046,     0,     0,     0,     0,
    1047,     0,     0,     0,   115,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2721,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2732,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     636,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   117,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   520,     0,     0,
       0,   637,     0,  2781,     0,     0,     0,  2787,     0,  2822,
       0,     0,     0,     0,     0,  2793,   521,     0,     0,     0,
       0,     0,     0,     0,  2795,     0,     0,     0,     0,     0,
       0,     0,     0,  2797,     0,  2798,     0,     0,   522,  2800,
       0,     0,     0,     0,     0,   115,     0,     0,     0,     0,
       0,   123,     0,     0,     0,     0,     0,     0,     0,   638,
       0,  2804,  2805,     0,  2807,     0,     0,     0,     0,  2809,
    2810,     0,     0,     0,  2812,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,     0,   523,   117,     0,  2834,     0,     0,
       0,  2888,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   639,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2861,  2900,  2862,     0,  2863,  2858,
       0,  2864,     0,  2865,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   123,   524,     0,     0,     0,     0,     0,     0,
    2925,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2939,     0,     0,  2940,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2903,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   640,     0,     0,  2912,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2923,
       0,     0,  2926,     0,     0,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,  1068,  1069,  1070,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1071,  1072,   112,     0,  1073,     0,     0,  1074,
       0,     0,     0,     0,     0,     0,  1075,     0,     0,     0,
    1076,     0,     0,     0,     0,     0,     0,     0,  1077,  1078,
       0,     0,   112,     0,     0,     0,  1079,  1080,     0,     0,
       0,     0,   114,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1081,     0,     0,     0,     0,     0,
    1082,     0,     0,     0,  1083,  1084,     0,     0,  1085,     0,
     114,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   112,     0,     0,  1086,     0,   115,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1087,     0,     0,
       0,     0,     0,     0,     0,     0,   115,     0,     0,     0,
       0,     0,     0,     0,   530,     0,     0,     0,     0,     0,
       0,     0,     0,  1088,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   117,     0,
       0,     0,     0,     0,     0,   112,     0,  1089,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   115,     0,     0,
       0,     0,     0,     0,     0,     0,   117,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1090,     0,  1091,
       0,     0,     0,  1414,     0,  1092,  1093,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,  1094,  1095,     0,     0,   123,     0,     0,     0,     0,
       0,     0,  1096,  1097,     0,     0,     0,   117,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   122,   115,
       0,     0,     0,   123,     0,     0,     0,     0,     0,  1098,
       0,  1099,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1100,     0,  1101,     0,     0,     0,     0,
       0,  1102,  1459,     0,     0,     0,   534,     0,     0,     0,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   123,     0,     0,     0,     0,   117,
       0,     0,     0,     0,     0,  1103,     0,     0,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   531,   115,   123,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   117,     0,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,  1460,     0,     0,     0,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,     0,     0,     0,
       0,     0,   123,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,     1,     0,     0,     2,     0,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     0,     0,     0,     0,     5,     6,     0,
       7,     8,     9,     0,     0,     0,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,     0,    11,     0,    12,
      13,     0,     0,     0,     0,     0,     0,     0,     0,    14,
      15,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,     0,     0,     0,     0,     0,     0,     0,
       0,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    18,     0,     0,     0,    19,     0,
       0,    20,     0,     0,     0,    21,    22,     0,     0,     0,
      23,    24,     0,     0,    25,     0,     0,     0,     0,     0,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,     0,    28,    29,
      30,     0,     0,    31,    32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    34,    35,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    37,
       0,    38,     0,   182,     0,     0,   183,     0,    39,   184,
       0,     0,    40,     0,     0,     0,    41,     0,    42,     0,
      43,     0,     0,     0,     0,    44,     0,     0,   185,     0,
     186,   187,   188,     0,     0,     0,     0,     0,     0,    45,
     189,     0,   190,     0,     0,    46,     0,   191,     0,   192,
     193,   194,     0,     0,     0,     0,     0,   195,     0,   196,
       0,    47,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,     0,    50,     0,     0,     0,     0,
       0,    51,     0,     0,    52,    53,     0,     0,     0,     0,
     197,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   198,     0,
       0,     0,     0,     0,     0,    54,   199,     0,   200,   201,
     202,   203,    55,     0,   204,     0,     0,     0,   205,     0,
     206,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   207,   208,     0,     0,     0,   209,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   210,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   211,   212,     0,     0,     0,
       0,     0,     0,   213,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   214,     0,
     215,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   216,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   217,   218,     0,     0,     0,     0,     0,     0,     0,
     219,     0,     0,     0,     0,     0,     0,   220,     0,     0,
       0,     0,     0,   221,     0,   222,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   223
};

static const yytype_int16 yycheck[] =
{
       3,  1541,    53,     5,   947,   706,   707,  1768,    11,  1770,
     463,     5,     4,    16,     0,     5,   507,     4,    31,     4,
     473,     3,     4,     5,     4,     5,     4,     3,     4,    56,
       4,    31,    35,    31,     3,     4,     4,    26,     5,    46,
      43,  1069,     3,     4,     4,     4,     4,   711,     5,    52,
      16,    43,    55,     5,    46,    58,    61,     3,     4,    62,
     133,    16,    65,    16,    35,     5,    69,    70,    43,   153,
      73,   170,    19,    76,    77,    26,   174,    80,     3,     4,
      83,    84,    11,    86,    76,   153,    66,   137,    91,    39,
    1036,    87,    84,  1039,    12,    16,   201,    48,    66,  2658,
      51,   104,   105,   106,   107,   108,   109,    61,    88,    57,
     100,    62,    87,     4,  1060,    26,   106,     3,     4,     3,
       4,    20,   125,     5,    53,    13,   142,     3,     4,   121,
       3,     4,     3,     4,    85,   233,   162,     3,     4,     3,
       4,   121,    71,     3,     4,  1224,  2840,   118,    30,  1228,
       3,     4,   103,   121,   146,    39,    94,   160,   226,   142,
     233,   266,   112,   143,   201,   191,   162,   183,   935,   936,
     937,    35,   101,    61,   112,   135,   275,     4,    99,  1258,
    1259,  1260,   185,   172,   171,   269,   134,   190,    66,    20,
      56,   120,   192,    64,   192,   124,  2890,   224,   164,    59,
     183,   269,    61,   301,     4,     5,   256,   295,   200,   138,
       3,     4,     3,     4,    39,     3,     4,  2776,   210,   190,
     293,   192,   259,   194,   195,   200,   218,   219,   112,  2788,
     210,    26,    16,   225,   205,   227,  1003,    20,   218,   219,
     308,   202,   210,   201,    35,    61,   205,    14,    15,   220,
     218,   219,   202,   212,   213,    22,   234,   195,   247,   205,
     263,   172,    29,   255,   315,   220,   157,   158,   235,    36,
     195,    20,   136,     4,     5,   282,   279,   280,   291,   197,
       3,     4,     3,     4,    61,    78,   234,   112,   293,   248,
      57,   291,   295,   291,   297,   122,   243,   750,    13,    14,
     257,   249,   305,   306,   293,   308,   309,    74,   311,   295,
     198,   316,   297,   315,   306,   979,   269,   269,   321,   195,
     314,   121,   312,   297,   274,   303,   306,   303,   331,   332,
     322,     4,   312,   315,   303,   322,   247,   308,   306,   293,
     280,   125,   303,   303,   296,   136,    61,     4,   247,   304,
       4,   354,    15,   356,   357,   138,   359,     4,   224,    20,
     363,   364,   316,   355,   255,   313,     5,    61,   360,   361,
    2591,   374,   375,     4,   303,   355,    20,   202,   381,   359,
     360,   361,   293,   386,   387,   273,   179,   355,   313,   173,
     121,   394,   360,   361,   397,   283,  2617,   356,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,    26,    50,
     210,   362,    66,   416,   417,     4,   247,   303,   218,   219,
     423,   424,   425,   426,   427,   428,   429,   315,   431,  1093,
     303,     4,   357,   358,   293,    66,   220,   313,   233,   303,
      29,    61,   445,   896,  1145,   233,   449,  1111,   121,   274,
      32,   454,   455,   456,   457,   458,   459,   316,   461,   100,
     463,   464,   465,    63,   247,    98,   259,   121,   109,    20,
     473,   474,   195,   148,   121,  1503,  1177,   293,   201,   210,
     175,   357,   358,   198,   199,   106,   939,   218,   219,   184,
     121,   462,    15,    66,   277,   216,     3,     4,   247,   140,
     316,  1529,   122,  2724,  2725,   105,   306,  2728,     5,  2730,
     277,   278,   303,    78,    13,    14,   293,   240,   157,   158,
     304,  2742,  2743,  1551,   527,   528,  2747,  2748,  1474,   239,
    2751,  1477,    39,     3,     4,  2756,  2757,   210,    33,   316,
     307,   204,   545,   266,   201,   218,   219,    61,   121,     3,
       4,    66,    59,     3,     4,   355,   210,     4,   273,  1326,
     360,   361,    61,   210,   218,   219,   617,  1334,   283,   284,
       4,   218,   219,    13,    14,   306,    40,   166,   581,   210,
     551,   312,   203,   350,   351,   352,   247,   218,   219,     4,
     313,   322,    88,  2814,     4,   252,  2817,   221,  1677,   293,
     315,  2822,   259,   247,    39,   112,    87,  2828,   122,    56,
      83,   614,  2833,   108,   179,   233,   255,    66,     4,     0,
     671,    61,   316,    61,   355,   596,    29,   100,   239,   360,
     361,    66,   221,   306,   357,   358,   257,   210,   271,   690,
       3,     4,    13,    14,   244,   218,   219,    45,   162,     0,
     297,     5,   306,     4,   279,   658,    63,    45,   247,   306,
     260,   261,    16,   283,   305,   100,    64,     5,    66,   269,
      56,   106,    35,     4,  2435,   306,    39,   112,    66,   118,
       5,   162,   355,   132,   122,   688,  2907,   360,   361,  2910,
      61,   315,    95,    81,   259,   202,   247,   132,   105,   198,
     199,   355,   705,    23,    24,   708,   360,   361,   355,  2930,
    1374,   160,   127,   360,   361,     4,   211,    39,   153,   133,
     127,  1385,    11,  2944,   355,    87,  2947,  2948,    61,   360,
     361,    56,   735,   306,    63,   170,   739,   740,   741,   742,
      65,     5,   745,   207,   747,    61,   749,   750,   751,   112,
    1203,    61,    61,   353,   354,     4,     5,    44,   198,   199,
     174,    87,     5,   233,    36,   168,   216,     5,   203,   283,
      13,    14,    59,   136,   273,    47,   105,   224,    98,   233,
     831,    61,   355,    30,   283,   284,     5,   360,   361,   122,
     112,   189,   299,   242,    81,     5,     4,     5,   272,   214,
     162,   189,    74,    13,    14,   279,   122,   242,  1044,   104,
       3,     4,   122,   122,   101,  1051,   315,   211,    61,   233,
     823,   824,   257,   826,   827,   828,   829,   198,   199,     5,
      61,   118,    26,   273,   269,   122,   162,   244,   224,   202,
     843,   844,   122,   283,   284,   283,   295,   850,   851,  1792,
     248,    61,    60,   260,   261,   202,   259,    61,    66,    29,
     248,   264,   297,   150,   151,     4,    61,   870,   871,   872,
     873,   874,   875,   876,   309,   315,   311,   312,  1331,   293,
     202,   153,     3,     4,    66,   652,     3,     4,   891,   892,
     893,   122,   895,   896,   897,   293,   899,    61,   120,   224,
     195,     5,   273,    61,   302,   293,   295,   115,   175,    13,
      14,    66,   283,   284,   302,   244,   351,   920,   122,   922,
     207,  1867,   194,    61,   132,    61,    32,   122,    39,   932,
     217,   260,   261,   126,  1635,    26,   939,   940,  1966,   147,
     303,  1887,   945,   710,   315,   153,   353,   354,   715,   920,
     283,  1897,   160,  1981,  1900,   198,   199,    61,   122,   962,
     354,  1907,    91,   966,   122,    61,   360,   283,   362,     5,
     973,   974,   975,   283,   283,    70,  1922,     5,   981,  1925,
     174,  2009,    61,   986,   122,    61,   122,  1933,   198,   199,
    1936,   263,   279,   280,   997,  1046,   166,     3,     4,   157,
     158,   112,    89,   283,  1771,   126,    13,    14,   216,    13,
      14,  2726,    15,  1016,  2093,  2094,  2095,  2096,  2097,  2098,
    2099,  2100,  2101,    87,   353,   354,   122,   235,    21,  2744,
     273,    87,   240,    26,   242,   272,     4,     3,     4,   233,
     283,   284,   279,   122,   316,   288,   122,   176,    66,     4,
     240,   221,   283,  2593,    61,    48,    49,    61,    51,    52,
     268,   269,   294,   273,   351,    13,    14,    89,   276,    62,
      66,    39,   315,   283,   284,     3,     4,   247,   288,   283,
     175,    74,    75,   174,     3,     4,  1089,   295,   283,    82,
     118,   202,    85,    59,   198,   199,  1045,   255,   162,     3,
       4,     5,  2130,  1052,    30,   315,   162,  1110,    41,    42,
     103,   878,   106,    61,     4,     5,  1119,   110,   111,   283,
      39,   114,     3,     4,    36,   283,    72,    21,     5,   157,
     158,    83,  1135,    88,  1137,    47,   142,    18,   267,  1142,
    1143,  1144,   233,   351,   112,   283,     4,   283,   100,  1152,
       3,     4,  1155,     5,  1157,    49,   285,    38,    52,   254,
     195,    55,    74,    54,  2879,    18,   201,   122,   263,   273,
    2885,  1174,   200,  1176,     4,    56,     5,   183,     4,   283,
     284,  1184,  1185,    25,   288,     4,   179,   283,    82,   157,
     158,   198,   199,   112,   198,   199,  1199,  1200,   126,    90,
    1203,  1204,  1205,    56,   283,   240,     5,   283,  1211,   203,
    1213,   315,     5,  1216,     4,  1218,     5,   111,     3,     4,
     114,   102,     3,     4,  1275,     5,  2941,   255,  2943,     5,
     182,   266,     3,     4,   202,    16,     3,     4,     3,     4,
      11,   153,   235,     5,   177,   178,    11,     4,   241,   102,
     198,   199,   280,   144,    39,     4,     3,     4,  1261,     6,
       7,     4,  1265,   257,  1267,   258,   273,     4,  1271,   273,
       5,   113,     4,   206,   226,   268,   283,   284,   313,   283,
     284,   162,   194,   202,  1287,   127,  1289,   255,  1291,  1292,
    1293,  1294,    59,    98,  1297,  1298,     5,  1300,  1301,  1302,
    1303,     4,     5,   296,   297,   122,  2073,  1310,   315,   162,
     262,   315,     4,  2259,  1317,     4,  1287,   280,  1321,  1322,
    1323,   202,  2268,   358,   317,   273,     4,   112,  1331,  1332,
       4,  2277,  1335,     4,  2362,   283,   284,     3,     4,     5,
    1343,   235,  1345,   224,     5,  1348,     3,     4,   229,  1116,
    2378,   263,    13,    14,     5,  2383,    82,     4,    82,   240,
       3,     4,     5,  2585,   255,  1336,  2588,   315,  2590,   362,
     205,   224,     4,   215,   268,     4,   229,     4,     5,     4,
     292,  2603,  2604,  1354,     5,     4,   228,     5,   300,  1392,
       5,  1394,    13,    14,  1397,  1398,  2163,  1400,  2620,  1402,
      61,   295,     4,     5,   316,  1408,  1173,  1410,     3,     4,
     451,   452,     8,     8,     9,    10,  1419,  1027,  1028,  2186,
    1187,    10,   303,     3,     4,     5,     6,     7,     5,   155,
      27,   155,   279,    27,     3,     4,     5,     6,     7,   175,
      61,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,  1500,  1501,  1502,
       3,     4,     5,     6,     7,   231,   232,   231,   232,     4,
     175,     4,   184,     4,   204,     5,   204,     5,     4,  1522,
     246,   204,   246,  1526,    66,    66,   196,   196,  1499,    66,
       5,    25,   233,     5,   234,     4,     4,   198,   199,  1306,
    1307,     4,     4,     4,    88,   204,  1549,  1550,    87,    87,
       5,    87,    87,     5,     4,     4,  1559,   154,     5,  1562,
     154,  2589,     4,   289,     5,   289,  1569,     5,   100,     4,
      16,  2024,     5,   117,  2602,     4,    16,   198,   199,  2607,
    1583,     4,     4,   180,     4,  1588,   180,   184,    98,  1592,
     184,  1594,  1595,     5,  1597,  1598,  1599,     4,  1601,     5,
      87,  1604,  1605,  1606,  1607,  1608,  1609,  1610,  1611,  1612,
    1613,  1614,   273,    21,  1617,  1618,  1619,  1620,     5,   113,
      87,    87,   283,   284,  1627,  1628,  2079,   288,  1631,  1632,
    1633,  2398,    66,   127,  1637,  1638,     5,     5,  2405,    87,
     237,    49,     4,   237,    52,     5,    80,  1650,  1651,   193,
    1653,  1654,   273,     5,   315,    89,     4,     4,    11,     5,
       5,     5,   283,   284,   208,    64,   100,   288,     4,     4,
     164,     4,    35,     5,    82,     4,     4,    11,    34,     4,
       4,   278,     4,     4,   278,     5,  2139,     5,   171,   286,
     287,     5,   286,   287,   315,    61,     4,   162,   132,     5,
       4,  2468,   162,   111,  2471,   268,   114,  2474,   268,  2476,
      37,    37,   297,     5,     4,     4,     4,   281,     5,   153,
       5,   215,  1725,  1726,  1727,     5,   270,  1730,  1495,     5,
       4,     4,  1735,  1736,   228,  1738,  1739,  1740,     5,  1742,
    1743,     5,  1745,     5,  1747,  1748,     5,  1750,  1751,  1752,
    1753,   107,   118,   281,     5,   118,   122,  1524,  1761,     4,
       4,  1528,     5,     5,  1735,     5,  1769,     5,   312,   203,
       5,  1774,  1775,     5,   130,   131,    53,  1780,   322,     4,
       4,   142,     5,   139,     5,     4,  1789,  1554,     5,     5,
     247,   157,   158,   247,    71,   106,   162,  1564,     5,   106,
      39,   106,   247,   159,     5,   220,  1573,  1574,   242,   253,
     247,    88,    39,   169,   253,   247,   247,  1584,   220,  1822,
       5,     4,   220,     5,   101,     5,   189,   235,   191,   192,
     220,   194,   195,  1804,   200,   269,     4,     4,    11,     5,
    1843,  1844,  1813,   120,     5,  1848,  1817,   124,  2876,     5,
       5,  1854,     5,     4,   112,   112,     4,    11,     5,  2626,
     268,   138,   225,     5,     5,     4,     4,   310,     5,     5,
       5,     5,     4,     0,     5,   309,     5,   311,     4,   142,
       5,   244,   245,  1035,     5,   251,     4,   250,     4,   255,
       5,   254,     5,     4,  2347,  2348,     4,  2350,  2351,     4,
       4,  2354,  2355,    15,   181,     4,   247,     5,   247,   247,
      22,     4,     4,   174,   280,   257,   247,   283,   216,     4,
     204,     4,     4,     4,   247,     5,     5,   370,   294,     5,
     247,   281,     5,   296,     5,     5,     4,     4,   247,     5,
       4,     4,     4,   319,     5,   308,     5,     5,   247,   319,
     247,     4,     4,     4,     4,     4,     4,     4,  1961,  1962,
     319,  1964,   319,     4,   233,   328,     5,     5,  2421,     5,
       4,     4,     4,   233,     5,     5,     5,   233,   233,  1982,
    1983,  1984,  1985,  1986,  1987,  1988,  1989,  1990,     4,    11,
       5,     5,   233,     4,   295,     5,     5,     4,   281,     5,
       5,     4,  2005,     5,  2007,     5,     4,   401,     5,     5,
       4,   281,     5,     5,     4,   281,     5,     5,     4,     4,
    2023,  2024,     4,   363,     5,     5,  2029,     4,     4,   315,
       5,     5,     4,   363,     5,  2038,  2039,  2040,  2041,  2042,
    2043,  2044,  2045,  2046,  2047,     5,     4,  2050,  2051,  2052,
    2053,  2054,  2055,  2056,  2057,  2058,  2059,  2060,  2061,     5,
    2063,     4,  2065,  2066,  2067,     4,     4,   363,     5,     5,
       5,     5,     5,     4,  2900,     5,  2079,  2080,     5,   442,
       5,     5,   525,     4,     4,   363,     5,     4,     4,   532,
     453,     5,   535,     5,     5,     4,  2760,   540,     5,   462,
       5,   544,     5,     5,     4,     4,   295,     5,     5,     5,
       5,     4,     4,   363,     5,     5,     5,     5,     4,     4,
       4,  2574,     5,     5,     5,  2578,     5,     4,  2131,     5,
    2133,     4,  2135,     4,  2137,     4,  2139,  2140,   250,  2142,
       4,   253,     5,     5,  2147,  2148,     5,  2150,  2151,  2152,
    2153,     5,     5,     4,     4,     4,  2159,     5,  2161,     4,
       4,  2614,  2165,     5,     5,  2168,     4,   530,   531,     5,
       5,     4,     4,   363,     5,     5,   619,     4,  2842,     5,
     543,     5,     5,     5,     5,   548,     5,     4,   363,     5,
       4,     4,     4,     4,   557,     4,   450,     5,     5,     5,
    2171,     4,     4,   363,     5,     5,     5,     5,  1975,  2212,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,     4,  2210,
       4,   363,     5,  2010,     5,     5,     5,     4,     4,  2775,
       5,     4,     4,     4,     4,     4,     4,     4,     4,  2310,
       4,     4,     4,     4,  2373,     5,     5,     4,     4,     4,
    2758,     5,     4,     4,   637,   638,   639,   640,     5,     5,
       5,     5,     4,     4,     4,     4,  1438,     4,     4,     4,
       4,     4,     4,  2842,     5,     4,  2838,     5,  1450,     5,
       5,     4,     4,   746,     5,     5,     5,     4,   789,     4,
     753,     4,     4,  2316,     4,     4,     4,    -1,     5,     4,
    1472,  1473,     4,     4,  2327,  2328,  2329,  2330,  2331,  2332,
    2333,  2334,  2335,  2336,  2337,     5,     4,     4,     4,     4,
    2343,     5,     5,     4,  2347,  2348,   709,  2350,  2351,     4,
       4,  2354,  2355,  2356,  2357,  2358,  2359,  2360,  2361,    55,
    2363,  2364,  2365,  2854,  2855,     4,     4,     4,     4,     4,
      66,     5,     5,     5,     4,     4,  2379,  2380,  2381,  2382,
       5,  2384,  2385,  2386,  2387,  2388,  2389,     4,  2391,     5,
       5,  2394,  2395,     5,     5,     5,    92,    93,     4,     4,
      -1,     5,     5,     5,   100,    -1,    -1,    -1,    -1,    18,
     106,    -1,    -1,    -1,    -1,  2418,    -1,    -1,  2421,  2422,
      -1,    -1,    -1,  2426,    -1,    -1,    -1,   123,  2431,  2432,
    2433,    40,    -1,   129,    43,    -1,   132,    -1,   881,    -1,
      -1,    -1,    -1,    -1,    -1,   888,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   163,    77,    -1,
      -1,    -1,    -1,    -1,    92,    84,    -1,    -1,  2481,    -1,
      -1,    -1,   100,    -1,    -1,    -1,    95,    96,   106,    -1,
     933,   934,    -1,   102,    -1,   938,    -1,    -1,   941,    -1,
      19,    20,    21,    -1,    -1,   123,    -1,   203,    -1,    -1,
     953,   129,    -1,    -1,    -1,   211,    -1,    -1,   127,   882,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,   894,    -1,    52,    -1,   153,   145,    -1,    -1,    -1,
      59,    -1,    -1,    62,    -1,   163,    -1,    66,    -1,    -1,
    2553,    -1,   161,   162,  2557,    74,    75,    -1,    -1,   168,
      -1,   257,    -1,    82,  2567,  2568,    -1,    -1,   931,    -1,
    2573,  2574,    -1,   269,  2577,  2578,    -1,    -1,    -1,    -1,
    2583,   190,    -1,  2586,  2587,   203,    -1,    -1,    -1,   285,
      -1,   110,   111,   211,    -1,   114,    -1,    -1,    -1,   295,
      -1,   297,  2605,  2606,    -1,  2608,  2609,  2610,  2611,  2612,
      -1,  2614,  2615,   132,    -1,    -1,  2619,    -1,    -1,    -1,
     229,    -1,    -1,    -1,  1067,    -1,    -1,    -1,    -1,  2632,
      -1,    -1,  2399,    -1,   153,    -1,    -1,    -1,  2641,   257,
      -1,    -1,    -1,  1021,    -1,    -1,    -1,    -1,  1011,    -1,
      -1,   269,    -1,    -1,    -1,   351,  2659,    -1,    -1,    -1,
     179,    -1,    -1,    -1,    -1,    -1,    -1,   285,    -1,   188,
      -1,    -1,    -1,   282,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1059,    -1,    -1,   293,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2701,    -1,
      -1,    -1,    -1,  2706,    -1,  2708,    -1,    -1,    -1,    -1,
      -1,  2714,    -1,   322,   233,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   241,   242,  2727,  1877,    -1,    -1,    -1,  1092,
      -1,    -1,    -1,  1885,  1886,    -1,    -1,    -1,    -1,   258,
      -1,    -1,  2745,  1895,  1896,    -1,  2749,    -1,    -1,    -1,
     269,  2802,    -1,  1905,  1906,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1920,  1921,
      -1,    -1,  2775,    -1,    -1,    -1,   295,    -1,   297,  1931,
    1932,    -1,    -1,  1146,    -1,    -1,  1938,    -1,   307,    -1,
      -1,    -1,    -1,  1156,    -1,    -1,  1948,    -1,   317,    -1,
      -1,    -1,    -1,  2806,    -1,    -1,    -1,    -1,  2811,    -1,
    2813,    -1,    -1,    -1,    -1,    -1,    -1,  2820,    -1,    -1,
      -1,    -1,  2825,    -1,    -1,    -1,    -1,  2830,    -1,    -1,
    1273,    -1,   351,    -1,  2601,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2854,  2855,    -1,  2621,    -1,    -1,    -1,  2625,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1309,    -1,    -1,    -1,
      -1,  1314,    -1,    -1,    -1,    -1,    -1,  2880,    -1,    -1,
    2883,  1324,    -1,  2886,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2896,  2897,  2898,  2899,    -1,    -1,    -1,
    2871,     3,     4,    -1,    -1,  2908,  1269,    -1,  2911,    -1,
      -1,    -1,    -1,    -1,    -1,  2918,    18,  2920,    -1,    -1,
      -1,    -1,    -1,    -1,  1287,    -1,    -1,    -1,    -1,    -1,
      -1,  2902,    -1,    -1,  2905,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1315,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1325,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1342,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2164,  1354,    -1,    -1,    -1,    -1,  1359,  2764,    -1,    -1,
     102,    -1,    -1,    -1,    -1,    -1,  2180,  2181,  2182,    -1,
      -1,  2185,    -1,  2187,  2188,    -1,    -1,  2191,  2192,  2193,
      -1,    -1,  2196,  2197,    -1,    -1,  2200,    -1,  2202,  2203,
      -1,  2205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1420,  1421,  1422,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1430,  1431,  1432,    -1,    -1,    -1,    -1,    -1,
     162,  1439,  1440,  1441,    -1,    -1,  1444,  1445,    -1,  1447,
    1448,  2223,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2233,  2234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2244,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2253,    -1,  1481,  1482,  2257,  2258,  1485,  1486,    -1,
      -1,    -1,    -1,    -1,  2266,  2267,    -1,    -1,    -1,    -1,
    1563,    -1,    -1,  2275,  2276,  2892,    -1,   229,    -1,  2281,
      -1,    -1,    -1,    -1,    -1,    -1,  1499,    -1,  2312,  2291,
    2292,  2315,    -1,    -1,    -1,    -1,  2320,    -1,    -1,  2323,
    2302,    -1,  2304,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1527,    -1,    -1,    -1,  2342,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1623,    -1,    -1,    -1,    -1,    -1,  1629,    -1,    -1,    -1,
      -1,    -1,  1555,    -1,    -1,  1558,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1567,  1568,    -1,    -1,    -1,    -1,
      -1,    -1,  1575,    -1,    -1,    -1,    -1,    -1,    -1,  1582,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1622,
      -1,    -1,    -1,  2437,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1634,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1732,
      -1,    -1,    -1,    -1,  1737,  2469,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1766,    -1,    -1,    -1,    -1,    -1,  1772,
      -1,    -1,    -1,  2485,    -1,    -1,  2488,    -1,    -1,  2491,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2501,
      -1,    -1,    -1,    -1,    -1,    -1,  1799,    -1,  2510,    -1,
      -1,    -1,    -1,  1806,    -1,    -1,    -1,  2519,    -1,    -1,
      -1,    -1,  1735,    -1,  2526,  2549,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2537,    -1,    -1,    -1,    -1,
      -1,  2543,    -1,    -1,  1757,  2569,    -1,    -1,    -1,    -1,
      -1,    -1,  2576,    -1,    -1,  2579,  2580,    -1,    -1,    -1,
    1773,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1786,    -1,  1788,    -1,    -1,    -1,     4,
       5,    -1,    -1,    -1,    -1,  1798,    -1,    -1,  1801,  1802,
    1803,  1804,  1805,    -1,  1807,    -1,    -1,  1810,    -1,    -1,
    1813,  1814,  1815,  1816,  1817,  1818,    -1,  1820,  1821,    -1,
      -1,    -1,  1825,  1826,  1827,    -1,    -1,  1830,  1831,    -1,
      -1,    -1,    -1,  1836,  1837,    -1,    -1,    -1,    -1,    -1,
    1858,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    66,    -1,  1871,    -1,    -1,    -1,    -1,    73,    -1,
      75,    -1,    -1,  1881,    -1,    80,    -1,    -1,    83,    -1,
      -1,  2663,    -1,    -1,    89,  1958,    -1,    -1,  2670,    -1,
      -1,    -1,    -1,    -1,    -1,   100,    -1,  2679,  2702,    -1,
      -1,   106,    -1,    -1,    -1,  1978,  2688,    -1,    -1,     4,
     115,    -1,  2694,    -1,    -1,    -1,  2698,  2721,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    -1,    -1,   132,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2011,  2012,
      -1,    -1,    -1,    -1,    39,  1953,    -1,    -1,   153,    -1,
      -1,    -1,    -1,    -1,  2027,  2028,    -1,    -1,    -1,  2032,
    2033,    56,    -1,    -1,    -1,   170,    -1,  1960,    -1,    -1,
    1963,    -1,    -1,    -1,    -1,    -1,   181,   182,    -1,    -1,
      -1,  1974,    -1,    -1,  1977,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,  2072,
    2804,  2805,    -1,  2807,    -1,  2809,  2810,   102,  2812,    -1,
    2083,    -1,    -1,  2006,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   226,    -1,    -1,    -1,    -1,   121,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   240,    -1,   242,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   257,    -1,    -1,    -1,    -1,   262,     4,    -1,
      -1,    -1,  2866,  2136,   269,    -1,    -1,   162,  2061,    -1,
      -1,   276,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     295,  2084,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,
      -1,    -1,    -1,   308,   309,  2178,   311,   202,  2912,    -1,
    2183,    -1,    18,    -1,    -1,   210,  2189,    -1,    -1,    -1,
      -1,  2194,    -1,   218,   219,  2198,    -1,    -1,  2201,   224,
      -1,  2204,    -1,  2206,   229,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   351,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,
      -1,    -1,    -1,  2156,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2171,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2199,    -1,    -1,    -1,
      -1,   306,    -1,    -1,  2222,    -1,   162,  2210,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,    -1,   162,    -1,    -1,    -1,
     355,    -1,    -1,    -1,    -1,   360,   361,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2282,  2283,  2284,  2285,  2286,    -1,
    2288,  2289,    -1,   229,    -1,  2293,  2294,  2295,  2296,  2297,
      -1,  2299,  2300,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2390,   224,    -1,
      -1,  2314,    -1,   229,  2317,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2325,  2406,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2341,    -1,
      -1,  2344,    -1,    -1,    -1,    -1,  2349,    -1,    -1,  2352,
    2353,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2445,    -1,    -1,    -1,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,    -1,  2478,    -1,  2400,  2401,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2450,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2546,    -1,    -1,  2484,    -1,    -1,  2552,
      -1,    -1,    -1,  2556,    -1,  2493,  2494,  2495,  2496,  2497,
      18,  2499,  2500,    -1,  2502,  2503,  2504,  2505,  2506,  2572,
    2508,  2509,    -1,  2511,  2512,  2513,  2514,  2515,    -1,  2517,
    2518,    -1,  2520,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2530,  2531,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2541,    -1,    -1,    -1,    65,    66,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2623,  2624,    -1,    -1,    -1,  2548,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,   162,    -1,    -1,    -1,    -1,
     167,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2581,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2592,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,    -1,
      -1,    58,    -1,  2646,    -1,    -1,    -1,  2650,    -1,  2732,
      -1,    -1,    -1,    -1,    -1,  2673,   194,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2682,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2691,    -1,  2693,    -1,    -1,   216,  2697,
      -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,
      -1,   229,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,
      -1,  2704,  2705,    -1,  2707,    -1,    -1,    -1,    -1,  2712,
    2713,    -1,    -1,    -1,  2717,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,    -1,   282,   162,    -1,  2750,    -1,    -1,
      -1,  2834,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   180,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2792,  2858,  2794,    -1,  2796,  2782,
      -1,  2799,    -1,  2801,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   229,   351,    -1,    -1,    -1,    -1,    -1,    -1,
    2903,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2923,    -1,    -1,  2926,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2871,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   299,    -1,    -1,  2888,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2902,
      -1,    -1,  2905,    -1,    -1,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    18,    -1,    52,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,
      -1,    -1,    18,    -1,    -1,    -1,    82,    83,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,   110,   111,    -1,    -1,   114,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    -1,   132,    -1,   102,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   179,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    -1,   203,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   162,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,   235,
      -1,    -1,    -1,    56,    -1,   241,   242,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     224,   257,   258,    -1,    -1,   229,    -1,    -1,    -1,    -1,
      -1,    -1,   268,   269,    -1,    -1,    -1,   162,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   224,   102,
      -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,   295,
      -1,   297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   309,    -1,   311,    -1,    -1,    -1,    -1,
      -1,   317,   167,    -1,    -1,    -1,   290,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,   162,
      -1,    -1,    -1,    -1,    -1,   351,    -1,    -1,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   299,   102,   229,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   162,    -1,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,    -1,    -1,    -1,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,    -1,    -1,    -1,
      -1,    -1,   229,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,    40,    -1,    -1,    43,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    -1,    64,    65,    -1,
      67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    86,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,   145,    -1,
      -1,   148,    -1,    -1,    -1,   152,   153,    -1,    -1,    -1,
     157,   158,    -1,    -1,   161,    -1,    -1,    -1,    -1,    -1,
     167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   182,    -1,    -1,   185,   186,
     187,    -1,    -1,   190,   191,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   222,   223,   224,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,
      -1,   238,    -1,    40,    -1,    -1,    43,    -1,   245,    46,
      -1,    -1,   249,    -1,    -1,    -1,   253,    -1,   255,    -1,
     257,    -1,    -1,    -1,    -1,   262,    -1,    -1,    65,    -1,
      67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,   276,
      77,    -1,    79,    -1,    -1,   282,    -1,    84,    -1,    86,
      87,    88,    -1,    -1,    -1,    -1,    -1,    94,    -1,    96,
      -1,   298,   299,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   310,    -1,   312,    -1,    -1,    -1,    -1,
      -1,   318,    -1,    -1,   321,   322,    -1,    -1,    -1,    -1,
     127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,    -1,
      -1,    -1,    -1,    -1,    -1,   352,   153,    -1,   155,   156,
     157,   158,   359,    -1,   161,    -1,    -1,    -1,   165,    -1,
     167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   190,   191,    -1,    -1,    -1,   195,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   222,   223,    -1,    -1,    -1,
      -1,    -1,    -1,   230,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   255,    -1,
     257,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   282,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   298,   299,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     307,    -1,    -1,    -1,    -1,    -1,    -1,   314,    -1,    -1,
      -1,    -1,    -1,   320,    -1,   322,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   359
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    40,    43,    46,    59,    64,    65,    67,    68,    69,
      77,    84,    86,    87,    96,    97,   119,   128,   141,   145,
     148,   152,   153,   157,   158,   161,   167,   182,   185,   186,
     187,   190,   191,   205,   222,   223,   224,   236,   238,   245,
     249,   253,   255,   257,   262,   276,   282,   298,   299,   310,
     312,   318,   321,   322,   352,   359,   365,    66,    11,    53,
      71,   101,   120,   124,   138,   303,   399,     3,     4,   303,
     366,   404,   195,   201,   240,   266,   313,   358,   406,   295,
       4,    39,   112,   157,   158,   202,   255,   411,    27,   154,
     180,   184,   237,   278,   286,   287,   381,   413,    83,   100,
     182,   226,   262,   414,    39,    59,   112,   202,   299,   366,
     423,     4,    18,    39,    56,   102,   121,   162,   202,   210,
     218,   219,   224,   229,   306,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   355,   360,   361,   368,   376,   377,
     378,   425,    32,   426,   368,    43,    46,    76,    84,   146,
     200,   225,   227,   255,   322,   367,   368,    64,   366,   428,
     148,   429,    40,    43,    46,    65,    67,    68,    69,    77,
      79,    84,    86,    87,    88,    94,    96,   127,   145,   153,
     155,   156,   157,   158,   161,   165,   167,   190,   191,   195,
     205,   222,   223,   230,   255,   257,   282,   298,   299,   307,
     314,   320,   322,   359,   430,    83,   100,   476,    18,    40,
      43,    77,    84,    95,    96,   102,   127,   145,   161,   162,
     168,   190,   229,   282,   293,   322,   479,    66,   368,    61,
     293,   316,   560,    61,   293,   316,   559,    88,   117,   193,
     208,   270,   312,   322,   485,    15,    25,   113,   127,   164,
     215,   228,   488,   239,   506,     5,    66,    88,   143,   312,
     359,   368,   507,     5,   508,    57,   134,   234,   249,   313,
     524,    45,    64,    66,   189,   248,   293,   302,   544,    66,
     211,   354,   360,   362,   545,    38,   202,   240,   303,   366,
     376,   378,   546,     5,   312,   322,   368,   549,    70,   175,
     254,   263,   550,     4,   551,    88,   524,    61,   293,   316,
     558,   202,   303,   366,   561,    25,   113,   127,   215,   228,
     563,    50,   100,   109,   140,   305,   584,   585,     4,    36,
      47,    74,   153,   194,   263,   292,   300,   316,   394,     4,
     127,   214,   586,   303,   366,   588,    15,    22,   250,   253,
     377,   589,   239,   593,   303,   366,   594,     0,     5,   368,
      59,   366,   400,   279,     5,     4,   303,   366,   401,     5,
      31,   291,   402,   126,   366,   403,   126,   366,   405,   366,
       4,   201,   252,   259,   409,   195,   313,   357,   358,   366,
     408,   368,   142,   183,   407,   205,   366,    78,   179,   259,
     366,   410,     5,   366,   366,   366,     4,   157,   158,   255,
     412,   366,   366,     5,   235,   415,    30,   416,     5,   417,
       5,   421,     5,    30,   422,   366,     8,     9,    10,   366,
     372,   373,   374,   375,   366,   366,    39,   112,   202,   366,
     424,   366,   202,   376,   378,   366,    34,   107,   130,   131,
     139,   159,   169,   383,   366,     4,   368,   368,   368,   368,
     368,   368,   368,   368,   368,   368,   118,    66,    53,    71,
      88,   101,   120,   124,   138,   181,   433,   120,   435,   195,
     201,   240,   266,   313,   357,   358,   366,   418,   436,   295,
     439,   175,   440,   175,   184,   442,    65,    66,    69,    92,
     175,   194,   216,   282,   351,   376,   444,   366,   378,   447,
      59,   299,   376,   448,   290,   376,   378,   449,    32,   450,
     376,   378,   451,     4,   376,   378,   452,    44,    59,    81,
     101,   118,   122,   150,   151,   207,   217,   279,   280,   351,
     456,   221,   315,   462,    66,     5,    89,    61,   293,   316,
     467,    61,   293,   316,   466,     4,    88,   122,   454,     5,
      65,   378,   453,    15,   524,    45,    66,    81,   189,   248,
     293,   302,   463,    66,   240,   464,   294,    61,   293,   316,
     465,    20,   138,   247,   277,   468,    36,    47,    74,   153,
     194,   263,   316,   469,   378,    89,    15,   204,   474,   376,
     477,    66,    72,   480,    30,   481,    43,    87,   200,   482,
     153,   226,   269,   308,   483,   376,    17,    58,   116,   180,
     299,   376,   484,     5,     5,   314,   376,     4,     5,   376,
       4,     4,   201,   487,     5,     4,     4,   122,   366,     4,
       5,   157,   158,   255,   489,     5,   491,     5,   118,   157,
     158,   200,   255,   280,   492,    94,   112,   195,   505,     5,
     503,     5,   280,   504,     4,     5,   368,   368,   366,   366,
       5,     4,     5,    60,    66,    73,    75,    80,    83,    89,
     100,   106,   115,   132,   153,   170,   181,   182,   203,   226,
     240,   242,   257,   262,   269,   276,   295,   308,   309,   311,
     351,   509,    91,   176,   267,   285,   380,     5,     4,   205,
     212,   213,   248,   356,   379,   366,   376,   366,     5,   366,
      39,   112,   366,   548,   368,   366,   376,   378,   547,   366,
     383,   366,     4,   377,    54,    90,   144,   255,   552,     4,
       4,   366,     4,   153,   269,   553,     5,   376,     4,    39,
     112,   366,   562,   366,    98,    61,   122,   157,   158,   255,
     283,   564,   122,   583,    61,   118,   122,   157,   158,   162,
     200,   251,   255,   280,   283,   294,   565,   566,    61,   122,
     283,   582,     5,     4,    33,   108,   211,   557,    66,   368,
     395,    66,   368,   396,    66,   368,   397,    12,   197,   556,
     366,     4,   366,   233,   366,   398,   366,   280,     4,   366,
     366,     4,   234,   303,   592,     4,   297,   590,     4,   297,
     591,     4,   383,   126,   366,   595,   366,   366,     4,     5,
     366,    11,   366,   366,   366,    29,    95,   168,   259,   264,
     382,   382,     4,   205,   366,   366,     4,     4,     4,   366,
     366,   366,   366,   366,   366,   366,   366,     4,     4,     5,
       5,   376,     5,   366,   366,   372,   374,   374,   376,   366,
     366,   366,   366,   366,   366,   366,   376,   378,   375,   366,
     366,   375,   366,     5,   279,   104,   195,   434,   201,   259,
     437,   175,    78,   179,   259,   438,   142,   183,   419,   419,
       4,   441,     4,   443,   201,   266,   445,   184,   446,   175,
     383,   366,   366,   376,   376,   383,   383,   383,   376,   383,
     366,   376,     4,   459,     4,   378,   457,   204,     4,   171,
     322,   458,   204,   376,     4,   135,   303,   461,     5,     5,
     431,     4,   204,   137,   256,   369,   366,     4,     5,    60,
      66,   115,   132,   147,   153,   160,   216,   235,   240,   242,
     268,   269,   276,   295,   351,   518,   378,   196,   196,    66,
     470,    66,   471,    66,   472,   233,   473,   366,     5,   432,
     234,   475,   377,   383,     5,   376,   376,   376,   376,     4,
       4,     4,   368,     4,     4,   204,   366,    13,    14,    61,
     198,   199,   273,   283,   284,   315,    87,    87,    87,     5,
       5,    13,    14,    61,   198,   199,   273,   283,   284,   288,
     315,    87,    87,   162,    87,   162,   162,   167,   377,   495,
     500,    87,   162,     5,   493,     4,     4,    13,    61,   198,
     273,   283,   315,     5,     5,     4,   366,   377,    19,    20,
      21,    48,    49,    52,    55,    62,    66,    74,    75,    82,
      83,   100,   106,   110,   111,   114,   132,   153,   179,   203,
     233,   235,   241,   242,   257,   258,   268,   269,   295,   297,
     309,   311,   317,   351,    66,    80,    89,   100,   132,   153,
     203,   242,   269,   309,   311,     4,    29,   166,   221,   247,
     512,     5,    63,   105,   244,   260,   261,   353,   354,   517,
     100,   510,    16,   269,   515,    39,   112,   202,   516,     4,
       5,    16,   220,   304,   366,   269,   517,   525,   127,   517,
     526,    35,    39,   112,   136,   202,   303,   366,   527,   376,
     368,    92,   100,   106,   123,   129,   153,   163,   203,   211,
     257,   269,   285,   530,    39,   112,   202,     5,   269,   296,
     534,    16,   125,   173,   220,   304,   535,   297,   368,   536,
       5,   100,   106,   312,    16,    16,     4,   366,   366,   366,
     366,   366,   366,   383,   366,   366,   375,   366,     4,   383,
       4,    39,   112,   202,   274,   554,    39,   112,   202,   274,
     555,     4,    98,     5,     5,    87,    87,    87,     4,     5,
       5,    87,     5,    87,   162,    87,   162,   566,    61,   122,
     162,   283,   570,    61,   122,   283,   581,    87,   162,    61,
     122,   283,   568,     4,    61,   122,   283,   567,     5,     5,
       4,     4,     5,     5,     5,   366,   366,   366,     4,   366,
     587,   366,   366,   377,    64,     4,     4,     5,     4,     4,
       5,     4,    98,   271,   384,   366,   366,    11,     5,    11,
     366,   366,    11,     4,    11,     4,     4,   366,   366,   366,
     366,   366,   366,   366,     4,   368,     4,     4,   383,   376,
     383,   366,   366,   366,   376,   366,   375,   366,   366,     5,
       5,   366,   378,   366,   376,   366,   383,   383,   384,   384,
     384,   383,   375,   366,   383,   366,   369,   460,   171,     5,
       4,   383,   162,   162,     4,     5,     4,     4,   366,   455,
      37,    37,   366,    19,    20,    21,    48,    49,    52,    59,
      62,    66,    74,    75,    82,   110,   111,   114,   132,   153,
     179,   188,   233,   241,   242,   258,   269,   295,   297,   307,
     317,   351,    66,   132,   160,   242,   295,    29,   166,   221,
     247,   519,   366,   216,   366,   520,    16,   366,   268,   530,
     268,   216,   366,   521,   297,   522,    16,    99,   366,   366,
       5,   384,     4,     4,    56,   376,     4,     5,   486,   366,
       5,     5,     5,   162,   191,   388,   388,   170,   275,   386,
       4,     4,     5,     5,   490,   490,   490,   281,   281,     5,
       5,     5,    16,   164,   387,   387,   386,     4,     4,   386,
       5,     5,   494,     5,   501,     5,   502,   501,   502,   167,
     350,   377,   498,     5,   497,     5,   501,   502,     5,    13,
      14,    61,   198,   199,   273,   283,   284,   288,   315,     4,
       4,     5,     5,   388,   386,     4,     5,     5,   383,    82,
     155,   231,   232,   246,   289,   391,     6,     7,   366,   371,
     247,   247,   247,   106,    39,    66,   100,   106,   112,   132,
     153,   170,   203,   242,   257,   269,   297,   309,   311,   312,
     351,   511,   247,     5,    26,   172,   247,   293,   142,   106,
      21,    49,    52,    82,   111,   114,   235,   268,    21,    49,
      52,    55,    82,   111,   114,   235,   268,   295,    39,   247,
     247,   106,     5,   220,    26,   233,    35,   136,   303,   366,
     272,   279,   253,   376,   530,    39,   133,   233,   293,   253,
     220,     5,     5,   257,    26,   233,     4,     5,     5,   220,
      35,   136,   303,   366,   530,   220,   368,     4,     4,   366,
       5,   315,    21,    26,    48,    49,    51,    52,    62,    74,
      75,    82,    85,   103,   110,   111,   114,   179,   235,   241,
     258,   268,   296,   297,   317,   362,   513,   366,   366,   366,
     366,   366,   517,   376,     5,     4,     5,   366,   366,   376,
     366,   368,   366,   366,   517,     5,     5,   366,   366,   368,
       5,    16,     5,     5,   366,   366,   375,   366,   366,     4,
     366,   366,   112,   366,   366,   112,     4,    41,    42,   177,
     178,   206,   393,   393,    61,   122,   283,   578,    61,   122,
     283,   575,    61,   122,   283,   572,   393,     5,    61,   122,
     283,   569,    61,   122,   283,   580,    61,   122,   283,   579,
      61,   122,   283,   577,    61,   122,   283,   576,     5,     5,
      61,   122,   283,   571,     4,     5,     5,     4,    61,   122,
     283,   574,    61,   122,   283,   573,     5,     5,     4,     5,
       5,     4,   393,   393,   393,   366,   366,   366,     4,   376,
     366,   383,   377,     5,     5,    11,   366,   376,   378,   366,
      11,   366,   366,   366,    59,   366,     4,   366,   366,     4,
     366,   366,   366,   366,    46,   282,   420,     5,   368,   368,
     383,   366,     4,     4,     4,   383,   376,   366,   366,   366,
     366,   383,   376,   384,   375,   366,     4,   384,   366,     4,
     378,     5,    23,    24,    98,   385,     4,   376,   366,   366,
       4,   366,     5,    82,   155,   231,   232,   246,   289,   376,
     378,   247,   247,   247,    20,   247,   376,   247,    26,   172,
     247,   293,   142,    20,   247,   247,   247,    20,   247,    26,
     174,   233,   174,   272,   279,   174,   233,   301,   530,   133,
     174,   233,   293,     4,   257,    26,   174,   233,   530,   216,
     366,   366,   366,   366,   366,   366,   204,   366,   366,    19,
     243,   478,     4,     4,   366,   388,   388,   388,     4,   388,
     388,   388,    13,    14,    61,   198,   199,   273,   283,   284,
     315,   387,   388,   388,   388,   388,   388,     4,   388,   388,
       4,   387,    13,    14,    61,   198,   199,   273,   283,   284,
     315,     5,    13,    14,    61,   198,   199,   273,   283,   284,
     288,   315,    13,    14,    61,   198,   199,   273,   283,   284,
     315,     5,   496,     5,   499,     5,     5,    13,    14,    61,
     198,   199,   273,   283,   284,   288,   315,     5,    13,    14,
      61,   198,   199,   273,   283,   284,   288,   315,   281,     5,
       5,     5,   387,   387,   386,     4,     4,   386,     5,     4,
       4,   388,   388,     4,   388,   388,     5,   368,   376,   378,
       5,   366,   366,     5,   366,     5,   371,   106,   203,   257,
     106,   203,   257,     5,   366,   368,     5,   366,   376,   368,
       5,   371,   247,   247,    20,   247,    20,   247,   247,    20,
     247,   319,   319,     4,     4,     4,   511,     4,     4,     4,
     319,   319,     4,     5,     4,   366,     5,   366,     5,   371,
     368,   376,   376,   366,    26,    48,    51,    62,    85,   103,
     362,   389,     4,   366,   383,   368,     5,   376,   376,   366,
     368,   368,   376,   376,   366,   368,   366,     5,   366,   233,
     233,   366,   366,   233,   366,   233,   366,   366,   523,   531,
     366,   233,   233,   366,   366,   366,   366,   366,   366,   366,
     366,     5,   315,   366,   514,   366,   366,   233,   366,   366,
     366,   366,   376,   383,     5,     4,     4,   366,   366,   383,
     366,   366,   366,   376,   517,   366,   366,     5,     4,   366,
     366,   366,   366,     5,     5,     4,     5,     5,     4,     5,
       5,     4,   393,     5,     5,     4,     5,     5,     4,     5,
       5,     4,     5,     5,     4,     5,     5,     4,     4,     4,
       5,     5,     4,     4,     5,     5,     4,     5,     5,     4,
     366,   366,   366,   366,   383,   366,   376,   378,   366,   383,
     366,   366,   366,   366,   366,     5,   366,   366,   366,     4,
     366,   366,   366,   366,     4,   376,   366,   383,   184,   381,
     366,   381,   384,   383,   376,   366,   366,     4,   366,   376,
     376,   366,   369,     5,     5,     5,     5,     5,   376,   383,
     376,   376,   376,   376,   378,   376,   383,   376,   376,   376,
     378,   376,   376,   376,   376,   378,   376,   376,   376,   366,
     376,   376,   376,   376,   376,   376,   376,   366,   366,     4,
     366,     5,   366,   388,     5,     5,     5,   386,     4,     4,
       5,   388,   387,     4,   388,     5,     5,     5,   387,   387,
     386,     4,     4,     5,   281,     5,     5,     5,   387,   387,
     386,     4,     4,   386,     5,     5,     5,     5,   387,   387,
     386,     4,     4,     5,    13,    14,    61,   198,   199,   273,
     283,   284,   315,    13,    14,    61,   198,   199,   273,   283,
     284,   315,    13,    14,    61,   198,   199,   273,   283,   284,
     315,   281,     5,     5,     5,   387,   387,   386,     4,     4,
     386,     5,   281,     5,     5,     5,   387,   387,   386,     4,
       4,   386,     5,   387,     4,     4,   387,     4,     4,   388,
       5,   383,   376,   366,   366,   376,   366,     5,   371,     5,
     376,   368,     5,   376,   383,     5,   371,   366,   366,   366,
     366,   366,   366,   366,   366,   366,     4,     4,     5,     4,
       4,   366,   376,   366,     5,   371,   368,   383,   383,   366,
     375,   383,   383,   366,   383,   383,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   366,    55,    66,    93,   132,
     295,   297,   351,   528,   529,   530,   542,   543,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     376,     5,   366,   366,   366,   366,     4,     4,   383,   384,
       5,     5,   375,   366,     4,   383,   376,     4,   393,   393,
     393,   393,   393,   393,   393,   393,   393,   371,   366,   366,
     366,   383,   366,   375,   366,   366,    11,     5,     5,   366,
     366,   366,   366,   366,   366,     4,   383,   376,   366,   366,
     384,   385,   366,     5,   366,   376,   378,     5,     5,     5,
       5,     5,   383,   385,   385,   385,   383,   385,   384,   385,
     385,   383,   385,   385,   385,   383,   385,   385,   383,   376,
     385,   383,   385,   385,   383,   385,   383,     4,   376,   378,
       5,   366,     4,   388,   387,     4,   387,   387,     4,     4,
     387,     4,   387,     5,     5,     5,   387,   387,   386,     4,
       4,     5,     5,     5,     5,   387,   387,   386,     4,     4,
       5,     5,     5,     5,   387,   387,   386,     4,     4,     5,
     387,   388,   388,   388,   388,   388,     4,   388,   388,     4,
     387,   387,   388,   388,   388,   388,   388,     4,   388,   388,
       4,   387,   387,     4,     4,     4,   377,   385,     4,   376,
     385,   366,   376,     4,   385,   385,   376,     4,   366,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   376,
     385,   366,   376,     4,   375,   375,   376,   375,   375,   376,
     376,   375,   375,   366,   366,   366,   366,   366,   366,   371,
     366,   366,   366,   363,   363,   363,   363,   363,   363,   363,
     529,   363,   371,   366,   366,   366,   366,   371,   366,   366,
     366,   366,   366,   366,   383,   366,   315,   370,   371,   366,
     366,   384,   368,   376,   376,   384,   383,     4,   366,   375,
     366,    59,   366,     5,     5,     4,     4,   366,   366,   366,
       4,   381,   385,     5,   383,     4,     5,     4,     5,   376,
       5,   384,   385,   384,   384,   384,     5,   383,     4,   366,
     388,   387,   387,     4,   387,   388,   388,   388,   388,   388,
       4,   388,   388,   387,   388,   388,   388,   388,   388,     4,
     388,   388,   387,   388,   388,   388,   388,   388,     4,   388,
     388,   387,   388,   387,     4,   388,   388,   387,     4,   388,
     387,   383,   376,   385,     4,   383,   366,   383,   366,   366,
     366,   385,     4,   383,   366,   375,   385,   366,   375,   385,
     385,   376,   366,     4,   390,   390,   366,   366,   390,   371,
     390,   531,   376,   511,     5,     4,     5,     5,     5,     4,
     368,   371,   390,   390,   366,   366,   371,   366,   366,   366,
     366,   366,   375,   366,     5,   531,   366,   390,   368,   532,
     533,   383,   383,   368,   384,     4,     5,   366,     5,     4,
       4,     4,     4,     4,     4,   366,     4,    31,   192,   291,
     427,   376,     5,    31,   192,   291,   392,   376,     4,   427,
     366,   387,   387,   388,   387,   388,   387,   388,   388,   387,
     388,   387,   366,   385,   376,   376,   366,   376,   366,   376,
     376,   366,   376,   385,     4,   531,   531,   370,   366,   531,
       4,   531,   383,     5,     4,     4,   531,   531,   370,   366,
       4,   531,   531,   366,   376,   531,   531,   531,   532,   539,
     540,   530,   537,   538,   368,     4,     5,     5,     4,     4,
       4,   195,   313,   358,   366,   418,   427,     4,   376,   427,
       4,   388,   388,   388,   388,   388,   377,   385,   385,   366,
     385,     4,   385,   385,   366,   385,   366,   531,   531,     4,
     366,   531,     5,   366,   531,     4,   366,   531,   383,   539,
     541,   542,   363,   538,     5,     5,   366,   419,   366,   419,
     383,   385,     4,   376,   378,     4,   371,   370,   366,   366,
     370,   366,   376,   542,   368,     5,     5,   366,   366,   366,
     366,   392,     5,   376,   378,   383,   376,   378,   531,   366,
       4,   531,   366,   385,     5,     5,   366,     5,   366,   383,
     383,     4,   531,     4,     5,     5,     5,   370,   370,   531,
     531,   531
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
#line 470 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 471 "frame/parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 7:
#line 473 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 474 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 476 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 483 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 23:
#line 489 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 24:
#line 490 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 491 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 29:
#line 495 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 36:
#line 502 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 40:
#line 506 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 43:
#line 509 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 48:
#line 514 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 50:
#line 516 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 52:
#line 518 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 54:
#line 520 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 59:
#line 527 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 60:
#line 528 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 61:
#line 531 "frame/parser.Y"
    {yydebug=(yyvsp[(1) - (1)].integer);;}
    break;

  case 62:
#line 532 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 533 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 534 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 535 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 536 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 537 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 538 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 539 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 540 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 541 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 72:
#line 544 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 73:
#line 546 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 74:
#line 547 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 75:
#line 548 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 76:
#line 549 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 77:
#line 551 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 78:
#line 552 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 79:
#line 553 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 80:
#line 554 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 81:
#line 557 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 82:
#line 558 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 83:
#line 559 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 84:
#line 560 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 85:
#line 561 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 86:
#line 564 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 87:
#line 565 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 88:
#line 568 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 89:
#line 569 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 90:
#line 570 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 91:
#line 573 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 92:
#line 576 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 93:
#line 579 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 94:
#line 583 "frame/parser.Y"
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
#line 595 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 96:
#line 602 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 97:
#line 609 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 98:
#line 616 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 99:
#line 617 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 100:
#line 618 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 101:
#line 619 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 102:
#line 620 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 103:
#line 623 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 104:
#line 624 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 105:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 106:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 107:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 108:
#line 628 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 109:
#line 629 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 110:
#line 630 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 111:
#line 631 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 112:
#line 632 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 113:
#line 633 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 114:
#line 634 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 115:
#line 635 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 116:
#line 636 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 117:
#line 637 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 118:
#line 638 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 119:
#line 639 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 120:
#line 640 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 121:
#line 641 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 122:
#line 642 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 123:
#line 643 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 124:
#line 644 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 125:
#line 645 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 126:
#line 646 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 127:
#line 647 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 128:
#line 648 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 129:
#line 649 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 130:
#line 650 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 131:
#line 653 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 132:
#line 654 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 133:
#line 657 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 134:
#line 658 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 135:
#line 659 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 136:
#line 660 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 137:
#line 661 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 138:
#line 662 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 139:
#line 665 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 140:
#line 666 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 141:
#line 667 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 142:
#line 668 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 143:
#line 669 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 144:
#line 672 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 145:
#line 673 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 146:
#line 674 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 147:
#line 675 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 148:
#line 676 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 149:
#line 677 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 150:
#line 678 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 151:
#line 679 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 152:
#line 682 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 153:
#line 683 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 154:
#line 684 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 155:
#line 685 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 156:
#line 686 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 157:
#line 689 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 158:
#line 690 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 159:
#line 691 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 160:
#line 692 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 161:
#line 693 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 162:
#line 694 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 163:
#line 695 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 164:
#line 696 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 165:
#line 699 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 166:
#line 700 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 167:
#line 701 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 168:
#line 704 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 169:
#line 705 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 170:
#line 706 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 171:
#line 707 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 172:
#line 710 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 173:
#line 711 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 174:
#line 712 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 175:
#line 715 "frame/parser.Y"
    {;}
    break;

  case 176:
#line 716 "frame/parser.Y"
    {;}
    break;

  case 177:
#line 717 "frame/parser.Y"
    {;}
    break;

  case 178:
#line 720 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 179:
#line 721 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 180:
#line 722 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 181:
#line 725 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 182:
#line 726 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 183:
#line 727 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 184:
#line 728 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 185:
#line 729 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 186:
#line 730 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 187:
#line 731 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 188:
#line 732 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 189:
#line 735 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 190:
#line 736 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 191:
#line 739 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 192:
#line 740 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 193:
#line 741 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 194:
#line 742 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 195:
#line 743 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 196:
#line 744 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 197:
#line 747 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 198:
#line 748 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 199:
#line 749 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 200:
#line 750 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 201:
#line 753 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 202:
#line 754 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 203:
#line 755 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 204:
#line 756 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 205:
#line 757 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 206:
#line 758 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 211:
#line 765 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 212:
#line 766 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 213:
#line 767 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 214:
#line 768 "frame/parser.Y"
    {fr->set3dSyncCmd((yyvsp[(2) - (2)].integer));}
    break;

  case 215:
#line 770 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 216:
#line 773 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 217:
#line 774 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 218:
#line 777 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 219:
#line 778 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 220:
#line 781 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 221:
#line 782 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 222:
#line 785 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 223:
#line 787 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 225:
#line 791 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 226:
#line 792 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 229:
#line 795 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 231:
#line 797 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 232:
#line 800 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 233:
#line 801 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 234:
#line 804 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 235:
#line 805 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 236:
#line 807 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 237:
#line 809 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 238:
#line 810 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 239:
#line 811 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 240:
#line 813 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 241:
#line 815 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 242:
#line 818 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 243:
#line 819 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 244:
#line 822 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 245:
#line 824 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 246:
#line 827 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 247:
#line 829 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 248:
#line 832 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 249:
#line 836 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 250:
#line 837 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 252:
#line 841 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 253:
#line 842 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 254:
#line 843 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 258:
#line 849 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 259:
#line 850 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 261:
#line 853 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 262:
#line 858 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 263:
#line 859 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 264:
#line 862 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 265:
#line 863 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 266:
#line 864 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 267:
#line 865 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 268:
#line 866 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 269:
#line 869 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 270:
#line 870 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 271:
#line 871 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 272:
#line 872 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 273:
#line 875 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 274:
#line 877 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 275:
#line 882 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 276:
#line 887 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 277:
#line 894 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 278:
#line 896 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 279:
#line 898 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 280:
#line 900 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 284:
#line 907 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 285:
#line 909 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 286:
#line 911 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 287:
#line 913 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 288:
#line 915 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 289:
#line 916 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 295:
#line 927 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 296:
#line 930 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 297:
#line 933 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 298:
#line 939 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 299:
#line 944 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 300:
#line 947 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 301:
#line 948 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 302:
#line 951 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 303:
#line 952 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 304:
#line 954 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 305:
#line 960 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 306:
#line 961 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 307:
#line 962 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 308:
#line 963 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 309:
#line 966 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 310:
#line 967 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 311:
#line 970 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 312:
#line 971 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 313:
#line 974 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 314:
#line 975 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 315:
#line 979 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 316:
#line 981 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 317:
#line 984 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 318:
#line 986 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 319:
#line 989 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 321:
#line 991 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 322:
#line 992 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 323:
#line 993 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 324:
#line 996 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 325:
#line 998 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 326:
#line 999 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 327:
#line 1000 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 328:
#line 1001 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 329:
#line 1005 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 330:
#line 1007 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 331:
#line 1008 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 332:
#line 1009 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 333:
#line 1012 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 334:
#line 1014 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 335:
#line 1016 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 336:
#line 1018 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 337:
#line 1021 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 338:
#line 1024 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 339:
#line 1025 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 340:
#line 1026 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 341:
#line 1027 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 342:
#line 1030 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 343:
#line 1031 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 344:
#line 1034 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 345:
#line 1037 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 346:
#line 1038 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 360:
#line 1052 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 363:
#line 1055 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 364:
#line 1056 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 370:
#line 1062 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 371:
#line 1063 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 374:
#line 1066 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 375:
#line 1067 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 377:
#line 1070 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 379:
#line 1072 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 381:
#line 1074 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 383:
#line 1076 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 384:
#line 1078 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 387:
#line 1081 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 388:
#line 1085 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 389:
#line 1087 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 390:
#line 1091 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 391:
#line 1093 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 392:
#line 1096 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 393:
#line 1097 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 394:
#line 1098 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 395:
#line 1099 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 396:
#line 1100 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 397:
#line 1101 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 399:
#line 1103 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 400:
#line 1106 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 401:
#line 1107 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 402:
#line 1108 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 403:
#line 1111 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 404:
#line 1114 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 405:
#line 1116 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 406:
#line 1118 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 407:
#line 1119 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 408:
#line 1120 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 410:
#line 1122 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 412:
#line 1125 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 413:
#line 1131 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 414:
#line 1132 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 415:
#line 1135 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 416:
#line 1136 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 417:
#line 1137 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 418:
#line 1140 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 419:
#line 1141 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 421:
#line 1147 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 422:
#line 1149 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 423:
#line 1151 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 424:
#line 1154 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 426:
#line 1156 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 427:
#line 1160 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 428:
#line 1164 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 430:
#line 1166 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 431:
#line 1167 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 432:
#line 1168 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 433:
#line 1169 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 434:
#line 1170 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 436:
#line 1172 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 437:
#line 1173 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 438:
#line 1176 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 439:
#line 1177 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 440:
#line 1178 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 441:
#line 1181 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 442:
#line 1182 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 443:
#line 1186 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 444:
#line 1188 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 445:
#line 1196 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 446:
#line 1198 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 447:
#line 1200 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 448:
#line 1203 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 449:
#line 1205 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 450:
#line 1206 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 451:
#line 1209 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 452:
#line 1212 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 453:
#line 1214 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 454:
#line 1218 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 455:
#line 1220 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 456:
#line 1223 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 457:
#line 1227 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 458:
#line 1228 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 459:
#line 1230 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 460:
#line 1233 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 461:
#line 1234 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 463:
#line 1238 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 464:
#line 1239 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 465:
#line 1240 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 466:
#line 1243 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 467:
#line 1245 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 468:
#line 1246 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 470:
#line 1248 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 474:
#line 1252 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 475:
#line 1253 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 476:
#line 1254 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 477:
#line 1256 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 479:
#line 1258 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 480:
#line 1261 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 481:
#line 1263 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 482:
#line 1265 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 483:
#line 1266 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 484:
#line 1267 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 485:
#line 1268 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 486:
#line 1271 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 487:
#line 1272 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 488:
#line 1276 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 489:
#line 1278 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 490:
#line 1281 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 491:
#line 1284 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 492:
#line 1285 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 493:
#line 1287 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 494:
#line 1289 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 495:
#line 1291 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 496:
#line 1294 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 497:
#line 1295 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 498:
#line 1296 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 499:
#line 1299 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 500:
#line 1300 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 501:
#line 1301 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 502:
#line 1302 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 503:
#line 1303 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 504:
#line 1304 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 505:
#line 1305 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 506:
#line 1308 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 507:
#line 1311 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 508:
#line 1312 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 509:
#line 1313 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 510:
#line 1316 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 511:
#line 1317 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 512:
#line 1318 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 513:
#line 1321 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 514:
#line 1322 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 515:
#line 1323 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 516:
#line 1326 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 517:
#line 1327 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 518:
#line 1328 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 519:
#line 1329 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 520:
#line 1330 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 521:
#line 1331 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 526:
#line 1338 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 527:
#line 1339 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 528:
#line 1340 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 529:
#line 1343 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 530:
#line 1344 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 531:
#line 1347 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 532:
#line 1348 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 533:
#line 1351 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 534:
#line 1352 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 535:
#line 1355 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 536:
#line 1356 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 537:
#line 1359 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 539:
#line 1361 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 540:
#line 1364 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 541:
#line 1365 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 543:
#line 1369 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 544:
#line 1373 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 545:
#line 1376 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 546:
#line 1383 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 547:
#line 1384 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 548:
#line 1387 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 549:
#line 1388 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 552:
#line 1391 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 553:
#line 1392 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 554:
#line 1393 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 555:
#line 1394 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 557:
#line 1396 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 558:
#line 1397 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 559:
#line 1398 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 561:
#line 1400 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 562:
#line 1401 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 563:
#line 1402 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 564:
#line 1403 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 566:
#line 1407 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 567:
#line 1410 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 568:
#line 1411 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 569:
#line 1414 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 570:
#line 1415 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 571:
#line 1416 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 572:
#line 1417 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 573:
#line 1420 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 574:
#line 1421 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 575:
#line 1422 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 576:
#line 1423 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 577:
#line 1426 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 578:
#line 1427 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 579:
#line 1428 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 580:
#line 1429 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 581:
#line 1430 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 582:
#line 1431 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 583:
#line 1434 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 584:
#line 1435 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 585:
#line 1436 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 588:
#line 1440 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 589:
#line 1441 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 590:
#line 1444 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 591:
#line 1447 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 592:
#line 1448 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 593:
#line 1452 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 594:
#line 1454 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 595:
#line 1455 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 602:
#line 1467 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 603:
#line 1469 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 604:
#line 1471 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 605:
#line 1472 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 606:
#line 1474 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 607:
#line 1476 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 608:
#line 1478 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 609:
#line 1480 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 610:
#line 1482 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 614:
#line 1488 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 615:
#line 1489 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 616:
#line 1490 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 617:
#line 1491 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 618:
#line 1492 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 619:
#line 1494 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 620:
#line 1495 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 621:
#line 1496 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 622:
#line 1497 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 623:
#line 1500 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 624:
#line 1504 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 625:
#line 1506 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 626:
#line 1508 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 627:
#line 1510 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 628:
#line 1512 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 629:
#line 1514 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 630:
#line 1516 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 631:
#line 1518 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 632:
#line 1521 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 633:
#line 1523 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 634:
#line 1525 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 644:
#line 1537 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 645:
#line 1538 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 646:
#line 1539 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 647:
#line 1540 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 648:
#line 1541 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 649:
#line 1542 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 650:
#line 1544 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 651:
#line 1546 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 652:
#line 1547 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 653:
#line 1548 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 654:
#line 1549 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 655:
#line 1552 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 656:
#line 1553 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 657:
#line 1554 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 658:
#line 1555 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 659:
#line 1556 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 660:
#line 1558 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 661:
#line 1559 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 662:
#line 1560 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 663:
#line 1561 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 669:
#line 1572 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 670:
#line 1575 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 671:
#line 1578 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 672:
#line 1581 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 673:
#line 1584 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 674:
#line 1587 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 675:
#line 1590 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 676:
#line 1593 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 677:
#line 1596 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 678:
#line 1601 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 679:
#line 1604 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 680:
#line 1607 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 681:
#line 1610 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 682:
#line 1613 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 683:
#line 1616 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 684:
#line 1619 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 685:
#line 1622 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 686:
#line 1625 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 687:
#line 1628 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 688:
#line 1631 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 689:
#line 1636 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 690:
#line 1639 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 691:
#line 1642 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 692:
#line 1645 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 693:
#line 1648 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 694:
#line 1651 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 695:
#line 1654 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 696:
#line 1657 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 697:
#line 1660 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 698:
#line 1665 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 699:
#line 1667 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 700:
#line 1669 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 701:
#line 1671 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 702:
#line 1673 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 703:
#line 1675 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 704:
#line 1680 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 705:
#line 1682 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 706:
#line 1684 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 707:
#line 1688 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 708:
#line 1691 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 709:
#line 1694 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 710:
#line 1697 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 711:
#line 1700 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 712:
#line 1703 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 713:
#line 1706 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 714:
#line 1709 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 715:
#line 1712 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 716:
#line 1715 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 717:
#line 1718 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 718:
#line 1722 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 719:
#line 1723 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 720:
#line 1724 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 721:
#line 1725 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 722:
#line 1726 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 723:
#line 1727 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 724:
#line 1729 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 725:
#line 1731 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 726:
#line 1732 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 727:
#line 1733 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 728:
#line 1734 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 729:
#line 1737 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 730:
#line 1738 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 731:
#line 1739 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 732:
#line 1740 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 733:
#line 1741 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 734:
#line 1743 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 735:
#line 1744 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 736:
#line 1745 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 737:
#line 1746 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 738:
#line 1750 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 739:
#line 1752 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 740:
#line 1753 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 741:
#line 1755 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 742:
#line 1757 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 743:
#line 1759 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 744:
#line 1762 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 745:
#line 1763 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 746:
#line 1766 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 747:
#line 1767 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 748:
#line 1768 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 749:
#line 1771 "frame/parser.Y"
    {;}
    break;

  case 750:
#line 1774 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 751:
#line 1775 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 752:
#line 1776 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 753:
#line 1777 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 754:
#line 1778 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 755:
#line 1779 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 756:
#line 1780 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 757:
#line 1784 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 759:
#line 1792 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 760:
#line 1793 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 761:
#line 1795 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 762:
#line 1797 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 763:
#line 1798 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 764:
#line 1799 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 766:
#line 1800 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 769:
#line 1803 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 770:
#line 1804 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 771:
#line 1806 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 772:
#line 1808 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 773:
#line 1810 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 774:
#line 1813 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 775:
#line 1815 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 776:
#line 1816 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 777:
#line 1818 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 778:
#line 1821 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 779:
#line 1824 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 780:
#line 1828 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 781:
#line 1831 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 782:
#line 1834 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 783:
#line 1837 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 784:
#line 1841 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 785:
#line 1845 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 786:
#line 1850 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 787:
#line 1854 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 788:
#line 1856 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 789:
#line 1857 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 790:
#line 1859 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 791:
#line 1861 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 792:
#line 1863 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 793:
#line 1865 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 794:
#line 1866 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 795:
#line 1868 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 796:
#line 1870 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 797:
#line 1873 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 798:
#line 1877 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 799:
#line 1881 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 800:
#line 1883 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 801:
#line 1885 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 802:
#line 1887 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 803:
#line 1889 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 804:
#line 1891 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 805:
#line 1893 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 806:
#line 1895 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 807:
#line 1897 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 808:
#line 1899 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 809:
#line 1901 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 810:
#line 1903 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 811:
#line 1905 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 812:
#line 1907 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 813:
#line 1908 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 814:
#line 1910 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 815:
#line 1912 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 816:
#line 1913 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 817:
#line 1914 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 818:
#line 1916 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 819:
#line 1918 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 820:
#line 1919 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 821:
#line 1920 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 822:
#line 1921 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 823:
#line 1923 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 824:
#line 1925 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 825:
#line 1929 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 826:
#line 1932 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 827:
#line 1935 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 828:
#line 1939 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 829:
#line 1943 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 830:
#line 1948 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 831:
#line 1952 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 832:
#line 1953 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 833:
#line 1954 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 834:
#line 1956 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 835:
#line 1958 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 836:
#line 1962 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 837:
#line 1963 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 838:
#line 1964 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 839:
#line 1966 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 840:
#line 1969 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 841:
#line 1972 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 842:
#line 1975 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 843:
#line 1976 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 844:
#line 1980 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 845:
#line 1984 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 846:
#line 1986 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 847:
#line 1987 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 848:
#line 1989 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 849:
#line 1992 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 850:
#line 1995 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 851:
#line 1996 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 852:
#line 1998 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 853:
#line 1999 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 854:
#line 2000 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 855:
#line 2002 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 856:
#line 2003 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 857:
#line 2005 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 858:
#line 2008 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 859:
#line 2011 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 860:
#line 2013 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 861:
#line 2014 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 865:
#line 2019 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 866:
#line 2020 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 867:
#line 2022 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 868:
#line 2024 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 869:
#line 2026 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 870:
#line 2027 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 874:
#line 2033 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 875:
#line 2034 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 876:
#line 2035 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 877:
#line 2036 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 878:
#line 2037 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 879:
#line 2038 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 880:
#line 2039 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 881:
#line 2040 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 882:
#line 2041 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 883:
#line 2042 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 884:
#line 2044 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 885:
#line 2046 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 886:
#line 2047 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 887:
#line 2048 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 888:
#line 2049 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 889:
#line 2050 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 890:
#line 2052 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 891:
#line 2053 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 892:
#line 2054 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 893:
#line 2055 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 894:
#line 2056 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 895:
#line 2058 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 896:
#line 2059 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 897:
#line 2060 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 898:
#line 2061 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 899:
#line 2062 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 900:
#line 2063 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 901:
#line 2066 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 902:
#line 2067 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 903:
#line 2068 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 904:
#line 2069 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 905:
#line 2070 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 906:
#line 2071 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 907:
#line 2072 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 908:
#line 2073 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 909:
#line 2074 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 910:
#line 2075 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 911:
#line 2076 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 912:
#line 2077 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 913:
#line 2078 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 914:
#line 2079 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 915:
#line 2080 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 916:
#line 2081 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 917:
#line 2082 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 918:
#line 2083 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 919:
#line 2084 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 920:
#line 2085 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 921:
#line 2086 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 922:
#line 2089 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 923:
#line 2090 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 924:
#line 2091 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 925:
#line 2092 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 926:
#line 2093 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 927:
#line 2095 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 928:
#line 2105 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 929:
#line 2113 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 930:
#line 2122 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 931:
#line 2130 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 932:
#line 2137 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 933:
#line 2144 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 934:
#line 2152 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 935:
#line 2160 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 936:
#line 2165 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 937:
#line 2170 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 938:
#line 2175 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 939:
#line 2180 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 940:
#line 2185 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 941:
#line 2190 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 942:
#line 2195 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 943:
#line 2204 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 944:
#line 2214 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 945:
#line 2224 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 946:
#line 2233 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 947:
#line 2241 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 948:
#line 2251 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 949:
#line 2261 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 950:
#line 2271 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 951:
#line 2283 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 952:
#line 2292 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 954:
#line 2300 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 955:
#line 2302 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 956:
#line 2304 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 957:
#line 2309 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 958:
#line 2312 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 959:
#line 2313 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 960:
#line 2314 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 961:
#line 2321 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 962:
#line 2323 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 963:
#line 2324 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 964:
#line 2327 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 965:
#line 2328 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 966:
#line 2329 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 967:
#line 2330 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 968:
#line 2331 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 969:
#line 2332 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 970:
#line 2333 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 972:
#line 2337 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 973:
#line 2338 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 974:
#line 2339 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 975:
#line 2340 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 976:
#line 2341 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 977:
#line 2344 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 978:
#line 2346 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 979:
#line 2348 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 980:
#line 2350 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 981:
#line 2352 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 982:
#line 2354 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 983:
#line 2356 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 984:
#line 2357 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 985:
#line 2358 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 986:
#line 2360 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 987:
#line 2362 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 988:
#line 2365 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 989:
#line 2367 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 990:
#line 2368 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 991:
#line 2369 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 992:
#line 2371 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 993:
#line 2373 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 994:
#line 2376 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 995:
#line 2379 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 996:
#line 2380 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 997:
#line 2381 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 998:
#line 2382 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 999:
#line 2384 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1000:
#line 2385 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1001:
#line 2386 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1002:
#line 2387 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1003:
#line 2388 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1004:
#line 2390 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1005:
#line 2392 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1006:
#line 2394 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1007:
#line 2396 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1008:
#line 2398 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1009:
#line 2399 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1010:
#line 2401 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1011:
#line 2403 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1012:
#line 2405 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1013:
#line 2406 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1014:
#line 2407 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1015:
#line 2409 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1016:
#line 2411 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1017:
#line 2414 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1018:
#line 2417 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1019:
#line 2418 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1020:
#line 2420 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1021:
#line 2423 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1022:
#line 2426 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1023:
#line 2427 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1024:
#line 2428 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1025:
#line 2429 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1026:
#line 2431 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1027:
#line 2433 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1028:
#line 2435 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1029:
#line 2436 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1030:
#line 2438 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1031:
#line 2439 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1032:
#line 2440 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1033:
#line 2441 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1034:
#line 2442 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1035:
#line 2444 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1036:
#line 2446 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1037:
#line 2448 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1038:
#line 2450 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1040:
#line 2452 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1041:
#line 2453 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1042:
#line 2455 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1043:
#line 2457 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1044:
#line 2458 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1045:
#line 2459 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1047:
#line 2461 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1049:
#line 2465 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1050:
#line 2466 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1051:
#line 2467 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1052:
#line 2468 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1053:
#line 2469 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1054:
#line 2470 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1055:
#line 2472 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1056:
#line 2473 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1057:
#line 2475 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1058:
#line 2478 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1059:
#line 2479 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1060:
#line 2480 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1061:
#line 2481 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1062:
#line 2484 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1063:
#line 2485 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1064:
#line 2488 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1065:
#line 2489 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1066:
#line 2492 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1067:
#line 2493 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1068:
#line 2496 "frame/parser.Y"
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

  case 1069:
#line 2509 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1070:
#line 2510 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1071:
#line 2514 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1072:
#line 2515 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1073:
#line 2519 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1074:
#line 2520 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1075:
#line 2525 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1076:
#line 2529 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1077:
#line 2534 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1078:
#line 2536 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1079:
#line 2539 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1080:
#line 2541 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1081:
#line 2544 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1082:
#line 2546 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1083:
#line 2549 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1084:
#line 2550 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1085:
#line 2551 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1086:
#line 2552 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1087:
#line 2553 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1088:
#line 2554 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1089:
#line 2556 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1092:
#line 2563 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1093:
#line 2564 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1094:
#line 2565 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1095:
#line 2566 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1096:
#line 2567 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1097:
#line 2568 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1100:
#line 2573 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1101:
#line 2574 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1102:
#line 2575 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1103:
#line 2576 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1104:
#line 2577 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1105:
#line 2578 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1106:
#line 2579 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1107:
#line 2580 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1108:
#line 2581 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1109:
#line 2582 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1110:
#line 2583 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1111:
#line 2584 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1114:
#line 2591 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1115:
#line 2592 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1117:
#line 2596 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1118:
#line 2598 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1119:
#line 2599 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1120:
#line 2602 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1121:
#line 2603 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1122:
#line 2604 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1123:
#line 2605 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1124:
#line 2606 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1125:
#line 2607 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1126:
#line 2610 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1127:
#line 2611 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1130:
#line 2619 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1131:
#line 2622 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1132:
#line 2623 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1136:
#line 2630 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1137:
#line 2633 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1138:
#line 2637 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1139:
#line 2638 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1140:
#line 2639 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1141:
#line 2640 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1142:
#line 2641 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1143:
#line 2642 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1144:
#line 2643 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1145:
#line 2644 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1146:
#line 2650 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1147:
#line 2651 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1148:
#line 2652 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1149:
#line 2653 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1150:
#line 2657 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1151:
#line 2658 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1152:
#line 2660 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1153:
#line 2665 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1155:
#line 2667 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1157:
#line 2669 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1158:
#line 2672 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1159:
#line 2674 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1160:
#line 2679 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1161:
#line 2682 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1162:
#line 2683 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1163:
#line 2684 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1164:
#line 2687 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1165:
#line 2689 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1166:
#line 2693 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1167:
#line 2694 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1168:
#line 2698 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1169:
#line 2699 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1170:
#line 2700 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1171:
#line 2701 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1172:
#line 2707 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1173:
#line 2708 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1174:
#line 2714 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1175:
#line 2715 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1176:
#line 2716 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1177:
#line 2717 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1180:
#line 2725 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1181:
#line 2727 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1182:
#line 2728 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1183:
#line 2729 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1184:
#line 2733 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1185:
#line 2734 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1186:
#line 2735 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1187:
#line 2736 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1188:
#line 2739 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1189:
#line 2740 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1190:
#line 2743 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1191:
#line 2744 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1192:
#line 2745 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1193:
#line 2748 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1194:
#line 2749 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1195:
#line 2750 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1196:
#line 2753 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1197:
#line 2754 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1198:
#line 2755 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1199:
#line 2758 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1200:
#line 2759 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1201:
#line 2760 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1202:
#line 2761 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1203:
#line 2764 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1204:
#line 2765 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1206:
#line 2767 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1207:
#line 2768 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1208:
#line 2771 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1209:
#line 2772 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1210:
#line 2773 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1215:
#line 2780 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1216:
#line 2784 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1217:
#line 2786 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1218:
#line 2788 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1235:
#line 2809 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1236:
#line 2810 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1237:
#line 2811 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1238:
#line 2814 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1239:
#line 2815 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1240:
#line 2816 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1241:
#line 2819 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1242:
#line 2820 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1243:
#line 2821 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1244:
#line 2824 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1245:
#line 2825 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1246:
#line 2826 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1248:
#line 2830 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1249:
#line 2831 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1250:
#line 2832 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1251:
#line 2835 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1252:
#line 2836 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1253:
#line 2837 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1254:
#line 2841 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1255:
#line 2843 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1256:
#line 2845 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1257:
#line 2848 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1258:
#line 2849 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1259:
#line 2850 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1260:
#line 2853 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1261:
#line 2854 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1262:
#line 2855 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1263:
#line 2859 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1264:
#line 2861 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1265:
#line 2863 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1266:
#line 2866 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1267:
#line 2867 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1268:
#line 2868 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1269:
#line 2871 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1270:
#line 2872 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1271:
#line 2873 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1272:
#line 2877 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1273:
#line 2879 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1274:
#line 2881 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1275:
#line 2884 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1276:
#line 2885 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1277:
#line 2886 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1278:
#line 2889 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1279:
#line 2890 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1280:
#line 2891 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1281:
#line 2894 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1282:
#line 2895 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1283:
#line 2896 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1284:
#line 2900 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1285:
#line 2902 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1286:
#line 2904 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1287:
#line 2908 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1288:
#line 2912 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1289:
#line 2914 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1290:
#line 2918 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1291:
#line 2921 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1292:
#line 2922 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1293:
#line 2923 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1294:
#line 2924 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1295:
#line 2927 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1296:
#line 2929 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1297:
#line 2931 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1298:
#line 2934 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1300:
#line 2938 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1301:
#line 2939 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1302:
#line 2940 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1303:
#line 2943 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1304:
#line 2944 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1305:
#line 2948 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1307:
#line 2950 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1310:
#line 2955 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1311:
#line 2956 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1312:
#line 2957 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1313:
#line 2960 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1314:
#line 2961 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1315:
#line 2962 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1316:
#line 2965 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1317:
#line 2967 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1318:
#line 2972 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1319:
#line 2973 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1320:
#line 2976 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1321:
#line 2983 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1322:
#line 2985 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1323:
#line 2987 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1324:
#line 2992 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1326:
#line 2996 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1327:
#line 2997 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1328:
#line 2998 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1329:
#line 3000 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1330:
#line 3002 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1331:
#line 3007 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11319 "frame/parser.C"
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


#line 3011 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

