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
#define YYLAST   5573

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  364
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  226
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1302
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2879

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
       0,     0,     3,     6,     9,    13,    17,    21,    24,    26,
      28,    31,    35,    38,    41,    44,    47,    50,    53,    56,
      59,    62,    65,    68,    71,    73,    76,    80,    83,    86,
      89,    93,    96,    99,   102,   105,   109,   112,   116,   120,
     123,   126,   129,   132,   135,   138,   140,   144,   147,   150,
     153,   155,   158,   161,   164,   166,   169,   171,   174,   177,
     180,   183,   185,   187,   189,   192,   195,   198,   201,   204,
     207,   210,   213,   216,   219,   221,   223,   225,   227,   229,
     231,   233,   235,   237,   238,   241,   244,   246,   248,   249,
     251,   253,   255,   257,   259,   261,   263,   266,   269,   272,
     275,   277,   279,   281,   283,   285,   287,   289,   291,   293,
     295,   297,   299,   301,   303,   305,   307,   309,   311,   313,
     315,   317,   319,   321,   323,   325,   327,   329,   331,   333,
     335,   337,   339,   341,   343,   345,   346,   348,   350,   352,
     354,   356,   357,   359,   361,   363,   365,   367,   369,   371,
     373,   375,   377,   379,   381,   383,   385,   387,   389,   391,
     392,   394,   396,   398,   400,   402,   404,   406,   407,   409,
     411,   412,   414,   416,   418,   419,   421,   423,   424,   426,
     428,   429,   431,   433,   434,   436,   438,   440,   442,   444,
     446,   448,   449,   451,   453,   455,   457,   459,   461,   463,
     464,   466,   468,   470,   471,   473,   475,   477,   479,   481,
     484,   487,   490,   493,   496,   499,   502,   505,   508,   510,
     513,   515,   518,   520,   523,   526,   533,   536,   541,   544,
     547,   550,   554,   557,   560,   562,   565,   567,   570,   575,
     581,   584,   588,   594,   601,   603,   605,   607,   615,   627,
     636,   649,   651,   654,   657,   659,   661,   664,   667,   670,
     673,   677,   681,   684,   687,   689,   691,   693,   695,   697,
     699,   701,   704,   707,   710,   712,   716,   719,   722,   725,
     731,   741,   751,   761,   763,   766,   768,   774,   784,   794,
     804,   806,   809,   812,   815,   818,   821,   824,   838,   852,
     865,   878,   880,   881,   883,   885,   890,   897,   899,   901,
     903,   905,   907,   909,   911,   913,   915,   920,   924,   929,
     930,   937,   946,   949,   953,   957,   961,   962,   967,   972,
     977,   982,   986,   990,   992,   996,  1002,  1007,  1012,  1016,
    1019,  1020,  1022,  1024,  1026,  1028,  1030,  1034,  1035,  1038,
    1041,  1044,  1047,  1050,  1053,  1056,  1059,  1062,  1065,  1068,
    1071,  1074,  1077,  1079,  1082,  1085,  1088,  1093,  1097,  1100,
    1103,  1106,  1109,  1112,  1114,  1118,  1121,  1124,  1126,  1129,
    1138,  1141,  1143,  1146,  1148,  1151,  1153,  1158,  1162,  1165,
    1167,  1175,  1184,  1192,  1201,  1203,  1205,  1207,  1210,  1212,
    1214,  1217,  1219,  1220,  1223,  1226,  1228,  1229,  1232,  1235,
    1237,  1239,  1242,  1245,  1248,  1250,  1252,  1254,  1256,  1258,
    1260,  1261,  1263,  1266,  1268,  1273,  1279,  1280,  1283,  1285,
    1291,  1294,  1297,  1299,  1301,  1303,  1306,  1308,  1311,  1313,
    1315,  1316,  1318,  1320,  1321,  1323,  1329,  1336,  1340,  1347,
    1351,  1353,  1357,  1359,  1361,  1363,  1367,  1374,  1382,  1388,
    1391,  1393,  1399,  1404,  1406,  1410,  1411,  1413,  1416,  1418,
    1423,  1425,  1428,  1430,  1433,  1437,  1440,  1442,  1445,  1447,
    1452,  1455,  1457,  1459,  1463,  1465,  1468,  1472,  1475,  1476,
    1478,  1480,  1485,  1488,  1489,  1491,  1495,  1500,  1505,  1506,
    1508,  1510,  1512,  1514,  1516,  1518,  1520,  1522,  1524,  1526,
    1528,  1530,  1532,  1534,  1536,  1538,  1540,  1542,  1544,  1546,
    1548,  1551,  1553,  1556,  1558,  1561,  1564,  1567,  1570,  1572,
    1574,  1576,  1577,  1579,  1580,  1582,  1583,  1585,  1586,  1588,
    1589,  1592,  1595,  1596,  1598,  1601,  1603,  1610,  1616,  1618,
    1620,  1622,  1625,  1628,  1631,  1633,  1635,  1637,  1639,  1642,
    1644,  1646,  1648,  1651,  1653,  1655,  1657,  1660,  1663,  1666,
    1667,  1669,  1670,  1672,  1674,  1676,  1678,  1680,  1682,  1684,
    1686,  1689,  1692,  1695,  1697,  1700,  1703,  1706,  1711,  1714,
    1717,  1722,  1726,  1728,  1731,  1734,  1739,  1745,  1747,  1758,
    1760,  1763,  1767,  1771,  1774,  1777,  1780,  1783,  1786,  1789,
    1792,  1797,  1802,  1807,  1811,  1815,  1821,  1826,  1831,  1836,
    1840,  1844,  1848,  1852,  1855,  1858,  1863,  1867,  1871,  1875,
    1879,  1884,  1889,  1894,  1899,  1905,  1910,  1917,  1925,  1930,
    1935,  1941,  1944,  1948,  1952,  1956,  1959,  1963,  1967,  1971,
    1975,  1980,  1984,  1990,  1997,  2001,  2005,  2010,  2014,  2018,
    2022,  2026,  2030,  2036,  2040,  2044,  2049,  2053,  2056,  2059,
    2061,  2065,  2070,  2075,  2080,  2085,  2090,  2097,  2102,  2107,
    2113,  2118,  2123,  2128,  2133,  2139,  2144,  2151,  2159,  2164,
    2169,  2175,  2181,  2187,  2193,  2199,  2205,  2213,  2219,  2225,
    2232,  2237,  2242,  2247,  2252,  2257,  2264,  2269,  2274,  2280,
    2286,  2292,  2298,  2304,  2311,  2317,  2325,  2334,  2340,  2346,
    2353,  2357,  2361,  2365,  2369,  2374,  2378,  2384,  2391,  2395,
    2399,  2404,  2408,  2412,  2416,  2420,  2424,  2430,  2434,  2438,
    2443,  2448,  2453,  2457,  2463,  2468,  2473,  2476,  2480,  2487,
    2494,  2496,  2498,  2500,  2503,  2506,  2509,  2513,  2517,  2520,
    2533,  2536,  2539,  2541,  2545,  2550,  2553,  2554,  2558,  2560,
    2563,  2566,  2569,  2572,  2575,  2580,  2585,  2590,  2594,  2599,
    2605,  2614,  2621,  2631,  2638,  2646,  2657,  2669,  2682,  2692,
    2698,  2705,  2709,  2715,  2721,  2728,  2734,  2739,  2749,  2760,
    2772,  2782,  2789,  2796,  2803,  2810,  2817,  2824,  2831,  2838,
    2845,  2853,  2861,  2864,  2869,  2874,  2879,  2884,  2890,  2895,
    2900,  2906,  2912,  2916,  2921,  2926,  2931,  2939,  2949,  2956,
    2967,  2979,  2992,  3002,  3006,  3009,  3013,  3019,  3027,  3032,
    3036,  3040,  3047,  3055,  3063,  3068,  3073,  3083,  3088,  3092,
    3097,  3105,  3113,  3116,  3120,  3124,  3128,  3133,  3136,  3139,
    3144,  3155,  3159,  3161,  3165,  3168,  3171,  3174,  3177,  3181,
    3187,  3192,  3198,  3201,  3204,  3207,  3210,  3214,  3217,  3220,
    3223,  3227,  3230,  3234,  3239,  3243,  3247,  3254,  3259,  3262,
    3266,  3269,  3272,  3277,  3281,  3285,  3288,  3292,  3294,  3297,
    3299,  3302,  3305,  3308,  3310,  3312,  3314,  3316,  3319,  3321,
    3324,  3327,  3329,  3332,  3335,  3337,  3340,  3342,  3344,  3346,
    3348,  3350,  3352,  3354,  3356,  3357,  3359,  3362,  3365,  3368,
    3372,  3378,  3386,  3394,  3401,  3408,  3415,  3422,  3428,  3435,
    3442,  3449,  3456,  3463,  3470,  3477,  3489,  3497,  3505,  3513,
    3523,  3533,  3544,  3557,  3570,  3573,  3576,  3580,  3585,  3590,
    3595,  3596,  3598,  3600,  3605,  3610,  3612,  3614,  3616,  3618,
    3620,  3622,  3624,  3626,  3629,  3631,  3633,  3635,  3639,  3643,
    3652,  3659,  3670,  3678,  3686,  3692,  3695,  3698,  3702,  3707,
    3713,  3719,  3725,  3729,  3734,  3740,  3746,  3752,  3758,  3761,
    3765,  3769,  3775,  3779,  3783,  3787,  3792,  3798,  3804,  3810,
    3816,  3820,  3825,  3831,  3837,  3840,  3843,  3847,  3853,  3860,
    3867,  3871,  3875,  3882,  3888,  3894,  3897,  3901,  3905,  3911,
    3918,  3922,  3925,  3928,  3932,  3935,  3939,  3942,  3946,  3952,
    3959,  3962,  3965,  3968,  3970,  3975,  3980,  3982,  3985,  3988,
    3991,  3994,  3997,  4000,  4003,  4007,  4010,  4014,  4017,  4021,
    4023,  4025,  4027,  4029,  4031,  4032,  4035,  4036,  4039,  4040,
    4042,  4043,  4044,  4046,  4048,  4050,  4052,  4054,  4062,  4071,
    4074,  4081,  4084,  4091,  4094,  4098,  4101,  4103,  4105,  4109,
    4113,  4115,  4120,  4123,  4125,  4129,  4133,  4138,  4142,  4146,
    4150,  4152,  4154,  4156,  4158,  4160,  4162,  4164,  4166,  4168,
    4170,  4172,  4174,  4176,  4178,  4180,  4183,  4184,  4185,  4188,
    4195,  4203,  4206,  4208,  4212,  4214,  4218,  4220,  4222,  4224,
    4227,  4230,  4232,  4236,  4237,  4238,  4241,  4244,  4246,  4250,
    4256,  4258,  4261,  4264,  4268,  4271,  4274,  4277,  4280,  4282,
    4284,  4286,  4288,  4293,  4296,  4300,  4304,  4307,  4311,  4314,
    4317,  4320,  4324,  4328,  4332,  4335,  4339,  4341,  4345,  4349,
    4351,  4354,  4357,  4360,  4363,  4373,  4380,  4382,  4384,  4386,
    4388,  4391,  4394,  4398,  4402,  4404,  4407,  4411,  4415,  4417,
    4420,  4422,  4424,  4426,  4428,  4430,  4433,  4436,  4441,  4443,
    4446,  4449,  4452,  4456,  4458,  4460,  4462,  4465,  4468,  4471,
    4474,  4477,  4481,  4485,  4489,  4493,  4497,  4501,  4505,  4507,
    4510,  4513,  4516,  4520,  4523,  4527,  4531,  4534,  4537,  4540,
    4543,  4546,  4549,  4552,  4555,  4558,  4561,  4564,  4567,  4570,
    4573,  4577,  4581,  4585,  4588,  4591,  4594,  4597,  4600,  4603,
    4606,  4609,  4612,  4615,  4618,  4621,  4625,  4629,  4633,  4638,
    4645,  4648,  4650,  4652,  4654,  4656,  4658,  4659,  4665,  4667,
    4674,  4678,  4680,  4683,  4686,  4689,  4693,  4697,  4700,  4703,
    4706,  4709,  4712,  4715,  4719,  4722,  4725,  4729,  4731,  4735,
    4740,  4743,  4745,  4748,  4754,  4761,  4768,  4771,  4773,  4776,
    4779,  4785,  4792
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     365,     0,    -1,    97,   367,    -1,    43,   399,    -1,    40,
      66,     5,    -1,    40,    66,   144,    -1,    40,    66,   368,
      -1,    46,   404,    -1,    59,    -1,    64,    -1,    65,   406,
      -1,    67,   295,     5,    -1,    68,   411,    -1,    69,   413,
      -1,    77,   414,    -1,    84,   423,    -1,    86,   425,    -1,
      87,   426,    -1,    96,   368,    -1,   119,   428,    -1,   128,
     429,    -1,   141,   430,    -1,   145,   476,    -1,   148,   479,
      -1,   152,    -1,   153,   368,    -1,   153,    66,     5,    -1,
     157,   485,    -1,   158,   486,    -1,   161,   487,    -1,   167,
      15,     4,    -1,   182,   490,    -1,   185,   508,    -1,   186,
     509,    -1,   187,   510,    -1,   190,   526,   511,    -1,   191,
     546,    -1,   205,    66,     5,    -1,   205,    66,   144,    -1,
     222,   547,    -1,   223,   548,    -1,   224,   551,    -1,   245,
      88,    -1,   238,   553,    -1,   236,   552,    -1,   253,    -1,
     249,   526,   555,    -1,   255,   560,    -1,   257,   561,    -1,
     262,   563,    -1,   276,    -1,   282,   578,    -1,   298,     4,
      -1,   299,   394,    -1,   310,    -1,   312,   580,    -1,   318,
      -1,   321,   582,    -1,   322,   583,    -1,   352,   587,    -1,
     359,   588,    -1,     3,    -1,     4,    -1,   368,    -1,   200,
     368,    -1,   225,   368,    -1,   227,   368,    -1,   322,   368,
      -1,    43,   368,    -1,    46,   368,    -1,    76,   368,    -1,
      84,   368,    -1,   146,   368,    -1,   255,   368,    -1,     4,
      -1,   355,    -1,   360,    -1,   219,    -1,   306,    -1,   210,
      -1,   361,    -1,   218,    -1,   121,    -1,    -1,   256,    37,
      -1,   137,    37,    -1,   256,    -1,   137,    -1,    -1,   371,
      -1,   366,    -1,     6,    -1,     7,    -1,     8,    -1,     9,
      -1,    10,    -1,   372,   372,    -1,   373,   374,    -1,   374,
     374,    -1,   366,   366,    -1,   162,    -1,   229,    -1,   102,
      -1,    18,    -1,   377,    -1,   322,    -1,   323,    -1,   324,
      -1,   325,    -1,   326,    -1,   327,    -1,   328,    -1,   329,
      -1,   330,    -1,   331,    -1,   332,    -1,   333,    -1,   334,
      -1,   335,    -1,   336,    -1,   337,    -1,   338,    -1,   339,
      -1,   340,    -1,   341,    -1,   342,    -1,   343,    -1,   344,
      -1,   345,    -1,   346,    -1,   347,    -1,   348,    -1,   349,
      -1,    56,    -1,   224,    -1,    -1,   356,    -1,   213,    -1,
     205,    -1,   212,    -1,   248,    -1,    -1,   285,    -1,   267,
      -1,    91,    -1,   176,    -1,   180,    -1,   184,    -1,   237,
      -1,   286,    -1,   287,    -1,    27,    -1,   278,    -1,   154,
      -1,    29,    -1,   264,    -1,   259,    -1,    95,    -1,   168,
      -1,    -1,   130,    -1,    34,    -1,   131,    -1,   169,    -1,
     159,    -1,   139,    -1,   107,    -1,    -1,    98,    -1,   271,
      -1,    -1,    98,    -1,    23,    -1,    24,    -1,    -1,   275,
      -1,   170,    -1,    -1,    16,    -1,   164,    -1,    -1,   162,
      -1,   191,    -1,    -1,    62,    -1,    48,    -1,   103,    -1,
      85,    -1,   362,    -1,    26,    -1,    51,    -1,    -1,     4,
      -1,    82,    -1,   155,    -1,   231,    -1,   232,    -1,   246,
      -1,   289,    -1,    -1,    31,    -1,   291,    -1,   192,    -1,
      -1,   206,    -1,    41,    -1,    42,    -1,   177,    -1,   178,
      -1,   316,   398,    -1,    47,   395,    -1,    74,   396,    -1,
     153,   397,    -1,   194,   558,    -1,    36,   559,    -1,   263,
     366,    -1,   292,     4,    -1,   300,   366,    -1,   368,    -1,
      66,     5,    -1,   368,    -1,    66,     5,    -1,   368,    -1,
      66,     5,    -1,   366,   366,    -1,   233,   366,   366,   366,
     366,   366,    -1,    11,   400,    -1,    71,     5,     5,     5,
      -1,   101,     4,    -1,   120,   401,    -1,   138,   402,    -1,
      53,   279,     4,    -1,   303,   403,    -1,   124,     5,    -1,
      59,    -1,   366,   366,    -1,   366,    -1,   366,   366,    -1,
     366,    11,   366,   366,    -1,   366,   366,    11,   366,   366,
      -1,   303,   366,    -1,   303,   366,   366,    -1,   303,   366,
      11,   366,   366,    -1,   303,   366,   366,    11,   366,   366,
      -1,    31,    -1,   291,    -1,   126,    -1,   366,   366,    11,
      59,     5,     5,     5,    -1,   366,   366,     4,   366,   366,
      11,    59,     5,     5,     5,     5,    -1,   366,   366,    11,
     366,   366,     5,     5,     5,    -1,   366,   366,     4,   366,
     366,    11,   366,   366,     5,     5,     5,     5,    -1,   366,
      -1,   366,   366,    -1,   303,   405,    -1,   126,    -1,   366,
      -1,   366,   366,    -1,   266,   407,    -1,   201,   408,    -1,
     195,   409,    -1,   313,   366,   366,    -1,   313,   205,   205,
      -1,   358,   410,    -1,   240,   368,    -1,   142,    -1,   183,
      -1,   366,    -1,   195,    -1,   358,    -1,   357,    -1,   313,
      -1,     4,   382,    -1,   201,   382,    -1,   259,     4,    -1,
     252,    -1,   366,     4,     4,    -1,    78,   366,    -1,   259,
       4,    -1,   179,     4,    -1,     4,   366,   366,     4,     4,
      -1,   255,   366,   366,   366,   366,   366,   366,     4,     4,
      -1,   157,   366,   366,   366,   366,   366,   366,     4,     4,
      -1,   158,   366,   366,   366,   366,   366,   366,     4,     4,
      -1,    39,    -1,   202,   412,    -1,   112,    -1,     4,   366,
     366,     4,     4,    -1,   255,   366,   366,   366,   366,   366,
     366,     4,     4,    -1,   157,   366,   366,   366,   366,   366,
     366,     4,     4,    -1,   158,   366,   366,   366,   366,   366,
     366,     4,     4,    -1,   381,    -1,   184,   366,    -1,    83,
     415,    -1,   100,   416,    -1,   182,   417,    -1,   226,   421,
      -1,   262,   422,    -1,     5,     4,     4,   420,     4,     4,
     381,   366,   418,   419,   366,   366,     5,    -1,     5,     4,
       4,   420,     4,     4,   381,   366,   366,   419,   366,   366,
       5,    -1,     5,     4,     4,   420,     4,     4,   381,   366,
     418,   366,   366,     5,    -1,     5,     4,     4,   420,     4,
       4,   381,   366,   366,   366,   366,     5,    -1,   235,    -1,
      -1,    30,    -1,     5,    -1,     5,     5,     4,   368,    -1,
       5,     4,   368,     5,   376,   383,    -1,   195,    -1,   358,
      -1,   357,    -1,   313,    -1,   142,    -1,   183,    -1,   282,
      -1,    46,    -1,     5,    -1,     5,     5,     4,   368,    -1,
       5,   376,   383,    -1,    30,     5,   376,   383,    -1,    -1,
     366,   366,   366,   366,   376,   383,    -1,    59,   375,   376,
     383,   366,   366,   376,   385,    -1,   299,   424,    -1,    39,
     366,   366,    -1,   202,   366,   366,    -1,   112,   366,   366,
      -1,    -1,   366,   366,   376,   383,    -1,    39,   366,   366,
       4,    -1,   202,   366,   366,     4,    -1,   112,   366,   366,
       4,    -1,   378,   366,   366,    -1,   376,   383,   375,    -1,
     368,    -1,   321,   366,   366,    -1,    39,   202,   378,   366,
     366,    -1,   202,   378,   366,   366,    -1,    39,   202,   376,
     375,    -1,   202,   376,   375,    -1,    32,     4,    -1,    -1,
      31,    -1,   291,    -1,   192,    -1,   366,    -1,    64,    -1,
     148,   118,     5,    -1,    -1,    40,    66,    -1,    43,   433,
      -1,    46,   435,    -1,    65,   436,    -1,    68,   440,    -1,
      67,   439,    -1,    69,   442,    -1,    77,   444,    -1,    79,
     447,    -1,    84,   448,    -1,    86,   449,    -1,    88,   451,
      -1,    87,   450,    -1,    94,   452,    -1,    96,    -1,   127,
     456,    -1,   145,   462,    -1,   153,    66,    -1,   155,     5,
       5,     4,    -1,   156,    89,   431,    -1,   157,   463,    -1,
     158,   464,    -1,   161,   454,    -1,   165,   453,    -1,   167,
      15,    -1,   195,    -1,   190,   526,   520,    -1,   191,   465,
      -1,   205,    66,    -1,   222,    -1,   223,   466,    -1,   230,
     294,   378,   366,   366,     4,     4,     5,    -1,   255,   467,
      -1,   257,    -1,   282,   468,    -1,   298,    -1,   299,   469,
      -1,   307,    -1,   314,   378,   366,   366,    -1,   320,    89,
     432,    -1,   322,   474,    -1,   359,    -1,     5,     5,   366,
     366,   378,     4,   427,    -1,     5,     5,   366,   366,   376,
     383,     4,   427,    -1,     5,     5,   366,   366,   378,     4,
     427,    -1,     5,     5,   366,   366,   376,   383,     4,   427,
      -1,   101,    -1,   120,    -1,   138,    -1,    53,   279,    -1,
      88,    -1,   124,    -1,    71,   434,    -1,   181,    -1,    -1,
     195,     5,    -1,   104,     5,    -1,   120,    -1,    -1,   418,
     419,    -1,   366,   419,    -1,   266,    -1,   201,    -1,   195,
     437,    -1,   313,   175,    -1,   358,   438,    -1,   240,    -1,
     201,    -1,   259,    -1,    78,    -1,   259,    -1,   179,    -1,
      -1,   295,    -1,   175,   441,    -1,     4,    -1,     4,   378,
     366,   366,    -1,     4,   366,   366,   381,   366,    -1,    -1,
     175,   443,    -1,   184,    -1,     4,   366,   366,   381,   366,
      -1,   376,   383,    -1,    65,   445,    -1,    66,    -1,    92,
      -1,   175,    -1,   216,   175,    -1,   194,    -1,    69,   446,
      -1,   282,    -1,   351,    -1,    -1,   201,    -1,   266,    -1,
      -1,   184,    -1,   366,   366,   376,   383,   384,    -1,   378,
     366,   366,   376,   383,   384,    -1,   376,   383,   384,    -1,
      59,   376,   383,   384,   376,   385,    -1,   299,   376,   383,
      -1,   378,    -1,   376,   383,   384,    -1,   290,    -1,    32,
      -1,   378,    -1,   376,   383,   384,    -1,   376,   383,   375,
     366,   366,     5,    -1,     4,   376,   383,   375,   366,   366,
       5,    -1,   378,   366,   366,     4,     4,    -1,     5,   369,
      -1,    65,    -1,   378,   366,   366,     5,   369,    -1,     4,
       4,     4,     4,    -1,    88,    -1,   122,   204,   455,    -1,
      -1,     4,    -1,   366,   366,    -1,   207,    -1,    59,   376,
     383,   384,    -1,    81,    -1,   101,   459,    -1,    44,    -1,
     118,   457,    -1,   122,   204,   460,    -1,   150,   458,    -1,
     151,    -1,   217,   204,    -1,   279,    -1,   279,   376,   383,
     385,    -1,   280,   461,    -1,   351,    -1,     4,    -1,   378,
     366,   366,    -1,     4,    -1,   171,     5,    -1,     4,   171,
       5,    -1,   322,     4,    -1,    -1,     4,    -1,   369,    -1,
     369,   378,   366,   366,    -1,   369,     4,    -1,    -1,     4,
      -1,   135,   162,   376,    -1,   135,   162,     4,   376,    -1,
     303,   162,   366,   376,    -1,    -1,   221,    -1,   315,    -1,
      61,    -1,   293,    -1,   316,    -1,    61,    -1,   293,    -1,
     316,    -1,    66,    -1,   189,    -1,   248,    -1,   293,    -1,
     302,    -1,    81,    -1,    45,    -1,   240,    -1,    61,    -1,
     293,    -1,   316,    -1,   138,    -1,   247,    -1,   247,   196,
      -1,   277,    -1,   277,   196,    -1,    20,    -1,   316,   473,
      -1,    47,   470,    -1,    74,   471,    -1,   153,   472,    -1,
     194,    -1,    36,    -1,   263,    -1,    -1,    66,    -1,    -1,
      66,    -1,    -1,    66,    -1,    -1,   233,    -1,    -1,    15,
     475,    -1,   204,   377,    -1,    -1,   234,    -1,    83,   477,
      -1,   100,    -1,   376,   383,   384,   478,     5,     5,    -1,
     376,   383,   384,   478,     5,    -1,    19,    -1,   243,    -1,
      18,    -1,    40,    66,    -1,    43,   480,    -1,    77,   481,
      -1,    84,    -1,    95,    -1,    96,    -1,   102,    -1,   127,
     482,    -1,   145,    -1,   161,    -1,   168,    -1,   190,   483,
      -1,   229,    -1,   162,    -1,   282,    -1,   293,   376,    -1,
     322,   484,    -1,    72,     5,    -1,    -1,    30,    -1,    -1,
      43,    -1,    87,    -1,   200,    -1,   153,    -1,   269,    -1,
     226,    -1,   308,    -1,   376,    -1,    58,   376,    -1,   116,
     376,    -1,   180,   376,    -1,    17,    -1,   299,   376,    -1,
      61,     5,    -1,   293,   376,    -1,   316,     4,     4,     4,
      -1,    61,     5,    -1,   293,   376,    -1,   316,     4,     4,
       4,    -1,   208,     4,     4,    -1,   117,    -1,   193,     5,
      -1,    88,   489,    -1,   270,   122,   204,   488,    -1,   270,
       4,     4,     4,     4,    -1,   312,    -1,   322,   366,   366,
     366,   366,   366,   366,   366,   366,     4,    -1,     5,    -1,
       5,     4,    -1,     4,     4,    56,    -1,     4,     4,   376,
      -1,   201,   368,    -1,    25,   491,    -1,   113,   493,    -1,
     127,   494,    -1,   164,   507,    -1,   215,   505,    -1,   228,
     506,    -1,     5,    13,     5,   388,    -1,     5,    14,     5,
     388,    -1,     5,    61,     5,   388,    -1,     5,   198,   388,
      -1,     5,   199,   388,    -1,     5,   273,   386,     4,   388,
      -1,     5,   283,     4,   388,    -1,     5,   284,     4,   388,
      -1,     5,   315,     5,   388,    -1,   255,    87,   492,    -1,
       5,    13,     5,    -1,     5,    14,     5,    -1,     5,    61,
       5,    -1,     5,   198,    -1,     5,   199,    -1,     5,   273,
     386,     4,    -1,     5,   283,     4,    -1,     5,   284,     4,
      -1,     5,   315,     5,    -1,     5,     5,   281,    -1,     5,
      13,     5,   388,    -1,     5,    14,     5,   388,    -1,     5,
      61,     5,   388,    -1,     5,   198,   387,   388,    -1,     5,
       5,   281,   387,   388,    -1,     5,   199,   387,   388,    -1,
       5,   273,   386,     4,   387,   388,    -1,     5,   288,   386,
       4,     4,   387,   388,    -1,     5,   283,     4,   388,    -1,
       5,   284,     4,   388,    -1,     5,   315,     5,   387,   388,
      -1,   280,   495,    -1,   118,    87,   496,    -1,   255,   162,
     504,    -1,   255,    87,   503,    -1,   200,   497,    -1,     5,
      13,     5,    -1,     5,    14,     5,    -1,     5,    61,     5,
      -1,     5,   198,   387,    -1,     5,     5,   281,   387,    -1,
       5,   199,   387,    -1,     5,   273,   386,     4,   387,    -1,
       5,   288,   386,     4,     4,   387,    -1,     5,   283,     4,
      -1,     5,   284,     4,    -1,     5,   315,     5,   387,    -1,
       5,    13,     5,    -1,     5,    14,     5,    -1,     5,    61,
       5,    -1,     5,   198,   387,    -1,     5,   199,   387,    -1,
       5,   273,   386,     4,   387,    -1,     5,   283,     4,    -1,
       5,   284,     4,    -1,     5,   315,     5,   387,    -1,   162,
     167,   498,    -1,   167,   499,    -1,   162,   500,    -1,   502,
      -1,   162,   350,   501,    -1,     5,    13,     5,   388,    -1,
       5,    14,     5,   388,    -1,     5,    61,     5,   388,    -1,
       5,   198,   387,   388,    -1,     5,   199,   387,   388,    -1,
       5,   273,   386,     4,   387,   388,    -1,     5,   283,     4,
     388,    -1,     5,   284,     4,   388,    -1,     5,   315,     5,
     387,   388,    -1,     5,    13,     5,   388,    -1,     5,    14,
       5,   388,    -1,     5,    61,     5,   388,    -1,     5,   198,
     387,   388,    -1,     5,     5,   281,   387,   388,    -1,     5,
     199,   387,   388,    -1,     5,   273,   386,     4,   387,   388,
      -1,     5,   288,   386,     4,     4,   387,   388,    -1,     5,
     283,     4,   388,    -1,     5,   284,     4,   388,    -1,     5,
     315,     5,   387,   388,    -1,   377,     5,    13,     5,   388,
      -1,   377,     5,    14,     5,   388,    -1,   377,     5,    61,
       5,   388,    -1,   377,     5,   198,   387,   388,    -1,   377,
       5,   199,   387,   388,    -1,   377,     5,   273,   386,     4,
     387,   388,    -1,   377,     5,   283,     4,   388,    -1,   377,
       5,   284,     4,   388,    -1,   377,     5,   315,     5,   387,
     388,    -1,     5,    13,     5,   388,    -1,     5,    14,     5,
     388,    -1,     5,    61,     5,   388,    -1,     5,   198,   387,
     388,    -1,     5,   199,   387,   388,    -1,     5,   273,   386,
       4,   387,   388,    -1,     5,   283,     4,   388,    -1,     5,
     284,     4,   388,    -1,     5,   315,     5,   387,   388,    -1,
     377,     5,    13,     5,   388,    -1,   377,     5,    14,     5,
     388,    -1,   377,     5,    61,     5,   388,    -1,   377,     5,
     198,   387,   388,    -1,   377,     5,     5,   281,   387,   388,
      -1,   377,     5,   199,   387,   388,    -1,   377,     5,   273,
     386,     4,   387,   388,    -1,   377,     5,   288,   386,     4,
       4,   387,   388,    -1,   377,     5,   283,     4,   388,    -1,
     377,     5,   284,     4,   388,    -1,   377,     5,   315,     5,
     387,   388,    -1,     5,    13,     5,    -1,     5,    14,     5,
      -1,     5,    61,     5,    -1,     5,   198,   387,    -1,     5,
       5,   281,   387,    -1,     5,   199,   387,    -1,     5,   273,
     386,     4,   387,    -1,     5,   288,   386,     4,     4,   387,
      -1,     5,   283,     4,    -1,     5,   284,     4,    -1,     5,
     315,     5,   387,    -1,     5,    13,     5,    -1,     5,    14,
       5,    -1,     5,    61,     5,    -1,     5,   198,   387,    -1,
       5,   199,   387,    -1,     5,   273,   386,     4,   387,    -1,
       5,   283,     4,    -1,     5,   284,     4,    -1,     5,   315,
       5,   387,    -1,     5,    13,     5,   388,    -1,     5,    61,
       5,   388,    -1,     5,   198,   388,    -1,     5,   273,   386,
       4,   388,    -1,     5,   283,     4,   388,    -1,     5,   315,
       5,   388,    -1,     5,     5,    -1,   280,     5,     5,    -1,
      94,     4,     4,     4,     4,     4,    -1,   195,     4,     4,
       4,     4,     4,    -1,   112,    -1,   239,    -1,   368,    -1,
     143,   368,    -1,    88,   368,    -1,    66,     5,    -1,     5,
       4,     4,    -1,   312,   366,   366,    -1,   359,   366,    -1,
       5,     5,   377,   383,     5,     5,   377,   383,   366,   377,
     385,     5,    -1,    60,   514,    -1,    66,     5,    -1,    80,
      -1,    73,   519,     5,    -1,    73,   519,   315,     5,    -1,
      75,   100,    -1,    -1,    83,   512,   515,    -1,    89,    -1,
     100,   517,    -1,   106,   518,    -1,   115,     4,    -1,   132,
       5,    -1,   153,    16,    -1,   153,   220,   366,   366,    -1,
     153,   304,   366,   366,    -1,     4,    19,   391,   368,    -1,
       4,    20,   371,    -1,     4,    20,   371,   378,    -1,     4,
      20,   371,   376,   383,    -1,     4,    21,   247,   366,   366,
       4,   376,   385,    -1,     4,    21,   247,     5,   376,   385,
      -1,     4,    49,   247,   366,   366,   366,     4,   376,   385,
      -1,     4,    49,   247,     5,   376,   385,    -1,     4,    48,
     247,   366,   366,   376,   385,    -1,     4,    52,   106,   371,
     371,     4,   366,   366,   366,     4,    -1,     4,    52,   106,
     371,   371,     4,   366,   366,   366,     4,   378,    -1,     4,
      52,   106,   371,   371,     4,   366,   366,   366,     4,   376,
     383,    -1,     4,    52,   106,     5,     5,   376,   383,   376,
     385,    -1,     4,    55,   513,     5,     5,    -1,     4,    62,
     247,   366,   376,   385,    -1,     4,    66,     5,    -1,     4,
      74,    26,   368,   368,    -1,     4,    74,   172,     5,     5,
      -1,     4,    74,   247,   366,   376,   385,    -1,     4,    74,
     293,   376,   383,    -1,     4,    75,   142,   368,    -1,     4,
      82,   106,   371,   371,     4,   366,   366,     4,    -1,     4,
      82,   106,   371,   371,     4,   366,   366,     4,   378,    -1,
       4,    82,   106,   371,   371,     4,   366,   366,     4,   376,
     383,    -1,     4,    82,   106,     5,     5,   376,   383,   376,
     385,    -1,     4,    83,    21,   247,   366,   366,    -1,     4,
      83,    49,   247,   366,   366,    -1,     4,    83,    52,    20,
     366,   366,    -1,     4,    83,    52,   247,   366,   366,    -1,
       4,    83,   111,   247,   366,   366,    -1,     4,    83,   114,
      20,   366,   366,    -1,     4,    83,   114,   247,   366,   366,
      -1,     4,    83,    82,    20,   366,   366,    -1,     4,    83,
      82,   247,   366,   366,    -1,     4,    83,   235,   319,     4,
     366,   366,    -1,     4,    83,   268,   319,     4,   366,   366,
      -1,     4,   100,    -1,     4,   100,    21,     4,    -1,     4,
     100,    49,     4,    -1,     4,   100,    52,     4,    -1,     4,
     100,   111,     4,    -1,     4,   100,    55,   513,     5,    -1,
       4,   100,   114,     4,    -1,     4,   100,    82,     4,    -1,
       4,   100,   235,   319,     4,    -1,     4,   100,   268,   319,
       4,    -1,     4,   100,   295,    -1,     4,   100,   295,     5,
      -1,     4,   100,   295,     4,    -1,     4,   106,    39,     4,
      -1,     4,   110,   247,   366,   366,   376,   385,    -1,     4,
     111,   247,   366,   366,   366,     4,   376,   385,    -1,     4,
     111,   247,     5,   376,   385,    -1,     4,   114,   106,   371,
     371,     4,   366,   366,   366,     4,    -1,     4,   114,   106,
     371,   371,     4,   366,   366,   366,     4,   378,    -1,     4,
     114,   106,   371,   371,     4,   366,   366,   366,     4,   376,
     383,    -1,     4,   114,   106,     5,     5,   376,   383,   376,
     385,    -1,     4,   132,     5,    -1,     4,   153,    -1,     4,
     153,   220,    -1,     4,   179,    26,   368,   368,    -1,     4,
     179,   233,   376,   383,   375,   375,    -1,     4,   203,   366,
     366,    -1,     4,   203,   136,    -1,     4,   203,    35,    -1,
       4,   203,   303,   376,   383,   375,    -1,     4,   235,   253,
     366,   366,   376,   385,    -1,     4,   268,   253,   366,   366,
     376,   385,    -1,     4,   233,   272,   389,    -1,     4,   233,
     279,     4,    -1,     4,   241,   376,   383,   375,   375,   366,
     376,   385,    -1,     4,   242,   532,   368,    -1,     4,   257,
      39,    -1,     4,   258,   133,     5,    -1,     4,   258,   233,
     376,   383,   375,   375,    -1,     4,   258,   293,   376,   383,
     376,   385,    -1,     4,   269,    -1,     4,   269,   220,    -1,
       4,   295,     5,    -1,     4,   297,     5,    -1,     4,   297,
     257,   368,    -1,     4,   309,    -1,     4,   311,    -1,     4,
     317,    26,   368,    -1,     4,   317,   233,   376,   383,   375,
     376,   385,   366,   371,    -1,     4,   351,     4,    -1,   170,
      -1,   170,   366,   366,    -1,   181,   527,    -1,   182,   528,
      -1,   203,   529,    -1,   240,   368,    -1,   242,   532,   368,
      -1,   242,   532,   368,   366,   366,    -1,   257,    39,   366,
     366,    -1,   257,   202,   366,   366,     4,    -1,   257,   112,
      -1,   262,   536,    -1,   269,   537,    -1,   276,   538,    -1,
       5,    66,     5,    -1,     5,    80,    -1,     5,   100,    -1,
       5,    89,    -1,     5,   132,     5,    -1,     5,   153,    -1,
       5,   153,   220,    -1,     5,   203,   366,   366,    -1,     5,
     203,   136,    -1,     5,   203,    35,    -1,     5,   203,   303,
     376,   383,   375,    -1,     5,   242,   532,   368,    -1,     5,
     269,    -1,     5,   269,   220,    -1,     5,   309,    -1,     5,
     311,    -1,   295,   106,     5,     5,    -1,   295,   100,     5,
      -1,   295,   100,    16,    -1,   295,     5,    -1,   295,   312,
       5,    -1,   226,    -1,   226,   376,    -1,   308,    -1,   309,
      16,    -1,   311,    16,    -1,   351,     4,    -1,   269,    -1,
     311,    -1,   153,    -1,   309,    -1,    39,   203,    -1,   203,
      -1,   112,   203,    -1,    39,   106,    -1,   106,    -1,   112,
     106,    -1,    39,   257,    -1,   257,    -1,   112,   257,    -1,
     100,    -1,   297,    -1,    66,    -1,   351,    -1,   242,    -1,
     132,    -1,   170,    -1,   312,    -1,    -1,     4,    -1,    29,
     368,    -1,   247,   366,    -1,   166,     4,    -1,   221,     4,
     366,    -1,    62,   366,   366,   366,   533,    -1,   110,   366,
     366,   366,   366,   370,   533,    -1,    48,   366,   366,   366,
     366,   370,   533,    -1,   235,   366,   366,   366,   366,   533,
      -1,   268,   366,   366,   366,   366,   533,    -1,   179,   366,
     366,   366,   366,   533,    -1,   317,   366,   366,   366,   366,
     533,    -1,   297,   366,   366,   370,   533,    -1,    62,   233,
     366,   366,   390,   533,    -1,    48,   233,   366,   366,   390,
     533,    -1,   103,   233,   366,   366,   390,   533,    -1,    85,
     233,   366,   366,   390,   533,    -1,   362,   233,   366,   366,
     390,   533,    -1,    26,   233,   366,   366,   390,   533,    -1,
      51,   233,   366,   366,   390,   533,    -1,   258,   366,   366,
     366,   366,   376,   383,   376,   385,     5,   533,    -1,    74,
     366,   366,   366,   376,   383,   533,    -1,   241,   366,   366,
     366,   366,   366,   533,    -1,    21,   366,   366,   366,   366,
       4,   533,    -1,   111,   366,   366,   366,   366,   366,     4,
     370,   533,    -1,    49,   366,   366,   366,   366,   366,     4,
     370,   533,    -1,    82,   366,   366,   371,   371,     4,   366,
     366,     4,   533,    -1,   114,   366,   366,   371,   371,     4,
     366,   366,   366,     4,   370,   533,    -1,    52,   366,   366,
     371,   371,     4,   366,   366,   366,     4,   370,   533,    -1,
      75,   533,    -1,   296,   516,    -1,     5,   366,   366,    -1,
     315,     5,   366,   366,    -1,   366,   366,   315,     5,    -1,
       5,   376,   383,   375,    -1,    -1,   269,    -1,    16,    -1,
      39,   366,   366,     4,    -1,   202,   366,   366,     4,    -1,
     112,    -1,   105,    -1,   353,    -1,    63,    -1,   261,    -1,
     260,    -1,   244,    -1,   354,    -1,    60,   521,    -1,    66,
      -1,   132,    -1,   115,    -1,   147,   366,   366,    -1,   160,
     366,   366,    -1,     4,    19,    82,     5,     5,     5,   376,
       4,    -1,     4,    19,   155,     5,     5,     4,    -1,     4,
      19,   231,     5,     5,     5,     5,   376,   383,   392,    -1,
       4,    19,   232,     5,     5,   376,   392,    -1,     4,    19,
     246,     5,     5,     5,   376,    -1,     4,    19,   289,   376,
     383,    -1,   160,    16,    -1,     4,    20,    -1,     4,    20,
     378,    -1,     4,    20,   376,   383,    -1,     4,    21,   247,
     376,   385,    -1,     4,    49,   247,   376,   385,    -1,     4,
      48,   247,   376,   385,    -1,     4,    52,    20,    -1,     4,
      52,    20,   378,    -1,     4,    52,    20,   376,   383,    -1,
       4,    52,   247,   376,   385,    -1,     4,    59,   376,   383,
     384,    -1,     4,    62,   247,   376,   385,    -1,     4,    66,
      -1,     4,    74,    26,    -1,     4,    74,   172,    -1,     4,
      74,   247,   376,   385,    -1,     4,    74,   293,    -1,     4,
      75,   142,    -1,     4,    82,    20,    -1,     4,    82,    20,
     378,    -1,     4,    82,    20,   376,   383,    -1,     4,    82,
     247,   376,   385,    -1,     4,   110,   247,   376,   385,    -1,
       4,   111,   247,   376,   385,    -1,     4,   114,    20,    -1,
       4,   114,    20,   378,    -1,     4,   114,    20,   376,   383,
      -1,     4,   114,   247,   376,   385,    -1,     4,   132,    -1,
       4,   153,    -1,     4,   179,    26,    -1,     4,   179,   174,
     376,   385,    -1,     4,   179,   233,   376,   383,   384,    -1,
       4,   188,   174,   366,   376,   385,    -1,     4,   233,   272,
      -1,     4,   233,   279,    -1,     4,   241,   233,   376,   383,
     384,    -1,     4,   241,   174,   376,   385,    -1,     4,   241,
     301,   376,   385,    -1,     4,   242,    -1,     4,   242,   532,
      -1,     4,   258,   133,    -1,     4,   258,   174,   376,   385,
      -1,     4,   258,   233,   376,   383,   384,    -1,     4,   258,
     293,    -1,     4,   269,    -1,     4,   295,    -1,     4,   295,
       4,    -1,     4,   297,    -1,     4,   297,   257,    -1,     4,
     307,    -1,     4,   317,    26,    -1,     4,   317,   174,   376,
     385,    -1,     4,   317,   233,   376,   383,   384,    -1,     4,
     351,    -1,   153,   522,    -1,   153,   216,    -1,   216,    -1,
     235,   268,   366,   366,    -1,   268,   268,   366,   366,    -1,
     240,    -1,   242,   532,    -1,   269,   523,    -1,   269,   216,
      -1,   276,   524,    -1,     5,    66,    -1,     5,   132,    -1,
       5,   160,    -1,     5,   242,   532,    -1,     5,   295,    -1,
       5,   295,   216,    -1,   295,    16,    -1,   295,    99,   204,
      -1,   351,    -1,    29,    -1,   247,    -1,   166,    -1,   221,
      -1,    -1,   366,   366,    -1,    -1,   366,   366,    -1,    -1,
     297,    -1,    -1,    -1,   234,    -1,   249,    -1,   313,    -1,
      57,    -1,   134,    -1,   519,   376,   383,   384,   368,   534,
     541,    -1,   269,   519,   376,   383,   384,   368,   534,   541,
      -1,   519,     5,    -1,   519,     5,     4,     5,   376,   383,
      -1,   519,     4,    -1,   519,     4,     4,     5,   376,   383,
      -1,   127,     5,    -1,   127,     5,     5,    -1,   366,   366,
      -1,   136,    -1,    35,    -1,    39,   366,   366,    -1,   202,
     366,   366,    -1,   112,    -1,   303,   376,   383,   375,    -1,
     530,   531,    -1,   531,    -1,   532,   363,   368,    -1,    66,
     363,     5,    -1,    93,   363,     4,     4,    -1,   351,   363,
       4,    -1,   132,   363,     5,    -1,   297,   363,     5,    -1,
     544,    -1,   545,    -1,   211,    -1,   269,    -1,   153,    -1,
      92,    -1,   129,    -1,   106,    -1,   203,    -1,   257,    -1,
     100,    -1,   163,    -1,   285,    -1,   123,    -1,   525,    -1,
     525,   530,    -1,    -1,    -1,   535,   539,    -1,     5,   519,
     376,   383,   384,   368,    -1,   269,     5,   519,   376,   383,
     384,   368,    -1,   296,     5,    -1,    16,    -1,   220,   366,
     366,    -1,   304,    -1,   304,   366,   366,    -1,   125,    -1,
     173,    -1,   368,    -1,   297,   368,    -1,   539,   540,    -1,
     540,    -1,   532,   363,   368,    -1,    -1,    -1,   542,   543,
      -1,   543,   544,    -1,   544,    -1,   295,   363,     5,    -1,
      55,   363,   513,     5,     5,    -1,    64,    -1,    66,     5,
      -1,   189,   379,    -1,   248,   366,   366,    -1,   293,   376,
      -1,   302,   366,    -1,    45,   380,    -1,   189,     4,    -1,
     362,    -1,   360,    -1,   354,    -1,   211,    -1,   366,   366,
     366,   366,    -1,   366,   366,    -1,   378,   366,   366,    -1,
     376,   383,   375,    -1,   303,   549,    -1,    38,   366,   366,
      -1,   202,   550,    -1,   240,   368,    -1,   366,   366,    -1,
     378,   366,   366,    -1,   376,   383,   375,    -1,    39,   366,
     366,    -1,   366,   366,    -1,   112,   366,   366,    -1,   368,
      -1,   322,   377,   383,    -1,     5,     4,     4,    -1,   312,
      -1,    70,   554,    -1,   175,     4,    -1,   254,     4,    -1,
     263,   366,    -1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,    -1,     4,     4,     4,     4,     4,     4,    -1,
      54,    -1,   144,    -1,   255,    -1,    90,    -1,   153,   556,
      -1,   269,   557,    -1,    39,   366,   366,    -1,   202,   366,
     366,    -1,   112,    -1,   274,   112,    -1,    39,   366,   366,
      -1,   202,   366,   366,    -1,   112,    -1,   274,   112,    -1,
     197,    -1,    12,    -1,   211,    -1,    33,    -1,   108,    -1,
      61,     5,    -1,   293,   376,    -1,   316,     4,     4,     4,
      -1,   366,    -1,   366,    98,    -1,   202,   562,    -1,   303,
     366,    -1,   303,   366,    98,    -1,    39,    -1,   366,    -1,
     112,    -1,    25,   564,    -1,   127,   566,    -1,   215,   576,
      -1,   113,   577,    -1,   228,     5,    -1,   122,     5,   393,
      -1,    61,     5,   393,    -1,   283,     4,   393,    -1,   255,
      87,   565,    -1,   122,     5,   393,    -1,    61,     5,   393,
      -1,   283,     4,   393,    -1,   567,    -1,   162,   567,    -1,
     294,   568,    -1,   280,   569,    -1,   118,    87,   570,    -1,
     200,   571,    -1,   255,   162,   573,    -1,   255,    87,   574,
      -1,   251,   575,    -1,   122,     5,    -1,    61,     5,    -1,
     283,     4,    -1,   122,     5,    -1,    61,     5,    -1,   283,
       4,    -1,   122,     5,    -1,    61,     5,    -1,   283,     4,
      -1,   122,     5,    -1,    61,     5,    -1,   283,     4,    -1,
     162,   572,    -1,   122,     5,     4,    -1,    61,     5,     4,
      -1,   283,     4,     4,    -1,   122,     5,    -1,    61,     5,
      -1,   283,     4,    -1,   122,     5,    -1,    61,     5,    -1,
     283,     4,    -1,   122,     5,    -1,    61,     5,    -1,   283,
       4,    -1,   122,     5,    -1,    61,     5,    -1,   283,     4,
      -1,   122,     5,   393,    -1,    61,     5,   393,    -1,   283,
       4,   393,    -1,   122,     5,     5,   393,    -1,   579,     4,
       4,   366,   366,   371,    -1,   579,     4,    -1,   100,    -1,
      50,    -1,   305,    -1,   140,    -1,   109,    -1,    -1,     4,
     366,   366,   366,   366,    -1,   214,    -1,   214,     4,   366,
     366,   366,   366,    -1,   127,   280,   581,    -1,     4,    -1,
       4,     4,    -1,   366,   376,    -1,   366,   366,    -1,   303,
     366,   366,    -1,   377,   383,   384,    -1,    15,   586,    -1,
     253,     4,    -1,   250,   585,    -1,    22,   584,    -1,     4,
       4,    -1,     4,     5,    -1,   297,     4,     5,    -1,     4,
       4,    -1,     4,     5,    -1,   297,     4,     5,    -1,     4,
      -1,     4,   377,   383,    -1,   303,     4,   377,   383,    -1,
     234,    64,    -1,   239,    -1,   366,   366,    -1,   366,   366,
      11,   366,   366,    -1,   366,   366,    11,   378,   366,   366,
      -1,   366,   366,    11,   376,   383,   375,    -1,   303,   589,
      -1,   126,    -1,   126,   366,    -1,   366,   366,    -1,   366,
     366,    11,   366,   366,    -1,   366,   366,    11,   378,   366,
     366,    -1,   366,   366,    11,   376,   383,   375,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   468,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,   514,   515,
     516,   517,   518,   519,   520,   521,   522,   523,   524,   525,
     526,   529,   530,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   546,   548,   549,   550,   551,   553,
     554,   555,   556,   559,   560,   561,   562,   563,   566,   567,
     570,   571,   572,   575,   578,   581,   584,   596,   603,   610,
     618,   619,   620,   621,   622,   625,   626,   627,   628,   629,
     630,   631,   632,   633,   634,   635,   636,   637,   638,   639,
     640,   641,   642,   643,   644,   645,   646,   647,   648,   649,
     650,   651,   652,   655,   656,   659,   660,   661,   662,   663,
     664,   667,   668,   669,   670,   671,   674,   675,   676,   677,
     678,   679,   680,   681,   684,   685,   686,   687,   688,   691,
     692,   693,   694,   695,   696,   697,   698,   701,   702,   703,
     706,   707,   708,   709,   712,   713,   714,   717,   718,   719,
     722,   723,   724,   727,   728,   729,   730,   731,   732,   733,
     734,   737,   738,   741,   742,   743,   744,   745,   746,   749,
     750,   751,   752,   755,   756,   757,   758,   759,   760,   763,
     764,   765,   766,   767,   768,   769,   770,   771,   775,   776,
     779,   780,   783,   784,   787,   788,   792,   793,   794,   795,
     796,   797,   798,   799,   802,   803,   806,   807,   808,   810,
     812,   813,   814,   816,   820,   821,   824,   825,   827,   830,
     832,   838,   839,   840,   843,   844,   845,   848,   849,   850,
     851,   852,   853,   854,   860,   861,   864,   865,   866,   867,
     868,   871,   872,   873,   874,   877,   878,   883,   888,   895,
     897,   899,   901,   903,   904,   905,   908,   910,   912,   914,
     917,   918,   921,   922,   923,   924,   925,   928,   930,   932,
     937,   942,   945,   946,   949,   950,   951,   958,   959,   960,
     961,   964,   965,   968,   969,   972,   973,   976,   978,   982,
     983,   986,   988,   989,   990,   991,   994,   995,   997,   998,
     999,  1002,  1004,  1006,  1007,  1009,  1011,  1013,  1015,  1019,
    1022,  1023,  1024,  1025,  1028,  1029,  1032,  1035,  1036,  1037,
    1038,  1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,  1047,
    1048,  1049,  1050,  1051,  1052,  1053,  1054,  1055,  1056,  1057,
    1058,  1059,  1060,  1061,  1062,  1063,  1064,  1065,  1066,  1067,
    1069,  1070,  1071,  1072,  1073,  1074,  1075,  1077,  1078,  1079,
    1082,  1084,  1088,  1090,  1094,  1095,  1096,  1097,  1098,  1099,
    1100,  1101,  1104,  1105,  1106,  1109,  1112,  1113,  1115,  1117,
    1118,  1119,  1120,  1121,  1122,  1129,  1130,  1133,  1134,  1135,
    1138,  1139,  1142,  1145,  1146,  1148,  1152,  1153,  1154,  1157,
    1161,  1163,  1164,  1165,  1166,  1167,  1168,  1169,  1170,  1171,
    1174,  1175,  1176,  1179,  1180,  1183,  1185,  1193,  1195,  1197,
    1201,  1202,  1204,  1207,  1210,  1211,  1215,  1217,  1220,  1225,
    1226,  1227,  1231,  1232,  1233,  1236,  1237,  1238,  1241,  1242,
    1244,  1245,  1246,  1247,  1248,  1249,  1250,  1251,  1252,  1253,
    1255,  1256,  1259,  1260,  1263,  1264,  1265,  1266,  1269,  1270,
    1273,  1275,  1278,  1282,  1283,  1284,  1286,  1288,  1292,  1293,
    1294,  1297,  1298,  1299,  1302,  1303,  1304,  1307,  1308,  1309,
    1310,  1311,  1312,  1313,  1316,  1319,  1320,  1321,  1324,  1325,
    1326,  1327,  1328,  1329,  1332,  1333,  1334,  1335,  1336,  1337,
    1338,  1341,  1342,  1345,  1346,  1349,  1350,  1353,  1354,  1357,
    1358,  1359,  1362,  1363,  1366,  1367,  1370,  1373,  1381,  1382,
    1385,  1386,  1387,  1388,  1389,  1390,  1391,  1392,  1393,  1394,
    1395,  1396,  1397,  1398,  1399,  1400,  1401,  1402,  1405,  1408,
    1409,  1412,  1413,  1414,  1415,  1418,  1419,  1420,  1421,  1424,
    1425,  1426,  1427,  1428,  1429,  1432,  1433,  1434,  1437,  1438,
    1439,  1442,  1443,  1444,  1445,  1446,  1447,  1449,  1450,  1455,
    1456,  1459,  1461,  1463,  1466,  1467,  1468,  1469,  1470,  1471,
    1474,  1476,  1478,  1480,  1481,  1483,  1485,  1487,  1489,  1491,
    1494,  1495,  1496,  1497,  1498,  1499,  1501,  1502,  1503,  1506,
    1509,  1511,  1513,  1515,  1517,  1519,  1521,  1523,  1526,  1528,
    1530,  1532,  1533,  1534,  1535,  1536,  1539,  1540,  1541,  1542,
    1543,  1544,  1545,  1547,  1549,  1550,  1551,  1554,  1555,  1556,
    1557,  1558,  1559,  1561,  1562,  1563,  1566,  1567,  1568,  1569,
    1570,  1573,  1576,  1579,  1582,  1585,  1588,  1591,  1594,  1597,
    1602,  1605,  1608,  1611,  1614,  1617,  1620,  1623,  1626,  1629,
    1632,  1637,  1640,  1643,  1646,  1649,  1652,  1655,  1658,  1661,
    1666,  1668,  1670,  1672,  1674,  1676,  1681,  1683,  1685,  1689,
    1692,  1695,  1698,  1701,  1704,  1707,  1710,  1713,  1716,  1719,
    1724,  1725,  1726,  1727,  1728,  1729,  1730,  1732,  1734,  1735,
    1736,  1739,  1740,  1741,  1742,  1743,  1744,  1746,  1747,  1748,
    1751,  1753,  1755,  1756,  1758,  1760,  1764,  1765,  1768,  1769,
    1770,  1773,  1776,  1777,  1778,  1779,  1780,  1781,  1782,  1785,
    1793,  1794,  1795,  1796,  1798,  1800,  1801,  1801,  1802,  1803,
    1804,  1805,  1806,  1808,  1809,  1811,  1814,  1817,  1818,  1819,
    1822,  1825,  1828,  1832,  1835,  1838,  1841,  1845,  1850,  1855,
    1857,  1859,  1860,  1862,  1864,  1866,  1868,  1869,  1871,  1873,
    1877,  1882,  1884,  1886,  1888,  1890,  1892,  1894,  1896,  1898,
    1900,  1902,  1905,  1906,  1908,  1910,  1911,  1913,  1915,  1916,
    1917,  1919,  1921,  1922,  1923,  1925,  1926,  1929,  1933,  1936,
    1939,  1943,  1948,  1954,  1955,  1956,  1958,  1959,  1963,  1965,
    1966,  1967,  1970,  1973,  1976,  1978,  1980,  1985,  1988,  1989,
    1990,  1993,  1997,  1998,  2000,  2001,  2002,  2004,  2005,  2007,
    2008,  2013,  2015,  2016,  2018,  2019,  2020,  2021,  2022,  2023,
    2025,  2027,  2029,  2030,  2031,  2033,  2035,  2036,  2037,  2038,
    2039,  2040,  2041,  2042,  2043,  2044,  2045,  2047,  2049,  2050,
    2051,  2052,  2054,  2055,  2056,  2057,  2058,  2060,  2061,  2062,
    2063,  2064,  2065,  2068,  2069,  2070,  2071,  2072,  2073,  2074,
    2075,  2076,  2077,  2078,  2079,  2080,  2081,  2082,  2083,  2084,
    2085,  2086,  2087,  2088,  2091,  2092,  2093,  2094,  2095,  2096,
    2104,  2111,  2120,  2129,  2136,  2143,  2151,  2159,  2166,  2171,
    2176,  2181,  2186,  2191,  2196,  2202,  2212,  2222,  2232,  2239,
    2249,  2259,  2268,  2280,  2293,  2298,  2301,  2303,  2305,  2310,
    2314,  2315,  2316,  2322,  2324,  2326,  2329,  2330,  2331,  2332,
    2333,  2334,  2335,  2338,  2339,  2340,  2341,  2342,  2343,  2345,
    2347,  2349,  2351,  2353,  2355,  2358,  2359,  2360,  2361,  2363,
    2366,  2368,  2370,  2371,  2372,  2374,  2377,  2380,  2382,  2383,
    2384,  2385,  2387,  2388,  2389,  2390,  2391,  2393,  2395,  2397,
    2400,  2401,  2402,  2404,  2407,  2408,  2409,  2410,  2412,  2415,
    2419,  2420,  2421,  2424,  2427,  2429,  2430,  2431,  2432,  2434,
    2437,  2438,  2440,  2441,  2442,  2443,  2444,  2446,  2447,  2449,
    2452,  2453,  2454,  2455,  2456,  2458,  2460,  2461,  2462,  2463,
    2465,  2467,  2468,  2469,  2470,  2471,  2472,  2474,  2475,  2477,
    2480,  2481,  2482,  2483,  2486,  2487,  2490,  2491,  2494,  2495,
    2498,  2511,  2512,  2516,  2517,  2521,  2522,  2525,  2529,  2535,
    2537,  2540,  2542,  2545,  2547,  2551,  2552,  2553,  2554,  2555,
    2556,  2557,  2561,  2562,  2565,  2566,  2567,  2568,  2569,  2570,
    2571,  2572,  2575,  2576,  2577,  2578,  2579,  2580,  2581,  2582,
    2583,  2584,  2585,  2586,  2589,  2590,  2593,  2594,  2594,  2597,
    2599,  2601,  2604,  2605,  2606,  2607,  2608,  2609,  2612,  2613,
    2616,  2617,  2620,  2624,  2625,  2625,  2628,  2629,  2632,  2635,
    2639,  2640,  2641,  2642,  2643,  2644,  2645,  2646,  2652,  2653,
    2654,  2655,  2658,  2660,  2661,  2666,  2668,  2669,  2670,  2671,
    2674,  2675,  2680,  2684,  2685,  2686,  2689,  2690,  2695,  2696,
    2699,  2701,  2702,  2703,  2708,  2710,  2716,  2717,  2718,  2719,
    2722,  2723,  2726,  2728,  2730,  2731,  2734,  2736,  2737,  2738,
    2741,  2742,  2745,  2746,  2747,  2750,  2751,  2752,  2755,  2756,
    2757,  2758,  2759,  2762,  2763,  2764,  2767,  2768,  2769,  2770,
    2771,  2774,  2776,  2778,  2780,  2783,  2785,  2787,  2790,  2791,
    2792,  2793,  2794,  2795,  2796,  2797,  2798,  2801,  2802,  2803,
    2806,  2807,  2808,  2811,  2812,  2813,  2816,  2817,  2818,  2821,
    2822,  2823,  2824,  2827,  2828,  2829,  2832,  2833,  2834,  2837,
    2838,  2839,  2842,  2843,  2844,  2847,  2849,  2851,  2855,  2859,
    2861,  2866,  2869,  2870,  2871,  2872,  2875,  2876,  2879,  2881,
    2883,  2886,  2887,  2888,  2891,  2892,  2895,  2897,  2898,  2899,
    2900,  2903,  2904,  2905,  2908,  2909,  2910,  2913,  2914,  2919,
    2921,  2924,  2931,  2932,  2934,  2939,  2941,  2944,  2945,  2946,
    2947,  2949,  2954
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
  "getFitsDepth", "getFitsFileName", "getFitsSlice", "getGrid", "getHSV",
  "getHLS", "getMask", "getPan", "getRGB", "getSmooth", "getThreed",
  "getThreedBorder", "getThreedCompass", "getThreedHighlite",
  "getThreedView", "getWCS", "getWCSAlign", "grid", "gridCreate",
  "gridType", "has", "hasBin", "hasContour", "hasFits", "hasMarker",
  "hasWCS", "hsv", "hls", "iis", "iisSetFileName", "iiscursor", "load",
  "loadArr", "loadArrayRGBCube", "loadENVI", "loadFits", "loadFitsSlice",
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
  "renderMethod", "renderBackground", "rgb", "rotate", "rotateMotion",
  "save", "saveArray", "saveArrayRGBCube", "saveFits", "saveFitsImage",
  "saveFitsTable", "saveFitsSlice", "saveFitsExtCube", "saveFitsMosaic",
  "saveFitsMosaicImage", "saveFitsRGBImage", "saveFitsRGBCube",
  "saveFitsResample", "saveNRRD", "saveENVI", "smooth", "smoothFunction",
  "update", "updateFitsSlice", "warp", "wcs", "wcsAppend", "wcsReplace",
  "wcsAlign", "win32", "zoom", "zoomTo", 0
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
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   366,   366,   367,   367,   367,   367,   367,   367,   367,
     367,   367,   367,   367,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   369,   369,   369,   369,   369,   370,   370,
     371,   371,   371,   372,   373,   374,   375,   375,   375,   375,
     376,   376,   376,   376,   376,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   378,   378,   379,   379,   379,   379,   379,
     379,   380,   380,   380,   380,   380,   381,   381,   381,   381,
     381,   381,   381,   381,   382,   382,   382,   382,   382,   383,
     383,   383,   383,   383,   383,   383,   383,   384,   384,   384,
     385,   385,   385,   385,   386,   386,   386,   387,   387,   387,
     388,   388,   388,   389,   389,   389,   389,   389,   389,   389,
     389,   390,   390,   391,   391,   391,   391,   391,   391,   392,
     392,   392,   392,   393,   393,   393,   393,   393,   393,   394,
     394,   394,   394,   394,   394,   394,   394,   394,   395,   395,
     396,   396,   397,   397,   398,   398,   399,   399,   399,   399,
     399,   399,   399,   399,   400,   400,   401,   401,   401,   401,
     401,   401,   401,   401,   402,   402,   403,   403,   403,   403,
     403,   404,   404,   404,   405,   405,   405,   406,   406,   406,
     406,   406,   406,   406,   407,   407,   408,   408,   408,   408,
     408,   409,   409,   409,   409,   410,   410,   410,   410,   411,
     411,   411,   411,   411,   411,   411,   412,   412,   412,   412,
     413,   413,   414,   414,   414,   414,   414,   415,   415,   415,
     415,   415,   416,   416,   417,   417,   417,   418,   418,   418,
     418,   419,   419,   420,   420,   421,   421,   422,   422,   423,
     423,   423,   423,   423,   423,   423,   424,   424,   424,   424,
     424,   425,   425,   425,   425,   425,   425,   425,   425,   426,
     427,   427,   427,   427,   428,   428,   429,   430,   430,   430,
     430,   430,   430,   430,   430,   430,   430,   430,   430,   430,
     430,   430,   430,   430,   430,   430,   430,   430,   430,   430,
     430,   430,   430,   430,   430,   430,   430,   430,   430,   430,
     430,   430,   430,   430,   430,   430,   430,   430,   430,   430,
     431,   431,   432,   432,   433,   433,   433,   433,   433,   433,
     433,   433,   434,   434,   434,   435,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   437,   437,   438,   438,   438,
     439,   439,   440,   441,   441,   441,   442,   442,   442,   443,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     445,   445,   445,   446,   446,   447,   447,   448,   448,   448,
     449,   449,   449,   450,   451,   451,   452,   452,   452,   453,
     453,   453,   454,   454,   454,   455,   455,   455,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   457,   457,   458,   458,   458,   458,   459,   459,
     460,   460,   460,   461,   461,   461,   461,   461,   462,   462,
     462,   463,   463,   463,   464,   464,   464,   465,   465,   465,
     465,   465,   465,   465,   466,   467,   467,   467,   468,   468,
     468,   468,   468,   468,   469,   469,   469,   469,   469,   469,
     469,   470,   470,   471,   471,   472,   472,   473,   473,   474,
     474,   474,   475,   475,   476,   476,   477,   477,   478,   478,
     479,   479,   479,   479,   479,   479,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   480,   481,
     481,   482,   482,   482,   482,   483,   483,   483,   483,   484,
     484,   484,   484,   484,   484,   485,   485,   485,   486,   486,
     486,   487,   487,   487,   487,   487,   487,   487,   487,   488,
     488,   489,   489,   489,   490,   490,   490,   490,   490,   490,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   493,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   496,   496,   496,
     496,   496,   496,   496,   496,   496,   497,   497,   497,   497,
     497,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     501,   501,   501,   501,   501,   501,   501,   501,   501,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     505,   505,   505,   505,   505,   505,   506,   506,   507,   507,
     507,   508,   509,   509,   509,   509,   509,   509,   509,   510,
     511,   511,   511,   511,   511,   511,   512,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   514,   514,   514,   514,   514,   514,
     515,   515,   515,   515,   515,   515,   515,   515,   515,   515,
     515,   515,   515,   515,   515,   515,   515,   515,   515,   515,
     515,   515,   515,   515,   515,   515,   516,   516,   516,   516,
     517,   517,   517,   518,   518,   518,   519,   519,   519,   519,
     519,   519,   519,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   520,
     521,   521,   521,   521,   522,   522,   523,   523,   524,   524,
     525,   526,   526,   526,   526,   526,   526,   527,   527,   528,
     528,   528,   528,   528,   528,   529,   529,   529,   529,   529,
     529,   529,   530,   530,   531,   531,   531,   531,   531,   531,
     531,   531,   532,   532,   532,   532,   532,   532,   532,   532,
     532,   532,   532,   532,   533,   533,   534,   535,   534,   536,
     536,   536,   537,   537,   537,   537,   537,   537,   538,   538,
     539,   539,   540,   541,   542,   541,   543,   543,   544,   545,
     546,   546,   546,   546,   546,   546,   546,   546,   547,   547,
     547,   547,   548,   548,   548,   548,   548,   548,   548,   548,
     549,   549,   549,   550,   550,   550,   551,   551,   551,   551,
     552,   552,   552,   552,   553,   553,   554,   554,   554,   554,
     555,   555,   556,   556,   556,   556,   557,   557,   557,   557,
     558,   558,   559,   559,   559,   560,   560,   560,   561,   561,
     561,   561,   561,   562,   562,   562,   563,   563,   563,   563,
     563,   564,   564,   564,   564,   565,   565,   565,   566,   566,
     566,   566,   566,   566,   566,   566,   566,   567,   567,   567,
     568,   568,   568,   569,   569,   569,   570,   570,   570,   571,
     571,   571,   571,   572,   572,   572,   573,   573,   573,   574,
     574,   574,   575,   575,   575,   576,   576,   576,   577,   578,
     578,   578,   579,   579,   579,   579,   580,   580,   580,   580,
     580,   581,   581,   581,   582,   582,   583,   583,   583,   583,
     583,   584,   584,   584,   585,   585,   585,   586,   586,   586,
     586,   587,   588,   588,   588,   588,   588,   589,   589,   589,
     589,   589,   589
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     3,     3,     2,     1,     1,
       2,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     2,     3,     2,     2,     2,
       3,     2,     2,     2,     2,     3,     2,     3,     3,     2,
       2,     2,     2,     2,     2,     1,     3,     2,     2,     2,
       1,     2,     2,     2,     1,     2,     1,     2,     2,     2,
       2,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     2,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       0,     1,     1,     1,     0,     1,     1,     0,     1,     1,
       0,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     1,     0,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     2,
       1,     2,     1,     2,     2,     6,     2,     4,     2,     2,
       2,     3,     2,     2,     1,     2,     1,     2,     4,     5,
       2,     3,     5,     6,     1,     1,     1,     7,    11,     8,
      12,     1,     2,     2,     1,     1,     2,     2,     2,     2,
       3,     3,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     1,     3,     2,     2,     2,     5,
       9,     9,     9,     1,     2,     1,     5,     9,     9,     9,
       1,     2,     2,     2,     2,     2,     2,    13,    13,    12,
      12,     1,     0,     1,     1,     4,     6,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     3,     4,     0,
       6,     8,     2,     3,     3,     3,     0,     4,     4,     4,
       4,     3,     3,     1,     3,     5,     4,     4,     3,     2,
       0,     1,     1,     1,     1,     1,     3,     0,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     2,     2,     4,     3,     2,     2,
       2,     2,     2,     1,     3,     2,     2,     1,     2,     8,
       2,     1,     2,     1,     2,     1,     4,     3,     2,     1,
       7,     8,     7,     8,     1,     1,     1,     2,     1,     1,
       2,     1,     0,     2,     2,     1,     0,     2,     2,     1,
       1,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       0,     1,     2,     1,     4,     5,     0,     2,     1,     5,
       2,     2,     1,     1,     1,     2,     1,     2,     1,     1,
       0,     1,     1,     0,     1,     5,     6,     3,     6,     3,
       1,     3,     1,     1,     1,     3,     6,     7,     5,     2,
       1,     5,     4,     1,     3,     0,     1,     2,     1,     4,
       1,     2,     1,     2,     3,     2,     1,     2,     1,     4,
       2,     1,     1,     3,     1,     2,     3,     2,     0,     1,
       1,     4,     2,     0,     1,     3,     4,     4,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     1,     2,     2,     2,     2,     1,     1,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       2,     2,     0,     1,     2,     1,     6,     5,     1,     1,
       1,     2,     2,     2,     1,     1,     1,     1,     2,     1,
       1,     1,     2,     1,     1,     1,     2,     2,     2,     0,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     1,     2,     2,     2,     4,     2,     2,
       4,     3,     1,     2,     2,     4,     5,     1,    10,     1,
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
       0,   319,     0,     0,     0,     0,     0,     0,   347,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1071,     0,     0,     0,     0,     0,     0,     0,     0,
    1071,    45,     0,     0,     0,    50,     0,     0,     0,    54,
    1266,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,    61,    62,     0,
     251,     7,     0,     0,     0,     0,     0,     0,    10,     0,
       0,   283,   285,     0,     0,     0,     0,    12,   151,   153,
     146,   147,   148,   152,   149,   150,   290,    13,     0,   302,
       0,     0,     0,    14,     0,     0,     0,     0,   326,     0,
      15,    74,   103,     0,   133,   102,    82,   100,     0,    79,
      81,    77,   134,   101,    78,     0,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,    75,    76,    80,   333,   159,   104,
       0,    16,     0,    17,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,    63,   345,   344,    19,
       0,    20,     0,     0,     0,   406,   420,     0,   426,     0,
       0,     0,     0,     0,     0,     0,   362,     0,   498,     0,
       0,     0,     0,     0,     0,     0,     0,  1071,     0,   373,
       0,   377,     0,     0,     0,   381,     0,   383,     0,   385,
       0,     0,   539,   389,    21,     0,   545,    22,   550,     0,
       0,   569,   554,   555,   556,   557,   571,   559,   560,   564,
     561,     0,   563,   565,     0,     0,    23,     0,    25,     0,
       0,     0,    27,     0,     0,     0,    28,     0,   592,     0,
       0,     0,   597,     0,    29,     0,     0,     0,     0,     0,
       0,     0,    31,   751,    32,     0,     0,     0,     0,     0,
       0,   752,    33,     0,    34,  1075,  1076,  1072,  1073,  1074,
       0,   141,  1140,     0,   135,     0,     0,     0,    36,     0,
    1151,  1150,  1149,  1148,    39,     0,     0,     0,     0,     0,
     159,     0,    40,     0,  1169,     0,  1166,    41,     0,     0,
       0,     0,    44,     0,    43,    42,     0,     0,     0,     0,
      47,     0,     0,  1198,    48,     0,     0,     0,     0,     0,
      49,  1262,  1261,  1265,  1264,  1263,    51,     0,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    53,     0,
       0,  1268,    55,     0,     0,    57,     0,     0,     0,     0,
     159,    58,  1291,    59,     0,     0,    60,     1,     4,     5,
       6,   234,     0,   226,     0,     0,   228,     0,   236,   229,
     233,   244,   245,   230,   246,     0,   232,   254,   255,   253,
     252,     0,     0,   274,     0,   259,   267,   270,   269,   268,
     266,   258,   263,   264,   265,   257,     0,     0,     0,     0,
       0,     0,   262,    11,     0,     0,     0,     0,     0,     0,
       0,   284,     0,   291,     0,   301,   292,   303,   293,   304,
     294,   315,   295,     0,     0,   296,     0,    93,    94,    95,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   322,     0,     0,     0,     0,     0,   161,   166,   160,
     162,   165,   164,   163,     0,     0,   339,    68,    69,    70,
      71,    72,    64,    65,    66,    73,    67,     0,   348,     0,
     402,   398,   394,   395,   399,   396,   401,   349,   405,   350,
     307,   410,   414,   409,   310,   309,   308,     0,     0,   351,
     421,   353,     0,   352,     0,   428,   354,   440,   432,   443,
     433,   434,   436,     0,   438,   439,   159,   355,     0,     0,
     356,     0,     0,   159,   357,   452,   159,   450,   358,   453,
     360,   159,   454,   359,     0,   159,     0,   361,   472,     0,
     470,   488,     0,     0,     0,   476,   468,     0,   478,   493,
     481,   363,   499,   500,   364,   365,     0,     0,   501,   502,
     503,   368,   504,   505,   506,   369,     0,   463,     0,   370,
      83,   460,     0,   371,   372,     0,   513,   507,   512,   508,
     509,   510,   511,   375,   376,   514,   378,     0,   515,   516,
     517,   380,   523,   518,   519,   521,   382,   529,   531,   533,
     535,   528,   530,   537,   384,     0,     0,   542,     0,   388,
     159,   544,   551,     0,   552,   570,   553,   572,   573,   574,
     558,   575,   577,   576,   578,   562,   566,   583,     0,     0,
       0,     0,   579,   567,    26,   585,   586,     0,   588,   589,
       0,     0,     0,   594,   593,     0,     0,     0,     0,    30,
       0,     0,   604,     0,   605,     0,     0,     0,     0,     0,
     606,     0,   750,     0,   607,     0,   608,     0,     0,   609,
       0,   755,   754,   753,     0,   758,     0,     0,     0,   924,
       0,     0,     0,   762,   766,   768,   960,     0,     0,     0,
       0,   862,     0,     0,     0,   897,     0,     0,     0,     0,
       0,     0,     0,   899,     0,     0,     0,    35,   144,   145,
     143,   142,  1146,  1141,  1147,   138,   139,   137,   140,   136,
    1142,     0,  1144,  1145,    37,    38,     0,     0,     0,     0,
    1158,  1159,     0,   159,     0,  1156,  1153,     0,     0,     0,
     159,  1176,  1179,  1177,  1178,  1170,  1171,  1172,  1173,     0,
       0,     0,    46,  1195,  1196,     0,  1203,  1205,  1204,  1200,
    1201,  1199,     0,     0,     0,     0,  1206,     0,  1209,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1207,
    1218,     0,     0,     0,  1208,  1210,  1260,  1193,  1194,  1192,
     214,     0,   218,   210,     0,   220,   211,     0,   222,   212,
    1191,  1190,   213,   215,   216,   217,     0,     0,   209,     0,
       0,     0,     0,  1274,  1287,     0,     0,  1277,     0,     0,
    1280,     0,     0,  1279,  1278,   167,  1297,     0,  1296,  1292,
     235,   231,     0,   240,     0,   237,     0,   256,   154,   157,
     158,   156,   155,   271,   272,   273,   261,   260,   276,   278,
     277,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   159,     0,   323,    99,    96,    97,
      98,   159,   325,   324,     0,     0,     0,     0,     0,     0,
       0,   338,     0,   334,   332,   331,   346,   397,     0,     0,
     400,   415,   416,   411,   412,   417,   419,   418,   413,   311,
     312,   408,   407,   423,   422,     0,   427,   441,   442,   431,
     444,   437,   435,   430,     0,     0,   159,   159,   167,   167,
     167,   159,     0,     0,   159,   489,   471,   482,     0,   473,
      83,   484,     0,     0,   475,   477,   159,   494,     0,     0,
     480,     0,     0,   367,     0,   465,    87,    86,   459,     0,
       0,     0,     0,   974,   976,   975,     0,  1064,     0,  1043,
       0,  1046,     0,     0,  1066,  1068,     0,  1059,   374,     0,
     520,   522,   532,   525,   534,   526,   536,   527,   538,   524,
       0,     0,   387,   543,   540,   541,   167,   568,   580,   581,
     582,   584,     0,     0,     0,   603,   591,     0,     0,     0,
       0,     0,     0,   180,   180,   174,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   177,   177,   174,     0,     0,
     174,     0,     0,     0,     0,     0,   645,   669,     0,     0,
       0,   641,     0,     0,     0,     0,   180,   174,     0,     0,
     746,     0,   756,   757,   159,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   812,     0,
       0,     0,     0,     0,   834,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   852,     0,     0,   857,   858,     0,
       0,     0,   877,   879,   878,     0,   881,     0,     0,   888,
     890,   891,   925,     0,     0,     0,     0,   760,   761,   968,
     966,   971,   970,   969,   967,   972,     0,   765,     0,   962,
     961,   769,     0,   965,     0,   770,   771,   772,   773,     0,
       0,     0,     0,     0,   864,     0,     0,   865,  1087,     0,
    1090,  1086,     0,     0,     0,   866,   898,   867,  1105,  1110,
    1107,  1113,  1106,  1104,  1111,  1108,  1102,  1109,  1103,  1112,
       0,     0,   872,     0,     0,     0,     0,   873,  1122,  1126,
    1127,     0,  1124,   874,     0,  1128,   875,   895,     0,     0,
       0,   900,   901,   902,  1143,  1157,     0,     0,  1164,  1160,
       0,     0,     0,  1155,  1154,  1168,  1167,     0,     0,  1184,
       0,     0,  1180,     0,  1188,     0,     0,  1181,     0,  1202,
     203,   203,     0,   203,     0,  1228,     0,  1227,  1219,     0,
       0,     0,     0,  1223,     0,     0,     0,  1226,     0,     0,
       0,     0,     0,  1221,  1229,     0,     0,     0,  1220,   203,
     203,   203,     0,   219,   221,   223,     0,   224,     0,    62,
       0,  1270,     0,  1275,   159,  1290,     0,  1281,  1282,     0,
    1284,  1285,     0,   168,   169,  1276,  1298,  1299,     0,   227,
       0,   241,     0,     0,     0,     0,   275,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   317,
     159,     0,     0,     0,     0,   159,     0,   337,     0,   336,
     404,   403,     0,     0,     0,   159,     0,   167,   449,   447,
     451,   455,     0,     0,     0,   167,     0,   490,   474,     0,
     485,   487,   170,     0,     0,   366,     0,     0,    62,     0,
     464,    85,    84,     0,     0,   986,     0,     0,     0,     0,
       0,     0,   998,     0,     0,     0,     0,     0,     0,  1014,
    1015,     0,     0,     0,     0,  1025,     0,  1031,  1032,  1034,
    1036,     0,  1040,  1051,  1052,  1053,     0,  1055,  1060,  1062,
    1063,  1061,   973,     0,  1042,     0,  1041,   985,     0,     0,
    1047,     0,  1049,     0,  1048,  1069,  1050,  1057,     0,     0,
     386,     0,     0,   587,   590,   601,   602,     0,   599,   595,
       0,   180,   180,   180,   181,   182,   613,   614,   176,   175,
       0,   180,   180,   180,     0,   619,   629,   177,   180,   180,
     180,   178,   179,   180,   180,     0,   180,   180,     0,   177,
       0,   642,     0,     0,     0,   668,     0,   667,     0,     0,
     644,     0,   643,     0,     0,     0,     0,   177,   177,   174,
       0,     0,   174,     0,     0,     0,   180,   180,   742,     0,
     180,   180,   747,     0,   193,   194,   195,   196,   197,   198,
       0,    91,    92,    90,   777,     0,     0,     0,     0,     0,
     918,   916,   911,     0,   921,   905,   922,   908,   920,   914,
     903,   917,   906,   904,   923,   919,     0,     0,   791,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   822,     0,     0,     0,     0,   833,   835,     0,
       0,   840,   839,     0,     0,   183,     0,     0,   159,     0,
     848,     0,     0,     0,     0,   853,   854,   855,     0,     0,
       0,   861,   876,   880,   882,   885,   884,     0,     0,     0,
     889,   926,   928,     0,   927,   763,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1070,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   767,     0,     0,     0,     0,   863,     0,   159,  1083,
    1081,  1079,     0,     0,   159,  1085,   868,     0,     0,     0,
       0,  1121,     0,     0,  1129,   893,   894,     0,   896,  1163,
    1165,  1162,  1161,  1152,     0,     0,     0,  1185,     0,     0,
    1189,  1197,   205,   206,   207,   208,   204,  1212,  1211,     0,
       0,     0,  1214,  1213,   203,     0,     0,     0,  1222,     0,
       0,     0,     0,     0,  1239,     0,  1253,  1252,  1254,     0,
       0,     0,  1225,     0,     0,     0,  1224,  1234,  1233,  1235,
    1231,  1230,  1232,  1256,  1255,  1257,     0,     0,     0,  1272,
    1273,     0,  1288,   159,  1283,  1286,     0,     0,   159,     0,
       0,     0,   238,     0,     0,     0,     0,   279,     0,     0,
       0,     0,     0,     0,     0,   314,   313,     0,     0,   305,
     316,   318,     0,   328,   330,   329,   327,   159,   335,     0,
       0,     0,   167,   159,     0,     0,     0,     0,   469,   483,
     492,     0,   486,   172,   173,   171,   479,     0,   495,     0,
       0,   462,   467,    83,     0,     0,     0,     0,     0,     0,
     159,   987,     0,     0,     0,   992,     0,   159,     0,   999,
    1000,     0,  1002,  1003,  1004,     0,     0,     0,  1010,     0,
    1016,     0,     0,     0,  1020,  1021,     0,     0,     0,  1026,
    1027,     0,     0,  1030,  1033,  1035,  1037,     0,     0,  1054,
    1056,   977,  1065,   978,     0,     0,  1067,  1058,     0,     0,
     548,   549,     0,   596,   600,     0,   610,   611,   612,   180,
     616,   617,   618,     0,     0,     0,   623,   624,   174,     0,
       0,     0,   180,   630,   631,   632,   633,   635,   177,   638,
     639,     0,   180,     0,     0,     0,   177,   177,   174,     0,
       0,     0,     0,   666,     0,   670,     0,     0,     0,     0,
       0,   177,   177,   174,     0,     0,   174,     0,     0,     0,
       0,     0,   177,   177,   174,     0,     0,   174,     0,     0,
       0,     0,     0,   177,   177,   174,     0,     0,   174,     0,
       0,     0,     0,   177,   177,   174,     0,     0,     0,   177,
     646,   647,   648,   649,   651,     0,   654,   655,     0,   177,
       0,     0,   740,   741,   180,   744,   745,     0,   776,   159,
     778,     0,     0,     0,     0,     0,     0,     0,   910,   907,
     913,   912,   909,   915,     0,     0,     0,     0,     0,   159,
     796,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   813,   814,   815,     0,   819,   816,
     818,     0,     0,   824,   823,   825,     0,     0,     0,     0,
       0,     0,   159,   159,   838,   189,   185,   190,   184,   187,
     186,   188,   844,   845,     0,     0,   847,   849,   159,   159,
       0,   856,   859,   159,   159,   883,   887,   929,   764,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1114,
     954,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   955,     0,     0,     0,     0,
       0,   774,   775,   159,   167,  1084,     0,     0,  1088,  1089,
       0,     0,   870,     0,   159,     0,  1123,  1125,   892,     0,
    1182,  1183,  1186,  1187,   203,   203,   203,  1258,  1237,  1236,
    1238,  1241,  1240,  1244,  1243,  1245,  1242,  1250,  1249,  1251,
    1247,  1246,  1248,     0,     0,  1267,     0,  1289,     0,   159,
       0,  1293,     0,     0,   242,     0,   239,     0,     0,     0,
       0,     0,   286,     0,     0,     0,     0,     0,   159,     0,
     320,   147,     0,   424,     0,   445,   167,   170,     0,     0,
     458,     0,   496,   497,     0,   461,     0,     0,     0,     0,
       0,   159,   988,   170,   170,   170,   159,   993,   170,   167,
     170,   170,   159,  1005,   170,   170,   170,   159,  1011,   170,
     170,   159,     0,   170,   159,   170,   170,   159,   170,   159,
    1044,  1045,     0,     0,   547,     0,   615,   620,   621,   622,
       0,   626,   627,   628,   634,   180,   177,   640,   657,   658,
     659,   660,   661,     0,   663,   664,   177,     0,     0,     0,
     177,   177,   174,     0,     0,     0,     0,     0,     0,   177,
     177,   174,     0,     0,     0,     0,     0,     0,   177,   177,
     174,     0,     0,     0,   177,   180,   180,   180,   180,   180,
       0,   180,   180,     0,   177,   177,   180,   180,   180,   180,
     180,     0,   180,   180,     0,   177,   177,   720,   721,   722,
     723,   725,     0,   728,   729,     0,   177,   731,   732,   733,
     734,   735,     0,   737,   738,   177,   650,   177,     0,   656,
       0,     0,   743,     0,   779,   170,     0,     0,   170,     0,
       0,     0,   789,   170,   792,   793,   170,   795,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   817,   820,   821,     0,   170,     0,     0,     0,   836,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1115,  1093,     0,  1100,
    1101,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   159,     0,     0,    88,     0,     0,   963,
     964,   167,     0,     0,     0,  1091,   869,   871,   167,   159,
    1175,  1216,  1215,  1217,  1259,     0,  1269,  1300,     0,     0,
    1295,  1294,   243,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   306,   170,   425,   429,   446,   448,     0,
     456,   491,   159,     0,     0,     0,     0,     0,     0,   984,
     989,   991,   990,   994,   995,   996,   997,  1001,  1006,  1007,
    1008,  1009,  1012,  1013,  1017,   167,   170,  1023,   167,  1024,
    1028,   167,  1038,   167,     0,   159,     0,   546,     0,   625,
     636,   180,   177,   665,   180,   180,   180,   180,   180,     0,
     180,   180,   177,   180,   180,   180,   180,   180,     0,   180,
     180,   177,   180,   180,   180,   180,   180,     0,   180,   180,
     177,   180,   680,   681,   682,   683,   685,   177,   688,   689,
       0,   180,   180,   709,   710,   711,   712,   714,   177,   717,
     718,     0,   180,   724,   177,     0,   730,   177,   739,   652,
     177,   748,   749,   159,   781,     0,   170,   783,     0,   159,
       0,   790,   794,   159,     0,   801,   802,   803,   804,   808,
     809,   805,   806,   807,     0,     0,   170,   828,     0,   159,
       0,     0,   841,   170,     0,     0,   170,   170,     0,   886,
       0,   191,   191,     0,     0,   191,     0,   191,  1070,     0,
       0,     0,     0,     0,     0,     0,     0,  1092,     0,     0,
     191,   191,     0,     0,     0,     0,     0,     0,     0,     0,
     956,     0,     0,     0,  1070,    89,     0,   191,     0,  1117,
     159,   159,     0,   167,     0,   225,  1302,  1301,     0,     0,
     247,     0,     0,     0,     0,     0,     0,     0,     0,   321,
     457,     0,   340,     0,   980,     0,   199,     0,  1018,  1019,
    1022,  1029,  1039,   379,     0,   340,     0,   637,   662,   671,
     672,   673,   674,   675,   177,   677,   678,   180,   700,   701,
     702,   703,   704,   177,   706,   707,   180,   691,   692,   693,
     694,   695,   177,   697,   698,   180,   684,   180,   177,   690,
     713,   180,   177,   719,   726,   177,   736,   653,     0,   170,
     784,     0,     0,     0,     0,     0,   810,   811,   826,     0,
       0,     0,   837,   842,     0,   850,   851,   843,   170,     0,
     192,  1070,  1070,    88,     0,  1070,     0,  1070,   930,   159,
       0,  1095,     0,  1098,  1138,  1099,  1097,  1094,     0,  1070,
    1070,    88,     0,     0,  1070,  1070,     0,     0,  1070,   959,
     957,   958,   937,  1070,  1070,  1117,  1133,     0,  1082,  1080,
    1119,     0,     0,     0,     0,   249,   281,   282,     0,     0,
       0,   280,     0,   340,   341,   343,   342,   390,     0,     0,
     200,   202,   201,   982,   983,   340,   392,     0,   180,   679,
     180,   708,   180,   699,   686,   180,   715,   180,   727,     0,
     780,   170,   170,     0,   170,     0,   170,   170,     0,   170,
       0,  1070,   943,   939,  1070,     0,   944,     0,   938,  1070,
       0,  1096,     0,   941,   940,  1070,     0,     0,   935,   933,
    1070,   159,   934,   936,   942,  1133,  1077,     0,     0,  1118,
    1131,  1120,  1174,     0,     0,   288,   289,   287,   307,   310,
     308,     0,     0,   391,   979,   159,   393,   598,   676,   705,
     696,   687,   716,   170,   782,   788,     0,   800,   797,   827,
     832,     0,   846,     0,   948,   932,    88,     0,   946,  1139,
       0,   931,    88,     0,   947,     0,  1078,  1135,  1137,     0,
    1130,     0,     0,     0,     0,     0,     0,   199,     0,   785,
     159,   798,   829,   860,  1070,     0,     0,  1070,     0,   170,
    1136,  1132,   248,     0,     0,     0,     0,     0,   981,   759,
     159,   786,   799,   159,   830,   950,     0,  1070,   949,     0,
       0,   250,   300,     0,   299,     0,   787,   831,    88,   951,
      88,  1070,   298,   297,  1070,  1070,   945,   953,   952
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    56,  1473,   175,   157,   958,  2544,  2545,   451,   452,
     453,   454,   158,   159,   160,   730,   722,    96,   853,   474,
    1265,  1736,  1410,  1423,  1406,  1972,  2651,  1470,  2713,  1637,
     358,   803,   806,   809,   818,    66,   383,   389,   393,   396,
      71,   399,    78,   415,   411,   405,   422,    87,   431,    97,
     103,   436,   438,   440,   508,   911,  1707,   442,   445,   110,
     461,   161,   163,  2707,   179,   181,   224,   953,   992,   497,
     900,   499,   509,   903,   908,   511,   513,   914,   516,   916,
     527,   919,   921,   530,   534,   538,   540,   543,   547,   583,
     579,  1330,   561,   939,   944,   936,  1318,   950,   564,   571,
     575,   593,   596,   601,   606,   614,   983,   985,   987,   989,
     619,   994,   227,   621,  1802,   246,   624,   626,   630,   635,
     643,   252,   256,   264,  1399,   653,   272,   662,  1415,   664,
     670,  1041,  1431,  1036,  1843,  1437,  1435,  1845,  1037,  1440,
    1442,   676,   679,   674,   274,   282,   284,   717,  1118,  1496,
    1107,  1591,  2015,  1121,  1125,  1116,   978,  1372,  1376,  1384,
    1386,  1999,   290,  1134,  1137,  1145,  2306,  2307,  2308,  2000,
    2686,  2687,  1167,  1173,  1176,  2769,  2770,  2766,  2767,  2817,
    2309,  2310,   298,   304,   312,   745,   740,   317,   322,   324,
     755,   762,  1202,  1207,   812,   800,   330,   334,   769,   340,
     776,  1642,   789,   790,  1238,  1233,  1648,  1223,  1654,  1666,
    1662,  1227,   794,   778,   346,   347,   362,  1251,   365,   371,
     830,   833,   827,   373,   376,   838
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2585
static const yytype_int16 yypact[] =
{
    5014,    77,  1061,    32, -2585, -2585,  1123,  -183,   951,   788,
    1091,   262,  2983,   157,   415,   364,   159,   347,  5214,   129,
    1272, -2585,   296,   -20,   123,  1214,   196,   895,   -37,   193,
     239,   413,  1035,   507,   723,  3246,    20,   824,   533,   482,
     413, -2585,   176,    47,   896, -2585,    96,   636,  1351, -2585,
      90, -2585,    54,  2084,   370,    95,   629,    33,  1001,   388,
     672,   675,   110,   680,    -4,   974, -2585, -2585, -2585,  1064,
     786, -2585,   241,   175,   415,    -2,   182,   509, -2585,   682,
     786, -2585, -2585,   786,   786,   191,   786, -2585, -2585, -2585,
   -2585,   786, -2585, -2585, -2585, -2585, -2585, -2585,    63,   660,
     687,   732,   194, -2585,   786,  1447,   786,   786,   792,   786,
   -2585, -2585, -2585,   480, -2585, -2585, -2585, -2585,  3582, -2585,
   -2585, -2585, -2585, -2585, -2585,   786, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,  1481, -2585,
     786, -2585,   705, -2585, -2585,   415,   415,   415,   415,   415,
     415,   415,   415,   415,   415, -2585, -2585, -2585, -2585, -2585,
     596, -2585,   714,  1748,   666,   250,   499,   630,   -55,  3986,
      89,  4635,  4583,   795,  3582,  3770, -2585,  1613,  -105,   763,
     871,   789,   201,   234,   104,   690,   865,   413,  1039, -2585,
     822, -2585,   663,   621,   461, -2585,   173, -2585,    53, -2585,
      75,   838,   389, -2585, -2585,  4704, -2585, -2585, -2585,   852,
     860,   911, -2585, -2585, -2585, -2585,  1038, -2585, -2585, -2585,
   -2585,  1110, -2585, -2585,  4704,  4179, -2585,   941, -2585,   949,
    4704,   963, -2585,   968,  4704,   980, -2585,   124, -2585,   983,
     987,   515, -2585,   786, -2585,   996,   112,   998,   340,   881,
    1006,    79, -2585, -2585, -2585,  1011,  1013,   415,   415,   786,
     786, -2585, -2585,  1016, -2585, -2585, -2585, -2585, -2585, -2585,
    2768,   735, -2585,  1019,    22,   786,  4704,   786, -2585,   106,
   -2585, -2585, -2585, -2585, -2585,   786,   130,   415,   709,   786,
    1481,   786, -2585,  1058, -2585,  5215, -2585, -2585,   695,  1060,
    1067,   786, -2585,  1082, -2585, -2585,   -14,  1090,  4704,  1100,
   -2585,  1026,   786,  1020, -2585,   369,  1009,  1597,   437,  1130,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585,  1133, -2585,   610,
     311,   339,   362,    64,   786,  1136,   786,   200, -2585,   786,
     863,  1141, -2585,   786,   786, -2585,    52,    49,    67,  1147,
    1481, -2585, -2585, -2585,  1094,   786, -2585, -2585, -2585, -2585,
   -2585, -2585,   786, -2585,  1159,  1165, -2585,   786,  1282, -2585,
   -2585, -2585, -2585, -2585, -2585,   786, -2585, -2585,   786, -2585,
   -2585,   634,   634, -2585,  1168, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585,   972,   786,   786,  1182,
    1194,  1199, -2585, -2585,   786,   786,   786,   786,   786,   786,
     786, -2585,   786, -2585,  1205, -2585, -2585, -2585, -2585,   993,
   -2585,  1191, -2585,  4704,  1206, -2585,   786, -2585, -2585, -2585,
     786,  1226,  1230,  1230,  4704,   786,   786,   786,   786,   786,
     786, -2585,   786,  3582,  1447,   786,   786, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585,  1447,   786, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585,  1232, -2585,  1003,
       6, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
     345, -2585, -2585, -2585,  1076, -2585,   758,   361,   361, -2585,
   -2585, -2585,  1238, -2585,  1262, -2585, -2585,     8, -2585,  1093,
   -2585, -2585, -2585,  1109, -2585, -2585,  1481, -2585,   786,   786,
   -2585,  4704,  4704,  1481, -2585, -2585,  1481, -2585, -2585, -2585,
   -2585,  1481, -2585, -2585,  4704,  1481,   786, -2585, -2585,  4704,
   -2585,  1285,   588,  1104,    19, -2585, -2585,  1107,  4704,    17,
   -2585, -2585, -2585, -2585, -2585, -2585,  1299,  1311, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585,  1321, -2585,  1148, -2585,
     -28, -2585,   786, -2585, -2585,  1593, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585,    75, -2585, -2585,
   -2585, -2585, -2585, -2585,  1138,  1164, -2585, -2585,  1296,  1303,
    1307, -2585, -2585,  1144, -2585,   786,  1385,  1166,  5215, -2585,
    1481, -2585, -2585,  1403, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,  4704,  4704,
    4704,  4704, -2585, -2585, -2585, -2585, -2585,  1410, -2585, -2585,
    1412,  1415,   415, -2585, -2585,  1417,  1419,  1220,   786, -2585,
     423,  1359, -2585,  1436, -2585,   585,  1360,  4038,    60,  1443,
   -2585,  1450, -2585,  1455, -2585,     2, -2585,  1458,  1460, -2585,
    1462, -2585, -2585, -2585,   786, -2585,  5215,  4514,  1672,   531,
    1465,   295,  1367, -2585, -2585, -2585,    38,   767,  1467,  1470,
      48,   786,   471,   548,    30,  4704,   415,  1937,   877,   169,
     580,   387,    15, -2585,  1463,  1472,  1474, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585,   786, -2585, -2585, -2585, -2585,   786,   786,   786,   786,
   -2585, -2585,   786,  1481,   786, -2585,   786,  1447,   786,  1485,
    1481, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,  1488,
     489,   549, -2585, -2585, -2585,  1489, -2585, -2585, -2585, -2585,
    1398, -2585,  1497,  1498,  1429,  1520, -2585,  1532, -2585,  1533,
    1438,  1534,   504,    29,   505,   400,   510,  1536,   514, -2585,
   -2585,  1539,  1541,  1545, -2585, -2585,  1547, -2585, -2585, -2585,
   -2585,  1551, -2585, -2585,  1552, -2585, -2585,  1553, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585,   786,   786, -2585,   786,
    1163,   786,   786, -2585,  5215,  1499,  1564, -2585,  1221,  1568,
   -2585,  1227,  1570, -2585, -2585,   409,   786,   786, -2585,  1576,
   -2585, -2585,  1601,  1354,   786,  1602,   599, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585,  1571,  1604,   786,   786,   786,   786,   786,   786,   786,
    1611,   415,  1612,  1615,  1481,  4704, -2585, -2585, -2585, -2585,
   -2585,  1481, -2585, -2585,   786,   786,   786,  4704,   786,  1447,
     786, -2585,   786, -2585, -2585, -2585, -2585, -2585,  1616,  1619,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585,    89, -2585,   786, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585,  4704,   786,  1481,  1481,   409,   409,
     409,  1481,  1447,   786,  1481, -2585, -2585, -2585,   786, -2585,
     -28,  1456,  1623,  1625, -2585, -2585,  1481, -2585,  1468,  1469,
   -2585,  1628,  1629, -2585,  1632,  1294,  1596,  1605, -2585,   786,
    4586,   715,   625, -2585, -2585, -2585,   786,   286,  1143, -2585,
    1370, -2585,  1937,  1371,   638,  1344,   109, -2585, -2585,   786,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
     786,  1640, -2585, -2585, -2585, -2585,   409, -2585, -2585, -2585,
   -2585, -2585,  1642,  1643,  4668, -2585, -2585,  1644,  1647,   786,
    1649,  1650,  1651,   -24,   -24,   -35,  1656,  1657,  1658,  1659,
    1381,  1384,  1661,  1663,  1664,   114,   114,   -35,  1667,  1675,
     -35,  1671,  1676,  4119,  1677,  1680, -2585, -2585,  1684,  1692,
     697, -2585,  1698,  1699,  1700,  1701,   -24,   -35,  1703,  1705,
   -2585,  1706, -2585, -2585,  1481,   677,  1425,  1433,  1466,  1471,
    1610,   650,  1473,  1716,    16,  1582,  1620,  1192,  1409,  1688,
    1482,  1483,  1626,  1728,  1516,    46,    44,   565,  1486,  4704,
    1937,  1702,   385,  1490,  1522,  1739,   119, -2585, -2585,   271,
    1741,  1742, -2585, -2585, -2585,  1743,  1529,    83,  1937,  1530,
   -2585, -2585, -2585,   415,  1747,  1750,   786, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585,     9, -2585,  1791, -2585,
   -2585, -2585,   786, -2585,   786, -2585, -2585, -2585, -2585,   786,
     786,   786,   295,  4704, -2585,  1751,  1341, -2585, -2585,   786,
   -2585, -2585,   786,  4704,   786, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
     415,   786, -2585,   786,   295,  1752,  1753, -2585, -2585, -2585,
   -2585,   786,   786, -2585,   415, -2585, -2585, -2585,   623,  1755,
    1757, -2585, -2585, -2585, -2585, -2585,   786,   786, -2585, -2585,
    1447,   786,   786, -2585, -2585, -2585, -2585,  1761,   786, -2585,
     786,  1654, -2585,   786, -2585,   786,  1655, -2585,  1764, -2585,
    1114,  1114,   516,  1114,  1766, -2585,   552, -2585, -2585,  1768,
    1769,   608,  1765, -2585,  1770,  1771,  1773, -2585,   642,   700,
    1774,  1775,  1778, -2585, -2585,  1779,  1780,  1782, -2585,  1114,
    1114,  1114,   786, -2585, -2585, -2585,   786, -2585,   786,   172,
    4704, -2585,   786, -2585,  1481, -2585,  5215, -2585, -2585,  1783,
   -2585, -2585,  1784, -2585, -2585, -2585, -2585,  1744,   709, -2585,
     786,  1772,   786,   786,   786,  1112, -2585,  1789,   786,   786,
    1794,   786,   786,   786,   786,   -15,  1790,   415,   415, -2585,
    1481,   786,  1795,  1796,  1799,  1481,  4704, -2585,   786, -2585,
   -2585, -2585,   786,   786,   786,  1481,  4704,   409, -2585, -2585,
   -2585, -2585,  1447,   786,  1801,   409,   786,   704, -2585,  1803,
   -2585, -2585,  1198,  3798,   786, -2585,   786,  1802,  1787,   786,
   -2585, -2585, -2585,  1805,   861,  3582,  1566,  1567,  1569,   155,
    4704,  1574, -2585,   337,  1673,   187,  1577,  1579,   221, -2585,
   -2585,   440,  1653,   652,   725,  1937,   624, -2585,  1814,  1572,
   -2585,   605, -2585, -2585, -2585, -2585,  1937,  1607, -2585, -2585,
   -2585, -2585, -2585,   786, -2585,   786, -2585, -2585,   786,   786,
   -2585,   786, -2585,   786, -2585, -2585, -2585, -2585,  1627,   786,
   -2585,   786,    88, -2585, -2585, -2585, -2585,  1828,  1830, -2585,
     786,   -24,   -24,   -24, -2585, -2585, -2585, -2585, -2585, -2585,
    1834,   -24,   -24,   -24,   829, -2585, -2585,   114,   -24,   -24,
     -24, -2585, -2585,   -24,   -24,  1837,   -24,   -24,  1840,   114,
     931, -2585,  1841,  1845,  1846, -2585,   892, -2585,   935,  1056,
   -2585,  1203, -2585,  1573,  1850,  1853,  1854,   114,   114,   -35,
    1856,  1859,   -35,  1866,  1860,  1870,   -24,   -24, -2585,  1874,
     -24,   -24, -2585,  1876, -2585, -2585, -2585, -2585, -2585, -2585,
     415, -2585, -2585, -2585,  3582,  1189,   786,  1400,  1378,    -9,
   -2585, -2585, -2585,   598, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585,  1877,   786, -2585,   415,
    1878,   786,  4704,   415,  1502,  1598,  1637,   249,   273,  1638,
     353,  1560,  1578,  1883,  1885,  1886,   650,  1891,  1892,  1894,
    1580,  1581,  1350,  1899,   786,  1434,  1507, -2585, -2585,   415,
    4704, -2585, -2585,  4704,   786,    34,  1900,   786,  1481,   415,
   -2585,  1902,  4704,  4704,   786, -2585, -2585, -2585,   415,   415,
    4704, -2585, -2585, -2585, -2585, -2585, -2585,  4704,   786,   415,
   -2585, -2585, -2585,   786, -2585, -2585,  1903,   786,  1682,   253,
     786,  1683,   786,   268,   786, -2585,   786,  1685,  1686,   786,
     786,   786,   786,   786,   786,   786,   786,    25,   786,   786,
    1687, -2585,   786,   786,   786,   786, -2585,  4704,  1481,  1908,
    1913,  1918,   786,   786,  1481, -2585,   786,   786,   786,  4704,
     295, -2585,   786,   786, -2585, -2585, -2585,  1919, -2585, -2585,
   -2585, -2585, -2585, -2585,  1922,   786,   786, -2585,   786,   786,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,  1920,
    1923,  1935, -2585, -2585,  1114,  1942,  1943,  1936, -2585,  1947,
    1948,  1949,  1952,  1954, -2585,  1955, -2585, -2585, -2585,  1956,
    1957,  1959, -2585,  1960,  1961,  1963, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585,   786,   786,   786, -2585,
   -2585,   786, -2585,  1481, -2585, -2585,   709,   786,  1481,   786,
     786,   786, -2585,   786,   786,  1964,   786, -2585,   786,   786,
    1969,   786,   786,   786,   786, -2585, -2585,  1970,  4704, -2585,
   -2585, -2585,   786, -2585, -2585, -2585, -2585,  1481, -2585,  1315,
     786,  1315,   409,  1481,  4704,   786,   786,  1971, -2585, -2585,
   -2585,   786, -2585, -2585, -2585, -2585, -2585,  4704, -2585,  4704,
     786, -2585, -2585,   -28,  1973,  1974,  1975,  1977,  1979,  4704,
    1481, -2585,  4704,  4704,  4704,  3582,  4704,  1481,  4704, -2585,
   -2585,  4704, -2585, -2585,  3582,  4704,  4704,  4704,  3582,  4704,
   -2585,  4704,  4704,   786, -2585, -2585,  4704,  4704,  4704, -2585,
   -2585,  4704,  4704, -2585, -2585, -2585, -2585,  4704,  4704, -2585,
   -2585, -2585, -2585, -2585,   786,   786, -2585, -2585,  1972,   786,
   -2585, -2585,  1980, -2585, -2585,   786, -2585, -2585, -2585,   -24,
   -2585, -2585, -2585,  1991,  2007,  2011, -2585, -2585,   -35,  2013,
    2014,  2015,   -24, -2585, -2585, -2585, -2585, -2585,   114, -2585,
   -2585,  2017,   -24,  2018,  2019,  2020,   114,   114,   -35,  2026,
    2027,  2028,  1244, -2585,  1246, -2585,  1334,  1646,  2029,  2030,
    2031,   114,   114,   -35,  2034,  2036,   -35,  2037,  1679,  2039,
    2040,  2041,   114,   114,   -35,  2043,  2044,   -35,  2045,  1738,
    2047,  2048,  2049,   114,   114,   -35,  2051,  2052,   -35,  2053,
    2057,  2059,  2063,   114,   114,   -35,  2067,  2069,  2070,   114,
   -2585, -2585, -2585, -2585, -2585,  2072, -2585, -2585,  2080,   114,
    2081,  2082, -2585, -2585,   -24, -2585, -2585,  2087, -2585,  1481,
   -2585,  4704,   786,   786,  4704,   786,  2088,  1425, -2585, -2585,
   -2585, -2585, -2585, -2585,  2089,  4704,   415,  2091,  4704,  1481,
   -2585,  2092,  1425,   786,   786,   786,   786,   786,   786,   786,
     786,   786,  2097,  2098, -2585, -2585, -2585,  2099, -2585, -2585,
   -2585,  2101,  2103, -2585, -2585, -2585,   786,  4704,   786,  2104,
    1425,   415,  1481,  1481, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585,   786,  1447, -2585, -2585,  1481,  1481,
     786, -2585, -2585,  1481,  1481, -2585, -2585, -2585, -2585,   786,
     786,   786,   786,   786,   786,   786,   786,   786,   786,  2514,
   -2585,   786,   786,   786,   786,   786,   786,   786,   786,   786,
     786,   786,  3394,  2106,   786, -2585,   786,   786,   786,  2110,
    2113, -2585, -2585,  1481,   409, -2585,  2114,  2115, -2585, -2585,
    1447,   786, -2585,  2117,  1481,  4704, -2585, -2585, -2585,  2118,
   -2585, -2585, -2585, -2585,  1114,  1114,  1114, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585,  1425,   786, -2585,   786, -2585,   786,  1481,
     786, -2585,  1447,   786, -2585,   786, -2585,  1912,  2119,  2120,
     786,   786, -2585,   786,   786,   786,   786,  2122,  1481,  4704,
   -2585, -2585,   786, -2585,   786, -2585,   409,  1198,   786,  2123,
   -2585,   786, -2585, -2585,  3582, -2585,  2124,  2126,  2127,  2128,
    2129,  1481, -2585,  1198,  1198,  1198,  1481, -2585,  1198,   409,
    1198,  1198,  1481, -2585,  1198,  1198,  1198,  1481, -2585,  1198,
    1198,  1481,  4704,  1198,  1481,  1198,  1198,  1481,  1198,  1481,
   -2585, -2585,  2131,  3582,  2132,   786, -2585, -2585, -2585, -2585,
    2134, -2585, -2585, -2585, -2585,   -24,   114, -2585, -2585, -2585,
   -2585, -2585, -2585,  2135, -2585, -2585,   114,  2136,  2138,  2139,
     114,   114,   -35,  2141,  2143,  2144,  2145,  2146,  2147,   114,
     114,   -35,  2151,  2152,  2153,  2154,  2155,  2156,   114,   114,
     -35,  2158,  2160,  2163,   114,   -24,   -24,   -24,   -24,   -24,
    2166,   -24,   -24,  2168,   114,   114,   -24,   -24,   -24,   -24,
     -24,  2169,   -24,   -24,  2170,   114,   114, -2585, -2585, -2585,
   -2585, -2585,  2172, -2585, -2585,  2173,   114, -2585, -2585, -2585,
   -2585, -2585,  2174, -2585, -2585,   114, -2585,   114,  2175, -2585,
    2176,  2177, -2585,  5215, -2585,  1198,  2178,  4704,  1198,   786,
    4704,  2179, -2585,  1198, -2585, -2585,  1198, -2585,  4704,  2180,
     786,   786,   786,   786,   786,   786,   786,   786,   786,   786,
     786, -2585, -2585, -2585,  4704,  1198,   786,  4704,  2181, -2585,
    1447,  1447,  4704,  1447,  1447,  4704,  4704,  1447,  1447,   786,
     786,   786,   786,   786,   786,  1425,   786,   786,   786,  1678,
    1694,  1711,  1740,  1760,  1823,  1824,  2514, -2585,  1825, -2585,
   -2585,  1425,   786,   786,   786,   786,  1425,   786,   786,   786,
     786,   786,   786,  1481,   786,  1707,  1425,   786,   786, -2585,
   -2585,   409,   415,  4704,  4704, -2585, -2585, -2585,   409,  1481,
    2185, -2585, -2585, -2585, -2585,   786, -2585, -2585,  1447,   786,
   -2585, -2585, -2585,  1347,  2186,  2188,  2191,  2192,   786,   786,
     786,  2193,  1315, -2585,  1198, -2585, -2585, -2585, -2585,  2194,
   -2585, -2585,  1481,  2196,  2197,  2200,  2202,  4704,  2203, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585,   409,  1198, -2585,   409, -2585,
   -2585,   409, -2585,   409,  2204,  1481,  2201, -2585,   786, -2585,
   -2585,   -24,   114, -2585,   -24,   -24,   -24,   -24,   -24,  2206,
     -24,   -24,   114,   -24,   -24,   -24,   -24,   -24,  2207,   -24,
     -24,   114,   -24,   -24,   -24,   -24,   -24,  2208,   -24,   -24,
     114,   -24, -2585, -2585, -2585, -2585, -2585,   114, -2585, -2585,
    2209,   -24,   -24, -2585, -2585, -2585, -2585, -2585,   114, -2585,
   -2585,  2211,   -24, -2585,   114,  2212, -2585,   114, -2585, -2585,
     114, -2585, -2585,  1481, -2585,  4704,  1198, -2585,  2214,  1481,
     786, -2585, -2585,  1481,   786, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585,   786,   786,  1198, -2585,  2215,  1481,
     786,  1447, -2585,  1198,   786,  1447,  1198,  1198,  4704, -2585,
     786,  2217,  2217,   786,   786,  2217,  1425,  2217, -2585,  4704,
     650,  2218,  2220,  2221,  2222,  2223,  2226, -2585,   415,  1425,
    2217,  2217,   786,   786,  1425,   786,   786,   786,   786,   786,
   -2585,  1447,   786,  2227, -2585, -2585,   786,  2217,   415,    43,
    1481,  1481,   415,   409,  2229, -2585, -2585, -2585,  2230,   786,
   -2585,  2231,  2233,  2234,  2235,  2236,  2237,  2238,   786, -2585,
   -2585,  2239,    92,  4704, -2585,  2240,   127,  4704, -2585, -2585,
   -2585, -2585, -2585, -2585,  2243,    92,   786, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585,   114, -2585, -2585,   -24, -2585, -2585,
   -2585, -2585, -2585,   114, -2585, -2585,   -24, -2585, -2585, -2585,
   -2585, -2585,   114, -2585, -2585,   -24, -2585,   -24,   114, -2585,
   -2585,   -24,   114, -2585, -2585,   114, -2585, -2585,   786,  1198,
   -2585,  4704,  4704,   786,  4704,   786, -2585, -2585, -2585,  4704,
    4704,   786, -2585, -2585,  4704, -2585, -2585, -2585,  1198,  2244,
   -2585, -2585, -2585,  1425,   786, -2585,  2246, -2585, -2585,  1481,
    2247, -2585,  2249, -2585, -2585, -2585, -2585, -2585,  2250, -2585,
   -2585,  1425,   786,  2251, -2585, -2585,   786,  4704, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585,    43,  1832,  1937, -2585, -2585,
   -2585,   415,  2252,  2263,  2265, -2585, -2585, -2585,  2267,  2268,
    2272, -2585,   211,    92, -2585, -2585, -2585, -2585,  2275,  4704,
   -2585, -2585, -2585, -2585, -2585,    92, -2585,  2278,   -24, -2585,
     -24, -2585,   -24, -2585, -2585,   -24, -2585,   -24, -2585,  5215,
   -2585,  1198,  1198,   786,  1198,  2279,  1198,  1198,   786,  1198,
     786, -2585, -2585, -2585, -2585,  2288, -2585,   786, -2585, -2585,
    2291, -2585,   786, -2585, -2585, -2585,  2293,   786, -2585, -2585,
   -2585,  1481, -2585, -2585, -2585,  1832, -2585,  1862,  1827,  1937,
   -2585, -2585, -2585,  2295,  2296, -2585, -2585, -2585, -2585, -2585,
   -2585,  1085,  1085, -2585, -2585,  1481, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585,  1198, -2585, -2585,  2294, -2585,  3582, -2585,
   -2585,  2298, -2585,  1425, -2585, -2585,  1425,   786, -2585, -2585,
     786, -2585,  1425,   786, -2585,  4704, -2585,  1862, -2585,   415,
   -2585,  2300,  2301,   786,   786,   786,   786,   127,  2302,  3582,
    1481, -2585,  3582, -2585, -2585,   786,  2299, -2585,   786,  1198,
   -2585, -2585, -2585,  2303,  2308,   786,  2315,   786, -2585, -2585,
    1481, -2585, -2585,  1481, -2585, -2585,  2318, -2585, -2585,  2319,
    2321, -2585, -2585,  2322, -2585,  2323, -2585, -2585,  1425, -2585,
    1425, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2585, -2585,    -3, -2585,   308,  -936, -1658,  -981,  1517, -2585,
     940,  -338,  1921,   -51,    26, -2585, -2585, -1712,  1734,   616,
    -918, -1965, -1008,  1025,  1557, -2585, -1121, -2585,  -709, -1195,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585,  -504,  -507, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2490, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -1513,
   -2585, -2585, -2585, -2585, -2585,  -697, -2585, -2585, -2585, -2585,
   -2585, -2585,    51, -2585, -2585, -2585, -2585,   -81,  -690, -1422,
    -484, -2585, -2585, -2585, -2585, -2585,  -538,  -521, -2585, -2585,
   -2584, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585,  1548, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1272
static const yytype_int16 yytable[] =
{
      70,   912,   370,  1947,  1317,  1133,  1136,  2092,   109,  2094,
    1309,  1310,  1311,   178,  1565,  1044,  1638,  1160,  1643,  1425,
    1177,   947,  1428,   941,   111,   313,   724,   391,    67,    68,
    2012,  1705,   309,    67,    68,    67,    68,   111,   378,  1459,
     333,   249,  1499, -1116,  1673,  1674,  1675,    67,    68,   364,
      67,    68,   375,   828,  1119,   382,   824,    67,    68,   388,
    1965,   311,   395,  1045,  1128,  1138,   398,   400,   434,  1139,
     410,   831,  1529,   417,   421,  1474,   810,   424,  1392,  1531,
     425,   426,  1966,   432,   677,  1967,    67,    68,   433,   607,
    1219,   326,    67,    68,   359,  2716,  1968,  1918,    67,    68,
     608,   446,   450,   455,   456,   460,   462,  1800,   576,   956,
     898,   734,    79,    67,    68,  1178,   562,   660,  1555,  1969,
     514,  1179,   466,  2704,  1547,  1387,   891,   609,   651,   515,
    1421,   114,  2368,    67,    68,  1408,   894,  1970,  1404,   760,
     413,   116,  1140,    57,   465,   114,   341,  1038,  2380,  2381,
    2382,  1220,   948,  2384,   116,  2386,  2387,   475,  2710,  2389,
    2390,  2391,    67,    68,  2393,  2394,  1141,  1405,  2397,   737,
    2399,  2400, -1271,  2402,  1164,  1755,  1679,   379,    67,    68,
    1532,   414,   507,  2818,   253,    67,    68,   528,  1500,   162,
     942,  1221,   577,   602,  1919,   427,   342,   111,   275,   443,
    1046,   899,   273,    67,    68,   343,   610,  1764,  1388,   917,
     563,   265,   225,  2783,    67,    68,   529,   360,   537,  1556,
     542,   546,  1039,   177,   444,  2786,   578,   725,   957,   226,
     119,   582,  1142,  2840,   726,   727,   344,   327,   120,   121,
    1409,  1768,   738,   119,   283,   401,   615,   611,  1920,   331,
     735,   120,   121,    67,    68,   761,    67,    68,   585,   276,
     658,   811,   568,  1501,   750,    67,    68,  1706,  1129,  1935,
     728,    67,    68,   250,   918,  1047,   684,   685,  1422,  1530,
    2474,   277,  1380,  2477,  2705,  1048,   825,   392,  2481,    67,
      68,  2482,   731,  1937,   733,   572,   251,  1549,   435,   122,
     111,   104,   736,   739,   361,   742,   746,  1120,   748,  1502,
    2497,   603,  1222,   122,   116,   111,   612,  1049,   758,  2711,
     949,   105,   164,   176,  1566,   652,   124,  1180,   768,   770,
     248,  1801,   314,  1143,   744,    69,   278,   281, -1116,   124,
    2013,   943,   315,   111,   316,   665,   829,  1533,   428,   429,
     332,   813,  1130,   815,   817,   826,   819,   363,  1109,   678,
     822,   823,   247,  1759,   832,   380,   111,   661,   111,   613,
     406,   837,   839,  1940,   106,   154,  1548,   801,   729,   840,
     155,   156,   412,  2706,   843,   845,  1557,   416,   154,  1724,
    1539,   111,   846,   155,   156,   847,  1971,  1728,   374,  2569,
    1110,   345,  1756,   119,   617,   804,  2778,   165,  1559,  1193,
     166,   120,   121,   387,   857,   858,   254,   116,  2712,   111,
     604,   862,   863,   864,   865,   866,   867,   868,   807,   869,
     772,  2579,   116,   816,  1765,  1597,  1010,  1011,  1165,   255,
     167,  1895,   402,   876,  1898,   500,   430,   877,   168,  2047,
     605,   501,   882,   883,   884,   885,   886,   887,   666,   888,
     116,   450,   892,   893,   107,  1166,  1770,  1609,  1769,   328,
     285,   450,   895,   477,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   116,  1012,   116,  1991,  1228,   407,   890,
     502,   773,   329,   403,   569,   180,  1936,  1917,   791,   124,
     404,  1996,  1374,   909,  1550,   279,   119,  1263,   116,  1760,
     169,  2630,    67,    68,   120,   121,   503,   570,  1541,   656,
    1938,   119,   598,  1932,  2779,   924,   925,   573,  1198,   120,
     121,  2638,   408,   409,  1109,  1102,   116,   323,  2643,  1111,
     667,  2646,  2647,   933,   910,  1960,   901,   286,   154,   119,
     574,  1297,   280,   155,   156,  1112,  1113,   120,   121,   792,
    1103,   108,  1229,   504,   170,   779,  1224,   995,   505,  2780,
     325,  1230,   119,   299,   119,  1235,  1110,  1639,   938,   959,
     120,   121,   120,   121,  1761,   682,   683,   418,  1203,   171,
    1021,   172,   937,   618,  1313,   668,  1168,   119,  1022,  1023,
    1941,  1199,   124,  1274,   902,   120,   121,   505,   506,   372,
    1275,  1109,   990,  1645,  1771,   741,  1035,   124,  1542,   173,
     669,  1013,  1014,   979,   774,   119,   781,  1225,  1615,   377,
    1762,  1786,  1231,   120,   121,  1054,  1236,   657,  1640,  1616,
     348,    67,    68,   797,   114,   124,  1024,   287,  1114,  1115,
    2568,   154,   775,  1110,  1368,  1009,   155,   156,   802,   805,
     808,  1204,   288,   848,  2730,  1779,   154,   384,   124,  1651,
     124,   155,   156,  1772,  1646,  1135,  1789,   385,  1543,   386,
    1264,  1053,   463,  2740,  1174,   390,   174,   423,   419,  1479,
     437,  1200,   439,   124,   154,   580,  1015,  1104,  1131,   155,
     156,  1144,  1443,  1659,  1921,  1169,  1016,  1017,  1730,   476,
    1444,  1445,    67,    68,   487,  1111,  1480,   154,   798,   154,
     793,   124,   155,   156,   155,   156,   289,   112,  1184,   849,
    1652,  1112,  1113,  1185,  1186,  1187,  1188,   441,  1018,  1189,
    1132,  1191,   154,  1192,   450,  1194,   114,   155,   156,   751,
    1481,  1205,  1105,  1170,   599,   581,  1482,  1780,  1446,  1464,
     114,  1663,  1483,  1201,  1660,   114,  2794,  2795,   420,  2797,
     154,  2799,  2800,  1254,  2802,   155,   156,   600,  1106,  1787,
     488,  1363,  1484,  1025,  1026,   752,   498,   787,  1226,    67,
      68,  1369,  1111,  1232,   510,    67,    68,  1237,  1781,  1641,
    1171,  1922,   850,  1485,  2095,   512,  1122,  2105,  1112,  1113,
    2150,   115,   122,  1246,  1247,    88,  1248,  1250,  1252,  1253,
    1486,   799,  1664,  1206,  1114,  1115,   718,   539,  2828,   565,
    2163,   457,  1465,  1266,  1267,  1647,   905,  1535,  1788,   753,
    1271,  1272,  1813,  1814,  1536,  2200,  1370,  1364,  2203,  2341,
    2342,  2343,  1621,  1487,  1382,  1923,  2211,  1782,  1027,  2214,
    1278,  1279,  1280,  1281,  1282,  1283,  1284,  2222,  1028,  1029,
    2225,   117,  1371,  1030,  2860,  1365,   566,  2232,   567,  1123,
     584,  1292,  1293,  1294,  1172,  1296,   450,  1298,   594,  1299,
    1815,  1653,  1488,   851,   318,  1447,  1448,  1847,   852,  1776,
    1031,  1114,  1115,   595,   458,  1848,  1849,  1489,  1466,  1467,
    1302,   719,  1304,  2035,   122,   597,  1161,  1783,   622,  1490,
     266,   335,  1306,  1468,  1774,  1661,   747,   616,   122,   450,
    1314,  1775,   623,   122,   300,  1316,  2251,   906,   123,  1303,
    1858,   625,    89,  1744,  1833,  1834,   644,  1491,  1859,  1860,
     754,  2259,  1329,  1850,   645,    80,  1333,  1366,  1777,  1492,
    1005,  1493,  1494,  1373,  1375,  1378,  1469,   647,    90,  1124,
    1449,  1383,    91,   648,  1725,   671,  1389,    67,    68,  2278,
    1450,  1451,  1434,  1665,   650,  1452,   835,  1390,   654,  1162,
      81,   655,  1835,   672,   459,  2744,  1861,   871,   872,   319,
     659,  1495,   720,   663,    67,    68,  1400,  2660,   267,   336,
    1367,   675,  1453,  2755,  1147,   680,  1745,   907,   681,  1175,
     721,   686,   268,   337,   723,    92,  1778,  1816,  1817,    67,
      68,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   269,
     381,  1869,   749,    82,   756,   766,    93,    67,    68,  1870,
    1871,   757,    58,  1534,    94,    95,   673,   301,   320,  1163,
     291,   627,  2344,   302,   586,   303,   759,   321,    67,    68,
    1851,  1852,  1746,  1747,  1558,   763,  2658,    67,    68,   292,
     394,   293,  1818,  1564,   765,   587,  2332,  1748,    83,    84,
     270,   338,  1819,  1820,    59,    67,    68,  1872,   771,  1592,
     588,  1593,  2682,   271,   339,   628,  1594,  1595,  1596,  1836,
    1837,   777,    60,  1862,  1863,   795,  1602,   796,   767,  1603,
     814,  1605,   923,   820,  1821,   821,    67,    68,  2834,   928,
    1749,   834,   929,    85,  2837,  1632,  1633,   930,  1607,  1377,
    1608,   932,    61,   841,  2419,  1853,    67,  1249,  1612,  1613,
     842,  1695,   855,  2428,    98,  1854,  1855,   856,  2367,  1286,
    1856,    62,  2437,  1619,  1620,    63,   859,   450,  1622,  1623,
     397,    99,    67,    68,  1911,  1625,   873,  1626,   860,    64,
    1628,  2385,  1629,   861,  1838,  1683,    86,  1857,  1864,   870,
    2874,   875,  2875,  1505,  1839,  1840,  1880,  1881,  1865,  1866,
     836,  1733,  1734,  1867,   294,  1257,  1258,   909,   589,  2742,
    2743,  1260,  1261,  2746,   447,  2748,   996,   896,   629,  1676,
     449,  1506,   913,  1677,  1507,  1678,  1841,  2753,  2754,  1681,
    1868,   904,  2758,  2759,  1873,  1874,  2762,  2167,  2168,  2176,
    2177,  2763,  2764,   631,  1882,  1687,   915,  1690,   910,  1692,
    1693,  1694,  1696,   100,  1508,  1698,  1699,   920,  1701,  1702,
    1703,  1704,   897,   295,   922,    67,    68,   590,  1712,   935,
     228,  1634,  1635,   844,  1689,  1718,  1735,    67,  1328,  1719,
    1720,  1721,   257,  1509,   951,  2169,  1510,  2178,   940,   450,
    1726,   945,   229,  1729,  2516,   230,   952,   101,    72,  2804,
    1636,  1739,  2805,  1740,    73,   954,  1742,  2808,   296,  1875,
    2529,   258,   591,  2811,   980,  2534,   632,   297,  2814,  1876,
    1877,   592,    88,  1731,  1878,  1600,  1601,  2185,  2186,   231,
      67,    68,   955,   102,  1953,  1954,   232,    67,    68,  1190,
     981,  1751,   982,    74,    65,  1270,  1196,   233,   234,   984,
    1791,  1879,  1792,   986,   235,  1793,  1794,   988,  1795,   633,
    1796,    67,    68,  1916,  1471,  1472,  1798,   349,  1799,    75,
     991,  2652,   879,   880,  2655,  2187,  2657,  1805,   350,   236,
     993,  1883,  1884,    67,    68,  1914,  2558,   259,   997,  2669,
    2670,  1561,  2855,  2548,  1002,  2858,  1003,   237,   634,  1004,
    2552,  1006,   260,  1007,  1008,   351,  2684,  1511,    67,    68,
    1513,  1471,  1472,   238,   239,  2869,    76,    67,    68,  1957,
     240,  1020,  2170,  2171,  2179,  2180,  1019,  1032,  1040,  2876,
      67,    68,  2877,  2878,  1042,   447,   448,   449,  1514,  1043,
    1512,  1515,   241,  1050,  1516,  1051,  1052,  1117,  1606,    89,
    1108,  1126,  1912,  1913,  1915,  1127,  1885,  2578,  1183,  1181,
    2580,    77,  1614,  2581,   261,  2582,  1886,  1887,  1182,  1195,
    1289,  1517,  1197,  1208,  1925,    90,  1209,  1291,  1928,  2091,
    1910,   242,  1210,  1211,   352,    67,    68,  1931,  1471,  1472,
      67,    68,  1959,  1471,  1472,   467,  1212,  2172,  1888,  2181,
    1518,  1956,  1958,  1519,  1213,  1216,   262,  2173,  2174,  2182,
    2183,  1964,  2188,  2189,  1974,  2656,   263,  1214,  1215,  1217,
    1234,  1980,  1307,  1308,  1239,   353,  1240,  1312,  2668,  1241,
    1315,  1242,    92,  2673,   243,  1985,  1243,  1244,  1245,  2175,
    1987,  2184,  1322,  1255,  1989,   244,  1992,  1993,  1256,  1995,
    1997,  1998,  1259,  2001,  1262,  1276,  2004,  2005,  2006,  2007,
    2008,  2009,  2010,  2011,  2014,  2016,  2017,  1268,   468,  2019,
    2020,  2021,  2022,    93,   245,  1709,  1710,   960,   961,  2028,
    2029,    94,    95,  2031,  2032,  2033,  1269,  2190,  1277,  2036,
    2037,   469,   470,  1273,   354,  1285,  1287,  2191,  2192,  1288,
     471,  1300,  2040,  2041,  1301,  2042,  2043,  1319,  1320,  1321,
    1323,  1324,  1325,  1331,  1326,  2691,  1327,  2283,  1379,  1381,
     472,  1385,  1332,   355,  1520,  1391,  1393,  1394,  1397,  2193,
     473,   356,  1398,   962,  1401,  1402,  1403,   548,   779,   963,
    1411,  1412,  1416,  1413,  1414,  1417,  1418,   357,  1419,  1420,
    1463,  1426,   549,  2063,  2064,  2065,  1429,  1521,  2066,  1427,
    1475,  1430,  1436,  2068,  2071,  1438,  2073,  2074,  2075,  1439,
    2076,  2077,  2335,  2079,   550,  2080,  2081,  1441,  2083,  2084,
    2085,  2086,  1454,  1455,  1522,  1456,  1457,  1460,   964,  2089,
    1461,  1462,  2070,  1476,   551,   780,  1478,  2093,  1477,   781,
    1497,  1498,  2098,  2099,  1503,   965,  1504,  1523,  2101,  1524,
    1525,   552,  1526,  1527,  2350,   553,  1528,  2104,  1091,  1537,
     966,  1540,  1545,  1544,  1546,  1551,   967,  1552,  1553,  1554,
    1560,  1562,  1092,   968,  1563,  1686,  1599,  1610,  1611,   782,
    1617,  1093,  1618,   554,   555,  1624,  1627,  1630,  1631,  1655,
    2132,  1644,  1094,  1649,  1650,  1656,  1657,  1658,  1908,  1667,
    1668,  2117,  1669,  1691,  1670,  1671,  1672,  -466,  1684,  1685,
    2123,  2140,  2141,  1697,  2128,  1708,  2143,   783,  1700,  1713,
    1714,   489,  2145,  1715,  1095,  1727,  1741,  1926,  1732,   969,
    1743,  1930,  1567,  1752,  1753,  1763,  1754,  1568,  1784,   490,
     556,  1758,  2833,  1790,  1766,  1096,  1767,  1773,   970,  1785,
     557,  1797,  1803,   971,  1804,   972,   491,  1961,  1809,  1569,
    1570,  1828,  1571,  1572,  1831,  1933,  1842,  1976,   784,   492,
    1844,  1846,   785,  1573,  1889,  1890,  1981,  1982,  1891,  1892,
    1896,   973,   974,  1897,  1900,  1574,  1575,  1986,   493,   975,
    1682,  1899,   494,  1576,  1901,  1097,  1577,   786,  1904,  1942,
     787,  1907,  1924,  1927,  1934,  1939,   495,  1944,   976,  1945,
    1946,   788,   558,   559,  1578,  1948,  1949,  1943,  1950,  1951,
    1952,  1579,  1580,  1955,  1973,  1581,  1711,  1977,  1988,  2246,
    2247,  1716,  2249,  2025,  1098,  1990,  1994,  2026,  2002,  2003,
    2018,  1722,  2027,  2353,  2038,  2044,  2039,  2194,  2045,   496,
    2260,  2261,  2262,  2263,  2264,  2265,  2266,  2267,  2268,  2046,
    2050,  1099,  2501,  2502,   977,  2504,  2505,  2048,  2049,  2508,
    2509,  2051,  2052,  2274,  2053,  2276,   310,  2054,  2055,  2056,
    2205,  2057,  2058,  2059,   560,  2060,  2061,  2062,   878,  2078,
    1582,  2282,   450,  2082,  2087,  2100,  2142,  2286,  2106,  2107,
    2108,  1100,  2109,  1101,  2110,  2144,  2289,  2290,  2291,  2292,
    2293,  2294,  2295,  2296,  2297,  2298,  2147,  2768,  2311,  2312,
    2313,  2314,  2315,  2316,  2317,  2318,  2319,  2320,  2321,  2322,
    2556,  2325,  2148,  2326,  2327,  2328,  2149,  2151,  2152,  2216,
    2153,  2156,  2543,  2158,  2159,  2160,  1583,   450,  2336,  1148,
    2164,  2165,  1584,  2166,  2195,  2196,  2197,  1149,  2201,   464,
    2202,  2520,  2204,  1150,  2206,  2207,  2208,  2212,  2213,  1585,
    2215,  1424,  2217,  2218,  2219,  2223,  2224,  2521,  2226,  1586,
    1151,  2345,  2227,  2346,  2228,  2347,  1152,  2349,  2229,   450,
    2351,  2233,  2352,  2234,  2522,  2235,  2237,  2356,  2357,  2768,
    2358,  2359,  2360,  2361,  2238,  2240,  2241,  1587,  1588,  2365,
    1153,  2366,  2243,  2250,  2252,  2369,  2255,  2258,  2371,   366,
    1154,  2269,  2270,  2523,  2271,  2272,   367,  2273,  1589,  2277,
     526,  2324,   533,   536,  2329,   541,   545,  2330,  2848,  2333,
    2334,  2337,  2340,  2524,  2354,  2355,  2362, -1134,  2370,  2374,
    2373,  2375,  2376,  2377,  2378,  2404,   854,  2407,  2409,  2412,
    1155,  2414,  2408,  2415,  2416,  2420,   620,  2421,  1156,  2422,
    2423,  2424,  2425,  1590,  1975,  2429,  2430,  2303,  2431,  2432,
    2433,  2434,  2438,  2642,  2439,   636,   642,  2645,  2440,  2406,
    2447,   646,  2450,  2458,  2461,   649,  2464,  2465,  2467,  2470,
    2471,  2472,  2475,  2480,  2484,  2500,  2525,  2526,  2528,  2554,
    2819,  2560,  2473,  2561,  1157,  2562,  2563,  2567,  2782,  2570,
    2572,  2765,  2573,  2679,  2574,  2585,  1158,  2575,  2577,  2583,
    2594,  2603,  2612,  2618,  2024,  2622,  2625,   732,  2631,  2639,
    2030,  2650,  1159,  2661,  2662,  2527,  2663,  2664,  2665,   743,
    2666,  2820,  2681,  2692,  2254,  2693,  2695,  2696,  2697,  2698,
    2699,  2700,  2701,  2703,  2816,  2709,  2478,  2715,  2741,   764,
    2747,     0,  2750,  2751,  2752,  2757,  2772,  2485,  2486,  2487,
    2488,  2489,  2490,  2491,  2492,  2493,  2494,  2495,  2773,  2279,
    2774,  2775,  2776,  2498,  2824,  2826,  2777,   450,   450,  2784,
     450,   450,  2787,  2798,   450,   450,  2510,  2511,  2512,  2513,
    2514,  2515,  2806,  2517,  2518,  2519,  2809,  2812,  2829,  2067,
    2821,  2822,  2832,  2857,  2072,  2842,  2843,  2849,  2861,  2530,
    2531,  2532,  2533,  2862,  2535,  2536,  2537,  2538,  2539,  2540,
    2864,  2542,  2868,  2870,  2546,  2547,  2871,  2872,  2873,     0,
    1218,     0,     0,  2090,   368,     0,     0,   369,     0,  2096,
       0,     0,  2555,     0,     0,   450,  2557,     0,     0,     0,
    2559,     0,     0,     0,     0,  2564,  2565,  2566,     0,     0,
       0,     0,     0,     0,   874,     0,  2112,     0,     0,     0,
       0,     0,     0,  2119,     0,   881,     0,     0,     0,     0,
       0,     0,     0,     0,   889,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2586,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,     0,     0,     0,     0,     0,     0,
       0,     0,  1822,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   926,   927,  1832,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   931,     0,     0,     0,     0,
     934,     0,  1893,  1894,     0,     0,     0,  2633,     0,   946,
       0,  2635,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2636,  2637,     0,     0,     0,     0,  2641,   450,     0,
       0,  2644,   450,     0,     0,     0,     0,  2649,     0,     0,
    2653,  2654,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2244,     0,     0,     0,  2671,
    2672,     0,  2674,  2675,  2676,  2677,  2678,     0,   450,  2680,
       0,     0,     0,  2683,     0,  2257,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2694,     0,     0,   998,
     999,  1000,  1001,     0,     0,  2702,     0,     0,     0,  2299,
       0,  1407,     0,     0,     0,     0,     0,     0,  2280,  2281,
    2300,     0,     0,  2717,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2284,  2285,     0,     0,     0,  2287,
    2288,     0,     0,  1458,     0,     0,  1148,  2301,     0,     0,
       0,     0,     0,     0,  1149,     0,     0,     0,     0,     0,
    1150,     0,     0,     0,     0,  2729,  1146,     0,     0,     0,
    2733,     0,  2735,     0,     0,     0,     0,  1151,  2738,  2331,
    2549,     0,     0,  1152,     0,     0,  2302,     0,     0,     0,
    2338,  2745,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1153,     0,  2756,
       0,     0,     0,  2760,     0,     0,     0,  1154,  2793,     0,
       0,     0,     0,     0,     0,  2348,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2781,
       0,     0,     0,     0,  2363,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1155,     0,     0,
       0,     0,     0,     0,     0,  1156,     0,  2379,     0,     0,
    2796,     0,  2383,     0,     0,  2801,     0,  2803,  2388,     0,
       0,     0,     0,  2392,  2807,     0,     0,  2395,     0,  2810,
    2398,     0,     0,  2401,  2813,  2403,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1157,   687,   688,     0,     0,     0,     0,  2823,  2825,
       0,     0,     0,  1158,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1290,     0,     0,  1159,
       0,     0,     0,     0,  2835,     0,     0,  2836,  1295,  2303,
    2838,  2304,     0,     0,     0,     0,     0,     0,     0,     0,
    2844,  2845,  2846,  2847,  2831,     0,     0,     0,   689,     0,
       0,     0,  2856,     0,   690,  2859,  2667,     0,     0,     0,
       0,   691,  2863,   692,  2865,  1305,     0,     0,   693,     0,
       0,   694,     0,  2155,     0,  2851,  2685,   695,  2854,     0,
    2690,  2161,  2162,     0,     0,  2305,     0,     0,   696,     0,
       0,     0,     0,     0,   697,     0,  2198,  2199,     0,     0,
       0,     0,     0,   698,     0,     0,     0,  2209,  2210,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2220,  2221,
     699,     0,     0,     0,     0,     0,     0,     0,  2230,  2231,
       0,     0,     0,     0,  2236,     0,     0,     0,     0,     0,
       0,   700,     0,     0,  2239,  1396,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   701,  2541,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   702,
     703,     0,     0,     0,     0,  2553,     0,     0,  1806,  1807,
    1808,     0,     0,     0,     0,     0,     0,     0,  1810,  1811,
    1812,   704,     0,     0,     0,  1823,  1824,  1825,     0,     0,
    1826,  1827,     0,  1829,  1830,     0,     0,   111,  2571,     0,
       0,     0,     0,     0,   705,     0,     0,     0,     0,  2771,
    1538,   112,     0,     0,     0,     0,     0,     0,   706,     0,
     707,     0,     0,  1902,  1903,     0,     0,  1905,  1906,     0,
       0,  2584,   113,     0,     0,   708,     0,     0,     0,     0,
     709,     0,     0,     0,     0,     0,     0,   710,     0,   114,
       0,     0,     0,     0,   711,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1598,     0,     0,     0,     0,     0,
       0,     0,     0,   712,  1604,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   713,   714,     0,   715,
       0,     0,     0,     0,     0,   115,     0,     0,     0,  2628,
       0,     0,     0,     0,     0,  2632,     0,     0,     0,  2634,
       0,     0,     0,     0,   116,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2640,     0,     0,     0,   716,
       0,     0,     0,     0,     0,     0,     0,  2841,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2688,  2689,     0,     0,
       0,  1680,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2411,     0,     0,     0,   118,     0,     0,     0,  1688,
       0,  2413,     0,   119,     0,  2417,  2418,     0,     0,     0,
       0,   120,   121,     0,  2426,  2427,     0,   122,     0,     0,
       0,     0,   123,  2435,  2436,     0,     0,  1717,     0,  2441,
       0,     0,     0,     0,     0,     0,     0,  1723,     0,  2451,
    2452,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2462,  2463,     0,     0,  1738,     0,     0,     0,     0,    67,
      68,  2466,     0,     0,     0,     0,  1750,     0,     0,     0,
    2468,  1757,  2469,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2749,     0,     0,     0,     0,
       0,     0,     0,     0,   305,     0,     0,     0,     0,   124,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,     0,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,     0,     0,     0,     0,     0,   154,     0,
       0,     0,     0,   155,   156,     0,     0,     0,   115,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2146,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2815,     0,  2154,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2157,
       0,     0,     0,     0,     0,  1909,     0,    67,    68,     0,
       0,  2827,     0,     0,     0,     0,     0,     0,   117,     0,
       0,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1929,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2588,     0,     0,
       0,     0,     0,     0,     0,     0,  2852,  2597,   306,     0,
       0,  1962,     0,     0,  1963,     0,  2606,     0,     0,     0,
       0,  2242,     0,  1978,  1979,  2615,  2866,     0,     0,  2867,
     122,  1983,  2617,     0,     0,   123,     0,     0,  1984,     0,
       0,     0,     0,  2621,     0,     0,   307,     0,     0,  2624,
       0,     0,  2626,     0,     0,  2627,   115,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2023,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2034,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   308,
       0,     0,     0,     0,     0,     0,   117,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,     0,     0,     0,     0,
     112,     0,     0,     0,     0,     0,     0,  2069,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2718,
       0,     0,     0,   123,     0,     0,     0,     0,  2720,  2088,
       0,     0,     0,     0,     0,     0,     0,  2722,   114,     0,
       0,     0,     0,  2725,     0,  2097,     0,  2727,     0,     0,
    2728,     0,     0,     0,     0,     0,     0,     0,  2102,     0,
    2103,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2111,     0,     0,  2113,  2114,  2115,  2116,  2118,     0,  2120,
       0,     0,  2121,     0,   115,  2122,  2124,  2125,  2126,  2127,
    2129,     0,  2130,  2131,     0,     0,     0,  2133,  2134,  2135,
       0,     0,  2136,  2137,     0,     0,     0,     0,  2138,  2139,
       0,     0,  2410,     0,     0,     0,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   117,     0,     0,     0,     0,     0,
       0,     0,  2442,  2443,  2444,  2445,  2446,     0,  2448,  2449,
       0,     0,     0,  2453,  2454,  2455,  2456,  2457,     0,  2459,
    2460,     0,     0,     0,   544,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1737,     0,     0,     0,   122,     0,     0,     0,
       0,   123,     0,     0,     0,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   114,     0,     0,     0,
       0,     0,  2245,     0,     0,  2248,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2253,     0,     0,  2256,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   115,     0,     0,     0,     0,     0,  2275,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     115,     0,     0,     0,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   117,  2323,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2339,     0,     0,     0,
     117,     0,     0,     0,     0,     0,     0,     0,  2587,     0,
       0,  2589,  2590,  2591,  2592,  2593,     0,  2595,  2596,     0,
    2598,  2599,  2600,  2601,  2602,     0,  2604,  2605,     0,  2607,
    2608,  2609,  2610,  2611,   122,  2613,  2614,     0,  2616,   123,
       0,     0,     0,     0,   112,     0,     0,     0,  2619,  2620,
    2364,     0,     0,     0,     0,     0,     0,     0,     0,  2623,
       0,     0,     0,     0,     0,  2372,     0,   123,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   517,   518,  2396,     0,   519,     0,     0,     0,     0,
       0,     0,     0,     0,  2405,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   520,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   115,     0,
       0,     0,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   117,     0,
       0,     0,     0,     0,  2719,     0,     0,     0,     0,     0,
       0,   521,     0,  2721,     0,     0,     0,     0,  2476,     0,
       0,  2479,  2723,     0,  2724,     0,     0,     0,  2726,  2483,
     522,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2496,   637,   112,  2499,     0,
    1033,     0,   523,  2503,     0,  1034,  2506,  2507,     0,     0,
       0,     0,     0,     0,     0,   123,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   638,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2550,  2551,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   524,     0,
       0,     0,     0,     0,     0,  2788,     0,  2789,     0,  2790,
       0,   115,  2791,     0,  2792,     0,  1432,     0,     0,     0,
       0,     0,     0,     0,     0,   639,     0,     0,  2576,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,     0,   525,     0,     0,
       0,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   640,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,     0,     0,
       0,     0,     0,     0,     0,     0,  2629,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   123,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2648,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2659,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,  1433,
       0,     0,     0,     0,     0,     0,     0,     0,   641,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2708,     0,     0,     0,  2714,     0,
       0,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,     0,
       0,     0,     0,  1055,  1056,  1057,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2731,  2732,     0,  2734,     0,     0,     0,     0,
    2736,  2737,  1058,  1059,     0,  2739,  1060,     0,     0,  1061,
       0,     0,     0,     0,     0,     0,  1062,     0,     0,     0,
    1063,     0,     0,     0,     0,     0,     0,     0,  1064,  1065,
       0,     0,     0,     0,     0,     0,  1066,  1067,  2761,     0,
       0,   112,     0,     0,     0,  1334,  1335,  1336,     0,     0,
       0,     0,     0,     0,  1068,     0,     0,     0,     0,     0,
    1069,     0,     0,     0,  1070,  1071,     0,     0,  1072,     0,
    2785,     0,     0,     0,  1337,  1338,     0,     0,  1339,   114,
       0,     0,     0,     0,     0,  1340,  1073,     0,  1341,     0,
       0,     0,  1342,   112,     0,     0,     0,     0,     0,     0,
    1343,  1344,     0,     0,     0,     0,     0,  1074,  1345,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   115,   112,     0,     0,     0,
       0,     0,     0,  1075,   531,     0,  1346,  1347,     0,     0,
    1348,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1076,  1349,  2830,
       0,     0,   112,     0,  1395,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2839,   115,     0,  1350,
       0,     0,     0,     0,     0,   117,     0,  1077,     0,  1078,
    2850,     0,     0,  2853,     0,  1079,  1080,     0,     0,     0,
       0,     0,     0,     0,     0,  1351,     0,     0,     0,     0,
     115,  1081,  1082,     0,  1352,     0,     0,     0,     0,     0,
       0,     0,  1083,  1084,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   117,     0,     0,
       0,     0,     0,     0,     0,     0,   115,   122,     0,  1085,
       0,  1086,   123,     0,     0,     0,     0,     0,     0,  1353,
       0,     0,     0,  1087,     0,  1088,     0,  1354,  1355,     0,
     117,  1089,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1356,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1357,     0,     0,     0,     0,
       0,     0,     0,     0,   123,  1090,   117,     0,     0,     0,
       0,     0,     0,   535,     0,     0,     0,     0,     0,     0,
       0,  1358,     0,  1359,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1360,     0,     0,     0,   123,     0,     0,
       0,     0,     0,  1361,     0,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   123,   532,     0,     0,  1362,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,     0,     0,     0,     0,     0,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,     0,     0,
       0,     0,     0,     0,     0,     0,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,     1,     0,     0,     2,     0,     0,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     0,     0,     0,     0,     5,     6,
       0,     7,     8,     9,     0,     0,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,    11,     0,
      12,    13,     0,     0,     0,     0,     0,     0,     0,     0,
      14,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    16,     0,     0,     0,     0,     0,     0,
       0,     0,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,     0,     0,     0,    19,
       0,     0,    20,     0,     0,     0,    21,    22,     0,     0,
       0,    23,    24,     0,     0,    25,     0,     0,     0,     0,
       0,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,     0,    28,
      29,    30,     0,     0,    31,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    34,    35,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      37,     0,    38,     0,   182,     0,     0,   183,     0,    39,
     184,     0,     0,    40,     0,     0,     0,    41,     0,    42,
       0,    43,     0,     0,     0,     0,    44,     0,     0,   185,
       0,   186,   187,   188,     0,     0,     0,     0,     0,     0,
      45,   189,     0,   190,     0,     0,    46,     0,   191,     0,
     192,   193,   194,     0,     0,     0,     0,     0,   195,     0,
     196,     0,    47,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,     0,    50,     0,     0,     0,
       0,     0,    51,     0,     0,    52,    53,     0,     0,     0,
       0,   197,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   198,
       0,     0,     0,     0,     0,     0,    54,   199,     0,   200,
     201,   202,   203,    55,     0,   204,     0,     0,     0,   205,
       0,   206,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   207,   208,     0,     0,     0,   209,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   210,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   211,   212,     0,     0,
       0,     0,     0,     0,   213,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   214,
       0,   215,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   216,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   217,   218,     0,     0,     0,     0,     0,     0,
       0,   219,     0,     0,     0,     0,     0,     0,   220,     0,
       0,     0,     0,     0,   221,     0,   222,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,     0,     0,     0,     0,     0,
       0,     0,     0,   223
};

static const yytype_int16 yycheck[] =
{
       3,   508,    53,  1516,   940,   702,   703,  1719,    11,  1721,
     928,   929,   930,    16,     5,    13,  1211,   707,  1213,  1027,
       5,     4,  1030,     4,     4,     5,     4,    31,     3,     4,
       5,    46,    35,     3,     4,     3,     4,     4,     5,  1047,
      43,    61,    26,     0,  1239,  1240,  1241,     3,     4,    52,
       3,     4,    55,     4,    16,    58,     4,     3,     4,    62,
      26,    35,    65,    61,    16,    35,    69,    70,     5,    39,
      73,     4,    26,    76,    77,  1056,    12,    80,   996,    35,
      83,    84,    48,    86,     5,    51,     3,     4,    91,    36,
      61,    40,     3,     4,     4,  2585,    62,   106,     3,     4,
      47,   104,   105,   106,   107,   108,   109,    19,     4,   137,
     104,     5,   295,     3,     4,   100,   221,     5,    35,    85,
     175,   106,   125,    31,     5,    16,   464,    74,     4,   184,
      16,    56,  2097,     3,     4,   170,   474,   103,   162,   153,
     142,   121,   112,    66,   118,    56,    50,    87,  2113,  2114,
    2115,   122,   135,  2118,   121,  2120,  2121,   160,    31,  2124,
    2125,  2126,     3,     4,  2129,  2130,   136,   191,  2133,    39,
    2135,  2136,     0,  2138,     5,    20,     4,   144,     3,     4,
     136,   183,   185,  2767,    61,     3,     4,   190,   172,    32,
     171,   162,    88,    20,   203,     4,   100,     4,     5,     5,
     198,   195,   239,     3,     4,   109,   153,    20,    99,   201,
     315,    15,    83,  2703,     3,     4,   190,   127,   192,   136,
     194,   195,   162,    64,    30,  2715,   122,   205,   256,   100,
     210,   205,   202,  2817,   212,   213,   140,    61,   218,   219,
     275,    20,   112,   210,     5,     4,   220,   194,   257,   202,
     144,   218,   219,     3,     4,   269,     3,     4,   207,    66,
     263,   197,    61,   247,   315,     3,     4,   282,   220,    20,
     248,     3,     4,   293,   266,   273,   279,   280,   164,   233,
    2245,    88,   972,  2248,   192,   283,   234,   291,  2253,     3,
       4,  2256,   295,    20,   297,    61,   316,    26,   235,   224,
       4,    39,   305,   306,   214,   308,   309,   269,   311,   293,
    2275,   138,   283,   224,   121,     4,   263,   315,   321,   192,
     303,    59,    14,    15,   315,   201,   306,   312,   331,   332,
      22,   243,   312,   303,   308,   303,   143,    29,   295,   306,
     315,   322,   322,     4,    36,     5,   297,   303,   157,   158,
     303,   354,   304,   356,   357,   303,   359,   303,    63,   280,
     363,   364,    66,    26,   297,    57,     4,   255,     4,   316,
     195,   374,   375,    20,   112,   355,   257,    66,   356,   382,
     360,   361,    74,   291,   387,   388,   303,   205,   355,  1307,
    1080,     4,   395,   360,   361,   398,   362,  1315,   303,  2364,
     105,   305,   247,   210,    15,    66,   195,    43,  1098,   747,
      46,   218,   219,   303,   417,   418,   293,   121,   291,     4,
     247,   424,   425,   426,   427,   428,   429,   430,    66,   432,
      61,  2396,   121,   233,   247,  1132,    13,    14,   269,   316,
      76,  1449,   201,   446,  1452,   195,   255,   450,    84,  1644,
     277,   201,   455,   456,   457,   458,   459,   460,   118,   462,
     121,   464,   465,   466,   202,   296,    26,  1164,   247,   293,
      57,   474,   475,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   121,    61,   121,   233,    87,   313,   463,
     240,   122,   316,   252,   293,   148,   247,  1478,    61,   306,
     259,   233,   216,   142,   233,   312,   210,    98,   121,   172,
     146,  2476,     3,     4,   218,   219,   266,   316,   133,     4,
     247,   210,    61,  1504,   313,   528,   529,   293,    39,   218,
     219,  2496,   357,   358,    63,     4,   121,     4,  2503,   244,
     200,  2506,  2507,   546,   183,  1526,   201,   134,   355,   210,
     316,   889,   359,   360,   361,   260,   261,   218,   219,   122,
      29,   299,   162,   313,   200,    61,    61,   618,   357,   358,
      88,    61,   210,    66,   210,    61,   105,    61,   552,   582,
     218,   219,   218,   219,   247,   277,   278,    78,    39,   225,
       5,   227,     4,   204,   932,   255,    16,   210,    13,    14,
     247,   112,   306,     4,   259,   218,   219,   357,   358,   239,
      11,    63,   615,    61,   174,   307,   667,   306,   233,   255,
     280,   198,   199,   597,   255,   210,   122,   122,     5,     0,
     293,    26,   122,   218,   219,   686,   122,   122,   122,    16,
       4,     3,     4,    33,    56,   306,    61,   234,   353,   354,
    2362,   355,   283,   105,    29,   658,   360,   361,   350,   351,
     352,   112,   249,    29,  2629,  1355,   355,   279,   306,    61,
     306,   360,   361,   233,   122,   127,  1366,     5,   293,     4,
     271,   684,   202,  2648,   297,     5,   322,     5,   179,    39,
      30,   202,     5,   306,   355,     5,   273,   166,   701,   360,
     361,   704,     5,    61,   106,   125,   283,   284,     4,     4,
      13,    14,     3,     4,   118,   244,    66,   355,   108,   355,
     283,   306,   360,   361,   360,   361,   313,    18,   731,    95,
     122,   260,   261,   736,   737,   738,   739,     5,   315,   742,
     269,   744,   355,   746,   747,   748,    56,   360,   361,    54,
     100,   202,   221,   173,   293,    65,   106,   133,    61,    82,
      56,    61,   112,   274,   122,    56,  2731,  2732,   259,  2734,
     355,  2736,  2737,   824,  2739,   360,   361,   316,   247,   174,
      66,    66,   132,   198,   199,    90,   120,   283,   283,     3,
       4,   166,   244,   283,   295,     3,     4,   283,   174,   283,
     220,   203,   168,   153,  1722,   175,    39,  1743,   260,   261,
    1818,   102,   224,   816,   817,    27,   819,   820,   821,   822,
     170,   211,   122,   274,   353,   354,    91,    32,  2793,    66,
    1838,    39,   155,   836,   837,   283,    78,   272,   233,   144,
     843,   844,    13,    14,   279,  1853,   221,   132,  1856,  2044,
    2045,  2046,  1190,   203,   216,   257,  1864,   233,   273,  1867,
     863,   864,   865,   866,   867,   868,   869,  1875,   283,   284,
    1878,   162,   247,   288,  2839,   160,     5,  1885,    89,   112,
      15,   884,   885,   886,   304,   888,   889,   890,    66,   892,
      61,   283,   242,   259,    70,   198,   199,     5,   264,   174,
     315,   353,   354,   240,   112,    13,    14,   257,   231,   232,
     913,   176,   915,  1610,   224,   294,    39,   293,    66,   269,
      25,    25,   925,   246,   272,   283,   310,    89,   224,   932,
     933,   279,    72,   224,   211,   938,  1917,   179,   229,   913,
       5,    30,   154,    82,    13,    14,     5,   297,    13,    14,
     255,  1932,   955,    61,     5,     4,   959,   242,   233,   309,
     652,   311,   312,   966,   967,   968,   289,     4,   180,   202,
     273,   974,   184,     5,  1312,    94,   979,     3,     4,  1960,
     283,   284,  1033,   283,     4,   288,   370,   990,     5,   112,
      39,     4,    61,   112,   202,  2653,    61,     4,     5,   175,
       4,   351,   267,     5,     3,     4,  1009,  2520,   113,   113,
     295,     5,   315,  2671,   706,     4,   155,   259,     5,   711,
     285,     5,   127,   127,     5,   237,   301,   198,   199,     3,
       4,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   164,
      59,     5,     4,   112,     4,    39,   278,     3,     4,    13,
      14,     4,    11,  1076,   286,   287,   195,   354,   254,   202,
      45,    43,  2063,   360,    45,   362,     4,   263,     3,     4,
     198,   199,   231,   232,  1097,     5,  2518,     3,     4,    64,
     126,    66,   273,  1106,     4,    66,  2024,   246,   157,   158,
     215,   215,   283,   284,    53,     3,     4,    61,    98,  1122,
      81,  1124,  2544,   228,   228,    87,  1129,  1130,  1131,   198,
     199,   122,    71,   198,   199,     5,  1139,     4,   112,  1142,
       4,  1144,   526,   280,   315,     4,     3,     4,  2806,   533,
     289,     4,   536,   202,  2812,    41,    42,   541,  1161,    16,
    1163,   545,   101,     4,  2172,   273,     3,     4,  1171,  1172,
       5,    59,     4,  2181,    83,   283,   284,   205,  2096,   871,
     288,   120,  2190,  1186,  1187,   124,     4,  1190,  1191,  1192,
     126,   100,     3,     4,     5,  1198,     5,  1200,     4,   138,
    1203,  2119,  1205,     4,   273,  1256,   255,   315,   273,     4,
    2868,     5,  2870,    21,   283,   284,    13,    14,   283,   284,
     126,    23,    24,   288,   189,     4,     5,   142,   189,  2651,
    2652,     4,     5,  2655,     8,  2657,   620,     5,   200,  1242,
      10,    49,     4,  1246,    52,  1248,   315,  2669,  2670,  1252,
     315,   175,  2674,  2675,   198,   199,  2678,    13,    14,    13,
      14,  2683,  2684,   153,    61,  1268,     4,  1270,   183,  1272,
    1273,  1274,  1275,   182,    82,  1278,  1279,   184,  1281,  1282,
    1283,  1284,   279,   248,   175,     3,     4,   248,  1291,     4,
      18,   177,   178,    11,  1268,  1298,    98,     3,     4,  1302,
    1303,  1304,    88,   111,     5,    61,   114,    61,   204,  1312,
    1313,   204,    40,  1316,  2295,    43,     5,   226,   195,  2741,
     206,  1324,  2744,  1326,   201,     4,  1329,  2749,   293,   273,
    2311,   117,   293,  2755,   196,  2316,   226,   302,  2760,   283,
     284,   302,    27,  1317,   288,     4,     5,    13,    14,    77,
       3,     4,   204,   262,     4,     5,    84,     3,     4,   743,
     196,  1335,    66,   240,   303,    11,   750,    95,    96,    66,
    1373,   315,  1375,    66,   102,  1378,  1379,   233,  1381,   269,
    1383,     3,     4,     5,     6,     7,  1389,    36,  1391,   266,
       5,  2512,   452,   453,  2515,    61,  2517,  1400,    47,   127,
     234,   198,   199,     3,     4,     5,    59,   193,     5,  2530,
    2531,  1103,  2834,  2331,     4,  2837,     4,   145,   308,     4,
    2338,     4,   208,     4,   204,    74,  2547,   235,     3,     4,
      21,     6,     7,   161,   162,  2857,   313,     3,     4,     5,
     168,     5,   198,   199,   198,   199,    87,    87,     5,  2871,
       3,     4,  2874,  2875,     4,     8,     9,    10,    49,     4,
     268,    52,   190,     5,    55,     5,     4,   100,  1160,   154,
       5,     4,  1475,  1476,  1477,     5,   273,  2395,     4,    16,
    2398,   358,  1174,  2401,   270,  2403,   283,   284,    16,     4,
     874,    82,     4,     4,  1497,   180,    98,   881,  1501,   184,
    1474,   229,     5,     5,   153,     3,     4,     5,     6,     7,
       3,     4,     5,     6,     7,    34,    87,   273,   315,   273,
     111,  1524,  1525,   114,     4,    87,   312,   283,   284,   283,
     284,  1534,   198,   199,  1537,  2516,   322,     5,     5,     5,
       4,  1544,   926,   927,     5,   194,     5,   931,  2529,     4,
     934,     4,   237,  2534,   282,  1558,     5,     5,     5,   315,
    1563,   315,   946,    64,  1567,   293,  1569,  1570,     4,  1572,
    1573,  1574,     4,  1576,     4,     4,  1579,  1580,  1581,  1582,
    1583,  1584,  1585,  1586,  1587,  1588,  1589,    11,   107,  1592,
    1593,  1594,  1595,   278,   322,  1287,  1288,     4,     5,  1602,
    1603,   286,   287,  1606,  1607,  1608,     5,   273,     4,  1612,
    1613,   130,   131,    11,   263,     4,     4,   283,   284,     4,
     139,     5,  1625,  1626,     5,  1628,  1629,   171,     5,     4,
     162,   162,     4,    37,     5,  2553,     4,  1975,   268,   268,
     159,   297,    37,   292,   235,     5,     4,     4,     4,   315,
     169,   300,     5,    60,     5,     5,     5,    44,    61,    66,
       4,     4,   281,     5,     5,   281,     5,   316,     5,     5,
    1054,     4,    59,  1676,  1677,  1678,     5,   268,  1681,     4,
     247,     5,     5,  1686,  1687,     5,  1689,  1690,  1691,     5,
    1693,  1694,  2030,  1696,    81,  1698,  1699,     5,  1701,  1702,
    1703,  1704,     4,     4,   295,     5,     5,     4,   115,  1712,
       5,     5,  1686,   247,   101,   118,   106,  1720,   247,   122,
     247,     5,  1725,  1726,   142,   132,   106,    39,  1731,   247,
     247,   118,   106,     5,  2072,   122,   220,  1740,    66,   253,
     147,    39,   220,   253,     5,     4,   153,     5,     5,   220,
     220,     4,    80,   160,     4,    11,     5,     5,     5,   162,
       5,    89,     5,   150,   151,     4,   112,   112,     4,     4,
    1773,     5,   100,     5,     5,     5,     5,     4,  1470,     5,
       5,  1755,     4,    11,     5,     5,     4,     0,     5,     5,
    1764,  1794,  1795,     4,  1768,     5,  1799,   200,     4,     4,
       4,    53,  1805,     4,   132,     4,     4,  1499,     5,   216,
       5,  1503,    21,   247,   247,   142,   247,    26,     4,    71,
     207,   247,  2803,   216,   247,   153,   247,   174,   235,   257,
     217,   204,     4,   240,     4,   242,    88,  1529,     4,    48,
      49,     4,    51,    52,     4,   247,     5,  1539,   251,   101,
       5,     5,   255,    62,   281,     5,  1548,  1549,     5,     5,
       4,   268,   269,     4,     4,    74,    75,  1559,   120,   276,
    1254,     5,   124,    82,     4,   203,    85,   280,     4,   319,
     283,     5,     5,     5,   247,   247,   138,     4,   295,     4,
       4,   294,   279,   280,   103,     4,     4,   319,     4,   319,
     319,   110,   111,     4,     4,   114,  1290,     5,     5,  1912,
    1913,  1295,  1915,     5,   242,   233,   233,     4,   233,   233,
     233,  1305,     4,    11,     5,     5,     4,   281,     5,   181,
    1933,  1934,  1935,  1936,  1937,  1938,  1939,  1940,  1941,     4,
       4,   269,  2280,  2281,   351,  2283,  2284,     5,     5,  2287,
    2288,     4,     4,  1956,     5,  1958,    35,     5,     4,     4,
     281,     5,     5,     4,   351,     5,     5,     4,   451,     5,
     179,  1974,  1975,     4,     4,     4,     4,  1980,     5,     5,
       5,   309,     5,   311,     5,     5,  1989,  1990,  1991,  1992,
    1993,  1994,  1995,  1996,  1997,  1998,     5,  2687,  2001,  2002,
    2003,  2004,  2005,  2006,  2007,  2008,  2009,  2010,  2011,  2012,
    2348,  2014,     5,  2016,  2017,  2018,     5,     4,     4,   281,
       5,     4,   315,     5,     5,     5,   235,  2030,  2031,    92,
       4,     4,   241,     5,     5,     5,     5,   100,     4,   118,
       4,   363,     5,   106,     5,     5,     5,     4,     4,   258,
       5,  1026,     5,     5,     5,     4,     4,   363,     5,   268,
     123,  2064,     5,  2066,     5,  2068,   129,  2070,     5,  2072,
    2073,     4,  2075,     4,   363,     5,     4,  2080,  2081,  2769,
    2083,  2084,  2085,  2086,     4,     4,     4,   296,   297,  2092,
     153,  2094,     5,     5,     5,  2098,     5,     5,  2101,    15,
     163,     4,     4,   363,     5,     4,    22,     4,   317,     5,
     189,     5,   191,   192,     4,   194,   195,     4,  2827,     5,
       5,     4,     4,   363,     5,     5,     4,   295,     5,     5,
    2104,     5,     5,     5,     5,     4,   402,     5,     4,     4,
     203,     5,  2145,     5,     5,     4,   225,     4,   211,     5,
       5,     5,     5,   362,  1538,     4,     4,   295,     5,     5,
       5,     5,     4,  2501,     4,   244,   245,  2505,     5,  2143,
       4,   250,     4,     4,     4,   254,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,   363,   363,   363,     4,
     363,     5,  2243,     5,   257,     4,     4,     4,  2702,     5,
       4,  2685,     5,  2541,     4,     4,   269,     5,     5,     5,
       4,     4,     4,     4,  1598,     4,     4,   296,     4,     4,
    1604,     4,   285,     5,     4,  2306,     5,     5,     5,   308,
       4,  2769,     5,     4,  1926,     5,     5,     4,     4,     4,
       4,     4,     4,     4,  2765,     5,  2249,     4,     4,   328,
       4,    -1,     5,     4,     4,     4,     4,  2260,  2261,  2262,
    2263,  2264,  2265,  2266,  2267,  2268,  2269,  2270,     5,  1961,
       5,     4,     4,  2276,  2781,  2782,     4,  2280,  2281,     4,
    2283,  2284,     4,     4,  2287,  2288,  2289,  2290,  2291,  2292,
    2293,  2294,     4,  2296,  2297,  2298,     5,     4,     4,  1683,
       5,     5,     4,     4,  1688,     5,     5,     5,     5,  2312,
    2313,  2314,  2315,     5,  2317,  2318,  2319,  2320,  2321,  2322,
       5,  2324,     4,     4,  2327,  2328,     5,     5,     5,    -1,
     782,    -1,    -1,  1717,   250,    -1,    -1,   253,    -1,  1723,
      -1,    -1,  2345,    -1,    -1,  2348,  2349,    -1,    -1,    -1,
    2353,    -1,    -1,    -1,    -1,  2358,  2359,  2360,    -1,    -1,
      -1,    -1,    -1,    -1,   443,    -1,  1750,    -1,    -1,    -1,
      -1,    -1,    -1,  1757,    -1,   454,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   463,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2408,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1417,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   531,   532,  1429,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   544,    -1,    -1,    -1,    -1,
     549,    -1,  1447,  1448,    -1,    -1,    -1,  2480,    -1,   558,
      -1,  2484,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2494,  2495,    -1,    -1,    -1,    -1,  2500,  2501,    -1,
      -1,  2504,  2505,    -1,    -1,    -1,    -1,  2510,    -1,    -1,
    2513,  2514,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1909,    -1,    -1,    -1,  2532,
    2533,    -1,  2535,  2536,  2537,  2538,  2539,    -1,  2541,  2542,
      -1,    -1,    -1,  2546,    -1,  1929,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2559,    -1,    -1,   638,
     639,   640,   641,    -1,    -1,  2568,    -1,    -1,    -1,    55,
      -1,  1014,    -1,    -1,    -1,    -1,    -1,    -1,  1962,  1963,
      66,    -1,    -1,  2586,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1978,  1979,    -1,    -1,    -1,  1983,
    1984,    -1,    -1,  1046,    -1,    -1,    92,    93,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,    -1,  2628,   705,    -1,    -1,    -1,
    2633,    -1,  2635,    -1,    -1,    -1,    -1,   123,  2641,  2023,
    2332,    -1,    -1,   129,    -1,    -1,   132,    -1,    -1,    -1,
    2034,  2654,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,  2672,
      -1,    -1,    -1,  2676,    -1,    -1,    -1,   163,  2729,    -1,
      -1,    -1,    -1,    -1,    -1,  2069,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2702,
      -1,    -1,    -1,    -1,  2088,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   211,    -1,  2111,    -1,    -1,
    2733,    -1,  2116,    -1,    -1,  2738,    -1,  2740,  2122,    -1,
      -1,    -1,    -1,  2127,  2747,    -1,    -1,  2131,    -1,  2752,
    2134,    -1,    -1,  2137,  2757,  2139,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   257,     4,     5,    -1,    -1,    -1,    -1,  2781,  2782,
      -1,    -1,    -1,   269,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   875,    -1,    -1,   285,
      -1,    -1,    -1,    -1,  2807,    -1,    -1,  2810,   887,   295,
    2813,   297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2823,  2824,  2825,  2826,  2798,    -1,    -1,    -1,    60,    -1,
      -1,    -1,  2835,    -1,    66,  2838,  2528,    -1,    -1,    -1,
      -1,    73,  2845,    75,  2847,   924,    -1,    -1,    80,    -1,
      -1,    83,    -1,  1828,    -1,  2829,  2548,    89,  2832,    -1,
    2552,  1836,  1837,    -1,    -1,   351,    -1,    -1,   100,    -1,
      -1,    -1,    -1,    -1,   106,    -1,  1851,  1852,    -1,    -1,
      -1,    -1,    -1,   115,    -1,    -1,    -1,  1862,  1863,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1873,  1874,
     132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1883,  1884,
      -1,    -1,    -1,    -1,  1889,    -1,    -1,    -1,    -1,    -1,
      -1,   153,    -1,    -1,  1899,  1004,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,  2323,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,
     182,    -1,    -1,    -1,    -1,  2339,    -1,    -1,  1401,  1402,
    1403,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1411,  1412,
    1413,   203,    -1,    -1,    -1,  1418,  1419,  1420,    -1,    -1,
    1423,  1424,    -1,  1426,  1427,    -1,    -1,     4,  2372,    -1,
      -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,  2691,
    1079,    18,    -1,    -1,    -1,    -1,    -1,    -1,   240,    -1,
     242,    -1,    -1,  1456,  1457,    -1,    -1,  1460,  1461,    -1,
      -1,  2405,    39,    -1,    -1,   257,    -1,    -1,    -1,    -1,
     262,    -1,    -1,    -1,    -1,    -1,    -1,   269,    -1,    56,
      -1,    -1,    -1,    -1,   276,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1133,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   295,  1143,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   308,   309,    -1,   311,
      -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,  2473,
      -1,    -1,    -1,    -1,    -1,  2479,    -1,    -1,    -1,  2483,
      -1,    -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2499,    -1,    -1,    -1,   351,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2819,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2550,  2551,    -1,    -1,
      -1,  1250,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2156,    -1,    -1,    -1,   202,    -1,    -1,    -1,  1268,
      -1,  2166,    -1,   210,    -1,  2170,  2171,    -1,    -1,    -1,
      -1,   218,   219,    -1,  2179,  2180,    -1,   224,    -1,    -1,
      -1,    -1,   229,  2188,  2189,    -1,    -1,  1296,    -1,  2194,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1306,    -1,  2204,
    2205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2215,  2216,    -1,    -1,  1323,    -1,    -1,    -1,    -1,     3,
       4,  2226,    -1,    -1,    -1,    -1,  1335,    -1,    -1,    -1,
    2235,  1340,  2237,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2659,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,   306,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    -1,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,    -1,    -1,    -1,    -1,    -1,   355,    -1,
      -1,    -1,    -1,   360,   361,    -1,    -1,    -1,   102,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1809,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2761,    -1,  1822,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1832,
      -1,    -1,    -1,    -1,    -1,  1474,    -1,     3,     4,    -1,
      -1,  2785,    -1,    -1,    -1,    -1,    -1,    -1,   162,    -1,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1502,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2412,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2830,  2422,   202,    -1,
      -1,  1530,    -1,    -1,  1533,    -1,  2431,    -1,    -1,    -1,
      -1,  1904,    -1,  1542,  1543,  2440,  2850,    -1,    -1,  2853,
     224,  1550,  2447,    -1,    -1,   229,    -1,    -1,  1557,    -1,
      -1,    -1,    -1,  2458,    -1,    -1,   240,    -1,    -1,  2464,
      -1,    -1,  2467,    -1,    -1,  2470,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1597,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1609,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   303,
      -1,    -1,    -1,    -1,    -1,    -1,   162,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,  1686,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2594,
      -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,  2603,  1708,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2612,    56,    -1,
      -1,    -1,    -1,  2618,    -1,  1724,    -1,  2622,    -1,    -1,
    2625,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1737,    -1,
    1739,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1749,    -1,    -1,  1752,  1753,  1754,  1755,  1756,    -1,  1758,
      -1,    -1,  1761,    -1,   102,  1764,  1765,  1766,  1767,  1768,
    1769,    -1,  1771,  1772,    -1,    -1,    -1,  1776,  1777,  1778,
      -1,    -1,  1781,  1782,    -1,    -1,    -1,    -1,  1787,  1788,
      -1,    -1,  2155,    -1,    -1,    -1,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   162,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2195,  2196,  2197,  2198,  2199,    -1,  2201,  2202,
      -1,    -1,    -1,  2206,  2207,  2208,  2209,  2210,    -1,  2212,
    2213,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,    -1,    -1,    -1,   224,    -1,    -1,    -1,
      -1,   229,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    -1,  1911,    -1,    -1,  1914,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1925,    -1,    -1,  1928,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,  1957,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,    -1,    -1,    -1,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   162,  2012,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2035,    -1,    -1,    -1,
     162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2411,    -1,
      -1,  2414,  2415,  2416,  2417,  2418,    -1,  2420,  2421,    -1,
    2423,  2424,  2425,  2426,  2427,    -1,  2429,  2430,    -1,  2432,
    2433,  2434,  2435,  2436,   224,  2438,  2439,    -1,  2441,   229,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,  2451,  2452,
    2089,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2462,
      -1,    -1,    -1,    -1,    -1,  2104,    -1,   229,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    66,  2132,    -1,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2143,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,
      -1,    -1,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   162,    -1,
      -1,    -1,    -1,    -1,  2597,    -1,    -1,    -1,    -1,    -1,
      -1,   175,    -1,  2606,    -1,    -1,    -1,    -1,  2247,    -1,
      -1,  2250,  2615,    -1,  2617,    -1,    -1,    -1,  2621,  2258,
     194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2274,    17,    18,  2277,    -1,
     162,    -1,   216,  2282,    -1,   167,  2285,  2286,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   229,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2333,  2334,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   282,    -1,
      -1,    -1,    -1,    -1,    -1,  2718,    -1,  2720,    -1,  2722,
      -1,   102,  2725,    -1,  2727,    -1,   167,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,  2377,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,    -1,   351,    -1,    -1,
      -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2475,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   229,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2508,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2519,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   299,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2573,    -1,    -1,    -1,  2577,    -1,
      -1,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,    -1,
      -1,    -1,    -1,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2631,  2632,    -1,  2634,    -1,    -1,    -1,    -1,
    2639,  2640,    48,    49,    -1,  2644,    52,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    83,  2677,    -1,
      -1,    18,    -1,    -1,    -1,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,    -1,   110,   111,    -1,    -1,   114,    -1,
    2709,    -1,    -1,    -1,    48,    49,    -1,    -1,    52,    56,
      -1,    -1,    -1,    -1,    -1,    59,   132,    -1,    62,    -1,
      -1,    -1,    66,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    75,    -1,    -1,    -1,    -1,    -1,   153,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   102,    18,    -1,    -1,    -1,
      -1,    -1,    -1,   179,    59,    -1,   110,   111,    -1,    -1,
     114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,   132,  2798,
      -1,    -1,    18,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2815,   102,    -1,   153,
      -1,    -1,    -1,    -1,    -1,   162,    -1,   233,    -1,   235,
    2829,    -1,    -1,  2832,    -1,   241,   242,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   179,    -1,    -1,    -1,    -1,
     102,   257,   258,    -1,   188,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   268,   269,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,   224,    -1,   295,
      -1,   297,   229,    -1,    -1,    -1,    -1,    -1,    -1,   233,
      -1,    -1,    -1,   309,    -1,   311,    -1,   241,   242,    -1,
     162,   317,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   258,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   269,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   229,   351,   162,    -1,    -1,    -1,
      -1,    -1,    -1,   290,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   295,    -1,   297,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   307,    -1,    -1,    -1,   229,    -1,    -1,
      -1,    -1,    -1,   317,    -1,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   229,   299,    -1,    -1,   351,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,    -1,    -1,    -1,    -1,    -1,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,    40,    -1,    -1,    43,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    64,    65,
      -1,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,   145,
      -1,    -1,   148,    -1,    -1,    -1,   152,   153,    -1,    -1,
      -1,   157,   158,    -1,    -1,   161,    -1,    -1,    -1,    -1,
      -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   182,    -1,    -1,   185,
     186,   187,    -1,    -1,   190,   191,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   222,   223,   224,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     236,    -1,   238,    -1,    40,    -1,    -1,    43,    -1,   245,
      46,    -1,    -1,   249,    -1,    -1,    -1,   253,    -1,   255,
      -1,   257,    -1,    -1,    -1,    -1,   262,    -1,    -1,    65,
      -1,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
     276,    77,    -1,    79,    -1,    -1,   282,    -1,    84,    -1,
      86,    87,    88,    -1,    -1,    -1,    -1,    -1,    94,    -1,
      96,    -1,   298,   299,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   310,    -1,   312,    -1,    -1,    -1,
      -1,    -1,   318,    -1,    -1,   321,   322,    -1,    -1,    -1,
      -1,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,
      -1,    -1,    -1,    -1,    -1,    -1,   352,   153,    -1,   155,
     156,   157,   158,   359,    -1,   161,    -1,    -1,    -1,   165,
      -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   190,   191,    -1,    -1,    -1,   195,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   222,   223,    -1,    -1,
      -1,    -1,    -1,    -1,   230,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   255,
      -1,   257,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   282,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   298,   299,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   307,    -1,    -1,    -1,    -1,    -1,    -1,   314,    -1,
      -1,    -1,    -1,    -1,   320,    -1,   322,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   359
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
     293,   316,   485,    61,   293,   316,   486,    88,   117,   193,
     208,   270,   312,   322,   487,    15,    25,   113,   127,   164,
     215,   228,   490,   239,   508,     5,    66,    88,   143,   312,
     359,   368,   509,     5,   510,    57,   134,   234,   249,   313,
     526,    45,    64,    66,   189,   248,   293,   302,   546,    66,
     211,   354,   360,   362,   547,    38,   202,   240,   303,   366,
     376,   378,   548,     5,   312,   322,   368,   551,    70,   175,
     254,   263,   552,     4,   553,    88,   526,    61,   293,   316,
     560,   202,   303,   366,   561,    25,   113,   127,   215,   228,
     563,    50,   100,   109,   140,   305,   578,   579,     4,    36,
      47,    74,   153,   194,   263,   292,   300,   316,   394,     4,
     127,   214,   580,   303,   366,   582,    15,    22,   250,   253,
     377,   583,   239,   587,   303,   366,   588,     0,     5,   144,
     368,    59,   366,   400,   279,     5,     4,   303,   366,   401,
       5,    31,   291,   402,   126,   366,   403,   126,   366,   405,
     366,     4,   201,   252,   259,   409,   195,   313,   357,   358,
     366,   408,   368,   142,   183,   407,   205,   366,    78,   179,
     259,   366,   410,     5,   366,   366,   366,     4,   157,   158,
     255,   412,   366,   366,     5,   235,   415,    30,   416,     5,
     417,     5,   421,     5,    30,   422,   366,     8,     9,    10,
     366,   372,   373,   374,   375,   366,   366,    39,   112,   202,
     366,   424,   366,   202,   376,   378,   366,    34,   107,   130,
     131,   139,   159,   169,   383,   366,     4,   368,   368,   368,
     368,   368,   368,   368,   368,   368,   368,   118,    66,    53,
      71,    88,   101,   120,   124,   138,   181,   433,   120,   435,
     195,   201,   240,   266,   313,   357,   358,   366,   418,   436,
     295,   439,   175,   440,   175,   184,   442,    65,    66,    69,
      92,   175,   194,   216,   282,   351,   376,   444,   366,   378,
     447,    59,   299,   376,   448,   290,   376,   378,   449,    32,
     450,   376,   378,   451,     4,   376,   378,   452,    44,    59,
      81,   101,   118,   122,   150,   151,   207,   217,   279,   280,
     351,   456,   221,   315,   462,    66,     5,    89,    61,   293,
     316,   463,    61,   293,   316,   464,     4,    88,   122,   454,
       5,    65,   378,   453,    15,   526,    45,    66,    81,   189,
     248,   293,   302,   465,    66,   240,   466,   294,    61,   293,
     316,   467,    20,   138,   247,   277,   468,    36,    47,    74,
     153,   194,   263,   316,   469,   378,    89,    15,   204,   474,
     376,   477,    66,    72,   480,    30,   481,    43,    87,   200,
     482,   153,   226,   269,   308,   483,   376,    17,    58,   116,
     180,   299,   376,   484,     5,     5,   376,     4,     5,   376,
       4,     4,   201,   489,     5,     4,     4,   122,   366,     4,
       5,   255,   491,     5,   493,     5,   118,   200,   255,   280,
     494,    94,   112,   195,   507,     5,   505,     5,   280,   506,
       4,     5,   368,   368,   366,   366,     5,     4,     5,    60,
      66,    73,    75,    80,    83,    89,   100,   106,   115,   132,
     153,   170,   181,   182,   203,   226,   240,   242,   257,   262,
     269,   276,   295,   308,   309,   311,   351,   511,    91,   176,
     267,   285,   380,     5,     4,   205,   212,   213,   248,   356,
     379,   366,   376,   366,     5,   144,   366,    39,   112,   366,
     550,   368,   366,   376,   378,   549,   366,   383,   366,     4,
     377,    54,    90,   144,   255,   554,     4,     4,   366,     4,
     153,   269,   555,     5,   376,     4,    39,   112,   366,   562,
     366,    98,    61,   122,   255,   283,   564,   122,   577,    61,
     118,   122,   162,   200,   251,   255,   280,   283,   294,   566,
     567,    61,   122,   283,   576,     5,     4,    33,   108,   211,
     559,    66,   368,   395,    66,   368,   396,    66,   368,   397,
      12,   197,   558,   366,     4,   366,   233,   366,   398,   366,
     280,     4,   366,   366,     4,   234,   303,   586,     4,   297,
     584,     4,   297,   585,     4,   383,   126,   366,   589,   366,
     366,     4,     5,   366,    11,   366,   366,   366,    29,    95,
     168,   259,   264,   382,   382,     4,   205,   366,   366,     4,
       4,     4,   366,   366,   366,   366,   366,   366,   366,   366,
       4,     4,     5,     5,   376,     5,   366,   366,   372,   374,
     374,   376,   366,   366,   366,   366,   366,   366,   366,   376,
     378,   375,   366,   366,   375,   366,     5,   279,   104,   195,
     434,   201,   259,   437,   175,    78,   179,   259,   438,   142,
     183,   419,   419,     4,   441,     4,   443,   201,   266,   445,
     184,   446,   175,   383,   366,   366,   376,   376,   383,   383,
     383,   376,   383,   366,   376,     4,   459,     4,   378,   457,
     204,     4,   171,   322,   458,   204,   376,     4,   135,   303,
     461,     5,     5,   431,     4,   204,   137,   256,   369,   366,
       4,     5,    60,    66,   115,   132,   147,   153,   160,   216,
     235,   240,   242,   268,   269,   276,   295,   351,   520,   378,
     196,   196,    66,   470,    66,   471,    66,   472,   233,   473,
     366,     5,   432,   234,   475,   377,   383,     5,   376,   376,
     376,   376,     4,     4,     4,   368,     4,     4,   204,   366,
      13,    14,    61,   198,   199,   273,   283,   284,   315,    87,
       5,     5,    13,    14,    61,   198,   199,   273,   283,   284,
     288,   315,    87,   162,   167,   377,   497,   502,    87,   162,
       5,   495,     4,     4,    13,    61,   198,   273,   283,   315,
       5,     5,     4,   366,   377,    19,    20,    21,    48,    49,
      52,    55,    62,    66,    74,    75,    82,    83,   100,   106,
     110,   111,   114,   132,   153,   179,   203,   233,   235,   241,
     242,   257,   258,   268,   269,   295,   297,   309,   311,   317,
     351,    66,    80,    89,   100,   132,   153,   203,   242,   269,
     309,   311,     4,    29,   166,   221,   247,   514,     5,    63,
     105,   244,   260,   261,   353,   354,   519,   100,   512,    16,
     269,   517,    39,   112,   202,   518,     4,     5,    16,   220,
     304,   366,   269,   519,   527,   127,   519,   528,    35,    39,
     112,   136,   202,   303,   366,   529,   376,   368,    92,   100,
     106,   123,   129,   153,   163,   203,   211,   257,   269,   285,
     532,    39,   112,   202,     5,   269,   296,   536,    16,   125,
     173,   220,   304,   537,   297,   368,   538,     5,   100,   106,
     312,    16,    16,     4,   366,   366,   366,   366,   366,   366,
     383,   366,   366,   375,   366,     4,   383,     4,    39,   112,
     202,   274,   556,    39,   112,   202,   274,   557,     4,    98,
       5,     5,    87,     4,     5,     5,    87,     5,   567,    61,
     122,   162,   283,   571,    61,   122,   283,   575,    87,   162,
      61,   122,   283,   569,     4,    61,   122,   283,   568,     5,
       5,     4,     4,     5,     5,     5,   366,   366,   366,     4,
     366,   581,   366,   366,   377,    64,     4,     4,     5,     4,
       4,     5,     4,    98,   271,   384,   366,   366,    11,     5,
      11,   366,   366,    11,     4,    11,     4,     4,   366,   366,
     366,   366,   366,   366,   366,     4,   368,     4,     4,   383,
     376,   383,   366,   366,   366,   376,   366,   375,   366,   366,
       5,     5,   366,   378,   366,   376,   366,   383,   383,   384,
     384,   384,   383,   375,   366,   383,   366,   369,   460,   171,
       5,     4,   383,   162,   162,     4,     5,     4,     4,   366,
     455,    37,    37,   366,    19,    20,    21,    48,    49,    52,
      59,    62,    66,    74,    75,    82,   110,   111,   114,   132,
     153,   179,   188,   233,   241,   242,   258,   269,   295,   297,
     307,   317,   351,    66,   132,   160,   242,   295,    29,   166,
     221,   247,   521,   366,   216,   366,   522,    16,   366,   268,
     532,   268,   216,   366,   523,   297,   524,    16,    99,   366,
     366,     5,   384,     4,     4,    56,   376,     4,     5,   488,
     366,     5,     5,     5,   162,   191,   388,   388,   170,   275,
     386,     4,     4,     5,     5,   492,   281,   281,     5,     5,
       5,    16,   164,   387,   387,   386,     4,     4,   386,     5,
       5,   496,   167,   350,   377,   500,     5,   499,     5,     5,
     503,     5,   504,     5,    13,    14,    61,   198,   199,   273,
     283,   284,   288,   315,     4,     4,     5,     5,   388,   386,
       4,     5,     5,   383,    82,   155,   231,   232,   246,   289,
     391,     6,     7,   366,   371,   247,   247,   247,   106,    39,
      66,   100,   106,   112,   132,   153,   170,   203,   242,   257,
     269,   297,   309,   311,   312,   351,   513,   247,     5,    26,
     172,   247,   293,   142,   106,    21,    49,    52,    82,   111,
     114,   235,   268,    21,    49,    52,    55,    82,   111,   114,
     235,   268,   295,    39,   247,   247,   106,     5,   220,    26,
     233,    35,   136,   303,   366,   272,   279,   253,   376,   532,
      39,   133,   233,   293,   253,   220,     5,     5,   257,    26,
     233,     4,     5,     5,   220,    35,   136,   303,   366,   532,
     220,   368,     4,     4,   366,     5,   315,    21,    26,    48,
      49,    51,    52,    62,    74,    75,    82,    85,   103,   110,
     111,   114,   179,   235,   241,   258,   268,   296,   297,   317,
     362,   515,   366,   366,   366,   366,   366,   519,   376,     5,
       4,     5,   366,   366,   376,   366,   368,   366,   366,   519,
       5,     5,   366,   366,   368,     5,    16,     5,     5,   366,
     366,   375,   366,   366,     4,   366,   366,   112,   366,   366,
     112,     4,    41,    42,   177,   178,   206,   393,   393,    61,
     122,   283,   565,   393,     5,    61,   122,   283,   570,     5,
       5,    61,   122,   283,   572,     4,     5,     5,     4,    61,
     122,   283,   574,    61,   122,   283,   573,     5,     5,     4,
       5,     5,     4,   393,   393,   393,   366,   366,   366,     4,
     376,   366,   383,   377,     5,     5,    11,   366,   376,   378,
     366,    11,   366,   366,   366,    59,   366,     4,   366,   366,
       4,   366,   366,   366,   366,    46,   282,   420,     5,   368,
     368,   383,   366,     4,     4,     4,   383,   376,   366,   366,
     366,   366,   383,   376,   384,   375,   366,     4,   384,   366,
       4,   378,     5,    23,    24,    98,   385,     4,   376,   366,
     366,     4,   366,     5,    82,   155,   231,   232,   246,   289,
     376,   378,   247,   247,   247,    20,   247,   376,   247,    26,
     172,   247,   293,   142,    20,   247,   247,   247,    20,   247,
      26,   174,   233,   174,   272,   279,   174,   233,   301,   532,
     133,   174,   233,   293,     4,   257,    26,   174,   233,   532,
     216,   366,   366,   366,   366,   366,   366,   204,   366,   366,
      19,   243,   478,     4,     4,   366,   388,   388,   388,     4,
     388,   388,   388,    13,    14,    61,   198,   199,   273,   283,
     284,   315,   387,   388,   388,   388,   388,   388,     4,   388,
     388,     4,   387,    13,    14,    61,   198,   199,   273,   283,
     284,   315,     5,   498,     5,   501,     5,     5,    13,    14,
      61,   198,   199,   273,   283,   284,   288,   315,     5,    13,
      14,    61,   198,   199,   273,   283,   284,   288,   315,     5,
      13,    14,    61,   198,   199,   273,   283,   284,   288,   315,
      13,    14,    61,   198,   199,   273,   283,   284,   315,   281,
       5,     5,     5,   387,   387,   386,     4,     4,   386,     5,
       4,     4,   388,   388,     4,   388,   388,     5,   368,   376,
     378,     5,   366,   366,     5,   366,     5,   371,   106,   203,
     257,   106,   203,   257,     5,   366,   368,     5,   366,   376,
     368,     5,   371,   247,   247,    20,   247,    20,   247,   247,
      20,   247,   319,   319,     4,     4,     4,   513,     4,     4,
       4,   319,   319,     4,     5,     4,   366,     5,   366,     5,
     371,   368,   376,   376,   366,    26,    48,    51,    62,    85,
     103,   362,   389,     4,   366,   383,   368,     5,   376,   376,
     366,   368,   368,   376,   376,   366,   368,   366,     5,   366,
     233,   233,   366,   366,   233,   366,   233,   366,   366,   525,
     533,   366,   233,   233,   366,   366,   366,   366,   366,   366,
     366,   366,     5,   315,   366,   516,   366,   366,   233,   366,
     366,   366,   366,   376,   383,     5,     4,     4,   366,   366,
     383,   366,   366,   366,   376,   519,   366,   366,     5,     4,
     366,   366,   366,   366,     5,     5,     4,   393,     5,     5,
       4,     4,     4,     5,     5,     4,     4,     5,     5,     4,
       5,     5,     4,   366,   366,   366,   366,   383,   366,   376,
     378,   366,   383,   366,   366,   366,   366,   366,     5,   366,
     366,   366,     4,   366,   366,   366,   366,     4,   376,   366,
     383,   184,   381,   366,   381,   384,   383,   376,   366,   366,
       4,   366,   376,   376,   366,   369,     5,     5,     5,     5,
       5,   376,   383,   376,   376,   376,   376,   378,   376,   383,
     376,   376,   376,   378,   376,   376,   376,   376,   378,   376,
     376,   376,   366,   376,   376,   376,   376,   376,   376,   376,
     366,   366,     4,   366,     5,   366,   388,     5,     5,     5,
     386,     4,     4,     5,   388,   387,     4,   388,     5,     5,
       5,   387,   387,   386,     4,     4,     5,    13,    14,    61,
     198,   199,   273,   283,   284,   315,    13,    14,    61,   198,
     199,   273,   283,   284,   315,    13,    14,    61,   198,   199,
     273,   283,   284,   315,   281,     5,     5,     5,   387,   387,
     386,     4,     4,   386,     5,   281,     5,     5,     5,   387,
     387,   386,     4,     4,   386,     5,   281,     5,     5,     5,
     387,   387,   386,     4,     4,   386,     5,     5,     5,     5,
     387,   387,   386,     4,     4,     5,   387,     4,     4,   387,
       4,     4,   388,     5,   383,   376,   366,   366,   376,   366,
       5,   371,     5,   376,   368,     5,   376,   383,     5,   371,
     366,   366,   366,   366,   366,   366,   366,   366,   366,     4,
       4,     5,     4,     4,   366,   376,   366,     5,   371,   368,
     383,   383,   366,   375,   383,   383,   366,   383,   383,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,    55,
      66,    93,   132,   295,   297,   351,   530,   531,   532,   544,
     545,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   376,     5,   366,   366,   366,   366,     4,
       4,   383,   384,     5,     5,   375,   366,     4,   383,   376,
       4,   393,   393,   393,   371,   366,   366,   366,   383,   366,
     375,   366,   366,    11,     5,     5,   366,   366,   366,   366,
     366,   366,     4,   383,   376,   366,   366,   384,   385,   366,
       5,   366,   376,   378,     5,     5,     5,     5,     5,   383,
     385,   385,   385,   383,   385,   384,   385,   385,   383,   385,
     385,   385,   383,   385,   385,   383,   376,   385,   383,   385,
     385,   383,   385,   383,     4,   376,   378,     5,   366,     4,
     388,   387,     4,   387,     5,     5,     5,   387,   387,   386,
       4,     4,     5,     5,     5,     5,   387,   387,   386,     4,
       4,     5,     5,     5,     5,   387,   387,   386,     4,     4,
       5,   387,   388,   388,   388,   388,   388,     4,   388,   388,
       4,   387,   387,   388,   388,   388,   388,   388,     4,   388,
     388,     4,   387,   387,     4,     4,   387,     4,   387,   387,
       4,     4,     4,   377,   385,     4,   376,   385,   366,   376,
       4,   385,   385,   376,     4,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   376,   385,   366,   376,
       4,   375,   375,   376,   375,   375,   376,   376,   375,   375,
     366,   366,   366,   366,   366,   366,   371,   366,   366,   366,
     363,   363,   363,   363,   363,   363,   363,   531,   363,   371,
     366,   366,   366,   366,   371,   366,   366,   366,   366,   366,
     366,   383,   366,   315,   370,   371,   366,   366,   384,   368,
     376,   376,   384,   383,     4,   366,   375,   366,    59,   366,
       5,     5,     4,     4,   366,   366,   366,     4,   381,   385,
       5,   383,     4,     5,     4,     5,   376,     5,   384,   385,
     384,   384,   384,     5,   383,     4,   366,   388,   387,   388,
     388,   388,   388,   388,     4,   388,   388,   387,   388,   388,
     388,   388,   388,     4,   388,   388,   387,   388,   388,   388,
     388,   388,     4,   388,   388,   387,   388,   387,     4,   388,
     388,   387,     4,   388,   387,     4,   387,   387,   383,   376,
     385,     4,   383,   366,   383,   366,   366,   366,   385,     4,
     383,   366,   375,   385,   366,   375,   385,   385,   376,   366,
       4,   390,   390,   366,   366,   390,   371,   390,   533,   376,
     513,     5,     4,     5,     5,     5,     4,   368,   371,   390,
     390,   366,   366,   371,   366,   366,   366,   366,   366,   375,
     366,     5,   533,   366,   390,   368,   534,   535,   383,   383,
     368,   384,     4,     5,   366,     5,     4,     4,     4,     4,
       4,     4,   366,     4,    31,   192,   291,   427,   376,     5,
      31,   192,   291,   392,   376,     4,   427,   366,   387,   388,
     387,   388,   387,   388,   388,   387,   388,   387,   387,   366,
     385,   376,   376,   366,   376,   366,   376,   376,   366,   376,
     385,     4,   533,   533,   370,   366,   533,     4,   533,   383,
       5,     4,     4,   533,   533,   370,   366,     4,   533,   533,
     366,   376,   533,   533,   533,   534,   541,   542,   532,   539,
     540,   368,     4,     5,     5,     4,     4,     4,   195,   313,
     358,   366,   418,   427,     4,   376,   427,     4,   388,   388,
     388,   388,   388,   377,   385,   385,   366,   385,     4,   385,
     385,   366,   385,   366,   533,   533,     4,   366,   533,     5,
     366,   533,     4,   366,   533,   383,   541,   543,   544,   363,
     540,     5,     5,   366,   419,   366,   419,   383,   385,     4,
     376,   378,     4,   371,   370,   366,   366,   370,   366,   376,
     544,   368,     5,     5,   366,   366,   366,   366,   392,     5,
     376,   378,   383,   376,   378,   533,   366,     4,   533,   366,
     385,     5,     5,   366,     5,   366,   383,   383,     4,   533,
       4,     5,     5,     5,   370,   370,   533,   533,   533
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
    {fr->bgColorCmd("gray");;}
    break;

  case 6:
#line 472 "frame/parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 8:
#line 474 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 9:
#line 475 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 11:
#line 477 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 18:
#line 484 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 24:
#line 490 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 25:
#line 491 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 26:
#line 492 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 30:
#line 496 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 37:
#line 503 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 38:
#line 504 "frame/parser.Y"
    {fr->nanColorCmd("gray");;}
    break;

  case 42:
#line 508 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 45:
#line 511 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 50:
#line 516 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 52:
#line 518 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 54:
#line 520 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 56:
#line 522 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 61:
#line 529 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 62:
#line 530 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 63:
#line 533 "frame/parser.Y"
    {yydebug=(yyvsp[(1) - (1)].integer);;}
    break;

  case 64:
#line 534 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 535 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 536 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 537 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 538 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 539 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 540 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 541 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 72:
#line 542 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 73:
#line 543 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 74:
#line 546 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
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
#line 550 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 78:
#line 551 "frame/parser.Y"
    {(yyval.integer)=1;;}
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
#line 555 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 82:
#line 556 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 83:
#line 559 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 84:
#line 560 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 85:
#line 561 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 86:
#line 562 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 87:
#line 563 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 88:
#line 566 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 89:
#line 567 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 90:
#line 570 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 91:
#line 571 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 92:
#line 572 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 93:
#line 575 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 94:
#line 578 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 95:
#line 581 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 96:
#line 585 "frame/parser.Y"
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

  case 97:
#line 597 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 98:
#line 604 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 99:
#line 611 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 100:
#line 618 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 101:
#line 619 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 102:
#line 620 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 103:
#line 621 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 104:
#line 622 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 105:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 106:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 107:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 108:
#line 628 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 109:
#line 629 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 110:
#line 630 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 111:
#line 631 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 112:
#line 632 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 113:
#line 633 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 114:
#line 634 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 115:
#line 635 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 116:
#line 636 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 117:
#line 637 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 118:
#line 638 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 119:
#line 639 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 120:
#line 640 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 121:
#line 641 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 122:
#line 642 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 123:
#line 643 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 124:
#line 644 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 125:
#line 645 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 126:
#line 646 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 127:
#line 647 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 128:
#line 648 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 129:
#line 649 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 130:
#line 650 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 131:
#line 651 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 132:
#line 652 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 133:
#line 655 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 134:
#line 656 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 135:
#line 659 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 136:
#line 660 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 137:
#line 661 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 138:
#line 662 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 139:
#line 663 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 140:
#line 664 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 141:
#line 667 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 142:
#line 668 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 143:
#line 669 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 144:
#line 670 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 145:
#line 671 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 146:
#line 674 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 147:
#line 675 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 148:
#line 676 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 149:
#line 677 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 150:
#line 678 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 151:
#line 679 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 152:
#line 680 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 153:
#line 681 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 154:
#line 684 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 155:
#line 685 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 156:
#line 686 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 157:
#line 687 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 158:
#line 688 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 159:
#line 691 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 160:
#line 692 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 161:
#line 693 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 162:
#line 694 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 163:
#line 695 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 164:
#line 696 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 165:
#line 697 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 166:
#line 698 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 167:
#line 701 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 168:
#line 702 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 169:
#line 703 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 170:
#line 706 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 171:
#line 707 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 172:
#line 708 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 173:
#line 709 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 174:
#line 712 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 175:
#line 713 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 176:
#line 714 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 177:
#line 717 "frame/parser.Y"
    {;}
    break;

  case 178:
#line 718 "frame/parser.Y"
    {;}
    break;

  case 179:
#line 719 "frame/parser.Y"
    {;}
    break;

  case 180:
#line 722 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 181:
#line 723 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 182:
#line 724 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 183:
#line 727 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 184:
#line 728 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 185:
#line 729 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 186:
#line 730 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 187:
#line 731 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 188:
#line 732 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 189:
#line 733 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 190:
#line 734 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 191:
#line 737 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 192:
#line 738 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 193:
#line 741 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 194:
#line 742 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 195:
#line 743 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 196:
#line 744 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 197:
#line 745 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 198:
#line 746 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 199:
#line 749 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 200:
#line 750 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 201:
#line 751 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 202:
#line 752 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 203:
#line 755 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 204:
#line 756 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 205:
#line 757 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 206:
#line 758 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 207:
#line 759 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 208:
#line 760 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 213:
#line 767 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 214:
#line 768 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 215:
#line 769 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 216:
#line 770 "frame/parser.Y"
    {fr->set3dSyncCmd((yyvsp[(2) - (2)].integer));}
    break;

  case 217:
#line 772 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 218:
#line 775 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 219:
#line 776 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 220:
#line 779 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 221:
#line 780 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 222:
#line 783 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 223:
#line 784 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 224:
#line 787 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 225:
#line 789 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 227:
#line 793 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 228:
#line 794 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 231:
#line 797 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 233:
#line 799 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 234:
#line 802 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 235:
#line 803 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 236:
#line 806 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 237:
#line 807 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 238:
#line 809 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 239:
#line 811 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 240:
#line 812 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 241:
#line 813 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 242:
#line 815 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 243:
#line 817 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 244:
#line 820 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 245:
#line 821 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 246:
#line 824 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 247:
#line 826 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 248:
#line 829 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 249:
#line 831 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 250:
#line 834 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 251:
#line 838 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 252:
#line 839 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 254:
#line 843 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 255:
#line 844 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 256:
#line 845 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 260:
#line 851 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 261:
#line 852 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 263:
#line 855 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 264:
#line 860 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 265:
#line 861 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 266:
#line 864 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 267:
#line 865 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 268:
#line 866 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 269:
#line 867 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 270:
#line 868 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 271:
#line 871 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 272:
#line 872 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 273:
#line 873 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 274:
#line 874 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 275:
#line 877 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 276:
#line 879 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 277:
#line 884 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 278:
#line 889 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 279:
#line 896 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 280:
#line 898 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 281:
#line 900 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 282:
#line 902 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 283:
#line 903 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 285:
#line 905 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 286:
#line 909 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 287:
#line 911 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 288:
#line 913 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 289:
#line 915 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 290:
#line 917 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 291:
#line 918 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 297:
#line 929 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 298:
#line 931 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 299:
#line 933 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 300:
#line 938 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 301:
#line 942 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 302:
#line 945 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 303:
#line 946 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 304:
#line 949 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 305:
#line 950 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 306:
#line 952 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 307:
#line 958 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 308:
#line 959 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 309:
#line 960 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 310:
#line 961 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 311:
#line 964 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 312:
#line 965 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 313:
#line 968 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 314:
#line 969 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 315:
#line 972 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 316:
#line 973 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 317:
#line 977 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 318:
#line 979 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 319:
#line 982 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 320:
#line 984 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 321:
#line 987 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 323:
#line 989 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 324:
#line 990 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 325:
#line 991 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 326:
#line 994 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 327:
#line 996 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 328:
#line 997 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 329:
#line 998 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 330:
#line 999 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 331:
#line 1003 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 332:
#line 1005 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 333:
#line 1006 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 334:
#line 1007 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 335:
#line 1010 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 336:
#line 1012 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 337:
#line 1014 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 338:
#line 1016 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 339:
#line 1019 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 340:
#line 1022 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 341:
#line 1023 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 342:
#line 1024 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 343:
#line 1025 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 344:
#line 1028 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 345:
#line 1029 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 346:
#line 1032 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 347:
#line 1035 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 348:
#line 1036 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 362:
#line 1050 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 365:
#line 1053 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 366:
#line 1054 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 372:
#line 1060 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 373:
#line 1061 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 376:
#line 1064 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 377:
#line 1065 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 379:
#line 1068 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 381:
#line 1070 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 383:
#line 1072 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 385:
#line 1074 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 386:
#line 1076 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 389:
#line 1079 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 390:
#line 1083 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 391:
#line 1085 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 392:
#line 1089 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 393:
#line 1091 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 394:
#line 1094 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 395:
#line 1095 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 396:
#line 1096 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 397:
#line 1097 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 398:
#line 1098 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 399:
#line 1099 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 401:
#line 1101 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 402:
#line 1104 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 403:
#line 1105 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 404:
#line 1106 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 405:
#line 1109 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 406:
#line 1112 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 407:
#line 1114 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 408:
#line 1116 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 409:
#line 1117 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 410:
#line 1118 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 412:
#line 1120 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 414:
#line 1123 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 415:
#line 1129 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 416:
#line 1130 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 417:
#line 1133 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 418:
#line 1134 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 419:
#line 1135 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 420:
#line 1138 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 421:
#line 1139 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 423:
#line 1145 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 424:
#line 1147 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 425:
#line 1149 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 426:
#line 1152 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 428:
#line 1154 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 429:
#line 1158 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 430:
#line 1162 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 432:
#line 1164 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 433:
#line 1165 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 434:
#line 1166 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 435:
#line 1167 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 436:
#line 1168 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 438:
#line 1170 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 439:
#line 1171 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 440:
#line 1174 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 441:
#line 1175 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 442:
#line 1176 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 443:
#line 1179 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 444:
#line 1180 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 445:
#line 1184 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 446:
#line 1186 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 447:
#line 1194 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 448:
#line 1196 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 449:
#line 1198 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 450:
#line 1201 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 451:
#line 1203 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 452:
#line 1204 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 453:
#line 1207 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 454:
#line 1210 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 455:
#line 1212 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 456:
#line 1216 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 457:
#line 1218 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 458:
#line 1221 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 459:
#line 1225 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 460:
#line 1226 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 461:
#line 1228 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 462:
#line 1231 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 463:
#line 1232 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 465:
#line 1236 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 466:
#line 1237 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 467:
#line 1238 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 468:
#line 1241 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 469:
#line 1243 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 470:
#line 1244 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 472:
#line 1246 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 476:
#line 1250 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 477:
#line 1251 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 478:
#line 1252 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 479:
#line 1254 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 481:
#line 1256 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 482:
#line 1259 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 483:
#line 1261 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 484:
#line 1263 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 485:
#line 1264 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 486:
#line 1265 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 487:
#line 1266 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 488:
#line 1269 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 489:
#line 1270 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 490:
#line 1274 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 491:
#line 1276 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 492:
#line 1279 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 493:
#line 1282 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 494:
#line 1283 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 495:
#line 1285 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 496:
#line 1287 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 497:
#line 1289 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 498:
#line 1292 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 499:
#line 1293 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 500:
#line 1294 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 501:
#line 1297 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 502:
#line 1298 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 503:
#line 1299 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 504:
#line 1302 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 505:
#line 1303 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 506:
#line 1304 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 507:
#line 1307 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 508:
#line 1308 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 509:
#line 1309 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 510:
#line 1310 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 511:
#line 1311 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 512:
#line 1312 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 513:
#line 1313 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 514:
#line 1316 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 515:
#line 1319 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 516:
#line 1320 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 517:
#line 1321 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 518:
#line 1324 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 519:
#line 1325 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 520:
#line 1326 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 521:
#line 1327 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 522:
#line 1328 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 523:
#line 1329 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 528:
#line 1336 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 529:
#line 1337 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 530:
#line 1338 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 531:
#line 1341 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 532:
#line 1342 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 533:
#line 1345 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 534:
#line 1346 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 535:
#line 1349 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 536:
#line 1350 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 537:
#line 1353 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 538:
#line 1354 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 539:
#line 1357 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 541:
#line 1359 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 542:
#line 1362 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 543:
#line 1363 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 545:
#line 1367 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 546:
#line 1371 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 547:
#line 1374 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 548:
#line 1381 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 549:
#line 1382 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 550:
#line 1385 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 551:
#line 1386 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 554:
#line 1389 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 555:
#line 1390 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 556:
#line 1391 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 557:
#line 1392 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 559:
#line 1394 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 560:
#line 1395 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 561:
#line 1396 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 563:
#line 1398 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 564:
#line 1399 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 565:
#line 1400 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 566:
#line 1401 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 568:
#line 1405 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 569:
#line 1408 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 570:
#line 1409 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 571:
#line 1412 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 572:
#line 1413 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 573:
#line 1414 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 574:
#line 1415 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 575:
#line 1418 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 576:
#line 1419 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 577:
#line 1420 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 578:
#line 1421 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 579:
#line 1424 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 580:
#line 1425 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 581:
#line 1426 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 582:
#line 1427 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 583:
#line 1428 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 584:
#line 1429 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 585:
#line 1432 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 586:
#line 1433 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 587:
#line 1434 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 588:
#line 1437 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 589:
#line 1438 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 590:
#line 1439 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 591:
#line 1442 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 592:
#line 1443 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 593:
#line 1444 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 596:
#line 1448 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 597:
#line 1449 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 598:
#line 1452 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 599:
#line 1455 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 600:
#line 1456 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 601:
#line 1460 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 602:
#line 1462 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 603:
#line 1463 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 610:
#line 1475 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 611:
#line 1477 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 612:
#line 1479 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 613:
#line 1480 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 614:
#line 1482 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 615:
#line 1484 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 616:
#line 1486 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 617:
#line 1488 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 618:
#line 1490 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 620:
#line 1494 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 621:
#line 1495 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 622:
#line 1496 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 623:
#line 1497 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 624:
#line 1498 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 625:
#line 1500 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 626:
#line 1501 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 627:
#line 1502 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 628:
#line 1503 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 629:
#line 1506 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 630:
#line 1510 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 631:
#line 1512 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 632:
#line 1514 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 633:
#line 1516 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 634:
#line 1518 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 635:
#line 1520 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 636:
#line 1522 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 637:
#line 1524 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 638:
#line 1527 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 639:
#line 1529 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 640:
#line 1531 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 646:
#line 1539 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 647:
#line 1540 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 648:
#line 1541 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 649:
#line 1542 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 650:
#line 1543 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 651:
#line 1544 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 652:
#line 1546 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 653:
#line 1548 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 654:
#line 1549 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 655:
#line 1550 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 656:
#line 1551 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 657:
#line 1554 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 658:
#line 1555 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 659:
#line 1556 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 660:
#line 1557 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 661:
#line 1558 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 662:
#line 1560 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 663:
#line 1561 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 664:
#line 1562 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 665:
#line 1563 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 671:
#line 1574 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 672:
#line 1577 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 673:
#line 1580 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 674:
#line 1583 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 675:
#line 1586 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 676:
#line 1589 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 677:
#line 1592 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 678:
#line 1595 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 679:
#line 1598 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 680:
#line 1603 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 681:
#line 1606 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 682:
#line 1609 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 683:
#line 1612 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 684:
#line 1615 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 685:
#line 1618 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 686:
#line 1621 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 687:
#line 1624 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 688:
#line 1627 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 689:
#line 1630 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 690:
#line 1633 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 691:
#line 1638 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 692:
#line 1641 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 693:
#line 1644 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 694:
#line 1647 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 695:
#line 1650 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 696:
#line 1653 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 697:
#line 1656 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 698:
#line 1659 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 699:
#line 1662 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 700:
#line 1667 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 701:
#line 1669 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 702:
#line 1671 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 703:
#line 1673 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 704:
#line 1675 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 705:
#line 1677 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 706:
#line 1682 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 707:
#line 1684 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 708:
#line 1686 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 709:
#line 1690 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 710:
#line 1693 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 711:
#line 1696 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 712:
#line 1699 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 713:
#line 1702 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 714:
#line 1705 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 715:
#line 1708 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 716:
#line 1711 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 717:
#line 1714 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 718:
#line 1717 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 719:
#line 1720 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 720:
#line 1724 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 721:
#line 1725 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 722:
#line 1726 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 723:
#line 1727 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 724:
#line 1728 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 725:
#line 1729 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 726:
#line 1731 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 727:
#line 1733 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 728:
#line 1734 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 729:
#line 1735 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 730:
#line 1736 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 731:
#line 1739 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 732:
#line 1740 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 733:
#line 1741 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 734:
#line 1742 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 735:
#line 1743 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 736:
#line 1745 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 737:
#line 1746 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 738:
#line 1747 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 739:
#line 1748 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 740:
#line 1752 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 741:
#line 1754 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 742:
#line 1755 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 743:
#line 1757 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 744:
#line 1759 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 745:
#line 1761 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 746:
#line 1764 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 747:
#line 1765 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 748:
#line 1768 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 749:
#line 1769 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 750:
#line 1770 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 751:
#line 1773 "frame/parser.Y"
    {;}
    break;

  case 752:
#line 1776 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 753:
#line 1777 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 754:
#line 1778 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 755:
#line 1779 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 756:
#line 1780 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 757:
#line 1781 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 758:
#line 1782 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 759:
#line 1786 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 761:
#line 1794 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 762:
#line 1795 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 763:
#line 1797 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 764:
#line 1799 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 765:
#line 1800 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 766:
#line 1801 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 768:
#line 1802 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 771:
#line 1805 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 772:
#line 1806 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 773:
#line 1808 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 774:
#line 1810 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 775:
#line 1812 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 776:
#line 1815 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 777:
#line 1817 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 778:
#line 1818 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 779:
#line 1820 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 780:
#line 1823 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 781:
#line 1826 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 782:
#line 1830 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 783:
#line 1833 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 784:
#line 1836 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 785:
#line 1839 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 786:
#line 1843 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 787:
#line 1847 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 788:
#line 1852 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 789:
#line 1856 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 790:
#line 1858 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 791:
#line 1859 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 792:
#line 1861 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 793:
#line 1863 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 794:
#line 1865 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 795:
#line 1867 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 796:
#line 1868 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 797:
#line 1870 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 798:
#line 1872 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 799:
#line 1875 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 800:
#line 1879 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 801:
#line 1883 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 802:
#line 1885 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 803:
#line 1887 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 804:
#line 1889 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 805:
#line 1891 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 806:
#line 1893 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 807:
#line 1895 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 808:
#line 1897 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 809:
#line 1899 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 810:
#line 1901 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 811:
#line 1903 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 812:
#line 1905 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 813:
#line 1907 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 814:
#line 1909 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 815:
#line 1910 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 816:
#line 1912 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 817:
#line 1914 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 818:
#line 1915 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 819:
#line 1916 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 820:
#line 1918 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 821:
#line 1920 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 822:
#line 1921 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 823:
#line 1922 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 824:
#line 1923 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 825:
#line 1925 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 826:
#line 1927 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 827:
#line 1931 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 828:
#line 1934 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 829:
#line 1937 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 830:
#line 1941 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 831:
#line 1945 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 832:
#line 1950 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 833:
#line 1954 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 834:
#line 1955 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 835:
#line 1956 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 836:
#line 1958 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 837:
#line 1960 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 838:
#line 1964 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 839:
#line 1965 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 840:
#line 1966 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 841:
#line 1968 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 842:
#line 1971 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 843:
#line 1974 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 844:
#line 1977 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 845:
#line 1978 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 846:
#line 1982 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 847:
#line 1986 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 848:
#line 1988 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 849:
#line 1989 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 850:
#line 1991 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 851:
#line 1994 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 852:
#line 1997 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 853:
#line 1998 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 854:
#line 2000 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 855:
#line 2001 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 856:
#line 2002 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 857:
#line 2004 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 858:
#line 2005 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 859:
#line 2007 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 860:
#line 2010 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 861:
#line 2013 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 862:
#line 2015 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 863:
#line 2016 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 867:
#line 2021 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 868:
#line 2022 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 869:
#line 2024 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 870:
#line 2026 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 871:
#line 2028 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 872:
#line 2029 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 876:
#line 2035 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 877:
#line 2036 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 878:
#line 2037 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 879:
#line 2038 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 880:
#line 2039 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 881:
#line 2040 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 882:
#line 2041 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 883:
#line 2042 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 884:
#line 2043 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 885:
#line 2044 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 886:
#line 2046 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 887:
#line 2048 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 888:
#line 2049 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 889:
#line 2050 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 890:
#line 2051 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 891:
#line 2052 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 892:
#line 2054 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 893:
#line 2055 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 894:
#line 2056 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 895:
#line 2057 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 896:
#line 2058 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 897:
#line 2060 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 898:
#line 2061 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 899:
#line 2062 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 900:
#line 2063 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 901:
#line 2064 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 902:
#line 2065 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 903:
#line 2068 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 904:
#line 2069 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 905:
#line 2070 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 906:
#line 2071 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 907:
#line 2072 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 908:
#line 2073 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 909:
#line 2074 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 910:
#line 2075 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 911:
#line 2076 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 912:
#line 2077 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 913:
#line 2078 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 914:
#line 2079 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 915:
#line 2080 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 916:
#line 2081 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 917:
#line 2082 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 918:
#line 2083 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 919:
#line 2084 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 920:
#line 2085 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 921:
#line 2086 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 922:
#line 2087 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 923:
#line 2088 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 924:
#line 2091 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 925:
#line 2092 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 926:
#line 2093 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 927:
#line 2094 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 928:
#line 2095 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 929:
#line 2097 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 930:
#line 2107 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 931:
#line 2115 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 932:
#line 2124 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 933:
#line 2132 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 934:
#line 2139 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 935:
#line 2146 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 936:
#line 2154 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 937:
#line 2162 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 938:
#line 2167 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 939:
#line 2172 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 940:
#line 2177 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 941:
#line 2182 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 942:
#line 2187 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 943:
#line 2192 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 944:
#line 2197 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 945:
#line 2206 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 946:
#line 2216 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 947:
#line 2226 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 948:
#line 2235 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 949:
#line 2243 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 950:
#line 2253 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 951:
#line 2263 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 952:
#line 2273 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 953:
#line 2285 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 954:
#line 2294 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 956:
#line 2302 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 957:
#line 2304 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 958:
#line 2306 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 959:
#line 2311 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 960:
#line 2314 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 961:
#line 2315 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 962:
#line 2316 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 963:
#line 2323 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 964:
#line 2325 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 965:
#line 2326 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 966:
#line 2329 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 967:
#line 2330 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 968:
#line 2331 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 969:
#line 2332 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 970:
#line 2333 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 971:
#line 2334 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 972:
#line 2335 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 974:
#line 2339 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 975:
#line 2340 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 976:
#line 2341 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 977:
#line 2342 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 978:
#line 2343 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 979:
#line 2346 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 980:
#line 2348 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 981:
#line 2350 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 982:
#line 2352 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 983:
#line 2354 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 984:
#line 2356 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 985:
#line 2358 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 986:
#line 2359 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 987:
#line 2360 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 988:
#line 2362 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 989:
#line 2364 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 990:
#line 2367 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 991:
#line 2369 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 992:
#line 2370 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 993:
#line 2371 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 994:
#line 2373 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 995:
#line 2375 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 996:
#line 2378 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 997:
#line 2381 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 998:
#line 2382 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 999:
#line 2383 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1000:
#line 2384 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1001:
#line 2386 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1002:
#line 2387 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1003:
#line 2388 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1004:
#line 2389 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1005:
#line 2390 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1006:
#line 2392 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1007:
#line 2394 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1008:
#line 2396 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1009:
#line 2398 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1010:
#line 2400 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1011:
#line 2401 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1012:
#line 2403 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1013:
#line 2405 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1014:
#line 2407 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1015:
#line 2408 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1016:
#line 2409 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1017:
#line 2411 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1018:
#line 2413 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1019:
#line 2416 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1020:
#line 2419 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1021:
#line 2420 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1022:
#line 2422 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1023:
#line 2425 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1024:
#line 2428 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1025:
#line 2429 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1026:
#line 2430 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1027:
#line 2431 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1028:
#line 2433 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1029:
#line 2435 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1030:
#line 2437 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1031:
#line 2438 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1032:
#line 2440 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1033:
#line 2441 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1034:
#line 2442 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1035:
#line 2443 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1036:
#line 2444 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1037:
#line 2446 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1038:
#line 2448 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1039:
#line 2450 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1040:
#line 2452 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1042:
#line 2454 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1043:
#line 2455 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1044:
#line 2457 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1045:
#line 2459 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1046:
#line 2460 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1047:
#line 2461 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1049:
#line 2463 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1051:
#line 2467 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1052:
#line 2468 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1053:
#line 2469 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1054:
#line 2470 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1055:
#line 2471 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1056:
#line 2472 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1057:
#line 2474 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1058:
#line 2475 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1059:
#line 2477 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1060:
#line 2480 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1061:
#line 2481 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1062:
#line 2482 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1063:
#line 2483 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1064:
#line 2486 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1065:
#line 2487 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1066:
#line 2490 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1067:
#line 2491 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1068:
#line 2494 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1069:
#line 2495 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1070:
#line 2498 "frame/parser.Y"
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

  case 1071:
#line 2511 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1072:
#line 2512 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1073:
#line 2516 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1074:
#line 2517 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1075:
#line 2521 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1076:
#line 2522 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1077:
#line 2527 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1078:
#line 2531 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1079:
#line 2536 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1080:
#line 2538 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1081:
#line 2541 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::FK5);;}
    break;

  case 1082:
#line 2543 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1083:
#line 2546 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1084:
#line 2548 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1085:
#line 2551 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1086:
#line 2552 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1087:
#line 2553 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1088:
#line 2554 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1089:
#line 2555 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1090:
#line 2556 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1091:
#line 2558 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1094:
#line 2565 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1095:
#line 2566 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1096:
#line 2567 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1097:
#line 2568 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1098:
#line 2569 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1099:
#line 2570 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1102:
#line 2575 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1103:
#line 2576 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1104:
#line 2577 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1105:
#line 2578 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1106:
#line 2579 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1107:
#line 2580 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1108:
#line 2581 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1109:
#line 2582 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1110:
#line 2583 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1111:
#line 2584 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1112:
#line 2585 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1113:
#line 2586 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1116:
#line 2593 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1117:
#line 2594 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1119:
#line 2598 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1120:
#line 2600 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1121:
#line 2601 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1122:
#line 2604 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1123:
#line 2605 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1124:
#line 2606 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1125:
#line 2607 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1126:
#line 2608 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1127:
#line 2609 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1128:
#line 2612 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1129:
#line 2613 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1132:
#line 2621 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1133:
#line 2624 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1134:
#line 2625 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1138:
#line 2632 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1139:
#line 2635 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1140:
#line 2639 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1141:
#line 2640 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1142:
#line 2641 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1143:
#line 2642 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1144:
#line 2643 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1145:
#line 2644 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1146:
#line 2645 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1147:
#line 2646 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1148:
#line 2652 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1149:
#line 2653 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1150:
#line 2654 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1151:
#line 2655 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1152:
#line 2659 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1153:
#line 2660 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1154:
#line 2662 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1155:
#line 2667 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1157:
#line 2669 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1159:
#line 2671 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1160:
#line 2674 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1161:
#line 2676 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1162:
#line 2681 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1163:
#line 2684 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1164:
#line 2685 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1165:
#line 2686 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1166:
#line 2689 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1167:
#line 2691 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1168:
#line 2695 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1169:
#line 2696 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1170:
#line 2700 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1171:
#line 2701 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1172:
#line 2702 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1173:
#line 2703 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1174:
#line 2709 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1175:
#line 2710 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1176:
#line 2716 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1177:
#line 2717 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1178:
#line 2718 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1179:
#line 2719 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1182:
#line 2727 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1183:
#line 2729 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1184:
#line 2730 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1185:
#line 2731 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1186:
#line 2735 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1187:
#line 2736 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1188:
#line 2737 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1189:
#line 2738 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1190:
#line 2741 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1191:
#line 2742 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1192:
#line 2745 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1193:
#line 2746 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1194:
#line 2747 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1195:
#line 2750 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1196:
#line 2751 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1197:
#line 2752 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1198:
#line 2755 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1199:
#line 2756 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1201:
#line 2758 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1202:
#line 2759 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1203:
#line 2762 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1204:
#line 2763 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1205:
#line 2764 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1210:
#line 2771 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1211:
#line 2775 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1212:
#line 2777 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1213:
#line 2779 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1215:
#line 2784 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1216:
#line 2786 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1217:
#line 2788 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1227:
#line 2801 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1228:
#line 2802 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1229:
#line 2803 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1230:
#line 2806 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1231:
#line 2807 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1232:
#line 2808 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1233:
#line 2811 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1234:
#line 2812 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1235:
#line 2813 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1236:
#line 2816 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1237:
#line 2817 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1238:
#line 2818 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1240:
#line 2822 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1241:
#line 2823 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1242:
#line 2824 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1243:
#line 2827 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1244:
#line 2828 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1245:
#line 2829 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1246:
#line 2832 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1247:
#line 2833 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1248:
#line 2834 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1249:
#line 2837 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1250:
#line 2838 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1251:
#line 2839 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1252:
#line 2842 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1253:
#line 2843 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1254:
#line 2844 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1255:
#line 2848 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1256:
#line 2850 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1257:
#line 2852 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1258:
#line 2856 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1259:
#line 2860 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1260:
#line 2862 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1261:
#line 2866 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1262:
#line 2869 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1263:
#line 2870 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1264:
#line 2871 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1265:
#line 2872 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1266:
#line 2875 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1267:
#line 2877 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1268:
#line 2879 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1269:
#line 2882 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1271:
#line 2886 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1272:
#line 2887 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1273:
#line 2888 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1274:
#line 2891 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1275:
#line 2892 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1276:
#line 2896 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1278:
#line 2898 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1281:
#line 2903 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1282:
#line 2904 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1283:
#line 2905 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1284:
#line 2908 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1285:
#line 2909 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1286:
#line 2910 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1287:
#line 2913 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1288:
#line 2915 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1289:
#line 2920 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1290:
#line 2921 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1291:
#line 2924 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1292:
#line 2931 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1293:
#line 2933 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1294:
#line 2935 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1295:
#line 2940 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1297:
#line 2944 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1298:
#line 2945 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1299:
#line 2946 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1300:
#line 2948 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1301:
#line 2950 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1302:
#line 2955 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11161 "frame/parser.C"
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


#line 2959 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

